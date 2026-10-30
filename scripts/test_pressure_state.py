"""Compare independent pressure selection model with B304-B381 instructions.

Usage: python3 scripts/test_pressure_state.py /path/to/libxt660_full.so
Scope ends before lookup consumers; physical pressure and upstream filters open.
"""
import ctypes as ct
import hashlib
import json
import random
import sys
from pathlib import Path
from pressure_state import select_pressure, track_pressure

ROOT = Path(__file__).resolve().parents[1]
image = (ROOT/'firmware/XT660X 2005.bin').read_bytes()
base = bytes(0x1800)+image[0x1800:]


class State(ct.Structure):
    _fields_ = [('ram', ct.c_uint8*65536), ('reg', ct.c_uint8*64), ('pc', ct.c_uint16)]


def put(buf, address, value):
    buf[address], buf[address+1] = value >> 8, value & 255


def get(buf, address):
    return buf[address]*256+buf[address+1]


lib = ct.CDLL(sys.argv[1])
lib.xt_step.argtypes = [ct.POINTER(State)]
lib.xt_step.restype = ct.c_int
rng = random.Random(660308)
cases = 0
sources = {}


def check(counter, startup, request, faults, selector, values, limits, threshold):
    global cases
    s = State()
    ct.memmove(s.ram, base, 65536)
    put(s.reg, 42, 0xff0)
    s.pc = 0xb304
    for a, v in zip((0xb3b, 0x880, 0x89f, 0x8af, 0x186f, 0x1843),
                    (counter, startup, request, faults, selector, threshold)):
        s.ram[a] = v
    for a, v in zip((0xda8, 0xca4, 0xcb6, 0xcc8, 0x18ac, 0x18ae), (*values, *limits)):
        put(s.ram, a, v)
    untouched = {a: get(s.ram, a) for a in (0xcb4, 0xcb6, 0xcc6, 0xcca, 0xcc8)}
    expected = select_pressure(counter, startup, request, faults, selector,
                               *values, *limits, threshold)
    for _ in range(150):
        if s.pc == 0xb381:
            break
        assert lib.xt_step(ct.byref(s)) == 0, hex(s.pc)
    else:
        raise AssertionError(hex(s.pc))
    for a, v in (untouched | expected['words']).items():
        assert get(s.ram, a) == v, (hex(a), get(s.ram, a), v, expected)
    assert s.ram[0xb3b] == expected['counter']
    assert s.ram[0x89f] == expected['request_flags']
    cases += 1
    sources[expected['source']] = sources.get(expected['source'], 0)+1


# Every request/fault bit combination, both exact selector outcomes, varied
# startup qualification; asymmetric source values detect mistaken routing.
for request in range(256):
    for faults in range(256):
        check(0, 8 if faults & 1 else 0, request, faults,
              0x80 if request & 1 else 0xff,
              (12345, 23456, 34567, 45678), (10000, 50000), 0)

# Exhaust every candidate word at each stock clamp through both normal sources.
limits = tuple(int.from_bytes(image[a:a+2], 'big') for a in (0x18ac, 0x18ae))
for value in range(65536):
    for selector in (0, 0x80):
        check(255, 0, 0, 0, selector, (777, 999, value, value), limits, image[0x1843])

# Synthetic limits and thresholds test boundary equality and branch precedence.
for _ in range(8000):
    check(*(rng.randrange(256) for _ in range(5)),
          tuple(rng.randrange(65536) for _ in range(4)),
          tuple(rng.randrange(65536) for _ in range(2)), rng.randrange(256))

# Follow the selected stock source one stage further: accepted-window update.
# Vary all gain-byte values; include 24-bit sum carries and both filter signs.
tracking_cases = 0
for n in range(8192):
    samples = [rng.randrange(65536) for _ in range(5)]
    if n < 4:
        samples = [[0]*5, [65535]*5, [0,65535,0,65535,0], [1,2,3,4,5]][n]
    previous = rng.randrange(65536)
    gain = n % 256
    s = State()
    ct.memmove(s.ram, base, 65536)
    put(s.reg, 42, 0xff0)
    s.pc = 0x8764
    for a, v in zip(range(0xcb8, 0xcc2, 2), samples):
        put(s.ram, a, v)
    put(s.ram, 0xcca, previous)
    s.ram[0x189e] = gain
    for _ in range(300):
        if s.pc == 0x87e2:
            break
        assert lib.xt_step(ct.byref(s)) == 0, hex(s.pc)
    else:
        raise AssertionError(hex(s.pc))
    mean, current = track_pressure(samples, previous, gain)
    assert get(s.ram, 0xcc6) == mean
    assert get(s.ram, 0xcca) == get(s.ram, 0xcc8) == current
    tracking_cases += 1


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


report = dict(result='passed', cases=cases+tracking_cases, selection_cases=cases,
    tracking_cases=tracking_cases, source_case_counts=sources,
    firmware_sha256=sha(ROOT/'firmware/XT660X 2005.bin'),
    test_sha256=sha(Path(__file__)), model_sha256=sha(ROOT/'scripts/pressure_state.py'),
    library_sha256=sha(Path(sys.argv[1])), stock_clamp=list(limits),
    stock_selector=image[0x186f], stock_startup_counter_threshold=image[0x1843],
    scope='B304-B381: source priority, replacement writes, ordered clamps and saturating counter; all request/fault byte pairs, all candidate words on both normal sources, randomized limits. 8764-87E2: five-word mean and signed Q8 tracking filter after eligibility.',
    limitations='Does not execute tracking eligibility/history acquisition, all alternate upstream filters, downstream lookups, analog circuitry or pressure calibration. Passing does not establish kPa.')
(ROOT/'analysis/semantics/pressure_state_validation.json').write_text(
    json.dumps(report, indent=2)+'\n', encoding='utf-8', newline='\n')
print(json.dumps(report, indent=2))
