"""Build the XT660X research website from the repository's analysis files."""
import html
import json
import os
import shutil
import subprocess
from html.parser import HTMLParser
from pathlib import Path
from urllib.parse import quote, unquote, urlsplit
import markdown

ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT / '_site'
SOURCE = ROOT / 'analysis/semantics'
REPO = 'https://github.com/terrafirma2021/xt660x-2005'
revision = subprocess.check_output(['git', 'rev-parse', '--short', 'HEAD'], cwd=ROOT, text=True).strip()
esc = html.escape
maps = json.loads((ROOT / 'analysis/maps.json').read_text())
units = json.loads((SOURCE / 'physical_units.json').read_text())
unit_by_id = {m['id']: m for m in units['maps']}
pins = json.loads((SOURCE / 'mcu_pin_overview.json').read_text())
documents = sorted(set((ROOT / 'analysis').glob('*.md')) | set(SOURCE.glob('*.md')) |
                   set((ROOT / 'analysis/map_details').glob('*.md')) |
                   {ROOT / 'analysis/full/README.md', ROOT / 'analysis/full/FUNCTION_INDEX.md'})
doc_targets = {p.resolve(): Path('docs') / p.relative_to(ROOT / 'analysis').with_suffix('.html') for p in documents}

def write(path, text):
    target = DEST / path
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(text, encoding='utf-8', newline='\n')

def rel(target, current):
    return Path(os.path.relpath(target, Path(current).parent)).as_posix()

def nav(current, active):
    links = [('Overview', 'index.html'), ('Maps', 'maps/index.html'), ('MCU pins', 'pins/index.html'), ('Research', 'research/index.html')]
    return '<header id="sitebar"><a class="brand" href="'+rel('index.html', current)+'"><span class="brand-mark">XT</span>660X <small>RESEARCH</small></a><nav aria-label="Main navigation">'+''.join(
        f'<a href="{rel(url,current)}"'+(' aria-current="page"' if label==active else '')+f'>{label}</a>' for label,url in links)+f'<a href="{REPO}">GitHub ↗</a></nav></header>'

def shell(title, body, current, active, script=''):
    return f'''<!doctype html><html lang="en"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1"><meta name="description" content="Yamaha XT660X 2005 ECU research: firmware, calibration maps, sensors and MCU pins."><title>{esc(title)} · XT660X Research</title><link rel="stylesheet" href="{rel('assets/site.css',current)}"></head><body>{nav(current,active)}<main class="site-main">{body}</main><footer class="site-footer"><span>XT660X / 2005 / ECU research</span><span>Revision <a href="{REPO}/commit/{revision}">{revision}</a> · Updates after deployment</span></footer>{script}</body></html>'''

def doc_link(name, label, current='index.html'):
    return f'<a href="{rel(doc_targets[(SOURCE/name).resolve()],current)}">{esc(label)} ↗</a>'

# All output comes from this build. Only clean our fixed, ignored output directory.
assert DEST.resolve() == (ROOT.resolve() / '_site') and not DEST.is_symlink()
if DEST.exists():
    shutil.rmtree(DEST)
DEST.mkdir()
shutil.copytree(ROOT / 'site/assets', DEST / 'assets')

home = f'''
<section class="hero"><div><div class="kicker">Yamaha XT660X · 2005</div><h1>Inside the ECU.</h1><p class="hero-copy">A growing reference for understanding the firmware, maps and signals that run the XT660X.</p><p class="hero-sub">Follow the recovered code, explore the calibration catalogue, and trace sensors to their MCU functions.</p><div class="actions"><a class="button primary" href="maps/">Explore the maps <span>↗</span></a><a class="button secondary" href="research/">Read the research</a></div></div><div class="hero-diagram" aria-label="Control system research areas"><span class="signal-label">SENSE</span><div class="signal-row"><span>Crank position</span><span>Pressure</span><span>Temperature</span></div><div class="signal-line"></div><div class="ecu-block"><small>FIRMWARE / CALIBRATION</small><strong>XT660X</strong><span>65,536-byte supplied image</span></div><div class="signal-line"></div><div class="signal-row"><span>Ignition</span><span>Injection</span><span>Fan &amp; relays</span></div><span class="signal-label">CONTROL</span></div></section>
<section class="stats" aria-label="Project coverage"><div><strong>{len(maps)}</strong><span>Maps &amp; curves catalogued</span></div><div><strong>{len(pins['pins'])}</strong><span>MCU package positions listed</span></div><div><strong>225</strong><span>Recovered routines</span></div><div><strong>15,942</strong><span>Decoded instructions translated</span></div></section>
<section><div class="section-heading"><div><div class="kicker">Explore the project</div><h2>From signals to software</h2></div><p>Each section connects findings to the underlying evidence.</p></div><div class="feature-grid"><a class="feature" href="maps/"><span class="section-number">01 / CALIBRATION</span><h3>Maps &amp; curves <span>↗</span></h3><p>Search addresses, dimensions and functions. See what is decoded, conditional or still unresolved.</p><span class="feature-foot">{len(maps)} entries · searchable catalogue</span></a><a class="feature" href="pins/"><span class="section-number">02 / HARDWARE</span><h3>MCU pin overview <span>↗</span></h3><p>Select a pin to inspect its role, diagnostic identity and instruction evidence. Includes XT/TDM comparisons.</p><span class="feature-foot">Interactive diagram · all 80 positions</span></a><a class="feature" href="research/"><span class="section-number">03 / RESEARCH</span><h3>Control-system breakdown <span>↗</span></h3><p>Read the investigations into spark, fuel, coolant, cut logic, diagnostics and firmware structure.</p><span class="feature-foot">Source-linked technical documentation</span></a></div></section>
<section class="progress-panel"><div><div class="kicker">Where the work stands</div><h2>Coverage is not the same as certainty.</h2><p>The supplied application's decoded instructions have a complete C translation. Physical interpretation is still progressing: absolute spark BTDC needs its mechanical crank reference, sensor scales retain stated assumptions, and ECU connector cavities remain unassigned.</p></div><div class="progress-links">{doc_link('MAP_RESOLUTION.md','Per-map decoding status')}{doc_link('CRANK_REFERENCE.md','CPS and spark reference')}{doc_link('DEFINITION_READINESS.md','XDF / tool readiness')}</div></section>
<p class="research-note">This site is a read-only research reference. Conditional values are labelled, and the catalogue is not yet a validated tuning definition. The XT660X is the target; TDM material is comparison evidence.</p>'''
write('index.html', shell('Overview', home, 'index.html', 'Overview'))

# Keep the accepted pin UI intact, adding only the shared website navigation.
pin_page = (SOURCE / 'MCU_PIN_OVERVIEW.html').read_text(encoding='utf-8')
pin_page = pin_page.replace('href="MCU_PIN_OVERVIEW.md"', 'href="../docs/semantics/MCU_PIN_OVERVIEW.html"')
pin_page = pin_page.replace('</head>', '<link rel="stylesheet" href="../assets/nav.css"></head>')
pin_page = pin_page.replace('<body>', '<body>'+nav('pins/index.html', 'MCU pins'), 1)
write('pins/index.html', pin_page)
for name in ('mcu_pin_overview.json','mcu_pin_overview.svg'):
    shutil.copyfile(SOURCE/name, DEST/'pins'/name)

cards=[]
for m in maps:
    u=unit_by_id[m['id']]
    conversion=units['conversions'].get(u.get('cell_conversion'),{})
    formula=conversion.get('formula',u.get('decoded_context','Standalone physical conversion unresolved.'))
    unit=conversion.get('unit','')
    role=m.get('physical_role','Role unresolved')
    search=' '.join([m['id'],m['data_address'],m['kind'],role,u['status']]).lower()
    detail=rel(doc_targets[(ROOT/'analysis/map_details'/f"{m['id']}.md").resolve()],'maps/index.html')
    cards.append(f'''<article class="map-card" data-search="{esc(search,quote=True)}" data-status="{esc(u['status'],quote=True)}" data-kind="{esc(m['kind'],quote=True)}"><div class="map-top"><code>{m['data_address']}</code><span>{m['rows']} × {m['columns']} · {m['element_bytes']*8}-bit</span></div><h2><a href="{detail}">{esc(m['id'])}</a></h2><p>{esc(role)}</p><span class="status">{esc(u['status'])}</span><details><summary>Cell interpretation</summary><p><code>{esc(formula)}</code> {esc(unit)}</p><p>{esc(conversion.get('meaning',''))}</p><p>Required profiles: {esc(', '.join(u.get('requires',[])) or 'None listed for this cell interpretation; see the full derivation.')}</p></details><a class="map-link" href="{detail}">Open values &amp; evidence ↗</a></article>''')
statuses=sorted({u['status'] for u in units['maps']})
kinds=sorted({m['kind'] for m in maps})
map_body=f'''<div class="page-heading"><div class="kicker">Calibration catalogue</div><h1>Maps &amp; curves</h1><p>{len(maps)} recovered layouts, connected to the current physical-unit research. Open an entry for raw values, axes, consumers and unresolved questions.</p></div><div class="notice">A decoded layout does not establish every physical unit. Conditional conversions retain their assumptions; absolute spark BTDC remains unresolved.</div><div class="filters"><label>Search<input id="map-search" type="search" placeholder="Fuel, spark, coolant, 0x1B66…"></label><label>Decoding status<select id="map-status"><option value="">All statuses</option>{''.join(f'<option>{esc(s)}</option>' for s in statuses)}</select></label><label>Layout<select id="map-kind"><option value="">All layouts</option>{''.join(f'<option>{esc(k)}</option>' for k in kinds)}</select></label></div><p id="map-count" class="result-count" aria-live="polite">{len(maps)} maps</p><div class="map-grid">{''.join(cards)}</div><p id="map-empty" hidden>No matching maps. Try a different search or filter.</p>'''
write('maps/index.html',shell('Maps & curves',map_body,'maps/index.html','Maps','<script src="../assets/maps.js"></script>'))

groups=[('Sensors & hardware', [('MCU_PIN_OVERVIEW.md','MCU pins and XT/TDM comparison'),('IO_AND_DIAGNOSTICS.md','Sensor and output identities'),('COOLANT_AND_FAN.md','Coolant and fan control'),('TEMPERATURE_PROFILE.md','Temperature conversion research')]),
        ('Spark, fuel & engine control',[('CRANK_REFERENCE.md','CPS and wasted-spark cadence'),('SPARK_SCHEDULER.md','Spark scheduling and dwell'),('SPARK.md','Spark maps and corrections'),('FUEL.md','Fuel quantity and injection'),('RPM_AND_CUTS.md','RPM limits and cut logic'),('MAP_CONSUMERS.md','Map consumers and arithmetic')]),
        ('Calibration & variants',[('UNIT_DECODING.md','Engineering units and assumptions'),('MAP_RESOLUTION.md','Every map’s resolution status'),('VARIANTS.md','Variant 9 and secondary injector'),('EXTENDED_MAPS.md','Extended map recovery'),('DEFINITION_READINESS.md','XDF and custom-tool readiness')]),
        ('Firmware & diagnostics',[('STARTUP.md','Startup and initialization'),('CHECKSUM.md','Checksum correction'),('DIAGNOSTICS.md','Dashboard diagnostic protocol'),('K_LINE.md','Serial transport'),('IMMOBILIZER.md','Immobilizer analysis'),('PROTOCOL_VERIFICATION.md','Protocol verification')])]
research='<div class="page-heading"><div class="kicker">Research library</div><h1>Understand the control system.</h1><p>Read the analysis by area. Each document retains its evidence, assumptions and source links, and is rebuilt from the repository.</p></div><div class="research-grid">'
for title,items in groups:
    research+=f'<section class="research-group"><h2>{title}</h2><ul>'+''.join('<li>'+doc_link(file,label,'research/index.html')+'</li>' for file,label in items)+'</ul></section>'
research+='</div><section class="progress-panel"><div><h2>Underlying code</h2><p>Address-preserving C, function coverage and the original analysis remain available for cross-checking.</p></div><div class="progress-links"><a href="../docs/full/README.html">Full decompilation guide ↗</a><a href="../docs/full/FUNCTION_INDEX.html">Function index ↗</a><a href="'+REPO+'">Repository and files ↗</a></div></section>'
write('research/index.html',shell('Research library',research,'research/index.html','Research'))

class LinkRewriter(HTMLParser):
    def __init__(self,source,target):
        super().__init__(convert_charrefs=False)
        self.source,self.target,self.parts=source,target,[]
    def rewrite(self,value):
        u=urlsplit(value)
        if u.scheme or u.netloc or not u.path:return value
        path=(self.source.parent/unquote(u.path)).resolve()
        if path in doc_targets: url=rel(doc_targets[path],self.target)
        elif path==SOURCE/'MCU_PIN_OVERVIEW.html':url=rel('pins/index.html',self.target)
        elif path in [SOURCE/'mcu_pin_overview.svg',SOURCE/'mcu_pin_overview.json']:url=rel('pins/'+path.name,self.target)
        elif path.is_relative_to(ROOT):url=REPO+'/blob/main/'+quote(path.relative_to(ROOT).as_posix())
        else:return value
        return url+('?' + u.query if u.query else '')+('#'+u.fragment if u.fragment else '')
    def handle_starttag(self,tag,attrs):
        attrs=[(k,self.rewrite(v) if k in ('href','src') and v else v) for k,v in attrs]
        self.parts.append('<'+tag+''.join(' '+k+(f'="{esc(v,quote=True)}"' if v is not None else '') for k,v in attrs)+'>')
    def handle_startendtag(self,tag,attrs):self.handle_starttag(tag,attrs)
    def handle_endtag(self,tag):self.parts.append('</'+tag+'>')
    def handle_data(self,data):self.parts.append(data)
    def handle_entityref(self,name):self.parts.append('&'+name+';')
    def handle_charref(self,name):self.parts.append('&#'+name+';')

for source in documents:
    target=doc_targets[source.resolve()]
    try:
        raw=source.read_text(encoding='utf-8')
    except UnicodeDecodeError:
        # Older Windows-generated reports contain CP1252 punctuation.
        raw=source.read_text(encoding='cp1252')
        print(f'Reading legacy CP1252 report: {source.relative_to(ROOT)}')
    title=next((line.lstrip('# ').strip() for line in raw.splitlines() if line.startswith('# ')),source.stem)
    rendered=markdown.markdown(raw,extensions=['tables','fenced_code','toc'])
    parser=LinkRewriter(source,target);parser.feed(rendered)
    body=f'<div class="doc-toolbar"><a href="{rel("research/index.html",target)}">← Research library</a><a href="{REPO}/blob/main/{quote(source.relative_to(ROOT).as_posix())}">View source on GitHub ↗</a></div><article class="document">'+''.join(parser.parts)+'</article>'
    write(target,shell(title,body,target,'Research'))
write('.nojekyll','')
print(f'Built project website: home, {len(maps)} maps, pin explorer and {len(documents)} research documents.')
