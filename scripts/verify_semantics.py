"""Check byte-backed catalogue, evidence, test provenance and local document links."""
import hashlib
import json
import re
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/'analysis/semantics'
def digest(p):return hashlib.sha256(p.read_bytes()).hexdigest()
image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
catalog=json.loads((OUT/'catalog.json').read_text())
assert catalog['firmware_sha256']==hashlib.sha256(image).hexdigest()
assert catalog['processor_model_sha256']==digest(ROOT/'ghidra/XT660CPU12/data/languages/HCS_HC12.sinc')
assert len({r['id'] for r in catalog['calibrations']})==len(catalog['calibrations'])
for record in catalog['calibrations']:
    offset=record['file_offset'];storage=record['storage']
    size=storage['element_bytes']*storage['count']
    assert bytes.fromhex(record['stock_hex'])==image[offset:offset+size],record['id']
    assert record['engineering_decode'] is None and not record['ready_for_tuning_export']
for evidence in OUT.glob('*_evidence.txt'):
    for line in evidence.read_text().splitlines():
        match=re.match(r'^([0-9a-f]{4})  ([0-9a-f]+)\s+',line)
        if match:
            offset=int(match[1],16);data=bytes.fromhex(match[2])
            assert image[offset:offset+len(data)]==data
tests=json.loads((OUT/'control_validation.json').read_text())
full=json.loads((ROOT/'analysis/full/validation.json').read_text())
assert tests['result']==full['result']=='passed'
assert tests['firmware_sha256']==catalog['firmware_sha256']
assert tests['test_script_sha256']==digest(ROOT/'scripts/test_control_semantics.py')
assert tests['compiled_library_sha256']==full['compiled_library_sha256']
extended=json.loads((OUT/'extended_map_validation.json').read_text())
assert extended['result']=='passed'
assert extended['firmware_sha256']==catalog['firmware_sha256']
assert extended['test_script_sha256']==digest(ROOT/'scripts/test_extended_maps.py')
assert extended['compiled_library_sha256']==full['compiled_library_sha256']
fixed_path=ROOT/'firmware/XT660X 2005 startup-checksum-fixed.bin'
fixed=fixed_path.read_bytes()
fix=json.loads((OUT/'checksum_fix.json').read_text())
assert digest(fixed_path)==fix['output_sha256']==extended['corrected_image_sha256']
assert fix['source_sha256']==catalog['firmware_sha256']
assert [a for a in range(len(image)) if image[a]!=fixed[a]]==[0xf7fd]
assert fixed[0xf7fd]==0x7f and len(fixed)==len(image)
assert sum(int.from_bytes(fixed[a:a+2],'big') for a in range(0x1800,0xf800,2))&65535==0xaa55
assert full['raw_ir_sha256']==digest(ROOT/'analysis/full/instructions.jsonl')
source_hash=hashlib.sha256(b''.join(p.name.encode()+p.read_bytes() for p in sorted((ROOT/'analysis/full/c').iterdir()) if p.suffix in ('.c','.h'))).hexdigest()
assert full['c_sources_sha256']==source_hash
archive=json.loads((ROOT/'analysis/archive-verification.json').read_text())
assert archive['sha256']==digest(ROOT/'analysis/XT660X-2005.gzf')
for doc in OUT.glob('*.md'):
    for target in re.findall(r'\]\(([^)]+)\)',doc.read_text(encoding='utf-8')):
        if '://' in target or target.startswith('#'):continue
        target=target.split('#')[0].replace('%20',' ')
        assert (doc.parent/target).exists(),(doc.name,target)
print(f"Verified {len(catalog['calibrations'])} focused calibrations, corrected image, instruction bytes, both control-test reports, archive hash and semantic document links.")
