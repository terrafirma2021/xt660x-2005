"""Account for every supplied file, ZIP member and firmware revision without executing XDF formulas."""
import argparse
import hashlib
import itertools
import json
import re
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / 'dataset/files.json'
REPORT = ROOT / 'analysis/firmware/dataset_inventory.json'

def sha(data):
    return hashlib.sha256(data).hexdigest()

def build():
    manifest=json.loads(MANIFEST.read_text(encoding='utf-8'))
    registry=json.loads((ROOT/'firmware/registry.json').read_text(encoding='utf-8'))
    records=[]
    for entry in manifest['files']:
        path=(ROOT/entry['stored_path']).resolve()
        assert path.is_relative_to(ROOT)
        data=path.read_bytes()
        assert sha(data)==entry['sha256'] and len(data)==entry['bytes'],entry['source_path']
        record=dict(entry)
        if path.suffix.lower()=='.zip':
            with zipfile.ZipFile(path) as archive:
                members=[]
                for item in archive.infolist():
                    if item.is_dir():continue
                    assert item.file_size<2_000_000
                    content=archive.read(item)
                    matches=[f['source_path'] for f in manifest['files'] if f['sha256']==sha(content)]
                    members.append(dict(path=item.filename,bytes=len(content),sha256=sha(content),duplicates=matches))
                record['members']=members
        records.append(record)
    images=[]; aligned={}
    for entry in registry['images']:
        data=(ROOT/entry['file']).read_bytes(); base=entry['base_address']
        assert sha(data)==entry['sha256']
        assert data[0x1800-base:].startswith(b'FOR T64 NEW DATAUPDATE')
        aligned[entry['id']]=data[0x1800-base:]
        images.append(dict(id=entry['id'],sha256=sha(data),base_address=base,
            embedded_ascii_ids=[dict(address=f'0x{m.start()+base:04X}',text=m.group().decode()) for m in re.finditer(rb'Y[0-9A-Z]{7}',data)],
            boot_sha256=sha(data[0xf800-base:]),boot_non_ff_bytes=sum(v!=255 for v in data[0xf800-base:])))
    comparisons=[]
    for a,b in itertools.combinations(aligned,2):
        changes=[(i+0x1800,x,y) for i,(x,y) in enumerate(zip(aligned[a],aligned[b])) if x!=y]
        comparisons.append(dict(a=a,b=b,compared_range='0x1800–0xFFFF',different_bytes=len(changes),
            application_different_bytes=sum(i<0xf800 for i,x,y in changes),
            boot_identical=aligned[a][-2048:]==aligned[b][-2048:],
            changes=[dict(address=f'0x{i:04X}',a=x,b=y) for i,x,y in changes] if len(changes)<=32 else None))
    return dict(schema_version=1,source_label=manifest['source_label'],files=records,images=images,pairwise=comparisons,
        counts=dict(source_files=len(records),firmware_files=sum(r['kind']=='firmware' for r in records),
            xdf_files=sum(r['kind']=='definition' for r in records),zip_archives=sum(r['kind']=='archive' for r in records),
            screenshots=sum(r['kind']=='image' for r in records),logs=sum(r['kind']=='edit-log' for r in records),registered_images=len(images)))

if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--check',action='store_true');args=parser.parse_args()
    result=build(); text=json.dumps(result,indent=2)+'\n'
    if args.check:assert REPORT.read_text(encoding='utf-8')==text,'Stale complete inventory'
    else:REPORT.write_text(text,encoding='utf-8',newline='\n')
    print(json.dumps(result['counts']))
