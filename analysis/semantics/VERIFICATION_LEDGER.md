# Verification ledger

**Overall: incomplete. Verified is the final state of a specific claim, not a synonym for all tests passing.**

This generated ledger covers every current map, MCU package position and drawn ECU connector position. It audits existing evidence; it does not claim all remaining firmware meanings have been discovered. See [remaining calibration work](../REMAINING_CALIBRATIONS.md) and [definition readiness](DEFINITION_READINESS.md).

## Sign-off rules

1. **Decoded:** record exact bytes, dataflow, variants and interpretation.
2. **Corroborated:** cite the applicable datasheet/manual page and resolve conflicting evidence.
3. **Software checked:** record reproducible fixtures, boundaries, input image and source hashes.
4. **Verified:** close every requirement for the stated claim; include physical evidence when the claim concerns real units, wiring or behaviour.

These are evidence gates, not an automatic promotion ladder. A Yamaha map meaning cannot be proved by an MCU datasheet. A dimensionless arithmetic claim may be verified in software without a hardware measurement; a connector route needs board tracing or equivalent circuit evidence. New contradictory evidence reopens the affected claim. Missing evidence is **Open**, not a passed test.

## Checked off in this audit

- [x] Original image hash, instruction bytes and non-overlapping extraction.
- [x] All 71 map extracts and 32 stored axes match the supplied bytes.
- [x] All 90 input-axis uses have explicit coordinate and remaining physical-scale requirements; every map has specific open items.
- [x] All 80 displayed package assignments visually compared with NXP Figure 11; transcription locked for future change detection.
- [x] All 35 firmware-linked pin entries reviewed from code operands and setup through the datasheet register/channel to the package pin.
- [x] Existing software reports match the checked source/image provenance.
- [x] All 26 drawn connector positions have an inventory entry; 101 MCU instruction anchors match the image.
- [ ] Complete engineering-unit interpretation and tuning sign-off for all maps.
- [ ] Exact fitted MCU/package and ECU revision confirmed.
- [ ] Connector face/OEM numbering and physical routes confirmed.
- [ ] Missing boot/reset content recovered and full-device/flash behaviour verified.

The package review checks the **reference part**. It does not establish which part is fitted to this ECU. The [review record](package_datasheet_review.json) identifies the exact source hash, page and reviewed signals. [NXP datasheet, PDF page 60, Figure 11](https://www.nxp.com/docs/en/data-sheet/9S12T64AF16V1.pdf).

## Evidence needed to close the remaining claims

| Claim | Evidence still required |
|---|---|
| Milliseconds, RPM and timed cuts | Confirm actual timer clock; confirm crank-event geometry for RPM. Datasheet prescaler semantics alone do not establish the oscillator. |
| Absolute spark BTDC | Establish CPS reference edge relative to mechanical TDC, and actual coil firing edge/polarity; finish special-mode timelines. |
| Coolant/IAT Celsius and fan temperatures | Confirm sensor/board transfer and resolve the XT coolant fallback conflict. TDM agreement is comparison evidence only. |
| Pressure, throttle, supply volts | Confirm analog conditioning and display/mechanical scales. Processed load cannot simply be relabelled kPa. |
| Gear numbers / road speed | Independently establish sensor pulse count and drivetrain relationship; the earlier 20-pulse fit is not evidence. |
| Connector wiring | Confirm ECU revision and connector view, trace drivers/conditioning; resolve B/Y and L/B alternatives and L/W starter candidate. |
| Tuning definitions | Complete selector/consumer coverage, reversible unit encoding, rounding and permitted ranges; verify edited behaviour. |
| Complete device boot / flashing | Recover missing F800-FFFF bytes and validate programming format, integrity field and boot requirements. |

These gaps do not prevent further static tracing. They prevent final sign-off of the affected physical claims.

## Every map

“Verified” below applies only to byte extraction. Conversion status is inherited from the unit research; a blank profile dependency does not certify every axis, consumer or operating mode. Each dossier retains its open questions.

| Map | Bytes | Interpretation | Conditional profiles | Tuning sign-off |
|---|---|---|---|---|
| [Normal load-based fuel quantity](../map_details/main_quantity_A.md) `0x1B66` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer | Open |
| [Throttle-based fuel quantity](../map_details/main_quantity_B.md) `0x2688` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer | Open |
| [Sequence-selected alternate load fuel quantity](../map_details/main_quantity_C.md) `0x37A8` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer | Open |
| [Base ignition timing — neutral-input branch](../map_details/main_u8_A.md) `0x42AE` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer | Open |
| [Base ignition timing — normal ratio-code branch](../map_details/main_u8_B.md) `0x452E` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer | Open |
| [Base ignition timing — extended ratio-code branch](../map_details/main_u8_C.md) `0x47AE` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer | Open |
| [Injection event-phase target](../map_details/modulo24_surface.md) `0x1914` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Secondary injector quantity multiplier](../map_details/correction_surface_A.md) `0x1A1A` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Fuel normalization offset](../map_details/correction_surface_B.md) `0x3168` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Fuel correction gain vs speed and load](../map_details/correction_surface_C.md) `0x3280` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Alternate base ignition timing vs speed and coolant](../map_details/correction_surface_D.md) `0x4A60` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer, yamaha_temperature_candidate | Open |
| [Load-based fuel normalization input](../map_details/fuel_normalization_load.md) `0x311E` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Throttle-based fuel normalization input](../map_details/fuel_normalization_throttle.md) `0x312A` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Fuel normalization denominator gain](../map_details/fuel_normalization_gain.md) `0x321C` | Verified | numeric contribution decoded | None listed; see dossier | Open |
| [Feedback startup delay vs coolant](../map_details/curve_18b6.md) `0x18B9` | Verified | conditional physical conversion | nominal_xt_timer, yamaha_temperature_candidate | Open |
| [Startup fuel base quantity vs coolant](../map_details/curve_1996.md) `0x1999` | Verified | conditional physical conversion | nominal_xt_timer, yamaha_temperature_candidate | Open |
| [Post-start enrichment — fast-decay state](../map_details/curve_32ef.md) `0x32F2` | Verified | numeric contribution decoded | yamaha_temperature_candidate | Open |
| [Post-start enrichment — slow-decay state](../map_details/curve_3301.md) `0x3304` | Verified | numeric contribution decoded | yamaha_temperature_candidate | Open |
| [Injector pulse compensation vs supply](../map_details/curve_4234.md) `0x4237` | Verified | conditional physical conversion | nominal_xt_timer | Open |
| [Startup fuel multiplier vs pressure estimate](../map_details/curve_19c6.md) `0x19CC` | Verified | numeric contribution decoded | None listed; see dossier | Open |
| [Startup fuel multiplier vs throttle](../map_details/curve_19ba.md) `0x19C0` | Verified | numeric contribution decoded | None listed; see dossier | Open |
| [Startup fuel multiplier vs engine speed](../map_details/curve_19a8.md) `0x19AE` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Centered fuel-correction gain vs engine speed](../map_details/curve_34b0.md) `0x34B6` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Relative-throttle qualification threshold vs speed](../map_details/curve_3494.md) `0x349A` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Transient fuel multiplier vs pressure estimate](../map_details/curve_353a.md) `0x3540` | Verified | numeric contribution decoded | None listed; see dossier | Open |
| [Transient fuel multiplier vs intake temperature](../map_details/curve_351d.md) `0x3520` | Verified | numeric contribution decoded | yamaha_temperature_candidate | Open |
| [Transient fuel response 1 — neutral-input branch](../map_details/curve_34d0.md) `0x34D3` | Verified | joint arithmetic decoded; standalone physical cell unit not assigned | None listed; see dossier | Open |
| [Transient fuel response 1 — low ratio codes](../map_details/curve_34da.md) `0x34DD` | Verified | joint arithmetic decoded; standalone physical cell unit not assigned | None listed; see dossier | Open |
| [Transient fuel response 1 — higher ratio codes](../map_details/curve_34e4.md) `0x34E7` | Verified | joint arithmetic decoded; standalone physical cell unit not assigned | None listed; see dossier | Open |
| [Transient fuel multiplier vs throttle](../map_details/curve_34ee.md) `0x34F4` | Verified | numeric contribution decoded | None listed; see dossier | Open |
| [Transient fuel response 2 — neutral-input branch](../map_details/curve_355d.md) `0x3560` | Verified | joint arithmetic decoded; standalone physical cell unit not assigned | None listed; see dossier | Open |
| [Transient fuel response 2 — normal ratio-code branch](../map_details/curve_3567.md) `0x356A` | Verified | joint arithmetic decoded; standalone physical cell unit not assigned | None listed; see dossier | Open |
| [Transient fuel response 2 — extended ratio-code branch](../map_details/curve_3571.md) `0x3574` | Verified | joint arithmetic decoded; standalone physical cell unit not assigned | None listed; see dossier | Open |
| [Fuel normalization recovery hold — normal ratio-code branch](../map_details/curve_31ec.md) `0x31F2` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer | Open |
| [Fuel normalization recovery hold — extended ratio-code branch](../map_details/curve_3200.md) `0x3206` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer | Open |
| [Feedback eligibility delay vs coolant](../map_details/curve_36c4.md) `0x36C7` | Verified | conditional physical conversion | nominal_xt_timer, yamaha_temperature_candidate | Open |
| [Adaptive fuel correction — decrement step](../map_details/curve_36a4.md) `0x36AA` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Adaptive fuel correction — increment step](../map_details/curve_36b2.md) `0x36B8` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Fuel multiplier vs intake temperature](../map_details/curve_3220.md) `0x3223` | Verified | numeric contribution decoded | yamaha_temperature_candidate | Open |
| [Positive transient fuel gain vs coolant](../map_details/curve_3345.md) `0x3348` | Verified | numeric contribution decoded | yamaha_temperature_candidate | Open |
| [Negative transient fuel gain vs coolant](../map_details/curve_3357.md) `0x335A` | Verified | numeric contribution decoded | yamaha_temperature_candidate | Open |
| [Pressure-processing offset vs engine speed](../map_details/curve_1880.md) `0x1886` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Load-path fuel multiplier vs pressure estimate](../map_details/curve_323c.md) `0x3242` | Verified | numeric contribution decoded | None listed; see dossier | Open |
| [Throttle-path fuel multiplier vs pressure estimate](../map_details/curve_32e0.md) `0x32E6` | Verified | numeric contribution decoded | None listed; see dossier | Open |
| [Alternate ignition mode — throttle threshold vs coolant](../map_details/curve_4a33.md) `0x4A36` | Verified | numeric contribution decoded | yamaha_temperature_candidate | Open |
| [Coolant enrichment — load-based fuel path](../map_details/curve_3315.md) `0x3318` | Verified | numeric contribution decoded | yamaha_temperature_candidate | Open |
| [Coolant enrichment — throttle-based fuel path](../map_details/curve_3327.md) `0x332A` | Verified | numeric contribution decoded | yamaha_temperature_candidate | Open |
| [Transient fuel pulse contribution vs coolant](../map_details/curve_34fd.md) `0x3500` | Verified | joint arithmetic decoded; standalone physical cell unit not assigned | yamaha_temperature_candidate | Open |
| [Spark timing bound vs pressure estimate](../map_details/curve_4bac.md) `0x4BB2` | Verified | conditional physical conversion | nominal_xt_crank | Open |
| [Throttle-delta fuel gain — nonnegative, neutral-input](../map_details/delta_0985_gain_1.md) `0x336B` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Throttle-delta fuel gain — nonnegative, normal ratio-code](../map_details/delta_0985_gain_2.md) `0x3382` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Throttle-delta fuel gain — nonnegative, extended ratio-code](../map_details/delta_0985_gain_3.md) `0x3399` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Throttle-delta fuel gain — negative, neutral-input](../map_details/delta_0985_gain_4.md) `0x33B0` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Throttle-delta fuel gain — negative, normal ratio-code](../map_details/delta_0985_gain_5.md) `0x33C7` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Throttle-delta fuel gain — negative, extended ratio-code](../map_details/delta_0985_gain_6.md) `0x33DE` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Load-delta fuel gain — nonnegative, neutral-input](../map_details/delta_0989_gain_1.md) `0x33F7` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Load-delta fuel gain — nonnegative, normal ratio-code](../map_details/delta_0989_gain_2.md) `0x340E` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Load-delta fuel gain — nonnegative, extended ratio-code](../map_details/delta_0989_gain_3.md) `0x3425` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Load-delta fuel gain — negative, neutral-input](../map_details/delta_0989_gain_4.md) `0x343C` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Load-delta fuel gain — negative, normal ratio-code](../map_details/delta_0989_gain_5.md) `0x3453` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Load-delta fuel gain — negative, extended ratio-code](../map_details/delta_0989_gain_6.md) `0x346A` | Verified | numeric contribution decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Air-induction enable vs speed and throttle](../map_details/step_grid_4c44.md) `0x4C44` | Verified | logical behavior decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Air-induction enable vs speed and load](../map_details/step_grid_4d48.md) `0x4D48` | Verified | logical behavior decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Adaptive feedback enable vs speed and throttle](../map_details/step_grid_35b0.md) `0x35B0` | Verified | logical behavior decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Adaptive feedback enable vs speed and load](../map_details/step_grid_363c.md) `0x363C` | Verified | logical behavior decoded | nominal_xt_crank, nominal_xt_timer | Open |
| [Spark time correction — other variants](../map_details/timing_speed_4f64.md) `0x4F64` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer | Open |
| [Spark time correction — XT variant 9](../map_details/timing_speed_4f81.md) `0x4F81` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer | Open |
| [Ignition dwell contribution vs speed and supply](../map_details/dwell_supply_speed.md) `0x4B12` | Verified | conditional physical conversion | nominal_xt_crank, nominal_xt_timer | Open |
| [Coolant sensor conversion](../map_details/coolant_sensor_conversion.md) `0x4F47` | Verified | conditional physical conversion | yamaha_temperature_candidate | Open |
| [Intake air temperature sensor conversion](../map_details/intake_temperature_conversion.md) `0x4F26` | Verified | conditional physical conversion | yamaha_temperature_candidate | Open |
| [Pressure-to-load processing gain](../map_details/curve_1854.md) `0x185A` | Verified | numeric contribution decoded | None listed; see dossier | Open |

## Every MCU package position

All rows match the reviewed reference pinout. Application status is a separate claim; instruction anchors are byte-checked citations, not proof of board wiring. **Fitted package and physical routes remain unverified for all rows.**

| Pin | Signal | Package reference | Application role | Application evidence | Checked anchors |
|---|---|---|---|---|---|
| 1 | PT2/IOC2 | Verified | Vehicle-speed pulses | Corroborated | 2 |
| 2 | PT3/IOC3 | Verified | Ignition-coil driver command | Corroborated | 3 |
| 3 | PT4/IOC4 | Verified | Application role not established | Unassigned | 0 |
| 4 | PT5/IOC5 | Verified | Ignition monitoring capture | Candidate | 3 |
| 5 | PT6/IOC6 | Verified | Primary fuel-injector command | Corroborated | 3 |
| 6 | PT7/IOC7 | Verified | Secondary injector code path | Decoded | 3 |
| 7 | BKGD/MODC/TAGHI/SI | Verified | BKGD/MODC/TAGHI/SI | Datasheet | 0 |
| 8 | SCKBDM/SPIMODE | Verified | SCKBDM/SPIMODE | Datasheet | 0 |
| 9 | SO | Verified | SO | Datasheet | 0 |
| 10 | VDD1 | Verified | VDD1 | Datasheet | 0 |
| 11 | VSS1 | Verified | VSS1 | Datasheet | 0 |
| 12 | PP0/PWM0 | Verified | Variant-gated auxiliary output | Decoded | 5 |
| 13 | PP1/PWM1 | Verified | Air-induction solenoid command | Corroborated | 3 |
| 14 | PP2/PWM2 | Verified | Radiator-fan relay command | Corroborated | 3 |
| 15 | PP3/PWM3 | Verified | Storage transaction select/strobe | Decoded | 3 |
| 16 | PP4/PWM4 | Verified | Headlight-relay command | Corroborated | 3 |
| 17 | PP5/PWM5 | Verified | Application role not established | Unassigned | 0 |
| 18 | PP6/PWM6 | Verified | Application role not established | Unassigned | 0 |
| 19 | PP7/PWM7 | Verified | Memory-test status/enable output | Decoded | 4 |
| 20 | PB0 | Verified | Sidestand / start-interlock input | Corroborated | 3 |
| 21 | PB1 | Verified | Starter-request input candidate | Candidate | 4 |
| 22 | PB2 | Verified | Application role not established | Unassigned | 0 |
| 23 | PB3 | Verified | Application role not established | Unassigned | 0 |
| 24 | PB4 | Verified | Neutral input | Corroborated | 3 |
| 25 | PB5 | Verified | Application role not established | Unassigned | 0 |
| 26 | PB6 | Verified | Application role not established | Unassigned | 0 |
| 27 | PB7 | Verified | Timed digital output | Unassigned | 3 |
| 28 | RESET | Verified | RESET | Datasheet | 0 |
| 29 | EXTAL | Verified | EXTAL | Datasheet | 0 |
| 30 | XTAL | Verified | XTAL | Datasheet | 0 |
| 31 | VSSPLL | Verified | VSSPLL | Datasheet | 0 |
| 32 | XFC | Verified | XFC | Datasheet | 0 |
| 33 | VDDPLL | Verified | VDDPLL | Datasheet | 0 |
| 34 | VDDR | Verified | VDDR | Datasheet | 0 |
| 35 | VSSR | Verified | VSSR | Datasheet | 0 |
| 36 | PK7/ROMONE/ECS | Verified | PK7/ROMONE/ECS | Datasheet | 0 |
| 37 | PE0/XIRQ | Verified | PE0/XIRQ | Datasheet | 0 |
| 38 | PE1/IRQ | Verified | PE1/IRQ | Datasheet | 0 |
| 39 | PE2/RW | Verified | Analog-bank selection bit 0 | Decoded | 5 |
| 40 | PE3/LSTRB/TAGLO | Verified | Analog-bank selection bit 1 | Decoded | 5 |
| 41 | PE4/ECLK | Verified | PE4/ECLK | Datasheet | 0 |
| 42 | PE5/MODA/IPIPE0 | Verified | PE5/MODA/IPIPE0 | Datasheet | 0 |
| 43 | PE6/MODB/IPIPE1 | Verified | PE6/MODB/IPIPE1 | Datasheet | 0 |
| 44 | PE7/NOACC/XCLKS | Verified | PE7/NOACC/XCLKS | Datasheet | 0 |
| 45 | PA0 | Verified | Injector-path readback / control bit | Unassigned | 2 |
| 46 | PA1 | Verified | Injector-path readback / control bit | Unassigned | 2 |
| 47 | PA2 | Verified | Fuel-injection system relay command | Corroborated | 4 |
| 48 | PA3 | Verified | Application role not established | Unassigned | 0 |
| 49 | PA4 | Verified | Periodic service/watchdog candidate | Candidate | 3 |
| 50 | VDD2 | Verified | VDD2 | Datasheet | 0 |
| 51 | VSS2 | Verified | VSS2 | Datasheet | 0 |
| 52 | PA5 | Verified | Application role not established | Unassigned | 0 |
| 53 | PA6 | Verified | Application role not established | Unassigned | 0 |
| 54 | PA7 | Verified | Application role not established | Unassigned | 0 |
| 55 | VDDA | Verified | VDDA | Datasheet | 0 |
| 56 | VRH | Verified | VRH | Datasheet | 0 |
| 57 | VRL | Verified | VRL | Datasheet | 0 |
| 58 | VSSA | Verified | VSSA | Datasheet | 0 |
| 59 | PAD0/AN0 | Verified | Throttle position (TPS) | Corroborated | 2 |
| 60 | PAD1/AN1 | Verified | Intake manifold pressure (MAP) | Corroborated | 3 |
| 61 | PAD2/AN2 | Verified | Oxygen-feedback candidate | Candidate | 2 |
| 62 | PAD3/AN3 | Verified | Intake air temperature (IAT) | Corroborated | 3 |
| 63 | PAD4/AN4 | Verified | Fuel-system supply monitor | Corroborated | 2 |
| 64 | PAD5/AN5 | Verified | Lean-angle / tip-over sensor | Corroborated | 2 |
| 65 | PAD6/AN6 | Verified | Coolant temperature (ECT) | Corroborated | 3 |
| 66 | PAD7/AN7/ETRIG | Verified | Additional analog channel | Unassigned | 2 |
| 67 | PS0/RxD0 | Verified | Application role not established | Unassigned | 0 |
| 68 | PS1/TxD0 | Verified | Application role not established | Unassigned | 0 |
| 69 | PS2/RxD1 | Verified | Dashboard/immobilizer serial RX | Decoded | 2 |
| 70 | PS3/TxD1 | Verified | Dashboard/immobilizer serial TX | Decoded | 2 |
| 71 | PS4/MISO | Verified | SPI data input | Decoded | 2 |
| 72 | PS5/MOSI | Verified | SPI data output | Decoded | 2 |
| 73 | PS6/SCK | Verified | SPI clock | Decoded | 2 |
| 74 | PS7/SS | Verified | Application role not established | Unassigned | 0 |
| 75 | VREGEN | Verified | VREGEN | Datasheet | 0 |
| 76 | VSSX | Verified | VSSX | Datasheet | 0 |
| 77 | VDDX | Verified | VDDX | Datasheet | 0 |
| 78 | TEST | Verified | TEST | Datasheet | 0 |
| 79 | PT0/IOC0 | Verified | Application role not established | Unassigned | 0 |
| 80 | PT1/IOC1 | Verified | Crank-position sensor (CPS) | Corroborated | 3 |

## Code to CPU pin: every claimed software connection

This review joins both sides: byte-backed instructions and the NXP register/package definitions. It checks register addresses, masks/channels and relevant initialization. The MCU family and register block at zero remain the working model; missing boot leaves inherited bus/multiplex modes unconfirmed. A reviewed chain is not blanket verification of its application role or external circuit. The [structured review](code_pin_review.json) contains every instruction and source page.

| Pin / signal | Code-to-register chain | Datasheet PDF pages (plus pinout p.60) | Instruction anchors | Scope / remaining condition |
|---|---|---|---|---|
| 1 / PT2/IOC2 | PTIT bit 2; input-capture channel 2 | 100, 90, 91 | `0xF3FB`, `0x505B`, `0x505D` | Input capture; the speed ISR tests the pin level. Sensor pulses per revolution remain unknown. |
| 2 / PT3/IOC3 | TC3; TCTL2 OM3/OL3; timer channel 3 | 90, 91 | `0xEF50`, `0xEF52`, `0xEF54`, `0xEF66`, `0x505B`, `0x505D` | Output compare. Digital compare action does not establish external coil inversion or absolute TDC. |
| 4 / PT5/IOC5 | TFLG1 bit 5 (C5F); capture channel 5 | 90 | `0xDDAB`, `0xDDAD`, `0x505B`, `0x505D` | Input capture; code checks capture flag, not a direct TC5 timestamp read. |
| 5 / PT6/IOC6 | TC6; timer channel 6 | 90, 91 | `0xB9B8`, `0xC56B`, `0xC56D`, `0x505B`, `0x505D` | Output compare; normal stock injector path. |
| 6 / PT7/IOC7 | TC7; timer channel 7 | 90, 91 | `0xBA3F`, `0x505B`, `0x505D` | Output compare; second normal path is gated by variant. Presence is not proof of TDM hardware. |
| 12 / PP0/PWM0 | PTP bit 0 | 101 | `0xAD14`, `0x5037`, `0x5039` | DDRP=FF configures output. PWM in the package alias does not prove PWM operation; these anchors use GPIO. |
| 13 / PP1/PWM1 | PTP bit 1 | 101 | `0xBAC3`, `0x5037`, `0x5039` | DDRP=FF configures output. PWM in the package alias does not prove PWM operation; these anchors use GPIO. |
| 14 / PP2/PWM2 | PTP bit 2 | 101 | `0x71C5`, `0x5037`, `0x5039` | DDRP=FF configures output. PWM in the package alias does not prove PWM operation; these anchors use GPIO. |
| 15 / PP3/PWM3 | PTP bit 3 | 101 | `0x57B4`, `0x5037`, `0x5039` | DDRP=FF configures output. PWM in the package alias does not prove PWM operation; these anchors use GPIO. |
| 16 / PP4/PWM4 | PTP bit 4 | 101 | `0x9DC5`, `0x5037`, `0x5039` | DDRP=FF configures output. PWM in the package alias does not prove PWM operation; these anchors use GPIO. |
| 19 / PP7/PWM7 | PTP bit 7 | 101 | `0xA489`, `0x5037`, `0x5039` | DDRP=FF configures output. PWM in the package alias does not prove PWM operation; these anchors use GPIO. |
| 20 / PB0 | PORTB bit 0 -> filtered RAM 0896 bit 0 | 86 | `0x8B45`, `0x8B57`, `0x6583`, `0x502F`, `0x5031` | Input; B/Y versus L/B external route unresolved. |
| 21 / PB1 | PORTB bit 1 -> filtered RAM 0896 bit 1 | 86 | `0x8B45`, `0x8B57`, `0xCBF6`, `0x502F`, `0x5031` | Input; starter interpretation supported, L/W association remains candidate. |
| 24 / PB4 | PORTB bit 4 -> filtered RAM 0896 bit 4 | 86 | `0x8B45`, `0x8B57`, `0x65A0`, `0x502F`, `0x5031` | Input; neutral diagnostic in variant 9, external route unresolved. |
| 27 / PB7 | PORTB bit 7 | 86 | `0xCB8B`, `0xCB8F`, `0xCBAD`, `0x502F`, `0x5031` | Configured output. Reading PORTB does not by itself prove external feedback sensing. |
| 39 / PE2/RW | PORTE bit 2 | 86 | `0x56E7`, `0x56F0`, `0x504B`, `0x504D` | Configured output; bank-selection software. External analog multiplexer circuit remains untraced. |
| 40 / PE3/LSTRB/TAGLO | PORTE bit 3 | 86 | `0x56FB`, `0x5704`, `0x504B`, `0x504D` | Configured output; bank-selection software. External analog multiplexer circuit remains untraced. |
| 45 / PA0 | PORTA bit 0 | 86 | `0xC57A`, `0xC57C`, `0x501C`, `0x501E` | Configured output, also read by injector monitor. Do not assume an input or physical readback without port-mode/circuit evidence. |
| 46 / PA1 | PORTA bit 1 | 86 | `0xC731`, `0xC733`, `0x501C`, `0x501E` | Configured output, also read by injector monitor. Do not assume an input or physical readback without port-mode/circuit evidence. |
| 47 / PA2 | PORTA bit 2 | 86 | `0xACD9`, `0xACE6`, `0x501C`, `0x501E` | Configured output; prime sets, stop clears. External driver polarity remains separate. |
| 49 / PA4 | PORTA bit 4 | 86 | `0x5FAC`, `0x5FB0`, `0x5FB5`, `0x501C`, `0x501E` | Configured output; toggled next to COP service. External watchdog role remains candidate. |
| 59 / PAD0/AN0 | ATDCTL5 channel selector 0; result slot ATDDR3 at 0096 | 94, 95 | `0x68CF`, `0x68D6`, `0x68D9`, `0x68DB`, `0x68DD`, `0x68DE`, `0x68E2`, `0x68E7`, `0x692E` | Dispatch table 6968 indexes selected input channel. Result-slot number 3 is not input channel 3; alternate startup/bank paths require separate interpretation. |
| 60 / PAD1/AN1 | ATDCTL5 channel selector 1; result slot ATDDR3 at 0096 | 94, 95 | `0x68CF`, `0x68D6`, `0x68D9`, `0x68DB`, `0x68DD`, `0x68DE`, `0x68E2`, `0x68E7`, `0x692E` | Dispatch table 6968 indexes selected input channel. Result-slot number 3 is not input channel 3; alternate startup/bank paths require separate interpretation. |
| 61 / PAD2/AN2 | ATDCTL5 channel selector 2; result slot ATDDR3 at 0096 | 94, 95 | `0x68CF`, `0x68D6`, `0x68D9`, `0x68DB`, `0x68DD`, `0x68DE`, `0x68E2`, `0x68E7`, `0x692E` | Dispatch table 6968 indexes selected input channel. Result-slot number 3 is not input channel 3; alternate startup/bank paths require separate interpretation. |
| 62 / PAD3/AN3 | ATDCTL5 channel selector 3; result slot ATDDR3 at 0096 | 94, 95 | `0x68CF`, `0x68D6`, `0x68D9`, `0x68DB`, `0x68DD`, `0x68DE`, `0x68E2`, `0x68E7`, `0x692E` | Dispatch table 6968 indexes selected input channel. Result-slot number 3 is not input channel 3; alternate startup/bank paths require separate interpretation. |
| 63 / PAD4/AN4 | ATDCTL5 channel selector 4; result slot ATDDR3 at 0096 | 94, 95 | `0x68CF`, `0x68D6`, `0x68D9`, `0x68DB`, `0x68DD`, `0x68DE`, `0x68E2`, `0x68E7`, `0x692E` | Dispatch table 6968 indexes selected input channel. Result-slot number 3 is not input channel 3; alternate startup/bank paths require separate interpretation. |
| 64 / PAD5/AN5 | ATDCTL5 channel selector 5; result slot ATDDR3 at 0096 | 94, 95 | `0x68CF`, `0x68D6`, `0x68D9`, `0x68DB`, `0x68DD`, `0x68DE`, `0x68E2`, `0x68E7`, `0x692E` | Dispatch table 6968 indexes selected input channel. Result-slot number 3 is not input channel 3; alternate startup/bank paths require separate interpretation. |
| 65 / PAD6/AN6 | ATDCTL5 channel selector 6; result slot ATDDR3 at 0096 | 94, 95 | `0x68CF`, `0x68D6`, `0x68D9`, `0x68DB`, `0x68DD`, `0x68DE`, `0x68E2`, `0x68E7`, `0x692E` | Dispatch table 6968 indexes selected input channel. Result-slot number 3 is not input channel 3; alternate startup/bank paths require separate interpretation. |
| 66 / PAD7/AN7/ETRIG | ATDCTL5 channel selector 7; result slot ATDDR3 at 0096 | 94, 95 | `0x68CF`, `0x68D6`, `0x68D9`, `0x68DB`, `0x68DD`, `0x68DE`, `0x68E2`, `0x68E7`, `0x692E` | Dispatch table 6968 indexes selected input channel. Result-slot number 3 is not input channel 3. Channel 7 is absent from the ordinary 68E9 selector sequence; full activation coverage remains open. |
| 69 / PS2/RxD1 | SCI1DRL at 00D7, receive; SCI1CR2 RE | 99 | `0x5073`, `0x5075`, `0xCDCB`, `0xCDCD` | Receiver enabled (RE=1). PS2/RxD1 package association; no physical transceiver verification. |
| 70 / PS3/TxD1 | SCI1DRL at 00D7, transmit; SCI1CR2 TE | 99 | `0x5073`, `0x5075`, `0xCCF8`, `0xCE3E`, `0xCE40` | Shared data register with receive. Initial TE=0; CE3E/CE40 writes 08 (TE=1) to enable transmission. No physical bus verification. |
| 71 / PS4/MISO | SPI SPICR1/SPI data; MISO | 99 | `0x5077`, `0x5079`, `0x57CA` | SPICR1=50 enables master SPI; MISO is input. Slave device identity remains separate. |
| 72 / PS5/MOSI | SPI SPICR1/SPI data; MOSI | 99 | `0x5077`, `0x5079`, `0x57C2` | SPICR1=50 enables master SPI; MOSI is output. Slave device identity remains separate. |
| 73 / PS6/SCK | SPI SPICR1/SPI data; SCK | 99 | `0x5077`, `0x5079`, `0x507B`, `0x507D` | SPICR1=50 enables master SPI; SCK is master clock. Physical frequency requires bus clock. |
| 80 / PT1/IOC1 | TC1 and PTIT bit 1; capture channel 1 | 90, 91, 100 | `0xD8D3`, `0x505B`, `0x505D` | Input capture; CPS reference angle and hardware edge conditioning remain unconfirmed. |

## Every drawn connector position

U/L identifiers are drawing coordinates, not OEM cavity numbers. Crosses mean no connection shown in this manual. See the [connector inventory](ECU_CONNECTOR.md) and [route audit](CONNECTOR_ROUTE_AUDIT.md) for source pages and reasoning. **No connector-to-MCU route has physical continuity sign-off.**

| Position | Wire | Function association | Candidate MCU package pins | Manual PDF pages |
|---|---|---|---|---|
| U01 | L/W | Candidate association | 21 | 462 |
| U02 | Y/L | Function corroborated | 69, 70 | 462 |
| U03 | Y/G | Function corroborated | 64 | 462 |
| U04 | Cross | No connection shown | Not assigned | 462 |
| U05 | W | Function corroborated | 1 | 462 |
| U06 | Gy | Function corroborated | 80 | 462 |
| U07 | B/W | Internal rail | Not assigned | 462 |
| U08 | Cross | No connection shown | Not assigned | 462 |
| U09 | L | Internal rail | Not assigned | 462 |
| U10 | Br/R | Function corroborated | 13 | 462 |
| U11 | R | Internal rail | Not assigned | 462 |
| U12 | R/B | Function corroborated | 5 | 462 |
| U13 | O | Function corroborated | 2 | 462 |
| L01 | B/Y | Unresolved alternatives | 20, 24 | 462 |
| L02 | L/B | Unresolved alternatives | 20, 24 | 462 |
| L03 | G/R | Function corroborated | 65 | 462 |
| L04 | Br/W | Function corroborated | 62 | 462 |
| L05 | P/W | Function corroborated | 60 | 462 |
| L06 | Y | Function corroborated | 59 | 462 |
| L07 | B/L | Internal rail | Not assigned | 462 |
| L08 | L/R | Function corroborated | 47 | 462 |
| L09 | G/Y | Function corroborated | 14 | 462 |
| L10 | Y/B | Function corroborated | 16 | 462 |
| L11 | R/L | Function corroborated | 63 | 462 |
| L12 | Cross | No connection shown | Not assigned | 462 |
| L13 | B | Internal rail | Not assigned | 462 |

## Software reports and scope

These are previously recorded fixture results whose provenance is checked during this audit. They were not all re-executed by the ledger command. Counts measure cases, not independently verified physical facts. The selector report includes 3,000 explicitly synthetic hypothesis iterations alongside 9,523 behaviour cases.

| Report | Recorded cases | Recorded result | What the result does not establish |
|---|---|---|---|
| [validation.json](../full/validation.json) | 344357 | Passed | Independent Python evaluator of exported raw p-code; confirms C translation consistency, not silicon equivalence. |
| [connector_path_validation.json](connector_path_validation.json) | 10344 | Passed | Synthetic software fixtures; no connector continuity, voltage measurement, transceiver test or complete ECU boot. Counter values are routine invocations or preseeded timer states, not independently measured milliseconds. Wire assignments require separate manual/board evidence. |
| [control_validation.json](control_validation.json) | 212090 | Passed | Independent formulas/decision tables versus instruction translation. No peripheral timing, physical units or connector identity certified. |
| [crank_reference_validation.json](crank_reference_validation.json) | 561 | Passed | Synthetic CPS input, manually emulated ECT output and ISR stopped after spark dispatch. Normal gates, selected periods, fixed final spark/dwell inputs. Does not establish rotor-to-TDC angle, board polarity, actual hardware tooth count or every special mode. |
| [extended_map_validation.json](extended_map_validation.json) | 150614 | Passed | Isolated execution of the compiled instruction translation; no peripheral model or vehicle validation. Synthetic fixtures modify only temporary process memory. |
| [map_consumer_validation.json](map_consumer_validation.json) | 259216 | Passed | Isolated instruction translation, RAM-backed peripherals, and injected lookup results. Tests prove arithmetic at stated boundaries, not every caller path, physical clock/sensor units or hardware operation. |
| [map_selector_validation.json](map_selector_validation.json) | 12523 | Passed | Instruction-level fixtures, not a complete boot or hardware simulation. Tests establish code paths and boundaries, not gear-number calibration, neutral circuit polarity, wall-clock periods or mechanical TDC. The successful sequence uses changed calibration bytes only in emulated memory; it is not stock behavior. |
| [sensor_variant_validation.json](sensor_variant_validation.json) | 66600 | Passed | Isolated routines with injected ADC results and fault states. No proof about every possible upstream state writer, external analog circuit, donor ECU identity or physical units. |
| [spark_schedule_validation.json](spark_schedule_validation.json) | 74832 | Passed | Planner arithmetic includes synthetic edge cases. Timeline is a uniform wheel segment with normal gates clear and manually simulated ECT pin state. Special-mode dispatch, physical coil polarity, timer frequency and TDC phase are not established by this test. |
| [units_variant_validation.json](units_variant_validation.json) | 219324 | Passed | Isolated instruction execution with RAM-backed peripherals. Physical units, oscillator rate, sensor circuitry, crank/TDC geometry and hardware outputs are not validated by these tests. |

## Reproduce the audit

Run `python scripts/build_verification_ledger.py` to run extraction, semantic provenance, pin and naming checks, then regenerate this document and [the structured ledger](verification_ledger.json). Run `python scripts/build_verification_ledger.py --check` to reject stale ledger content. Pages deployment runs this gate; open research items remain visibly open and do not fail a documentation build. A failed integrity/provenance check does fail the build.

Bound image SHA-256: `5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280`.
