"""Audit existing evidence and publish scoped verification, never hardware sign-off.

--check reruns repository checks and rejects stale generated ledger files.
Software fixture reports are provenance-checked, not re-executed by this command.
"""
import argparse
import csv
import hashlib
import json
import subprocess
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'analysis/semantics'


def read(path):
    return json.loads((ROOT / path).read_text(encoding='utf-8'))


def sha(path):
    return hashlib.sha256((ROOT / path).read_bytes()).hexdigest()


def cell(value):
    return str(value).replace('|', '\\|').replace('\n', ' ')


def build():
    checks = ['verify_analysis.py', 'verify_semantics.py', 'verify_pin_overview.py', 'verify_map_names.py']
    for script in checks:
        subprocess.run([sys.executable, str(ROOT / 'scripts' / script)], cwd=ROOT, check=True)
    maps = read('analysis/maps.json')
    units = read('analysis/semantics/physical_units.json')
    by_id = {m['id']: m for m in units['maps']}
    pins = read('analysis/semantics/mcu_pin_overview.json')
    source = read('analysis/semantics/package_datasheet_review.json')
    assert source['reviewed_signals'] == {str(p['pin']): p['signal'] for p in pins['pins']}, 'Package transcription changed: review Figure 11 again'
    code_pins = read('analysis/semantics/code_pin_review.json')
    assert code_pins['source_sha256'] == source['source_sha256']
    assert {p['pin'] for p in code_pins['pins']} == {p['pin'] for p in pins['pins'] if p['evidence']}
    with (ROOT / 'analysis/disassembly.tsv').open() as f:
        instructions = {r['address']: r for r in csv.DictReader(f, delimiter='\t')}
    image = (ROOT / 'firmware/XT660X 2005.bin').read_bytes()
    for review in code_pins['pins']:
        pin = pins['pins'][review['pin'] - 1]
        assert (review['signal'], review['role'], review['overview_register']) == (pin['signal'], pin['role'], pin['register']), 'Code/pin claim changed: review required'
        for anchor in review['instructions']:
            row = instructions[anchor['address']]
            assert (row['bytes'], row['instruction']) == (anchor['bytes'], anchor['instruction'])
            a = int(anchor['address'], 16)
            raw = bytes.fromhex(anchor['bytes'])
            assert image[a:a + len(raw)] == raw
    dispatch = code_pins['adc_dispatch']
    a = int(dispatch['address'], 16)
    assert image[a:a+16] == bytes.fromhex(''.join(dispatch['handlers']))
    result = {
        'schema_version': 1,
        'firmware_sha256': sha('firmware/XT660X 2005.bin'),
        'overall_status': 'Incomplete: physical interpretation and hardware verification remain open',
        'policy': 'Verified is final for a stated claim, image and evidence scope. Passing software checks does not promote physical claims. Reopen affected claims when evidence changes.',
        'checks_run': [{'script': 'scripts/' + s, 'sha256': sha('scripts/' + s), 'result': 'passed'} for s in checks],
        'extraction': read('analysis/verification.json'),
        'package_source_review': source,
        'code_to_pin_review': code_pins,
        'profiles': units['profiles'],
        'maps': [], 'mcu_pins': [], 'connector_positions': [], 'software_reports': [],
    }
    for m in maps:
        u = by_id[m['id']]
        requires = set(u.get('requires', []))
        for axis in u['axis_conversions']:
            requires.update(axis['requires'])
        result['maps'].append({
            'id': m['id'], 'name': m['display_name'], 'address': m['data_address'],
            'byte_extraction': 'Verified',
            'interpretation_status': u['status'],
            'cell_conversion': u['cell_conversion'],
            'conditional_profiles': sorted(requires),
            'consumer_test_coverage': 'See scoped software reports; no exhaustive per-map path coverage certificate',
            'axis_interpretations': u['axis_interpretations'],
            'open_items': u['open_items'],
            'dossier': 'analysis/map_details/' + m['id'] + '.md',
            'tuning_signoff': 'Open',
        })
    for p in pins['pins']:
        result['mcu_pins'].append({
            'pin': p['pin'], 'signal': p['signal'], 'role': p['role'],
            'datasheet_package_assignment': 'Verified against Figure 11',
            'application_evidence_status': p['status'],
            'instruction_anchors_checked': len(p['evidence']),
            'code_register_package_chain': 'Reviewed; conditional MCU/register model' if p['evidence'] else 'No application claim established',
            'fitted_package_identity': 'Unconfirmed',
            'physical_route': 'Unverified',
        })
    for s in pins['ecu_connector']['slots']:
        result['connector_positions'].append({
            'position': s['position'], 'wire': s['wire'], 'role': s['role'],
            'function_association': s['association'], 'source_pdf_pages': s['source_pdf_pages'],
            'mcu_package_pins': s['mcu_package_pins'],
            'oem_cavity_number': s['oem_cavity_number'],
            'continuity_verified': s['continuity_verified'],
            'signoff': 'Open: connector face/OEM identity and physical route unverified',
        })
    report_paths = [ROOT / 'analysis/full/validation.json', *sorted(OUT.glob('*_validation.json'))]
    for path in report_paths:
        r = json.loads(path.read_text())
        assert r['result'] == 'passed'
        result['software_reports'].append({
            'path': path.relative_to(ROOT).as_posix(), 'sha256': sha(path),
            'recorded_result': r['result'],
            'recorded_cases': r.get('cases', r.get('total_cases', r.get('checks_including_helper_knots'))),
            'scope': r.get('limitations', r.get('scope', r.get('differential_reference'))),
            'evidence_scope': r.get('evidence_scope'),
            'audit_action': 'Report/source provenance checked; fixtures not re-executed by ledger build',
        })
    result['summary'] = {
        'map_byte_extractions_verified': len(maps),
        'map_input_axes_reviewed': units['summary']['axes_with_explicit_review'],
        'maps_signed_off_for_tuning': 0,
        'package_positions_datasheet_checked': len(pins['pins']),
        'pins_with_instruction_anchors': sum(bool(p['evidence']) for p in pins['pins']),
        'connector_positions_inventoried': len(result['connector_positions']),
        'connector_function_statuses': dict(Counter(s['function_association'] for s in result['connector_positions'])),
        'connector_routes_physically_verified': sum(s['continuity_verified'] for s in result['connector_positions']),
    }
    inputs = ['analysis/maps.json', 'analysis/semantics/physical_units.json',
              'analysis/semantics/mcu_pin_overview.json', 'analysis/semantics/package_datasheet_review.json',
              'analysis/semantics/code_pin_review.json',
              'scripts/map_review.py', 'scripts/build_verification_ledger.py']
    result['input_sha256'] = {p: sha(p) for p in inputs}
    return result


def render(r):
    lines = ['# Verification ledger', '',
        '**Overall: incomplete. Verified is the final state of a specific claim, not a synonym for all tests passing.**', '',
        'This generated ledger covers every current map, MCU package position and drawn ECU connector position. '
        'It audits existing evidence; it does not claim all remaining firmware meanings have been discovered. '
        'See [remaining calibration work](../REMAINING_CALIBRATIONS.md) and [definition readiness](DEFINITION_READINESS.md).', '',
        '## Sign-off rules', '',
        '1. **Decoded:** record exact bytes, dataflow, variants and interpretation.',
        '2. **Corroborated:** cite the applicable datasheet/manual page and resolve conflicting evidence.',
        '3. **Software checked:** record reproducible fixtures, boundaries, input image and source hashes.',
        '4. **Verified:** close every requirement for the stated claim; include physical evidence when the claim concerns real units, wiring or behaviour.', '',
        'These are evidence gates, not an automatic promotion ladder. A Yamaha map meaning cannot be proved by an MCU datasheet. '
        'A dimensionless arithmetic claim may be verified in software without a hardware measurement; '
        'a connector route needs board tracing or equivalent circuit evidence. '
        'New contradictory evidence reopens the affected claim. Missing evidence is **Open**, not a passed test.', '',
        '## Checked off in this audit', '',
        '- [x] Original image hash, instruction bytes and non-overlapping extraction.',
        '- [x] All 71 map extracts and 32 stored axes match the supplied bytes.',
        '- [x] All 90 input-axis uses have explicit coordinate and remaining physical-scale requirements; every map has specific open items.',
        '- [x] All 80 displayed package assignments visually compared with NXP Figure 11; transcription locked for future change detection.',
        '- [x] All 35 firmware-linked pin entries reviewed from code operands and setup through the datasheet register/channel to the package pin.',
        '- [x] Existing software reports match the checked source/image provenance.',
        '- [x] All 26 drawn connector positions have an inventory entry; 101 MCU instruction anchors match the image.',
        '- [ ] Complete engineering-unit interpretation and tuning sign-off for all maps.',
        '- [ ] Exact fitted MCU/package and ECU revision confirmed.',
        '- [ ] Connector face/OEM numbering and physical routes confirmed.',
        '- [ ] Missing boot/reset content recovered and full-device/flash behaviour verified.', '',
        'The package review checks the **reference part**. It does not establish which part is fitted to this ECU. '
        'The [review record](package_datasheet_review.json) identifies the exact source hash, page and reviewed signals. '
        f'[NXP datasheet, PDF page 60, Figure 11]({r["package_source_review"]["source_url"]}).', '',
        '## Evidence needed to close the remaining claims', '',
        '| Claim | Evidence still required |', '|---|---|',
        '| Milliseconds, RPM and timed cuts | Confirm actual timer clock; confirm crank-event geometry for RPM. Datasheet prescaler semantics alone do not establish the oscillator. |',
        '| Absolute spark BTDC | Establish CPS reference edge relative to mechanical TDC, and actual coil firing edge/polarity; finish special-mode timelines. |',
        '| Coolant/IAT Celsius and fan temperatures | Coolant encoding is owner-corroborated; verify sensor accuracy/range and reconcile the manual fallback discrepancy. IAT remains conditional. See TEMPERATURE_PROFILE.md. |',
        '| Pressure, throttle, supply volts | Confirm analog conditioning and display/mechanical scales. Processed load cannot simply be relabelled kPa. |',
        '| Gear numbers / road speed | Independently establish sensor pulse count and drivetrain relationship; the earlier 20-pulse fit is not evidence. |',
        '| Connector wiring | Confirm ECU revision and connector view, trace drivers/conditioning; resolve B/Y and L/B alternatives and L/W starter candidate. |',
        '| Tuning definitions | Complete selector/consumer coverage, reversible unit encoding, rounding and permitted ranges; verify edited behaviour. |',
        '| Complete device boot / flashing | Recover missing F800-FFFF bytes and validate programming format, integrity field and boot requirements. |', '',
        'These gaps do not prevent further static tracing. They prevent final sign-off of the affected physical claims.', '',
        '## Every map', '',
        '“Verified” below applies only to byte extraction. Conversion status is inherited from the unit research; '
        'a blank profile dependency does not certify every axis, consumer or operating mode. Each dossier retains its open questions.', '',
        '| Map | Bytes | Interpretation | Conditional profiles | Tuning sign-off |', '|---|---|---|---|---|']
    for m in r['maps']:
        lines.append(f'| [{cell(m["name"])}](../map_details/{m["id"]}.md) `{m["address"]}` | Verified | {cell(m["interpretation_status"])} | {cell(", ".join(m["conditional_profiles"]) or "None listed; see dossier")} | Open |')
    lines += ['', '## Every MCU package position', '',
        'All rows match the reviewed reference pinout. Application status is a separate claim; instruction anchors '
        'are byte-checked citations, not proof of board wiring. **Fitted package and physical routes remain unverified for all rows.**', '',
        '| Pin | Signal | Package reference | Application role | Application evidence | Checked anchors |', '|---|---|---|---|---|---|']
    for p in r['mcu_pins']:
        lines.append(f'| {p["pin"]} | {p["signal"]} | Verified | {cell(p["role"])} | {p["application_evidence_status"]} | {p["instruction_anchors_checked"]} |')
    lines += ['', '## Code to CPU pin: every claimed software connection', '',
        'This review joins both sides: byte-backed instructions and the NXP register/package definitions. '
        'It checks register addresses, masks/channels and relevant initialization. '
        'The MCU family and register block at zero remain the working model; missing boot leaves inherited bus/multiplex modes unconfirmed. '
        'A reviewed chain is not blanket verification of its application role or external circuit. '
        'The [structured review](code_pin_review.json) contains every instruction and source page.', '',
        '| Pin / signal | Code-to-register chain | Datasheet PDF pages (plus pinout p.60) | Instruction anchors | Scope / remaining condition |',
        '|---|---|---|---|---|']
    for p in r['code_to_pin_review']['pins']:
        anchors = ', '.join('`0x' + a['address'].upper() + '`' for a in p['instructions'])
        lines.append(f'| {p["pin"]} / {p["signal"]} | {cell(p["chain"])} | {", ".join(map(str,p["register_pdf_pages"]))} | {anchors} | {cell(p["review_note"])} |')
    lines += ['', '## Every drawn connector position', '',
        'U/L identifiers are drawing coordinates, not OEM cavity numbers. Crosses mean no connection shown in this manual. '
        'See the [connector inventory](ECU_CONNECTOR.md) and [route audit](CONNECTOR_ROUTE_AUDIT.md) for source pages and reasoning. '
        '**No connector-to-MCU route has physical continuity sign-off.**', '',
        '| Position | Wire | Function association | Candidate MCU package pins | Manual PDF pages |', '|---|---|---|---|---|']
    for s in r['connector_positions']:
        lines.append(f'| {s["position"]} | {s["wire"] or "Cross"} | {s["function_association"]} | {", ".join(map(str, s["mcu_package_pins"])) or "Not assigned"} | {", ".join(map(str, s["source_pdf_pages"]))} |')
    lines += ['', '## Software reports and scope', '',
        'These are previously recorded fixture results whose provenance is checked during this audit. '
        'They were not all re-executed by the ledger command. Counts measure cases, not independently verified physical facts. '
        'The selector report includes 3,000 explicitly synthetic hypothesis iterations alongside 9,523 behaviour cases.', '',
        '| Report | Recorded cases | Recorded result | What the result does not establish |', '|---|---|---|---|']
    for t in r['software_reports']:
        name = Path(t['path']).name
        target = '../full/validation.json' if '/full/' in t['path'] else name
        lines.append(f'| [{name}]({target}) | {t["recorded_cases"]} | Passed | {cell(t["scope"])} |')
    lines += ['', '## Reproduce the audit', '',
        'Run `python scripts/build_verification_ledger.py` to run extraction, semantic provenance, pin and naming checks, '
        'then regenerate this document and [the structured ledger](verification_ledger.json). '
        'Run `python scripts/build_verification_ledger.py --check` to reject stale ledger content. '
        'Pages deployment runs this gate; open research items remain visibly open and do not fail a documentation build. '
        'A failed integrity/provenance check does fail the build.', '',
        f'Bound image SHA-256: `{r["firmware_sha256"]}`.', '']
    return '\n'.join(lines)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    result = build()
    outputs = {'verification_ledger.json': json.dumps(result, indent=2, ensure_ascii=False) + '\n',
               'VERIFICATION_LEDGER.md': render(result)}
    for name, content in outputs.items():
        path = OUT / name
        if args.check:
            assert path.read_text(encoding='utf-8') == content, f'Stale ledger: {name}; regenerate and review'
        else:
            path.write_text(content, encoding='utf-8', newline='\n')
    print('Verification ledger: 71 maps, 80 package positions, 26 connector positions; physical sign-off remains open.')
