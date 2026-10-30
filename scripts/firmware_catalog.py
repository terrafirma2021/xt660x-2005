"""Identity and byte-backed applicability checks for the firmware library."""
import argparse
import csv
import hashlib
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
REGISTRY = ROOT / 'firmware/registry.json'
REPORT = ROOT / 'analysis/firmware/catalog.json'


def digest(data):
    return hashlib.sha256(data).hexdigest()


def build():
    registry = json.loads(REGISTRY.read_text(encoding='utf-8'))
    maps = json.loads((ROOT/'analysis/maps.json').read_text(encoding='utf-8'))
    images, rows, ids = {}, [], set()
    for entry in registry['images']:
        key = entry['id']
        assert re.fullmatch(r'[a-z0-9]+(?:-[a-z0-9]+)*', key) and key not in ids
        ids.add(key)
        path = (ROOT/entry['file']).resolve()
        assert path.is_relative_to((ROOT/'firmware').resolve()) and path.suffix == '.bin'
        data = path.read_bytes()
        assert digest(data) == entry['sha256'], f'Changed firmware: {key}'
        base = entry['base_address']
        assert isinstance(base, int) and 0 <= base < 65536 and 0 < len(data) <= 65536-base
        images[key] = (base, data)
    primary = registry['primary_id']
    assert primary in images
    def span(key, a, b):
        base, data = images[key]
        return data[a-base:b-base] if base <= a <= b <= base+len(data) else None
    for entry in registry['images']:
        key = entry['id']; base, data = images[key]
        row = dict(entry, size=len(data), end_address=base+len(data)-1)
        app = span(key, 0x1800, 0xF800)
        boot = span(key, 0xF800, 0x10000)
        row['startup_checksum'] = None if app is None else f'{sum(int.from_bytes(app[i:i+2],"big") for i in range(0,len(app),2)) & 65535:04X}'
        row['boot_status'] = 'not covered' if boot is None else ('FF placeholder' if all(v==255 for v in boot) else 'populated')
        row['boot_sha256'] = None if boot is None else digest(boot)
        row['reset_vector'] = None if boot is None else f'{int.from_bytes(boot[-2:],"big"):04X}'
        reference = span(primary, 0x1800, 0xF800)
        diffs = [] if app is None else [i+0x1800 for i,(a,b) in enumerate(zip(app,reference)) if a!=b]
        row['application_differences_from_primary'] = None if app is None else len(diffs)
        row['changed_application_addresses'] = [f'{a:04X}' for a in diffs] if len(diffs)<=32 else []
        row['shared_map_count'] = 0
        if entry.get('map_catalog') == 'primary':
            for m in maps:
                a,b = int(m['data_address'],16),int(m['end_exclusive'],16)
                assert span(key,a,b) == span(primary,a,b), (key,m['id'],'cells')
                for axis in ('row_axis','column_axis'):
                    ax=m.get(axis)
                    if isinstance(ax,dict) and ax.get('address') and ax.get('count') and ax.get('element_bytes'):
                        a=int(ax['address'],16); b=a+ax['count']*ax['element_bytes']
                        assert span(key,a,b) == span(primary,a,b),(key,m['id'],axis)
            # Explicit reviewed exceptions, never infer shared control behavior
            # from a similar filename or identical map cells alone.
            assert diffs == [int(a,16) for a in entry['reviewed_application_changes']]
            row['shared_map_count']=len(maps)
        rows.append(row)
    return dict(schema_version=1, primary_id=primary, images=rows,
        registry_sha256=digest(REGISTRY.read_bytes()),
        maps_sha256=digest((ROOT/'analysis/maps.json').read_bytes()))


def verify_boot():
    folder=ROOT/'analysis/firmware/xt660-2004-2006-companion/boot'
    data=(ROOT/'firmware/images/xt660-2004-2006-companion.bin').read_bytes()
    covered=set()
    with (folder/'disassembly.tsv').open(encoding='utf-8') as f:
        instructions=list(csv.DictReader(f,delimiter='\t'))
    for row in instructions:
        a=int(row['address'],16); b=bytes.fromhex(row['bytes'])
        assert 0xf800<=a<a+len(b)<=0x10000
        assert data[a-0x1800:a-0x1800+len(b)]==b
        assert not covered.intersection(range(a,a+len(b)))
        covered.update(range(a,a+len(b)))
    listing=set()
    for line in (folder/'boot_bytes.asm').read_text().splitlines():
        address,raw,*_=line.split(); a=int(address,16); b=bytes.fromhex(raw)
        assert data[a-0x1800:a-0x1800+len(b)]==b
        assert not listing.intersection(range(a,a+len(b)))
        listing.update(range(a,a+len(b)))
    assert listing==set(range(0xf800,0x10000))
    with (folder/'functions.tsv').open() as f: functions=list(csv.DictReader(f,delimiter='\t'))
    return dict(source_sha256=digest(data), instruction_count=len(instructions),
        instruction_bytes=len(covered), bytes_accounted_for=len(listing),
        functions=len(functions), functions_decompiled=sum(r['decompiled']=='true' for r in functions),
        verification='Extracted bytes and complete region accounting; not execution or hardware validation',
        artifacts={p.name:digest(p.read_bytes()) for p in sorted(folder.iterdir()) if p.suffix in ('.tsv','.c','.asm')},
        exporter_sha256=digest((ROOT/'scripts/AnalyzeCompanionBoot.java').read_bytes()),
        processor_sha256=digest((ROOT/'ghidra/XT660CPU12/data/languages/HCS_HC12.sinc').read_bytes()))


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--check',action='store_true');args=parser.parse_args()
    for path,result in [(REPORT,build()),(REPORT.parent/'xt660-2004-2006-companion/boot/verification.json',verify_boot())]:
        encoded=json.dumps(result,indent=2)+'\n'
        if args.check: assert path.read_text(encoding='utf-8')==encoded,f'Stale report: {path}'
        else: path.parent.mkdir(parents=True,exist_ok=True);path.write_text(encoded,encoding='utf-8',newline='\n')
    print('Verified firmware identities, shared map cells/axes, reviewed application differences and all 2048 companion boot bytes.')
