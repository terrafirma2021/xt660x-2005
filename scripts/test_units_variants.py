"""Execute unit arithmetic and variant paths in the compiled CPU12 translation.

Usage: python3 scripts/test_units_variants.py /path/libxt660_full.so
No peripheral simulation: compare registers are ordinary memory in these fixtures.
Hardware clock, physical crank geometry and Celsius offsets are not validated.
"""
import ctypes as ct
import hashlib
import json
import random
import sys
from pathlib import Path
from decode_units import normalization, pressure_payload, supply_payload, scale_q8, spark_ticks

ROOT=Path(__file__).resolve().parents[1]
image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
base=bytes(0x1800)+image[0x1800:]
class State(ct.Structure):
    _fields_=[('ram',ct.c_uint8*65536),('reg',ct.c_uint8*64),('pc',ct.c_uint16)]
lib=ct.CDLL(sys.argv[1]);lib.xt_step.argtypes=[ct.POINTER(State)];lib.xt_step.restype=ct.c_int
def put(b,a,v):b[a]=(v>>8)&255;b[a+1]=v&255
def get(b,a):return b[a]*256+b[a+1]
def state(pc):
    s=State();ct.memmove(s.ram,base,65536);put(s.reg,42,0xff0);put(s.ram,0xff0,0x1700);s.pc=pc
    return s
def run(s,stop=0x1700,limit=20000):
    for _ in range(limit):
        if s.pc==stop:return
        assert lib.xt_step(ct.byref(s))==0,hex(s.pc)
    raise AssertionError(hex(s.pc))
checks={}

# Only variant 9 blocks the second normal injection entry before any hardware write.
assert image[0x18d3]==9
for variant in range(256):
    s=state(0xf592);s.ram[0xd87]=variant;s.ram[0xe1]=0x80
    put(s.ram,0x92c,1234);put(s.ram,0x5e,0x4321)
    if variant==9:
        before=bytes(s.ram);run(s);assert bytes(s.ram)==before
    else:
        run(s,0xc712);assert get(s.ram,0xb74)==1234 and s.ram[0x4e]==0x80
checks['second_normal_injector_entry_all_256_variant_values']=256
for variant in range(256):
    s=state(0xf519);s.ram[0xd87]=variant;s.ram[0xe1]=0x40;put(s.ram,0x92a,2345)
    run(s,0xc55b);assert get(s.ram,0xb72)==2345 and s.ram[0x4e]==0x40
checks['primary_normal_injector_entry_all_256_variant_values']=256

# Isolated diagnostic 37 can write TC7 even at variant 9; do not generalize the
# normal-path gate to every possible path or claim it is safe to enable hardware.
for entry,tc,mask in [(0xb97f,0x5c,0x40),(0xba06,0x5e,0x80)]:
    for variant in [0,9,255]:
        s=state(entry);s.ram[0xd87]=variant;s.ram[0xbe4]=49;put(s.ram,0x44,1000)
        run(s)
        assert get(s.ram,tc)==(1002+image[0x4e7b]*250)&65535
        assert s.ram[0x4e]==mask and s.ram[0xbe3]==1
checks['both_diagnostic_injector_handlers_including_variant_9']=6

# Scheduler divider and fan/injector repeat cadences, including timer wrap.
s=state(0x679c);ticks=0;task_indices=[]
for i in range(1,1201):
    ticks=(ticks+2500)&65535;put(s.ram,0x44,ticks);s.pc=0x679c;s.ram[0x88e]=0
    run(s,0x6884)
    assert get(s.ram,0xaf4)==ticks
    if s.ram[0x88e]&128:task_indices.append(i)
assert task_indices==list(range(4,1201,4))
checks['2500_tick_scheduler_and_four_tick_task_divider']=1200
for entry,period in [(0xb97f,50),(0xbb45,250)]:
    s=state(entry);s.ram[0x893]=0x50;events=[];fan_high=[]
    for i in range(1,period*6+1):
        s.pc=entry;put(s.reg,42,0xff0);s.ram[0x893]&=~4;run(s)
        if s.ram[0x893]&4:events.append(i)
        if entry==0xbb45 and s.ram[0xf0]&4:fan_high.append(i)
    assert events==[period*k for k in range(1,6)],(entry,events)
    assert not s.ram[0x893]&0x50
    if entry==0xbb45:
        assert fan_high==[i for start in events for i in range(start,start+100)]
checks['diagnostic_five_repeats_and_fan_100_task_on_windows']=2

# Exhaust all digital sensor inputs; these verify payload arithmetic, not units.
for raw in range(65536):
    s=state(0x6aa5);put(s.reg,0,raw);run(s,0x6ac5)
    assert s.ram[0xaea]==pressure_payload(raw),raw
checks['pressure_payload_all_u16_inputs']=65536
for raw in range(256):
    s=state(0x6c5e);s.reg[0]=raw;run(s,0x6c73)
    assert s.ram[0xaec]==supply_payload(raw),raw
checks['supply_payload_all_u8_inputs']=256

# Every byte pair in the normalization denominator, with stock reference.
for code in range(256):
    for gain in range(256):
        s=state(0x7f50);s.ram[0xcd0]=code;s.ram[0xcd5]=gain
        run(s,0x7fab)
        assert get(s.ram,0xce2)==normalization(code,gain,image[0x1ace]),(code,gain,get(s.ram,0xce2))
checks['normalization_all_65536_code_gain_pairs']=65536
rng=random.Random(6602005)
for _ in range(1000):
    code,gain,ref=[rng.randrange(256) for _ in range(3)]
    s=state(0x7f50);s.ram[0xcd0]=code;s.ram[0xcd5]=gain;s.ram[0x1ace]=ref
    run(s,0x7fab);assert get(s.ram,0xce2)==normalization(code,gain,ref)
checks['normalization_varied_reference_synthetic_ram']=1000

# New 2x2 layouts: asymmetric synthetic cells distinguish row and column direction.
count=0
for entry,stop,row_input,col_input,ra,ca,dest,data,rwidth in [
    (0x7e60,0x7ea2,0x900,0xc90,0x311a,0x3116,0xcd2,0x311e,2),
    (0x7ea2,0x7ee4,0x900,0x8e8,0x3126,0x3122,0xcd3,0x312a,2),
    (0x7f0e,0x7f50,0xcd0,0xc90,0x321a,0x3216,0xcd5,0x321c,1)]:
    for ri in range(2):
        for ci in range(2):
            s=state(entry)
            s.ram[data:data+4]=bytes([11,47,103,199])
            rv=int.from_bytes(image[ra+rwidth*ri:ra+rwidth*(ri+1)],'big')
            cv=int.from_bytes(image[ca+2*ci:ca+2*ci+2],'big')
            if rwidth==1:s.ram[row_input]=rv
            else:put(s.ram,row_input,rv)
            put(s.ram,col_input,cv);run(s,stop)
            assert s.ram[dest]==[11,47,103,199][ri*2+ci],(entry,ri,ci,s.ram[dest])
            count+=1
checks['three_new_grids_asymmetric_knots']=count
for selector in range(256):
    s=state(0x7ee4);s.ram[0x3114]=selector;s.ram[0xcd2]=19;s.ram[0xcd3]=73;s.ram[0xcd4]=128
    run(s,0x7f0e);assert s.ram[0xcd0]==(19 if selector==128 else 73)
checks['normalization_selector_is_exact_128_not_bit_test']=256

# Exhaust the offset clamp independently of the ratio helper. Alternate the two
# selector branches; the full selector-byte domain is checked above.
for selected in range(256):
    for offset in range(256):
        s=state(0x7ee4)
        s.ram[0x3114]=128 if (selected+offset)%2 else 0
        s.ram[0xcd2]=selected;s.ram[0xcd3]=selected;s.ram[0xcd4]=offset
        run(s,0x7f0e)
        assert s.ram[0xcd1]==selected
        assert s.ram[0xcd0]==max(0,min(255,selected+offset-128))
checks['normalization_offset_clamp_all_65536_selected_offset_pairs']=65536

# Complete both 2x2 lookups, selection, offset clamp, gain lookup, division and
# all four quantity writes. Synthetic constant cells isolate the whole chain;
# asymmetric corner orientation is checked above. No disk image is modified.
count=0
for code in range(256):
    for selector in [0,128]:
        for offset in [0,128,255]:
            for gain in [0,128,255]:
                s=state(0x7e60);s.ram[0x3114]=selector;s.ram[0xcd4]=offset
                chosen,other=(0x311e,0x312a) if selector==128 else (0x312a,0x311e)
                s.ram[chosen:chosen+4]=bytes([code])*4
                s.ram[other:other+4]=bytes([255-code])*4
                s.ram[0x321c:0x3220]=bytes([gain])*4
                put(s.ram,0x900,rng.randrange(65536));put(s.ram,0xc90,rng.randrange(65536))
                put(s.ram,0x8e8,rng.randrange(65536))
                quantities=[0,1,1000,65535]
                for a,q in zip([0x952,0x954,0x956,0x958],quantities):put(s.ram,a,q)
                run(s,0x7fd8)
                combined=max(0,min(255,code+offset-128))
                factor=normalization(combined,gain,image[0x1ace])
                assert s.ram[0xcd1]==code and s.ram[0xcd0]==combined
                assert s.ram[0xcd5]==gain and get(s.ram,0xce2)==factor
                for a,q in zip([0xce4,0xce6,0xce8,0xcea],quantities):
                    assert get(s.ram,a)==min(65535,q*factor//256),(code,selector,offset,gain,a)
                count+=1
checks['normalization_full_lookup_to_four_quantity_outputs']=count

for _ in range(10000):
    value,factor=[rng.randrange(65536) for _ in range(2)]
    s=state(0xc243);put(s.reg,0,value);put(s.reg,18,factor);run(s)
    assert get(s.reg,0)==scale_q8(value,factor)
checks['saturated_q8_scaling_random_pairs']=10000
for code in range(256):
    for period in [0,1,255,256,1000,65535]:
        for correction in [0,150,255]:
            s=state(0x54f0);s.reg[0]=code;put(s.ram,0xa36,period);s.ram[0xa8b]=correction
            run(s,0x5518);assert get(s.ram,0xde5)==spark_ticks(code,period,correction)
checks['spark_code_period_scaling_and_offset_boundaries']=256*6*3
for cell in range(256):
    s=state(0x8ae6);s.reg[0]=cell;run(s,0x8aed);assert get(s.ram,0xa98)==cell*32
checks['dwell_byte_to_timer_ticks_all_values']=256

report=dict(result='passed',cases=sum(checks.values()),checks=checks,
    firmware_sha256=hashlib.sha256(image).hexdigest(),
    test_script_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
    conversion_script_sha256=hashlib.sha256((ROOT/'scripts/decode_units.py').read_bytes()).hexdigest(),
    compiled_library_sha256=hashlib.sha256(Path(sys.argv[1]).read_bytes()).hexdigest(),
    limitations='Isolated instruction execution with RAM-backed peripherals. Physical units, oscillator rate, sensor circuitry, crank/TDC geometry and hardware outputs are not validated by these tests.')
(ROOT/'analysis/semantics/units_variant_validation.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
