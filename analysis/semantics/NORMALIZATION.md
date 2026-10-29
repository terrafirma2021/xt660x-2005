# Fuel normalization: code, selection and quantity effect

The two 2×2 tables have a decoded **inverse-ratio input-code** meaning. They are not established AFR targets. Their raw bytes cannot be replaced with direct fuel percentages: offset, another map, a reference byte, rounding and bypass branches all intervene. This completes their arithmetic interpretation, not their physical-axis or tuning sign-off.

## Exact path

| Stage | Firmware evidence | Behaviour |
|---|---|---|
| Load lookup | `0x7E60–0x7EA1` | Speed `0900`, processed load `0C90`; cells `311E–3121`; rounded result `CD2` |
| Throttle lookup | `0x7EA2–0x7EE3` | Speed `0900`, relative throttle `08E8`; cells `312A–312D`; rounded result `CD3` |
| Select | `0x7EE4–0x7EF3` | `ROM[3114] == 128` selects `CD2`; every other value selects `CD3`, stored in `CD1` |
| Offset and clamp | `0x7EF6–0x7F0B` | `CD0 = clamp(CD1 + CD4 - 128, 0, 255)` |
| Denominator gain | `0x7F0E–0x7F4D` | Combined code `CD0`, processed load `C90`; cells `321C–321F`; rounded result `CD5` |
| Inverse ratio | `0x7F50–0x7FA8` | Reference `ROM[1ACE]`, combined code and denominator gain produce Q8 multiplier `CE2` |
| Four quantity outputs | `0x7FAB–0x7FD5` | Apply `CE2` to `0952/0954/0956/0958`, storing `CE4/CE6/CE8/CEA` |

The [instruction extract](variant_units_evidence.txt) contains these bytes and instructions. The [executable model](../../scripts/decode_units.py) implements the ratio in `normalization`.

With `c=CD0`, `g=CD5`, `r=ROM[1ACE]`:

```text
d = floor(((c + 128) * (2*g) + 128) / 256)
if c == 0 or g == 0 or r == 0 or d == 0:
    factor_q8 = 256
else:
    quotient_q16 = floor((r + 128) * 65536 / d)
    factor_q8 = min(65535, floor((quotient_q16 + 128) / 256))
output_quantity = min(65535, floor(input_quantity * factor_q8 / 256))
```

`factor_q8 * 100 / 256` is a percentage of the quantity entering **this stage**. It is not a percentage of final injected fuel; subsequent gains, blending, limits and compensation still apply. The selected code also indexes the gain map, so the two stages are coupled if that map is edited.

## Stock selection and a fixed-reference example

The image has `ROM[3114]=0`, both input tables filled with `166`, the gain table filled with `128`, and `ROM[1ACE]=166`. The normal offset state is disabled by `ROM[3130]=255`; its disabled path resets `CD4=128`. The throttle table is therefore selected and the normal stock ratio is unity. The load table is still evaluated; being evaluated does not mean its value is selected.

Holding **gain 128, reference 166 and offset code 128** fixed gives:

| Selected code | Q8 factor | Percentage at this stage |
|---|---|---|
| 0 | 256 | 100% — bypass |
| 1 | 583 | 227.734375% |
| 64 | 392 | 153.125% |
| 128 | 294 | 114.84375% |
| 166 | 256 | 100% |
| 192 | 235 | 91.796875% |
| 255 | 197 | 76.953125% |

These are arithmetic examples, not recommended calibration values. Ignoring quantization, the nonzero fixed-gain relationship is `294/(code+128)`. The code-zero bypass breaks that relationship. The offset can also clamp a positive selected code to zero and enter the bypass. Zero gain or reference likewise means unity, not fuel cut.

**Interpolate codes first.** The firmware rounds the interpolated code before computing the inverse ratio. Interpolating percentages converted at the cell corners does not reproduce this nonlinear calculation. A future XDF or custom editor must preserve that distinction and the saturation/bypass rules.

## Execution evidence

The [unit and variant report](units_variant_validation.json) now records **219,324 passing cases**. The expanded normalization coverage includes:

- All 65,536 combined-code/gain byte pairs at the stock reference.
- 1,000 synthetic varied-reference cases.
- All 256 selector-byte values: equality with `128`, not a bit test.
- All 65,536 selected-code/offset pairs, checking `CD1` preservation and `CD0` saturation.
- 4,608 complete paths from both input lookups through selection, offset, gain lookup, division and all four quantity writes. These exercise every selected byte with both selectors, offsets `0/128/255`, gains `0/128/255`, random input coordinates, and quantities `0/1/1000/65535`.
- 12 asymmetric corner cases across the three grids, distinguishing row and column orientation.

Tests execute the compiled instruction translation with RAM-backed peripherals and synthetic values. They do not execute on a physical ECU, establish the oscillator, prove all operating modes, or prove that the code represents AFR. The report binds the image, model, test source and compiled-library hashes.

## Still required

Speed remains conditional on clock and crank geometry. `C90` still needs a complete physical pressure/load interpretation; the throttle coordinate still needs its mechanical transfer. Whole-engine behaviour, editing limits and bench validation remain open. Both maps retain `ready_for_tuning_export=false`.

See the [load dossier](../map_details/fuel_normalization_load.md), [throttle dossier](../map_details/fuel_normalization_throttle.md), [gain dossier](../map_details/fuel_normalization_gain.md), and [all-map status](MAP_RESOLUTION.md).
