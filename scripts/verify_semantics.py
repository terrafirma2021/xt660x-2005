"""Check byte-backed catalogue, evidence, test provenance and local document links."""
import hashlib
import json
import re
from map_review import input_review, remaining_questions
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
units=json.loads((OUT/'units_variant_validation.json').read_text())
assert units['result']=='passed' and units['firmware_sha256']==catalog['firmware_sha256']
assert units['test_script_sha256']==digest(ROOT/'scripts/test_units_variants.py')
assert units['conversion_script_sha256']==digest(ROOT/'scripts/decode_units.py')
assert units['compiled_library_sha256']==full['compiled_library_sha256']
consumers=json.loads((OUT/'map_consumer_validation.json').read_text())
assert consumers['result']=='passed' and consumers['firmware_sha256']==catalog['firmware_sha256']
assert consumers['test_script_sha256']==digest(ROOT/'scripts/test_map_consumers.py')
assert consumers['model_script_sha256']==digest(ROOT/'scripts/map_models.py')
assert consumers['compiled_library_sha256']==full['compiled_library_sha256']
for report_name,test_name,model_name in [
    ('spark_schedule_validation.json','test_spark_schedule.py','spark_models.py'),
    ('sensor_variant_validation.json','test_sensor_variants.py','sensor_profiles.py')]:
    report=json.loads((OUT/report_name).read_text())
    assert report['result']=='passed' and report['firmware_sha256']==catalog['firmware_sha256']
    assert report['test_script_sha256']==digest(ROOT/'scripts'/test_name)
    assert report['model_script_sha256']==digest(ROOT/'scripts'/model_name)
    assert report['compiled_library_sha256']==full['compiled_library_sha256']
temperature=json.loads((OUT/'temperature_profile.json').read_text())
crank=json.loads((OUT/'crank_reference_validation.json').read_text())
assert crank['result']=='passed' and crank['firmware_sha256']==catalog['firmware_sha256']
assert crank['test_script_sha256']==digest(ROOT/'scripts/test_crank_reference.py')
assert crank['compiled_library_sha256']==full['compiled_library_sha256']
selectors=json.loads((OUT/'map_selector_validation.json').read_text())
assert selectors['result']=='passed' and selectors['firmware_sha256']==catalog['firmware_sha256']
assert selectors['test_script_sha256']==digest(ROOT/'scripts/test_map_selectors.py')
assert selectors['compiled_library_sha256']==full['compiled_library_sha256']
connector=json.loads((OUT/'connector_path_validation.json').read_text())
assert connector['result']=='passed' and connector['firmware_sha256']==catalog['firmware_sha256']
assert connector['test_script_sha256']==digest(ROOT/'scripts/test_connector_paths.py')
assert connector['compiled_library_sha256']==full['compiled_library_sha256']
assert temperature['firmware_sha256']==catalog['firmware_sha256']
assert temperature['generator_sha256']==digest(ROOT/'scripts/sensor_profiles.py')
physical=json.loads((OUT/'physical_units.json').read_text())
maps=json.loads((ROOT/'analysis/maps.json').read_text())
assert physical['firmware_sha256']==catalog['firmware_sha256']
assert {m['id'] for m in physical['maps']}=={m['id'] for m in maps}
assert all(not m['ready_for_tuning_export'] for m in physical['maps'])
by_id={m['id']:m for m in maps}
assert physical['review_generator_sha256']==digest(ROOT/'scripts/map_review.py')
assert physical['summary']['axes_with_explicit_review']==sum(len(input_review(m)) for m in maps)
for record in physical['maps']:
    m=by_id[record['id']]
    assert record['axis_interpretations']==input_review(m)
    assert record['open_items']==m['unresolved']==remaining_questions(m,record)
    assert len(record['axis_interpretations'])==(1 if m['kind'].startswith('1D_') else 2)
    if record['cell_conversion']=='temperature_celsius_candidate':
        assert record['converted_cell_values']==[[v*.625-30 for v in row] for row in by_id[record['id']]['raw_values']]
    for axis in record['axis_conversions']:
        assert all(p in physical['profiles'] for p in axis['requires'])
        if axis['conversion']=='temperature_celsius_candidate':
            knots=axis.get('raw_ideal_knots')
            if knots is None:knots=by_id[record['id']][axis['axis']]['raw_values']
            assert axis['values']==[v*.625-30 for v in knots]
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
print(f"Verified {len(catalog['calibrations'])} focused calibrations, {len(maps)} unit records, corrected image, instruction bytes, all control/unit-test reports, archive hash and semantic document links.")
