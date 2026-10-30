"""Read-only, byte-exact HTML heat grids for every recovered map layout."""
from html import escape as esc
import json

STOPS = [(31, 61, 164), (56, 161, 214), (112, 216, 196), (251, 208, 105), (228, 96, 59)]


def colour(value, lo, hi):
    t = .5 if hi == lo else (value-lo)/(hi-lo)
    segment = min(3, int(t*4))
    f = t*4-segment
    rgb = tuple(round(a+(b-a)*f) for a,b in zip(STOPS[segment], STOPS[segment+1]))
    channels = [v/255 for v in rgb]
    linear = [v/12.92 if v <= .04045 else ((v+.055)/1.055)**2.4 for v in channels]
    luminance = sum(a*b for a,b in zip(linear, [.2126,.7152,.0722]))
    foreground = '#000' if (luminance+.05)/.05 >= 1.05/(luminance+.05) else '#fff'
    return '#'+''.join(f'{v:02x}' for v in rgb), foreground


def axis_labels(m, name, count):
    if m['kind'] == '1D_uniform_axis' and name == 'column_axis':
        knots = [m['input_min_raw']+i*m['index_divisor']/m['index_factor_raw'] for i in range(count)]
        return [f'{v:g}' for v in knots]
    axis = m.get(name)
    if axis is None:
        return [str(i+1) for i in range(count)]
    values = axis['raw_values']
    if m['kind'] == '2D_step_grid':
        assert len(values) == count-1
        return [f'≤ {values[0]}']+[f'{a} < x ≤ {b}' for a,b in zip(values,values[1:])]+[f'> {values[-1]}']
    assert len(values) == count, (m['id'], name)
    return [str(v) for v in values]


def preview(m):
    values = [v for row in m['raw_values'] for v in row]
    lo, hi = min(values), max(values)
    if m['rows']==1:
        xs=[float(x) for x in axis_labels(m,'column_axis',m['columns'])]
        points=' '.join(('M' if i==0 else 'L')+f'{5+(x-xs[0])/(xs[-1]-xs[0] or 1)*390:.2f},{50 if hi==lo else 92-(v-lo)/(hi-lo)*84:.2f}' for i,(x,v) in enumerate(zip(xs,values)))
        return f'<svg class="map-mini curve-mini" aria-hidden="true" viewBox="0 0 400 100" preserveAspectRatio="none"><path d="{points}"/></svg>'
    rects = []
    for r,row in enumerate(m['raw_values']):
        for c,v in enumerate(row):
            bg,_ = colour(v,lo,hi)
            rects.append(f'<rect x="{c}" y="{r}" width="1.02" height="1.02" fill="{bg}"/>')
    return f'<svg class="map-mini" aria-hidden="true" viewBox="0 0 {m["columns"]} {m["rows"]}" preserveAspectRatio="none">'+''.join(rects)+'</svg>'


def curve(m, temperature=None):
    if m['rows'] != 1:
        return ''
    sensor = m['kind']=='1D_sensor_conversion'
    knots = [float(x) for x in axis_labels(m,'column_axis',m['columns'])]
    values = m['raw_values'][0]
    if sensor:
        prefix='coolant' if m['id']=='coolant_sensor_conversion' else 'intake'
        samples=[[r['adc10'],r[prefix+'_code']] for r in temperature['all_adc_values']]
        note='The line shows the decoded lookup output for every ADC input (0–1023), including integer rounding and clamping. Dots mark stored table knots. Fault replacement is a separate path.'
        physical_label='Coolant °C — owner-corroborated' if prefix=='coolant' else 'Candidate °C — conditional'
        controls='<label>Display scale <select class="curve-scale"><option value="raw">Internal temperature code</option><option value="candidate">'+physical_label+'</option></select></label>'
        controls+='<label class="adc-control">ADC input <input class="curve-adc" type="range" min="0" max="1023" value="512" step="1"></label>'
        warning='<p class="curve-assumption">'+('Coolant °C = code × 0.625 − 30. Corroborated by the owner’s XT660 logger check and firmware arithmetic. Sensor accuracy and the manual’s fault-temperature discrepancy remain open.' if prefix=='coolant' else 'Candidate IAT °C = code × 0.625 − 30. Resistance-fit evidence supports this scale; the owner’s coolant check does not independently verify IAT.')+'</p>'
    else:
        samples=list(zip(knots,values))
        note='Dots show stored cells at their raw input knots. The connecting line is a visual guide; caller rounding, clamping and conditional paths still apply.'
        controls=''
        warning=''
    xmin,xmax=samples[0][0],samples[-1][0]
    ymin,ymax=min(v for _,v in samples),max(v for _,v in samples)
    if ymin==ymax:ymin-=1;ymax+=1
    px=lambda x:70+(x-xmin)/(xmax-xmin or 1)*790
    py=lambda y:260-(y-ymin)/(ymax-ymin)*210
    path=' '.join(('M' if i==0 else 'L')+f'{px(x):.3f},{py(y):.3f}' for i,(x,y) in enumerate(samples))
    marks=''
    for i in range(5):
        x=xmin+(xmax-xmin)*i/4;y=ymin+(ymax-ymin)*i/4
        if sensor:x=round(x)
        marks+=f'<line class="curve-guide" x1="70" x2="860" y1="{py(y)}" y2="{py(y)}"/><text class="curve-y-tick" x="59" y="{py(y)+4}" text-anchor="end">{y:g}</text><text class="curve-x-tick" x="{px(x)}" y="282" text-anchor="middle">{x:g}</text>'
    dots=''.join(f'<circle class="curve-knot" data-cell="{i}" cx="{px(x):.3f}" cy="{py(v):.3f}" r="4"><title>Input {x:g}; raw {v}; cell {i+1}</title></circle>' for i,(x,v) in enumerate(zip(knots,values)) if xmin<=x<=xmax)
    data=dict(samples=samples,knots=list(zip(knots,values)),sensor=sensor,xmin=xmin,xmax=xmax,ymin=ymin,ymax=ymax)
    if sensor:data['physical_label']=physical_label;data['coolant_corroborated']=prefix=='coolant'
    label='ADC input (10-bit count)' if sensor else 'Raw input coordinate'
    return (f'<div class="curve-view"><div class="curve-controls">{controls}</div>{warning}'
        f'<svg class="curve-plot" viewBox="0 0 900 320" role="img" aria-label="{esc(m["display_name"])} curve, raw input against internal output code"><text class="curve-y-label" x="70" y="25">{"Internal temperature code" if sensor else "Raw cell value"}</text>{marks}<path class="curve-line" d="{path}"/>{dots}<circle class="curve-probe" cx="70" cy="50" r="6" visibility="hidden"/><text class="curve-x-label" x="465" y="311" text-anchor="middle">{label}</text></svg>'
        '<output class="curve-reading" aria-live="polite"></output>'
        f'<p class="curve-note">{note}</p><script type="application/json" class="curve-data">{json.dumps(data).replace("<",chr(92)+"u003c")}</script></div>')


def grid(m, temperature=None):
    values = [v for row in m['raw_values'] for v in row]
    lo, hi = min(values), max(values)
    rows = axis_labels(m,'row_axis',m['rows'])
    cols = axis_labels(m,'column_axis',m['columns'])
    axes = '; '.join(m['inputs'])
    note = 'Headers use raw axis coordinates. Colours span this map’s own minimum and maximum.'
    if m['kind'] == '1D_uniform_axis':
        note += ' Uniform headers are ideal knot positions; a final knot can lie beyond the clamped input span.'
    elif m['kind'] == '2D_step_grid':
        note += ' Headers show bins; equality stays in the lower bin. Colours show stored codes, not an interpolated surface.'
    if lo == hi:
        note += f' All {len(values)} cells contain {lo}; this map is constant.'
    legend_style=' style="background:'+colour(lo,lo,hi)[0]+'"' if lo==hi else ''
    parts = [f'<section class="calibration-grid" id="calibration-grid" data-map="{m["id"]}" data-columns="{m["columns"]}">',
        f'<div class="grid-title"><h2>{"Curve & cells" if m["rows"]==1 else "Calibration grid"}</h2><span>RAW ECU VALUES</span></div>',
        curve(m,temperature),
        f'<p class="grid-source">{esc(axes)}</p>',
        f'<div class="grid-tools"><label><input type="checkbox" class="grid-colours" checked> Colour cells</label><div class="grid-legend"><span>{lo}</span><i aria-hidden="true"{legend_style}></i><span>{hi}</span><span>{"Constant" if lo==hi else "Low → high"}</span></div></div>',
        f'<p class="grid-note">{esc(note)} Select a cell or use the arrow keys to inspect its address.</p>',
        f'<output class="grid-inspector" aria-live="polite">Row 1 · Column 1 · {rows[0]} / {cols[0]} · Raw {values[0]} · {m["data_address"]}</output>',
        '<div class="grid-scroll" tabindex="0" role="region" aria-label="Scrollable calibration values"><table class="cell-grid">',
        f'<caption class="grid-sr-only">{esc(m["display_name"])}: {m["rows"]} rows, {m["columns"]} columns; raw values.</caption>',
        '<thead><tr><th scope="col" class="grid-corner">ROW / COL</th>']
    parts += [f'<th scope="col">{esc(label)}</th>' for label in cols]
    parts += ['</tr></thead><tbody>']
    for r,row in enumerate(m['raw_values']):
        parts.append(f'<tr><th scope="row">{esc(rows[r])}</th>')
        for c,value in enumerate(row):
            address = int(m['data_address'],16)+(r*m['columns']+c)*m['element_bytes']
            bg,fg = colour(value,lo,hi)
            label = f'Row {r+1} · Column {c+1} · {rows[r]} / {cols[c]} · Raw {value} · 0x{address:04X}'
            parts.append(f'<td><button type="button" class="map-cell" tabindex="{0 if r==c==0 else -1}" data-value="{value}" data-address="0x{address:04X}" data-row="{r}" data-column="{c}" style="--cell-bg:{bg};--cell-fg:{fg}" aria-label="{esc(label,quote=True)}" title="{esc(label,quote=True)}">{value}</button></td>')
        parts.append('</tr>')
    parts += ['</tbody></table></div></section>']
    return ''.join(parts)
