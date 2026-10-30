"""Check dataset closure and prevent accidental map/hardware inheritance."""
import json
import hashlib
import re
from pathlib import Path
from dataset_inventory import build
from firmware_catalog import build as firmware_build
ROOT=Path(__file__).resolve().parents[1]
data=json.loads((ROOT/'dataset/vehicles.json').read_text(encoding='utf-8'))
files=json.loads((ROOT/'dataset/files.json').read_text(encoding='utf-8'))['files']
firmware=firmware_build();images={i['id']:i for i in firmware['images']}
inventory=build()
models={m['id'] for m in data['models']};sources={s['id'] for s in data['sources']}
assert len(models)==len(data['models'])
assert len(sources)==len(data['sources'])
assert len({p['id'] for p in data['profiles']})==len(data['profiles'])
assert data['default_profile'] in {p['id'] for p in data['profiles']}
used=set()
for p in data['profiles']:
    assert p['model'] in models and p['source_ids'] and set(p['source_ids'])<=sources
    assert set(p['firmware_ids'])<=images.keys()
    assert all(p[k] for k in ('year','market','ecu','hardware','oxygen','notes','association'))
    used.update(p['firmware_ids'])
    if p['model'] in ('tdm900','xt660z'):
        assert not p['firmware_ids'],'No matched TDM or Z firmware in this dataset'
    if p['hardware']=='early-owner':assert p['id']==data['default_profile']
assert used==images.keys(),'Every registered image needs an explicit vehicle/candidate profile'
assert len({f['source_path'] for f in files})==len(files)
for f in files:
    if f['kind']=='firmware':assert f['sha256'] in {i['sha256'] for i in images.values()}
archives=[f for f in inventory['files'] if f['kind']=='archive']
assert all(m['duplicates'] for f in archives for m in f['members'])
assert sum(not Path(f['source_path']).suffix for f in files if f['kind']=='firmware')==2
assert {i['id'] for i in images.values() if i['shared_map_count']}=={'xt660x-2005-owner','xt660x-2005-checksum-fixed','xt660-2004-2006-companion'}
parts=json.loads((ROOT/'dataset/parts_catalogue.json').read_text(encoding='utf-8'))
profiles={p['id']:p for p in data['profiles']}
for record in parts['records']:
    p=profiles[record['id']]
    assert p['parts_record']==record['id'] and p['year']==record['year'] and p['model']==record['model']
    assert not p['firmware_ids'],'Parts listings alone must not assign firmware'
    assert any(row['role']=='ecu' for row in record['parts'])
    urls={a['url'] for a in record['assemblies']}
    assert len(urls)==3 and all(row['source_url'] in urls for row in record['parts'])
    assert all(record['model_code'].lower() in url for url in urls),'Assembly belongs to another catalogue model'
    for row in record['parts']:
        assert re.fullmatch(r'[A-Z0-9]{3}-[A-Z0-9]{5}-[A-Z0-9]{2}',row['listed_part'])
        assert any(c.isdigit() for c in row['listed_part']),'A descriptive word is not a Yamaha part number'
        if row['replaces']:assert row['replaces']!=row['listed_part']
assert parts['counts']['model_market_records']==len(parts['records'])
assert parts['counts']['part_rows']==sum(len(r['parts']) for r in parts['records'])
for m in data['models']:
    assert m['default_profile'] in profiles and profiles[m['default_profile']]['model']==m['id']
    photo=m['photo'];path=ROOT/'site'/photo['file']
    assert path.is_file() and hashlib.sha256(path.read_bytes()).hexdigest()==photo['sha256']
assert len({m['photo']['file'] for m in data['models']})==len(data['models'])
print(f'Verified {len(models)} models, {len(data["profiles"])} scoped profiles, {len(images)} image records, {len(files)} preserved sources and {len(inventory["pairwise"])} byte comparisons.')
print(f'Verified {len(parts["records"])} catalogue records, {parts["counts"]["part_rows"]} source-linked part rows and four distinct model photographs.')
