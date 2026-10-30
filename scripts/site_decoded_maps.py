"""Static, per-BIN map grids; never render another image's calibration values."""
import json
from html import escape as esc
from pathlib import Path
from site_map_grids import grid,preview
ROOT=Path(__file__).resolve().parents[1]
def build(shell,write,repo):
    report=json.loads((ROOT/'analysis/firmware/decode_catalog.json').read_text())
    registry=json.loads((ROOT/'firmware/registry.json').read_text())
    labels={i['id']:i['label'] for i in registry['images']}
    for image in report['images']:
        key=image['id'];maps=json.loads((ROOT/image['maps_path']).read_text(encoding='utf-8'));cards=[]
        for m in maps:
            target=f'firmware/{key}/maps/{m["id"]}/index.html'
            evidence=m.get('consumer_traces') or m.get('calls') or m.get('evidence_addresses') or []
            body=f'<div class="page-heading"><div class="kicker">{esc(labels[key])}</div><h1>{esc(m["display_name"])}</h1><p>{m["data_address"]} · {m["rows"]} × {m["columns"]} · {m["element_bytes"]*8}-bit · {image["family"]} application</p></div><p><a href="../">← Maps for this BIN</a> · <a href="../../">Firmware record ↗</a></p><div class="notice">Values are extracted from this exact BIN. Physical-unit scaling is not independently verified for this image.</div>'
            body+='<article class="document">'+grid(m)+'</article>'
            body+=f'<section class="document"><h2>Lookup and consumer evidence</h2><p>{esc(m.get("physical_role") or m.get("naming_note") or m["confidence"])}</p><p>Cell payload SHA-256: <code>{m["cells_sha256"]}</code></p><details><summary>Instruction addresses and dataflow</summary><pre>{esc(json.dumps(evidence,indent=2))}</pre></details><p><a href="{repo}/blob/main/{image["maps_path"]}">Complete layout, axes and raw values ↗</a> · <a href="{repo}/blob/main/analysis/firmware/{key}/decode_review.json">Image verification and remaining data ↗</a></p></section>'
            write(target,shell(m['display_name'],body,target,'Maps','<script src="../../../../assets/map-grid.js" defer></script>'))
            name=esc(m['display_name']);url=m['id']+'/'
            cards.append(f'<article class="map-card" data-search="{esc((m["display_name"]+" "+m["data_address"]+" "+m["kind"]).lower(),quote=True)}" data-kind="{m["kind"]}" data-status="Raw layout decoded"><div class="map-top"><code>{m["data_address"]}</code><span>{m["rows"]} × {m["columns"]} · {m["element_bytes"]*8}-bit</span></div><h2><a href="{url}">{name}</a></h2><a href="{url}" aria-label="Open {name}">{preview(m)}</a><p>Raw layout decoded · physical scaling open</p><a href="{url}">Open values &amp; evidence ↗</a></article>')
        kinds=sorted({m['kind'] for m in maps})
        body=f'<div class="page-heading"><div class="kicker">{esc(labels[key])}</div><h1>Maps for this firmware.</h1><p>{len(maps)} extracted layouts · {image["cell_count"]:,} stored cells · {image["family"]} application code family.</p></div><div class="notice">Each grid uses this BIN’s own cells and axes. This catalogue does not claim every remaining constant or physical unit has been resolved.</div><div class="filters"><label>Search<input id="map-search" type="search" placeholder="Fuel, coolant, address…"></label><label>Status<select id="map-status"><option value="">All statuses</option><option>Raw layout decoded</option></select></label><label>Layout<select id="map-kind"><option value="">All layouts</option>'+''.join(f'<option>{esc(k)}</option>' for k in kinds)+f'</select></label></div><p id="map-count">{len(maps)} maps</p><div class="map-grid">'+''.join(cards)+'</div><p id="map-empty" hidden>No matching maps.</p>'
        target=f'firmware/{key}/maps/index.html';write(target,shell('Maps — '+labels[key],body,target,'Maps','<script src="../../../assets/maps.js" defer></script>'))
