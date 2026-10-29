# XT660X MCU pin overview and TDM comparison

**80-pin MC9S12T64 reference, conditional on confirming the chip marking.** The firmware/register map supports this family; actual package identity has not been verified. Pin numbers below refer to the MCU, never the ECU connector.

[Interactive overview](MCU_PIN_OVERVIEW.html) | [Machine-readable catalogue](mcu_pin_overview.json) | [Package drawing](mcu_pin_overview.svg)

The overview covers all 80 package positions. Corroborated means firmware dataflow plus Yamaha diagnostic identity; Decoded means a software role is established; Candidate means a physical role is tentative. Datasheet entries identify package functions only. Unassigned does not mean unused.

## Sensors and switch inputs

| MCU pin | Signal | Function | Status | Diagnostic |
|---:|---|---|---|---|
| 1 | PT2/IOC2 | Vehicle-speed pulses | Corroborated | 7 |
| 20 | PB0 | Sidestand / start-interlock input | Corroborated | 20 |
| 24 | PB4 | Neutral input | Corroborated | 21 |
| 59 | PAD0/AN0 | Throttle position (TPS) | Corroborated | 1 |
| 60 | PAD1/AN1 | Intake manifold pressure (MAP) | Corroborated | 3 |
| 61 | PAD2/AN2 | Oxygen-feedback candidate | Candidate | - |
| 62 | PAD3/AN3 | Intake air temperature (IAT) | Corroborated | 5 |
| 63 | PAD4/AN4 | Fuel-system supply monitor | Corroborated | 9 |
| 64 | PAD5/AN5 | Lean-angle / tip-over sensor | Corroborated | 8 |
| 65 | PAD6/AN6 | Coolant temperature (ECT) | Corroborated | 6 |
| 66 | PAD7/AN7/ETRIG | Additional analog channel | Unassigned | - |
| 80 | PT1/IOC1 | Crank-position sensor (CPS) | Corroborated | - |

ADC channel selection comes from ATDCTL5, not the ATDDR result-register number. External conditioning lies between the harness and MCU. PE2/PE3 also select analog-bank states in startup acquisition, so an ADC pin label does not prove a direct one-wire connection to the sensor.

## Outputs and communication

| MCU pin | Signal | Function | Status |
|---:|---|---|---|
| 2 | PT3/IOC3 | Ignition-coil driver command | Corroborated |
| 5 | PT6/IOC6 | Primary fuel-injector command | Corroborated |
| 6 | PT7/IOC7 | Secondary injector code path | Decoded |
| 12 | PP0/PWM0 | Variant-gated auxiliary output | Decoded |
| 13 | PP1/PWM1 | Air-induction solenoid command | Corroborated |
| 14 | PP2/PWM2 | Radiator-fan relay command | Corroborated |
| 16 | PP4/PWM4 | Headlight-relay command | Corroborated |
| 47 | PA2 | Fuel-injection system relay command | Corroborated |
| 69 | PS2/RxD1 | Dashboard/immobilizer serial RX | Decoded |
| 70 | PS3/TxD1 | Dashboard/immobilizer serial TX | Decoded |
| 71 | PS4/MISO | SPI data input | Decoded |
| 72 | PS5/MOSI | SPI data output | Decoded |
| 73 | PS6/SCK | SPI clock | Decoded |

The MCU commands driver electronics. Injector, coil, relay and battery voltages must not be treated as voltages on these MCU pins. This is a tracing reference, not a connector wiring adapter.

## XT and TDM differences

| Item | XT reference / supplied image | TDM reference | Consequence |
|---|---|---|---|
| TPS, MAP, IAT, coolant, lean angle, vehicle speed, CPS | Listed in XT reference | Also listed in TDM reference | Same function does not establish the same MCU or connector pin. |
| Oxygen sensor | Not shown in the 2004 XT diagram used here | Explicitly fitted in TDM reference | AN2 remains an oxygen-feedback candidate; XT model/year variants must be distinguished. |
| Atmospheric-pressure sensor | No separate sensor shown | Separate sensor listed | Do not equate unresolved AN7 with this sensor without a trace. |
| Cylinder-identification sensor | No separate sensor shown; code has pressure-based cycle alignment | Separate sensor listed | No TDM cam-sensor MCU pin has been recovered from this XT image. |
| Injectors | One normal output; variant 9 suppresses secondary entry | Two injectors; diagnostics 36/37 | PT7 code is compatible with a second-injector family feature, not proof of a populated XT driver. |
| Ignition coils | One coil; diagnostic 30 | Two coils; diagnostics 30/31 | This image has no selector 31 in its copied diagnostic list; no second-coil MCU output is established. |
| Intake solenoid | No equivalent established | Separate from AI; diagnostic 49 | Unidentified PP0 uses selector 57; the diagnostic mismatch prevents assigning it as the TDM intake solenoid. |
| Start, stop and clutch switches | Present in vehicle wiring/interlock network | Present in vehicle wiring/interlock network | Do not assume each has a dedicated MCU input; individual mappings remain unconfirmed. |

## Function-by-function notes

### Pin 1 - PT2/IOC2 - Vehicle-speed pulses

Counts transmission/road-speed pulses for diagnostic display, speed-dependent gates and fault handling. Separate from crank RPM.

Status: **Corroborated**. Register/channel: `PTIT 0x00E1 bit2; TC2 0x0054`.

Instruction anchors: `0xF3F3`, `0xF3FB`.

Useful runtime RAM: `0x0AB0`, `0x0ABE`, `0x0AE3`.

XT manual wire reference: W (white) in ECU-side XT harness; sensor-side colors differ. This is a harness reference, not a measured MCU-to-connector continuity result.

### Pin 2 - PT3/IOC3 - Ignition-coil driver command

Timer output commands coil dwell and release through the ECU power driver. The MCU output is high during modeled dwell and clears for release; coil-terminal voltage is a different signal.

Status: **Corroborated**. Register/channel: `PT3 / TC3 0x0056`.

Instruction anchors: `0xB900`, `0xEF50`, `0xEFDE`.

Useful runtime RAM: `0x0A82`, `0x0A96`, `0x0AA4`.

XT manual wire reference: O (orange), coil control at ECU; R/B coil supply. This is a harness reference, not a measured MCU-to-connector continuity result.

### Pin 4 - PT5/IOC5 - Ignition monitoring capture

Timer-5 capture flag is tested in the ignition fault path. Likely feedback from a driver/monitor circuit; not evidence of a second spark-coil output.

Status: **Candidate**. Register/channel: `PT5 / TFLG1 0x004E bit5`.

Instruction anchors: `0x5364`, `0xDDAB`, `0xDE09`.

### Pin 5 - PT6/IOC6 - Primary fuel-injector command

Timer channel 6 schedules the injector pulse after fuel-map calculations and corrections. External power-driver stage lies between MCU and injector.

Status: **Corroborated**. Register/channel: `PT6 / TC6 0x005C`.

Instruction anchors: `0xB97F`, `0xF519`, `0xC55B`.

Useful runtime RAM: `0x092A`, `0x0B72`.

XT manual wire reference: R/B (red/black), injector control at ECU; R/L injector supply. This is a harness reference, not a measured MCU-to-connector continuity result.

### Pin 6 - PT7/IOC7 - Secondary injector code path

Diagnostic 37 can operate TC7. Stock variant 9 skips normal second-injector scheduling. TDM diagnostic 37 identifies injector #2, but XT board population and TDM MCU routing are unknown.

Status: **Decoded**. Register/channel: `PT7 / TC7 0x005E`.

Instruction anchors: `0xBA06`, `0xF592`, `0xC712`.

Useful runtime RAM: `0x092C`.

### Pin 12 - PP0/PWM0 - Variant-gated auxiliary output

PP0 is forced low in normal variant-9 operation. Other variants use speed thresholds; diagnostic selector 57 can toggle it. TDM intake-solenoid diagnostic is 49, so do not label this output as that solenoid.

Status: **Decoded**. Register/channel: `PTP 0x00F0 bit0`.

Instruction anchors: `0xAD00`, `0xAD14`, `0xAD19`, `0xBC0E`, `0xBC17`.

### Pin 13 - PP1/PWM1 - Air-induction solenoid command

Controls the secondary-air system used in the exhaust/emissions path. This is distinct from the throttle body and from a TDM intake solenoid.

Status: **Corroborated**. Register/channel: `PTP 0x00F0 bit1`.

Instruction anchors: `0xBAC3`, `0xBAE5`, `0x9D51`.

XT manual wire reference: Br/R (brown/red), control at ECU; R/W supply. This is a harness reference, not a measured MCU-to-connector continuity result.

### Pin 14 - PP2/PWM2 - Radiator-fan relay command

Normal coolant hysteresis and fault/diagnostic overrides command the fan relay. It does not directly supply motor current.

Status: **Corroborated**. Register/channel: `PTP 0x00F0 bit2`.

Instruction anchors: `0x71C5`, `0x71CA`, `0xBB7B`.

### Pin 15 - PP3/PWM3 - Storage transaction select/strobe

PP3 is asserted around SPI/storage transactions and cleared on completion/error paths. Active electrical behavior and memory chip identity require board confirmation.

Status: **Decoded**. Register/channel: `PTP 0x00F0 bit3`.

Instruction anchors: `0x57B4`, `0x57E3`, `0x5866`.

### Pin 16 - PP4/PWM4 - Headlight-relay command

Commands the headlight relay in normal logic and diagnostic 52.

Status: **Corroborated**. Register/channel: `PTP 0x00F0 bit4`.

Instruction anchors: `0x9DC5`, `0x9DCA`, `0xBBD7`.

### Pin 19 - PP7/PWM7 - Memory-test status/enable output

PP7 is cleared around ROM/RAM checks and set on successful paths. The destination circuit and any output-enable effect are unknown.

Status: **Decoded**. Register/channel: `PTP 0x00F0 bit7`.

Instruction anchors: `0xA489`, `0xA4DB`, `0xA507`, `0xA53F`.

### Pin 20 - PB0 - Sidestand / start-interlock input

PB0 is filtered into 0x0896 bit0, then diagnostic 20 reports it. The external relay/interlock network matters; it need not be a direct wire from the switch.

Status: **Corroborated**. Register/channel: `PORTB 0x0001 bit0`.

Instruction anchors: `0x8B45`, `0x8B57`, `0x6583`.

Useful runtime RAM: `0x0896`.

### Pin 24 - PB4 - Neutral input

PB4 is filtered into 0x0896 bit4. For stock variant 9 diagnostic 21 reports that bit; other variants substitute a fixed diagnostic response.

Status: **Corroborated**. Register/channel: `PORTB 0x0001 bit4`.

Instruction anchors: `0x8B45`, `0x6599`, `0x65A0`.

Useful runtime RAM: `0x0896`.

### Pin 27 - PB7 - Timed digital output

PB7 is toggled using counters. External purpose has not been established; do not label it tachometer solely from waveform-like code.

Status: **Unassigned**. Register/channel: `PORTB 0x0001 bit7`.

Instruction anchors: `0xCB8B`, `0xCB8F`, `0xCBAD`.

### Pin 39 - PE2/RW - Analog-bank selection bit 0

Firmware cycles PE2/PE3 through four states during ADC acquisition. ADC6/7 startup samples are retained separately for each state. External multiplexing/conditioning topology is unresolved.

Status: **Decoded**. Register/channel: `PORTE 0x0008 bit2`.

Instruction anchors: `0x56D0`, `0x56E7`, `0x56FB`, `0x5755`, `0x5784`.

### Pin 40 - PE3/LSTRB/TAGLO - Analog-bank selection bit 1

Firmware cycles PE2/PE3 through four states during ADC acquisition. ADC6/7 startup samples are retained separately for each state. External multiplexing/conditioning topology is unresolved.

Status: **Decoded**. Register/channel: `PORTE 0x0008 bit3`.

Instruction anchors: `0x56D0`, `0x56E7`, `0x56FB`, `0x5755`, `0x5784`.

### Pin 45 - PA0 - Injector-path readback / control bit

Read in an injector scheduling/monitoring path, but configured as a GPIO output at startup. It is not yet a proven external feedback-sensor input.

Status: **Unassigned**. Register/channel: `PORTA 0x0000 bit0`.

Instruction anchors: `0x501E`, `0xC57A`.

### Pin 46 - PA1 - Injector-path readback / control bit

Read in an injector scheduling/monitoring path, but configured as a GPIO output at startup. It is not yet a proven external feedback-sensor input.

Status: **Unassigned**. Register/channel: `PORTA 0x0000 bit1`.

Instruction anchors: `0x501E`, `0xC731`.

### Pin 47 - PA2 - Fuel-injection system relay command

Diagnostic 50 and normal priming/run logic operate PA2. Controls fuel-system power through a relay driver, not the fuel pump motor directly. Diagnostic activation clears the MCU bit.

Status: **Corroborated**. Register/channel: `PORTA 0x0000 bit2`.

Instruction anchors: `0xBB23`, `0xBB41`, `0xACD9`, `0xACE6`.

### Pin 49 - PA4 - Periodic service/watchdog candidate

PA4 is toggled by a recurring service helper. An external watchdog-service role is plausible, not board-proven.

Status: **Candidate**. Register/channel: `PORTA 0x0000 bit4`.

Instruction anchors: `0x5FAC`, `0x5FB0`, `0x5FB5`.

### Pin 59 - PAD0/AN0 - Throttle position (TPS)

Measures throttle opening. Learned closed position and filtered relative opening select fuel/spark maps and transient corrections.

Status: **Corroborated**. Register/channel: `ATD channel 0; ATDCTL5 0x0085`.

Instruction anchors: `0x6996`, `0x651F`.

Useful runtime RAM: `0x08D0`, `0x08CE`, `0x08E8`, `0x0AE9`.

XT manual wire reference: Y (yellow), signal at ECU; L supply and B/L return shown in XT diagram. This is a harness reference, not a measured MCU-to-connector continuity result.

### Pin 60 - PAD1/AN1 - Intake manifold pressure (MAP)

Measures intake pressure for load, fueling and pressure-based engine-cycle recognition. Processed load is not identical to raw manifold pressure.

Status: **Corroborated**. Register/channel: `ATD channel 1`.

Instruction anchors: `0x6AA5`, `0x652B`, `0xEA7F`.

Useful runtime RAM: `0x0CA2`, `0x0C90`, `0x0AEA`.

XT manual wire reference: P/W (pink/white), signal at ECU. This is a harness reference, not a measured MCU-to-connector continuity result.

### Pin 61 - PAD2/AN2 - Oxygen-feedback candidate

ADC handler updates feedback eligibility state. An oxygen-sensor role is plausible, but the 2004 XT reference diagram has no O2 sensor. TDM has one; the pin correspondence is unproved.

Status: **Candidate**. Register/channel: `ATD channel 2`.

Instruction anchors: `0x6AF6`, `0x6BB3`.

Useful runtime RAM: `0x08DC`, `0x09A1`.

### Pin 62 - PAD3/AN3 - Intake air temperature (IAT)

Thermistor conversion supplies air-temperature fuel corrections and diagnostic temperature. A fault substitutes ROM byte 0x4E65.

Status: **Corroborated**. Register/channel: `ATD channel 3`.

Instruction anchors: `0x6FC2`, `0x7040`, `0x7060`.

Useful runtime RAM: `0x08F5`, `0x0AEB`.

XT manual wire reference: Br/W (brown/white), signal at ECU; B/L return. This is a harness reference, not a measured MCU-to-connector continuity result.

### Pin 63 - PAD4/AN4 - Fuel-system supply monitor

Monitors conditioned fuel-system voltage for fault detection, injector compensation and dwell calculations. This MCU input is behind a divider/protection circuit, not a battery terminal.

Status: **Corroborated**. Register/channel: `ATD channel 4`.

Instruction anchors: `0x6C5E`, `0x6577`.

Useful runtime RAM: `0x0BCE`, `0x08D9`, `0x0AEC`.

### Pin 64 - PAD5/AN5 - Lean-angle / tip-over sensor

Detects an overturned motorcycle and participates in the fuel/ignition shutdown logic. This is not a continuous lean-angle tuning measurement.

Status: **Corroborated**. Register/channel: `ATD channel 5`.

Instruction anchors: `0x71EB`, `0x6563`.

Useful runtime RAM: `0x08DD`.

XT manual wire reference: Y/G (yellow/green), signal at ECU. This is a harness reference, not a measured MCU-to-connector continuity result.

### Pin 65 - PAD6/AN6 - Coolant temperature (ECT)

Thermistor conversion drives warm-up fueling, temperature-dependent limits and fan decisions. Measured and effective/fault-substituted temperature are separate.

Status: **Corroborated**. Register/channel: `ATD channel 6`.

Instruction anchors: `0x70A3`, `0x711B`, `0x714F`.

Useful runtime RAM: `0x08F6`, `0x08F4`, `0x0AE8`.

XT manual wire reference: G/R (green/red), signal at ECU; B/L return. This is a harness reference, not a measured MCU-to-connector continuity result.

### Pin 66 - PAD7/AN7/ETRIG - Additional analog channel

A handler stores raw/initial analog words, but channel 7 is absent from the normal repeating scan. TDM atmospheric pressure is a comparison lead, not an identification of this pin.

Status: **Unassigned**. Register/channel: `ATD channel 7`.

Instruction anchors: `0x707C`, `0x68E9`.

Useful runtime RAM: `0x08D2`, `0x08D4`, `0x0BFC`.

### Pin 69 - PS2/RxD1 - Dashboard/immobilizer serial RX

SCI1 receives request bytes for dashboard diagnostics and immobilizer exchange. A possible external K-line connection needs transceiver tracing.

Status: **Decoded**. Register/channel: `SCI1 data 0x00D7`.

Instruction anchors: `0x5073`, `0xCDC0`.

### Pin 70 - PS3/TxD1 - Dashboard/immobilizer serial TX

SCI1 sends five-byte ECU replies. MCU logic-level TX is not the external harness voltage.

Status: **Decoded**. Register/channel: `SCI1 data 0x00D7`.

Instruction anchors: `0xCCA9`, `0xCDBB`.

### Pin 71 - PS4/MISO - SPI data input

SPI participates in persistent-storage transactions; external device type and board routing are not established.

Status: **Decoded**. Register/channel: `SPI 0x00D8-0x00DD`.

Instruction anchors: `0x5077`, `0x57B4`.

### Pin 72 - PS5/MOSI - SPI data output

SPI participates in persistent-storage transactions; external device type and board routing are not established.

Status: **Decoded**. Register/channel: `SPI 0x00D8-0x00DD`.

Instruction anchors: `0x5077`, `0x57B4`.

### Pin 73 - PS6/SCK - SPI clock

SPI participates in persistent-storage transactions; external device type and board routing are not established.

Status: **Decoded**. Register/channel: `SPI 0x00D8-0x00DD`.

Instruction anchors: `0x5077`, `0x57B4`.

### Pin 80 - PT1/IOC1 - Crank-position sensor (CPS)

Conditioned crank pulses feed gap synchronization, engine speed and spark/injection timing. Normal firmware cadence supports wasted spark; mechanical TDC offset remains unconfirmed.

Status: **Corroborated**. Register/channel: `PTIT 0x00E1 bit1; TC1 0x0052`.

Instruction anchors: `0x536C`, `0xD871`, `0xD8D3`.

Useful runtime RAM: `0x0AF0`, `0x0C04`, `0x0A2E`, `0x0A44`.

XT manual wire reference: Gy (gray) at ECU; G/W sensor return joins B/L in harness. Raw sensor wire colors differ across the harness.. This is a harness reference, not a measured MCU-to-connector continuity result.

## Complete package inventory

| MCU pin | Package signal | Recorded role | Status |
|---:|---|---|---|
| 1 | PT2/IOC2 | Vehicle-speed pulses | Corroborated |
| 2 | PT3/IOC3 | Ignition-coil driver command | Corroborated |
| 3 | PT4/IOC4 | Application role not established | Unassigned |
| 4 | PT5/IOC5 | Ignition monitoring capture | Candidate |
| 5 | PT6/IOC6 | Primary fuel-injector command | Corroborated |
| 6 | PT7/IOC7 | Secondary injector code path | Decoded |
| 7 | BKGD/MODC/TAGHI/SI | BKGD/MODC/TAGHI/SI | Datasheet |
| 8 | SCKBDM/SPIMODE | SCKBDM/SPIMODE | Datasheet |
| 9 | SO | SO | Datasheet |
| 10 | VDD1 | VDD1 | Datasheet |
| 11 | VSS1 | VSS1 | Datasheet |
| 12 | PP0/PWM0 | Variant-gated auxiliary output | Decoded |
| 13 | PP1/PWM1 | Air-induction solenoid command | Corroborated |
| 14 | PP2/PWM2 | Radiator-fan relay command | Corroborated |
| 15 | PP3/PWM3 | Storage transaction select/strobe | Decoded |
| 16 | PP4/PWM4 | Headlight-relay command | Corroborated |
| 17 | PP5/PWM5 | Application role not established | Unassigned |
| 18 | PP6/PWM6 | Application role not established | Unassigned |
| 19 | PP7/PWM7 | Memory-test status/enable output | Decoded |
| 20 | PB0 | Sidestand / start-interlock input | Corroborated |
| 21 | PB1 | Application role not established | Unassigned |
| 22 | PB2 | Application role not established | Unassigned |
| 23 | PB3 | Application role not established | Unassigned |
| 24 | PB4 | Neutral input | Corroborated |
| 25 | PB5 | Application role not established | Unassigned |
| 26 | PB6 | Application role not established | Unassigned |
| 27 | PB7 | Timed digital output | Unassigned |
| 28 | RESET | RESET | Datasheet |
| 29 | EXTAL | EXTAL | Datasheet |
| 30 | XTAL | XTAL | Datasheet |
| 31 | VSSPLL | VSSPLL | Datasheet |
| 32 | XFC | XFC | Datasheet |
| 33 | VDDPLL | VDDPLL | Datasheet |
| 34 | VDDR | VDDR | Datasheet |
| 35 | VSSR | VSSR | Datasheet |
| 36 | PK7/ROMONE/ECS | PK7/ROMONE/ECS | Datasheet |
| 37 | PE0/XIRQ | PE0/XIRQ | Datasheet |
| 38 | PE1/IRQ | PE1/IRQ | Datasheet |
| 39 | PE2/RW | Analog-bank selection bit 0 | Decoded |
| 40 | PE3/LSTRB/TAGLO | Analog-bank selection bit 1 | Decoded |
| 41 | PE4/ECLK | PE4/ECLK | Datasheet |
| 42 | PE5/MODA/IPIPE0 | PE5/MODA/IPIPE0 | Datasheet |
| 43 | PE6/MODB/IPIPE1 | PE6/MODB/IPIPE1 | Datasheet |
| 44 | PE7/NOACC/XCLKS | PE7/NOACC/XCLKS | Datasheet |
| 45 | PA0 | Injector-path readback / control bit | Unassigned |
| 46 | PA1 | Injector-path readback / control bit | Unassigned |
| 47 | PA2 | Fuel-injection system relay command | Corroborated |
| 48 | PA3 | Application role not established | Unassigned |
| 49 | PA4 | Periodic service/watchdog candidate | Candidate |
| 50 | VDD2 | VDD2 | Datasheet |
| 51 | VSS2 | VSS2 | Datasheet |
| 52 | PA5 | Application role not established | Unassigned |
| 53 | PA6 | Application role not established | Unassigned |
| 54 | PA7 | Application role not established | Unassigned |
| 55 | VDDA | VDDA | Datasheet |
| 56 | VRH | VRH | Datasheet |
| 57 | VRL | VRL | Datasheet |
| 58 | VSSA | VSSA | Datasheet |
| 59 | PAD0/AN0 | Throttle position (TPS) | Corroborated |
| 60 | PAD1/AN1 | Intake manifold pressure (MAP) | Corroborated |
| 61 | PAD2/AN2 | Oxygen-feedback candidate | Candidate |
| 62 | PAD3/AN3 | Intake air temperature (IAT) | Corroborated |
| 63 | PAD4/AN4 | Fuel-system supply monitor | Corroborated |
| 64 | PAD5/AN5 | Lean-angle / tip-over sensor | Corroborated |
| 65 | PAD6/AN6 | Coolant temperature (ECT) | Corroborated |
| 66 | PAD7/AN7/ETRIG | Additional analog channel | Unassigned |
| 67 | PS0/RxD0 | Application role not established | Unassigned |
| 68 | PS1/TxD0 | Application role not established | Unassigned |
| 69 | PS2/RxD1 | Dashboard/immobilizer serial RX | Decoded |
| 70 | PS3/TxD1 | Dashboard/immobilizer serial TX | Decoded |
| 71 | PS4/MISO | SPI data input | Decoded |
| 72 | PS5/MOSI | SPI data output | Decoded |
| 73 | PS6/SCK | SPI clock | Decoded |
| 74 | PS7/SS | Application role not established | Unassigned |
| 75 | VREGEN | VREGEN | Datasheet |
| 76 | VSSX | VSSX | Datasheet |
| 77 | VDDX | VDDX | Datasheet |
| 78 | TEST | TEST | Datasheet |
| 79 | PT0/IOC0 | Application role not established | Unassigned |
| 80 | PT1/IOC1 | Crank-position sensor (CPS) | Corroborated |

## What is still needed for a board pinout

A visible chip marking establishes whether this package reference applies. Board continuity tracing then connects MCU pads through conditioning/driver ICs to numbered ECU cavities. A TDM binary/board is needed for its own assignments. The manual connector pictograms are not assigned invented cavity numbers.

## Sources and reproduction

- [NXP MC9S12T64 revision 1.1.1](https://www.nxp.com/docs/en/data-sheet/9S12T64AF16V1.pdf), PDF pages 60, 86, 251, 253, 385.
- [Yamaha XT660R/X 2004 service manual](https://scootertuub.nl/motoren/Yamaha/Yamaha%20XT%20660%20R%20X%202004%20Service%20Manual%20%20.pdf), PDF pages 345, 353, 354, 355, 361, 397.
- [Yamaha TDM900 service manual](https://biker.ee/manuals/yamaha/Yamaha-TDM900-2002-2007_Workshop_Service_Repair_Manual.pdf), PDF pages 365, 373.
- Supplied image, instruction bytes and [hardware/diagnostic derivation](IO_AND_DIAGNOSTICS.md).
- [Crank path](CRANK_REFERENCE.md), [sensor scales](TEMPERATURE_PROFILE.md), [serial link](K_LINE.md), [variant behavior](VARIANTS.md).

Run `python scripts/build_pin_overview.py` to regenerate Markdown, JSON, SVG and HTML. Run `python scripts/verify_pin_overview.py` to check coverage, assignments and instruction-byte provenance.
