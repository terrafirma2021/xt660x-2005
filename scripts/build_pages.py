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
from site_home import build_home

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
tracked_files = subprocess.check_output(['git', 'ls-files', '-z'], cwd=ROOT).decode('utf-8').strip('\0').split('\0')
documents = sorted(ROOT / p for p in tracked_files if p.endswith('.md'))
doc_targets = {p.resolve(): (Path('docs') / p.relative_to(ROOT / 'analysis').with_suffix('.html')
               if p.is_relative_to(ROOT / 'analysis') else Path('docs/repository') / p.relative_to(ROOT).with_suffix('.html')) for p in documents}

def write(path, text):
    target = DEST / path
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(text, encoding='utf-8', newline='\n')

def rel(target, current):
    return Path(os.path.relpath(target, Path(current).parent)).as_posix()

def nav(current, active):
    links = [('Overview', 'index.html'), ('Maps', 'maps/index.html'), ('MCU pins', 'pins/index.html'), ('Research', 'research/index.html')]
    return '<header id="sitebar"><a class="brand" href="'+rel('index.html', current)+'"><span class="brand-mark">YAMAHA</span><span class="brand-model">XT660X<small>THE INSIDE LINE</small></span></a><nav aria-label="Main navigation">'+''.join(
        f'<a href="{rel(url,current)}"'+(' aria-current="page"' if label==active else '')+f'>{label}</a>' for label,url in links)+f'<a href="{REPO}">GitHub ↗</a><button id="theme-toggle" type="button" aria-label="Switch to dark theme" aria-pressed="false">Dark theme</button></nav></header>'

def theme_head(current):
    return f'<link rel="icon" href="{rel("assets/favicon.svg",current)}" type="image/svg+xml"><script src="{rel("assets/theme.js",current)}"></script><link rel="stylesheet" href="{rel("assets/theme.css",current)}">'

def shell(title, body, current, active, script=''):
    return f'''<!doctype html><html lang="en"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1"><meta name="description" content="Yamaha XT660X 2005 ECU research: firmware, calibration maps, sensors and MCU pins."><title>{esc(title)} · XT660X Research</title><link rel="stylesheet" href="{rel('assets/site.css',current)}">{theme_head(current)}</head><body>{nav(current,active)}<main class="site-main">{body}</main><footer class="site-footer"><span>YAMAHA XT660X / 2005 · <a href="{rel('coverage/index.html',current)}">Content coverage</a></span><span>Revision <a href="{REPO}/commit/{revision}">{revision}</a> · <a href="{rel("docs/repository/site/ASSET_CREDITS.html",current)}">Credits &amp; independence</a><br>Independent project. Not affiliated with Yamaha Motor.</span></footer>{script}</body></html>'''

def doc_link(name, label, current='index.html'):
    return f'<a href="{rel(doc_targets[(SOURCE/name).resolve()],current)}">{esc(label)} ↗</a>'

# All output comes from this build. Only clean our fixed, ignored output directory.
assert DEST.resolve() == (ROOT.resolve() / '_site') and not DEST.is_symlink()
if DEST.exists():
    shutil.rmtree(DEST)
DEST.mkdir()
shutil.copytree(ROOT / 'site/assets', DEST / 'assets')

home = build_home(maps, pins, write)
write('index.html', shell('Yamaha XT660X / The inside line', home, 'index.html', 'Overview', '<script src="assets/home.js" defer></script>'))

# Keep the accepted pin UI intact, adding only the shared website navigation.
pin_page = (SOURCE / 'MCU_PIN_OVERVIEW.html').read_text(encoding='utf-8')
pin_page = pin_page.replace('href="MCU_PIN_OVERVIEW.md"', 'href="../docs/semantics/MCU_PIN_OVERVIEW.html"')
pin_page = pin_page.replace('href="ECU_CONNECTOR.md"', 'href="../docs/semantics/ECU_CONNECTOR.html"')
pin_page = pin_page.replace('</head>', '<link rel="stylesheet" href="../assets/nav.css">'+theme_head('pins/index.html')+'</head>')
pin_page = pin_page.replace('<body>', '<body>'+nav('pins/index.html', 'MCU pins'), 1)
pin_page = pin_page.replace('</body>', '<footer class="independent-note">Independent XT660X project. Not affiliated with Yamaha Motor. <a href="../docs/repository/site/ASSET_CREDITS.html">Credits &amp; independence</a></footer></body>')
write('pins/index.html', pin_page)
for name in ('mcu_pin_overview.json','mcu_pin_overview.svg','ecu_connector.svg'):
    shutil.copyfile(SOURCE/name, DEST/'pins'/name)

cards=[]
for m in maps:
    u=unit_by_id[m['id']]
    conversion=units['conversions'].get(u.get('cell_conversion'),{})
    formula=conversion.get('formula',u.get('decoded_context','Standalone physical conversion unresolved.'))
    unit=conversion.get('unit','')
    role=m.get('physical_role','Role unresolved')
    search=' '.join([m['display_name'],m['category'],m['id'],m['data_address'],m['kind'],role,u['status']]).lower()
    detail=rel(doc_targets[(ROOT/'analysis/map_details'/f"{m['id']}.md").resolve()],'maps/index.html')
    cards.append(f'''<article class="map-card" data-search="{esc(search,quote=True)}" data-status="{esc(u['status'],quote=True)}" data-kind="{esc(m['kind'],quote=True)}"><div class="map-top"><code>{m['data_address']}</code><span>{m['rows']} × {m['columns']} · {m['element_bytes']*8}-bit</span></div><div class="map-category">{esc(m['category'])}</div><h2><a href="{detail}">{esc(m['display_name'])}</a></h2><p class="map-id">Reference ID: <code>{esc(m['id'])}</code></p><span class="status">{esc(u['status'])}</span><details><summary>Meaning and cell interpretation</summary><p>{esc(m['naming_note'])}</p><p><code>{esc(formula)}</code> {esc(unit)}</p><p>{esc(conversion.get('meaning',''))}</p><p>Required profiles: {esc(', '.join(u.get('requires',[])) or 'None listed for this cell interpretation; see the full derivation.')}</p></details><a class="map-link" href="{detail}">Open values &amp; evidence ↗</a></article>''')
statuses=sorted({u['status'] for u in units['maps']})
kinds=sorted({m['kind'] for m in maps})
map_body=f'''<div class="page-heading"><div class="kicker">Calibration catalogue</div><h1>Maps &amp; curves</h1><p>{len(maps)} recovered layouts, connected to the current physical-unit research. Open an entry for raw values, axes, consumers and unresolved questions.</p></div><div class="notice">A decoded layout does not establish every physical unit. Conditional conversions retain their assumptions; absolute spark BTDC remains unresolved.</div><div class="filters"><label>Search<input id="map-search" type="search" placeholder="Fuel, spark, coolant, 0x1B66…"></label><label>Decoding status<select id="map-status"><option value="">All statuses</option>{''.join(f'<option>{esc(s)}</option>' for s in statuses)}</select></label><label>Layout<select id="map-kind"><option value="">All layouts</option>{''.join(f'<option>{esc(k)}</option>' for k in kinds)}</select></label></div><p id="map-count" class="result-count" aria-live="polite">{len(maps)} maps</p><div class="map-grid">{''.join(cards)}</div><p id="map-empty" hidden>No matching maps. Try a different search or filter.</p>'''
write('maps/index.html',shell('Maps & curves',map_body,'maps/index.html','Maps','<script src="../assets/maps.js"></script>'))

groups=[('Verification', [('VERIFICATION_LEDGER.md','Every map and pin: verified claims and open requirements')]),
        ('Sensors & hardware', [('MCU_PIN_OVERVIEW.md','MCU pins and XT/TDM comparison'),('ECU_CONNECTOR.md','ECU connector positions and MCU links'),('IO_AND_DIAGNOSTICS.md','Sensor and output identities'),('COOLANT_AND_FAN.md','Coolant and fan control'),('TEMPERATURE_PROFILE.md','Temperature conversion research')]),
        ('Spark, fuel & engine control',[('CRANK_REFERENCE.md','CPS and wasted-spark cadence'),('SPARK_SCHEDULER.md','Spark scheduling and dwell'),('SPARK.md','Spark maps and corrections'),('FUEL.md','Fuel quantity and injection'),('RPM_AND_CUTS.md','RPM limits and cut logic'),('MAP_CONSUMERS.md','Map consumers and arithmetic')]),
        ('Calibration & variants',[('../MAP_NAMES.md','Map names and stable references'),('UNIT_DECODING.md','Engineering units and assumptions'),('MAP_RESOLUTION.md','Every map’s resolution status'),('VARIANTS.md','Variant 9 and secondary injector'),('EXTENDED_MAPS.md','Extended map recovery'),('DEFINITION_READINESS.md','XDF and custom-tool readiness')]),
        ('Firmware & diagnostics',[('STARTUP.md','Startup and initialization'),('CHECKSUM.md','Checksum correction'),('DIAGNOSTICS.md','Dashboard diagnostic protocol'),('K_LINE.md','Serial transport'),('IMMOBILIZER.md','Immobilizer analysis'),('PROTOCOL_VERIFICATION.md','Protocol verification')])]
research='<div class="page-heading"><div class="kicker">Research library</div><h1>Understand the control system.</h1><p>Read the analysis by area. Each document retains its evidence, assumptions and source links, and is rebuilt from the repository.</p></div><div class="research-grid">'
for title,items in groups:
    research+=f'<section class="research-group"><h2>{title}</h2><ul>'+''.join('<li>'+doc_link(file,label,'research/index.html')+'</li>' for file,label in items)+'</ul></section>'
research+='</div><section class="progress-panel"><div><h2>Underlying code</h2><p>Address-preserving C, function coverage and the original analysis remain available for cross-checking.</p></div><div class="progress-links"><a href="../docs/full/README.html">Full decompilation guide ↗</a><a href="../docs/full/FUNCTION_INDEX.html">Function index ↗</a><a href="'+REPO+'">Repository and files ↗</a></div></section>'
research+=f'<section class="progress-panel"><div><h2>Complete content index</h2><p>All {len(documents)} tracked Markdown documents are readable on this website. Code, data, validation reports and binaries are indexed with links to GitHub. The topic list above is a starting point, not the full inventory.</p></div><div class="progress-links"><a href="../coverage/">Search every repository file ↗</a><a href="../docs/repository/README.html">Project README ↗</a><a href="../docs/repository/ghidra/README.html">Ghidra setup and processor corrections ↗</a></div></section>'
write('research/index.html',shell('Research library',research,'research/index.html','Research'))

inventory=[]
for name in tracked_files:
    source=(ROOT/name).resolve()
    if source in doc_targets:
        destination=rel(doc_targets[source],'coverage/index.html');location='Website document'
    elif name=='analysis/semantics/MCU_PIN_OVERVIEW.html':
        destination='../pins/';location='Website explorer'
    elif name in ('analysis/semantics/mcu_pin_overview.json','analysis/semantics/mcu_pin_overview.svg','analysis/semantics/ecu_connector.svg'):
        destination='../pins/'+source.name;location='Website asset'
    else:
        destination=REPO+'/blob/main/'+quote(name);location='GitHub file'
    inventory.append(dict(path=name,location=location,url=destination))
coverage=f'''<div class="page-heading"><div class="kicker">Content coverage</div><h1>Everything in the repository.</h1><p>Search all {len(inventory)} tracked files. All {len(documents)} Markdown documents are rendered here. Code, structured datasets, test reports, Ghidra files and firmware remain in GitHub and are linked below.</p></div><div class="notice">The website covers the written research and provides access to the supporting files. It does not turn every dataset into an interactive view, and neither repository coverage nor a listed map means the reverse engineering is complete.</div><div class="filters"><label>Search files<input id="file-search" type="search" placeholder="Physical units, validation, Ghidra, .c…"></label><label>Opens in<select id="file-location"><option value="">All locations</option><option value="Website">Website</option><option value="GitHub">GitHub</option></select></label></div><p class="result-count" id="file-count" aria-live="polite">{len(inventory)} files</p><ul class="file-index">'''+''.join(f'<li data-search="{esc(item["path"].lower())}" data-location="{item["location"]}"><a href="{esc(item["url"])}">{esc(item["path"])}</a><span>{item["location"]}</span></li>' for item in inventory)+'</ul><p id="file-empty" hidden>No matching files.</p>'
write('coverage/index.html',shell('Content coverage',coverage,'coverage/index.html','Research','<script src="../assets/coverage.js"></script>'))
write('coverage/manifest.json',json.dumps(dict(revision=revision,tracked_files=len(inventory),rendered_documents=len(documents),files=inventory),indent=2)+'\n')

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
        elif path in [SOURCE/'mcu_pin_overview.svg',SOURCE/'mcu_pin_overview.json',SOURCE/'ecu_connector.svg']:url=rel('pins/'+path.name,self.target)
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
    rendered=rendered.replace('<li>[x] ', '<li><input type="checkbox" checked disabled aria-label="Checked"> ')
    rendered=rendered.replace('<li>[ ] ', '<li><input type="checkbox" disabled aria-label="Open"> ')
    parser=LinkRewriter(source,target);parser.feed(rendered)
    body=f'<div class="doc-toolbar"><a href="{rel("research/index.html",target)}">← Research library</a><a href="{REPO}/blob/main/{quote(source.relative_to(ROOT).as_posix())}">View source on GitHub ↗</a></div><article class="document">'+''.join(parser.parts)+'</article>'
    write(target,shell(title,body,target,'Research'))
write('.nojekyll','')
print(f'Built project website: home, {len(maps)} maps, pin explorer and {len(documents)} research documents.')
