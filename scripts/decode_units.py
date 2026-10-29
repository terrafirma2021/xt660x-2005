"""Read-only conversion catalogue. Conditional profiles are never tuning authorization.

Integer helpers mirror isolated firmware arithmetic; engineering formulas explicitly
name the hardware/reference assumptions needed to interpret those integers.
"""
import hashlib
import json
import csv
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def scale_q8(value, factor):
    return min(65535, value * factor // 256)


def normalization(code, gain, reference):
    denominator = ((code + 128) * (2 * gain) + 128) // 256
    if not code or not gain or not reference or not denominator:
        return 256
    # C407 produces integer and Q16 fraction, then caller rounds to Q8.
    quotient_q16 = ((reference + 128) << 16) // denominator
    return min(65535, (quotient_q16 + 128) // 256)


def spark_ticks(code, period_three_pitches, correction, fixed_offset=150):
    return max(0, min(65535, code * period_three_pitches // 256 + correction) - fixed_offset)


def pressure_payload(adc_left):
    delta = max(0, adc_left - 7872)
    return min(254, delta * 256 // 49792)


def supply_payload(adc_high):
    return min(254, adc_high * 256 // 240)


def ticks_ms(ticks, timer_hz):
    if timer_hz <= 0:
        raise ValueError('timer_hz must be positive')
    return ticks * 1000 / timer_hz


def speed_rpm(code, timer_hz, period_degrees):
    """Ideal scale; firmware first truncates its reciprocal and can saturate/stale."""
    if timer_hz <= 0 or not 0 < period_degrees <= 720:
        raise ValueError('Explicit positive clock and valid angular span required')
    return code * timer_hz * period_degrees / 460800000


def period_rpm(period, timer_hz, period_degrees):
    if period <= 0 or timer_hz <= 0 or not 0 < period_degrees <= 720:
        raise ValueError('Positive period, clock and valid angular span required')
    return timer_hz * period_degrees / (6 * period)


def build():
    image = (ROOT/'firmware/XT660X 2005.bin').read_bytes()
    maps = json.loads((ROOT/'analysis/maps.json').read_text())
    profiles = {
        'nominal_xt_timer': dict(timer_hz=500000, bus_hz=16000000, tick_microseconds=2,
            status='service-correlated nominal; not measured on this ECU',
            basis='TSCR2=5 gives bus/32. Fan diagnostic repeats every 250 tasks; each task is 4*2500 timer ticks. Yamaha specifies a 5-second fan cycle with 2 seconds on, 3 off.',
            evidence=['0x5057','0x5059','0x679C','0x67C4','0x54B5','0xAC7F','0xBB45']),
        'nominal_xt_crank': dict(normalized_pitches_per_revolution=12, pitch_degrees=30,
            speed_period_degrees=180, spark_scale_period_degrees=90,
            status='conditional: 11 capture intervals including one double interval interpreted as one crank revolution',
            basis='Counter wraps at 11; gap interval is halved; A44 sums six normalized pitches; A36 contains three. Rotor-to-crank and TDC phase require independent confirmation.',
            evidence=['0xD871','0xDBAA','0x53F4','0x73F7']),
    }
    conversions = {
        'timer_ms': dict(unit='ms', formula='raw*1000/timer_hz', nominal_formula='raw*0.002',
            requires=['nominal_xt_timer'], meaning='timer duration before downstream corrections'),
        'dwell_ms': dict(unit='ms', formula='raw*32*1000/timer_hz', nominal_formula='raw*0.064',
            requires=['nominal_xt_timer'], meaning='base dwell contribution; additional dwell and speed clamps still apply'),
        'injector_compensation_ms': dict(unit='ms', formula='raw*8*1000/timer_hz', nominal_formula='raw*0.016',
            requires=['nominal_xt_timer'], meaning='additive injector-duration compensation after lookup rounding'),
        'speed_rpm': dict(unit='rpm', formula='raw*timer_hz*period_degrees/460800000', nominal_formula='raw*100/512',
            requires=['nominal_xt_timer','nominal_xt_crank'], meaning='ideal speed-coordinate scale; reciprocal truncation, saturation and stale-state handling are separate'),
        'spark_relative_degrees': dict(unit='relative crank degrees', formula='raw*three_pitch_degrees/256', nominal_formula='raw*90/256',
            requires=['nominal_xt_crank'], meaning='relative scheduler angle, NOT absolute degrees BTDC; fixed and variable timer corrections follow'),
        'q8_gain_percent': dict(unit='%', formula='raw*100/256', requires=[],
            meaning='dimensionless multiplier of the stated contribution, not necessarily total fuel'),
        'fuel_iat_gain_percent': dict(unit='%', formula='(raw+384)*100/512', requires=[],
            meaning='IAT factor in the normal fuel chain; integer rounding occurs in the actual multi-stage calculation'),
        'transient_iat_gain_percent': dict(unit='%', formula='(raw+384)*100/256', requires=[],
            meaning='factor in transient contribution; not the same scaling as normal IAT correction'),
        'normalization_gain_percent': dict(unit='%', formula='raw*100/128', requires=[],
            meaning='multiplicative factor in the denominator, not a direct fuel multiplier'),
    }
    cell_ids = {
        **{f'main_quantity_{x}':'timer_ms' for x in 'ABC'},
        **{f'main_u8_{x}':'spark_relative_degrees' for x in 'ABC'},
        'dwell_supply_speed':'dwell_ms', 'curve_4234':'injector_compensation_ms',
        'timing_speed_4f64':'timer_ms', 'timing_speed_4f81':'timer_ms',
        'curve_3220':'fuel_iat_gain_percent', 'curve_351d':'transient_iat_gain_percent',
        'curve_3345':'q8_gain_percent', 'curve_3357':'q8_gain_percent',
        'fuel_normalization_gain':'normalization_gain_percent',
    }
    nominal = {
        'timer_ms': lambda x:x*.002, 'dwell_ms':lambda x:x*.064,
        'injector_compensation_ms':lambda x:x*.016,
        'spark_relative_degrees':lambda x:x*90/256,
        'q8_gain_percent':lambda x:x*100/256,
        'fuel_iat_gain_percent':lambda x:(x+384)*100/512,
        'transient_iat_gain_percent':lambda x:(x+384)*100/256,
        'normalization_gain_percent':lambda x:x*100/128,
    }
    records=[]
    for m in maps:
        key=cell_ids.get(m['id'])
        rec=dict(id=m['id'], data_address=m['data_address'],
            cell_conversion=key, ready_for_tuning_export=False,
            status='conditional physical conversion' if key and conversions[key]['requires'] else
                   'dimensionless contribution decoded' if key else 'unresolved cell conversion',
            axis_conversions=[])
        if key:
            rec['converted_cell_values']=[[nominal[key](v) for v in row] for row in m['raw_values']]
            rec['requires']=conversions[key]['requires']
        for axis_name in ['row_axis','column_axis']:
            if axis_name not in m:continue
            axis=m[axis_name]
            sources=' '.join([axis.get('input','')]+[c.get('input','') for c in axis.get('calls',[])])
            # Stored axes expose disassembler spelling without leading zeros.
            is_speed=any(s in sources.lower() for s in ['0x900','0x902','0x8f8','0x0900','0x0902','0x08f8'])
            high_byte=axis.get('element_bytes')==1
            if is_speed:
                factor=256 if high_byte else 1
                rec['axis_conversions'].append(dict(axis=axis_name,conversion='speed_rpm',
                    raw_pre_scale=factor, values=[speed_rpm(v*factor,500000,180) for v in axis['raw_values']],
                    requires=['nominal_xt_timer','nominal_xt_crank']))
        if m['id'] in ['fuel_normalization_load','fuel_normalization_throttle']:
            rec['decoded_context']='Combined code is clamp(selected_cell+CD4-128,0,255); used through (code+128), not a proven AFR encoding.'
        if m['id']=='curve_3220':
            rec['decoded_context']='Converted percentage applies to the normal-running consumer at 0x828C/0x82A6. Startup consumer at 0x7BF1 has different stage scaling.'
        if m['kind']=='2D_step_grid':
            rec['decoded_context']='Eligibility: zero inhibits the documented path; nonzero permits its next tests. Not a continuous physical quantity.'
        if m['id']=='modulo24_surface':
            rec['decoded_context']='Cyclic event code with modulo-24 interpolation; no proven degree or millisecond unit.'
        records.append(rec)
    assert set(cell_ids)<= {m['id'] for m in maps},set(cell_ids)-{m['id'] for m in maps}
    report=dict(schema_version=1,firmware_sha256=hashlib.sha256(image).hexdigest(),
        policy='Read-only research conversions. Assumptions travel with values; no XDF export is enabled.',
        profiles=profiles,conversions=conversions,maps=records,
        unresolved_sensor_hypotheses={
            'temperature':dict(candidate_celsius='raw*0.625-30', status='conflicted; not assigned to map axes',
                support='Fits IAT fault replacement 80 to 20 C; stock thermistor curves and manual resistance points admit approximately 2.7 kohm IAT and 1.8 kohm coolant pullups.',
                conflict='Coolant fallback 144 would be 60 C; XT660 service manual specifies 80 C. Diagnostic payload is floor(raw*160/256), capped at 149, and does not establish the display offset.'),
            'supply':dict(candidate_volts='raw*5/64',status='hypothesis; not assigned to map axes',
                support='Would make fault replacement 154 approximately 12 V and dwell-axis knots approximately 6.5 to 16.5 V.',
                conflict='Analog divider and dashboard decode are absent; diagnostic payload floor(raw*256/240) is not proven to be decivolts.'),
            'pressure':dict(candidate_kpa='(adc_left-7872)/389',status='service-correlated hypothesis; not assigned to load axes',
                support='Assuming diagnostic payload units of 0.5 kPa agrees with approximately 3.6 V at atmospheric pressure on a 5 V ADC.',
                conflict='Dashboard scale and reference voltage unverified. C90 is a processed load coordinate, not direct manifold pressure.'),
            'throttle':dict(candidate_degrees_from_learned_closed='raw/512',status='service-correlated hypothesis; not assigned to map axes',
                support='ADC ten-bit count minus learned baseline is shifted left 6. Diagnostic angle ranges suggest ADC counts/8 degrees.',
                conflict='Dashboard conversion and mechanical sensor geometry unverified. Relative closed angle is not percent throttle.')})
    out=ROOT/'analysis/semantics/physical_units.json'
    out.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    ranges=[(0x5057,0x505c),(0x53f4,0x5415),(0x54b0,0x54cf),(0x54f0,0x5518),
            (0x611e,0x6124),(0x679c,0x67cf),(0x6aa5,0x6ac5),(0x6c5e,0x6c73),
            (0x73f7,0x7421),(0x7b0f,0x7b3e),(0x7e60,0x7fd8),(0x828c,0x82bd),
            (0x8ae6,0x8b23),(0x9232,0x9241),(0xac7f,0xacb0),
            (0xb97f,0xba8d),(0xbb45,0xbba1),(0xc21c,0xc255),
            (0xc407,0xc422),(0xdbaa,0xdbb7),(0xf519,0xf607)]
    rows=list(csv.DictReader((ROOT/'analysis/disassembly.tsv').open(encoding='utf-8'),delimiter='\t'))
    lines=['# Byte-backed variant/unit evidence; addresses equal original file offsets.']
    for lo,hi in ranges:
        lines.append(f'\n# 0x{lo:04X} through 0x{hi:04X} (exclusive)')
        for row in rows:
            if lo<=int(row['address'],16)<hi:
                lines.append(f"{row['address']}  {row['bytes']}  {row['instruction']}")
    (out.parent/'variant_units_evidence.txt').write_text('\n'.join(lines)+'\n',encoding='utf-8',newline='\n')
    summary=dict(maps=len(records),cell_conversions=sum(r['cell_conversion'] is not None for r in records),
                 maps_with_speed_axes=sum(bool(r['axis_conversions']) for r in records))
    print(json.dumps(summary))
    return report


if __name__=='__main__':
    build()
