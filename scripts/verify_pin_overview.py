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
connector=report['ecu_connector']
assert connector['generator_sha256']==hashlib.sha256((ROOT/'scripts/ecu_connector.py').read_bytes()).hexdigest()
slots=connector['slots']
assert [s['position'] for s in slots]==[f'{row}{col:02}' for row in 'UL' for col in range(1,14)]
assert [s['wire'] for s in slots[:13]]==['L/W','Y/L','Y/G',None,'W','Gy','B/W',None,'L','Br/R','R','R/B','O']
assert [s['wire'] for s in slots[13:]]==['B/Y','L/B','G/R','Br/W','P/W','Y','B/L','L/R','G/Y','Y/B','R/L',None,'B']
assert sum(s['association']=='Function corroborated' for s in slots)==15
assert sum(s['association']=='Candidate association' for s in slots)==1
assert sum(s['association']=='Unresolved alternatives' for s in slots)==2
assert sum(s['association']=='Internal rail' for s in slots)==5
assert sum(s['wire'] is None for s in slots)==3
assert all(not s['continuity_verified'] and s['oem_cavity_number'] is None for s in slots)
for p in pins:
    expected=[s['position'] for s in slots if p['pin'] in s['mcu_package_pins']]
    assert [s['position'] for s in p['ecu_connector_positions']]==expected
for position,wire,mcus in [('U10','Br/R',[13]),('L03','G/R',[65]),('U12','R/B',[5]),('U13','O',[2]),('L09','G/Y',[14]),('U02','Y/L',[69,70]),('L01','B/Y',[20,24]),('L02','L/B',[20,24])]:
    s=next(s for s in slots if s['position']==position)
    assert (s['wire'],s['mcu_package_pins'])==(wire,mcus)
assert {g.attrib['data-connector'] for g in ET.parse(OUT/'ecu_connector.svg').iter() if 'data-connector' in g.attrib}=={s['position'] for s in slots}
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
assert 'Unknown - package pin' not in page
assert 'ECU_CONNECTOR.md' in page
print(f'Checked 80 package positions, {evidence_count} instruction anchors, 26 connector positions, 15 corroborated circuits, one candidate, two unresolved alternatives, five power/return routes, SVGs and embedded data.')
