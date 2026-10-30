"""Firmware library pages; image identity stays separate from shared map research."""
from html import escape as esc
from urllib.parse import quote
import json
from pathlib import Path


def build_library(catalog, shell, write, repo):
    cards=[]
    inventory=json.loads((Path(__file__).resolve().parents[1]/'analysis/firmware/dataset_inventory.json').read_text(encoding='utf-8'))
    facts={i['id']:i for i in inventory['images']}
    labels={i['id']:i['label'] for i in catalog['images']}
    companion=next(i for i in catalog['images'] if i['id']=='xt660-2004-2006-companion')
    for item in catalog['images']:
        key=item['id']; current=f'firmware/{key}/index.html'
        shared=item['shared_map_count']
        cards.append(f'''<article class="firmware-card" data-firmware-card="{key}"><div class="kicker">{esc(item['kind'])}</div><h2><a href="{key}/">{esc(item['label'])}</a></h2><p>{esc(item['analysis_status'])}</p><dl><dt>Claimed years</dt><dd>{esc(item['claimed_years'])}</dd><dt>Boot region</dt><dd>{esc(item['boot_status'])}</dd><dt>Map catalogue</dt><dd>{str(shared)+' shared layouts' if shared else 'Not reviewed'}</dd></dl><a class="text-link" href="{key}/">OPEN IMAGE RECORD ↗</a></article>''')
        rows=[('Claimed years',item['claimed_years']),('Year evidence',item['year_evidence']),
            ('File size',f"{item['size']:,} bytes"),('CPU address range',f"0x{item['base_address']:04X}–0x{item['end_address']:04X}"),
            ('Word sum: 0x1800–0xF7FF',item['startup_checksum'] or 'Range not covered'),('Boot region',item['boot_status']),
            ('Reset vector',item['reset_vector'] or 'Not covered'),('SHA-256',item['sha256']),
            ('Provenance',item['provenance'])]
        rows.append(('Embedded ASCII identifiers',', '.join(x['text']+' at '+x['address'] for x in facts[key]['embedded_ascii_ids']) or 'None matching the recorded Y + seven-character pattern'))
        detail='<dl class="firmware-facts">'+''.join(f'<dt>{esc(k)}</dt><dd>{esc(v)}</dd>' for k,v in rows)+'</dl>'
        maps=f'<a class="button primary" href="../../maps/?firmware={key}">EXPLORE {shared} SHARED MAPS ↗</a>' if shared else '<p>No map catalogue is assigned. This image needs its own review.</p>'
        boot='<p>The boot region is absent from this file. See the companion record for separately sourced boot analysis.</p>'
        if key=='xt660-2004-2006-companion':
            boot='<p>Reset, service dispatch and SCI0 handling have a separate static analysis. The application execution tests do not validate this boot.</p><a class="text-link" href="../../docs/firmware/xt660-2004-2006-companion/BOOT.html">READ THE BOOT BREAKDOWN ↗</a>'
        elif item['boot_status']=='populated': boot='<p>Boot bytes are present; their behavior has not been reviewed for this image.</p>'
        if key!=companion['id'] and item['boot_sha256']==companion['boot_sha256']:
            boot='<p>All 2,048 boot bytes are identical to the separately analysed companion boot. That static breakdown applies to these bytes; application handoff, hardware operation and live flashing remain separate checks.</p><a class="text-link" href="../../docs/firmware/xt660-2004-2006-companion/BOOT.html">READ THE SHARED BOOT BREAKDOWN ↗</a>'
        comparisons=sorted([p for p in inventory['pairwise'] if key in (p['a'],p['b'])],key=lambda p:p['different_bytes'])[:2]
        comparison='<h2>Closest supplied records</h2><ul>'
        for p in comparisons:
            other=p['b'] if key==p['a'] else p['a']
            comparison+=f'<li><a href="../{other}/">{esc(labels[other])}</a>: {p["application_different_bytes"]:,} changed application bytes; boot '+('identical' if p['boot_identical'] else 'different')+'.'
            if p['changes']:
                comparison+=' Addresses: '+', '.join(esc(c['address']) for c in p['changes'])+'.'
            comparison+='</li>'
        comparison+='</ul><p><a href="../../dataset/">Complete dataset, definitions and comparison matrix ↗</a></p>'
        body=f'''<div class="page-heading"><div class="kicker">Firmware / {esc(item['kind'])}</div><h1>{esc(item['label'])}</h1><p>{esc(item['analysis_status'])}</p></div><div class="notice">{esc(item['notes'])}</div><div class="firmware-detail"><section><h2>Image identity</h2>{detail}<a class="text-link" href="{repo}/blob/main/{quote(item['file'])}">BINARY ON GITHUB ↗</a></section><section><h2>Maps &amp; analysis</h2><p>{'All 71 stored map bodies and stored axes match the primary image byte-for-byte. Reviewed application differences: '+(', '.join('0x'+a for a in item['changed_application_addresses']) or 'none')+'. This supports shared research, not full ECU interchangeability or physical-unit sign-off.' if shared else 'File identity is recorded. Existing map and pin claims are not automatically transferred.'}</p>{maps}<h2>Boot code</h2>{boot}<p><a href="../">← All firmware images</a></p></section></div>'''
        body+=comparison
        write(current,shell(item['label'],body,current,'Firmware'))
    body=f'''<div class="page-heading"><div class="kicker">The firmware library</div><h1>Different files.<br>Clear identities.</h1><p>Explore each image, its boot coverage and the research that applies to it.</p></div><div class="notice">The selector filters associated images. Model/year associations can be filename claims; inspect the profile evidence. Identical boot bytes do not make the application or hardware interchangeable.</div><p id="library-status"></p><label><input id="all-firmware" type="checkbox"> Show all nine images across the dataset</label><div class="firmware-grid">{''.join(cards)}</div><section class="progress-panel"><div><h2>One dataset. Separate evidence.</h2><p>Every supplied file is accounted for, including extensionless firmware, ZIP duplicates, XDFs, screenshots and the edit log.</p></div><a class="button primary" href="../dataset/">EXPLORE DATASET &amp; SOURCES ↗</a></section>'''
    write('firmware/index.html',shell('Firmware library',body,'firmware/index.html','Firmware'))
