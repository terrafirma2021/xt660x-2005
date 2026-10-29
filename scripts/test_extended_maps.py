"""Independent raw-index/layout fixtures against the compiled CPU12 translation.

python3 scripts/test_extended_maps.py /absolute/path/libxt660_full.so
RAM-only synthetic cells test indexing even when the stock table is flat.
No input firmware or generated C is changed by these tests.
"""
import bisect
import ctypes as ct
import hashlib
import json
import random
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
maps=json.loads((ROOT/'analysis/maps.json').read_text())
base=bytes(0x1800)+image[0x1800:]
class State(ct.Structure):
    _fields_=[('ram',ct.c_uint8*65536),('reg',ct.c_uint8*64),('pc',ct.c_uint16)]
lib=ct.CDLL(sys.argv[1]);lib.xt_step.argtypes=[ct.POINTER(State)];lib.xt_step.restype=ct.c_int
def put(b,a,v):b[a]=v>>8;b[a+1]=v&255
def get(b,a):return b[a]*256+b[a+1]
def state(pc):
    s=State();ct.memmove(s.ram,base,65536);put(s.reg,42,0xff0);put(s.ram,0xff0,0x1700);s.pc=pc
    return s
def run(s,stop=0x1700,limit=600000):
    n=0
    while s.pc!=stop and n<limit:
        assert lib.xt_step(ct.byref(s))==0,hex(s.pc)
        n+=1
    assert s.pc==stop,hex(s.pc)
def q7b(v):
    u=max(0,min(55296,v-4096))
    return u//4 if u<10240 else u//8+1280 if u<14336 else u//16+2176
def q63(v):return max(0,min(57344,v-4096))//8
def linear(vals,q):
    k,f=divmod(q,256)
    return vals[k]*256+(vals[k+1]-vals[k])*f if f else vals[k]*256
checks={}
for entry,formula in [(0xcc7b,q7b),(0xcc63,q63)]:
    s=state(entry)
    for v in range(65536):
        s.pc=entry;put(s.reg,42,0xff0);put(s.reg,0,v);run(s)
        assert get(s.reg,0)==formula(v),(hex(entry),v,get(s.reg,0),formula(v))
    checks[f'index_{entry:04x}_all_u16_inputs']=65536

rng=random.Random(6602005)
n=0
for m in maps:
    if not m['id'].startswith('delta_'):continue
    a=int(m['data_address'],16);ptr=int(m['pointer_base'],16);cells=m['raw_values'][0]
    for q in sorted(set([k*256 for k in range(23)]+[rng.randrange(0x1601) for _ in range(200)])):
        s=state(0xc1db);put(s.reg,16,ptr);put(s.reg,0,q);run(s)
        assert get(s.reg,0)==linear(cells,q),(m['id'],q)
        n+=1
checks['twelve_precomputed_curves_knots_and_fractional_inputs']=n

# Exercise selector branches with different synthetic values for every curve.
n=0
for entry,stop,flag,selectors,bases,dest in [
    (0x78bc,0x7914,0x989,[0x33f5,0x33f6],[0x33f4,0x340b,0x3422,0x3439,0x3450,0x3467],0x98e),
    (0x7a2f,0x7a87,0x985,[0x3369,0x336a],[0x3368,0x337f,0x3396,0x33ad,0x33c4,0x33db],0x98d)]:
    for sign in [0x7f,0x80]:
        for variant in [0,9]:
            for mode in [0,0x10]:
                for gear in [0,3,4,255]:
                    s=state(entry);put(s.ram,0x900,32768);s.ram[flag]=sign
                    s.ram[0xd87]=variant;s.ram[0x896]=mode;s.ram[0x898]=gear
                    for j,p in enumerate(bases):
                        for a in range(p+3,p+26):s.ram[a]=20+j*30
                    for p in selectors:s.ram[p]=3
                    group=0 if sign&128 else 3
                    choice=0 if variant==9 and mode==0 else (1 if gear<=3 else 2)
                    run(s,stop=stop)
                    assert s.ram[dest]==20+(group+choice)*30,(hex(entry),sign,variant,mode,gear,s.ram[dest])
                    n+=1
checks['transient_curve_branch_selection_synthetic_cells']=n

n=0
for entry,data,ra,ca,nr,src,dest,bins in [
    (0xa363,0x4c44,0x4c1c,0x4c08,20,0x8e8,0xacd,0xad0),
    (0xa3b4,0x4d48,0x4d20,0x4d0c,20,0xc90,0xace,0xad2),
    (0xabdd,0x35b0,0x359c,0x3588,10,0x8e8,0x9ae,0x9b0),
    (0xac2e,0x363c,0x3628,0x3614,10,0xc90,0x9af,0x9b2)]:
    def words(a,n):return [int.from_bytes(image[p:p+2],'big') for p in range(a,a+2*n,2)]
    rt,cl=words(ra,nr-1),words(ca,9)
    def boundaries(vals):return sorted(set([0,65535]+[v+d for v in vals for d in [-1,0,1] if 0<=v+d<=65535]))
    for rv in boundaries(rt):
        for cv in boundaries(cl):
            for synthetic in [False,True]:
                s=state(entry);put(s.ram,0x900,rv);put(s.ram,src,cv)
                if synthetic:
                    for i in range(nr*10):s.ram[data+i]=i
                ri,ci=bisect.bisect_left(rt,rv),bisect.bisect_left(cl,cv)
                expected=s.ram[data+ri*10+ci]
                run(s)
                assert (s.ram[dest],s.ram[bins],s.ram[bins+1])==(expected,ci,ri),(hex(entry),rv,cv)
                n+=1
checks['four_step_grids_all_threshold_boundaries_stock_and_synthetic']=n

n=0
for ptr,nr,nc in [(0x4b0f,15,9),(0x4f61,1,29),(0x4f7e,1,29)]:
    coords=[(r*256,c*256) for r in range(nr) for c in range(nc)]
    coords += [(rng.randrange((nr-1)*256+1),rng.randrange((nc-1)*256+1)) for _ in range(1000)]
    for synthetic in [False,True]:
        cells=list(image[ptr+3:ptr+3+nr*nc]) if not synthetic else [rng.randrange(256) for _ in range(nr*nc)]
        for rq,cq in coords:
            s=state(0xc28d);put(s.reg,16,ptr);s.reg[0]=nr;s.reg[1]=nc
            put(s.ram,0xde0,rq);put(s.ram,0xdde,cq)
            for i,x in enumerate(cells):s.ram[ptr+3+i]=x
            ri,rf=divmod(rq,256)
            lo=(linear(cells[ri*nc:(ri+1)*nc],cq)+128)//256
            hi=(linear(cells[(ri+1)*nc:(ri+2)*nc],cq)+128)//256 if rf else lo
            expected=(lo*256+(hi-lo)*rf+128)//256
            run(s)
            assert s.reg[0]==expected,(hex(ptr),rq,cq,s.reg[0],expected)
            n+=1
checks['special_grid_knots_fractional_and_synthetic_cells']=n

n=0
for value in sorted(set([0,65535,0x7200,0xc200]+[0x7200+k*1024 for k in range(21)]+[rng.randrange(65536) for _ in range(600)])):
    s=state(0x6244);run(s,stop=0x6258)
    assert bytes(s.ram[0xdba:0xdd5])==image[0x1854:0x186f]
    s.pc=0x95fd;put(s.ram,0x8f2,value)
    q=max(0,min(0x5000,value-0x7200))*0x40//256
    expected=linear(list(image[0x185a:0x186f]),q)//256
    run(s,stop=0x9609)
    assert s.ram[0xc92]==expected,(value,s.ram[0xc92],expected)
    n+=1
checks['ram_copied_curve_1854_copy_and_lookup']=n

checksum=[]
for end in [0xf7ff,0xffff]:
    total=sum(int.from_bytes(image[a:a+2],'big') for a in range(0x1800,end+1,2))&65535
    for synthetic in [False,True]:
        s=state(0xa489);put(s.reg,0,end)
        if synthetic:put(s.ram,0x1800,(get(s.ram,0x1800)+0xaa55-total)&65535)
        expected=0xaa55 if synthetic else total
        run(s)
        assert get(s.ram,0xe66)==expected
        assert bool(s.ram[0xf0]&0x80)==(expected==0xaa55)
        assert bool(s.ram[0x8b2]&0x80)==(expected!=0xaa55)
    checksum.append(dict(start='0x1800',last_byte=f'0x{end:04X}',sum_u16_be=f'0x{total:04X}',expected='0xAA55',matches=total==0xaa55))
checks['checksum_stock_failure_and_synthetic_success_paths']=4
fixed_path=ROOT/'firmware/XT660X 2005 startup-checksum-fixed.bin'
fixed=fixed_path.read_bytes()
assert [a for a in range(65536) if fixed[a]!=image[a]]==[0xf7fd]
assert fixed[0xf7fd]==0x7f
s=state(0xa489);ct.memmove(s.ram,bytes(0x1800)+fixed[0x1800:],65536)
put(s.ram,0xff0,0x1700);put(s.reg,0,0xf7ff);run(s)
assert get(s.ram,0xe66)==0xaa55 and s.ram[0xf0]&0x80 and not s.ram[0x8b2]&0x80
checks['delivered_checksum_fixed_image_passes_firmware_routine']=1
report=dict(result='passed',cases=sum(checks.values()),checks=checks,checksum=checksum,
            corrected_image_sha256=hashlib.sha256(fixed).hexdigest(),
            firmware_sha256=hashlib.sha256(image).hexdigest(),
            test_script_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
            compiled_library_sha256=hashlib.sha256(Path(sys.argv[1]).read_bytes()).hexdigest(),
            limitations='Isolated execution of the compiled instruction translation; no peripheral model or vehicle validation. Synthetic fixtures modify only temporary process memory.')
(ROOT/'analysis/semantics/extended_map_validation.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
