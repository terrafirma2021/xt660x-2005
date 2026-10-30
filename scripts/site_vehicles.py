"""Shared vehicle context and dataset pages; never infer hardware from firmware similarity."""
import json
from html import escape as esc
from urllib.parse import quote
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]

def catalog():
    return json.loads((ROOT/'dataset/vehicles.json').read_text(encoding='utf-8'))

def context(current,rel):
    root=rel('index.html',current).removesuffix('index.html') or './'
    return f'''<section class="vehicle-context" id="vehicle-context" data-root="{root}" aria-label="Choose motorcycle and firmware">
<div class="context-heading"><span class="kicker">YOUR RESEARCH WORKSPACE</span><a href="{root}dataset/">Dataset &amp; sources ↗</a></div>
<div class="vehicle-selectors"><label>1 · Motorcycle<select id="bike-select" aria-label="Motorcycle"></select></label><label>2 · Year<select id="year-select" aria-label="Year"></select></label><label>3 · Market<select id="market-select" aria-label="Market"></select></label><label>4 · ECU<select id="ecu-select" aria-label="ECU"></select></label><label>5 · Firmware<select id="image-select" aria-label="Firmware"></select></label></div>
<p id="selection-status" aria-live="polite">The existing study concerns the owner-reported 2005 XT660X image. Enable JavaScript to select another profile.</p></section>'''

def home():
    cards=[]
    for m in catalog()['models']:
        cards.append(f'''<a class="bike-card {m['id']}" data-bike="{m['id']}" href="?profile={m['default_profile']}"><span class="kicker">{esc(m['style'])}</span><strong>{esc(m['name'])}</strong><img class="bike-thumb" src="{m['photo']['file']}" alt="{esc(m['name'])} model reference" width="{m['photo']['width']}" height="{m['photo']['height']}" loading="lazy"><span>{esc(m['tagline'])}</span><b aria-hidden="true">↗</b></a>''')
    return '''<section class="garage-hero"><div><div class="kicker">YAMAHA / ECU RESEARCH</div><h1>KNOW YOUR BIKE.<br><span>FOLLOW THE EVIDENCE.</span></h1><p>Choose the motorcycle. Pin down its year, market and ECU.<br>Explore the firmware, maps and wiring that belong to that record.</p></div><div class="garage-number" aria-hidden="true">660<span>+ 900 / COMPARISON</span></div></section><section class="bike-picker" aria-label="Motorcycle families">'''+''.join(cards)+'''</section><section id="vehicle-overview" class="vehicle-overview" aria-live="polite"></section><div class="garage-footnote">This catalogue covers the supplied files and documented variants. Listed years can be source claims; each profile states its evidence. XT600 is a different family. Ténéré is listed under its official XT660Z name.</div>'''

def build_pages(shell,write,repo):
    data=catalog();write('vehicles/catalog.json',json.dumps(data,ensure_ascii=False,indent=2)+'\n')
    parts=json.loads((ROOT/'dataset/parts_catalogue.json').read_text(encoding='utf-8'))
    write('vehicles/parts.json',json.dumps(parts,ensure_ascii=False,indent=2)+'\n')
    for route,title,description in [('wiring','Wiring & sensors','Harness, oxygen-sensor equipment and connector evidence for the selected profile.')]:
        body=f'<div class="page-heading"><div class="kicker">Selected motorcycle</div><h1>{title}</h1><p>{description}</p></div><section id="vehicle-hardware" class="vehicle-overview"></section>'
        write(f'{route}/index.html',shell(title,body,f'{route}/index.html','Wiring'))
    report=json.loads((ROOT/'analysis/firmware/dataset_inventory.json').read_text(encoding='utf-8'))
    sources=''.join(f'<li id="source-{s["id"]}"><h3><a href="{esc(s["url"],quote=True)}">{esc(s["title"])}</a></h3><p>{esc(s["claim"])}</p><small>{esc(s["locator"])} · Checked {s["checked_on"]}</small></li>' for s in data['sources'] if not s['id'].startswith('fowlers-'))
    rows=''.join(f'<tr><td><a href="{repo}/blob/main/{quote(f["stored_path"])}">{esc(f["source_path"])}</a></td><td>{f["kind"]}</td><td>{f["bytes"]:,}</td><td><code>{f["sha256"][:16]}…</code></td><td>{"; ".join(esc(m["path"])+": exact duplicate of "+esc(", ".join(m["duplicates"])) for m in f.get("members",[])) or "Preserved source"}</td></tr>' for f in report['files'])
    pairs=[]
    labels={i['id']:i['label'] for i in json.loads((ROOT/'firmware/registry.json').read_text(encoding='utf-8'))['images']}
    for p in report['pairwise']:
        pairs.append('<tr><td>'+esc(labels[p['a']])+'</td><td>'+esc(labels[p['b']])+'</td><td>'+str(p['application_different_bytes'])+'</td><td>'+('Identical' if p['boot_identical'] else 'Different')+'</td></tr>')
    body=f'''<div class="page-heading"><div class="kicker">Provenance / applicability / evidence</div><h1>The complete dataset.</h1><p>21 supplied files. Seven distinct supplied firmware images, eight XDFs, two ZIP copies, three images and one edit log. Nine registered firmware records include the original owner image and its corrected derivative.</p></div><div class="notice">A file match, a parts-catalogue match and a verified physical ECU are different claims. The 2008 file has an associated edit log. Four XDFs use a non-XML format; screenshots are evidence of their displayed content, not a complete decoded definition.</div><section><h2>Definitions for the selected firmware</h2><div id="vehicle-definitions"></div></section><details open><summary>Every supplied file</summary><div class="dataset-table"><table><thead><tr><th>Original path</th><th>Kind</th><th>Bytes</th><th>SHA-256 prefix</th><th>Archive relationship</th></tr></thead><tbody>{rows}</tbody></table></div></details><details><summary>All 36 firmware comparisons</summary><p>Compared at CPU addresses 0x1800–0xFFFF. Counts below cover application bytes 0x1800–0xF7FF. Boot equality is checked separately. Equal boot bytes do not imply equal application code or hardware.</p><div class="dataset-table"><table><thead><tr><th>Image A</th><th>Image B</th><th>Application bytes changed</th><th>Boot</th></tr></thead><tbody>{''.join(pairs)}</tbody></table></div></details><p><a href="{repo}/blob/main/analysis/firmware/dataset_inventory.json">Full hashes, byte changes and archive-member identities ↗</a></p><h2 id="sources">Manufacturer references &amp; applicability</h2><ul class="source-list">{sources}</ul>'''
    catalogue_rows=[]
    for record in parts['records']:
        ecus=[p for p in record['parts'] if p['role']=='ecu']
        original=' / '.join(p['replaces'] or p['listed_part'] for p in ecus)
        replacement=' / '.join(p['listed_part'] for p in ecus if p['replaces']) or 'None shown'
        catalogue_rows.append(f'<tr><td><a href="../?profile={record["id"]}">{esc(record["examined_listing"])}</a></td><td>{esc(record["country"])} · {esc(record["variant"])}</td><td>{esc(original)}</td><td>{esc(replacement)}</td><td><a href="{esc(record["source_url"],quote=True)}">Fowlers diagram index ↗</a></td></tr>')
    body+=f'<h2>Fowlers model/year catalogue</h2><p>{len(parts["records"])} inspected model/market records, {parts["counts"]["assembly_pages"]} assembly pages and {parts["counts"]["part_rows"]} relevant part rows. Standard, 25 kW restricted and ABS listings stay distinct. UK/Europe is selected where listed, otherwise the first listed country. Other countries and colours are not silently included. The catalogue index is not a complete production-year history.</p><details><summary>Browse all catalogue records and select a profile</summary><div class="dataset-table"><table><thead><tr><th>Model / year / catalogue code</th><th>Market / variant</th><th>Original or listed ECU</th><th>Listed replacement</th><th>Source</th></tr></thead><tbody>{"".join(catalogue_rows)}</tbody></table></div></details><p>17 older XTZ660 groups found under the Ténéré catalogue heading were excluded from XT660Z. Part-number and harness differences are retained in the structured <a href="{repo}/blob/main/dataset/parts_catalogue.json">parts evidence dataset ↗</a>.</p>'
    write('dataset/index.html',shell('Dataset and sources',body,'dataset/index.html','Dataset'))
    definitions=[f for f in report['files'] if f['kind']=='definition']
    write('vehicles/definitions.json',json.dumps(definitions,indent=2)+'\n')
