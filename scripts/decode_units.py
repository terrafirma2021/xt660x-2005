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
    additions={
        'gain128_percent':('percent of reference multiplier','raw*100/128',[],lambda x:x*100/128,
            '128 represents unity in the normalized consumer equation; exact integer stages and saturation are in map_models.py.'),
        'startup_base_ms':('ms','raw*256*1000/timer_hz',['nominal_xt_timer'],lambda x:x*.512,
            'Startup base with neutral reference multipliers. Interpolation retains Q8; speed, throttle, IAT and pressure factors follow.'),
        'post_start_enrichment_pp':('normalized fuel percentage points','raw*100/32',[],lambda x:x*100/32,
            'Contribution of the selected post-start state high byte before remaining gains. States decay and their maximum is selected; they are not added.'),
        'coolant_enrichment_pp':('normalized fuel percentage points','raw*100/128',[],lambda x:x*100/128,
            'Additive coolant contribution to the normalized pre-gain, before IAT, pressure, transient and other multipliers. Zero contribution at cell zero.'),
        'adaptive_step_pp':('normalized fuel percentage points per transition step','raw*100/256',[],lambda x:x*100/256,
            'Magnitude of a transition-triggered adjustment to centered RAM 0x097E. Not a bound or percentage applied on every scheduler tick.'),
        'transient_delta_slope_pp':('normalized fuel percentage points per raw delta count','raw*100/2048',[],lambda x:x*100/2048,
            'Slope before the sign-dependent coolant factor and downstream gains. Delta source is an internal code, not degrees/second or kPa/second.'),
        'load_offset_codes':('pressure-coordinate counts','64*(raw-128)',[],lambda x:64*(x-128),
            'Additive offset into CB4 relative to CB2, saturated to a word. It is not a pressure multiplier or measured kPa.'),
        'normalization_offset_codes':('normalization-code counts','raw-128',[],lambda x:x-128,
            'Latched into CD4 under eligibility gates, added to the selected normalization code before its inverse-ratio calculation.'),
        'feedback_delay_s':('s','raw*500000/timer_hz',['nominal_xt_timer'],lambda x:float(x),
            'Threshold in a saturating counter incremented by the 200-base-tick task; reset in startup state. Nominal one second per count.'),
        'feedback_delay_100ms_s':('s','raw*50000/timer_hz',['nominal_xt_timer'],lambda x:x/10,
            'Threshold in a saturating counter incremented by the 20-base-tick task; reset in startup state. Nominal 0.1 second per count.'),
        'normalization_hold_s':('s','raw*5000/timer_hz',['nominal_xt_timer'],lambda x:x/100,
            'Latched threshold for qualifying 2-base-tick task iterations before correction recovery. Conditional count, not an unconditional wall-clock timer.'),
        'relative_tps_counts':('10-bit ADC counts above learned closed position','raw',[],lambda x:x,
            'Threshold compared with min(255,filtered relative TPS count). Electrical/mechanical angle remains unconfirmed.'),
        'eligibility':('eligible','raw != 0',[],lambda x:bool(x),
            'Zero inhibits this gate; any nonzero byte passes this gate. Other conditions can still inhibit the function.'),
        'injection_event_code':('injection event-phase code','raw',[],lambda x:x,
            'Target used by injection scheduling, cyclic modulo 24 around D7E reference. After lookup 11 becomes 10 and >=23 becomes 22. Not absolute degrees BTDC or a duration.'),
    }
    for key,(unit,formula,requirements,fn,meaning) in additions.items():
        conversions[key]=dict(unit=unit,formula=formula,requires=requirements,meaning=meaning)
        nominal[key]=fn
    assignments={
        'gain128_percent':['correction_surface_A','correction_surface_C','curve_19a8','curve_19ba',
                           'curve_19c6','curve_323c','curve_32e0','curve_353a','curve_34ee','curve_1854'],
        'spark_relative_degrees':['correction_surface_D','curve_4bac'],
        'startup_base_ms':['curve_1996'],
        'post_start_enrichment_pp':['curve_32ef','curve_3301'],
        'coolant_enrichment_pp':['curve_3315','curve_3327'],
        'adaptive_step_pp':['curve_36a4','curve_36b2'],
        'q8_gain_percent':['curve_34b0'],
        'load_offset_codes':['curve_1880'],
        'normalization_offset_codes':['correction_surface_B'],
        'feedback_delay_s':['curve_18b6'],
        'feedback_delay_100ms_s':['curve_36c4'],
        'normalization_hold_s':['curve_31ec','curve_3200'],
        'relative_tps_counts':['curve_3494','curve_4a33'],
        'eligibility':['step_grid_4c44','step_grid_4d48','step_grid_35b0','step_grid_363c'],
        'transient_delta_slope_pp':[f'delta_{a}_gain_{i}' for a in ['0985','0989'] for i in range(1,7)],
        'injection_event_code':['modulo24_surface'],
    }
    for key,names in assignments.items():
        for name in names:cell_ids[name]=key
    contexts={
        'correction_surface_A':('rounded_q8(quantity,2*cell); secondary injector channel gain', [0x84fa,0x7c42,0x94e8]),
        'correction_surface_C':('970=min(255,floor(cell*curve_323c/128)); factors couple and saturate before the fuel multiplication', [0xb3cc,0x82d6]),
        'curve_323c':('970=min(255,floor(correction_surface_C*cell/128)); neither input is an independent final fuel percentage', [0xb3cf,0x82d6]),
        'correction_surface_D':('Used instead of A83 when 0885 bit 0x20 selects alternate spark mode; floor(max(selected_base,D05_if_required)*A86/128), then other trims and clamps', [0x8979,0x899e]),
        'curve_4bac':('Minimum base code in the normal spark path; conditional minimum in the alternate path; scaled by A86/128 and later corrected', [0x89a9,0x8a2f]),
        'curve_1854':('C90=clamp(7863 + signed_round((C8E-7863)*cell/128),0,65535); source table is copied into RAM', [0x9609,0x965e]),
        'curve_34b0':('95C/95D=clamp(128+signed_round((input-128)*cell/256),0,255); centered result later contributes 4*(result-128) timer ticks', [0x8623,0x8323]),
        'curve_3494':('A05 compared against min(255,08E6), a filtered relative TPS count; not a throttle-rate threshold', [0x8c99,0x8f82,0x8faa]),
        'curve_4a33':('A89 compared against min(255,08E6), a filtered relative TPS count; coolant selects the threshold, not a spark-angle correction', [0x8c99,0x8f82,0x96ba]),
        'modulo24_surface':('C521 interpolates after rotating codes around D7E; A1B feeds EC98, A1E and latched A1C. Dispatcher F4F2 schedules injection when C04 or 0923 equals A1C. Mode gates and optional slew limiting remain relevant.', [0xc521,0x7b92,0xec98,0x85ab,0xf4f2]),
    }
    joint_transient=['curve_34d0','curve_34da','curve_34e4','curve_355d','curve_3567','curve_3571','curve_34fd']
    records=[]
    for m in maps:
        key=cell_ids.get(m['id'])
        rec=dict(id=m['id'], data_address=m['data_address'],
            cell_conversion=key, ready_for_tuning_export=False,
            status='conditional physical conversion' if key and conversions[key]['requires'] else
                   'logical behavior decoded' if key=='eligibility' else
                   'numeric contribution decoded' if key else 'unresolved cell conversion',
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
        if m['kind']=='1D_uniform_axis' and '0x0900' in ' '.join(m['inputs']):
            knots=[m['input_min_raw']+k*m['index_divisor']/m['index_factor_raw'] for k in range(m['columns'])]
            rec['axis_conversions'].append(dict(axis='uniform_input',conversion='speed_rpm',raw_pre_scale=1,
                raw_ideal_knots=knots,values=[speed_rpm(v,500000,180) for v in knots],
                raw_clamped_range=[m['input_min_raw'],m['input_min_raw']+m['input_span_raw']],
                caveat='Ideal knot positions derived from the uniform header; final endpoint may lie beyond the clamped input span.',
                requires=['nominal_xt_timer','nominal_xt_crank']))
        if m['id'] in ['fuel_normalization_load','fuel_normalization_throttle']:
            rec['decoded_context']='Combined code is clamp(selected_cell+CD4-128,0,255); used through (code+128), not a proven AFR encoding.'
        if m['id']=='curve_3220':
            rec['decoded_context']='Converted percentage applies to the normal-running consumer at 0x828C/0x82A6. Startup consumer at 0x7BF1 has different stage scaling.'
        if m['kind']=='2D_step_grid':
            rec['decoded_context']='Eligibility: zero inhibits the documented path; nonzero permits its next tests. Not a continuous physical quantity.'
        if m['id']=='modulo24_surface':
            rec['decoded_context']='Cyclic event code with modulo-24 interpolation; no proven degree or millisecond unit.'
        if m['id'] in contexts:
            rec['decoded_context'],evidence=contexts[m['id']]
            rec['consumer_evidence']=[f'0x{a:04X}' for a in evidence]
        if m['id'] in ['correction_surface_B','curve_31ec','curve_3200']:
            rec['stock_activation']='Normal state path is disabled: ROM 0x3130 is 0xFF; 0x8DF9 requires exactly 0x80. The disabled path resets CD4 to 128. Lookup presence alone does not establish an active effect.'
        if m['id']=='correction_surface_A':
            rec['stock_activation']='Used in secondary-quantity arithmetic; variant 9 skips the normal secondary injector scheduling entry. Diagnostic paths are separate.'
        if m['id'] in ['step_grid_35b0','step_grid_363c']:
            rec['stock_activation']='Every stock cell is zero, rejecting this normal feedback-eligibility gate.'
        if m['id'] in joint_transient:
            rec['status']='joint arithmetic decoded; standalone physical cell unit not assigned'
            rec['decoded_context']='Selected response R (34D0/34DA/34E4 or 355D/3567/3571) and coolant C (34FD) participate in extra_transient_ticks(P,C,I,R,T). See map_models.py and MAP_CONSUMERS.md; assigning milliseconds to R or C alone would depend on the other factors.'
            rec['consumer_evidence']=['0x9220','0x9232','0x9274','0x9495','0x94BA']
        records.append(rec)
    assert set(cell_ids)<= {m['id'] for m in maps},set(cell_ids)-{m['id'] for m in maps}
    report=dict(schema_version=2,firmware_sha256=hashlib.sha256(image).hexdigest(),
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
    ranges=[(0x5057,0x505c),(0x53f4,0x5415),(0x54b0,0x54cf),(0x54f0,0x5518),
            (0x611e,0x6124),(0x679c,0x67cf),(0x6aa5,0x6ac5),(0x6c5e,0x6c73),
            (0x73f7,0x7421),(0x7b0f,0x7b3e),(0x7e60,0x7fd8),(0x828c,0x82bd),
            (0x8ae6,0x8b23),(0x9232,0x9241),(0xac7f,0xacb0),
            (0xb97f,0xba8d),(0xbb45,0xbba1),(0xc21c,0xc255),
            (0xc407,0xc422),(0xdbaa,0xdbb7),(0xf519,0xf607)]
    ranges += [(0x7a87,0x7b56),(0x7bea,0x7c72),(0x7fd8,0x800c),(0x8220,0x82f0),
               (0x8323,0x8578),(0x8623,0x864e),(0x8979,0x89f9),(0x8c66,0x8cbe),
               (0x8e29,0x8e47),(0x8e47,0x8ea2),(0x8f82,0x8fbc),(0x9220,0x929e),
               (0x9495,0x94e5),(0x9609,0x9661),(0x96ba,0x96e3),(0xa6b3,0xa73d),
               (0xa8a1,0xa8e0),(0xb284,0xb2a4),(0xb3cc,0xb3db),(0xbc5f,0xbc74),(0xc10c,0xc122)]
    ranges += [(0x7b92,0x7ba3),(0xc4dc,0xc55b),(0xec98,0xed29),(0xf4e0,0xf519),(0x8df9,0x8e29)]
    rows=list(csv.DictReader((ROOT/'analysis/disassembly.tsv').open(encoding='utf-8'),delimiter='\t'))
    lines=['# Byte-backed variant/unit evidence; addresses equal original file offsets.']
    for lo,hi in ranges:
        lines.append(f'\n# 0x{lo:04X} through 0x{hi:04X} (exclusive)')
        for row in rows:
            if lo<=int(row['address'],16)<hi:
                lines.append(f"{row['address']}  {row['bytes']}  {row['instruction']}")
    (out.parent/'variant_units_evidence.txt').write_text('\n'.join(lines)+'\n',encoding='utf-8',newline='\n')
    summary=dict(maps=len(records),cell_conversions=sum(r['cell_conversion'] is not None for r in records),
                 maps_with_speed_axes=sum(bool(r['axis_conversions']) for r in records),
                 joint_arithmetic_maps=len(joint_transient),
                 unresolved_cell_maps=[r['id'] for r in records if r['status']=='unresolved cell conversion'])
    report['summary']=summary
    out.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    lines=['# Per-map resolution status','',
           'Generated by scripts/decode_units.py. Numeric/code conversions, logical gates, joint arithmetic and conditional physical units are different kinds of progress. A populated conversion does not make an editable tuning definition. See [consumer derivations](MAP_CONSUMERS.md).','',
           '| Map | Cell interpretation | Status |','|---|---|---|']
    for record in records:
        key=record['cell_conversion']
        meaning=(conversions[key]['formula']+' '+conversions[key]['unit']) if key else record.get('decoded_context','Unresolved physical cell scale')
        lines.append(f"| [{record['id']}](../map_details/{record['id']}.md) | {meaning.replace('|','/')} | {record['status']} |")
    (out.parent/'MAP_RESOLUTION.md').write_text('\n'.join(lines)+'\n',encoding='utf-8',newline='\n')
    marker='<!-- generated-unit-decoding -->'
    for record in records:
        dossier=ROOT/'analysis/map_details'/f"{record['id']}.md"
        body=dossier.read_text(encoding='utf-8').split(marker)[0].rstrip()
        extra=[marker,'## Recovered consumer and unit interpretation','',record['status']+'.','']
        key=record['cell_conversion']
        if key:
            definition=conversions[key]
            extra += [f"Conversion: `{definition['formula']}`; unit: **{definition['unit']}**.",'',definition['meaning'],'']
            if definition['requires']:
                extra += ['Required profiles: '+', '.join('`'+x+'`' for x in definition['requires'])+'. These are assumptions, not measured hardware parameters.','']
        if record.get('decoded_context'):extra += [record['decoded_context'],'']
        if record.get('stock_activation'):extra += ['Stock activation: '+record['stock_activation'],'']
        if record.get('consumer_evidence'):extra += ['Consumer instruction addresses: '+', '.join('`'+x+'`' for x in record['consumer_evidence'])+'.','']
        extra += ['See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.','']
        dossier.write_text(body+'\n\n'+'\n'.join(extra),encoding='utf-8',newline='\n')
    print(json.dumps(summary))
    return report


if __name__=='__main__':
    build()
