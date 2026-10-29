"""Execute recovered selector instructions; synthetic inputs, no firmware writes.

The sequence-completion fixture changes calibration bytes only in emulated RAM.
Stock reachability is checked separately with unmodified calibration bytes.
"""
import ctypes as ct
import hashlib
import json
import sys
from fractions import Fraction
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
image = (ROOT / 'firmware/XT660X 2005.bin').read_bytes()
class State(ct.Structure):
    _fields_ = [('ram', ct.c_uint8 * 65536), ('reg', ct.c_uint8 * 64), ('pc', ct.c_uint16)]
lib = ct.CDLL(sys.argv[1])
lib.xt_step.argtypes = [ct.POINTER(State)]
lib.xt_step.restype = ct.c_int
def put(b, a, v): b[a], b[a+1] = (v >> 8) & 255, v & 255
def get(b, a): return b[a] * 256 + b[a+1]
def run(s, pc, stop=0x1700):
    s.pc = pc
    put(s.reg, 42, 0xff0)
    put(s.ram, 0xff0, 0x1700)
    for _ in range(15000):
        if s.pc == stop: return
        old = s.pc
        assert lib.xt_step(ct.byref(s)) == 0, hex(old)
    raise AssertionError(hex(s.pc))
def state():
    s = State()
    ct.memmove(s.ram, bytes(0x1800) + image[0x1800:], 65536)
    run(s, 0x5fc8)
    return s
checks = {}

# Every filtered ratio-code input, including exact threshold equality.
s = state()
thresholds = list(s.ram[0xd81:0xd86])
assert thresholds == [39, 96, 141, 189, 230]
for variant in [9, 0]:
    for fault in [0, 8]:
        for value in range(256):
            s.ram[0xd87] = variant
            s.ram[0xacc] = value
            s.ram[0x8b1] = fault
            s.ram[0x8a0] = 4  # bypass fault detection; preserve injected fault state
            run(s, 0xe24d, 0xe364)
            raw = sum(value >= t for t in thresholds) if variant == 9 else 5
            expected = 5 if fault else raw
            assert s.ram[0xbca] == raw and s.ram[0xbcb] == 1 << raw
            assert s.ram[0x898] == expected and s.ram[0x899] == 1 << expected
checks['ratio_classifier_all_bytes_variants_and_fault_override'] = 1024

# PB4's two-sample stability filter, including both transition directions.
for old in [0, 16]:
    for previous in [0, 16]:
        for raw in [0, 16]:
            s = state()
            s.ram[0x896], s.ram[0x897], s.ram[1] = old, previous, raw
            run(s, 0x8b45, 0x8b5a)
            assert s.ram[0x896] == (raw if raw == previous else old)
            assert s.ram[0x897] == raw
checks['neutral_input_filter_truth_table'] = 8

s = state()
assert image[0x31ea] == 5
for code in range(256):
    s.ram[0x898] = code
    run(s, 0xa448, 0xa458)
    assert get(s.reg,16) == (0x31ec if code <= 5 else 0x3200)
checks['normalization_hold_all_ratio_codes'] = 256

# Test the selectors themselves, stopping before interpolation.
families = [
    ('spark', 0x8885, 0x88a6, 0x4245, [0x42ab, 0x452b, 0x47ab]),
    ('transient_1', 0x9241, 0x9265, 0x34cf, [0x34d0, 0x34da, 0x34e4]),
    ('transient_2', 0x9462, 0x9486, 0x355c, [0x355d, 0x3567, 0x3571]),
]
for label, pc, stop, threshold, bases in families:
    s = state()
    for variant in [9, 0]:
        for neutral_bit in [0, 16]:
            for code in range(256):
                s.ram[0xd87], s.ram[0x896], s.ram[0x898] = variant, neutral_bit, code
                run(s, pc, stop)
                choice = 0 if variant == 9 and not neutral_bit else 1 + (code > image[threshold])
                assert get(s.reg, 16) == bases[choice], (label, variant, neutral_bit, code)
    checks[label + '_all_selector_bytes_variant_and_neutral'] = 1024
for label, pc, stop, delta, thresholds_at, bases in [
    ('throttle_delta', 0x7a38, 0x7a7e, 0x985, [0x3369, 0x336a], [0x3368,0x337f,0x3396,0x33ad,0x33c4,0x33db]),
    ('load_delta', 0x78c5, 0x790b, 0x989, [0x33f5, 0x33f6], [0x33f4,0x340b,0x3422,0x3439,0x3450,0x3467]),
]:
    s = state()
    for variant in [9, 0]:
        for neutral_bit in [0, 16]:
            for sign in [0, 128]:
                for code in range(256):
                    s.ram[0xd87], s.ram[0x896], s.ram[0x898], s.ram[delta] = variant, neutral_bit, code, sign
                    run(s, pc, stop)
                    branch = 0 if sign else 1
                    choice = 0 if variant == 9 and not neutral_bit else 1 + (code > image[thresholds_at[branch]])
                    assert get(s.reg, 16) == bases[3 * branch + choice]
    checks[label + '_all_selector_bytes_both_signs_variant_and_neutral'] = 2048

# Road-pulse snapshot: first sample suppressed, rollover and saturation explicit.
for first in [False, True]:
    for old, new in [(0,0),(10,15),(65534,3),(0,255),(0,256),(0,65535)]:
        s = state()
        put(s.ram, 0xac2, old); put(s.ram, 0xab0, new)
        s.ram[0xabf] = 0 if first else 4
        run(s, 0xe10f, 0xe132)
        assert s.ram[0xac0] == (0 if first else min((new-old)&65535,255))
        assert get(s.ram,0xac4) == old and get(s.ram,0xac2) == new
checks['road_pulse_snapshot_initialization_rollover_saturation'] = 12

# Conditional physical interpretation: manual gear ratios plus a hypothesized
# 20 speed pulses/output-shaft revolution. This does NOT prove the pulse count.
gear_traces = []
for gear, ratio in enumerate([Fraction(30,12),Fraction(26,16),Fraction(23,20),Fraction(20,22),Fraction(20,26)],1):
    pulses = Fraction(20,1) / (Fraction(75,36) * ratio)
    s=state();s.ram[0xbfe]=128;s.ram[0x8a0]=4;s.ram[0x896]=16
    steady=[];filtered=[]
    for turn in range(600):
        s.ram[0x922]=0 if turn%2==0 else 12
        put(s.ram,0xab0,int((turn+1)*pulses)&65535)
        run(s,0xe0f5,0xe364)
        if turn>=100:
            steady.append(s.ram[0x898]);filtered.append(s.ram[0xacc])
    assert set(steady)=={gear},(gear,set(steady),min(filtered),max(filtered))
    gear_traces.append(dict(assumed_gear=gear,pulses_per_crank_revolution=float(pulses),
        ideal_scaled_code=float(pulses*20),steady_filtered_range=[min(filtered),max(filtered)],
        steady_selector_codes=sorted(set(steady))))
checks['conditional_20_pulse_gear_model_full_filters_and_classifier'] = 3000

def tick(s, speed):
    s.ram[0xabe] = speed
    run(s, 0xad1c, 0xaf24)
def detector():
    s = state(); s.ram[0x898] = 2
    return s
# From the earliest possible valid first stage, stock timeout resets next stage.
for duration in [1099, 1100, 1200, 1300, 1301]:
    s = detector()
    for _ in range(duration): tick(s,255)
    tick(s,254)
    assert s.ram[0xb80] == (64 if 1100 <= duration <= 1300 else 0)
    tick(s,255)
    assert not s.ram[0xb80] & 1
    if 1100 <= duration <= 1300:
        assert bytes(s.ram[0xb80:0xb8c]) == bytes(12)
checks['stock_first_stage_duration_boundaries_then_timeout_reset'] = 5
# All possible road-speed bytes reset each seeded later-stage entry with timeout 0.
for stage in [64,16,4]:
    for speed in range(256):
        s = detector(); s.ram[0xb80] = stage
        tick(s,speed)
        assert bytes(s.ram[0xb80:0xb8c]) == bytes(12)
checks['stock_later_stage_zero_timeout_all_speed_bytes'] = 768

# Walk the full four-stage detector using small synthetic in-memory calibrations.
s = detector()
for lo, hi in [(0x36ef,0x36f0),(0x36f8,0x36f9),(0x3700,0x3701),(0x3708,0x3709)]:
    s.ram[lo] = 10; s.ram[hi] = 20
for lo, hi in [(0x36f2,0x36f4),(0x36fa,0x36fc),(0x3702,0x3704),(0x370a,0x370c)]:
    put(s.ram,lo,2); put(s.ram,hi,3)
for addr in [0x36f6,0x36fe,0x3706]: put(s.ram,addr,2)
put(s.ram,0x3710,100)
sequence = [10,20,0,0,0,10,20,0,0,0,10,20,0,0,0,10,20,0]
trace = []
for speed in sequence:
    tick(s,speed)
    trace.append(dict(speed_code=speed,flags=s.ram[0xb80],elapsed=get(s.ram,0xb8a)))
assert s.ram[0xb80] & 1
tick(s,0); assert s.ram[0xb80] & 1  # latched until reset gate
latched = bytes(s.ram)
for addr, value in [(0x8af,8),(0x8af,4),(0x8af,32),(0x8af,16),(0x8b1,8),(0x8e8,42)]:
    ct.memmove(s.ram,latched,65536); s.ram[addr] = value
    tick(s,0)
    assert bytes(s.ram[0xb80:0xb8c]) == bytes(12)
checks['synthetic_four_stage_walk_latch_and_six_reset_gates'] = len(sequence)+1+6
for code in range(256):
    s = detector(); s.ram[0x898] = code
    tick(s,255)
    assert get(s.ram,0xb82) == (1 if code == 2 else 0)
checks['sequence_initial_ratio_code_gate_all_bytes'] = 256
s=detector();put(s.ram,0xb82,65535);tick(s,255)
assert get(s.ram,0xb82)==65535
checks['sequence_counter_saturates'] = 1

report = dict(result='passed', cases=sum(checks.values()), checks=checks,
    evidence_scope=dict(instruction_behavior_cases=sum(checks.values())-3000,
        synthetic_hypothesis_iterations=3000, hardware_measurements=0,
        sensor_pulses_per_output_shaft_revolution='unknown',
        hypothesis_note='20 pulses was selected for a numerical fit, not independently sourced. The synthetic gear traces do not establish sensor pulse count or actual gear numbering.'),
    conditional_gear_traces=gear_traces,
    stock_ratio_thresholds=thresholds, synthetic_sequence_trace=trace,
    firmware_sha256=hashlib.sha256(image).hexdigest(),
    test_script_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
    compiled_library_sha256=hashlib.sha256(Path(sys.argv[1]).read_bytes()).hexdigest(),
    limitations='Instruction-level fixtures, not a complete boot or hardware simulation. Tests establish code paths and boundaries, not gear-number calibration, neutral circuit polarity, wall-clock periods or mechanical TDC. The successful sequence uses changed calibration bytes only in emulated memory; it is not stock behavior.')
(ROOT/'analysis/semantics/map_selector_validation.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps({k:v for k,v in report.items() if k!='synthetic_sequence_trace'},indent=2))
