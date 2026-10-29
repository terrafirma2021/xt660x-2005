"""Check package coverage, key pin assignments and instruction-byte provenance."""
import hashlib
import json
import re
import xml.etree.ElementTree as ET
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'analysis/semantics'
report=json.loads((OUT/'mcu_pin_overview.json').read_text())
image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
assert report['firmware_sha256']==hashlib.sha256(image).hexdigest()
assert report['generator_sha256']==hashlib.sha256((ROOT/'scripts/build_pin_overview.py').read_bytes()).hexdigest()
assert report['template_sha256']==hashlib.sha256((ROOT/'scripts/pin_overview_template.html').read_bytes()).hexdigest()
pins=report['pins'];assert [p['pin'] for p in pins]==list(range(1,81))
assert all(p['ecu_connector_cavity'] is None for p in pins)
for number,name in {1:'PT2/IOC2',2:'PT3/IOC3',5:'PT6/IOC6',6:'PT7/IOC7',13:'PP1/PWM1',14:'PP2/PWM2',
                    16:'PP4/PWM4',20:'PB0',24:'PB4',47:'PA2',59:'PAD0/AN0',60:'PAD1/AN1',61:'PAD2/AN2',
                    62:'PAD3/AN3',63:'PAD4/AN4',64:'PAD5/AN5',65:'PAD6/AN6',66:'PAD7/AN7/ETRIG',
                    69:'PS2/RxD1',70:'PS3/TxD1',80:'PT1/IOC1'}.items():assert pins[number-1]['signal']==name
evidence_count=0
for p in pins:
    assert len(p['evidence'])==len(p['evidence_instructions'])
    for a,r in zip(p['evidence'],p['evidence_instructions']):
        offset=int(a,16);raw=bytes.fromhex(r['bytes'])
        assert offset==int(r['address'],16) and image[offset:offset+len(raw)]==raw
        evidence_count+=1
svg=ET.parse(OUT/'mcu_pin_overview.svg')
assert sorted(int(g.attrib['data-pin']) for g in svg.iter() if 'data-pin' in g.attrib)==list(range(1,81))
page=(OUT/'MCU_PIN_OVERVIEW.html').read_text(encoding='utf-8')
embedded=re.search(r'<script id="pin-data" type="application/json">(.*?)</script>',page,re.S)[1]
assert json.loads(embedded)==report
assert '@@' not in page
print(f'Checked 80 package positions, {evidence_count} instruction anchors, unresolved connector cavities, SVG pins and embedded HTML data.')
