"""Create a separately named image satisfying the recovered startup checksum.

Uses an explicit compensation word in the FF trailer, not a claimed factory
checksum field. Preserves the original, all calibration bytes, all application
instructions, the 0x5AA5 trailer marker and the unavailable boot region.
"""
import csv
import hashlib
import json
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
SOURCE=ROOT/'firmware/XT660X 2005.bin'
DEST=ROOT/'firmware/XT660X 2005 startup-checksum-fixed.bin'
image=SOURCE.read_bytes()
expected_hash='5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280'
assert hashlib.sha256(image).hexdigest()==expected_hash
start,end,word,target=0x1800,0xf800,0xf7fc,0xaa55
assert image[word:word+2]==b'\xff\xff' and image[0xf7fe:0xf800]==b'\x5a\xa5'
def checksum(data):return sum(int.from_bytes(data[a:a+2],'big') for a in range(start,end,2))&65535
with (ROOT/'analysis/disassembly.tsv').open() as f:
    for r in csv.DictReader(f,delimiter='\t'):
        a=int(r['address'],16);z=a+len(r['bytes'])//2
        assert not (a<word+2 and z>word),'compensation intersects decoded instruction'
with (ROOT/'analysis/references.tsv').open() as f:
    for r in csv.DictReader(f,delimiter='\t'):
        try:a=int(r['to'],16)
        except ValueError:continue
        assert a not in [word,word+1],'compensation has a static reference'
before=checksum(image)
old=int.from_bytes(image[word:word+2],'big')
new=(old+target-before)&65535
fixed=bytearray(image);fixed[word:word+2]=new.to_bytes(2,'big')
assert checksum(fixed)==target
assert fixed[:word]==image[:word] and fixed[word+2:]==image[word+2:]
assert fixed[0x1800:0x5000]==image[0x1800:0x5000]
changes=[dict(offset=f'0x{a:04X}',before=f'0x{x:02X}',after=f'0x{y:02X}') for a,(x,y) in enumerate(zip(image,fixed)) if x!=y]
DEST.write_bytes(fixed)
report=dict(source=SOURCE.name,output=DEST.name,source_sha256=expected_hash,
    output_sha256=hashlib.sha256(fixed).hexdigest(),bytes=len(fixed),
    algorithm='sum unsigned big-endian 16-bit words modulo 65536',
    first_byte='0x1800',last_byte_inclusive='0xF7FF',target='0xAA55',
    before=f'0x{before:04X}',after=f'0x{checksum(fixed):04X}',
    compensation_word=dict(offset=f'0x{word:04X}',before=f'0x{old:04X}',after=f'0x{new:04X}',
        status='analyst-selected FF trailer padding; not an identified manufacturer checksum field'),
    changes=changes,calibration_bytes_unchanged=True,decoded_instructions_unchanged=True,
    marker_5aa5_unchanged=True,boot_placeholder_unchanged=True,
    limitations=['Corrects the startup range only; full-address-space check includes unavailable boot bytes.',
                 'Static analysis finds no reference to compensation bytes; absent boot code cannot be inspected.',
                 'Not hardware or flash-programmer validated.'])
(ROOT/'analysis/semantics/checksum_fix.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
print(json.dumps(report,indent=2))
