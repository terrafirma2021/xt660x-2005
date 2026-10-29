"""Small independent CPU12 instruction interpreter for selected protocol paths.
Not a whole ECU or peripheral emulator. All decoded instruction bytes are checked.
"""
import csv, json, hashlib, random, sys
from pathlib import Path

ROOT=Path(sys.argv[1]) if len(sys.argv)>1 else Path(__file__).resolve().parents[1]
ROM=(ROOT/'firmware'/'XT660X 2005.bin').read_bytes()
ROWS={int(r['address'],16):r for r in csv.DictReader((ROOT/'analysis'/'disassembly.tsv').open(),delimiter='\t')}
for address,row in ROWS.items():
    raw=bytes.fromhex(row['bytes'])
    assert ROM[address:address+len(raw)]==raw

class CPU:
    def __init__(self):
        self.m=bytearray(ROM); self.m[:0x1800]=bytes(0x1800)
        self.a=self.b=self.x=self.y=0; self.c=self.z=False
        self.stack=[]; self.calls=[]
    @property
    def d(self): return self.a*256+self.b
    @d.setter
    def d(self,v): self.a=(v>>8)&255; self.b=v&255
    def addr(self,s):
        if s.endswith(',IX'): return (self.x+int(s[:-3],0))&65535
        return int(s,0)
    def val(self,s,width=8):
        if s.startswith('#'): return int(s[1:],0)
        a=self.addr(s)
        return self.m[a] if width==8 else self.m[a]*256+self.m[(a+1)&65535]
    def put(self,s,v,width=8):
        a=self.addr(s)
        if width==16: self.m[a]=(v>>8)&255; a=(a+1)&65535
        self.m[a]=v&255
    def run(self,start,stop=None,max_steps=700000):
        pc=start
        for count in range(max_steps):
            if pc==stop: return count
            row=ROWS[pc]; ins=row['instruction']; op,_,arg=ins.partition(' ')
            nxt=pc+len(bytes.fromhex(row['bytes']))
            reg={'A':'a','B':'b','D':'d','X':'x','Y':'y'}
            if op in ('LDAA','LDAB','LDD','LDX','LDY'):
                r={'LDAA':'a','LDAB':'b','LDD':'d','LDX':'x','LDY':'y'}[op]
                v=self.val(arg,8 if r in 'ab' else 16); setattr(self,r,v); self.z=v==0
            elif op in ('STAA','STAB','STD','STX','STY'):
                r={'STAA':'a','STAB':'b','STD':'d','STX':'x','STY':'y'}[op]
                v=getattr(self,r); self.put(arg,v,8 if r in 'ab' else 16); self.z=v==0
            elif op in ('CLRA','CLRB','CLR'):
                if op=='CLR': self.put(arg,0)
                else: setattr(self,op[-1].lower(),0)
                self.z=True; self.c=False
            elif op in ('ANDA','ANDB','ORAA','ORAB','EORA','EORB'):
                r=op[-1].lower(); v=getattr(self,r); b=self.val(arg)
                v=v&b if op.startswith('AND') else v|b if op.startswith('ORA') else v^b
                setattr(self,r,v); self.z=v==0
            elif op in ('ADDA','ADDB','ADCA','ADCB','SUBA','SUBB','SBCA','SBCB','ADDD','SUBD'):
                r=op[-1].lower(); w=16 if r=='d' else 8; limit=1<<w
                a=getattr(self,r); b=self.val(arg,w)
                if op.startswith(('ADC','SBC')): b+=int(self.c)
                subtract=op.startswith(('SUB','SBC')); v=a-b if subtract else a+b
                self.c=v<0 if subtract else v>=limit; v%=limit
                setattr(self,r,v); self.z=v==0
            elif op in ('CMPA','CMPB','CPD','CPX','CPY','BITA','BITB'):
                r=op[-1].lower(); a=getattr(self,r); b=self.val(arg,8 if r in 'ab' else 16)
                self.z=(a&b)==0 if op.startswith('BIT') else a==b
                if not op.startswith('BIT'): self.c=a<b
            elif op in ('INCA','INCB','INX','INY','INC'):
                r=op[-1].lower(); v=self.val(arg) if op=='INC' else getattr(self,r)
                v=(v+1)&(65535 if r in 'xy' else 255)
                if op=='INC': self.put(arg,v)
                else: setattr(self,r,v)
                self.z=v==0
            elif op in ('BSET','BCLR','BRSET','BRCLR'):
                parts=arg.split(','); a=int(parts[0],0); mask=int(parts[1],0)
                if op=='BSET': self.m[a]|=mask
                elif op=='BCLR': self.m[a]&=255^mask
                elif ((self.m[a]&mask)==mask if op=='BRSET' else (self.m[a]&mask)==0): nxt=int(parts[2],0)
            elif op in ('BEQ','BNE','BCS','BCC','BHI','BLS','BRA','LBEQ','LBNE','LBCS','LBCC','LBHI','LBLS','LBRA'):
                o=op[1:] if op.startswith('LB') else op
                take={'BEQ':self.z,'BNE':not self.z,'BCS':self.c,'BCC':not self.c,'BHI':not(self.c or self.z),'BLS':self.c or self.z,'BRA':True}[o]
                if take: nxt=int(arg,0)
            elif op=='JMP': nxt=int(arg,0)
            elif op in ('JSR','BSR'):
                target=int(arg,0)
                if target!=0x5fa4: self.calls.append(nxt); nxt=target
                # 5FA4 watchdog service saves/restores D and does not change X/Y.
            elif op=='RTS':
                if not self.calls: return count+1
                nxt=self.calls.pop()
            elif op in ('XGDX','XGDY'):
                r=op[-1].lower(); v=getattr(self,r); setattr(self,r,self.d); self.d=v
            elif op in ('PSHX','PSHY','PSHD','PSHA','PSHB'): self.stack.append(getattr(self,op[-1].lower()))
            elif op in ('PULX','PULY','PULD','PULA','PULB'): setattr(self,op[-1].lower(),self.stack.pop())
            elif op=='TBA': self.a=self.b; self.z=self.a==0
            elif op=='TAB': self.b=self.a; self.z=self.b==0
            elif op=='CBA': self.z=self.a==self.b; self.c=self.a<self.b
            elif op=='ABA':
                v=self.a+self.b; self.c=v>255; self.a=v&255; self.z=self.a==0
            elif op=='ABX': self.x=(self.x+self.b)&65535
            elif op=='MUL': self.d=self.a*self.b; self.c=bool(self.b&128)
            elif op=='LSRD': self.c=bool(self.d&1); self.d>>=1; self.z=self.d==0
            elif op in ('NOP','SEI','CLI'): pass
            else: raise ValueError(f'Unsupported {pc:04X}: {ins}')
            pc=nxt
        raise RuntimeError(f'Step limit at {pc:04X}')

results=[]
def record(name,**kw): results.append({'test':name,**kw})

c=CPU(); c.d=0xf7ff; c.run(0xa489)
word_sum=sum(int.from_bytes(ROM[i:i+2],'big') for i in range(0x1800,0xf800,2))&65535
assert c.val('0xe66',16)==word_sum==0xaad5
record('Boot ROM checksum',range='1800-F7FF inclusive',computed='AAD5',expected='AA55',matches=False)

rng=random.Random(660)
for _ in range(4096):
    p=bytes(rng.randrange(256) for _ in range(4)); c=CPU(); c.m[0x8a6:0x8aa]=p; c.a=p[3]; c.run(0x6486)
    assert c.m[0x8aa]==sum(p)&255
record('Five-byte reply checksum',vectors=4096,result='passed')

for seed in range(256):
    c=CPU(); c.m[0x45]=seed; c.b=0x3e; c.run(0xd36c)
    a=(19*seed+19)&255; b=(19*a+19)&255; d=(19*b+19)&255
    assert c.m[0x8a6:0x8ab]==bytes([a,b,0x43,d,(a+b+0x43+d)&255])
    s=a*b+b*d+d*a
    response=bytes([0x80|((s>>12)&63),0x80|((s>>6)&63),0x80|(s&63)])
    c.m[0xdd5]=0; c.m[0xd06]=2; c.m[0xd08]=0; c.m[0xd25:0xd28]=response
    c.run(0xa9af,stop=0xaa51)
    assert c.m[0xd08]&0x30==0x30
    c.m[0xd08]=0; c.m[0xd27]^=1; c.run(0xa9af,stop=0xaa51)
    assert c.m[0xd08]&0x30==0x20
record('Challenge generation and response validation',seeds=256,valid_and_corrupted_responses=512,result='passed')

c=CPU(); c.m[0x45]=0; c.m[0xdd5]=0
frames=[]
for cmd in [0x3e,0x3d,0x80,0x80,0x80]:
    c.b=cmd; c.m[0xd10]=cmd; c.run(0xd36c); frames.append(c.m[0x8a6:0x8ab].hex(' '))
assert frames[1]=='4a 4a 4a 4a 28'
assert frames[2:]==['47 47 47 47 1c']*3
record('Authentication parser stage sequence',commands='3E 3D 80 80 80',frames=frames,result='passed; zero response is accepted for buffering, not authenticated')

# Verify normal handler entry independently from corrupted high-level C.
c=CPU(); c.m[0x8a0]=0x80
for cmd in [0xfe,0x01]:
    c.b=cmd; c.m[0xe1e]=cmd; c.run(0xce51)
assert c.m[0x8a0]&0x82==2
record('Normal application handshake',commands='FE 01',result='normal state bit set; startup state bit cleared')

# With menu state established, CA -> CB advances, CA -> CC decreases.
c=CPU(); c.m[0x8a0]=4; c.m[0xd87]=9; c.m[0xd3c]=21
c.m[0xd3d:0xd52]=ROM[0x4ef6:0x4f0b]; c.m[0xbdd]=1
for cmd in [0xca,0xcb]:
    c.b=cmd; c.m[0xe1e]=cmd; c.run(0xce51)
assert c.m[0xbdd]==3
for cmd in [0xca,0xcc]:
    c.b=cmd; c.m[0xe1e]=cmd; c.run(0xce51)
assert c.m[0xbdd]==1
record('Diagnostic button navigation',result='CA then CB increments; CA then CC decrements')

# Counterfactual uses interpreter memory only; it does not save a modified ROM.
c=CPU(); c.m[0x4e7d]=0; c.d=0xf7ff; c.run(0xa489)
assert c.val('0xe66',16)==0xaa55
record('Candidate pre-patch checksum',change_in_simulated_memory='4E7D: 80 -> 00',computed='AA55',expected='AA55',matches=True,
       provenance='User recalls 00 -> 80 patch; original image not supplied')

for config,complete,target in [(0x80,0,0xce3b),(0,0,0xce36),(0,0x80,0xce3b)]:
    c=CPU(); c.m[0xdd5]=config; c.m[0xd06]=complete; c.run(0xce2a,stop=target,max_steps=10)
record('Receive dispatch before and after patch',result='80 selects CE51 immediately; 00 selects D36C until 0D06 bit 7 is set')

# Full registered-record exchange in synthetic RAM, with no external storage I/O.
def auth_byte(cpu,cmd):
    cpu.b=cmd; cpu.m[0xd10]=cmd; cpu.run(0xd36c)
    return cpu.m[0x8a6:0x8ab].hex(' ')

for corrupt in (False,True):
    c=CPU(); c.m[0xdd5]=0; c.m[0xd08]=0x81; c.m[0xd37:0xd3a]=bytes.fromhex('41 42 43')
    trace=[{'peer':'3e','ecu':auth_byte(c,0x3e)},{'peer':'3d','ecu':auth_byte(c,0x3d)}]
    assert trace[0]['ecu']=='13 7c 43 47 19'
    assert trace[1]['ecu']=='41 42 4b 43 11'
    response=[0x83,0x83,0x9d^int(corrupt)]
    for b in response: trace.append({'peer':f'{b:02x}','ecu':auth_byte(c,b)})
    c.run(0xa9af,stop=0xaa51)
    if corrupt:
        trace.append({'peer':'3f','ecu':auth_byte(c,0x3f)})
        assert trace[-1]['ecu']=='46 46 46 46 18'; assert not c.m[0xd06]&0x80
    else:
        for i in range(4):
            trace.append({'peer':'3f','ecu':auth_byte(c,0x3f)})
            assert trace[-1]['ecu']=='45 45 45 45 14'
            assert bool(c.m[0xd06]&0x80)==(i==3)
        assert not c.m[0xd08]&1
    record('Registered authentication exchange '+('invalid' if corrupt else 'valid'),trace=trace,
           authenticated=bool(c.m[0xd06]&0x80),result='passed; synthetic record, no hardware/timing validation')

assert hashlib.sha256((ROOT/'firmware'/'XT660X 2005.bin').read_bytes()).hexdigest()==hashlib.sha256(ROM).hexdigest()
out={'source_commit':'1779f6e5f4a6ff2b8c8bd07e8ab47f67233f50f6','sha256':hashlib.sha256(ROM).hexdigest(),
     'method':'Independent selected-path CPU12 interpreter over byte-checked disassembly. Synthetic RAM and registers; no hardware timing or peripheral validation.',
     'authentication_configuration_byte':f'{ROM[0x4e7d]:02X}', 'tests':results}
output=Path(sys.argv[2]) if len(sys.argv)>2 else ROOT/'analysis'/'semantics'/'protocol_verification.json'
output.parent.mkdir(parents=True,exist_ok=True)
output.write_text(json.dumps(out,indent=2)+'\n')
print(json.dumps(out,indent=2))
