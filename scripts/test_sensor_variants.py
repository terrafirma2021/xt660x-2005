"""Test variant selection against temperature conversion and spark correction."""
import ctypes as ct
import hashlib
import json
import sys
from pathlib import Path
from sensor_profiles import sensor_code

ROOT=Path(__file__).resolve().parents[1]
image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
base=bytes(0x1800)+image[0x1800:]
class State(ct.Structure):
    _fields_=[('ram',ct.c_uint8*65536),('reg',ct.c_uint8*64),('pc',ct.c_uint16)]
lib=ct.CDLL(sys.argv[1]);lib.xt_step.argtypes=[ct.POINTER(State)];lib.xt_step.restype=ct.c_int
def put(b,a,v):b[a]=(v>>8)&255;b[a+1]=v&255
def state(pc):
    s=State();ct.memmove(s.ram,base,65536);put(s.reg,42,0xff0);put(s.ram,0xff0,0x1700);s.pc=pc
    return s
def run(s,stop=0x1700):
    for _ in range(5000):
        if s.pc==stop:return
        assert lib.xt_step(ct.byref(s))==0,hex(s.pc)
    raise AssertionError(hex(s.pc))
checks={};n=0
for variant in range(256):
    adcs=range(1024) if variant in [0,9,255] else [0,1,27,28,59,60,61,127,144,147,148,511,591,955,956,991,992,1023]
    for adc in adcs:
        for coolant in [True,False]:
            for fault in [False,True]:
                s=state(0x70a3 if coolant else 0x6fc2)
                raw=adc*64;put(s.reg,0,raw);put(s.ram,0x8ca,raw)
                s.ram[0xd87]=variant;s.ram[0xd58 if coolant else 0xd59]=128
                s.ram[0x883]=32;s.ram[0x884]=8
                s.ram[0x8b0]=(128 if coolant else 64) if fault else 0
                run(s)
                converted=sensor_code(image,adc,coolant)
                expected=image[0x4e64 if coolant else 0x4e65] if fault else converted
                assert s.ram[0x8f4 if coolant else 0x8f5]==expected,(variant,adc,coolant,fault)
                if coolant:assert s.ram[0x8f6]==converted
                payload_source=converted if coolant else expected
                assert s.ram[0xae8 if coolant else 0xaeb]==min(149,payload_source*160//256)
                n+=1
checks['all_variant_bytes_temperature_conversion_and_fault_fallback']=n
n=0
for variant in range(256):
    for index in range(29):
        for fraction in ([0,1,127,128,255] if index<28 else [0]):
            s=state(0x88d1);s.ram[0xd87]=variant;put(s.ram,0x918,index*256+fraction)
            run(s,0x88f4)
            table=0x4f81 if variant==9 else 0x4f64
            expected=image[table+index]
            if fraction:expected=(expected*(256-fraction)+image[table+index+1]*fraction+128)//256
            assert s.ram[0xa8b]==expected,(variant,index,fraction)
            n+=1
checks['variant_selects_correct_spark_time_curve_and_fractional_values']=n
report=dict(result='passed',cases=sum(checks.values()),checks=checks,
    firmware_sha256=hashlib.sha256(image).hexdigest(),
    test_script_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
    model_script_sha256=hashlib.sha256((ROOT/'scripts/sensor_profiles.py').read_bytes()).hexdigest(),
    compiled_library_sha256=hashlib.sha256(Path(sys.argv[1]).read_bytes()).hexdigest(),
    conclusion='Variant 9 selects the XT image spark correction curve; changing D87 alone does not change either tested temperature transfer or fallback. Coolant diagnostic reports measured conversion even during fault replacement; IAT diagnostic reports the effective replacement.',
    limitations='Isolated routines with injected ADC results and fault states. No proof about every possible upstream state writer, external analog circuit, donor ECU identity or physical units.')
(ROOT/'analysis/semantics/sensor_variant_validation.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
