"""Evidence-based display names; stable IDs remain keys for code, tests and URLs."""
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
# Reviewed against the input/output traces, consumer derivations and selector notes.
# These are descriptive research aliases, not recovered Yamaha symbol names.
ROWS = [
 ('main_quantity_A', 'Load-based fuel quantity (mode flag clear)', 'Fuel'),
 ('main_quantity_B', 'Throttle-based fuel quantity', 'Fuel'),
 ('main_quantity_C', 'Load-based fuel quantity (mode flag set)', 'Fuel'),
 ('main_u8_A', 'Base ignition timing — selection A', 'Ignition'),
 ('main_u8_B', 'Base ignition timing — selection B', 'Ignition'),
 ('main_u8_C', 'Base ignition timing — selection C', 'Ignition'),
 ('modulo24_surface', 'Injection event-phase target', 'Fuel'),
 ('correction_surface_A', 'Secondary injector quantity multiplier', 'Fuel'),
 ('correction_surface_B', 'Fuel normalization offset', 'Fuel'),
 ('correction_surface_C', 'Fuel correction gain vs speed and load', 'Fuel'),
 ('correction_surface_D', 'Alternate base ignition timing vs speed and coolant', 'Ignition'),
 ('fuel_normalization_load', 'Load-based fuel normalization input', 'Fuel'),
 ('fuel_normalization_throttle', 'Throttle-based fuel normalization input', 'Fuel'),
 ('fuel_normalization_gain', 'Fuel normalization denominator gain', 'Fuel'),
 ('curve_18b6', 'Feedback startup delay vs coolant', 'Feedback'),
 ('curve_1996', 'Startup fuel base quantity vs coolant', 'Fuel'),
 ('curve_32ef', 'Post-start enrichment — fast-decay state', 'Fuel'),
 ('curve_3301', 'Post-start enrichment — slow-decay state', 'Fuel'),
 ('curve_4234', 'Injector pulse compensation vs supply', 'Fuel'),
 ('curve_19c6', 'Startup fuel multiplier vs pressure estimate', 'Fuel'),
 ('curve_19ba', 'Startup fuel multiplier vs throttle', 'Fuel'),
 ('curve_19a8', 'Startup fuel multiplier vs engine speed', 'Fuel'),
 ('curve_34b0', 'Centered fuel-correction gain vs engine speed', 'Fuel'),
 ('curve_3494', 'Relative-throttle qualification threshold vs speed', 'Fuel'),
 ('curve_353a', 'Transient fuel multiplier vs pressure estimate', 'Transient fuel'),
 ('curve_351d', 'Transient fuel multiplier vs intake temperature', 'Transient fuel'),
 ('curve_34d0', 'Transient fuel pulse response — family 1, selection A', 'Transient fuel'),
 ('curve_34da', 'Transient fuel pulse response — family 1, selection B', 'Transient fuel'),
 ('curve_34e4', 'Transient fuel pulse response — family 1, selection C', 'Transient fuel'),
 ('curve_34ee', 'Transient fuel multiplier vs throttle', 'Transient fuel'),
 ('curve_355d', 'Transient fuel pulse response — family 2, selection A', 'Transient fuel'),
 ('curve_3567', 'Transient fuel pulse response — family 2, selection B', 'Transient fuel'),
 ('curve_3571', 'Transient fuel pulse response — family 2, selection C', 'Transient fuel'),
 ('curve_31ec', 'Fuel normalization recovery hold — selection 1', 'Fuel'),
 ('curve_3200', 'Fuel normalization recovery hold — selection 2', 'Fuel'),
 ('curve_36c4', 'Feedback eligibility delay vs coolant', 'Feedback'),
 ('curve_36a4', 'Adaptive fuel correction — decrement step', 'Feedback'),
 ('curve_36b2', 'Adaptive fuel correction — increment step', 'Feedback'),
 ('curve_3220', 'Fuel multiplier vs intake temperature', 'Fuel'),
 ('curve_3345', 'Positive transient fuel gain vs coolant', 'Transient fuel'),
 ('curve_3357', 'Negative transient fuel gain vs coolant', 'Transient fuel'),
 ('curve_1880', 'Pressure-processing offset vs engine speed', 'Sensor processing'),
 ('curve_323c', 'Load-path fuel multiplier vs pressure estimate', 'Fuel'),
 ('curve_32e0', 'Throttle-path fuel multiplier vs pressure estimate', 'Fuel'),
 ('curve_4a33', 'Alternate ignition mode — throttle threshold vs coolant', 'Ignition'),
 ('curve_3315', 'Coolant enrichment — load-based fuel path', 'Fuel'),
 ('curve_3327', 'Coolant enrichment — throttle-based fuel path', 'Fuel'),
 ('curve_34fd', 'Transient fuel pulse contribution vs coolant', 'Transient fuel'),
 ('curve_4bac', 'Spark timing bound vs pressure estimate', 'Ignition'),
 ('step_grid_4c44', 'Air-induction enable vs speed and throttle', 'Air induction'),
 ('step_grid_4d48', 'Air-induction enable vs speed and load', 'Air induction'),
 ('step_grid_35b0', 'Adaptive feedback enable vs speed and throttle', 'Feedback'),
 ('step_grid_363c', 'Adaptive feedback enable vs speed and load', 'Feedback'),
 ('timing_speed_4f64', 'Spark time correction — other variants', 'Ignition'),
 ('timing_speed_4f81', 'Spark time correction — XT variant 9', 'Ignition'),
 ('dwell_supply_speed', 'Ignition dwell contribution vs speed and supply', 'Ignition'),
 ('coolant_sensor_conversion', 'Coolant sensor conversion', 'Sensor processing'),
 ('intake_temperature_conversion', 'Intake air temperature sensor conversion', 'Sensor processing'),
 ('curve_1854', 'Pressure-to-load processing gain', 'Sensor processing'),
]
for prefix,coordinate in [('delta_0985','Throttle'),('delta_0989','Load')]:
    for choice in range(1,7):
        ROWS.append((f'{prefix}_gain_{choice}',f'{coordinate}-delta fuel gain — selection {choice}','Transient fuel'))

NAMES = {key: dict(display_name=name, category=category) for key,name,category in ROWS}
assert len(NAMES) == 71 and len({r['display_name'] for r in NAMES.values()}) == 71

def metadata(key):
    record = dict(NAMES[key])
    record['naming_basis'] = 'analysis/semantics/MAP_CONSUMERS.md'
    record['naming_note'] = 'Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.'
    if key.startswith('main_quantity_'):
        record['naming_basis']='analysis/semantics/FUEL.md'
        record['naming_note']='A/C use processed load and select on RAM 0x0B80 bit 0 (clear/set); B uses filtered throttle. The mode bit has no established rider-mode or cylinder meaning. Values precede final pulse corrections.'
    elif key.startswith('main_u8_'):
        record['naming_basis']='analysis/semantics/SPARK.md'
        record['naming_note']='A/B/C distinguish recovered selection branches, not octane or rider modes. A requires variant 9 and 0x0896 bit 4 clear; B/C use the remaining selector threshold. Absolute BTDC remains unresolved.'
    elif key.startswith('delta_'):
        record['naming_note']='Throttle/load identify internal coordinate deltas, not calibrated physical rates. Selection numbers preserve the six documented sign/variant/threshold branches; see Selection below.'
    elif key in {'curve_34d0','curve_34da','curve_34e4','curve_355d','curve_3567','curve_3571'}:
        record['naming_note']='Family 1 feeds RAM 0x0A0C; family 2 feeds 0x0D04. A/B/C distinguish the three choices within each family, not cylinders or rider modes. Pulse duration depends on their joint product with other curves.'
    elif key in {'curve_32ef','curve_3301'}:
        record['naming_note']='Fast/slow describe the relative decay with stock decrement bytes 123/2. They are alternative enrichment states, not two terms to add; wall-clock decay time remains mode-dependent.'
    elif key=='curve_4234':
        record['naming_note']='An additive supply-dependent pulse correction is established. Injector dead time remains a candidate physical interpretation, so it is not the primary name.'
    elif key in {'curve_31ec','curve_3200','correction_surface_B'}:
        record['naming_note']='This normal correction state is disabled in the supplied image by ROM 0x3130 = 0xFF. Selection numbers do not imply named riding modes.'
    elif key in {'step_grid_35b0','step_grid_363c','step_grid_4c44','step_grid_4d48'}:
        record['naming_basis']='analysis/semantics/EXTENDED_MAPS.md'
        record['naming_note']='Logical eligibility gate: zero inhibits the path; nonzero permits further tests. It is not a physical percentage or a complete enable decision. Both stock adaptive-feedback grids contain only zero.'
    elif key.startswith('timing_speed_') or key=='dwell_supply_speed':
        record['naming_basis']='analysis/semantics/SPARK_SCHEDULER.md'
        record['naming_note']='Role follows the recovered time/charge scheduler. Timer units depend on the nominal clock profile. A dwell contribution is not the final complete dwell duration, and a time correction is not absolute BTDC.'
    elif key in {'coolant_sensor_conversion','intake_temperature_conversion'}:
        record['naming_basis']='analysis/semantics/TEMPERATURE_PROFILE.md'
        record['naming_note']='Sensor identity is corroborated. The internal-code-to-Celsius profile remains conditional on the sensor circuit and ECU identification.'
    return record

def apply_names(maps):
    assert {m['id'] for m in maps} == set(NAMES), 'Review names for added/removed maps.'
    for m in maps:m.update(metadata(m['id']))

def refresh():
    """Apply presentation metadata after any catalogue/unit regeneration."""
    path=ROOT/'analysis/maps.json'
    maps=json.loads(path.read_text(encoding='utf-8'));apply_names(maps)
    path.write_text(json.dumps(maps,indent=2)+'\n',encoding='utf-8',newline='\n')
    unit_path=ROOT/'analysis/semantics/physical_units.json'
    units=json.loads(unit_path.read_text(encoding='utf-8'));apply_names(units['maps'])
    unit_path.write_text(json.dumps(units,indent=2)+'\n',encoding='utf-8',newline='\n')
    for m in maps:
        path=ROOT/'analysis/map_details'/f"{m['id']}.md"
        body=path.read_text(encoding='utf-8')
        header=f"# {m['display_name']}\n\n<!-- map-name -->\nStable ID: `{m['id']}`. Category: {m['category']}.\n\n{m['naming_note']}\n\nNaming evidence: [recovered derivation](../../{m['naming_basis']}).\n<!-- /map-name -->"
        body=re.sub(r'\A#[^\n]*(?:\n\n<!-- map-name -->.*?<!-- /map-name -->)?',lambda _:header,body,count=1,flags=re.S)
        path.write_text(body,encoding='utf-8',newline='\n')
        extract=ROOT/'analysis/map_extracts'/f"{m['id']}.txt"
        lines=extract.read_text(encoding='utf-8').splitlines()
        lines[0]=f"{m['display_name']} | ID: {m['id']} | {m['data_address']} | {m['rows']} rows x {m['columns']} columns | raw values"
        extract.write_text('\n'.join(lines)+'\n',encoding='utf-8',newline='\n')
    for filename in ['analysis/MAP_DETAILS.md','analysis/MAP_ATLAS.md','analysis/semantics/MAP_RESOLUTION.md']:
        path=ROOT/filename;body=path.read_text(encoding='utf-8')
        for m in maps:
            # Change link labels only; keep stable paths and legacy IDs in the data.
            body=re.sub(r'\[[^\]\n]+\](\((?:\.\./)?map_details/'+re.escape(m['id'])+r'\.md\))',lambda match:'['+m['display_name']+']'+match[1],body)
        path.write_text(body,encoding='utf-8',newline='\n')
    lines=['# Map names and stable references','',
           'Names describe the recovered function. They are research aliases, not original Yamaha symbols. Stable IDs, file names and URLs remain unchanged so instruction fixtures, external links and data joins stay reproducible. Physical units, mode identity and tuning readiness remain separate questions.','',
           'All 71 entries have been reviewed against the input/output traces and current consumer research. Selection letters/numbers are retained only when the branches are known but their physical mode names are not.','',
           '| Map name | Stable ID | First cell | Category | Naming evidence |','|---|---|---|---|---|']
    for m in maps:lines.append(f"| [{m['display_name']}](map_details/{m['id']}.md) | `{m['id']}` | `{m['data_address']}` | {m['category']} | [Derivation](../{m['naming_basis']}) |")
    (ROOT/'analysis/MAP_NAMES.md').write_text('\n'.join(lines)+'\n',encoding='utf-8',newline='\n')
    print('Applied reviewed display names to all 71 maps, unit records, dossiers and text extracts; stable IDs retained.')

if __name__=='__main__':refresh()
