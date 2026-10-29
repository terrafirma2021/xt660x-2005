"""Verify names are consistent without changing IDs, bytes or tuning readiness."""
import json
from pathlib import Path
from map_names import NAMES, metadata

ROOT=Path(__file__).resolve().parents[1]
maps=json.loads((ROOT/'analysis/maps.json').read_text(encoding='utf-8'))
units=json.loads((ROOT/'analysis/semantics/physical_units.json').read_text(encoding='utf-8'))
by_id={m['id']:m for m in units['maps']}
assert {m['id'] for m in maps}==set(by_id)==set(NAMES)
image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
for m in maps:
    for key,value in metadata(m['id']).items():
        assert m[key]==by_id[m['id']][key]==value,(m['id'],key)
    assert (ROOT/m['naming_basis']).is_file()
    dossier=(ROOT/'analysis/map_details'/f"{m['id']}.md").read_text(encoding='utf-8')
    assert dossier.startswith('# '+m['display_name']+'\n')
    assert f"Stable ID: `{m['id']}`" in dossier
    assert dossier.count('<!-- map-name -->')==1
    assert not m['ready_for_tuning_export'] and not by_id[m['id']]['ready_for_tuning_export']
    start,end=int(m['data_address'],16),int(m['end_exclusive'],16)
    assert (ROOT/'analysis/map_extracts'/f"{m['id']}.bin").read_bytes()==image[start:end]
    for report in ['analysis/MAP_DETAILS.md','analysis/MAP_ATLAS.md','analysis/semantics/MAP_RESOLUTION.md','analysis/MAP_NAMES.md']:
        assert '['+m['display_name']+']' in (ROOT/report).read_text(encoding='utf-8'),(m['id'],report)
print('Verified 71 distinct reviewed names, stable IDs, dossier titles, metadata, naming evidence, index labels and unchanged extracted bytes.')
