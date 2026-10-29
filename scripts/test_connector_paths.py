"""Instruction fixtures for starter/interlock and relay-voltage paths.

Inputs are synthetic register/RAM states. No fixture proves external wiring.
"""
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
def put(b,a,v):b[a],b[a+1]=(v>>8)&255,v&255
def run(s,pc,stop=0x1700):
    s.pc=pc;put(s.reg,42,0xff0);put(s.ram,0xff0,0x1700)
    for _ in range(15000):
        if s.pc==stop:return
        old=s.pc;assert lib.xt_step(ct.byref(s))==0,hex(old)
    raise AssertionError(hex(s.pc))
def state():
    s=State();ct.memmove(s.ram,bytes(0x1800)+image[0x1800:],65536);run(s,0x5fc8);return s
checks={}
assert image[0x18d4]==4 and image[0x18d5]==6 and image[0x4bfd]==15

# PB1 has opposite active polarity for variant 9. Counts saturate, not wrap.
cases=0
for variant in range(256):
    for level in [0,2]:
        for initial in [0,1]:
            for before in [0,2,3,4,5,254,255]:
                s=state();s.ram[0xd87]=variant;s.ram[0x896]=level;s.ram[0x880]=0xa0|initial
                s.ram[0xb05]=s.ram[0xb06]=before
                active=(level==0) if variant==9 else (level!=0)
                run(s,0xcbef)
                count=min(before+1,255);threshold=4 if active else 6
                expected=int(active) if count>=threshold else initial
                assert s.ram[0x880]==0xa0|expected
                assert s.ram[0xb05]==(count if active else 0)
                assert s.ram[0xb06]==(0 if active else count)
                cases+=1
checks['PB1_debounce_all_variants_levels_initial_states_boundaries']=cases
# Interrupting an activation run resets its count.
s=state();s.ram[0x896]=0
for _ in range(3):run(s,0xcbef)
assert not s.ram[0x880]&1
s.ram[0x896]=2;run(s,0xcbef);assert s.ram[0xb05]==0
s.ram[0x896]=0
for _ in range(3):run(s,0xcbef)
assert not s.ram[0x880]&1
run(s,0xcbef);assert s.ram[0x880]&1
checks['PB1_interrupted_activation_sequence']=8

for initial in range(256):
    for request in [0,1]:
        s=state();s.ram[0xf0]=initial;s.ram[0x880]=request
        run(s,0x9dc0,0x9dcd)
        assert s.ram[0xf0]==((initial&~16) if request else (initial|16))
checks['headlight_command_request_override_all_port_values']=512

faults=[(0x8af,0x40),(0x8af,2),(0x8b0,8),(0x8b1,16),(0x8b2,128),(0x8b4,8)]
for request in [0,1]:
    for bypass_tip in [False,True]:
        for mask in range(64):
            s=state();s.ram[0x880]=request;s.ram[0xdd9]=128 if bypass_tip else 0
            for i,(a,b) in enumerate(faults):
                if mask>>i&1:s.ram[a]|=b
            run(s,0x9dcd,0x9e01)
            expected=bool(request and (mask & (~4 if bypass_tip else 63)))
            assert bool(s.ram[0x884]&32)==expected
checks['start_warning_all_six_fault_combinations_and_tip_bypass']=256

# Read diagnostic payload A before common packing; these tests do not assume
# dashboard ON/OFF rendering or assign external wire colors.
for variant in range(256):
    for menu,bit in [(20,1),(21,16)]:
        for high in [0,1]:
            s=state();s.ram[0xd87]=variant;s.reg[1]=menu;s.ram[0x896]=bit if high else 0
            run(s,0x657e,0x662c)
            assert s.reg[0]==(240 if high or (menu==21 and variant!=9) else 0)
checks['diagnostic20_21_all_variants_both_input_levels']=1024

for bit in [0,1]:
    for before in [0,13,14,15,254,255]:
        for initial in [0,128]:
            s=state();s.ram[0x896]=bit;s.ram[0x88c]=initial
            s.ram[0xb07]=s.ram[0xb08]=before
            run(s,0xcc30)
            count=min(before+1,255)
            assert (s.ram[0x88c]&128)==((128 if bit else 0) if count>=15 else initial)
checks['PB0_interlock_debounce_boundaries']=24

# Fault 19 sets only after qualification and strictly greater than its timer limit.
cases=0
for request in [0,1]:
    for speed_hi in [1,2,3]:
        for armed in [0,4]:
            for elapsed in [0,10,11,255]:
                s=state();s.ram[0x896]=1;s.ram[0x880]=request;s.ram[0x900]=speed_hi
                s.ram[0x8b6]=armed;s.ram[0xbc6]=elapsed
                run(s,0x8b6f,0x8bec)
                assert bool(s.ram[0x8af]&2)==bool(request and speed_hi>=2 and armed and elapsed>10)
                cases+=1
checks['fault19_qualification_and_strict_counter_boundary']=cases

# Two same-side ADC samples establish the supply-present latch; raw threshold
# is 38, not a measured voltage. Diagnostic payload is min(floor(A*256/240),254).
for sample in range(256):
    s=state()
    for _ in range(2):
        s.reg[0]=sample;run(s,0x6c5e,0x6d5c)
    assert s.ram[0xbce]==sample
    assert s.ram[0xaec]==min(sample*256//240,254)
    assert bool(s.ram[0x888]&2)==(sample>=38)
checks['ATD4_supply_latch_and_diagnostic_payload_all_raw_bytes']=256

# Fault-43 compares PA2 command with the conditioned supply-present flag.
for command in [0,4]:
    for present in [0,2]:
        for elapsed in [0,10,11,30,31,255]:
            s=state();s.ram[0]=command;s.ram[0x888]=present;s.ram[0xbce]=180
            s.ram[0x8b7]=0xc0;s.ram[0xb48]=s.ram[0xb49]=elapsed
            run(s,0x6e1a,0x6eca)
            expected=(command==4 and not present and elapsed>30) or (command==0 and present==2 and elapsed>10)
            assert bool(s.ram[0x8b1]&4)==bool(expected)
            assert s.ram[0x8d9]==(154 if expected else 180)
checks['fault43_command_supply_mismatch_and_fallback_boundaries']=24

# Diagnostic-50 pulse edges and normal prime/stop commands preserve other pins.
for initial in range(256):
    s=state();s.ram[0]=initial;run(s,0xbb23,0xbb26);assert s.ram[0]==initial&~4
    s.ram[0]=initial;run(s,0xbb41,0xbb44);assert s.ram[0]==initial|4
    s.ram[0]=initial;run(s,0xacd9,0xacdc);assert s.ram[0]==initial|4
    s.ram[0]=initial;run(s,0xace6,0xace9);assert s.ram[0]==initial&~4
checks['relay_diagnostic_prime_stop_port_actions']=1024

report=dict(result='passed',cases=sum(checks.values()),checks=checks,
    firmware_sha256=hashlib.sha256(image).hexdigest(),
    test_script_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
    compiled_library_sha256=hashlib.sha256(Path(sys.argv[1]).read_bytes()).hexdigest(),
    limitations='Synthetic software fixtures; no connector continuity, voltage measurement, transceiver test or complete ECU boot. Counter values are routine invocations or preseeded timer states, not independently measured milliseconds. Wire assignments require separate manual/board evidence.')
(ROOT/'analysis/semantics/connector_path_validation.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
