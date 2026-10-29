"""Validate generated site routes and links against the packaged artifact."""
from html.parser import HTMLParser
from pathlib import Path
from urllib.parse import unquote, urlsplit
import json
import subprocess

ROOT=Path(__file__).resolve().parents[1]
SITE=ROOT/'_site'
class Links(HTMLParser):
    def __init__(self):
        super().__init__(); self.links=[]; self.map_count=0; self.theme_buttons=0
    def handle_starttag(self,tag,attrs):
        attrs=dict(attrs)
        for key in ('href','src'):
            if attrs.get(key):self.links.append(attrs[key])
        if 'map-card' in attrs.get('class','').split():self.map_count+=1
        if attrs.get('id')=='theme-toggle':self.theme_buttons+=1

count=0
for page in SITE.rglob('*.html'):
    parser=Links();parser.feed(page.read_text(encoding='utf-8'))
    assert parser.theme_buttons==1,f'Missing or duplicate theme switch: {page}'
    assert any(link.endswith('/theme.js') for link in parser.links),page
    assert any(link.endswith('/theme.css') for link in parser.links),page
    for value in parser.links:
        url=urlsplit(value)
        if url.scheme or url.netloc or not url.path:continue
        target=(page.parent/unquote(url.path)).resolve()
        assert target.is_relative_to(SITE.resolve()),(page,value)
        if target.is_dir():target=target/'index.html'
        assert target.is_file(),f'Broken link in {page.relative_to(SITE)}: {value}'
        count+=1
parser=Links();parser.feed((SITE/'maps/index.html').read_text(encoding='utf-8'))
assert parser.map_count==len(json.loads((ROOT/'analysis/maps.json').read_text()))==71
assert not list(SITE.rglob('*.bin'))
for route in ('index.html','maps/index.html','pins/index.html','research/index.html','coverage/index.html'):
    assert (SITE/route).is_file()
tracked=subprocess.check_output(['git','ls-files','-z'],cwd=ROOT).decode('utf-8').strip('\0').split('\0')
coverage=json.loads((SITE/'coverage/manifest.json').read_text())
assert {f['path'] for f in coverage['files']}==set(tracked)
assert coverage['rendered_documents']==sum(p.endswith('.md') for p in tracked)
assert len(list((SITE/'docs').rglob('*.html')))==coverage['rendered_documents']
print(f'Verified five site sections, 71 maps, {coverage["rendered_documents"]} documents, complete tracked-file index, theme assets and {count} local links; no firmware binary in site.')
