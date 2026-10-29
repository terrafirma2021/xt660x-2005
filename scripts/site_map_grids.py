"""Read-only, byte-exact HTML heat grids for every recovered map layout."""
from html import escape as esc

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
    rects = []
    for r,row in enumerate(m['raw_values']):
        for c,v in enumerate(row):
            bg,_ = colour(v,lo,hi)
            rects.append(f'<rect x="{c}" y="{r}" width="1.02" height="1.02" fill="{bg}"/>')
    return f'<svg class="map-mini" aria-hidden="true" viewBox="0 0 {m["columns"]} {m["rows"]}" preserveAspectRatio="none">'+''.join(rects)+'</svg>'


def grid(m):
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
        '<div class="grid-title"><h2>Calibration grid</h2><span>RAW ECU VALUES</span></div>',
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
