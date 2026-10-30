"""Validate generated site routes and links against the packaged artifact."""
from html.parser import HTMLParser
from pathlib import Path
from urllib.parse import unquote, urlsplit
import json
import subprocess
import re
from sensor_profiles import sensor_code

ROOT=Path(__file__).resolve().parents[1]
SITE=ROOT/'_site'

def luminance(hex_colour):
    channels=[int(hex_colour[i:i+2],16)/255 for i in (1,3,5)]
    return sum(weight*(v/12.92 if v<=.04045 else ((v+.055)/1.055)**2.4)
               for weight,v in zip((.2126,.7152,.0722),channels))

class Links(HTMLParser):
    def __init__(self):
        super().__init__(); self.links=[]; self.map_count=0; self.theme_buttons=0; self.cells=[]; self.cell=None; self.grid_count=0; self.preview_count=0; self.curves=0; self.curve_json=None; self.reading_curve=False
    def handle_starttag(self,tag,attrs):
        attrs=dict(attrs)
        for key in ('href','src'):
            if attrs.get(key):self.links.append(attrs[key])
        if 'map-card' in attrs.get('class','').split():self.map_count+=1
        if attrs.get('id')=='theme-toggle':self.theme_buttons+=1
        if attrs.get('id')=='calibration-grid':self.grid_count+=1
        if 'map-mini' in attrs.get('class','').split():self.preview_count+=1
        if 'curve-plot' in attrs.get('class','').split():self.curves+=1
        if attrs.get('class')=='curve-data':self.reading_curve=True;self.curve_json=''
        if 'map-cell' in attrs.get('class','').split():
            self.cell=dict(attrs,text='');self.cells.append(self.cell)
    def handle_data(self,text):
        if self.reading_curve:self.curve_json+=text
        if self.cell is not None:self.cell['text']+=text
    def handle_endtag(self,tag):
        if tag=='button':self.cell=None
        if tag=='script':self.reading_curve=False

count=0
for page in SITE.rglob('*.html'):
    parser=Links();parser.feed(page.read_text(encoding='utf-8'))
    assert parser.theme_buttons==1,f'Missing or duplicate theme switch: {page}'
    assert any(urlsplit(link).path.endswith('/theme.js') for link in parser.links),page
    assert any(urlsplit(link).path.endswith('/theme.css') for link in parser.links),page
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
assert parser.preview_count==71
image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
cell_count=0;curve_count=0;cell_inks=set()
for m in json.loads((ROOT/'analysis/maps.json').read_text()):
    parser=Links();parser.feed((SITE/'docs/map_details'/f"{m['id']}.html").read_text(encoding='utf-8'))
    assert parser.grid_count==1 and len(parser.cells)==m['rows']*m['columns'],m['id']
    assert sum(c.get('tabindex')=='0' for c in parser.cells)==1
    assert parser.curves==(1 if m['rows']==1 else 0)
    curve_count+=parser.curves
    if parser.curves:
        data=json.loads(parser.curve_json)
        assert [v for _,v in data['knots']]==m['raw_values'][0]
        if m['kind']=='1D_sensor_conversion':
            assert data['samples']==[[a,sensor_code(image,a,m['id']=='coolant_sensor_conversion')] for a in range(1024)]
        else:assert data['samples']==data['knots']
    for index,c in enumerate(parser.cells):
        address=int(m['data_address'],16)+index*m['element_bytes']
        value=int.from_bytes(image[address:address+m['element_bytes']],'big')
        assert int(c['data-address'],16)==address
        assert int(c['data-value'])==int(c['text'])==value
        assert (int(c['data-row']),int(c['data-column']))==divmod(index,m['columns'])
        background=re.search(r'--cell-bg:(#[0-9a-f]{6})',c['style'])[1]
        foreground=re.search(r'--cell-fg:(#[0-9a-f]{6})',c['style'])[1]
        light,dark=sorted((luminance(background),luminance(foreground)),reverse=True)
        assert (light+.05)/(dark+.05)>=7,('Insufficient cell text contrast',m['id'],address)
        cell_inks.add(foreground)
        cell_count+=1
assert len(cell_inks)==1,'Heatmap numbers must use consistent ink across values'
assert not list(SITE.rglob('*.bin'))
for route in ('index.html','maps/index.html','pins/index.html','research/index.html','coverage/index.html','firmware/index.html'):
    assert (SITE/route).is_file()
tracked=subprocess.check_output(['git','ls-files','-z'],cwd=ROOT).decode('utf-8').strip('\0').split('\0')
coverage=json.loads((SITE/'coverage/manifest.json').read_text())
assert {f['path'] for f in coverage['files']}==set(tracked)
assert coverage['rendered_documents']==sum(p.endswith('.md') for p in tracked)
assert len(list((SITE/'docs').rglob('*.html')))==coverage['rendered_documents']
library=json.loads((SITE/'firmware/catalog.json').read_text(encoding='utf-8'))
for item in library['images']:
    assert (SITE/'firmware'/item['id']/'index.html').is_file()
assert 'firmware-select' in (SITE/'maps/index.html').read_text(encoding='utf-8')
print(f'Verified six site sections, 71 maps, {coverage["rendered_documents"]} documents, {cell_count} grid cells matched to firmware, 71 colour previews, {curve_count} curves, complete tracked-file index, theme assets and {count} local links; no firmware binary in site.')
