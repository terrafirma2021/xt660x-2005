"""Check byte integrity, nonoverlapping instruction decoding, and map extracts."""
import csv, hashlib, json
from pathlib import Path
root=Path(__file__).resolve().parents[1];out=root/'analysis'
b=(root/'firmware/XT660X 2005.bin').read_bytes()
assert len(b)==65536
assert hashlib.sha256(b).hexdigest()=='5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280'
assert b[:0x1800]==bytes([255])*0x1800 and b[0xf800:]==bytes([255])*0x800
seen=set();n=0
with (out/'disassembly.tsv').open() as f:
    for r in csv.DictReader(f,delimiter='\t'):
        a=int(r['address'],16);data=bytes.fromhex(r['bytes'])
        assert b[a:a+len(data)]==data,(a,'instruction bytes differ')
        assert 0x5000<=a<0xf779 or 0xf7a0<=a<0xf7ee,(a,'outside supplied code regions')
        occupied=set(range(a,a+len(data)))
        assert not seen & occupied,(a,'overlapping decode')
        seen |= occupied;n+=1
maps=json.loads((out/'maps.json').read_text());axes=json.loads((out/'axes.json').read_text())
occupied_maps=set()
for m in maps:
    a=int(m['data_address'],16);z=int(m['end_exclusive'],16);w=m['element_bytes']
    assert len(m['raw_values'])==m['rows'] and all(len(row)==m['columns'] for row in m['raw_values'])
    data=b''.join(v.to_bytes(w,'big') for row in m['raw_values'] for v in row)
    assert len(data)==z-a and data==b[a:z]==(out/'map_extracts'/(m['id']+'.bin')).read_bytes()
    assert not occupied_maps.intersection(range(a,z)),m['id']
    occupied_maps.update(range(a,z))
for a in axes:
    start=int(a['address'],16);w=a['element_bytes']
    assert b''.join(v.to_bytes(w,'big') for v in a['raw_values'])==b[start:start+w*a['count']]
    assert a['ascending'],a['address']
with (out/'functions.tsv').open() as f:fs=list(csv.DictReader(f,delimiter='\t'))
for f in fs:
    if f['status']=='ok':
        path=out/'functions'/f"{f['entry']}_{f['name']}.c"
        assert path.exists() and f"/* Entry {f['entry']} */" in path.read_text()
report={'original_sha256_verified':True,'instruction_count':n,'instruction_bytes':len(seen),
        'map_extracts_verified':len(maps),'axis_extracts_verified':len(axes),
        'decoded_calibration_cell_bytes':len(occupied_maps),'functions_decompiled':sum(f['status']=='ok' for f in fs),
        'functions_failed':sum(f['status']=='failed' for f in fs),'unavailable_targets':[f['entry'] for f in fs if f['status']=='unavailable'],
        'limitations':'Integrity checks validate extraction, not physical map meaning or decompiler semantics.'}
(out/'verification.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
