"""Account for every input byte and index every recovered function/edge."""
from pathlib import Path
import csv,json,hashlib,collections
R=Path(__file__).resolve().parents[1];A=R/'analysis';F=A/'full'
b=(R/'firmware/XT660X 2005.bin').read_bytes()
rows=[json.loads(s) for s in (F/'instructions.jsonl').read_text().splitlines()]
instructions={r['address']:r for r in rows};classification=['']*65536
for r in rows:
    a=r['address'];data=bytes.fromhex(r['bytes']);assert b[a:a+len(data)]==data
    assert r['function_entry'] is not None,hex(a)
    for i in range(a,a+len(data)):assert not classification[i];classification[i]='instruction'
for a in range(65536):
    if classification[a]:continue
    if a<0x1800:kind='file_fill_over_io_ram'
    elif a<0x5000:kind='calibration_data'
    elif 0x56cb<=a<0x56d0:kind='embedded_data'
    elif 0x6948<=a<0x6978:kind='dispatch_pointer_data'
    elif 0xc255<=a<0xc268:kind='embedded_data'
    elif a==0x6947 or 0xb8e4<=a<0xb900:kind='padding'
    elif 0xf779<=a<0xf7a0:kind='metadata'
    elif a==0xf7a3:kind='unreachable_nop_padding'
    elif 0xf7ee<=a<0xf800:kind='trailer'
    elif a>=0xf800:kind='unavailable_boot_ff'
    else:raise AssertionError(('unclassified byte',hex(a)))
    classification[a]=kind
spans=[];start=0
for a in range(1,65537):
    if a==65536 or classification[a]!=classification[start]:
        spans.append({'start':f'0x{start:04X}','end_exclusive':f'0x{a:04X}','bytes':a-start,'classification':classification[start]});start=a
coverage={'input_bytes':65536,'classified_bytes':len(classification),'unclassified_bytes':0,
          'instruction_count':len(rows),'instructions_without_function':sum(r['function_entry'] is None for r in rows),
          'byte_totals':dict(collections.Counter(classification)),'spans':spans}
(F/'byte_coverage.json').write_text(json.dumps(coverage,indent=2)+'\n')

# Every byte is present either in an instruction's byte column or a .byte directive.
lines=['; Whole supplied 64 KiB image. Byte-faithful listing, not an assembler-specific build source.']
reconstructed=bytearray();a=0
while a<65536:
    if a in instructions:
        r=instructions[a];data=bytes.fromhex(r['bytes'])
        lines.append(f"{a:04X}  {data.hex(' '):<17}  {r['assembly']:<30} ; {r['function']}")
    else:
        z=a+1
        while z<min(a+16,65536) and z not in instructions and classification[z]==classification[a]:z+=1
        data=b[a:z];lines.append(f"{a:04X}  {data.hex(' '):<47}  .byte "+','.join(f'0x{x:02x}' for x in data)+f' ; {classification[a]}')
    reconstructed.extend(data);a+=len(data)
assert reconstructed==b
(F/'whole_image.asm').write_text('\n'.join(lines)+'\n')
(F/'firmware_data.c').write_text('#include <stdint.h>\n/* Original file bytes, including FF placeholders; not runtime RAM initialization. */\nconst uint8_t xt660_original_image[65536] = {\n'+
    '\n'.join('  '+','.join(f'0x{x:02x}' for x in b[a:a+16])+f', /* {a:04X} */' for a in range(0,65536,16))+'\n};\n')

with (A/'functions.tsv').open() as f:functions=list(csv.DictReader(f,delimiter='\t'))
grouped=collections.defaultdict(list)
for r in rows:grouped[r['function_entry']].append(r)
index=[];edges=[]
for fn in functions:
    entry=int(fn['entry'],16);code=grouped[entry];calls=[]
    for r in code:
        if 'CALL' in r['flow_type']:
            calls.append({'site':f"0x{r['address']:04X}",'targets':[f'0x{x:04X}' for x in r['flows']],
                          'computed':r['assembly']=='JSR 0,IX'})
        for target in r['flows']:edges.append({'from':r['address'],'to':target,'kind':r['flow_type']})
        if r.get('fallthrough') is not None:edges.append({'from':r['address'],'to':r['fallthrough'],'kind':'fallthrough'})
    index.append({'entry':f'0x{entry:04X}','name':fn['name'],'status':fn['status'],
                  'instruction_count':len(code),'instruction_bytes':sum(len(r['bytes'])//2 for r in code),
                  'structured_c':f"../functions/{fn['entry']}_{fn['name']}.c" if fn['status']=='ok' else None,
                  'calls':calls,'candidate_entry':fn['name'].startswith('candidate_unreferenced_')})
(F/'function_index.json').write_text(json.dumps(index,indent=2)+'\n')
(F/'control_flow.json').write_text(json.dumps(edges,separators=(',',':'))+'\n')
md=['# Complete function index','','Every decoded instruction belongs to one of these entries. Candidate entries and shared assembly tails are not claims about the original source function boundaries.','',
    '| Entry | Routine / structured C | Instructions | Bytes | Call sites |','|---|---|---:|---:|---:|']
for f in index:
    link=f"[{f['name']}]({f['structured_c']})" if f['structured_c'] else f"{f['name']} — unavailable"
    md.append(f"| {f['entry']} | {link} | {f['instruction_count']} | {f['instruction_bytes']} | {len(f['calls'])} |")
(F/'FUNCTION_INDEX.md').write_text('\n'.join(md)+'\n')
indirect=[]
for site,ptr,n in [(0x68e7,0x6968,8),(0x6984,0x6958,4),(0x6993,0x6960,4)]:
    indirect.append({'call':f'0x{site:04X}','table':f'0x{ptr:04X}','targets':[f'0x{int.from_bytes(b[p:p+2],"big"):04X}' for p in range(ptr,ptr+2*n,2)],
                     'condition':'0x68E7 masks index to 3 bits. Secondary tables assume incoming carry=0, as supplied by the primary dispatch ASLB; their raw C translation also preserves other carry states.'})
(F/'indirect_calls.json').write_text(json.dumps(indirect,indent=2)+'\n')
print(json.dumps({k:v for k,v in coverage.items() if k!='spans'},indent=2))
