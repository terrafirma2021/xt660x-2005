"""CPS synchronization and normal spark cadence in the instruction translation.

The harness supplies synthetic capture edges, simulates timer-3 output compares,
and runs the capture ISR only through its spark-dispatch boundary at DE9B. The
remaining ADC/injection work is outside this fixture. No physical TDC is supplied.
"""
import csv
import ctypes as ct
import hashlib
import json
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
class State(ct.Structure):
    _fields_=[('ram',ct.c_uint8*65536),('reg',ct.c_uint8*64),('pc',ct.c_uint16)]
lib=ct.CDLL(sys.argv[1]);lib.xt_step.argtypes=[ct.POINTER(State)];lib.xt_step.restype=ct.c_int
def put(b,a,v):b[a]=(v>>8)&255;b[a+1]=v&255
def get(b,a):return b[a]*256+b[a+1]
def state():
    s=State();ct.memmove(s.ram,bytes(0x1800)+image[0x1800:],65536)
    run(s,0x5fc8)
    s.ram[0xc03]=s.ram[0x922]=0xc0
    return s
def run(s,pc,stops=(0x1700,),writes=None):
    s.pc=pc;put(s.reg,42,0xff0);put(s.ram,0xff0,0x1700)
    for _ in range(15000):
        if s.pc in stops:return
        oldpc=s.pc
        assert lib.xt_step(ct.byref(s))==0,hex(oldpc)
        if writes is not None and oldpc in TC3_WRITES:writes.append(oldpc)
    raise AssertionError(hex(s.pc))
rows=list(csv.DictReader((ROOT/'analysis/disassembly.tsv').open(),delimiter='\t'))
TC3_WRITES={int(r['address'],16) for r in rows if r['instruction']=='STD 0x0056'}
checks={};traces=[]

for pitch in [800,1600,2400]:
    s=state();now=0;pending=None;level=0;edges=[];phases=[]
    s.ram[0xa82]=128;s.ram[0xa8b]=150
    put(s.ram,0xa96,pitch//2);put(s.ram,0xa9a,10)
    for n in range(11*12):
        now+=pitch*(2 if n%11==10 else 1)
        if pending is not None and pending[0]<=now:
            time,newlevel=pending
            if newlevel!=level:
                edges.append(dict(ticks=time,level=newlevel))
                level=newlevel
            pending=None
        s.ram[0xe1]=level<<3  # CPS input low; preserve simulated coil level.
        put(s.ram,0x52,now);put(s.ram,0x44,now)
        writes=[];run(s,0xd871,(0x1700,0xde9b),writes)
        if writes:
            mode=(s.ram[0x49]>>6)&3
            assert mode in [2,3]
            pending=(now+((get(s.ram,0x56)-now)&65535),int(mode==3))
        if n>=22:
            assert s.ram[0xbfe]&128
            assert s.ram[0xc04]==(n%11+1)%11
            assert get(s.ram,0xa2e)==pitch and get(s.ram,0xa34)==3*pitch
            phases.append(dict(edge=n,pattern_phase=s.ram[0xc04],cycle_phase=s.ram[0x923]))
        # Refresh planner at the pattern boundary, using the ISR's actual history.
        if s.ram[0xbfe]&128 and s.ram[0xc04]==0:
            put(s.ram,0xa30,get(s.ram,0xa2e));put(s.ram,0xa36,get(s.ram,0xa34))
            put(s.ram,0xa32,get(s.ram,0xa34)//4)
            s.reg[0]=s.ram[0xa82];run(s,0x54f0)
            s.ram[0x924]=s.ram[0xde3];put(s.ram,0xa94,get(s.ram,0xde5));put(s.ram,0xaa4,get(s.ram,0xde7))
            run(s,0x55b6)
    steady=[e for e in edges if e['ticks']>=36*pitch]
    falling=[e['ticks'] for e in steady if e['level']==0]
    rising=[e['ticks'] for e in steady if e['level']==1]
    assert len(falling)>=8 and len(rising)==len(falling)
    assert all(b-a==12*pitch for a,b in zip(falling,falling[1:]))
    assert all(f-r==pitch//2 for r,f in zip(rising,falling))
    phase6=[p['cycle_phase'] for p in phases if p['pattern_phase']==6]
    assert phase6==[18,6]*5
    traces.append(dict(pitch_ticks=pitch,normal_intervals_per_pattern=10,gap_interval_ticks=2*pitch,
                       pattern_period_ticks=12*pitch,cycle_phase_at_pattern6=phase6,
                       steady_output_edges=steady,phases=phases[:22]))
checks['capture_edges_acquire_sync_normalize_gap_and_dispatch_spark']=3*11*12

# Uniform intervals must not acquire this missing-gap synchronization.
for pitch in [800,1600,2400]:
    s=state()
    for n in range(44):
        put(s.ram,0x52,(n+1)*pitch);put(s.ram,0x44,(n+1)*pitch)
        run(s,0xd871,(0x1700,0xde9b))
        assert not s.ram[0xbfe]&128
checks['uniform_capture_intervals_do_not_acquire_gap_sync']=132

# A high input at capture-handler entry is rejected and falling-edge mode restored.
for phase in range(11):
    s=state();s.ram[0xc03]=s.ram[0xc04]=phase;s.ram[0xe1]=2
    put(s.ram,0xaf0,1234);put(s.ram,0x52,5678);run(s,0xd871)
    assert s.ram[0xc04]==phase and get(s.ram,0xaf0)==1234
    assert s.ram[0x4b]&12==8
checks['high_CPS_input_does_not_advance_phase']=11

# Pressure-derived cycle acquisition adjusts the long counter, not crank phase.
for phase in range(11):
    for rising in [False,True]:
        s=state();s.ram[0xc03]=s.ram[0xc04]=phase
        s.ram[0xca8]=0 if rising else 2
        put(s.ram,0xc9a,40000 if rising else 20000)
        put(s.ram,0xc9c,20000 if rising else 40000)
        run(s,0xea7f,(0xead9,))
        assert s.ram[0x922]==phase+(12 if rising else 0)
        assert s.ram[0xc04]==phase
checks['pressure_phase_alignment_leaves_crank_spark_counter_unchanged']=22

report=dict(result='passed',cases=sum(checks.values()),checks=checks,traces=traces,
    firmware_sha256=hashlib.sha256(image).hexdigest(),
    test_script_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
    compiled_library_sha256=hashlib.sha256(Path(sys.argv[1]).read_bytes()).hexdigest(),
    conclusion='Synthetic ten-short/one-double capture pattern synchronizes. Normal spark produces one high-to-low edge per pattern while the longer phase alternates 6/18. Under one pattern per crank revolution, this is wasted spark.',
    limitations='Synthetic CPS input, manually emulated ECT output and ISR stopped after spark dispatch. Normal gates, selected periods, fixed final spark/dwell inputs. Does not establish rotor-to-TDC angle, board polarity, actual hardware tooth count or every special mode.')
(ROOT/'analysis/semantics/crank_reference_validation.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps({k:v for k,v in report.items() if k!='traces'},indent=2))
