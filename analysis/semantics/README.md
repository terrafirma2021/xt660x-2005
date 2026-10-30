# Control-system reverse engineering

This directory connects firmware addresses to motorcycle functions, with enough evidence to review each interpretation. It is the starting point for a future XDF or custom calibration tool. It is **not yet a validated tuning definition**.

The analysis applies only to the exact [supplied image](../../firmware/XT660X%202005.bin), SHA-256 `5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280`. CPU addresses equal file offsets in this image. RAM and peripheral addresses are runtime state, not editable calibration locations.

## Read by area

Start with the [verification ledger](VERIFICATION_LEDGER.md) for checked claims and remaining evidence requirements across all 71 maps, 80 MCU positions and 26 connector positions. It includes the code-to-register-to-package review for every firmware-linked pin. Passing software tests does not sign off physical units or wiring.

| Area | Breakdown | Established | Still missing |
|---|---|---|---|
| MCU pin reference | [80-pin overview and XT/TDM comparison](MCU_PIN_OVERVIEW.md), [interactive view](MCU_PIN_OVERVIEW.html) | Complete conditional package inventory; 35 instruction-linked entries; sensor and actuator purposes | Physical chip identification, ECU cavity numbers, TDM board-specific routing |
| ECU connector | [26 drawing positions and MCU links](ECU_CONNECTOR.md) | 23 wire-labelled positions, three crosses; 15 corroborated functions, one candidate, two unresolved alternatives and five power/return networks | OEM numbers, view-side convention, exact internal conditioning/driver routes |
| Connector route audit | [Starter, interlock, supply and serial evidence](CONNECTOR_ROUTE_AUDIT.md) | 10,344 instruction cases; stronger supply/serial links; relay-command correction | Interlock wire pair, starter physical route and board circuits |
| Inputs / outputs | [Hardware and diagnostic cross-references](IO_AND_DIAGNOSTICS.md) | Eight ADC dispatch slots; six logical outputs; several physical identities corroborated by diagnostic numbers | ECU connector pin numbers, board routing, exact ECU identity |
| Coolant / fan | [Temperature conversion, faults and fan decisions](COOLANT_AND_FAN.md) | Conversion bytes, full normal/fault/override decision, raw threshold boundaries, primary consumers | Verified Celsius encoding and physical fan test |
| Engine speed / cuts | [Speed calculation and output suppression](RPM_AND_CUTS.md) | Reciprocal calculation, three period-limit pairs, separate road-speed cut flags, conditional injector limits | Confirmed timer timebase / crank geometry, complete interlock meanings |
| CPS / spark cadence | [Crank reference and wasted spark](CRANK_REFERENCE.md) | Gap synchronization, ordinary firing on both cycle halves, pressure-based longer-phase alignment | Mechanical gap-edge-to-TDC angle and hardware waveform |
| Temperature profile | [Celsius inference and variant checks](TEMPERATURE_PROFILE.md) | Conditional sensor and 14-map-axis conversion, resistance consistency, selector tests | Confirmed board transfer and XT/TDM fallback discrepancy |
| Spark scheduler | [Planner and compare dispatch](SPARK_SCHEDULER.md) | Exact event-relative normal fire/charge timing, digital edge actions, minimum-charge override | Absolute TDC and complete special-mode timelines |
| Spark | [Maps through the timing scheduler](SPARK.md) | Three selected byte maps, rounding and downstream correction, timer-3 identity | Absolute crank-angle reference, degrees conversion, all correction meanings |
| Fuel | [Quantity tables and injector scheduling](FUEL.md) | Main table selection, speed/other input variables, primary timer-6 output, secondary variant gating | Confirmed sensor units and complete mode coverage |
| Map consumers | [Fuel products, adaptation and event timing](MAP_CONSUMERS.md) | Exact normal/startup fuel chains, transient products, corrected roles, injection phase dispatch and dormant families | Sensor physical references, absolute crank phase and complete mode coverage |
| Map selectors | [Neutral input, ratio classification and speed sequence](MAP_SELECTORS.md) | 25 improved map names; code-5/top-gear fail-safe corroboration; stock-inactive alternate fuel sequence; 9,523 behavioral cases | Independent speed-pulse count, transient trigger identities and remaining mode gates |
| Units | [Engineering derivation](UNIT_DECODING.md) | Conditional timer/RPM/relative-angle conversions, contribution gains and exact normalization | Absolute TDC reference and confirmed sensor scales |
| Variants | [Second injector and configuration](VARIANTS.md) | Variant 9 skips the second normal injector entry; separate diagnostic path remains | Exact donor models and physical second-channel hardware |
| Extended maps | [New families and dataflow](EXTENDED_MAPS.md) | 71 layouts, per-map breakdowns, computed axes, step grids, RAM-copied curve | Remaining scalars/indirect data and complete engineering conversions |
| Checksum | [Corrected image and validation](CHECKSUM.md) | Startup algorithm, range and passing corrected file | Factory adjustment field and actual boot-region content |
| Serial link | [SCI1 and K-line identification](K_LINE.md) | Byte requests, five-byte replies, register/divisor setup | Physical wire/pins, actual clock and waveform timing |
| Dashboard diagnostics | [Commands, menu and fault codes](DIAGNOSTICS.md) | Startup bytes, button states, 19 selectable items, fault bitmap | Fully validated display units and live captures |
| Startup | [Power on and application initialization](STARTUP.md) | Application entry, setup, checksum and serial state | Missing reset/boot region and inherited configuration |
| Integrity | [Serial and ROM checksums](CHECKSUMS.md) | Additive reply check and application ROM sum/range | General correction location and flash validation |
| Immobilizer | [Patch, authentication and stored records](IMMOBILIZER.md) | Owner's patch, candidate original state, challenge/registration exchange | Original pre-patch image, external record bytes and physical key protocol |
| Tool definitions | [XDF / custom-tool readiness](DEFINITION_READINESS.md) | Byte-backed structured catalogue, evidence links, confidence and unresolved items | Exportable physical conversions and write/flash validation |

These have different levels of completion. Coolant/fan decisions and the principal raw cut thresholds have direct behavioral fixtures. Spark angle and fuel quantity are traced workstreams, not fully identified engineering calibrations.

## Service-tool comparison

The [Yamaha diagnostic communication source review](YAMAHA_SERVICE_TOOL.md) adds independent 15,625-baud evidence and traces legacy RPM configuration, raw monitor reads and adapter framing. The missing caller settings and sensor display formulas prevent final physical-scale sign-off.

## Evidence files

- [Map names and stable references](../MAP_NAMES.md): the reviewed name, existing ID, address and naming evidence for all 71 maps. Names describe functions; IDs remain stable for code and cross-references.
- [mcu_pin_overview.json](mcu_pin_overview.json): all 80 package positions, 101 instruction anchors, 26 connector positions, diagnostic identities, harness references and explicit uncertainty; [package drawing](mcu_pin_overview.svg).
- [catalog.json](catalog.json): 28 calibration records with exact storage, original bytes, role, references, and explicit missing conversion fields; eight ADC channels and six logical outputs.
- [control_validation.json](control_validation.json): 212,090 isolated control test cases against the compiled instruction translation.
- [extended_map_validation.json](extended_map_validation.json): 150,614 additional cases, including the delivered checksum correction.
- [MAP_RESOLUTION.md](MAP_RESOLUTION.md): current per-map status; cell interpretation does not imply every axis or mode is resolved.
- [map_consumer_validation.json](map_consumer_validation.json): 259,216 consumer checks with independent integer models.
- [spark_schedule_validation.json](spark_schedule_validation.json): 74,832 planner and compare-dispatch checks.
- [sensor_variant_validation.json](sensor_variant_validation.json): 74,792 temperature and variant-selected spark-curve checks.
- [temperature_profile.json](temperature_profile.json): quantified sensor-profile assumptions, resistance comparisons and all ADC inputs.
- [physical_units.json](physical_units.json): all 71 maps accounted for, with named assumptions on converted values.
- [units_variant_validation.json](units_variant_validation.json): independent unit arithmetic, scheduler and variant fixtures.
- [Every map's breakdown](../MAP_DETAILS.md) and [remaining calibration inventory](../REMAINING_CALIBRATIONS.md).
- [coolant_conversion_samples.json](coolant_conversion_samples.json): all 1,024 possible ten-bit inputs and their internal/diagnostic outputs.
- Byte-backed instruction excerpts: [sensor/fan](sensor_fan_evidence.txt), [speed/cuts](rpm_cuts_evidence.txt), [spark](spark_evidence.txt), [fuel](fuel_maps_evidence.txt), [road speed](road_speed_evidence.txt).
- [Protocol verification](PROTOCOL_VERIFICATION.md), [results](protocol_verification.json), and [instruction evidence](protocol_evidence.tsv).
- [Review notes and model correction](REVIEW_NOTES.md).

An identification is strongest when independent paths agree: an ADC dispatch, a diagnostic display number, a control consumer, and an actuator diagnostic. A plausible table shape or plausible stock number alone is not enough. Engineering units remain separate from physical role: identifying the coolant function does not by itself prove its Celsius formula.

## Working sequence

1. Establish a function's hardware input/output or diagnostic identity.
2. Trace every relevant RAM writer and consumer; separate normal, startup, fault and diagnostic paths.
3. Record ROM locations, widths, endianness, dimensions, axis inputs, rounding, clamps, selectors and exact comparison operators.
4. Test recovered decisions at boundaries and across inputs against original instructions.
5. Confirm units/timebases/pin routing using matching hardware evidence.
6. Promote only validated definitions into an editor. Preserve unresolved hypotheses in the research catalogue.

No calibration setting has been changed. The supplied image already contains the owner’s immobilizer patch; see [patch provenance and effects](IMMOBILIZER.md). A separate [checksum-corrected image](CHECKSUM.md) changes one trailer byte while preserving that patch and the supplied file. The documentation uses descriptive aliases; original address-based function names remain available for cross-checking. No original source names are claimed.

## Sources

1. Supplied binary and its byte-backed disassembly; all addresses in these notes refer to that image.
2. [NXP MC9S12T64 reference manual](https://www.nxp.com/docs/en/data-sheet/9S12T64AF16V1.pdf), register tables and ATD / ECT / Port P descriptions. Exact hardware identity remains unconfirmed.
3. [Freescale CPU12 Reference Manual, Rev. 4, manufacturer document mirrored by University of Florida](https://mil.ufl.edu/4744/docs/hc12/cpu12rm.rev4.pdf), BRSET page 115.
4. [Yamaha XT660R(S)/XT660X(S), 2004 service manual 5VK1-AE1, third-party mirror of the manufacturer manual](https://scootertuub.nl/motoren/Yamaha/Yamaha%20XT%20660%20R%20X%202004%20Service%20Manual%20%20.pdf), printed pages 7-10 and 7-11, PDF pages 353–354. Used to corroborate diagnostic identities, not to assert that a filename-labelled 2005 dump matches every hardware detail of the 2004 manual. The manual is not redistributed in this repository.

[External-source correction](EXTERNAL_SCALE_CHECKS.md): the old logger conversions were guesses, not measurements. No physical-unit verification depends on them.

[Wider Denso/Yamaha scaling research](WIDER_SCALING_RESEARCH.md) compares actual external XDFs and sensor formulas, with an applicability record for all 71 maps. The [pressure-estimate trace](PRESSURE_ESTIMATE.md) adds 212,800 execution checks for source selection and accepted-window tracking; physical kPa remains open.
