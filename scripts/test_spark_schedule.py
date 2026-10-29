"""Compare independent planners and normal compare dispatch with original code.

Run under Linux with the compiled full translation shared-library path as argv[1].
Peripheral outputs are simulated explicitly; this is not an ECU bench test.
"""
import ctypes as ct
import hashlib
import json
import random
import sys
from pathlib import Path
import spark_models as model

ROOT=Path(__file__).resolve().parents[1]
image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
base=bytes(0x1800)+image[0x1800:]
class State(ct.Structure):
    _fields_=[('ram',ct.c_uint8*65536),('reg',ct.c_uint8*64),('pc',ct.c_uint16)]
lib=ct.CDLL(sys.argv[1]);lib.xt_step.argtypes=[ct.POINTER(State)];lib.xt_step.restype=ct.c_int
def put(b,a,v): b[a]=(v>>8)&255;b[a+1]=v&255
def get(b,a): return b[a]*256+b[a+1]
def state(pc):
    s=State();ct.memmove(s.ram,base,65536);put(s.reg,42,0xff0);put(s.ram,0xff0,0x1700);s.pc=pc
    return s
def run(s,pc=None):
    if pc is not None:
        s.pc=pc;put(s.reg,42,0xff0);put(s.ram,0xff0,0x1700)
    for _ in range(2000):
        if s.pc==0x1700:return
        assert lib.xt_step(ct.byref(s))==0,hex(s.pc)
    raise AssertionError(hex(s.pc))
rng=random.Random(66055);checks={}
word=lambda:rng.randrange(65536)
byte=lambda:rng.randrange(256)
edges=[0,1,10,29,30,31,255,256,32767,32768,65534,65535]
for n in range(24000):
    vals=[rng.choice(edges) if n<12000 else word() for _ in range(4)]
    three,quarter,pitch,minimum=vals;code,correction=byte(),byte()
    s=state(0x54f0);s.reg[0]=code;s.ram[0xa8b]=correction
    for a,v in zip([0xa36,0xa32,0xa30,0xdb4],vals):put(s.ram,a,v)
    run(s)
    expected=model.fire_plan(code,three,quarter,pitch,correction,minimum)
    assert (s.ram[0xde3],get(s.ram,0xde5),get(s.ram,0xde7))==expected,(vals,code,correction,expected)
checks['fire_planner_saturations_borrows_event_branches']=24000
for n in range(24000):
    vals=[rng.choice(edges) if n<12000 else word() for _ in range(5)]
    s=state(0x55b6)
    for a,v in zip([0xa96,0xa94,0xa32,0xa30,0xdb0],vals):put(s.ram,a,v)
    run(s)
    assert (s.ram[0x925],get(s.ram,0xaa2))==model.charge_plan(*vals),vals
checks['charge_planner_wrap_gap_and_loop_exhaustion']=24000
for n in range(24000):
    capture,residual,charge,minimum=[word() for _ in range(4)]
    hi,threshold=byte(),byte();s=state(0xef6d)
    s.reg[1]=s.ram[0x924]=4;s.ram[0xe1]=8;s.ram[0xa2e]=hi;s.ram[0xd9e]=threshold
    for a,v in [(0xaf0,capture),(0xaa4,residual),(0xb7a,charge),(0xa9a,minimum)]:put(s.ram,a,v)
    old_control,old_enable=byte(),byte();s.ram[0x49]=old_control;s.ram[0x4c]=old_enable
    run(s);deadline,limited=model.fire_deadline(capture,residual,charge,minimum,hi,threshold)
    assert get(s.ram,0x56)==deadline
    assert bool(s.ram[0xa93]&2)==limited
    assert s.ram[0x49]==((old_control|128)&191) and s.ram[0x4c]==old_enable|8
    assert s.ram[0x4e]==8 and s.ram[0xa92]&128
checks['normal_fire_compare_minimum_charge_N_flag_and_timer_wrap']=24000

# On a uniform segment of the wheel, different event choices must describe the
# same firing instant. Exercise real instruction planners and charge/fire dispatch.
examples=[];count=0
for pitch in [800,1600,3200,6400]:
    three=3*pitch;quarter=three//4
    for code in range(64,241):
        for correction in [0,113,150,178]:
            dwell=pitch//2;minimum=30
            event,advance,residual=model.fire_plan(code,three,quarter,pitch,correction,minimum)
            ce,cr=model.charge_plan(dwell,advance,quarter,pitch,minimum)
            # Only ordinary events 1..6; special wheel-gap/missed-event modes have
            # separate planner tests above, not this uniform-segment identity.
            if not 1<=ce<=6:continue
            fire_time=(event-6)*pitch+residual
            charge_time=(ce-6)*pitch+cr
            assert fire_time==quarter-advance
            assert fire_time-charge_time==dwell
            s=state(0x54f0);s.reg[0]=code;s.ram[0xa8b]=correction
            for a,v in [(0xa36,three),(0xa32,quarter),(0xa30,pitch),(0xdb4,minimum),
                        (0xa96,dwell),(0xdb0,minimum),(0xa9a,10)]:put(s.ram,a,v)
            run(s);s.ram[0x924]=s.ram[0xde3];put(s.ram,0xa94,get(s.ram,0xde5));put(s.ram,0xaa4,get(s.ram,0xde7))
            run(s,0x55b6)
            # Capture6 is zero on the unwrapped timeline; register timestamps wrap.
            put(s.ram,0xaf0,((ce-6)*pitch)&65535);s.ram[0xc04]=ce
            run(s,0xee78)
            assert get(s.ram,0x56)==charge_time&65535 and s.ram[0x49]&192==192
            # Explicitly emulate the ECT set-high compare edge. RAM model has no timer.
            s.ram[0xe1]=8;put(s.ram,0xaf0,((event-6)*pitch)&65535);s.reg[1]=event
            run(s,0xef6d)
            assert get(s.ram,0x56)==fire_time&65535 and s.ram[0x49]&192==128
            if code==128 and correction==150:
                examples.append(dict(pitch_ticks=pitch,code=code,charge_event=ce,fire_event=event,
                    charge_relative_capture6_ticks=charge_time,fire_relative_capture6_ticks=fire_time,
                    dwell_ticks=dwell))
            count+=1
checks['normal_charge_and_fire_timeline_end_to_end_boundaries']=count
report=dict(result='passed',cases=sum(checks.values()),checks=checks,examples=examples,
    firmware_sha256=hashlib.sha256(image).hexdigest(),
    test_script_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
    model_script_sha256=hashlib.sha256((ROOT/'scripts/spark_models.py').read_bytes()).hexdigest(),
    compiled_library_sha256=hashlib.sha256(Path(sys.argv[1]).read_bytes()).hexdigest(),
    limitations='Planner arithmetic includes synthetic edge cases. Timeline is a uniform wheel segment with normal gates clear and manually simulated ECT pin state. Special-mode dispatch, physical coil polarity, timer frequency and TDC phase are not established by this test.')
(ROOT/'analysis/semantics/spark_schedule_validation.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
