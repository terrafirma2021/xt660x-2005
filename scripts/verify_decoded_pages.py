"""Validate per-image routes and every rendered cell against its own BIN."""
import json
from html.parser import HTMLParser
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
class Cells(HTMLParser):
    def __init__(self):super().__init__();self.cells=[];self.current=None
    def handle_starttag(self,tag,attrs):
        attrs=dict(attrs)
        if 'map-cell' in attrs.get('class','').split():self.current=dict(attrs,text='');self.cells.append(self.current)
    def handle_data(self,s):
        if self.current is not None:self.current['text']+=s
    def handle_endtag(self,tag):
        if tag=='button':self.current=None
registry={i['id']:i for i in json.loads((ROOT/'firmware/registry.json').read_text())['images']}
count=0;grids=0
for item in json.loads((ROOT/'analysis/firmware/decode_catalog.json').read_text())['images']:
    entry=registry[item['id']];image=b'\xff'*entry['base_address']+(ROOT/entry['file']).read_bytes()
    folder=ROOT/'_site/firmware'/item['id']/'maps'
    assert (folder/'index.html').is_file()
    for m in json.loads((ROOT/item['maps_path']).read_text(encoding='utf-8')):
        markup=(folder/m['id']/'index.html').read_text(encoding='utf-8');p=Cells();p.feed(markup)
        assert m['display_name'].replace('&','&amp;') in markup
        assert len(p.cells)==m['rows']*m['columns']
        for n,c in enumerate(p.cells):
            a=int(m['data_address'],16)+n*m['element_bytes'];v=int.from_bytes(image[a:a+m['element_bytes']],'big')
            assert int(c['data-address'],16)==a and int(c['data-value'])==int(c['text'])==v,(item['id'],m['id'],n)
            assert (int(c['data-row']),int(c['data-column']))==divmod(n,m['columns'])
        count+=len(p.cells);grids+=1
print(f'Verified {grids} per-image map pages and {count} cells against all nine source BIN records.')
