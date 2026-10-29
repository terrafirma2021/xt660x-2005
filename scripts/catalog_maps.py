"""Reproduce byte-exact calibration extracts from Ghidra's instruction exports.

No tuning changes or engineering-unit assumptions are made. Python standard library only.
"""
from pathlib import Path
import csv, json, re, math, hashlib, collections
from map_details import extend, write_dossiers

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'analysis'
BIN = (ROOT / 'firmware/XT660X 2005.bin').read_bytes()
def read_tsv(name):
    with (OUT/name).open(encoding='utf-8') as f:
        return list(csv.DictReader(f, delimiter='\t'))
def save(name, obj):
    (OUT/name).write_text(json.dumps(obj, indent=2)+'\n', encoding='utf-8')
def u16(a): return int.from_bytes(BIN[a:a+2], 'big')
def hx(a): return f'0x{a:04X}'
ROWS=read_tsv('disassembly.tsv')
INS={int(r['address'],16):r for r in ROWS}
def immediate(s,op):
    m=re.fullmatch(op+r' #0x([0-9a-f]+)',s)
    return int(m[1],16) if m else None

# Follow bounded control flow from an explicit LDX #constant to a recognized helper.
# Stop on any potential X clobber or other call. These are structural references,
# not an execution trace and not an assertion that every branch is reachable.
HELPERS={0xc1cd:'uniform_u8_axis_u8_values',0xc1f2:'uniform_u16_axis_u8_values',
         0xc1db:'u8_precomputed_index',0xc28d:'u8_special_grid',0xc32d:'u8_grid',
         0xc499:'u16_grid',0xc4dc:'modulo24_grid',0xc21c:'scalar_scale',0xc227:'scalar_scale_rounded'}
def follow(start):
    q=[(start,0)];seen=set();found=[]
    while q:
        a,depth=q.pop()
        if a in seen or depth>80 or a not in INS:continue
        seen.add(a);r=INS[a];s=r['instruction'];op=s.split()[0]
        if s.startswith('JSR '):
            m=re.fullmatch(r'JSR 0x([0-9a-f]+)',s)
            if m and int(m[1],16) in HELPERS:found.append((a,int(m[1],16)))
            continue
        if op in ('RTS','RTI','STOP','WAI','LDX','XGDX','PULX','INX','DEX','ABX','LEAX'):continue
        n=a+len(r['bytes'])//2
        is_branch=op.startswith('B') and op not in ('BSET','BCLR','BITA','BITB') or op.startswith('LB') or op=='JMP'
        if is_branch:
            m=re.search(r'0x([0-9a-f]+)$',s)
            if m:q.append((int(m[1],16),depth+1))
            if op in ('BRA','LBRA','JMP'):continue
        q.append((n,depth+1))
    return sorted(set(found))

loads=[]
for r in ROWS:
    addr=immediate(r['instruction'],'LDX')
    if addr is not None and 0x1800<=addr<0x5000:
        a=int(r['address'],16)
        loads.append({'base':addr,'load':a,'function':r['function'],
                      'calls':follow(a+len(r['bytes'])//2)})
save('calibration_pointer_loads.json',[dict(base=hx(x['base']),load=hx(x['load']),function=x['function'],
     calls=[{'address':hx(a),'helper':hx(h),'kind':HELPERS[h]} for a,h in x['calls']]) for x in loads])

axes={}
for i,r in enumerate(ROWS):
    if r['instruction'] not in ('JSR 0xca49','JSR 0xc9a9'):continue
    window=ROWS[max(0,i-18):i]
    # Both helpers take axis pointer at $0BA4 and count in A.
    ptr=None;count=None;input_ram=None
    for j,x in enumerate(window):
        s=x['instruction']
        if s=='STD 0xba4' and j:
            v=immediate(window[j-1]['instruction'],'LDD')
            if v is not None:ptr=v
        v=immediate(s,'LDAA')
        if v is not None:count=v
        if s in ('STD 0xba2','STAA 0xba2') and j:
            input_ram=window[j-1]['instruction']
    if ptr is None or count is None or not 0x1800<=ptr<0x5000 or not 1<=count<=128:continue
    width=2 if r['instruction']=='JSR 0xca49' else 1
    vals=[int.from_bytes(BIN[ptr+k*width:ptr+(k+1)*width],'big') for k in range(count)]
    item=axes.setdefault(ptr,{'address':hx(ptr),'count':count,'element_bytes':width,'byte_order':'big',
         'raw_values':vals,'ascending':all(a<=b for a,b in zip(vals,vals[1:])), 'calls':[]})
    item['calls'].append({'call':hx(int(r['address'],16)),'input':input_ram,'function':r['function']})
save('axes.json',list(axes.values()))

# Dimensions and association traced through the index scratch registers and helper arithmetic.
# The helper's X argument is biased before data, so expose actual cell addresses separately.
GRIDS=[
 (0x1b51,45,30,2,0x1b0c,0x1ad0,'main_quantity_A','fuel-related candidate; role and units unverified'),
 (0x2673,45,30,2,0x262e,0x25f2,'main_quantity_B','fuel-related candidate; role and units unverified'),
 (0x3793,45,30,2,0x374e,0x3712,'main_quantity_C','fuel-related candidate; role and units unverified'),
 (0x42ab,32,20,1,0x426e,0x4246,'main_u8_A','timing-related candidate; role and units unverified'),
 (0x452b,32,20,1,0x426e,0x4246,'main_u8_B','timing-related candidate; role and units unverified'),
 (0x47ab,32,20,1,0x426e,0x4246,'main_u8_C','timing-related candidate; role and units unverified'),
 (0x1911,10,13,1,0x18e6,0x18fa,'modulo24_surface','special cyclic interpolation; not plain linear interpolation'),
 (0x1a17,12,15,1,0x1a02,0x19e4,'correction_surface_A','physical role unverified'),
 (0x3165,13,10,1,0x314e,0x313a,'correction_surface_B','physical role unverified'),
 (0x327d,8,12,1,0x3270,0x3258,'correction_surface_C','physical role unverified'),
 (0x4a5d,10,15,1,0x4a56,0x4a46,'correction_surface_D','physical role unverified'),
]
maps=[]
for base,nr,nc,width,ra,ca,name,note in GRIDS:
    start=base+(21 if width==2 else 3);end=start+nr*nc*width
    vals=[int.from_bytes(BIN[a:a+width],'big') for a in range(start,end,width)]
    assert len(vals)==nr*nc and end<=0x5000
    assert axes[ra]['count']==nr and axes[ca]['count']==nc
    maps.append({'id':name,'kind':'2D_grid','confidence':'code-confirmed layout; unverified physical meaning',
       'pointer_base':hx(base),'data_address':hx(start),'end_exclusive':hx(end),
       'rows':nr,'columns':nc,'element_bytes':width,'byte_order':'big','row_axis':axes[ra],
       'column_axis':axes[ca],'physical_role':note,'units':'raw ECU values',
       'calls':[{'pointer_load':hx(x['load']),'calls':[hx(a) for a,h in x['calls']]} for x in loads if x['base']==base],
       'raw_values':[vals[i*nc:(i+1)*nc] for i in range(nr)]})

uniform={}
for x in loads:
    for call,h in x['calls']:
        if h not in (0xc1cd,0xc1f2):continue
        a=x['base'];wide=h==0xc1f2
        minimum=u16(a) if wide else BIN[a];span=u16(a+2) if wide else BIN[a+1];factor=u16(a+4) if wide else BIN[a+2]
        denominator=65536 if wide else 256
        n=math.ceil(span*factor/denominator)+1;start=a+(6 if wide else 3)
        if factor==0 or n>256 or start+n>0x5000:continue
        item=uniform.setdefault(a,{'id':f'curve_{a:04x}','kind':'1D_uniform_axis','confidence':'code-confirmed lookup/header; raw scaling only',
            'pointer_base':hx(a),'data_address':hx(start),'end_exclusive':hx(start+n),'rows':1,'columns':n,
            'element_bytes':1,'input_min_raw':minimum,'input_span_raw':span,'index_factor_raw':factor,
            'index_divisor':denominator,'units':'raw ECU values','raw_values':[list(BIN[start:start+n])],
            'calls':[]})
        item['calls'].append({'pointer_load':hx(x['load']),'call':hx(call),'helper':hx(h),'function':x['function']})
maps.extend(uniform.values())
extend(maps,axes,BIN)
uniform={int(m['pointer_base'],16):m for m in maps if m['kind']=='1D_uniform_axis'}
save('maps.json',maps)
save('axes.json',list(axes.values()))
write_dossiers(maps,OUT,INS)

covered=set()
for m in maps:
    # Biased grid/index pointers are not headers. Only uniform lookups have headers.
    start=m['pointer_base'] if m['kind']=='1D_uniform_axis' else m['data_address']
    covered.update(range(int(start,16),int(m['end_exclusive'],16)))
for a in axes.values():
    start=int(a['address'],16);covered.update(range(start,start+a['count']*a['element_bytes']))
gaps=[];start=None
for a in range(0x1800,0x5001):
    unknown=a<0x5000 and a not in covered
    if unknown and start is None:start=a
    if not unknown and start is not None:
        gaps.append({'start':hx(start),'end_exclusive':hx(a),'bytes':a-start,'raw_hex':BIN[start:a].hex()});start=None
save('uncatalogued_calibration_ranges.json',{'description':'Bytes outside catalogued cells, actual uniform headers, and used explicit axes. Biased grid pointers do not claim header coverage. Includes scalars, flags, unused threshold words and other data; not all are maps.',
    'covered_bytes':len(covered),'uncatalogued_bytes':sum(x['bytes'] for x in gaps),'ranges':gaps})

refs=collections.defaultdict(list)
for r in read_tsv('references.tsv'):
    try:a=int(r['to'],16)
    except ValueError:continue
    if 0x1800<=a<0x5000:refs[a].append(r)
save('calibration_references.json',[{'address':hx(a),'references':v} for a,v in sorted(refs.items())])

mapdir=OUT/'map_extracts';mapdir.mkdir(exist_ok=True)
for m in maps:
    a=int(m['data_address'],16);z=int(m['end_exclusive'],16)
    (mapdir/(m['id']+'.bin')).write_bytes(BIN[a:z])
    (mapdir/(m['id']+'.txt')).write_text('\n'.join([
        f"{m['id']} | {m['data_address']} | {m['rows']} rows x {m['columns']} columns | raw values",
        m['confidence'],*[' '.join(str(v) for v in row) for row in m['raw_values']]])+'\n',encoding='utf-8')

# Exact byte preservation, searchable hexdump, and strings for independent analysis.
(OUT/'calibration-region.bin').write_bytes(BIN[0x1800:0x5000])
(OUT/'firmware.hex.txt').write_text('\n'.join(f'{a:04X}  '+BIN[a:a+16].hex(' ') for a in range(0,len(BIN),16))+'\n')
strings=[{'offset':hx(m.start()),'text':m.group().decode('ascii')} for m in re.finditer(rb'[ -~]{8,}',BIN)]
save('strings.json',strings)
manifest={'filename':'XT660X 2005.bin','bytes':len(BIN),'sha256':hashlib.sha256(BIN).hexdigest(),
 'map_count':len(maps),'grid_count':sum(m['rows']>1 for m in maps),'uniform_curve_count':len(uniform),
 'precomputed_curve_count':sum(m['kind']=='1D_precomputed_axis' for m in maps),
 'sensor_conversion_curve_count':sum(m['kind']=='1D_sensor_conversion' for m in maps),
 'axis_count':len(axes),'referenced_calibration_addresses':len(refs),
 'limits':['No complete original-source recovery','No verified fuel/ignition units','All-FF boot region cannot supply boot code',
           'Unreferenced code entries are candidates','All maps and constants are not claimed to be identified']}
save('manifest.json',manifest)

lines=['# Calibration map atlas','',
 'Addresses below are file offsets and the working flat CPU12 addresses. Actual cell addresses differ from the pointers passed to the lookup helpers.',
 'All cells and axes use raw ECU values. Input/output traces and evidence for every map are in [the per-map breakdown](MAP_DETAILS.md). Physical units and tuning limits remain unresolved. This is an analysis catalogue, not a flash definition.',
 '', '## Confirmed grid layouts','',
 '| ID | Cell address | Rows × columns | Cell width | Row / column axes |',
 '|---|---|---|---|---|']
for m in maps[:len(GRIDS)]:lines.append(f"| {m['id']} | {m['data_address']} | {m['rows']} × {m['columns']} | {m['element_bytes']*8}-bit BE | {m['row_axis']['address']} / {m['column_axis']['address']} |")
lines+=['','## Uniform-axis curves','','| Header | Cells | Points | Input minimum / span / factor |','|---|---|---|---|']
for m in uniform.values():lines.append(f"| {m['pointer_base']} | {m['data_address']} | {m['columns']} | {m['input_min_raw']} / {m['input_span_raw']} / {m['index_factor_raw']} |")
lines+=['','## Computed-axis, sensor and inline step tables','','| ID | Cells | Rows x columns | Method |','|---|---|---|---|']
for m in maps:
    if m['kind'] in ('2D_grid','1D_uniform_axis'):continue
    lines.append(f"| [{m['id']}](map_details/{m['id']}.md) | {m['data_address']} | {m['rows']} x {m['columns']} | {m['kind']} |")
lines+=['','## Evidence and use','',
 '`maps.json` contains every extracted grid/curve, its raw values, axes and caller addresses. `map_extracts/` has byte-exact cell payloads and plain-text matrices.',
 '`axes.json` records code-confirmed axis pointers, counts, raw breakpoints and input load instructions. `calibration_pointer_loads.json` includes pointer loads not yet classified as maps.',
 '`calibration_references.json` records direct references into the entire calibration region. It includes scalar constants and flags, not only maps.',
 '', 'The 16-bit grid helper at 0xC499 uses X + 21 + 2 × (row × columns + column). The byte grid helper at 0xC32D uses X + 3 + row × columns + column. The modulo-24 helper at 0xC4DC uses the byte layout with cyclic interpolation.',
 'The uniform-axis helpers at 0xC1CD and 0xC1F2 clamp the input, multiply its offset by a header factor, then interpolate adjacent byte cells. Their index denominators are 256 and 65536 respectively. The extracted point count includes the upper adjacent cell if a fractional endpoint needs it.',
 '', '## Still unresolved','',
 '- Engineering-unit axis conversions (RPM, pressure, throttle and temperature); several sensor identities are established separately in the control guides.',
 '- Final fuel/timing output scaling and mode-selection semantics.',
 '- Remaining indirect references, scalars, flags and possible tables outside the catalogue; see the explicit coverage gaps. Identifying every map is not claimed.',
 '- Boot/reset code and hardware identity: the final 2 KiB is all FF in the supplied file.',
 '- Exact semantic function boundaries in unreferenced and shared-entry assembly routines.',
 '', 'Do not treat successful decompilation as proof of source-level accuracy or complete map identification.']
(OUT/'MAP_ATLAS.md').write_text('\n'.join(lines)+'\n',encoding='utf-8')
print(json.dumps(manifest,indent=2))
