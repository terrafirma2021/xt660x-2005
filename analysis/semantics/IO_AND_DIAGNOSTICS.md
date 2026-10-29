# Inputs, outputs and diagnostic evidence

For serial commands, menu navigation, reply packing and fault numbers, see [Dashboard diagnostic protocol](DIAGNOSTICS.md). This guide covers the corresponding hardware identities.

## Why the diagnostic table matters

At `0x5FC8`, a byte count from `0x4EF5` controls a copy from `0x4EF6` into RAM `0x0D3D`. The count is 21. Those bytes are diagnostic selectors. The display routine at `0x650B` compares the selected number at `0x0BDD` with the copied entries and returns the corresponding measurement. The actuator dispatcher around `0xAF92` selects output-test routines using the same table.

The [Yamaha manual](README.md#sources) identifies diagnostic 01 as throttle, 03 as intake pressure, 05 as intake temperature, 06 as coolant, 07 as vehicle-speed pulses, 08 as lean angle, and 09 as supply voltage. Actuator codes 30, 36, 48, 51 and 52 identify ignition, injector, air induction, fan and headlight respectively. This is independent corroboration of the software paths.

| Code | ROM selector | RAM selector | Firmware result / action |
|---:|---|---|---|
| 01 | `0x4EF6` | `0x0D3D` | `0x650B` selects `0x0AE9`, written by `0x6996` |
| 03 | `0x4EF7` | `0x0D3E` | Selects `0x0AEA`, written by `0x6AA5` |
| 05 | `0x4EF8` | `0x0D3F` | Selects `0x0AEB`, written by `0x6FC2` |
| 06 | `0x4EF9` | `0x0D40` | Selects `0x0AE8`, written by `0x70A3` |
| 07 | `0x4EFA` | `0x0D41` | Selects `0x0AE3`, derived from pulse counter `0x0AB0` |
| 08 | `0x4EFB` | `0x0D42` | Selects `0x08DD`, written by `0x71EB` |
| 09 | `0x4EFC` | `0x0D43` | Selects `0x0AEC`, written by `0x6C5E` |
| 30 | `0x4EFF` | `0x0D46` | `0xAFC9 → 0xB900`, timer compare `0x0056` |
| 36 | `0x4F00` | `0x0D47` | `0xAFCE → 0xB97F`, timer compare `0x005C` |
| 37 | `0x4F01` | `0x0D48` | `0xAFD3 → 0xBA06`, timer compare `0x005E`; not identified in this manual's actuator list |
| 48 | `0x4F02` | `0x0D49` | `0xAFD8 → 0xBA8D`, `0x00F0` mask `0x02` |
| 51 | `0x4F04` | `0x0D4B` | `0xAFE2 → 0xBB45`, `0x00F0` mask `0x04` |
| 52 | `0x4F05` | `0x0D4C` | `0xAFE7 → 0xBBA1`, `0x00F0` mask `0x10` |

Code 37 is retained as an unidentified/secondary channel, not silently equated with a second installed injector. The stock variant byte is 9; the normal timer-7 injector entry immediately returns for this variant.

## ADC dispatch

`0x68CF` reads word `0x0096` into `0x08CA`. The low three bits of `0x0085` select one of eight big-endian pointers at `0x6968`. `0x68E7` calls the selected routine with the sampled word in D. Under the working MCU register map, these registers are ATDDR3 and ATDCTL5. **Result register number 3 is not the physical sensor-channel number**; channel selection comes from ATDCTL5.

| ADC selection | Handler | Identification | Useful RAM |
|---:|---|---|---|
| 0 | `0x6996` | Throttle position; diagnostic 01 | Raw/shared `0x08CA`; ten-bit `0x08D0`; diagnostic `0x0AE9` |
| 1 | `0x6AA5` | Intake pressure; diagnostic 03 | Raw `0x0CA2`; diagnostic `0x0AEA` |
| 2 | `0x6AF6` | Unconfirmed; oxygen-feedback candidate | `0x08DC`, flags `0x09A1` |
| 3 | `0x6FC2` | Intake temperature; diagnostic 05 | Raw high byte `0x08D8`; converted `0x08F5` |
| 4 | `0x6C5E` | Fuel-system supply voltage; diagnostic 09 | Raw high byte `0x0BCE`; effective `0x08D9`; diagnostic `0x0AEC` |
| 5 | `0x71EB` | Lean-angle input; diagnostic 08 | Raw high byte `0x08DD` |
| 6 | `0x70A3` | Coolant temperature; diagnostic 06 | Raw word `0x08D6`; measured `0x08F6`; effective `0x08F4` |
| 7 | `0x707C` | Unidentified analogue input | `0x08D2`, `0x08D4`, `0x0BFC` |

The normal scheduler does not give all channels equal priority. Over a 16-step cycle, next-channel selections from `0x68E9–0x692E` are `4,0,2,1,4,0,5,6,4,0,2,3,4,0,5,6` when indexed by counter low nibble 0–15. Channel 7 is present in the dispatch table but absent from that repeating schedule. Startup/recovery and alternate dispatch helpers also exist. No sampling frequency in seconds is asserted without confirming the timer clock.

## Logical outputs versus connector pins

| Logical MCU signal | Role supported by diagnostic path | Normal control anchors |
|---|---|---|
| PT3 / timer channel 3, compare `0x0056` | Ignition coil | `0x5664`, `0xED29`, `0xEE78`, `0xEF6D` |
| PT6 / timer channel 6, compare `0x005C` | Primary injector | `0xF519 → 0xC55B` |
| PT7 / timer channel 7, compare `0x005E` | Secondary injector-like code path | `0xF592 → 0xC712`, disabled here by variant 9 |
| PP2, `0x00F0` mask 4 | Fan relay | `0x7190–0x71CC` |
| PP1, `0x00F0` mask 2 | Air-induction solenoid | Output identity established; full control strategy pending |
| PP4, `0x00F0` mask 16 | Headlight relay | Output identity established; full control strategy pending |

The MCU names come from the [NXP register definitions](README.md#sources). Firmware writes establish the logical state. They do not establish connector cavity numbers, driver inversion, external voltage levels, or whether unused channel circuitry is populated. Those fields intentionally remain null in `catalog.json`.

Timer channel 1 is the crank-event candidate (`0xD871`, capture `0x0052`); timer channel 2 counts the signal independently tied to vehicle-speed diagnostic 07 (`0xF3F3 → 0x0AB0 → 0xCDC0 → 0x0AE3`). Confirm crank tooth geometry and both external routes with matching ECU/harness evidence.
