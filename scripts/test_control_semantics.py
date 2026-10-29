"""Validate recovered control behavior against the compiled instruction translation.

Run under WSL/Linux: python3 scripts/test_control_semantics.py /path/libxt660_full.so
These are isolated routine/block tests, not a model of the complete ECU hardware.
"""
import ctypes as ct
import hashlib
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'analysis/semantics'
OUT.mkdir(exist_ok=True)
image = (ROOT / 'firmware/XT660X 2005.bin').read_bytes()

class State(ct.Structure):
    _fields_ = [('ram', ct.c_uint8 * 65536), ('reg', ct.c_uint8 * 64), ('pc', ct.c_uint16)]

lib = ct.CDLL(sys.argv[1])
lib.xt_step.argtypes = [ct.POINTER(State)]
lib.xt_step.restype = ct.c_int
base = bytearray(image)
base[:0x1800] = bytes(0x1800)
base = bytes(base)

def put(b, a, n, v):
    for i in range(n):
        b[a+i] = (v >> (8*(n-i-1))) & 255

def get(b, a, n=2):
    return int.from_bytes(bytes(b[a:a+n]), 'big')

def state(pc):
    s = State()
    ct.memmove(s.ram, base, 65536)
    put(s.reg, 42, 2, 0x0ff0)
    put(s.ram, 0x0ff0, 2, 0x1700)
    s.pc = pc
    return s

def run(s, stop=0x1700, limit=5000):
    for _ in range(limit):
        if s.pc == stop:
            return s
        assert lib.xt_step(ct.byref(s)) == 0, hex(s.pc)
    raise AssertionError(('no return', hex(s.pc), hex(stop)))

def interp(table, q):
    k, f = divmod(q, 256)
    a = image[table+k]
    return a if f == 0 else (a*256 + (image[table+k+1]-a)*f)//256

checks = {}
samples = []
for adc in range(1024):
    raw = adc << 6
    s = state(0x70a3)
    put(s.reg, 0, 2, raw)
    put(s.ram, 0x8ca, 2, raw)
    s.ram[0xd58] = 0x80  # disable fault detector, isolate conversion
    s.ram[0x883] = 0x20  # skip first-sample curve initialization
    s.ram[0x884] = 8
    run(s)
    expected = interp(0x4f47, min(0x1c00, max(0, raw-0xf00)//8))
    assert s.ram[0x8f6] == expected and s.ram[0x8f4] == expected
    assert s.ram[0xae8] == min(149, expected*160//256)
    samples.append({'adc_10bit': adc, 'coolant_internal': expected,
                    'diagnostic_payload': s.ram[0xae8]})
checks['coolant_full_routine_all_10bit_inputs'] = 1024

for adc in range(1024):
    s = state(0x6fc2)
    raw = adc << 6
    put(s.reg, 0, 2, raw)
    put(s.ram, 0x8ca, 2, raw)
    s.ram[0xd59] = 0x80
    run(s)
    expected = interp(0x4f26, (raw >> 8)*32)
    assert s.ram[0x8f5] == expected
    assert s.ram[0xaeb] == min(149, expected*160//256)
checks['intake_temperature_full_routine_all_10bit_inputs'] = 1024

# Entire fan decision block; all raw inputs, previous states and routing flags.
n = 0
for raw in range(256):
    for old in [0, 4]:
        for fault in [0, 0x80]:
            for mode in [0, 0x10]:
                for diagnostic in [False, True]:
                    s = state(0x7190)
                    s.ram[0xf0] = 0xa1 | old
                    s.ram[0x8f4] = raw
                    s.ram[0xabe] = raw
                    s.ram[0x8b0] = fault
                    s.ram[0x881] = mode
                    s.ram[0xd4b] = 51
                    if diagnostic:
                        s.ram[0x8a0] = 4
                        s.ram[0xbdd] = 51
                    expected = old
                    if not diagnostic:
                        if fault and not mode:
                            if raw < image[0x4c00]: expected = 4
                            elif raw > image[0x4c01]: expected = 0
                        else:
                            if raw < image[0x4bfe]: expected = 0
                            elif raw > image[0x4bff]: expected = 4
                    run(s)
                    assert s.ram[0xf0] == (0xa1 | expected), (raw, old, fault, mode, diagnostic)
                    assert s.ram[0x8c2] == 1 and s.ram[0x8c3] == 0
                    n += 1
checks['fan_normal_fault_hysteresis_and_diagnostic_override'] = n

# Fault detector boundaries and debounce transitions; preset counters are fixture inputs.
n = 0
for adc_high in range(256):
    for old_fault in [0, 0x80]:
        s = state(0x70a3)
        put(s.reg, 0, 2, adc_high << 8)
        put(s.ram, 0x8ca, 2, adc_high << 8)
        s.ram[0xd58] = 0
        s.ram[0xd8a] = 5
        s.ram[0x8b0] = old_fault
        s.ram[0x8b5] = 0x10 if adc_high < 7 or adc_high >= 248 else 0
        s.ram[0xb41] = s.ram[0xb4e] = 6
        s.ram[0x883] = 0x20
        s.ram[0x884] = 8
        run(s)
        expected_fault = adc_high < 7 or adc_high >= 248
        assert bool(s.ram[0x8b0] & 0x80) == expected_fault
        assert s.ram[0x8f4] == (image[0x4e64] if expected_fault else s.ram[0x8f6])
        n += 1
checks['coolant_fault_boundaries_and_fallback_after_debounce'] = n

# All period words with the three previous limiter bits clear, then set.
n = 0
for period in range(65536):
    for previous in [0, 0x0e]:
        s = state(0x7588)
        put(s.ram, 0xa44, 2, period)
        s.ram[0x88c] = 0xa1 | previous
        expected = 0xa1 | previous
        for mask, off, on in [(8,0x4bc8,0x4bca),(4,0x4bd0,0x4bd2),(2,0x4bcc,0x4bce)]:
            if period <= get(image,on): expected |= mask
            elif period >= get(image,off): expected &= ~mask
        run(s, 0x75c7)
        assert s.ram[0x88c] == expected, (period, previous)
        n += 1
checks['period_cut_flags_all_u16_inputs_both_initial_states'] = n

# Exact reciprocal representation over non-overflow inputs; does not assert RPM units.
for period in range(1200,65536):
    s = state(0x73f7)
    put(s.ram, 0xa44, 2, period)
    q,r = divmod(37500, period)
    expected = min(0xfe00, ((q << 8) | ((r << 8)//period)) << 3)
    run(s, 0x7421)
    assert get(s.ram, 0x8f8) == expected, period
checks['reciprocal_speed_conversion_periods_1200_through_65535'] = 64336

# Verify diagnosed hardware output and entry gates without simulating timers.
gates = [(0xf519, 0x88c,8,0xf530), (0xf519,0x89a,8,0xf530),
         (0xf592,0x88c,4,0xf5ad), (0xf592,0x89a,4,0xf5ad),
         (0x5664,0x88c,2,0x56b1), (0x5664,0x89a,2,0x56b1)]
for entry,addr,mask,exitpc in gates:
    s = state(entry);s.ram[addr] = mask
    run(s,exitpc)
    assert get(s.ram,0x56) == 0 and get(s.ram,0x5c) == 0 and get(s.ram,0x5e) == 0
checks['spark_and_injector_cut_entry_gates'] = len(gates)

# Execute complete original selection/index/lookup blocks at every grid knot.
n = 0
for bank, cells in enumerate([0x42ae, 0x452e, 0x47ae]):
    for row in range(32):
        for col in range(20):
            s = state(0x8827)
            put(s.ram,0x902,2,get(image,0x426e+2*row))
            put(s.ram,0x8e8,2,get(image,0x4246+2*col))
            s.ram[0x88d] = 4  # use supplied column input, not 0xD000 substitute
            s.ram[0xd87] = 9
            s.ram[0x896] = 0 if bank==0 else 0x10
            s.ram[0x898] = 0 if bank!=2 else 255
            run(s,0x88b1)
            assert s.ram[0xa83] == image[cells+row*20+col], (bank,row,col,s.ram[0xa83])
            n += 1
checks['spark_three_map_selection_all_cell_knots'] = n
n = 0
for bank,cells,row_axis,col_axis in [(0,0x1b66,0x1b0c,0x1ad0),(1,0x37a8,0x374e,0x3712)]:
    for row in range(45):
        for col in range(30):
            for dest in [0,2]:
                s = state(0x7cc3)
                put(s.ram,0x900,2,get(image,row_axis+row*2))
                put(s.ram,0xc90,2,get(image,col_axis+col*2))
                s.ram[0xb80] = bank
                s.ram[0xa16] = dest
                run(s,0x7dd2)
                assert get(s.ram,0x952+dest) == get(image,cells+2*(row*30+col)), (bank,row,col,dest)
                n += 1
for row in range(45):
    for col in range(30):
        for dest in [0,2]:
            s = state(0x7dd2)
            put(s.ram,0x900,2,get(image,0x262e+row*2))
            put(s.ram,0x8e8,2,get(image,0x25f2+col*2))
            s.ram[0xa16] = dest
            run(s,0x7e60)
            assert get(s.ram,0x956+dest) == get(image,0x2688+2*(row*30+col)), (row,col,dest)
            n += 1
checks['quantity_three_maps_all_cell_knots_and_both_destinations'] = n

report = {'result':'passed', 'checks':checks, 'total_cases':sum(checks.values()),
          'firmware_sha256':hashlib.sha256(image).hexdigest(),
          'compiled_library_sha256':hashlib.sha256(Path(sys.argv[1]).read_bytes()).hexdigest(),
          'test_script_sha256':hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
          'scope':'Independent formulas/decision tables versus instruction translation. No peripheral timing, physical units or connector identity certified.'}
(OUT/'control_validation.json').write_text(json.dumps(report,indent=2)+'\n')
(OUT/'coolant_conversion_samples.json').write_text(json.dumps(samples,indent=2)+'\n')
print(json.dumps(report,indent=2))
