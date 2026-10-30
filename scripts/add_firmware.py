"""Register a new immutable BIN as unreviewed; never inherit tuning claims."""
import argparse
import json
import re
from pathlib import Path
from firmware_catalog import ROOT, REGISTRY, digest


def add(source, key, label, base, years, provenance):
    if not re.fullmatch(r'[a-z0-9]+(?:-[a-z0-9]+)*',key): raise ValueError('ID must contain lowercase letters, digits and single hyphens')
    data=source.read_bytes()
    if not 0<=base<65536 or not 0<len(data)<=65536-base: raise ValueError('File does not fit the declared 16-bit address range')
    registry=json.loads(REGISTRY.read_text(encoding='utf-8'))
    if any(r['id']==key or r['sha256']==digest(data) for r in registry['images']): raise ValueError('This ID or exact binary is already registered')
    path=ROOT/'firmware/images'/f'{key}.bin';path.parent.mkdir(exist_ok=True)
    entry=dict(id=key,label=label,file=path.relative_to(ROOT).as_posix(),sha256=digest(data),
        base_address=base,claimed_years=years,year_evidence='Contributor claim; not independently verified',
        provenance=provenance,kind='contributed image',analysis_status='Unreviewed',map_catalog=None,
        notes='Imported without decoding, map inheritance or flash validation.')
    registry['images'].append(entry)
    with path.open('xb') as f:f.write(data)
    try:
        temp=REGISTRY.with_suffix('.json.tmp')
        temp.write_text(json.dumps(registry,indent=2)+'\n',encoding='utf-8',newline='\n')
        temp.replace(REGISTRY)
    except Exception:
        path.unlink()  # Only the new file this operation created.
        raise
    return entry


if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('source',type=Path);p.add_argument('--id',required=True);p.add_argument('--label',required=True)
    p.add_argument('--base-address',required=True,type=lambda s:int(s,0))
    p.add_argument('--claimed-years',default='Unknown');p.add_argument('--provenance',required=True)
    a=p.parse_args()
    try:entry=add(a.source,a.id,a.label,a.base_address,a.claimed_years,a.provenance)
    except (ValueError,FileExistsError) as e:p.error(str(e))
    print('Registered '+entry['id']+' as unreviewed. Run firmware_catalog.py and build_pages.py; review, commit and push to publish.')
