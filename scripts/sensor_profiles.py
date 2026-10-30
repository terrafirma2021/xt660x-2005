"""Reproducible temperature-profile inference, not a measured board calibration.

Compare exact digital transfer curves with manufacturer resistance intervals.
No third-party PDF content is bundled; source pages and input numbers are explicit.
"""
import hashlib
import json
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
PROFILE='yamaha_temperature_candidate'
DEFINITION=dict(celsius_per_code=0.625,offset_celsius=-30,
    status='inferred conditional profile; ECU identity and analog circuit unconfirmed',
    basis='Both digital curves admit a constant ratiometric NTC pullup across XT660 resistance specifications. TDM900 fail-safe values match both fallback codes under this formula.',
    conflict='XT660 2004 manual specifies coolant fail-safe 80 C; this formula gives 60 C. TDM900 specifies 60 C. This does not identify this dump as TDM900 firmware or prove its board matches either manual.',
    requires=['NTC to ground with constant pullup to ADC reference','sensor specifications apply to this ECU','affine temperature-code interpretation'],
    evidence=['0x6FC2','0x70A3','0x4E64','0x4E65','0x4F26','0x4F47'])

def celsius(raw):return raw*0.625-30

def sensor_code(image,adc,coolant):
    q=min(7168,max(0,adc*64-3840)//8) if coolant else (adc//4)*32
    table=image[0x4f47:0x4f64] if coolant else image[0x4f26:0x4f47]
    index,fraction=divmod(q,256)
    if index==len(table)-1:return table[index]
    return (table[index]*(256-fraction)+table[index+1]*fraction)//256

def fit(image,coolant,slope,offset,points):
    """Quantization envelope from discarded ADC bits and one output-code bin.

    Include the adjacent input group because IAT discards two ADC bits before
    lookup: it can skip output codes (including code 176 near 80 C). The envelope
    runs from the next group's output to one code above the current output.
    ADC bin n represents ratio [n/1024,(n+1)/1024). Sensor tolerance is the
    published resistance interval, and all temperatures must share one pullup.
    These assumptions intentionally remain visible rather than asserting 1.8k.
    """
    rows=[]
    for temp,low,high in points:
        step=1 if coolant else 4
        admissible=[a for a in range(1,1023)
                    if slope*sensor_code(image,min(1023,(a//step+1)*step),coolant)+offset <= temp
                    < slope*(sensor_code(image,a,coolant)+1)+offset]
        if not admissible:raise ValueError((coolant,temp,slope,offset))
        amin,amax=min(admissible),max(admissible)
        rp_min=low*(1024/(amax+1)-1)
        rp_max=high*(1024/amin-1)
        rows.append(dict(celsius=temp,resistance_ohms=[low,high],adc_bins=[amin,amax],
                         compatible_pullup_ohms=[rp_min,rp_max]))
    lower=max(r['compatible_pullup_ohms'][0] for r in rows)
    upper=min(r['compatible_pullup_ohms'][1] for r in rows)
    return dict(slope=slope,offset=offset,points=rows,consistent_constant_pullup=lower<=upper,
                common_pullup_interval_ohms=[lower,upper] if lower<=upper else None)

def temperature_trials(image,clt,iat):
    """Test competing encodings against every published resistance point.

    Rejection means incompatible under the stated ratiometric NTC model,
    not proof about arbitrary undocumented conditioning circuits.
    """
    candidates=[('offset_scaled_code',.625,-30),('internal_code_is_celsius',1,0),
        ('internal_code_is_fahrenheit',5/9,-160/9),
        ('wire_byte_is_celsius',.625,0),('wire_byte_is_fahrenheit',25/72,-160/9),
        ('coolant_fallback_forced_to_80C',.625,-10),
        ('both_XT_fallbacks_forced',.9375,-55)]
    trials=[]
    for name,slope,offset in candidates:
        for coolant,points in [(True,clt),(False,iat)]:
            try:
                result=fit(image,coolant,slope,offset,points)
                reason='common pullup exists' if result['consistent_constant_pullup'] else 'no common pullup across the published resistance intervals'
            except ValueError as error:
                result=dict(slope=slope,offset=offset,consistent_constant_pullup=False,
                    unrepresentable_temperature_celsius=error.args[0][1])
                reason='required reference temperature is outside this decoded curve under the proposed scale'
            trials.append(dict(hypothesis=name,sensor='coolant' if coolant else 'intake',reason=reason,**result))
    return trials

def offset_sweep(image,clt,iat):
    """Check identifiability, rather than testing only hand-picked offsets.

    Each sensor may have its own unknown pullup; the code-to-Celsius scale is
    held at 0.625 for this bounded integer-offset search. This neither proves
    that slope nor bounds every possible continuous/non-affine solution.
    """
    results={}
    for name,coolant,points in [('coolant',True,clt),('intake',False,iat)]:
        accepted=[]
        for offset in range(-60,21):
            try:trial=fit(image,coolant,.625,offset,points)
            except ValueError:continue
            if trial['consistent_constant_pullup']:
                accepted.append(dict(offset_celsius=offset,
                    common_pullup_interval_ohms=trial['common_pullup_interval_ohms']))
        results[name]=accepted
    shared=sorted(set(r['offset_celsius'] for r in results['coolant']) &
                  set(r['offset_celsius'] for r in results['intake']))
    assert shared==list(range(-36,-23))
    return dict(fixed_slope=.625,offset_search=dict(min=-60,max=20,step=1),
        sensor_hypotheses_tested=162,compatible=results,shared_offsets_celsius=shared,
        conclusion='Thirteen shared integer offsets fit with independent unknown sensor pullups. Resistance consistency does not uniquely establish -30. The historical logger is a guess, not calibration evidence.')

def build():
    image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
    clt=[(20,2320,2590),(80,310,326),(110,140,145)]
    iat=[(20,2210,2690),(80,290,354)]
    fits={
        'coolant_candidate':fit(image,True,.625,-30,clt),
        'intake_candidate':fit(image,False,.625,-30,iat),
        'coolant_offset_forced_to_80_fallback':fit(image,True,.625,-10,clt),
        'coolant_common_affine_forced_through_XT_fallbacks':fit(image,True,.9375,-55,clt),
        'intake_common_affine_forced_through_XT_fallbacks':fit(image,False,.9375,-55,iat),
    }
    assert fits['coolant_candidate']['consistent_constant_pullup']
    assert fits['intake_candidate']['consistent_constant_pullup']
    assert not fits['coolant_offset_forced_to_80_fallback']['consistent_constant_pullup']
    assert not fits['coolant_common_affine_forced_through_XT_fallbacks']['consistent_constant_pullup']
    trials=temperature_trials(image,clt,iat)
    assert all(not t['consistent_constant_pullup'] for t in trials if 'fahrenheit' in t['hypothesis'])
    report=dict(schema_version=2,profile=DEFINITION,
        hypothesis_trials=trials,offset_identifiability=offset_sweep(image,clt,iat),fits=fits,
        firmware_sha256=hashlib.sha256(image).hexdigest(),
        generator_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
        assumptions='Ideal 10-bit ratiometric ADC; ADC bin width 1/1024; NTC to ground; constant pullup; published sensor resistance intervals. Output tolerance covers one code plus the next input group (one ADC count for coolant, four for IAT because two input bits are discarded). This is a consistency test, not uniqueness proof or a component measurement.',
        sources=[dict(title='Yamaha XT660R/X 2004 service manual',pdf_pages=[44,347,430],
                      sections=['2-18 electrical specifications','7-4 fail-safe actions','8-48 coolant sensor'],
                      url='https://scootertuub.nl/motoren/Yamaha/Yamaha%20XT%20660%20R%20X%202004%20Service%20Manual%20%20.pdf'),
                 dict(title='Yamaha TDM900 service manual',pdf_pages=[367,447],
                      sections=['7-4 fail-safe actions','8-47 coolant sensor'],
                      url='https://biker.ee/manuals/yamaha/Yamaha-TDM900-2002-2007_Workshop_Service_Repair_Manual.pdf')],
        fallback_values=dict(coolant_raw=image[0x4e64],coolant_candidate_celsius=celsius(image[0x4e64]),
                             intake_raw=image[0x4e65],intake_candidate_celsius=celsius(image[0x4e65])),
        fan_normal_hysteresis=dict(lower_address='0x4BFE',upper_address='0x4BFF',
            clear_if_raw_less_than=image[0x4bfe],set_if_raw_greater_than=image[0x4bff],
            last_clear_code_celsius=celsius(image[0x4bfe]-1),first_set_code_celsius=celsius(image[0x4bff]+1),
            condition='Uses this profile only. Fault, override and diagnostic paths can independently operate the fan.'),
        all_adc_values=[dict(adc10=a,coolant_code=sensor_code(image,a,True),
                            coolant_candidate_celsius=celsius(sensor_code(image,a,True)),
                            intake_code=sensor_code(image,a,False),
                            intake_candidate_celsius=celsius(sensor_code(image,a,False))) for a in range(1024)])
    (ROOT/'analysis/semantics/temperature_profile.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    print(json.dumps([dict(hypothesis=t['hypothesis'],sensor=t['sensor'],consistent=t['consistent_constant_pullup'],reason=t['reason']) for t in trials],indent=2))
    return report

if __name__=='__main__':build()
