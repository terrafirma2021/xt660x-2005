"""Build byte-backed semantic records and review excerpts; no firmware modification."""
import csv
import hashlib
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT/'analysis/semantics'
OUT.mkdir(exist_ok=True)
binary = (ROOT/'firmware/XT660X 2005.bin').read_bytes()
sha = hashlib.sha256(binary).hexdigest()
assert sha == '5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280'
instructions = list(csv.DictReader((ROOT/'analysis/disassembly.tsv').open(), delimiter='\t'))
refs = list(csv.DictReader((ROOT/'analysis/references.tsv').open(), delimiter='\t'))
by_address = {int(r['address'],16):r for r in instructions}

records = []
def add(key, address, width, count, role, evidence, interpretation, unit='raw', blockers=None):
    raw = binary[address:address+width*count]
    assert len(raw) == width*count
    for pc in evidence:
        assert pc in by_address, hex(pc)
    records.append({
        'id':key, 'file_offset':address, 'cpu_address':f'0x{address:04X}',
        'storage':{'element_bytes':width, 'count':count, 'signed':False, 'byte_order':'big' if width>1 else None},
        'stock_hex':raw.hex(),
        'stock_values':[int.from_bytes(raw[i:i+width],'big') for i in range(0,len(raw),width)],
        'role':role, 'role_confidence':interpretation,
        'units':unit, 'engineering_decode':None, 'engineering_encode':None,
        'ready_for_tuning_export':False,
        'remaining_requirements':blockers or ['Validate engineering scale and physical behavior.', 'Establish image integrity/checksum and flashing requirements.'],
        'evidence':[{'pc':f'0x{pc:04X}', 'assembly':by_address[pc]['instruction']} for pc in evidence],
        'direct_references':[r for r in refs if r['to'].lower()==f'{address:04x}']})

add('fan_normal_clear_below',0x4bfe,1,1,'Clear PP2 when effective coolant byte is strictly below this value.',[0x71b9,0x71bc,0x71ca],'code-confirmed; fan role corroborated by diagnostic 51')
add('fan_normal_set_above',0x4bff,1,1,'Set PP2 when effective coolant byte is strictly above this value.',[0x71be,0x71c1,0x71c3,0x71c5],'code-confirmed; fan role corroborated by diagnostic 51')
add('fan_fault_set_below_road_speed',0x4c00,1,1,'Fault-route PP2 set below filtered road-speed byte.',[0x71a7,0x71aa,0x71ad],'code-confirmed routing; road-speed units unresolved')
add('fan_fault_clear_above_road_speed',0x4c01,1,1,'Fault-route PP2 clear above filtered road-speed byte.',[0x71af,0x71b2,0x71b4],'code-confirmed routing; road-speed units unresolved')
add('coolant_fault_substitute',0x4e64,1,1,'Effective coolant byte used with fault bit set outside diagnostic mode.',[0x7145,0x714a,0x714f,0x7157],'code-confirmed; coolant role corroborated by diagnostic 06')
add('intake_temperature_fault_substitute',0x4e65,1,1,'Intake-temperature substitute under sensor fault outside diagnostic mode.',[0x702a,0x702f,0x7060,0x7063],'code-confirmed; intake-temperature role corroborated by diagnostic 05')
add('coolant_conversion_values',0x4f47,1,29,'ADC conversion knots; raw10 axis 60 + 32*k, with endpoint clamp.',[0x711b,0x7121,0x7128,0x712b,0x7133],'code-confirmed conversion; degrees-C encoding unresolved')
add('intake_temperature_conversion_values',0x4f26,1,33,'ADC-high-byte conversion knots; axis 8*k. Last knot is interpolation endpoint.',[0x7034,0x7040,0x7043,0x7046],'code-confirmed conversion; degrees-C encoding unresolved')
for prefix,off,on,mask,gate,pc in [
    ('injector_primary_period_cut',0x4bc8,0x4bca,8,0xf519,0x758b),
    ('spark_period_cut',0x4bcc,0x4bce,2,0x5666,0x75b3),
    ('injector_secondary_period_cut',0x4bd0,0x4bd2,4,0xf59e,0x759f)]:
    certainty = 'code-confirmed gate and diagnostic output identity' if mask!=4 else 'code-confirmed secondary timer gate; channel disabled by stock variant 9'
    add(prefix+'_resume_at_or_above',off,2,1,f'Clear RAM 0x088C mask 0x{mask:02X} when period >= value.',[pc,gate],certainty,unit='period ticks')
    add(prefix+'_cut_at_or_below',on,2,1,f'Set RAM 0x088C mask 0x{mask:02X} when period <= value.',[pc,gate],certainty,unit='period ticks')
for prefix,off,on,mask,gate in [
    ('injector_primary_road_speed_cut',0x4bdf,0x4be0,8,0xf51e),
    ('spark_road_speed_cut',0x4be1,0x4be2,2,0x566b),
    ('injector_secondary_road_speed_cut',0x4be3,0x4be4,4,0xf5a3)]:
    add(prefix+'_clear_below',off,1,1,f'Clear RAM 0x089A mask 0x{mask:02X} when road-speed byte < value.',[0x6259,gate],'code-confirmed; physical speed scale unresolved')
    add(prefix+'_set_at_or_above',on,1,1,f'Set RAM 0x089A mask 0x{mask:02X} when road-speed byte >= value.',[0x6259,gate],'code-confirmed; physical speed scale unresolved')
add('conditional_injector_primary_cut_resume_above',0x34a8,2,1,'Clear 0x0886 mask 4 when period > value; only evaluated while 0x08B1 mask 8 set.',[0x77c6,0x77dd,0xf4e0],'code-confirmed conditional secondary limit; initiating fault meaning unresolved',unit='period ticks')
add('conditional_injector_primary_cut_at_or_below',0x34aa,2,1,'Set 0x0886 mask 4 when period <= value under same gate.',[0x77d8,0x77db,0xf4e0],'code-confirmed conditional secondary limit; initiating fault meaning unresolved',unit='period ticks')
add('conditional_injector_secondary_cut_resume_above',0x34ac,2,1,'Clear 0x0886 mask 2 when period > value under same gate.',[0x77f1,0xf4fc],'code-confirmed secondary-channel limit; stock variant disables output',unit='period ticks')
add('conditional_injector_secondary_cut_at_or_below',0x34ae,2,1,'Set 0x0886 mask 2 when period <= value under same gate.',[0x77ec,0xf4fc],'code-confirmed secondary-channel limit; stock variant disables output',unit='period ticks')
add('engine_speed_source_selector',0x18d7,1,1,'Zero selects instantaneous/filtered pair; nonzero selects 0x0906 for both downstream speed variables.',[0x7482,0x7485,0x7495],'code-confirmed')
add('variant_selector',0x18d3,1,1,'Copied to 0x0D87; stock 9 selects variant-specific paths including disabling timer-7 injector entry.',[0x611e,0xf592],'code-confirmed; do not treat as user-facing mode switch')
add('road_speed_pulse_gain',0x4bd4,2,1,'Gain applied to saturated pulse-count delta before two-stage filtering to 0x0ABE.',[0x9b15,0x9b32,0x9b35],'code-confirmed; timebase/wheel calibration unresolved')
add('road_speed_filter_factor',0x4bd6,1,1,'Factor in two-stage road-speed filter.',[0x9b63,0x9bf7,0x9c26],'code-confirmed')

ports = [
    ('coolant_temperature',6,0x70a3,6,0x8d6,0x8f4),
    ('intake_air_temperature',3,0x6fc2,5,0x8d8,0x8f5),
    ('throttle_position',0,0x6996,1,0x8ca,0x8d0),
    ('intake_air_pressure',1,0x6aa5,3,0xca2,None),
    ('oxygen_signal_candidate',2,0x6af6,None,0x8dc,None),
    ('fuel_system_voltage',4,0x6c5e,9,0xbce,0x8d9),
    ('lean_angle_switch',5,0x71eb,8,0x8dd,None),
    ('unidentified_analogue',7,0x707c,None,0x8d2,None)]
inputs=[]
for name,ch,handler,diag,raw,value in ports:
    assert int.from_bytes(binary[0x6968+2*ch:0x696a+2*ch],'big') == handler
    inputs.append({'signal':name,'adc_channel':ch,'handler':f'0x{handler:04X}',
                   'raw_ram':f'0x{raw:04X}','effective_ram':None if value is None else f'0x{value:04X}',
                   'diagnostic_code':diag,'role_confidence':'service-manual diagnostic cross-reference' if diag else 'unconfirmed physical signal',
                   'ecu_connector_pin':None})
outputs=[
    {'signal':'ignition_coil','mcu_channel':'PT3 / timer channel 3','compare_address':'0x0056','diagnostic_code':30,'test_routine':'0xB900','ecu_connector_pin':None},
    {'signal':'primary_injector','mcu_channel':'PT6 / timer channel 6','compare_address':'0x005C','diagnostic_code':36,'test_routine':'0xB97F','ecu_connector_pin':None},
    {'signal':'secondary_injector_candidate','mcu_channel':'PT7 / timer channel 7','compare_address':'0x005E','diagnostic_code':37,'test_routine':'0xBA06','ecu_connector_pin':None,'note':'Code present but F592 exits for stock variant 9; physical population unconfirmed.'},
    {'signal':'fan_relay','mcu_channel':'PP2','port_address':'0x00F0','mask':4,'diagnostic_code':51,'test_routine':'0xBB45','ecu_connector_pin':None},
    {'signal':'air_induction_solenoid','mcu_channel':'PP1','port_address':'0x00F0','mask':2,'diagnostic_code':48,'test_routine':'0xBA8D','ecu_connector_pin':None},
    {'signal':'headlight_relay','mcu_channel':'PP4','port_address':'0x00F0','mask':16,'diagnostic_code':52,'test_routine':'0xBBA1','ecu_connector_pin':None}]
catalog={'schema_version':1,'firmware_sha256':sha,'file_address_mapping':'CPU address = file offset for supplied flat image',
         'purpose':'Evidence registry for later XDF/tool development; no entry currently validated for tuning export.',
         'calibrations':records,'inputs':inputs,'outputs':outputs,
         'integrity':{'checksum_algorithm':None,'checksum_ranges':None,'flash_procedure':None},
         'processor_model_sha256':hashlib.sha256((ROOT/'ghidra/XT660CPU12/data/languages/HCS_HC12.sinc').read_bytes()).hexdigest()}
(OUT/'catalog.json').write_text(json.dumps(catalog,indent=2)+'\n', encoding='utf-8', newline='\n')
ranges={
    'sensor_fan':[(0x5fc8,0x5fe0),(0x68cc,0x6947),(0x6fc2,0x71d7),(0x650b,0x657a),(0xaf92,0xaff4),(0xbb45,0xbba1),(0xc276,0xc28d)],
    'rpm_cuts':[(0x6259,0x6299),(0x73a5,0x74b8),(0x7588,0x75c7),(0x77c6,0x7800),(0xf49f,0xf607),(0x5664,0x56b4)],
    'spark':[(0x5407,0x547a),(0x54f0,0x55b6),(0x8827,0x88b1),(0x8a2f,0x8a89),(0xed29,0xee78),(0xb900,0xb97f)],
    'fuel_maps':[(0x7cc3,0x7e60),(0x8530,0x857d),(0xb97f,0xba8d),(0xf519,0xf607)],
    'road_speed':[(0xf3f3,0xf424),(0x9b09,0x9c6c),(0xcde5,0xce13)]}
for name,blocks in ranges.items():
    lines=['Original instruction bytes; operands use CPU addresses = file offsets.',f'Firmware SHA256: {sha}','']
    for lo,hi in blocks:
        lines.append(f'Range 0x{lo:04X} .. 0x{hi:04X} exclusive')
        for row in instructions:
            pc=int(row['address'],16)
            if lo<=pc<hi:
                raw=bytes.fromhex(row['bytes']);assert binary[pc:pc+len(raw)]==raw
                lines.append(f"{row['address']}  {row['bytes']:12}  {row['instruction']}")
        lines.append('')
    (OUT/(name+'_evidence.txt')).write_text('\n'.join(lines)+'\n', encoding='utf-8', newline='\n')
print(f'Wrote {len(records)} calibration records, {len(inputs)} ADC channels and {len(outputs)} logical outputs.')
