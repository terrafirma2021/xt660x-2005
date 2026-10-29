"""Independent map-consumer formulas versus the original instruction translation.

python3 scripts/test_map_consumers.py /path/libxt660_full.so
Synthetic RAM includes edge cases outside plausible operation to expose wrapping,
clamping and order effects. These inputs do not establish allowable tuning ranges.
"""
import ctypes as ct
import hashlib
import json
import random
import sys
from pathlib import Path
import map_models as model

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
def run(s,stop=0x1700,limit=50000):
    for _ in range(limit):
        if s.pc==stop:return
        assert lib.xt_step(ct.byref(s))==0,hex(s.pc)
    raise AssertionError(hex(s.pc))
def compare(s,expected):
    for a,v in expected.items():assert get(s.ram,a)==v,(hex(a),get(s.ram,a),v)
checks={};rng=random.Random(6602006)
u8=lambda:rng.randrange(256)
u16=lambda:rng.randrange(65536)

# Whole normal gain block, including exact wrapping and intermediate RAM values.
for _ in range(6000):
    s=state(0x8220)
    words={a:u16() for a in [0x992,0x982,0x97e]}
    small={a:u8() for a in [0x97b,0x97c,0x980,0x979,0x97a,0x970,0x978]}
    for a,v in words.items():put(s.ram,a,v)
    for a,v in small.items():s.ram[a]=v
    run(s,0x82f0)
    compare(s,model.normal_gains(words[0x992],small[0x97b],small[0x97c],small[0x980],
        words[0x982],words[0x97e],small[0x979],small[0x97a],small[0x970],small[0x978]))
checks['normal_gain_chain_all_intermediates_random_inputs']=6000

for secondary in [False,True]:
    for n in range(6000):
        qa,qb,ga,gb=[u16() for _ in range(4)]
        additive,blend,global_byte,channel_gain=[u8() for _ in range(4)]
        lower,upper=sorted([u16(),u16()]);compensation=u16()
        reduction=rng.choice([0,1,1023,1024,1025,65535,u16()])
        skip=bool(n%2)
        s=state(0x843f if secondary else 0x8323)
        for a,v in [(0xce6 if secondary else 0xce4,qa),(0xcea if secondary else 0xce8,qb),
                    (0x962 if secondary else 0x960,ga),(0x966 if secondary else 0x964,gb),
                    (0xad4,reduction),(0x19da,lower),(0x19dc,upper),(0x95e,compensation)]:put(s.ram,a,v)
        s.ram[0x95d if secondary else 0x95c]=additive;s.ram[0x998]=blend
        s.ram[0x19d4]=global_byte;s.ram[0xcec]=channel_gain;s.ram[0xca8]=int(skip)
        args=[qa,qb,ga,gb,additive,blend,reduction]
        if secondary:args.append(channel_gain)
        args.extend([lower,upper,global_byte,skip,compensation])
        expected=(model.secondary_request if secondary else model.primary_request)(*args)
        run(s,0x856c if secondary else 0x842b);compare(s,expected)
    checks['secondary_request_chain' if secondary else 'primary_request_chain']=6000

# One is a Q8 state with two decay rates, not two additive temperature tables.
for state_word in range(65536):
    s=state(0x7fd8);other=65535-state_word
    put(s.ram,0x994,state_word);put(s.ram,0x996,other)
    d1,d2=image[0x3313],image[0x3314]
    run(s,0x800c)
    a,b=model.decay(state_word,d1),model.decay(other,d2)
    compare(s,{0x994:a,0x996:b,0x992:max(a,b)})
checks['both_post_start_decay_states_all_word_values']=65536

for _ in range(5000):
    q,sp,th,iat,p=u16(),u8(),u8(),u8(),u8()
    s=state(0x7bea);s.reg[0]=sp;s.ram[0x937]=th;s.ram[0x979]=iat;s.ram[0x938]=p
    put(s.ram,0x934,q);run(s,0x7c25)
    assert get(s.ram,0x932)==model.startup_ticks(q,sp,th,iat,p)
checks['startup_quantity_product_rounding_and_saturation']=5000

for _ in range(5000):
    p,c,i,r,t=[u8() for _ in range(5)]
    # Enter immediately after pressure lookup; then resume after IAT lookup.
    s=state(0x9220);s.reg[0]=p;s.ram[0xa0f]=c;run(s,0x9229)
    s.reg[0]=i;s.pc=0x9232;run(s,0x9241)
    s.reg[0]=t;s.ram[0xd04]=r;s.pc=0x9495;run(s,0x94bd)
    assert get(s.ram,0xd02)==model.extra_transient_ticks(p,c,i,r,t)
checks['additional_transient_pulse_joint_product']=5000

for _ in range(8000):
    dt,dl=[rng.randrange(-127,128) for _ in range(2)]
    gt,gl,pos,neg=[u8() for _ in range(4)]
    s=state(0x7ab0);s.ram[0xde1]=128 if dt<0 else 0;s.ram[0xdde]=128 if dl<0 else 0
    put(s.ram,0xde2,abs(dt)*gt);put(s.ram,0xddf,abs(dl)*gl)
    s.ram[0x98f]=pos;s.ram[0x990]=neg;run(s,0x7b3e)
    assert get(s.ram,0x982)==model.signed_transient(dt,gt,dl,gl,pos,neg)
checks['signed_delta_combination_coolant_gains_and_negative_cap']=8000

for cell in range(256):
    for value in [0,1,8191,8192,32768,57344,65535]:
        s=state(0xb284);s.reg[0]=cell;put(s.ram,0xcb2,value);run(s,0xb2a4)
        assert get(s.ram,0xcb4)==model.centered_offset(value,cell)
checks['pressure_offset_is_additive_not_multiplicative']=256*7

for value in range(256):
    for gain in range(256):
        s=state(0x8623);s.reg[1]=value;s.ram[0x9a0]=gain;run(s)
        assert s.reg[0]==model.centered_gain(value,gain),(value,gain,s.reg[0])
checks['centered_additive_trim_gain_all_byte_pairs']=65536

for _ in range(5000):
    v,g=u16(),u8();s=state(0x9609);s.ram[0xc92]=g;put(s.ram,0xc8e,v);run(s,0x9661)
    assert get(s.ram,0xc90)==model.load_rescale(v,g)
checks['pressure_load_rescaling_signed_rounding_saturation']=5000

for cell in range(256):
    for old in [0,1,16384,32768,49152,65535]:
        for subtract in [False,True]:
            s=state(0xa6dc if subtract else 0xa70d);s.reg[0]=cell;put(s.ram,0x97e,old)
            run(s,0xa73d)
            expected=model.clamp(old+(-1 if subtract else 1)*cell*256,
                                 get(image,0x36c0),get(image,0x36c2))
            assert get(s.ram,0x97e)==expected
checks['adaptive_transition_steps_and_separate_bounds']=256*6*2

# Scheduler flags independently establish nominal 10-ms / 100-ms / 1-s tasks.
s=state(0x679c);seen={2:[],20:[],200:[]}
for tick in range(1,1001):
    put(s.ram,0x44,(tick*2500)&65535);s.pc=0x679c;s.ram[0x882]=0;s.ram[0x887]=0
    run(s,0x6884)
    if s.ram[0x882]&4:seen[2].append(tick)
    if s.ram[0x882]&2:seen[20].append(tick)
    if s.ram[0x887]&128:seen[200].append(tick)
for interval,events in seen.items():assert events==list(range(interval,1001,interval))
checks['scheduler_10ms_100ms_1s_task_dividers']=1000
for old in range(256):
    for reset in [False,True]:
        for entry,stop,address in [(0xc10c,0xc122,0xcaf),(0xbc5f,0xbc74,0x9b5)]:
            s=state(entry);s.ram[address]=old;s.ram[0x881]=16 if reset else 0;run(s,stop)
            assert s.ram[address]==(0 if reset else min(255,old+1))
checks['feedback_delay_counters_saturate_and_reset']=1024

for raw in range(1024):
    s=state(0x8f82);put(s.ram,0x8e6,raw);run(s,0x8f91)
    assert s.ram[0x8ec]==min(255,raw)
checks['relative_throttle_threshold_source_all_10bit_counts']=1024

for first in range(24):
    for second in range(24):
        for fraction in [0,1,127,128,255]:
            for origin in [0,7,12,23]:
                s=state(0xc521);put(s.reg,16,0x1200);s.reg[0]=fraction
                s.ram[0x1203]=first;s.ram[0x1204]=second;s.ram[0xd7e]=origin;run(s)
                assert s.reg[0]==model.cyclic_event(first,second,fraction,origin)
checks['event_interpolation_rotates_around_reference_cut']=24*24*5*4
for code in range(256):
    s=state(0x7b92);s.reg[0]=code;run(s,0x7ba3)
    assert s.ram[0xa1b]==model.valid_injection_event(code)
    s.pc=0xec98;s.ram[0xd9b]=0;put(s.ram,0xdae,1234);put(s.reg,42,0xff0);run(s)
    assert s.ram[0xa1e]==model.valid_injection_event(code) and get(s.ram,0xa26)==1234
checks['injection_phase_sanitization_and_direct_scheduler_copy']=256
for phase in range(24):
    for target in range(24):
        for full_cycle in [False,True]:
            s=state(0xf4e0);s.ram[0x886]=2;s.ram[0xa1c]=target
            s.ram[0x88b]=128 if full_cycle else 0
            s.ram[0xc04 if not full_cycle else 0x923]=phase
            s.ram[0x923 if not full_cycle else 0xc04]=(phase+1)%24
            run(s,0xf519 if phase==target else 0x1700)
checks['injection_phase_equality_dispatch_both_counter_modes']=24*24*2
assert image[0x3130]==0xff
for previous_flags in range(256):
    s=state(0x8df9);s.ram[0x9cf]=previous_flags;s.ram[0xcd4]=previous_flags
    run(s,0x8ea2)
    assert s.ram[0xcd4]==128 and s.ram[0x9cf]==(previous_flags&0x30)
checks['stock_calibration_disables_normalization_offset_state']=256
for table in range(256):
    for curve in range(256):
        s=state(0xb3cc);s.reg[0]=table;s.ram[0x971]=curve;run(s,0xb3db)
        assert s.ram[0x970]==min(255,table*curve//128)
checks['coupled_pressure_gains_all_byte_pairs']=65536
for value in range(256):
    for alternate in [False,True]:
        s=state(0x8979);s.ram[0x885]=32 if alternate else 0
        s.ram[0xa86]=128;s.ram[0xa83]=value;s.ram[0xa88]=255-value
        run(s,0x8a89)
        assert s.ram[0xa82]==min(image[0x4242],255-value if alternate else value)
checks['alternate_spark_surface_replaces_normal_base']=512

report=dict(result='passed',cases=sum(checks.values()),checks=checks,
    firmware_sha256=hashlib.sha256(image).hexdigest(),
    test_script_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
    model_script_sha256=hashlib.sha256((ROOT/'scripts/map_models.py').read_bytes()).hexdigest(),
    compiled_library_sha256=hashlib.sha256(Path(sys.argv[1]).read_bytes()).hexdigest(),
    limitations='Isolated instruction translation, RAM-backed peripherals, and injected lookup results. Tests prove arithmetic at stated boundaries, not every caller path, physical clock/sensor units or hardware operation.')
(ROOT/'analysis/semantics/map_consumer_validation.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
