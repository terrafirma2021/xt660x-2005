"""Inventory static memory accesses without guessing scalar types from adjacency.

Resolve instruction-local constant COPY chains in exported p-code. Dynamic
addresses remain unknown; a lack of a static read never establishes unused data.
"""
import collections
import hashlib
import json
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'analysis'
image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
maps=json.loads((OUT/'maps.json').read_text())
gaps=json.loads((OUT/'uncatalogued_calibration_ranges.json').read_text())
sem=json.loads((OUT/'semantics/catalog.json').read_text())
accesses=collections.defaultdict(list)
def key(v):return v['space'],v['offset'],v['size']
for line in (OUT/'full/instructions.jsonl').open():
    ins=json.loads(line);known={}
    def value(v):return v['offset'] if v['space']=='const' else known.get(key(v))
    for op in ins['pcode']:
        inputs=op.get('inputs',[]);output=op.get('output');opcode=op['op']
        if opcode in ('LOAD','STORE') and op.get('memory_space','').lower()=='ram':
            addr=value(inputs[1])
            width=output['size'] if opcode=='LOAD' else inputs[2]['size']
            if addr is not None and 0x1800<=addr<0x5000:
                assert addr+width<=0x5000
                a=(addr,width,'read' if opcode=='LOAD' else 'write')
                entry=dict(instruction=f"0x{ins['address']:04X}",assembly=ins['assembly'],function=ins['function'])
                if entry not in accesses[a]:accesses[a].append(entry)
        result=value(inputs[0]) if opcode=='COPY' else None
        if output:
            # Discard overlapping register/unique temporaries, including aliases.
            for k in list(known):
                if k[0]==output['space'] and k[1]<output['offset']+output['size'] and k[1]+k[2]>output['offset']:
                    del known[k]
            if result is not None:known[key(output)]=result&((1<<(output['size']*8))-1)

items=[];accessed=set()
for (a,w,mode),refs in sorted(accesses.items()):
    accessed.update(range(a,a+w))
    intersects=[m['id'] for m in maps if a<int(m['end_exclusive'],16) and a+w>int(m['data_address'],16)]
    items.append(dict(address=f'0x{a:04X}',width_bytes=w,access=mode,raw_hex=image[a:a+w].hex(),
        raw_unsigned_big_endian=int.from_bytes(image[a:a+w],'big'),cell_overlap=intersects,
        role='See semantic catalogue if traced; access width alone does not establish scalar meaning',references=refs))
report=dict(firmware_sha256=hashlib.sha256(image).hexdigest(),entries=len(items),
    description='Instruction-local constant memory accesses. Widths are p-code load/store widths, not inferred table dimensions. Dynamic indexed accesses are excluded.',accesses=items)
(OUT/'calibration_accesses.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')

known_sem=set()
for r in sem['calibrations']:
    a=r['file_offset'];z=a+r['storage']['element_bytes']*r['storage']['count']
    known_sem.update(range(a,z))
unmapped=set()
for g in gaps['ranges']:unmapped.update(range(int(g['start'],16),int(g['end_exclusive'],16)))
classes={}
for a in range(0x1800,0x5000):
    classes[a]=('catalogued_map_header_cells_or_axis' if a not in unmapped else
                'focused_semantic_parameter' if a in known_sem else
                'static_access_role_unresolved' if a in accessed else
                'no_classified_layout_or_static_access')
spans=[];first=0x1800
for a in range(0x1801,0x5001):
    if a==0x5000 or classes[a]!=classes[first]:
        refs=[r for r in items if int(r['address'],16)<a and int(r['address'],16)+r['width_bytes']>first]
        spans.append(dict(start=f'0x{first:04X}',end_exclusive=f'0x{a:04X}',bytes=a-first,
                          status=classes[first],raw_hex=image[first:a].hex(),
                          access_addresses=[r['address'] for r in refs]))
        first=a
totals=dict(collections.Counter(classes.values()))
coverage=dict(first='0x1800',end_exclusive='0x5000',total_bytes=14336,
    description='Byte accounting, not proof that every map or physical meaning is decoded. No-static-access bytes can still be used indirectly.',
    totals=totals,spans=spans)
(OUT/'calibration_coverage.json').write_text(json.dumps(coverage,indent=2)+'\n',encoding='utf-8',newline='\n')
lines=['# Remaining calibration work','',
    'This inventory accounts for every byte in `0x1800–0x4FFF`. Coverage labels record the evidence available; they do not turn unresolved constants into decoded maps. A missing static reference does not mean a byte is safe to edit.','',
    '| Evidence category | Bytes |','|---|---:|']
lines += [f'| {k} | {v} |' for k,v in totals.items()]
lines += ['',f"The access inventory contains **{len(items)} address/width/access combinations** with caller instructions and stock values. Mixed-width accesses are retained separately.",'',
    '[Access inventory](calibration_accesses.json) · [Byte coverage](calibration_coverage.json) · [Per-map breakdown](MAP_DETAILS.md)','',
    '## Outside map layouts','',
    '| Range (end exclusive) | Bytes | Evidence | Static access addresses |','|---|---:|---|---|']
for s in spans:
    if s['status']!='catalogued_map_header_cells_or_axis':
        lines.append(f"| {s['start']}–{s['end_exclusive']} | {s['bytes']} | {s['status']} | {', '.join(s['access_addresses'])} |")
lines += ['', '## Next trace targets','',
    '1. Trace copied configuration fields and indirect pointer consumers; the RAM-copied curve at 0x1854 demonstrates why a ROM-pointer-only scan is incomplete.',
    '2. Decode the remaining scalar scales, mode switches, fault fallback values and lookup selectors using their complete writer/consumer chains.',
    '3. Finish the transient gain paths and spark/fuel corrections through the final timer events; raw input/output traces are already attached to each recovered map.',
    '4. Resolve engineering units using timer configuration, crank geometry and sensor/display transformations; keep unproven Celsius/RPM/degree conversions null.',
    '5. Reconcile ECU identity and missing boot content before validating a flash-oriented tool.','']
(OUT/'REMAINING_CALIBRATIONS.md').write_text('\n'.join(lines),encoding='utf-8',newline='\n')
print(json.dumps(dict(access_entries=len(items),coverage=totals),indent=2))
