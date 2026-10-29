"""XT manual connector positions, kept separate from OEM cavity numbering.

Visually transcribed from the ECU pictogram and circuit on PDF page 462 of
5VK1-AE1. U/L coordinates are ours and preserve the printed drawing orientation.
MCU links join independently identified functions; none is a board continuity test.
"""
import hashlib
import html

XT = 'https://scootertuub.nl/motoren/Yamaha/Yamaha%20XT%20660%20R%20X%202004%20Service%20Manual%20%20.pdf'
ROWS = [
    ('Upper', 'L/W Y/L Y/G X W Gy B/W X L Br/R R R/B O'.split()),
    ('Lower', 'B/Y L/B G/R Br/W P/W Y B/L L/R G/Y Y/B R/L X B'.split()),
]
# wire: circuit, MCU package references, association strength, route/evidence
CIRCUITS = {
 'L/W': ('Starter-relay control network', [21], 'Candidate association',
         'The drawing joins ECU L/W to the starter-relay/cut-off relay network. Filtered PB1 drives the debounced 0x0880 bit 0 state at 0xCBEF; that state participates in fault-19 and headlight suppression paths. This supports a starter-request interpretation, but the L/W-to-PB1 board route is not verified.'),
 'Y/L': ('Meter / immobilizer communication line', [69,70], 'Candidate association',
         'Y/L joins the ECU, meter and immobilizer in the manual. SCI1 RX/TX handles their software exchange; the external line interface joining both MCU signals has not been traced.'),
 'Y/G': ('Lean-angle sensor signal', [64], 'Function corroborated',
         'Manual signal Y/G; diagnostic 08 selects ATD5. Protection/conditioning lies between terminal and PAD5.'),
 'W': ('Vehicle-speed sensor signal', [1], 'Function corroborated',
       'Manual ECU-side W; diagnostic 07 and timer-2 counter identify PT2. Sensor-side wire is P; external input conditioning is not mapped.'),
 'Gy': ('Crank-position sensor signal', [80], 'Function corroborated',
        'Manual ECU-side Gy; crank capture uses PT1/TC1. The sensor-side lead is L/Y and its return joins the harness return network. Comparator/protection route is not mapped.'),
 'B/W': ('Harness ground / return', [], 'Internal rail',
         'The diagram grounds ECU B/W and shares that return with other vehicle circuits. Exact joins to MCU ground domains require the PCB netlist.'),
 'L': ('Shared sensor supply', [], 'Internal rail',
       'The manual supplies TPS, MAP, lean-angle and speed sensors from L. This is a board supply rail, not an identified MCU GPIO output; no regulator or reference-pin connection is established.'),
 'Br/R': ('Air-induction solenoid control', [13], 'Function corroborated',
          'Manual Br/R runs from ECU to the air-induction solenoid; R/W is its separate supply. Diagnostic 48 commands PP1/PWM1 at PTP bit 1. An unidentified power driver lies between MCU and harness.'),
 'R': ('ECU power feed', [], 'Internal rail',
       'The manual shows R entering the ECU from the vehicle power network. Internal regulation and its MCU supply destinations are not mapped; this is not a direct MCU supply-pin assignment.'),
 'R/B': ('Primary fuel-injector control', [5], 'Function corroborated',
         'Manual ECU R/B runs to the injector control terminal; R/L supplies the injector separately. Diagnostic 36 commands PT6/TC6. A power driver lies between MCU and harness. Other R/B wires elsewhere in the harness are not this ECU net.'),
 'O': ('Ignition-coil control', [2], 'Function corroborated',
       'Manual O runs to the ignition coil primary; diagnostic 30 commands PT3/TC3. A coil power driver separates the MCU command from this terminal.'),
 'B/Y': ('Starting / sidestand interlock network', [20], 'Candidate association',
         'Manual B/Y joins ECU to the relay/interlock network. Diagnostic 20 identifies PB0 as sidestand/start-interlock input, but this particular electrical join is not board-proven.'),
 'L/B': ('Neutral-state input through relay unit', [24], 'Function corroborated',
         'Fault-42 instructions identify relay L/Y to ECU L/B (PDF page 362). Diagnostic 21 reads filtered PB4 for variant 9. This is not the raw Sb wire at the neutral switch.'),
 'G/R': ('Coolant-temperature sensor signal', [65], 'Function corroborated',
         'Manual G/R and diagnostic 06 identify ATD6/PAD6. Thermistor bias/protection and the exact PCB route are not mapped.'),
 'Br/W': ('Intake-air-temperature sensor signal', [62], 'Function corroborated',
          'Manual Br/W and diagnostic 05 identify ATD3/PAD3. The input includes thermistor bias/protection.'),
 'P/W': ('Intake-pressure sensor signal', [60], 'Function corroborated',
         'Manual P/W and diagnostic 03 identify ATD1/PAD1. The exact conditioning route is not mapped.'),
 'Y': ('Throttle-position sensor signal', [59], 'Function corroborated',
       'Manual Y and diagnostic 01 identify ATD0/PAD0. The exact conditioning route is not mapped.'),
 'B/L': ('Shared sensor return', [], 'Internal rail',
         'The manual joins sensor returns to ECU B/L. Connections to VSSA, VRL or other MCU grounds are not established by the external drawing.'),
 'L/R': ('Fuel-injection-system relay control', [47], 'Function corroborated',
         'Manual L/R runs to the fuel-injection relay control side; diagnostic 50 commands PA2. The board driver is not identified.'),
 'G/Y': ('Radiator-fan relay control', [14], 'Function corroborated',
         'Manual G/Y runs to the radiator-fan relay coil; diagnostic 51 commands PP2/PWM2. The fan motor has a separate supply circuit.'),
 'Y/B': ('Headlight-relay control', [16], 'Function corroborated',
         'Manual Y/B runs to the headlight relay coil; diagnostic 52 commands PP4/PWM4. The board driver is not identified.'),
 'R/L': ('Fuel-injection relay output / system supply', [63], 'Candidate association',
         'Manual R/L supplies ECU, injector and fuel pump from the fuel-injection relay. ATD4/PAD4 monitors fuel-system supply; assigning this terminal to that divider remains a candidate, not a continuity result.'),
 'B': ('Harness ground', [], 'Internal rail',
       'The diagram connects ECU B to ground. The division between power, digital and analog grounds inside the ECU is not established.'),
}

def build_connector(pins, generator_path):
    slots=[]
    for row,wires in ROWS:
        for col,wire in enumerate(wires,1):
            if wire=='X':
                role,refs,status,note=('Cross-marked position',[],'No connection shown',
                    'Cross-marked in the manual pictogram. This does not establish whether a physical contact is fitted or internally connected.')
            else: role,refs,status,note=CIRCUITS[wire]
            slots.append(dict(position=f'{row[0]}{col:02}',row=row,column=col,
                wire=None if wire=='X' else wire,role=role,mcu_package_pins=refs,
                association=status,path=note,oem_cavity_number=None,
                continuity_verified=False,source_pdf_pages=[462]))
    for pin in pins:
        pin['ecu_connector_positions']=[dict(position=s['position'],row=s['row'],column=s['column'],
            wire=s['wire'],association=s['association']) for s in slots if pin['pin'] in s['mcu_package_pins']]
        if pin['ecu_connector_positions'] and not pin['xt_wire']:
            pin['xt_wire']='; '.join(f"{s['wire']} at {s['position']} in the manual drawing ({s['association'].lower()})" for s in pin['ecu_connector_positions'])
    return dict(source_title='Yamaha XT660R/X 2004 service manual 5VK1-AE1',source_url=XT,
        source_pdf_pages=[345,362,379,458,462],
        target_scope='Manual reference for 2004 XT660R/X, correlated with the supplied 2005-labelled image; exact ECU part number is unconfirmed.',
        orientation='As drawn in the manual, with the small tab symbol above. The inspected drawing does not state mating-face versus wire-entry view. Do not mirror or assign OEM numbers without establishing that view.',
        coordinate_policy='U01-U13 and L01-L13 mean upper/lower row, counted left to right in the printed drawing. They are research coordinates, not Yamaha cavity numbers.',
        link_policy='Function corroborated joins the manual circuit to a firmware diagnostic identity. Candidate association is weaker. No connector-to-MCU board continuity has been measured.',
        generator_sha256=hashlib.sha256(generator_path.read_bytes()).hexdigest(),slots=slots)

def connector_svg(connector):
    esc=html.escape
    out=['<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1040 235" role="img" aria-label="ECU connector wire positions as drawn in Yamaha manual">',
        '<rect width="1040" height="235" rx="12" fill="#122631"/>',
        '<text x="24" y="28" fill="#d4e3eb" font-family="sans-serif" font-size="15">Manual drawing orientation · U/L labels are research coordinates, not OEM cavity numbers</text>',
        '<path d="M495 57V43H545V57" fill="none" stroke="#9eb5c2" stroke-width="3"/>']
    for slot in connector['slots']:
        x=32+(slot['column']-1)*75;y=62 if slot['row']=='Upper' else 140
        color='#274654' if slot['wire'] else '#1b303b'
        out.extend([f'<g class="connector-slot" data-connector="{slot["position"]}" role="button" tabindex="0" aria-label="{esc(slot["position"]+": "+(slot["wire"] or "cross-marked")+", "+slot["role"])}">',
            f'<rect x="{x}" y="{y}" width="72" height="68" rx="4" fill="{color}" stroke="#7895a6"/>',
            f'<text x="{x+36}" y="{y+22}" text-anchor="middle" fill="#a8c3d1" font-family="sans-serif" font-size="13">{slot["position"]}</text>',
            f'<text x="{x+36}" y="{y+51}" text-anchor="middle" fill="#ffffff" font-family="sans-serif" font-size="20">{esc(slot["wire"] or "×")}</text></g>'])
    out.append('</svg>')
    return '\n'.join(out)

def write_connector_doc(connector,pins,out):
    by_pin={p['pin']:p for p in pins}
    lines=['# XT ECU connector positions and MCU function links','',
        'The earlier overview left every connector cavity field blank. The manual does not print OEM cavity numbers, but it does provide a two-row wire-position pictogram. Omitting those recoverable positions was incomplete. This inventory accounts for all 26 drawn positions: 23 wire-labelled and three cross-marked.','',
        connector['target_scope'],'',connector['orientation'],'',connector['coordinate_policy'],'',
        '![ECU connector positions as drawn](ecu_connector.svg)','',
        '[Open the interactive connector and MCU reference](MCU_PIN_OVERVIEW.html#ecu-connector)','',
        '## What each link establishes','',connector['link_policy'],'',
        'A harness terminal may reach an ADC through conditioning, drive a transistor controlled by a GPIO, or join a supply/ground network serving several circuits. Package pin numbers below remain conditional on the MC9S12T64 80-pin identification. The external drawing cannot identify the intervening PCB components or make these direct electrical connections.','',
        '| Drawing position | Wire | External circuit | Related MCU signal / package pin | Link evidence |',
        '|---|---|---|---|---|']
    for s in connector['slots']:
        refs=', '.join(f"{by_pin[n]['signal']} / {n}" for n in s['mcu_package_pins']) or ('Internal rail; exact MCU joins untraced' if s['association']=='Internal rail' else 'Not established')
        lines.append(f"| {s['position']} ({s['row'].lower()} {s['column']}) | {s['wire'] or 'Cross'} | {s['role']} | {refs} | {s['association']} |")
    lines+=['','## Circuit paths and limits','']
    for s in connector['slots']:
        if not s['wire']:continue
        lines += [f"### {s['position']} - {s['wire']} - {s['role']}",'',s['path'],'']
        for n in s['mcu_package_pins']:
            p=by_pin[n]
            lines+= [f"Related MCU function: **{p['signal']}**, conditional package pin **{n}**; {s['association'].lower()}. Firmware anchors: "+', '.join('`'+a+'`' for a in p['evidence'])+'.','']
    lines+=['## Sources and reproducibility','',
        f"[Yamaha 5VK1-AE1 service manual]({XT}#page=462): PDF page 462 shows the connector pictogram and circuits; page 458 gives the circuit/color legend; page 345 is the fuel-injection wiring view. Page 362 identifies the neutral route; page 379 identifies Br/R and R/W at the air-induction solenoid. These two solenoid test-probe callouts are not ECU cavity numbers.",'',
        'The redraw and inventory are transcribed visual positions, not a newly numbered physical connector. The OEM numbering and face convention remain unresolved. A matching connector drawing with that convention can resolve them without requiring firmware changes. Unresolved internal signal routes need the matching ECU PCB or an equivalent circuit schematic.','',
        'Regenerate with `python scripts/build_pin_overview.py`; verify with `python scripts/verify_pin_overview.py`. Structured connector records are included in [mcu_pin_overview.json](mcu_pin_overview.json).','']
    (out/'ECU_CONNECTOR.md').write_text('\n'.join(lines)+'\n',encoding='utf-8',newline='\n')
    (out/'ecu_connector.svg').write_text(connector_svg(connector),encoding='utf-8',newline='\n')
