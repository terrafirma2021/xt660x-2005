"""Firmware library pages; image identity stays separate from shared map research."""
from html import escape as esc
from urllib.parse import quote


def build_library(catalog, shell, write, repo):
    cards=[]
    for item in catalog['images']:
        key=item['id']; current=f'firmware/{key}/index.html'
        shared=item['shared_map_count']
        cards.append(f'''<article class="firmware-card"><div class="kicker">{esc(item['kind'])}</div><h2><a href="{key}/">{esc(item['label'])}</a></h2><p>{esc(item['analysis_status'])}</p><dl><dt>Claimed years</dt><dd>{esc(item['claimed_years'])}</dd><dt>Boot region</dt><dd>{esc(item['boot_status'])}</dd><dt>Map catalogue</dt><dd>{str(shared)+' shared layouts' if shared else 'Not reviewed'}</dd></dl><a class="text-link" href="{key}/">OPEN IMAGE RECORD ↗</a></article>''')
        rows=[('Claimed years',item['claimed_years']),('Year evidence',item['year_evidence']),
            ('File size',f"{item['size']:,} bytes"),('CPU address range',f"0x{item['base_address']:04X}–0x{item['end_address']:04X}"),
            ('Startup word sum',item['startup_checksum'] or 'Range not covered'),('Boot region',item['boot_status']),
            ('Reset vector',item['reset_vector'] or 'Not covered'),('SHA-256',item['sha256']),
            ('Provenance',item['provenance'])]
        detail='<dl class="firmware-facts">'+''.join(f'<dt>{esc(k)}</dt><dd>{esc(v)}</dd>' for k,v in rows)+'</dl>'
        maps=f'<a class="button primary" href="../../maps/?firmware={key}">EXPLORE {shared} SHARED MAPS ↗</a>' if shared else '<p>No map catalogue is assigned. This image needs its own review.</p>'
        boot='<p>The boot region is absent from this file. See the companion record for separately sourced boot analysis.</p>'
        if key=='xt660-2004-2006-companion':
            boot='<p>Reset, service dispatch and SCI0 handling have a separate static analysis. The application execution tests do not validate this boot.</p><a class="text-link" href="../../docs/firmware/xt660-2004-2006-companion/BOOT.html">READ THE BOOT BREAKDOWN ↗</a>'
        elif item['boot_status']=='populated': boot='<p>Boot bytes are present; their behavior has not been reviewed for this image.</p>'
        body=f'''<div class="page-heading"><div class="kicker">Firmware / {esc(item['kind'])}</div><h1>{esc(item['label'])}</h1><p>{esc(item['analysis_status'])}</p></div><div class="notice">{esc(item['notes'])}</div><div class="firmware-detail"><section><h2>Image identity</h2>{detail}<a class="text-link" href="{repo}/blob/main/{quote(item['file'])}">BINARY ON GITHUB ↗</a></section><section><h2>Maps &amp; analysis</h2><p>{'All 71 stored map bodies and stored axes match the primary image byte-for-byte. Reviewed application differences: '+(', '.join('0x'+a for a in item['changed_application_addresses']) or 'none')+'. This supports shared research, not full ECU interchangeability or physical-unit sign-off.' if shared else 'File identity is recorded. Existing map and pin claims are not automatically transferred.'}</p>{maps}<h2>Boot code</h2>{boot}<p><a href="../">← All firmware images</a></p></section></div>'''
        write(current,shell(item['label'],body,current,'Firmware'))
    body=f'''<div class="page-heading"><div class="kicker">The firmware library</div><h1>Different files.<br>Clear identities.</h1><p>Explore each image, its boot coverage and the research that applies to it.</p></div><div class="notice">Years are source claims. The 2005 owner dump and 2004–06 companion share the same application except for the known patch; they are not two independently confirmed model-year revisions.</div><div class="firmware-grid">{''.join(cards)}</div><section class="progress-panel"><div><h2>Room for the next BIN.</h2><p>Add a file with its origin and address base. New images get their own record and start unreviewed; map compatibility is checked separately.</p></div><a class="button primary" href="../docs/repository/firmware/ADDING_IMAGES.html">HOW TO ADD AN IMAGE ↗</a></section>'''
    write('firmware/index.html',shell('Firmware library',body,'firmware/index.html','Firmware'))
