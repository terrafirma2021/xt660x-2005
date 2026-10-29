"""Manually traced lookup families and per-map dataflow, consumed by catalog_maps.

Addresses and layouts are evidence; physical units remain separate hypotheses.
No firmware patching or automatic tuning-definition export is performed.
"""
import json


def extend(maps, axes, image):
    def hx(a): return f'0x{a:04X}'
    def implied(values, source, formula):
        return dict(kind='computed_axis', raw_values=values, count=len(values),
                    input=source, index_formula=formula)
    def stored(a, count, source):
        vals=[int.from_bytes(image[p:p+2], 'big') for p in range(a,a+count*2,2)]
        item=dict(address=hx(a), count=count, element_bytes=2, byte_order='big',
                  raw_values=vals, ascending=all(x<=y for x,y in zip(vals, vals[1:])),
                  input=source, kind='step_thresholds', calls=[],
                  equality='lower bin; bin = number of thresholds strictly below input',
                  following_word=dict(address=hx(a+count*2), raw=int.from_bytes(image[a+count*2:a+count*2+2],'big'),
                                      status='present but not compared by this lookup'))
        axes[a]=item
        return item
    def add(name, start, nr, nc, kind, inputs, output, role, evidence,
            base=None, row=None, col=None, **extra):
        end=start+nr*nc
        m=dict(id=name, kind=kind, confidence='instruction-traced layout and raw dataflow; engineering units unresolved',
               data_address=hx(start), end_exclusive=hx(end), rows=nr, columns=nc,
               element_bytes=1, byte_order='big', units='raw ECU values',
               raw_values=[list(image[a:a+nc]) for a in range(start,end,nc)],
               calls=[], inputs=inputs, output=output, physical_role=role,
               evidence_addresses=[hx(a) for a in evidence], engineering_decode=None,
               ready_for_tuning_export=False, **extra)
        if base is not None:m['pointer_base']=hx(base)
        if row is not None:m['row_axis']=row
        if col is not None:m['column_axis']=col
        maps.append(m)
        return m

    speed_knots=[4096+k*1024 for k in range(11)]+[16384,18432]+[18432+k*4096 for k in range(1,11)]
    speed_axis=implied(speed_knots, 'u16 RAM 0x0900: selected speed code',
        'u=clamp(input-4096,0,55296); q8=u//4 if u<10240 else u//8+1280 if u<14336 else u//16+2176')
    for group, bases, pcs, flag, selectors, dest, call in [
        ('delta_0985', [0x3368,0x337f,0x3396,0x33ad,0x33c4,0x33db], [0x7a49,0x7a56,0x7a5b,0x7a69,0x7a76,0x7a7b],0x985,[0x3369,0x336a],0x98d,0x7a81),
        ('delta_0989', [0x33f4,0x340b,0x3422,0x3439,0x3450,0x3467], [0x78d6,0x78e3,0x78e8,0x78f6,0x7903,0x7908],0x989,[0x33f5,0x33f6],0x98e,0x790e)]:
        for i,(base,pc) in enumerate(zip(bases,pcs)):
            sign='set' if i<3 else 'clear'
            selector=selectors[i//3]
            choice=['variant 0x0D87 == 9 and RAM 0x0896 bit 0x10 clear',
                    f'otherwise RAM 0x0898 <= ROM {hx(selector)}',
                    f'otherwise RAM 0x0898 > ROM {hx(selector)}'][i%3]
            add(f'{group}_gain_{i+1}',base+3,1,23,'1D_precomputed_axis',
                ['u16 RAM 0x0900: selected speed code'],f'u8 RAM {hx(dest)}',
                ('Gain applied to signed throttle-coordinate delta' if group=='delta_0985' else
                 'Gain applied to signed load-processing-coordinate delta')+'; calibrated physical rate remains unresolved',
                [pc,call,0xcc7b],base=base,col=speed_axis,
                interpolation='0xC1DB linear Q8; caller takes high byte (floor)',
                selection=f'RAM {hx(flag)} bit 7 {sign}; {choice}')

    for pc,start,ca,ra,nr,src,out,bins in [
        (0xa363,0x4c44,0x4c08,0x4c1c,20,0x8e8,0xacd,0xad0),
        (0xa3b4,0x4d48,0x4d0c,0x4d20,20,0xc90,0xace,0xad2),
        (0xabdd,0x35b0,0x3588,0x359c,10,0x8e8,0x9ae,0x9b0),
        (0xac2e,0x363c,0x3614,0x3628,10,0xc90,0x9af,0x9b2)]:
        add(f'step_grid_{start:04x}',start,nr,10,'2D_step_grid',
            ['u16 RAM 0x0900: selected speed code', f'u16 RAM {hx(src)}'],
            f'u8 RAM {hx(out)}; column/row bins at {hx(bins)}/{hx(bins+1)}',
            ('Air-induction solenoid eligibility grid; zero inhibits this eligibility path' if nr==20 else
             'Adaptive feedback eligibility grid; zero clears feedback-enable path'),
            [pc],row=stored(ra,nr-1,'u16 RAM 0x0900'),col=stored(ca,9,f'u16 RAM {hx(src)}'),
            interpolation='none; strict > threshold selects upper bin; equality stays in lower bin')

    timing_axis=implied(list(range(4096,61441,2048)), 'u16 RAM 0x08F8 via RAM 0x0918',
                        'q8=clamp(input-4096,0,57344)//8 (0xCC63)')
    for base in [0x4f61,0x4f7e]:
        add(f'timing_speed_{base+3:04x}',base+3,1,29,'1D_precomputed_axis',
            ['u16 RAM 0x08F8: instantaneous speed code'], 'u8 RAM 0x0A8B',
            'Speed-indexed additive time correction in the spark planner; timer ticks, not absolute spark degrees',
            [0x88d1,0x88ee],base=base,col=timing_axis,
            selection='RAM 0x0D87 '+('!= 9' if base==0x4f61 else '== 9'),
            interpolation='0xC28D with one row; linear Q8 rounded to nearest byte')
    add('dwell_supply_speed',0x4b12,15,9,'2D_special_grid',
        ['u16 RAM 0x0900: selected speed code','u8 RAM 0x08D9: supply code'],
        'u16 RAM 0x0A98 = rounded cell * 32; added to RAM 0x0A9C * 32, limited into 0x0A96',
        'Coil charge-duration contribution combined with other dwell terms; physical timer scale remains conditional',
        [0x8ad4,0x8adb,0x8ae6,0x8b20],base=0x4b0f,
        row=implied(list(range(4096,61441,4096)),'u16 RAM 0x0900','q8=clamp(input-4096,0,57344)//16'),
        col=implied(list(range(83,212,16)),'u8 RAM 0x08D9','input<26 substitutes 179; q8=clamp(input-83,0,128)*16'),
        interpolation='0xC28D: round column interpolation to bytes, then round row interpolation',
        selection='RAM 0x088D bit 0x40 overrides lookup result with ROM 0x4BAB')
    for name,base,count,src,dest,formula,knots,ev in [
        ('coolant_sensor_conversion',0x4f44,29,'10-bit ADC channel 6','RAM 0x08F6 measured / 0x08F4 effective',
         'q8=clamp((adc10*64-3840)//8,0,7168)',[60+32*k for k in range(29)],[0x70a3]),
        ('intake_temperature_conversion',0x4f23,33,'10-bit ADC channel 3','RAM 0x08F5',
         'q8=(adc10//4)*32',[32*k for k in range(33)],[0x6fc2])]:
        add(name,base+3,1,count,'1D_sensor_conversion',[src],dest,
            'Sensor conversion to internal temperature code; candidate Celsius scale remains conditional',ev+[0x711b,0x7136,0x7145,0x714f,0x7157] if name.startswith('coolant') else ev+[0x702a,0x7040,0x7049,0x7060],
            base=base,col=implied(knots,src,formula),
            interpolation=('linear Q8, high byte (floor); coolant input clamps below ADC 60 and at/above ADC 956' if name.startswith('coolant') else 'linear Q8, high byte (floor); discards two ADC low bits; last stored knot at 1024 is an interpolation endpoint beyond ADC maximum 1023'),
            selection=('Measured conversion is computed at 0x7115-0x7136 on each handler call. Effective 08F4 takes fallback ROM 4E64 (144) only when 08A0 bit 0x04 is clear and 08B0 bit 0x80 is set; otherwise it takes measured 08F6. This handler does not select a temperature table by D87' if name.startswith('coolant') else 'Lookup runs when 08A0 bit 0x04 is set or 08B0 bit 0x40 is clear; otherwise 08F5 takes ROM 4E65 (80). This handler does not select a temperature table by D87'))

    copied=add('curve_1854',0x185a,1,21,'1D_uniform_axis',
        ['u16 RAM 0x08F2 pressure-derived estimate'],'u8 RAM 0x0C92',
        'Pressure/load-processing gain; ROM header and cells copied to RAM 0x0DBA before lookup',
        [0x6244,0x624c,0x95fd,0x9603],base=0x1854,
        input_min_raw=0x7200,input_span_raw=0x5000,index_factor_raw=0x40,index_divisor=65536,
        runtime_copy=dict(source='0x1854',destination='0x0DBA',bytes=27),
        interpolation='0xC1F2 uniform Q8, high byte (floor); RAM copy may be modified by other paths')
    copied['calls']=[dict(pointer_load='0x95FD',call='0x9603',helper='0xC1F2',function='FUN_8b34')]

    # Every previously extracted uniform curve gets an explicit input/output trace.
    # Output is immediate consumer, not an asserted engineering-unit conversion.
    traced={
      0x18b6:('u8 0x08F4 coolant','u8 0x0CAE compared with 1-second-task counter 0x0CAF','Coolant-dependent delay before feedback eligibility'),
      0x1854:('u16 0x08F2 pressure-derived estimate','u8 0x0C92; alternate unreferenced path writes 0x0C93','Pressure/load-processing gain copied to RAM 0x0DBA'),
      0x1996:('u8 0x08F4 coolant','u16 0x0934; initialization also writes high byte to 0x0A08','Startup fuel base quantity'),
      0x32ef:('u8 0x08F4 coolant','u16 Q8 state 0x0994; decays by twice ROM 0x3313 per fuel update','First post-start enrichment state; maximum of both states feeds normal fuel gain'),
      0x3301:('u8 0x08F4 coolant','u16 Q8 state 0x0996; decays by twice ROM 0x3314 per fuel update','Second post-start enrichment state; maximum of both states feeds normal fuel gain'),
      0x4234:('u8 0x08DA supply-derived','u16 0x095E = high byte * 8','Additive injection-pulse compensation; deadtime candidate'),
      0x19c6:('u16 0x08F2 pressure-derived estimate','u8 0x0938','Startup fuel multiplier'),
      0x19ba:('u16 0x08CE throttle-derived; zero on fault path','u8 0x0937','Startup fuel multiplier'),
      0x19a8:('u16 0x0900 selected speed','u8 0x0936','Startup fuel multiplier'),
      0x34b0:('u16 0x0900 selected speed','u8 0x09A0','Speed-dependent correction'),
      0x3494:('u16 0x0900 selected speed','u8 0x0A05 compared with 0x08EC','Filtered relative-throttle threshold in a qualification counter path'),
      0x353a:('u16 0x08F2 pressure-derived estimate','u8 0x0A0D','Transient correction'),
      0x351d:('u8 0x08F5 intake temperature','u8 0x0A10; subsequently widened and offset by 0x0180','Transient temperature multiplier'),
      0x34d0:('u8 0x08ED throttle-derived delta','u8 0x0A0C','Selected transient response curve'),
      0x34da:('u8 0x08ED throttle-derived delta','u8 0x0A0C','Selected transient response curve'),
      0x34e4:('u8 0x08ED throttle-derived delta','u8 0x0A0C','Selected transient response curve'),
      0x34ee:('u16 0x08CE throttle-derived','u8 0x0A0E','Transient throttle correction'),
      0x355d:('u8 0x08ED throttle-derived delta','u8 0x0D04','Selected transient response curve'),
      0x3567:('u8 0x08ED throttle-derived delta','u8 0x0D04','Selected transient response curve'),
      0x3571:('u8 0x08ED throttle-derived delta','u8 0x0D04','Selected transient response curve'),
      0x31ec:('u16 0x0900 selected speed','u8 0x09D9, latched into 0x09D7 and compared with 10-ms-task counter 0x09DD','Hold count before normalization correction returns toward neutral'),
      0x3200:('u16 0x0900 selected speed','u8 0x09D9, latched into 0x09D7 and compared with 10-ms-task counter 0x09DD','Alternate hold count before normalization correction returns toward neutral'),
      0x36c4:('u8 0x08F4 coolant','u8 0x09B4 compared with 100-ms-task counter 0x09B5','Delay before feedback eligibility'),
      0x36a4:('u16 0x0900 selected speed','u16 0x09A6 = high byte << 8; subtracted from 0x097E at a state transition','Adaptive correction decrement step; bounds are separate ROM words'),
      0x36b2:('u16 0x0900 selected speed','u16 0x09A8 = high byte << 8; added to 0x097E at a state transition','Adaptive correction increment step; bounds are separate ROM words'),
      0x3220:('u8 0x08F5 intake temperature','u8 0x0979','Fuel temperature multiplier; used with offset 0x0180'),
      0x3345:('u8 0x08F4 coolant','u8 0x098F','Coolant-dependent correction'),
      0x3357:('u8 0x08F4 coolant','u8 0x0990','Coolant-dependent correction'),
      0x1880:('u16 0x0900 selected speed','u8 0x0CB0; 0x0CB4 = clamp(0x0CB2 + 64*(cell-128),0,65535)','Centered additive pressure-processing offset; not a multiplier'),
      0x323c:('u16 0x08F2 pressure-derived estimate','u8 0x0971','Multiplier for correction_surface_C'),
      0x32e0:('u16 0x08F2 pressure-derived estimate','u8 0x0978','Pressure-dependent fuel correction'),
      0x4a33:('u8 0x08F4 coolant','u8 0x0A89 compared with 0x08EC','Filtered relative-throttle threshold enabling alternate spark mode; not a spark-angle correction'),
      0x3315:('u8 0x08F4 coolant','u8 0x097B contributes 8*cell to pre-gain 0x096C','Additive coolant enrichment contribution for first fuel-gain lane'),
      0x3327:('u8 0x08F4 coolant','u8 0x097C contributes 8*cell to pre-gain 0x096E','Additive coolant enrichment contribution for second fuel-gain lane'),
      0x34fd:('u8 0x08F4 coolant','u8 0x0A0F','Transient temperature correction'),
      0x4bac:('u16 0x08F2 pressure-derived estimate','u8 0x0D05','Timing bound consumed at 0x8A2F'),
    }
    grid_traces={
      'fuel_normalization_load':(['u16 0x0900 selected speed','u16 0x0C90 load code'],'u8 0x0CD2','Fuel normalization input; selected when ROM 0x3114 equals 0x80'),
      'fuel_normalization_throttle':(['u16 0x0900 selected speed','u16 0x08E8 throttle code'],'u8 0x0CD3','Fuel normalization input; selected when ROM 0x3114 does not equal 0x80'),
      'fuel_normalization_gain':(['u8 0x0CD0 combined normalization code','u16 0x0C90 load code'],'u8 0x0CD5','Dimensionless gain in the denominator of common fuel multiplier 0x0CE2'),
      'main_quantity_A':(['u16 0x0900 selected speed','u16 0x0C90 load code'],'0x0952 or 0x0954','Primary fuel quantity surface A; see semantics/FUEL.md'),
      'main_quantity_B':(['u16 0x0900 selected speed','u16 0x08E8 throttle code; fault substitution ROM 0x4E62'],'0x0956 or 0x0958','Fuel quantity surface B; see semantics/FUEL.md'),
      'main_quantity_C':(['u16 0x0900 selected speed','u16 0x0C90 load code'],'0x0952 or 0x0954','Primary fuel quantity surface C; see semantics/FUEL.md'),
      'modulo24_surface':(['u16 0x08E8 throttle code (row)','u16 0x0900 selected speed (column)'],'u8 0x0A1B; code 11 becomes 10 and codes >=23 become 22; transferred through 0x0A1E to 0x0A1C','Injection event-phase target; reference-rotated modulo-24 interpolation, not pulse duration or absolute BTDC'),
      'correction_surface_A':(['u16 0x0900 selected speed','u16 0x08E8 throttle code'],'u8 0x0CEC','Secondary injector quantity multiplier; cell 128 is unity'),
      'correction_surface_B':(['u16 0x0900 selected speed','u16 0x08E8 throttle code'],'u8 0x09D8, latched to 0x09D6 and selected into 0x0CD4','Centered correction to the common fuel normalization denominator; neutral 128'),
      'correction_surface_C':(['u16 0x0900 selected speed','u16 0x0C90 load code'],'u8 0x0972; multiplied by 0x0971, scaled and saturated into 0x0970','Fuel correction surface'),
      'correction_surface_D':(['u8 high byte of 0x0900 selected speed','u8 0x08F4 coolant'],'u8 0x0A88 selected as a base by 0x0885 bit 0x20','Alternate base spark surface; replaces the normal base in this mode, not an additive correction'),
    }
    for suffix in 'ABC':
        grid_traces['main_u8_'+suffix]=(['u16 0x0902 selected speed','u16 0x08E8 throttle code; conditional 0xD000 substitution'],
            'u8 0x0A83 after Q8 rounding; corrected into 0x0A82','Base spark timing surface '+suffix+'; see semantics/SPARK.md')
    for m in maps:
        if m['kind']=='1D_uniform_axis':
            src,dest,role=traced[int(m['pointer_base'],16)]
            m.update(inputs=[src],output=dest,physical_role=role,
                     interpolation='clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented')
        elif m['id'] in grid_traces:
            src,dest,role=grid_traces[m['id']]
            m.update(inputs=src,output=dest,physical_role=role)
        m.setdefault('engineering_decode',None)
        m.setdefault('ready_for_tuning_export',False)
        m.setdefault('selection','See caller evidence; full mode/override conditions not yet exhaustively documented')
        key=m['id']
        if key in {'main_quantity_A','main_quantity_C'}:
            m['selection']='RAM 0x0B80 bit 0 '+('clear: normal load fuel path' if key.endswith('A') else 'set: completed four-stage road-speed sequence; stock zero timeout prevents completion from cleared state')+'; see semantics/MAP_SELECTORS.md'
        elif key.startswith('main_u8_'):
            m['selection']={'A':'Variant 9 and filtered neutral input PB4 low (0x0896 bit 4 clear)', 'B':'Outside neutral-input branch: ratio code 0x0898 <= ROM 0x4245 (stock 5)', 'C':'Outside neutral-input branch: ratio code 0x0898 > ROM 0x4245 (stock 5); not emitted by the recovered normal classifier'}[key[-1]]
        elif key in {'fuel_normalization_load','fuel_normalization_throttle'}:
            m['selection']='Both tables are evaluated; ROM 0x3114 '+('== 0x80 selects load (not selected in stock)' if key.endswith('load') else '!= 0x80 selects throttle (selected in stock, value 0)')+' at 0x7EE4; this is an equality comparison, not a bit test'
        elif key=='fuel_normalization_gain':
            m['selection']='Evaluated after the selected code and CD4 offset are clamped into CD0 at 0x7F0B; both load/throttle selection branches share this denominator gain'
        elif key in {'curve_31ec','curve_3200'}:
            m['selection']='Ratio code 0x0898 '+('<=' if key=='curve_31ec' else '>')+' ROM 0x31EA (stock 5); consuming normalization state disabled by stock ROM 0x3130 = 0xFF'
        elif key in {'curve_34d0','curve_34da','curve_34e4','curve_355d','curve_3567','curve_3571'}:
            first=key in {'curve_34d0','curve_34da','curve_34e4'}
            choices=['curve_34d0','curve_34da','curve_34e4'] if first else ['curve_355d','curve_3567','curve_3571']
            threshold='0x34CF (stock 1)' if first else '0x355C (stock 5)'
            m['selection']=['Variant 9 and filtered neutral input PB4 low (0x0896 bit 4 clear)',f'Outside neutral-input branch: ratio code 0x0898 <= ROM {threshold}',f'Outside neutral-input branch: ratio code 0x0898 > ROM {threshold}'][choices.index(key)]
        m.setdefault('evidence_addresses',[])
        m['unresolved']=['Engineering-unit conversions and complete downstream transformation',
                         'Hardware/bench confirmation and safe operating limits']
    assert len(traced)==36


def write_dossiers(maps, out, instructions):
    dest=out/'map_details';dest.mkdir(exist_ok=True)
    index=['# Per-map breakdown','',
           'Every catalogued map has a byte layout, input/output trace, raw values and nearby instruction evidence. A decoded layout does not establish physical units or make a tuning definition ready.',
           '', '| Map | Cells | Role |', '|---|---|---|']
    rows=list(instructions.values())
    positions={int(r['address'],16):i for i,r in enumerate(rows)}
    for m in maps:
        index.append(f"| [{m['display_name']}](map_details/{m['id']}.md) | {m['data_address']} | {m['physical_role']} |")
        lines=[f"# {m['display_name']}",'',m['physical_role'],'',
            f"Cells: **{m['data_address']}–{int(m['end_exclusive'],16)-1:04X}**, {m['rows']} rows × {m['columns']} columns, {m['element_bytes']*8}-bit unsigned big-endian values.",'',
            'Inputs: '+ '; '.join(m['inputs'])+'.','', 'Output: '+m['output']+'.','',
            'Selection: '+m['selection']+'.','',
            'Interpolation: '+m.get('interpolation','See the helper and axis evidence below; standard grid paths use Q8 indices.')+'.','',
            '**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).','']
        for key in ['row_axis','column_axis']:
            if key in m:
                a=m[key]
                lines += [f"## {key.replace('_',' ').title()}",'',
                    f"Source: {a.get('address','computed in firmware')}. {a.get('input','See inputs and call evidence.')}",'',
                    a.get('index_formula',a.get('equality','Explicit breakpoint lookup.')),'',
                    '`'+', '.join(map(str,a['raw_values']))+'`','']
                if 'following_word' in a:lines += ['Following unused stored word: `'+json.dumps(a['following_word'])+'`.','']
        if m['kind']=='1D_uniform_axis':
            lines += ['## Uniform axis','',f"Minimum {m['input_min_raw']}; span {m['input_span_raw']}; factor {m['index_factor_raw']}; index divisor {m['index_divisor']}. Header begins at {m['pointer_base']}. These are internal scaling parameters, not physical-unit labels.",'']
        lines += ['## Raw cells','','```',*[' '.join(map(str,r)) for r in m['raw_values']],'```','',
                  '## Instruction evidence','', 'Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.','']
        sites=set(int(x,16) for x in m['evidence_addresses'])
        for call in m['calls']:
            sites.add(int(call['pointer_load'],16))
            for a in call.get('calls',[]):sites.add(int(a,16))
            if 'call' in call:sites.add(int(call['call'],16))
        selected=set()
        for site in sites:
            if site in positions:
                p=positions[site];selected.update(range(max(0,p-5),min(len(rows),p+13)))
        lines += ['```']
        previous=None
        for p in sorted(selected):
            if previous is not None and p!=previous+1:lines.append('...')
            r=rows[p];lines.append(f"{r['address']}  {r['bytes']}  {r['instruction']}");previous=p
        lines += ['```','', '[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)','']
        (dest/(m['id']+'.md')).write_text('\n'.join(lines),encoding='utf-8',newline='\n')
    (out/'MAP_DETAILS.md').write_text('\n'.join(index)+'\n',encoding='utf-8',newline='\n')
