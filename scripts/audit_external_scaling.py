"""Reproduce candidate-scale tests; never import another ECU's units as fact."""
import argparse
import hashlib
import json
from pathlib import Path
from sensor_profiles import sensor_code

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT/'analysis/semantics'


def toyota_temperature(x):
    # Published Toyotune 3S-GTE fit, used as a transfer hypothesis only.
    return (161.034800506902 + 2639.01416123947/(273.342278402719-x)
            + 94262.1435393694/(-457.823409341816-x))


def fit_transfer(image, coolant, transform, points):
    """Same conservative ADC/output-bin envelope as sensor_profiles.fit.

    Test a proposed conversion of XT *post-table* codes, not an arbitrary
    refit. Independent pullup is allowed for each sensor, constant over its
    reference temperatures. Rejection is conditional on this circuit model.
    """
    codes = [sensor_code(image, a, coolant) for a in range(1024)]
    decoded = [transform(c) for c in codes]
    step = 1 if coolant else 4
    rows = []
    for temp, low, high in points:
        bins = [a for a in range(1, 1023)
                if decoded[min(1023, (a//step+1)*step)] <= temp
                < transform(codes[a]+1)]
        if not bins:
            rows.append(dict(celsius=temp, reason='not representable'))
            continue
        amin, amax = min(bins), max(bins)
        rows.append(dict(celsius=temp, adc_bins=[amin, amax],
            pullup_ohms=[low*(1024/(amax+1)-1), high*(1024/amin-1)]))
    intervals = [r['pullup_ohms'] for r in rows if 'pullup_ohms' in r]
    compatible = (len(intervals) == len(points)
                  and max(x[0] for x in intervals) <= min(x[1] for x in intervals))
    return dict(sensor='coolant' if coolant else 'intake', points=rows,
        consistent_constant_pullup=compatible, decoded_range=[min(decoded), max(decoded)],
        common_pullup_ohms=[max(x[0] for x in intervals), min(x[1] for x in intervals)]
        if compatible else None)


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def build():
    image = (ROOT/'firmware/XT660X 2005.bin').read_bytes()
    units = json.loads((OUT/'physical_units.json').read_text(encoding='utf-8'))
    maps = json.loads((ROOT/'analysis/maps.json').read_text(encoding='utf-8'))
    by_id = {m['id']: m for m in maps}
    hypotheses = [
        ('suzuki_liana_iat', 'X*0.01-100', lambda x: x*.01-100),
        ('toyota_mode06', 'X*0.625-40', lambda x: x*.625-40),
        ('toyotune_post_table_transfer', 'published nonlinear 3S-GTE fit', toyota_temperature),
        ('xt_existing_candidate', 'X*0.625-30', lambda x: x*.625-30),
    ]
    trials = []
    for name, formula, transform in hypotheses:
        for coolant, points in [(True, [(20,2320,2590),(80,310,326),(110,140,145)]),
                                (False, [(20,2210,2690),(80,290,354)])]:
            trials.append(dict(hypothesis=name, formula=formula,
                               **fit_transfer(image, coolant, transform, points)))
    # Rejection of external candidates must not silently become confirmation
    # of our existing candidate; the separate offset sweep proves ambiguity.
    assert all(t['consistent_constant_pullup'] for t in trials
               if t['hypothesis'] == 'xt_existing_candidate')
    assert all(not t['consistent_constant_pullup'] for t in trials
               if t['hypothesis'] == 'suzuki_liana_iat')
    assert not next(t for t in trials if t['hypothesis']=='toyota_mode06'
                    and t['sensor']=='coolant')['consistent_constant_pullup']
    duration_trials = []
    for name, factor in [('liana_injector_lag',.001), ('toyotune_injection',.004),
                         ('xt_nominal_timer',.002)]:
        hz = 1000/factor
        duration_trials.append(dict(hypothesis=name, ms_per_raw=factor,
            implied_xt_timer_hz=hz, xt_fan_diagnostic_repeat_seconds=2500000/hz,
            xt_fan_diagnostic_on_seconds=1000000/hz,
            matches_documented_5s_repeat_2s_on=(hz==500000),
            caveat='Only tests direct transfer into XT timer ticks. Other ECUs may pre-scale a cell before timing. No oscillator measurement.'))
    coverage = [dict(id=u['id'], name=by_id[u['id']]['display_name'],
        dossier='../map_details/'+u['id']+'.md', cell_conversion=u['cell_conversion'],
        status=u['status'], axes=[a['domain'] for a in u['axis_interpretations']],
        external_scale_promoted=False) for u in units['maps']]
    assert len(coverage)==71 and len({x['id'] for x in coverage})==71
    return dict(schema_version=1, firmware_sha256=sha(ROOT/'firmware/XT660X 2005.bin'),
        generator_sha256=sha(Path(__file__)), sensor_model_sha256=sha(ROOT/'scripts/sensor_profiles.py'),
        source_manifest_sha256=sha(OUT/'external_definition_sources.json'),
        physical_units_sha256=sha(OUT/'physical_units.json'),
        temperature_trials=trials, timer_transfer_trials=duration_trials,
        temperature_adc_evaluations=4*2*1024,
        rpm_comparison=dict(external='Toyotune raw/5.12', xt_nominal='raw*100/512',
            factors_equal=(1/5.12==100/512), factor=100/512,
            conclusion='Same numerical convention; external formula does not measure XT clock or crank geometry.'),
        scope='Candidate applicability audit across all 71 catalogue maps. Tests formulas against XT byte ranges, digital sensor transfers, resistance intervals and nominal timing evidence; no external ECU hardware validation.',
        conclusion='No newly verified absolute physical scale. External candidates are rejected or remain analogies; all original conditional profiles remain conditional.',
        maps=coverage)


if __name__ == '__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--check', action='store_true')
    args=parser.parse_args()
    result=build()
    target=OUT/'external_scaling_audit.json'
    encoded=json.dumps(result, indent=2)+'\n'
    if args.check:
        assert target.read_text(encoding='utf-8')==encoded, 'External scaling audit is stale'
    else:
        target.write_text(encoded, encoding='utf-8', newline='\n')
    print(json.dumps(dict(maps=len(result['maps']), temperature_adc_evaluations=result['temperature_adc_evaluations'],
        trials=[dict(hypothesis=t['hypothesis'], sensor=t['sensor'], compatible=t['consistent_constant_pullup'])
                for t in result['temperature_trials']]), indent=2))
