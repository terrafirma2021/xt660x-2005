# Map selectors: neutral input, road/crank ratio and speed sequence

Following the writers behind the map switches resolves more than the old selection letters. This pass identifies a road-pulse-per-crank classification behind `0x0898`, the filtered neutral input behind `0x0896` bit 4, and a four-stage road-speed sequence behind `0x0B80` bit 0. The latter cannot complete from a cleared detector state with the supplied calibration. These are code-derived roles, not recovered Yamaha symbol names.

The [instruction fixtures](../../scripts/test_map_selectors.py) and [validation report](map_selector_validation.json) reproduce the branch decisions against the compiled full instruction translation. Firmware files are unchanged. A successful synthetic sequence changes calibration bytes in emulator memory only.

## Road-speed pulses become a ratio code

`0xF409` increments the 16-bit road-speed edge counter `0x0AB0` in the timer-2 handler. The crank handler samples this counter when synchronized (`0x0BFE` bit 7) and the masked longer crank phase `0x0922 & 0x1F` is 0 or 12 (`0xE0F5–0xE10F`). Under the established crank-pattern interpretation, those are successive revolution boundaries; see [crank reference](CRANK_REFERENCE.md).

At `0xE10F–0xE12E`, the current snapshot replaces `0x0AC2`, the previous snapshot moves to `0x0AC4`, and the unsigned 16-bit difference is saturated to 255 into `0x0AC0`. The first sample is suppressed. This measures road-speed pulses between crank boundaries, so it is a speed ratio rather than road speed alone or a direct gear-position input.

The sample is multiplied by `0x0D7F` (stock ROM `0x4BD7 = 20`) and passed through two bounded integer filters at `0xE132–0xE24A`, with states `0x0AC8` and `0x0ACC`. The filter coefficient is `0x0D80` (ROM `0x4BD8 = 60`); fractional residues and their signs are retained at `0x0AC6/7`, `0x0ACA/B` and `0x0ABF`. No physical speed or gear label is needed to establish the following classifier.

For variant 9, `0xE24D–0xE292` compares the filtered byte `0x0ACC` with five ROM-derived thresholds:

| Filtered byte | Ratio code | One-hot mask |
|---|---|---|
| 0–38 | 0 | `0x01` |
| 39–95 | 1 | `0x02` |
| 96–140 | 2 | `0x04` |
| 141–188 | 3 | `0x08` |
| 189–229 | 4 | `0x10` |
| 230–255 | 5 | `0x20` |

Thresholds originate at `0x4BD9–0x4BDD` and are copied to `0x0D81–0x0D85`. Equality enters the upper bin. The raw code/mask go to `0x0BCA/0x0BCB`. Other variants take code 5. At `0xE34D–0xE361`, active fault 42 (`0x08B1` bit 3) overrides the output to code 5/mask `0x20`; otherwise the raw pair is published to `0x0898/0x0899`.

An instruction pair at `0xE294–0xE296` can prepare code 6/mask `0x40`, but no incoming normal branch or call to that entry has been identified. Normal classification branches jump over it into the shared continuation at `0xE298`. The automatic function name `candidate_unreferenced_e294` does **not** make that shared continuation unreachable. Conversely, the presence of the code-6 literal does not prove a normal sixth gear or a TDM mode. Missing boot code and unknown indirect entries preclude a whole-device reachability claim.

The XT manual lists five gears (printed page 2-9 / PDF page 35). Code 0 also occurs with no road pulses; it is not synonymous with neutral. The separate neutral input has priority in the consumers below.

### Evidence audit: gear interpretation and unknown pulse count

The earlier version chose **20 detected speed pulses per output-shaft revolution** as a numerical-fit hypothesis. That number was not read from a sensor specification, established by a board/gear inspection, or measured on this motorcycle. Executing the firmware with pulse counts generated from that assumption demonstrated consistency only. It did not independently validate the assumption or identify the gears. The earlier first-gear/higher-gear conclusion from that fit is withdrawn.

| Statement | Evidence | Status |
|---|---|---|
| Primary reduction `75/36`; gear ratios `30/12`, `26/16`, `23/20`, `20/22`, `20/26` | Yamaha XT660R/X service manual, printed page 2-9 / PDF page 35 | Documented mechanical specifications |
| Pulse-count multiplier is decimal 20 | ROM `0x4BD7 = 0x14`, copied to `0x0D7F`; multiplication at `0xE132–0xE138` | Direct firmware evidence; **not** a sensor pulse-count specification |
| Classifier thresholds are 39, 96, 141, 189, 230 | ROM `0x4BD9–0x4BDD`; comparisons at `0xE254–0xE286` | Direct firmware evidence |
| Fault 42 forces output code 5 | `0xE34D–0xE361`; covered by all classifier-input/fault-override fixtures | Direct firmware evidence |
| Fault 42 substitutes top gear | Yamaha manual, printed page 7-5 / PDF page 348: “Fixes the gear to the top gear.” | Manufacturer-described fail-safe behavior |
| Code 5 represents the top-gear substitute | Correlation of the preceding two independent observations; XT has five gears | Corroborated interpretation, without assuming a pulse count |
| Sensor generates 20 detected pulses per output-shaft revolution | No independent source or measurement established | **Unverified; not used to assign physical map names** |

The actual detected pulse count, sensing target and shaft relationship still need independent evidence. The manual's fault-42 checks (printed page 7-18 / PDF page 361) describe the speed-detection gear and sensor voltage checks; those checks do not specify 20 pulses per revolution. Neither the MCU model nor the software multiplier supplies that missing hardware fact.

The test script and report retain the former 20-pulse experiment for reproducibility, explicitly as a **synthetic hypothesis test**. Its 3,000 simulated revolutions are not motorcycle measurements or independent gear validation. The map names continue to use the directly tested ratio-code branches. No numbered-gear assignment for codes 1–4 is claimed from that experiment.

## Neutral input and map branches

`0x8B45–0x8B57` filters PORTB (`0x0001`) into `0x0896`, retaining the previous raw sample in `0x0897`. A bit changes its stable state only after two matching consecutive raw samples. Diagnostic 21 connects bit 4 to the neutral input for variant 9; see the [pin reference](MCU_PIN_OVERVIEW.md).

The XT manual identifies diagnostic 21 as neutral status (PDF page 354), and shows the neutral switch grounding its wire (PDF page 387). This corroborates the low-active interpretation. The precise, tested meaning of **neutral-input branch** here is variant 9 with filtered PB4 low. Internal board conditioning and dashboard ON/OFF payload polarity have not been independently measured, so this wording preserves the electrical branch condition.

| Family | Neutral-input branch | Otherwise, lower/equal code | Otherwise, greater code | Stock split |
|---|---|---|---|---|
| Base ignition | `main_u8_A` | `main_u8_B` | `main_u8_C` | 5 at `0x4245` |
| Nonnegative throttle delta | `delta_0985_gain_1` | `delta_0985_gain_2` | `delta_0985_gain_3` | 5 at `0x3369` |
| Negative throttle delta | `delta_0985_gain_4` | `delta_0985_gain_5` | `delta_0985_gain_6` | 5 at `0x336A` |
| Nonnegative load delta | `delta_0989_gain_1` | `delta_0989_gain_2` | `delta_0989_gain_3` | 5 at `0x33F5` |
| Negative load delta | `delta_0989_gain_4` | `delta_0989_gain_5` | `delta_0989_gain_6` | 5 at `0x33F6` |
| Transient response 1 | `curve_34d0` | `curve_34da` | `curve_34e4` | **1** at `0x34CF` |
| Transient response 2 | `curve_355d` | `curve_3567` | `curve_3571` | 5 at `0x355C` |

The normalization recovery-hold pair has no neutral override at its lookup: `0xA448–0xA455` selects `curve_31ec` for ratio code <= ROM `0x31EA` (stock 5), otherwise `curve_3200`. The result at `0x09D9` is latched into `0x09D7` and compared with the 10-ms-task counter `0x09DD` before recovery starts (`0x8E2F`, `0xA8C9`). Its consuming state is disabled by stock ROM `0x3130 = 0xFF` (`0x8DF9`). Thus the former “selection 1/2” pair also has concrete normal/extended ratio-code names.

Selector instructions are at `0x8885–0x88A3`, `0x7A38–0x7A7B`, `0x78C5–0x7908`, `0x9244–0x9262`, and `0x9465–0x9483`. Delta direction is the existing centered internal encoding: bit 7 set is the nonnegative side, including zero/deadband; bit 7 clear is negative. It is not a physical rate unit.

The split at 5 means the **extended ratio-code** branch is not selected by the recovered normal classifier's 0–5 outputs. Fault 42 also selects 5, not 6. The first transient family really does divide the normal range: codes 0–1 versus 2–5. It would be wrong to give every B/C pair the same gear-mode names. Likewise these branches do not identify cylinders, octane grades or rider modes.

## Alternate load-fuel sequence

The sole identified direct setter of `0x0B80` bit 0 is `0xAF20`. The consumers at `0x7CF0` and `0x7D62` choose the normal load-fuel surface (`main_quantity_A`, cells `0x1B66`) when clear and the alternate surface (`main_quantity_C`, cells `0x37A8`) when set.

`0xAD1C–0xAF20` is a four-stage sequence detector operating on filtered road-speed code `0x0ABE`. Any enabled reset condition clears flags and counters `0x0B80–0x0B8B`: TPS fault 15/16, intake-pressure fault 13/14, speed/neutral fault 42, or throttle high byte `0x08E8` greater than ROM `0x370E` (stock 41). Initial qualification also requires ratio code `0x0898 == ROM 0x4E8D` (stock 2).

| Stage | Road-speed band ROM | Stock band | Qualified duration ROM | Stock duration | Delay before checking band |
|---|---|---|---|---|---|
| 1 | `0x36EF–0x36F0` | 255–255 | `0x36F2 / 0x36F4` | 1100–1300 | None |
| 2 | `0x36F8–0x36F9` | 255–255 | `0x36FA / 0x36FC` | 900–1500 | `0x36F6`: 500 |
| 3 | `0x3700–0x3701` | 255–255 | `0x3702 / 0x3704` | 500–800 | `0x36FE`: 1200 |
| 4 | `0x3708–0x3709` | 255–255 | `0x370A / 0x370C` | 500–850 | `0x3706`: 350 |

Durations are invocation counts in this table, not asserted seconds; bands are internal speed codes, not km/h. Both band ends and duration ends are inclusive. A stage counts in-band calls, then checks the accumulated duration on leaving the band. After its delay, the same call can begin counting the next band. Successful exits set stage bits 6, 4 and 2; stage 4 finally sets bit 0. Counters saturate rather than wrap. Once bit 0 is latched, the early reset gates still apply.

The decisive stock setting is the shared timeout word **`0x3710 = 0`**. On entering any later stage, the code increments `0x0B8A` before comparing it with this word. The first increment from zero to one immediately resets the detector. Thus even a valid first-stage duration cannot reach the second-stage band with stock calibration. This is a structural code-path result from cleared state, supported by tests at all first-stage boundaries and all 256 speed bytes at each later-stage entry.

The map's accurate name is therefore **Sequence-selected alternate load fuel quantity**. It is inactive through this stock detector path, not an established high-load, twin-cylinder or rider-mode map. The sequence's original design purpose has not been recovered. No change to enable it has been made.

## Validation and remaining trace work

The report contains 12,523 instruction-execution cases: every byte of the classification input, every selector code for each tested variant/neutral/sign combination, both normalization-hold choices, fault override, neutral filtering, pulse snapshot rollover/saturation, 3,000 synthetic revolutions through an unverified 20-pulse hypothesis and full filters, stock sequence boundaries and timeout resets, and a complete synthetic four-stage sequence with latch/reset behavior. Of these cases, 9,523 check instruction behavior and 3,000 exercise the explicitly assumed pulse model. This total is not a count of physical facts validated. Tests stop at documented block boundaries; they are not a full boot or hardware simulation.

This resolves selector names for 25 map entries. Remaining software work includes transient-family trigger meanings, other ignition correction/state gates, indirect calibration references and protocol-controlled state. Actual gear numbering, mechanical TDC, board-conditioned sensor scales and absent boot bytes remain distinct evidence gaps. A known instruction set makes the software trace possible; it cannot supply bytes missing from the dump or external component geometry.

Sources: [Yamaha XT660R/X service manual](https://scootertuub.nl/motoren/Yamaha/Yamaha%20XT%20660%20R%20X%202004%20Service%20Manual%20%20.pdf), printed pages 2-9, 7-5, 7-11, 7-18 and 8-5; [unchanged disassembly](../disassembly.tsv); [complete instruction translation](../full/README.md).
