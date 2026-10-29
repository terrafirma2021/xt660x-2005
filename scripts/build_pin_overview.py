"""Build the conditional MCU pin reference from explicit, reviewable assignments."""
import csv
import hashlib
import html
import json
from pathlib import Path
from ecu_connector import build_connector, connector_svg, write_connector_doc

ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/'analysis/semantics'
MCU='https://www.nxp.com/docs/en/data-sheet/9S12T64AF16V1.pdf'
XT='https://scootertuub.nl/motoren/Yamaha/Yamaha%20XT%20660%20R%20X%202004%20Service%20Manual%20%20.pdf'
TDM='https://biker.ee/manuals/yamaha/Yamaha-TDM900-2002-2007_Workshop_Service_Repair_Manual.pdf'
# Figure 11, PDF page 60, visually checked. Pin 1 is bottom-left in this view.
names=('PT2/IOC2 PT3/IOC3 PT4/IOC4 PT5/IOC5 PT6/IOC6 PT7/IOC7 BKGD/MODC/TAGHI/SI '
       'SCKBDM/SPIMODE SO VDD1 VSS1 PP0/PWM0 PP1/PWM1 PP2/PWM2 PP3/PWM3 PP4/PWM4 '
       'PP5/PWM5 PP6/PWM6 PP7/PWM7 PB0 PB1 PB2 PB3 PB4 PB5 PB6 PB7 RESET EXTAL XTAL '
       'VSSPLL XFC VDDPLL VDDR VSSR PK7/ROMONE/ECS PE0/XIRQ PE1/IRQ PE2/RW PE3/LSTRB/TAGLO '
       'PE4/ECLK PE5/MODA/IPIPE0 PE6/MODB/IPIPE1 PE7/NOACC/XCLKS PA0 PA1 PA2 PA3 PA4 '
       'VDD2 VSS2 PA5 PA6 PA7 VDDA VRH VRL VSSA PAD0/AN0 PAD1/AN1 PAD2/AN2 PAD3/AN3 '
       'PAD4/AN4 PAD5/AN5 PAD6/AN6 PAD7/AN7/ETRIG PS0/RxD0 PS1/TxD0 PS2/RxD1 PS3/TxD1 '
       'PS4/MISO PS5/MOSI PS6/SCK PS7/SS VREGEN VSSX VDDX TEST PT0/IOC0 PT1/IOC1').split()
assert len(names)==80
pins=[dict(pin=i,signal=n,category='unresolved',status='Unassigned',role='Application role not established',
           function='Do not interpret an unassigned pin as unused or unconnected.',register=None,
           evidence=[],ram=[],diagnostic=None,xt_wire=None,ecu_connector_cavity=None)
      for i,n in enumerate(names,1)]
def assign(pin,category,status,role,function,register=None,evidence=(),ram=(),diagnostic=None,wire=None):
    pins[pin-1].update(category=category,status=status,role=role,function=function,register=register,
                       evidence=[f'0x{a:04X}' for a in evidence],ram=[f'0x{a:04X}' for a in ram],
                       diagnostic=diagnostic,xt_wire=wire)

assign(59,'sensor','Corroborated','Throttle position (TPS)',
       'Measures throttle opening. Learned closed position and filtered relative opening select fuel/spark maps and transient corrections.',
       'ATD channel 0; ATDCTL5 0x0085',(0x6996,0x651f),(0x8d0,0x8ce,0x8e8,0xae9),1,'Y (yellow), signal at ECU; L supply and B/L return shown in XT diagram')
assign(60,'sensor','Corroborated','Intake manifold pressure (MAP)',
       'Measures intake pressure for load, fueling and pressure-based engine-cycle recognition. Processed load is not identical to raw manifold pressure.',
       'ATD channel 1',(0x6aa5,0x652b,0xea7f),(0xca2,0xc90,0xaea),3,'P/W (pink/white), signal at ECU')
assign(61,'sensor','Candidate','Oxygen-feedback candidate',
       'ADC handler updates feedback eligibility state. An oxygen-sensor role is plausible, but the 2004 XT reference diagram has no O2 sensor. TDM has one; the pin correspondence is unproved.',
       'ATD channel 2',(0x6af6,0x6bb3),(0x8dc,0x9a1))
assign(62,'sensor','Corroborated','Intake air temperature (IAT)',
       'Thermistor conversion supplies air-temperature fuel corrections and diagnostic temperature. A fault substitutes ROM byte 0x4E65.',
       'ATD channel 3',(0x6fc2,0x7040,0x7060),(0x8f5,0xaeb),5,'Br/W (brown/white), signal at ECU; B/L return')
assign(63,'sensor','Corroborated','Fuel-system supply monitor',
       'Monitors conditioned fuel-system voltage for fault detection, injector compensation and dwell calculations. This MCU input is behind a divider/protection circuit, not a battery terminal.',
       'ATD channel 4',(0x6c5e,0x6577),(0xbce,0x8d9,0xaec),9)
assign(64,'sensor','Corroborated','Lean-angle / tip-over sensor',
       'Detects an overturned motorcycle and participates in the fuel/ignition shutdown logic. This is not a continuous lean-angle tuning measurement.',
       'ATD channel 5',(0x71eb,0x6563),(0x8dd,),8,'Y/G (yellow/green), signal at ECU')
assign(65,'sensor','Corroborated','Coolant temperature (ECT)',
       'Thermistor conversion drives warm-up fueling, temperature-dependent limits and fan decisions. Measured and effective/fault-substituted temperature are separate.',
       'ATD channel 6',(0x70a3,0x711b,0x714f),(0x8f6,0x8f4,0xae8),6,'G/R (green/red), signal at ECU; B/L return')
assign(66,'sensor','Unassigned','Additional analog channel',
       'A handler stores raw/initial analog words, but channel 7 is absent from the normal repeating scan. TDM atmospheric pressure is a comparison lead, not an identification of this pin.',
       'ATD channel 7',(0x707c,0x68e9),(0x8d2,0x8d4,0xbfc))
assign(80,'sensor','Corroborated','Crank-position sensor (CPS)',
       'Conditioned crank pulses feed gap synchronization, engine speed and spark/injection timing. Normal firmware cadence supports wasted spark; mechanical TDC offset remains unconfirmed.',
       'PTIT 0x00E1 bit1; TC1 0x0052',(0x536c,0xd871,0xd8d3),(0xaf0,0xc04,0xa2e,0xa44),None,'Gy (gray) at ECU; G/W sensor return joins B/L in harness. Raw sensor wire colors differ across the harness.')
assign(1,'sensor','Corroborated','Vehicle-speed pulses',
       'Counts transmission/road-speed pulses for diagnostic display, speed-dependent gates and fault handling. Separate from crank RPM.',
       'PTIT 0x00E1 bit2; TC2 0x0054',(0xf3f3,0xf3fb),(0xab0,0xabe,0xae3),7,'W (white) in ECU-side XT harness; sensor-side colors differ')
assign(20,'digital','Corroborated','Sidestand / start-interlock input',
       'PB0 is filtered into 0x0896 bit0, then diagnostic 20 reports it. The external relay/interlock network matters; it need not be a direct wire from the switch.',
       'PORTB 0x0001 bit0',(0x8b45,0x8b57,0x6583),(0x896,),20)
assign(24,'digital','Corroborated','Neutral input',
       'PB4 is filtered into 0x0896 bit4. For stock variant 9 diagnostic 21 reports that bit; other variants substitute a fixed diagnostic response.',
       'PORTB 0x0001 bit4',(0x8b45,0x6599,0x65a0),(0x896,),21)
assign(21,'digital','Candidate','Starter-request input candidate',
       'Filtered PB1 is debounced into 0x0880 bit0. Variant 9 treats low as active; other variants reverse the polarity. This state participates in fault-19 qualification and headlight suppression, supporting a starter-request role. L/W is a candidate external association, not a measured board connection.',
       'PORTB 0x0001 bit1',(0xcbef,0xcbf6,0x8b8d,0x9dc0),(0x896,0x880,0xb05,0xb06))
assign(2,'actuator','Corroborated','Ignition-coil driver command',
       'Timer output commands coil dwell and release through the ECU power driver. The MCU output is high during modeled dwell and clears for release; coil-terminal voltage is a different signal.',
       'PT3 / TC3 0x0056',(0xb900,0xef50,0xefde),(0xa82,0xa96,0xaa4),30,'O (orange), coil control at ECU; R/B coil supply')
assign(5,'actuator','Corroborated','Primary fuel-injector command',
       'Timer channel 6 schedules the injector pulse after fuel-map calculations and corrections. External power-driver stage lies between MCU and injector.',
       'PT6 / TC6 0x005C',(0xb97f,0xf519,0xc55b),(0x92a,0xb72),36,'R/B (red/black), injector control at ECU; R/L injector supply')
assign(6,'actuator','Decoded','Secondary injector code path',
       'Diagnostic 37 can operate TC7. Stock variant 9 skips normal second-injector scheduling. TDM diagnostic 37 identifies injector #2, but XT board population and TDM MCU routing are unknown.',
       'PT7 / TC7 0x005E',(0xba06,0xf592,0xc712),(0x92c,),37)
assign(47,'actuator','Corroborated','Fuel-injection system relay command',
       'Diagnostic 50 and normal priming/run logic operate PA2. Controls fuel-system power through a relay driver, not the fuel pump motor directly. Diagnostic activation clears the MCU bit.',
       'PORTA 0x0000 bit2',(0xbb23,0xbb41,0xacd9,0xace6),(),50)
assign(13,'actuator','Corroborated','Air-induction solenoid command',
       'Controls the secondary-air system used in the exhaust/emissions path. This is distinct from the throttle body and from a TDM intake solenoid.',
       'PTP 0x00F0 bit1',(0xbac3,0xbae5,0x9d51),(),48,'Br/R (brown/red), control at ECU; R/W supply')
assign(14,'actuator','Corroborated','Radiator-fan relay command',
       'Normal coolant hysteresis and fault/diagnostic overrides command the fan relay. It does not directly supply motor current.',
       'PTP 0x00F0 bit2',(0x71c5,0x71ca,0xbb7b),(),51)
assign(16,'actuator','Corroborated','Headlight-relay command',
       'Commands the headlight relay in normal logic and diagnostic 52.',
       'PTP 0x00F0 bit4',(0x9dc5,0x9dca,0xbbd7),(),52)
assign(12,'actuator','Decoded','Variant-gated auxiliary output',
       'PP0 is forced low in normal variant-9 operation. Other variants use speed thresholds; diagnostic selector 57 can toggle it. TDM intake-solenoid diagnostic is 49, so do not label this output as that solenoid.',
       'PTP 0x00F0 bit0',(0xad00,0xad14,0xad19,0xbc0e,0xbc17),(),57)
assign(4,'internal','Candidate','Ignition monitoring capture',
       'Timer-5 capture flag is tested in the ignition fault path. Likely feedback from a driver/monitor circuit; not evidence of a second spark-coil output.',
       'PT5 / TFLG1 0x004E bit5',(0x5364,0xddab,0xde09))
assign(69,'communication','Decoded','Dashboard/immobilizer serial RX',
       'SCI1 receives request bytes for dashboard diagnostics and immobilizer exchange. A possible external K-line connection needs transceiver tracing.',
       'SCI1 data 0x00D7',(0x5073,0xcdc0))
assign(70,'communication','Decoded','Dashboard/immobilizer serial TX',
       'SCI1 sends five-byte ECU replies. MCU logic-level TX is not the external harness voltage.',
       'SCI1 data 0x00D7',(0xcca9,0xcdbb))
for pin,label in [(71,'SPI data input'),(72,'SPI data output'),(73,'SPI clock')]:
    assign(pin,'communication','Decoded',label,'SPI participates in persistent-storage transactions; external device type and board routing are not established.',
           'SPI 0x00D8-0x00DD',(0x5077,0x57b4))
assign(15,'internal','Decoded','Storage transaction select/strobe',
       'PP3 is asserted around SPI/storage transactions and cleared on completion/error paths. Active electrical behavior and memory chip identity require board confirmation.',
       'PTP 0x00F0 bit3',(0x57b4,0x57e3,0x5866))
for pin,bit in [(39,2),(40,3)]:
    assign(pin,'internal','Decoded','Analog-bank selection bit '+str(bit-2),
           'Firmware cycles PE2/PE3 through four states during ADC acquisition. ADC6/7 startup samples are retained separately for each state. External multiplexing/conditioning topology is unresolved.',
           f'PORTE 0x0008 bit{bit}',(0x56d0,0x56e7,0x56fb,0x5755,0x5784))
assign(49,'internal','Candidate','Periodic service/watchdog candidate',
       'PA4 is toggled by a recurring service helper. An external watchdog-service role is plausible, not board-proven.',
       'PORTA 0x0000 bit4',(0x5fac,0x5fb0,0x5fb5))
assign(19,'internal','Decoded','Memory-test status/enable output',
       'PP7 is cleared around ROM/RAM checks and set on successful paths. The destination circuit and any output-enable effect are unknown.',
       'PTP 0x00F0 bit7',(0xa489,0xa4db,0xa507,0xa53f))
assign(27,'internal','Unassigned','Timed digital output',
       'PB7 is toggled using counters. External purpose has not been established; do not label it tachometer solely from waveform-like code.',
       'PORTB 0x0001 bit7',(0xcb8b,0xcb8f,0xcbad))
for pin,bit,entry in [(45,0,0xc57a),(46,1,0xc731)]:
    assign(pin,'internal','Unassigned','Injector-path readback / control bit',
           'Read in an injector scheduling/monitoring path, but configured as a GPIO output at startup. It is not yet a proven external feedback-sensor input.',
           f'PORTA 0x0000 bit{bit}',(0x501e,entry))
for pin in [10,11,50,51,55,56,57,58,31,33,34,35,75,76,77]:
    assign(pin,'power','Datasheet',names[pin-1],
           'MCU supply, return, reference or regulator-control function from the package specification. Actual board rails and connections require inspection. Core supply pins are not accessory-power outputs.')
for pin in [7,8,9,28,29,30,32,36,37,38,41,42,43,44,78]:
    if pins[pin-1]['status']=='Unassigned':
        assign(pin,'internal','Datasheet',names[pin-1],
               'Package clock, reset, debug, test, mode or alternate-function signal. Application-specific board use is not established; missing boot code may configure it.')

sources=[dict(id='mcu',title='NXP MC9S12T64 revision 1.1.1',url=MCU,pdf_pages=[60,86,251,253,385]),
         dict(id='xt',title='Yamaha XT660R/X 2004 service manual',url=XT,pdf_pages=[345,353,354,355,361,362,379,397,458,462]),
         dict(id='tdm',title='Yamaha TDM900 service manual',url=TDM,pdf_pages=[365,373])]
comparison=[
    ['TPS, MAP, IAT, coolant, lean angle, vehicle speed, CPS','Listed in XT reference','Also listed in TDM reference','Same function does not establish the same MCU or connector pin.'],
    ['Oxygen sensor','Not shown in the 2004 XT diagram used here','Explicitly fitted in TDM reference','AN2 remains an oxygen-feedback candidate; XT model/year variants must be distinguished.'],
    ['Atmospheric-pressure sensor','No separate sensor shown','Separate sensor listed','Do not equate unresolved AN7 with this sensor without a trace.'],
    ['Cylinder-identification sensor','No separate sensor shown; code has pressure-based cycle alignment','Separate sensor listed','No TDM cam-sensor MCU pin has been recovered from this XT image.'],
    ['Injectors','One normal output; variant 9 suppresses secondary entry','Two injectors; diagnostics 36/37','PT7 code is compatible with a second-injector family feature, not proof of a populated XT driver.'],
    ['Ignition coils','One coil; diagnostic 30','Two coils; diagnostics 30/31','This image has no selector 31 in its copied diagnostic list; no second-coil MCU output is established.'],
    ['Intake solenoid','No equivalent established','Separate from AI; diagnostic 49','Unidentified PP0 uses selector 57; the diagnostic mismatch prevents assigning it as the TDM intake solenoid.'],
    ['Start, stop and clutch switches','Present in vehicle wiring/interlock network','Present in vehicle wiring/interlock network','Do not assume each has a dedicated MCU input; individual mappings remain unconfirmed.'],
]

def build():
    image=(ROOT/'firmware/XT660X 2005.bin').read_bytes()
    dis=list(csv.DictReader((ROOT/'analysis/disassembly.tsv').open(),delimiter='\t'))
    by_pc={int(r['address'],16):r for r in dis}
    for p in pins:
        p['evidence_instructions']=[by_pc[int(a,16)] for a in p['evidence']]
    connector=build_connector(pins,ROOT/'scripts/ecu_connector.py')
    write_connector_doc(connector,pins,OUT)
    report=dict(schema_version=2,firmware_sha256=hashlib.sha256(image).hexdigest(),
        generator_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),
        template_sha256=hashlib.sha256((ROOT/'scripts/pin_overview_template.html').read_bytes()).hexdigest(),
        target='Supplied XT660X 2005 image; variant 9',
        package_assumption='MC9S12T64 80-pin LQFP, top view, conditional on physical chip identification. CPU/register evidence fits this family; chip marking has not been supplied.',
        connector_policy='All 26 manual connector positions are inventoried separately using upper/lower drawing coordinates. OEM cavity numbers and view-side convention are not printed; function links are not measured board continuity.',
        ecu_connector=connector,
        tdm_policy='TDM comparison is by manufacturer-described functions. No TDM binary or board trace is available to prove an MCU pin-for-pin mapping.',
        pins=pins,sources=sources,model_comparison=comparison)
    (OUT/'mcu_pin_overview.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8',newline='\n')
    lines=['# XT660X MCU pin overview and TDM comparison','',
           '**80-pin MC9S12T64 reference, conditional on confirming the chip marking.** The firmware/register map supports this family; actual package identity has not been verified. Pin numbers below refer to the MCU, never the ECU connector.','',
           '[Interactive overview](MCU_PIN_OVERVIEW.html) | [ECU connector positions](ECU_CONNECTOR.md) | [Machine-readable catalogue](mcu_pin_overview.json) | [Package drawing](mcu_pin_overview.svg)','',
           'The [ECU connector inventory](ECU_CONNECTOR.md) now accounts for the manual drawing\'s 26 positions, including the 23 wire-labelled positions and three crosses. Fourteen circuits have corroborated MCU function links; four have candidate associations; five identify power/return networks with untraced internal joins. These are function associations through board circuitry, not direct-wire claims.','',
           'The overview covers all 80 package positions. Corroborated means firmware dataflow plus Yamaha diagnostic identity; Decoded means a software role is established; Candidate means a physical role is tentative. Datasheet entries identify package functions only. Unassigned does not mean unused.','',
           '## Sensors and switch inputs','',
           '| MCU pin | Signal | Function | Status | Diagnostic |','|---:|---|---|---|---|']
    for p in pins:
        if p['category'] in ['sensor','digital']:
            lines.append(f"| {p['pin']} | {p['signal']} | {p['role']} | {p['status']} | {p['diagnostic'] if p['diagnostic'] is not None else '-'} |")
    lines+=['','ADC channel selection comes from ATDCTL5, not the ATDDR result-register number. External conditioning lies between the harness and MCU. PE2/PE3 also select analog-bank states in startup acquisition, so an ADC pin label does not prove a direct one-wire connection to the sensor.','',
            '## Outputs and communication','', '| MCU pin | Signal | Function | Status |','|---:|---|---|---|']
    for p in pins:
        if p['category'] in ['actuator','communication']:
            lines.append(f"| {p['pin']} | {p['signal']} | {p['role']} | {p['status']} |")
    lines+=['','The MCU commands driver electronics. Injector, coil, relay and battery voltages must not be treated as voltages on these MCU pins. This is a tracing reference, not a connector wiring adapter.','',
            '## XT and TDM differences','', '| Item | XT reference / supplied image | TDM reference | Consequence |','|---|---|---|---|']
    lines+=['| '+' | '.join(row)+' |' for row in comparison]
    lines+=['','## Function-by-function notes','']
    for p in pins:
        if p['evidence']:
            lines += [f"### Pin {p['pin']} - {p['signal']} - {p['role']}",'',p['function'],'',
                      f"Status: **{p['status']}**. Register/channel: `{p['register']}`.",'',
                      'Instruction anchors: '+', '.join('`'+a+'`' for a in p['evidence'])+'.','']
            if p['ram']:lines+=['Useful runtime RAM: '+', '.join('`'+a+'`' for a in p['ram'])+'.','']
            if p['xt_wire']:lines+=['XT manual wire reference: '+p['xt_wire']+'. This is a harness reference, not a measured MCU-to-connector continuity result.','']
            if p['ecu_connector_positions']:
                lines+=['ECU drawing position: '+ '; '.join(f"**{s['position']}**, {s['row'].lower()} row position {s['column']}, wire {s['wire']} ({s['association'].lower()})" for s in p['ecu_connector_positions'])+'. See [connector orientation and paths](ECU_CONNECTOR.md).','']
    lines+=['## Complete package inventory','', '| MCU pin | Package signal | Recorded role | Status |','|---:|---|---|---|']
    lines += [f"| {p['pin']} | {p['signal']} | {p['role']} | {p['status']} |" for p in pins]
    lines+=['','## What is still needed for a board pinout','',
            'The manual supports the [wire-position inventory](ECU_CONNECTOR.md), which is now recorded. A matching connector face convention and OEM numbering are still needed to translate those drawing coordinates into numbered physical cavities. Chip marking and board tracing establish the exact package and internal conditioning/driver routes. A TDM binary/board is needed for its own assignments.','',
            '## Sources and reproduction','']
    lines += [f"- [{s['title']}]({s['url']}), PDF pages "+', '.join(map(str,s['pdf_pages']))+'.' for s in sources]
    lines+=['- Supplied image, instruction bytes and [hardware/diagnostic derivation](IO_AND_DIAGNOSTICS.md).',
            '- [Crank path](CRANK_REFERENCE.md), [sensor scales](TEMPERATURE_PROFILE.md), [serial link](K_LINE.md), [variant behavior](VARIANTS.md).','',
            'Run `python scripts/build_pin_overview.py` to regenerate Markdown, JSON, SVG and HTML. Run `python scripts/verify_pin_overview.py` to check coverage, assignments and instruction-byte provenance.','']
    (OUT/'MCU_PIN_OVERVIEW.md').write_text('\n'.join(lines),encoding='utf-8',newline='\n')
    render(report)
    print('Built 80-pin overview, with '+str(sum(bool(p['evidence']) for p in pins))+' entries linked to firmware instructions.')

COLORS={'sensor':'#147d92','digital':'#147d92','actuator':'#c86027','communication':'#5863bd','internal':'#728092','power':'#b63d57','unresolved':'#aab4bd'}
def render(report):
    esc=html.escape
    svg=['<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 960 850" role="img" aria-label="Conditional MC9S12T64 80-pin top-view pin reference">',
         '<rect width="960" height="850" fill="#f5f7fa"/>',
         '<text x="40" y="42" font-family="sans-serif" font-size="22" font-weight="bold" fill="#203247">XT660X - conditional MCU package reference</text>',
         '<text x="40" y="70" font-family="sans-serif" font-size="14" fill="#58697b">MC9S12T64 / 80-pin LQFP / TOP VIEW / MCU numbers, not ECU connector cavities</text>',
         '<rect x="280" y="240" width="400" height="400" rx="12" fill="#203247"/>',
         '<circle cx="297" cy="622" r="7" fill="#f8fafc"/>',
         '<text x="480" y="420" text-anchor="middle" font-family="sans-serif" font-size="27" fill="white">MC9S12T64</text>',
         '<text x="480" y="451" text-anchor="middle" font-family="sans-serif" font-size="18" fill="#bdcede">80-pin LQFP</text>',
         '<text x="480" y="486" text-anchor="middle" font-family="sans-serif" font-size="13" fill="#bdcede">Package identity requires chip marking</text>']
    for p in pins:
        n=p['pin'];label=str(n)+' '+p['signal'].split('/')[0];color=COLORS[p['category']]
        if n<=20:
            x=290+(n-1)*20;y=640;rect=f'x="{x-6}" y="{y}" width="12" height="22"';tx=x;ty=673;rot=90;anchor='start'
        elif n<=40:
            x=680;y=630-(n-21)*20;rect=f'x="{x}" y="{y-6}" width="22" height="12"';tx=711;ty=y+4;rot=0;anchor='start'
        elif n<=60:
            x=670-(n-41)*20;y=218;rect=f'x="{x-6}" y="{y}" width="12" height="22"';tx=x+4;ty=208;rot=-90;anchor='start'
        else:
            x=258;y=250+(n-61)*20;rect=f'x="{x}" y="{y-6}" width="22" height="12"';tx=249;ty=y+4;rot=0;anchor='end'
        svg.append(f'<g class="pin" data-pin="{n}" tabindex="0" role="button" aria-label="{esc(label+": "+p["role"])}"><title>{esc(p["role"]+" - "+p["status"])}</title><rect {rect} fill="{color}"/><text x="{tx}" y="{ty}" transform="rotate({rot} {tx} {ty})" text-anchor="{anchor}" font-family="sans-serif" font-size="12" fill="#203247">{esc(label)}</text></g>')
    svg+=['<text x="40" y="802" font-family="sans-serif" font-size="14" fill="#58697b">Dot marks pin-1 corner. Trace external conditioning and drivers before assigning connector wiring.</text>','</svg>']
    svgt='\n'.join(svg);(OUT/'mcu_pin_overview.svg').write_text(svgt,encoding='utf-8',newline='\n')
    template=(ROOT/'scripts/pin_overview_template.html').read_text(encoding='utf-8')
    page=template.replace('@@SVG@@',svgt).replace('@@CONNECTOR@@',connector_svg(report['ecu_connector'])).replace('@@DATA@@',json.dumps(report).replace('</','<\\/'))
    (OUT/'MCU_PIN_OVERVIEW.html').write_text(page,encoding='utf-8',newline='\n')

if __name__=='__main__':build()
