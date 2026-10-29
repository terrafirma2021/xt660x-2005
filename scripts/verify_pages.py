"""Validate generated site routes and links against the packaged artifact."""
from html.parser import HTMLParser
from pathlib import Path
from urllib.parse import unquote, urlsplit
import json

ROOT=Path(__file__).resolve().parents[1]
SITE=ROOT/'_site'
class Links(HTMLParser):
    def __init__(self):
        super().__init__(); self.links=[]; self.map_count=0
    def handle_starttag(self,tag,attrs):
        attrs=dict(attrs)
        for key in ('href','src'):
            if attrs.get(key):self.links.append(attrs[key])
        if 'map-card' in attrs.get('class','').split():self.map_count+=1

count=0
for page in SITE.rglob('*.html'):
    parser=Links();parser.feed(page.read_text(encoding='utf-8'))
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
for route in ('index.html','maps/index.html','pins/index.html','research/index.html'):
    assert (SITE/route).is_file()
print(f'Verified four site sections, 71 map entries and {count} local links; no firmware binary in site.')
