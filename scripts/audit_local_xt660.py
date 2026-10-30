"""Read owner-supplied XDF/BIN candidates without modifying or executing them.

Usage: python scripts/audit_local_xt660.py SOURCE_FOLDER [--check]
Reports declared XDF storage and link relationships, not TunerPro rendering.
External formulas are data: never eval them. No external files are redistributed.
"""
import argparse
import hashlib
import json
from pathlib import Path
import xml.etree.ElementTree as ET

from sensor_profiles import fit

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'analysis/semantics/local_xt660_audit.json'


def sha(data):
    return hashlib.sha256(data).hexdigest()


def number(value, default=0):
    return int(value, 0) if value is not None else default


def audit(source):
    target = (ROOT / 'firmware/XT660X 2005.bin').read_bytes()
    maps = json.loads((ROOT / 'analysis/maps.json').read_text(encoding='utf-8'))
    inventory, bins, definitions = [], {}, []
    for path in sorted(source.rglob('*')):
        if path.suffix.lower() not in {'.bin', '.xdf'}:
            continue
        data = path.read_bytes()
        name = path.relative_to(source).as_posix()
        item = dict(path=name, bytes=len(data), sha256=sha(data))
        inventory.append(item)
        if path.suffix.lower() == '.bin':
            if len(data) != 0xE800:
                item['comparison'] = 'Unsupported length; not automatically aligned'
                continue
            # These files start with the T64 calibration header; the matching
            # application's exact byte agreement further checks base 0x1800.
            assert data.startswith(b'FOR T64 NEW DATAUPDATE')
            full = bytes([255]) * 0x1800 + data
            bins[name] = full
            changed = [a for a in range(0x1800, 0xF800) if full[a] != target[a]]
            item.update(cpu_base='0x1800', application_bytes_compared=0xE000,
                        application_differences=len(changed),
                        boot_sha256=sha(full[0xF800:]),
                        boot_non_ff_bytes=sum(x != 255 for x in full[0xF800:]),
                        reset_vector=f'0x{int.from_bytes(full[-2:], "big"):04X}',
                        startup_checksum=f'0x{sum(int.from_bytes(full[a:a+2], "big") for a in range(0x1800, 0xF800, 2)) & 65535:04X}')
            if len(changed) < 20:
                item['application_byte_changes'] = [dict(cpu_address=f'0x{a:04X}',
                    target=target[a], candidate=full[a]) for a in changed]
            continue
        try:
            root = ET.fromstring(data)
        except ET.ParseError:
            item['format'] = 'non-XML; formulas not recovered by this audit'
            continue
        assert root.tag == 'XDFFORMAT'
        tables = root.findall('XDFTABLE')
        by_id = {t.get('uniqueid'): t for t in tables}
        base = root.find('XDFHEADER/BASEOFFSET')
        offset = number(base.get('offset')) if base is not None else 0
        subtract = base is not None and base.get('subtract') == '1'
        item.update(format='XML XDFFORMAT', tables=len(tables),
                    base_offset=offset, subtract_base=subtract)
        records = []
        for table in tables:
            axes = []
            for axis in table.findall('XDFAXIS'):
                embedded = axis.find('EMBEDDEDDATA')
                info = axis.find('embedinfo')
                record = dict(id=axis.get('id'), declared_storage=dict(embedded.attrib),
                    units=axis.findtext('units'),
                    equations=[m.get('equation') for m in axis.findall('MATH')])
                if info is not None:
                    record['embedinfo'] = dict(info.attrib)
                    if info.get('type') == '3':
                        linked = by_id.get(info.get('linkobjid'))
                        record['linked_table'] = linked.findtext('title') if linked is not None else None
                        if linked is not None:
                            z = linked.find("XDFAXIS[@id='z']")
                            record['linked_storage'] = dict(z.find('EMBEDDEDDATA').attrib)
                            record['linked_equations'] = [m.get('equation') for m in z.findall('MATH')]
                if embedded.get('mmedaddress') is not None:
                    address = number(embedded.get('mmedaddress'))
                    file_offset = address - offset if subtract else address + offset
                    record.update(declared_file_offset=file_offset,
                                  cpu_address_for_0x1800_bin=f'0x{file_offset+0x1800:X}')
                    if axis.get('id') == 'z':
                        bits = number(embedded.get('mmedelementsizebits'))
                        rows = number(embedded.get('mmedrowcount'), 1)
                        cols = number(embedded.get('mmedcolcount'), 1)
                        record['declared_shape'] = [rows, cols, bits]
                        exact = [m for m in maps if int(m['data_address'], 16) == file_offset + 0x1800]
                        record['target_start_matches'] = [dict(id=m['id'],
                            shape=[m['rows'], m['columns'], m['element_bytes']*8],
                            shape_matches=[rows, cols, bits] == [m['rows'], m['columns'], m['element_bytes']*8]) for m in exact]
                axes.append(record)
            records.append(dict(title=table.findtext('title'), uniqueid=table.get('uniqueid'), axes=axes))
        definitions.append(dict(path=name, tables=records))

    matching_name = 'xt 660 r/xt660 04-06(5vk-8591a-01).bin'
    older_name = 'Bin/Yamaha XT660 2008 5VK-8591A-1X.motorcycle-tuning.com.bin'
    matching, older = bins[matching_name], bins[older_name]
    differences = [a for a in range(0x1800, 0xF800) if matching[a] != target[a]]
    assert differences == [0x4E7D] and matching[0x4E7D] == 0 and target[0x4E7D] == 128
    assert matching[0xF800:] == older[0xF800:]
    assert sum(int.from_bytes(matching[a:a+2], 'big') for a in range(0x1800, 0xF800, 2)) & 65535 == 0xAA55
    # Exact reset-path instruction anchors already decoded in the earlier boot.
    anchors = [('0xF800', 'cf1000', 'LDS #0x1000'),
        ('0xF80A', '86075a3486015a35', 'SYNR=7; REFDV=1'),
        ('0xF81A', '4c3980', 'BSET CLKSEL,0x80'),
        ('0xF883', 'bcf7fe1827ff16', 'CPD 0xF7FE; LBEQ 0xF7A0'),
        ('0xF7A0', '065000', 'JMP 0x5000')]
    for address, raw, _ in anchors:
        a = int(address, 16)
        assert matching[a:a+len(raw)//2] == bytes.fromhex(raw), address

    trials = []
    candidates = [('2008_fan', 5/9, -145/9), ('2008_temperature_axis', 5/9, -160/9),
                  ('2004_final_fan', 1/2.121, 0), ('2012_fan', .476, 0)]
    for name, slope, offset in candidates:
        for coolant, points in [(True, [(20,2320,2590),(80,310,326),(110,140,145)]),
                                (False, [(20,2210,2690),(80,290,354)])]:
            try:
                result = fit(target, coolant, slope, offset, points)
            except ValueError as error:
                result = dict(slope=slope, offset=offset, consistent_constant_pullup=False,
                              unrepresentable_temperature_celsius=error.args[0][1])
            trials.append(dict(candidate=name, sensor='coolant' if coolant else 'intake', **result))
    return dict(schema_version=1, firmware_sha256=sha(target),
        script_sha256=sha(Path(__file__).read_bytes()),
        maps_sha256=sha((ROOT / 'analysis/maps.json').read_bytes()),
        sensor_model_sha256=sha((ROOT / 'scripts/sensor_profiles.py').read_bytes()),
        scope='Static declarations and byte comparisons; not live ECU calibration or a TunerPro rendering test.',
        inventory=inventory, definitions=definitions,
        matching_application=dict(source=matching_name, exact_except='0x4E7D: candidate 0; target 128',
            startup_checksum='0xAA55', boot_matches_earlier_source=True,
            boot_sha256=sha(matching[0xF800:]),
            instruction_anchors=[dict(address=a, bytes=b, meaning=c) for a,b,c in anchors],
            limitation='Strong companion boot candidate; not a physical read of the owner ECU boot. Target remains unchanged.'),
        temperature_trials=trials, new_physical_scales_verified=0)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('source', type=Path)
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    result = audit(args.source)
    encoded = json.dumps(result, indent=2) + '\n'
    if args.check:
        assert OUT.read_text(encoding='utf-8') == encoded, 'Local XDF audit is stale'
    else:
        OUT.write_text(encoded, encoding='utf-8', newline='\n')
    print(json.dumps(dict(files=len(result['inventory']),
        xml_tables=sum(len(d['tables']) for d in result['definitions']),
        matching_application=result['matching_application'],
        temperature_trials=[dict(candidate=t['candidate'], sensor=t['sensor'],
            fits=t['consistent_constant_pullup']) for t in result['temperature_trials']]), indent=2))
