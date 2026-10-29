"""Run on Linux/WSL with a compiled libxt660_full.so.

Independent p-code interpreter compares every translated instruction with two states.
CPU12 semantic fixtures independently check indexed words, carry/borrow, stack and axes.
"""
import ctypes as ct, json, random, sys, collections, hashlib, re
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1];FULL=ROOT/'analysis/full'
rows=[json.loads(s) for s in (FULL/'instructions.jsonl').read_text().splitlines()]
byaddr={r['address']:r for r in rows}
class State(ct.Structure):
    _fields_=[('ram',ct.c_uint8*65536),('reg',ct.c_uint8*64),('pc',ct.c_uint16)]
lib=ct.CDLL(sys.argv[1]);lib.xt_step.argtypes=[ct.POINTER(State)];lib.xt_step.restype=ct.c_int
def rd(b,a,n):return int.from_bytes(bytes(b[(a+i)%len(b)] for i in range(n)),'big')
def wr(b,a,n,v):
    for i in range(n):b[(a+i)%len(b)]=(v>>(8*(n-i-1)))&255
def mask(n):return (1<<(8*n))-1
def signed(v,n):return v-(1<<(8*n)) if v&(1<<(8*n-1)) else v
def reference(row,ram,reg):
    temp={}
    def read(v):
        a=v['offset'];n=v['size'];space=v['space']
        if space=='const':return a&mask(n)
        if space=='RAM':return rd(ram,a,n)
        if space=='register':return rd(reg,a,n)
        if space=='unique':return int.from_bytes(bytes(temp[a+i] for i in range(n)),'big')
        raise AssertionError(space)
    def write(v,value):
        a=v['offset'];n=v['size'];space=v['space'];value&=mask(n)
        if space=='RAM':wr(ram,a,n,value)
        elif space=='register':wr(reg,a,n,value)
        elif space=='unique':temp.update({a+i:q for i,q in enumerate(value.to_bytes(n,'big'))})
        else:raise AssertionError(space)
    for o in row['pcode']:
        op=o['op'];v=o['inputs'];out=o.get('output')
        if op in ('BRANCH','CALL'):return 0,v[0]['offset']
        if op=='CBRANCH':
            if read(v[1]):return 0,v[0]['offset']
            continue
        if op in ('BRANCHIND','CALLIND','RETURN'):return 0,read(v[0])&65535
        if op=='LOAD':write(out,rd(ram,read(v[1]),out['size']));continue
        if op=='STORE':wr(ram,read(v[1]),v[2]['size'],read(v[2]));continue
        args=[read(x) for x in v];a=args[0];b=args[1] if len(args)>1 else None;n=v[0]['size']
        if op in ('COPY','INT_ZEXT'):r=a
        elif op=='INT_ADD':r=a+b
        elif op=='INT_SUB':r=a-b
        elif op=='INT_MULT':r=a*b
        elif op=='INT_AND':r=a&b
        elif op=='INT_OR':r=a|b
        elif op=='INT_XOR':r=a^b
        elif op=='INT_NEGATE':r=~a
        elif op=='INT_2COMP':r=-a
        elif op=='INT_LEFT':r=a<<b if b<n*8 else 0
        elif op=='INT_RIGHT':r=a>>b if b<n*8 else 0
        elif op=='INT_EQUAL':r=int(a==b)
        elif op=='INT_NOTEQUAL':r=int(a!=b)
        elif op=='INT_LESS':r=int(a<b)
        elif op=='INT_LESSEQUAL':r=int(a<=b)
        elif op=='INT_SLESS':r=int(signed(a,n)<signed(b,n))
        elif op=='INT_CARRY':r=int(a+b>mask(n))
        elif op in ('INT_SCARRY','INT_SBORROW'):
            val=signed(a,n)+(signed(b,n) if op=='INT_SCARRY' else -signed(b,n))
            r=int(not -(1<<(n*8-1))<=val<(1<<(n*8-1)))
        elif op=='BOOL_OR':r=int(bool(a) or bool(b))
        elif op=='BOOL_XOR':r=int(bool(a)!=bool(b))
        elif op=='SUBPIECE':r=a>>(8*b)
        elif op in ('INT_DIV','INT_REM'):
            if b==0:return 3,row['address']
            r=a//b if op=='INT_DIV' else a%b
        else:raise AssertionError(op)
        write(out,r)
    return 0,(row['address']+len(row['bytes'])//2)&65535

rng=random.Random(6602005);image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
base=bytearray(image);base[:0x1800]=rng.randbytes(0x1800)
checks=0
for row in rows:
    for mode in range(2):
        ram=bytearray(base);reg=bytearray(rng.randbytes(64));wr(reg,42,2,0x0ff0)
        if mode==0:wr(reg,0,2,0xffff);wr(reg,16,2,0x1800);reg[49]=0xff
        s=State();ct.memmove(s.ram,bytes(ram),65536);ct.memmove(s.reg,bytes(reg),64);s.pc=row['address']
        expected,pc=reference(row,ram,reg);actual=lib.xt_step(ct.byref(s))
        assert actual==expected and s.pc==pc,(hex(row['address']),row['assembly'],actual,expected,s.pc,pc)
        assert bytes(s.reg)==reg,(hex(row['address']),'register mismatch')
        assert bytes(s.ram)==ram,(hex(row['address']),'memory mismatch')
        checks+=1

def state(pc):
    s=State();ct.memmove(s.ram,image,len(image));wr(s.reg,42,2,0x0ff0);s.pc=pc;return s
fixtures=[]
def single(pc,setup,check,label):
    s=state(pc);setup(s);assert lib.xt_step(ct.byref(s))==0;assert check(s),label;fixtures.append(label)
single(0xc1f3,lambda s:(wr(s.reg,0,2,0x1234),wr(s.reg,16,2,0x2200),wr(s.ram,0x2200,2,0x1000)),
       lambda s:rd(s.reg,0,2)==0x234 and rd(s.reg,16,2)==0x2200,'SUBD indexed reads a word, not its address')
single(0xc1f9,lambda s:(wr(s.reg,0,2,0x4567),wr(s.reg,16,2,0x2200),wr(s.ram,0x2202,2,0x4567)),
       lambda s:(s.reg[49]&0xf)==4,'CPD indexed word equality sets Z')
single(0xc1ff,lambda s:(wr(s.reg,16,2,0x2200),wr(s.ram,0x2204,2,0x5678)),
       lambda s:rd(s.reg,18,2)==0x5678,'LDY indexed reads the word value')
adc=next(r['address'] for r in rows if r['assembly']=='ADCA #0x0')
sbc=next(r['address'] for r in rows if r['assembly']=='SBCA #0x0')
single(adc,lambda s:(wr(s.reg,0,1,0),wr(s.reg,49,1,2)),lambda s:s.reg[0]==0 and not(s.reg[49]&2),'ADC clears stale overflow')
single(adc,lambda s:(wr(s.reg,0,1,0x7f),wr(s.reg,49,1,1)),lambda s:s.reg[0]==0x80 and s.reg[49]&2,'ADC includes incoming carry in signed overflow')
single(sbc,lambda s:(wr(s.reg,0,1,0),wr(s.reg,49,1,1)),lambda s:s.reg[0]==255 and s.reg[49]&1,'SBC includes incoming borrow in outgoing carry')
for operation,operand in [('ADCA',0),('SBCA',0),('SBCA',255)]:
    address=next(r['address'] for r in rows if r['assembly']==f'{operation} #0x{operand:x}')
    for a in range(256):
        for carry in range(2):
            for old_overflow in range(2):
                s=state(address);s.reg[0]=a;s.reg[49]=carry|(old_overflow<<1)
                assert lib.xt_step(ct.byref(s))==0
                raw=a+operand+carry if operation=='ADCA' else a-operand-carry
                sv=signed(a,1)+signed(operand,1)+carry if operation=='ADCA' else signed(a,1)-signed(operand,1)-carry
                result=raw&255
                flags=((result>>7)<<3)|((result==0)<<2)|((not -128<=sv<=127)<<1)|((raw>255) if operation=='ADCA' else (raw<0))
                assert s.reg[0]==result and s.reg[49]&15==flags,(operation,a,operand,carry,old_overflow)
                checks+=1
fixtures.append('ADC #0 and SBC #0/#255: exhaustive A, incoming carry and stale V combinations')
# Different A and B values are essential: a shared-value fixture misses a wrong
# source accumulator. Check every ADCB immediate instance in the actual image.
for row in rows:
    if row['assembly']!='ADCB #0x0':continue
    for b in range(256):
        for carry in range(2):
            for old_overflow in range(2):
                a=b^0xa5
                s=state(row['address']);s.reg[0]=a;s.reg[1]=b;s.reg[49]=carry|(old_overflow<<1)
                assert lib.xt_step(ct.byref(s))==0
                result=(b+carry)&255
                flags=((result>>7)<<3)|((result==0)<<2)|((b==127 and carry==1)<<1)|(b+carry>255)
                assert s.reg[0]==a and s.reg[1]==result and s.reg[49]&15==flags,(row['address'],a,b,carry)
                checks+=1
fixtures.append('Every ADCB immediate instance: exhaustive B/carry/stale V with a distinct A accumulator')
# Direct/ext BRSET and BRCLR: every input byte for every firmware instance.
# Expected predicate comes from CPU12RM Rev.4 p115, not from exported p-code.
branch_cases=0
for row in rows:
    m=re.fullmatch(r'(BRSET|BRCLR) (0x[0-9a-f]+),(0x[0-9a-f]+),(0x[0-9a-f]+)',row['assembly'])
    if not m:continue
    op,addr,bitmask,target=m.groups();addr=int(addr,16);bitmask=int(bitmask,16);target=int(target,16)
    for value in range(256):
        s=state(row['address']);s.ram[addr]=value;s.reg[49]=0xa5
        taken=(value&bitmask)==(bitmask if op=='BRSET' else 0)
        assert lib.xt_step(ct.byref(s))==0
        assert s.pc==(target if taken else row['address']+len(row['bytes'])//2),(row['assembly'],value,s.pc)
        assert s.reg[49]==0xa5 and s.ram[addr]==value
        branch_cases+=1;checks+=1
fixtures.append(f'BRSET/BRCLR direct and extended: {branch_cases} exhaustive byte cases; targets and unchanged CCR checked')
single(0x5083,lambda s:None,lambda s:s.pc==0x5fa4 and rd(s.reg,42,2)==0x0fee and rd(s.ram,0x0fee,2)==0x5086,'JSR pushes the correct return address')

def run_func(entry,regsetup,ramsetup=lambda s:None):
    s=state(entry);wr(s.ram,0x0ff0,2,0x1700);regsetup(s);ramsetup(s)
    for steps in range(10000):
        if s.pc==0x1700:return s
        status=lib.xt_step(ct.byref(s));assert status==0,(hex(s.pc),status)
    raise AssertionError(('function did not return',hex(entry)))
# Independent high-level expected results at exact knots avoid imposing a guessed rounding mode.
table=0x32ef;minimum=image[table];factor=image[table+2]
for k in range(15):
    raw=minimum+k*256//factor
    s=run_func(0xc1cd,lambda s:(wr(s.reg,0,1,raw),wr(s.reg,16,2,table)))
    assert s.reg[0]==image[table+3+k],('uniform byte curve',k,s.reg[0]);checks+=1
fixtures.append('Uniform byte-axis helper matches all 15 original table knots')
table=0x19a8;minimum=rd(image,table,2);factor=rd(image,table+4,2)
for k in range(11):
    raw=minimum+k*65536//factor
    s=run_func(0xc1f2,lambda s:(wr(s.reg,0,2,raw),wr(s.reg,16,2,table)))
    assert s.reg[0]==image[table+6+k],('uniform word curve',k,s.reg[0]);checks+=1
fixtures.append('Uniform word-axis helper matches all 11 original table knots')
for count,ptr in [(30,0x1ad0),(45,0x1b0c),(20,0x4246),(32,0x426e)]:
    for k in range(count):
        raw=rd(image,ptr+2*k,2)
        s=run_func(0xca49,lambda s:wr(s.reg,0,1,count),lambda s:(wr(s.ram,0xba2,2,raw),wr(s.ram,0xba4,2,ptr)))
        assert rd(s.reg,0,2)==k*256,('axis knot',hex(ptr),k,rd(s.reg,0,2));checks+=1
fixtures.append('Axis binary search matches all knots on four major axes')
s=state(0xf8a0);assert lib.xt_step(ct.byref(s))==2;fixtures.append('Absent boot target stops explicitly')
report={'instructions_tested':len(rows),'instruction_states':len(rows)*2,'checks_including_helper_knots':checks,
        'raw_ir_sha256':hashlib.sha256((FULL/'instructions.jsonl').read_bytes()).hexdigest(),
        'compiled_library_sha256':hashlib.sha256(Path(sys.argv[1]).read_bytes()).hexdigest(),
        'c_sources_sha256':hashlib.sha256(b''.join(p.name.encode()+p.read_bytes() for p in sorted((FULL/'c').iterdir()) if p.suffix in ('.c','.h'))).hexdigest(),
        'differential_reference':'Independent Python evaluator of exported raw p-code; confirms C translation consistency, not silicon equivalence.',
        'independent_cpu12_fixtures':fixtures,'result':'passed'}
(FULL/'validation.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
