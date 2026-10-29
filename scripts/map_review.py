"""Per-axis research status from the catalogue's traced inputs.

This is an evidence inventory, not an independent execution test. Keep physical
assumptions separate from raw coordinate identities and cell arithmetic.
"""
import re


DOMAINS = {
    'speed': ('Speed coordinate', 'Confirm the timer clock and CPS pattern per crank revolution before treating the axis as RPM.'),
    'coolant': ('Effective coolant temperature code', 'Confirm the coolant circuit/temperature transfer and resolve the XT manual fallback conflict before assigning Celsius.'),
    'iat': ('Intake temperature code', 'Confirm the IAT circuit/temperature transfer before assigning Celsius.'),
    'load': ('Processed load coordinate', 'Finish the pressure-to-load transfer across modes; C90 is not a direct kPa axis.'),
    'throttle': ('Relative throttle coordinate', 'Confirm the learned-closed reference and sensor/mechanical transfer before assigning degrees or percent throttle.'),
    'pressure_estimate': ('Pressure-derived estimate', 'Confirm the pressure estimator, analog transfer and reference before assigning kPa to 08F2.'),
    'supply': ('Supply-derived code', 'Confirm the voltage divider/reference and filtering before assigning volts.'),
    'throttle_delta': ('Internal throttle-delta code', 'Finish the delta/deadband and sample-cadence transfer before assigning a physical throttle rate.'),
    'normalization': ('Combined normalization code', None),
    'adc': ('ADC count', None),
}


def input_review(m):
    axes = [(k, a) for k in ('row_axis', 'column_axis') if (a := m.get(k))]
    if m['kind'] == '1D_uniform_axis':
        axes = [('uniform_input', {'input': '; '.join(m['inputs'])})]
    result = []
    for name, axis in axes:
        # The manually traced input also records fault substitutions. A nearby
        # LDD literal in the automatic call window is not the normal source.
        index = 0 if name in ('row_axis', 'uniform_input') or len(m['inputs']) == 1 else 1
        source = m['inputs'][index]
        addresses = {int(x, 16) for x in re.findall(r'0x([0-9a-f]+)', source, re.I)}
        domain = None
        if 'ADC channel' in source:
            domain = 'adc'
        for candidates, key in [({0x900, 0x902, 0x8f8}, 'speed'), ({0x8f4}, 'coolant'),
                                ({0x8f5}, 'iat'), ({0xc90}, 'load'),
                                ({0x8e8, 0x8ce}, 'throttle'), ({0x8f2}, 'pressure_estimate'),
                                ({0x8d9, 0x8da}, 'supply'), ({0x8ed}, 'throttle_delta'),
                                ({0xcd0}, 'normalization')]:
            if addresses & candidates:
                assert domain is None, (m['id'], source)
                domain = key
        assert domain is not None, (m['id'], name, source)
        label, gap = DOMAINS[domain]
        result.append(dict(axis=name, source=source, domain=domain, meaning=label,
                           raw_coordinate_status='Traced in catalogue',
                           physical_status='Not required: internal code/count' if gap is None else 'Open',
                           open_requirement=gap))
    assert result, m['id']
    return result


def remaining_questions(m, unit):
    items = []
    profiles = set(unit.get('requires', []))
    for axis in unit['axis_conversions']:
        profiles.update(axis['requires'])
    if 'nominal_xt_timer' in profiles:
        items.append('Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.')
    if 'nominal_xt_crank' in profiles:
        items.append('Confirm CPS pattern per mechanical revolution; the 12-pitch / 180-degree speed-period interpretation remains conditional.')
    for axis in unit['axis_interpretations']:
        gap = axis['open_requirement']
        if gap and axis['domain'] != 'speed' and gap not in items:
            items.append(gap)
    conversion = unit['cell_conversion']
    if conversion == 'temperature_celsius_candidate':
        items.append(DOMAINS['coolant' if m['id'].startswith('coolant') else 'iat'][1])
    if conversion == 'spark_relative_degrees':
        items.append('Establish CPS edge relative to mechanical TDC and the coil firing edge; relative scheduler degrees are not absolute BTDC.')
    if conversion == 'injection_event_code':
        items.append('Establish event-code phase relative to the physical crank cycle, including special scheduling modes.')
    if conversion == 'transient_delta_slope_pp':
        items.append('Convert the internal signed delta and its sampling/deadband to a physical rate before naming a rate-based gain.')
    if conversion == 'relative_tps_counts':
        items.append('Confirm the relative TPS count-to-mechanical-angle transfer for the cell threshold.')
    if conversion is None:
        items.append('The cell is one factor in a joint transient pulse calculation; no independent millisecond unit is established.')
    if m['selection'].startswith('See caller evidence'):
        items.append('Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.')
    else:
        items.append('Selection is traced for the documented branches; complete all downstream override/fault paths before tuning sign-off.')
    items.append('Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.')
    return list(dict.fromkeys(items))
