# Extended map recovery

The catalogue now contains **68 maps and curves**: 16 grids, 36 uniform-axis curves, 14 precomputed-axis curves and two sensor-conversion curves. This pass adds 22 layouts to the earlier 46. All have individual [breakdowns](../MAP_DETAILS.md), exact stock values and byte extracts. Stored axes and threshold lists total 32; computed axes are embedded in each map record.

This is structural and raw-dataflow recovery. Complete engineering-unit definitions and identification of every remaining calibration are still open work.

## Twelve transient gains

Two families of six 23-byte curves begin at cell addresses `0x336B` and `0x33F7`. Their biased pointers overlap preceding bytes; they have no uniform-axis header. Calling `0xC1DB` with indices computed by `0xCC7B` explains why the earlier immediate-pointer/header scan missed them.

For speed code `v = RAM[0x0900]`, let `u = clamp(v − 4096, 0, 55296)`. The Q8 index is:

- `u // 4` below `10240`;
- `u // 8 + 1280` from `10240` to below `14336`;
- `u // 16 + 2176` thereafter.

The spacing therefore changes from 1024 to 2048 to 4096 speed-code units. A uniform RPM axis would misrepresent these tables. The index is bounded at `22 × 256`, establishing 23 cells in each curve. All 65,536 possible input codes have been tested against the translated helper.

The first family writes gain `0x098D`. Its source delta compares the high bytes of throttle path `0x08E8` and filtered path `0x08EA`, with mode-dependent offsets and deadband logic at `0x793D–0x7A2C`. The second writes gain `0x098E` and uses the high-byte difference between `0x0C8C` and filtered `0x08F0` at `0x7878`. The second input's physical meaning still needs its upstream path resolved.

Selection uses encoded delta bytes `0x0985`/`0x0989`, variant `0x0D87`, flag `0x0896:0x10`, and mode code `0x0898`. **Bit 7 of these encoded bytes is not the original delta sign:** a negative magnitude is encoded as `0x80 − magnitude`, and a positive magnitude as `0x80 + magnitude`. Per-map records state the actual bit conditions to avoid reversing the two groups. A magnitude at or below its deadband is zeroed.

The selected gain is multiplied by the capped magnitude (maximum 127). The paths form centered values around `0x8000` at `0x0986` and `0x098A`. Their signed contributions are combined and scaled with coolant-dependent values `0x098F`/`0x0990` into `0x0982`; fuel computation consumes this at `0x823D` and `0x8272`. This establishes a transient fuel-correction connection; it does not establish a percentage or time unit for each cell.

## Four step grids

| Cells | Size | Inputs | Immediate result | Consumer |
|---|---|---|---|---|
| `0x4C44` | 20 × 10 | Speed `0x0900`, throttle `0x08E8` | `0x0ACD` | Air-induction control at `0x9D03` |
| `0x4D48` | 20 × 10 | Speed `0x0900`, load code `0x0C90` | `0x0ACE` | Air-induction control at `0x9D0B` |
| `0x35B0` | 10 × 10 | Speed `0x0900`, throttle `0x08E8` | `0x09AE` | Feedback eligibility at `0xA5A9` |
| `0x363C` | 10 × 10 | Speed `0x0900`, load code `0x0C90` | `0x09AF` | Feedback eligibility at `0xA5B3` |

These use **no interpolation**. The index is the number of thresholds strictly below the input. At equality the lower bin wins. There are nine active column thresholds and either nine or nineteen active row thresholds. Each stored list also has a following word that these routines do not compare; the breakdown records it explicitly rather than presenting it as an active breakpoint.

The two air-induction grid results must both be nonzero to advance the qualification counter `0x0ACF` toward ROM threshold `0x4C02`. Other conditions and overrides also affect PP1 (`0x00F0:0x02`). The diagnostic path independently identifies PP1 as the air-induction solenoid. The feedback grids reject eligibility when either returns zero; additional temperature, transient, fault and mode gates determine `0x09A1:0x80`. Oxygen-feedback interpretation remains a candidate because the corresponding ADC identity is not independently confirmed.

## Spark-path tables

The two 29-point speed curves at `0x4F64` and `0x4F81` use helper `0xC28D` with one row. Variant 9 selects the latter. Index `0x0918` is derived from instantaneous speed `0x08F8` through `0xCC63`, with 2048-code spacing from 4096 to 61440. Their result at `0x0A8B` is consumed in the spark scheduling path at `0x5502`.

The 15 × 9 grid at `0x4B12` takes speed `0x0900` and supply code `0x08D9`. Low supply inputs below 26 substitute 179 before indexing. Column knots are `83 + 16k`; row knots are `4096 + 4096k`. Interpolation rounds the two column results to bytes before interpolating and rounding along rows. Treating it as a single floating-point bilinear expression can differ by one cell unit.

Its rounded result is multiplied by 32 into `0x0A98`; a second contribution is added and the request is limited into `0x0A96`. A flag can override the table with ROM `0x4BAB`. The timing/dwell interpretation is supported by its output path, but electrical dwell duration and timer units remain unresolved.

## A curve copied into RAM

The 27 bytes at `0x1854–0x186E` are copied to `0x0DBA` by `0x6244–0x6258`. They contain a six-byte uniform-axis header and 21 byte cells. Routine `0x95FD` then passes the **RAM** pointer to `0xC1F2`, with pressure-derived input `0x08F2`, producing `0x0C92`. The header is minimum `0x7200`, span `0x5000`, factor `0x0040`. An alternate structurally recovered path at `0xEA1B` uses the RAM table through `0xF3B7` and writes `0x0C93`; its reachability is not asserted.

The copy and normal lookup were exercised together. Mutable RAM-table consumers are a remaining search target; a ROM-only pointer scan cannot prove complete map coverage.

## Remaining bytes and verification

Map cells, actual headers and used axes account for **13,440 of 14,336 calibration bytes**. Of the other 896 bytes, 37 are covered by the earlier focused semantic catalogue, 552 have static memory accesses whose broader meaning needs further work, and 307 have neither a classified layout nor a resolved static access. These last bytes include metadata/fill and indirect-data candidates; they are not all missing maps.

[Remaining calibration work](../REMAINING_CALIBRATIONS.md) lists every outstanding span. [Static access records](../calibration_accesses.json) retain 502 distinct address/width/access combinations with exact instructions and values. This replaces guessing scalar widths from neighboring addresses.

The [extended validation report](extended_map_validation.json) records **150,614 cases**, including full-domain computed-index checks, all step-threshold boundaries, non-flat synthetic cells, transient selectors, special-grid fractions, the RAM copy and checksum success/failure. These are isolated software checks, not live ECU validation.
