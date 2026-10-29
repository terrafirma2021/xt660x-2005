# Map consumers: fuel, adaptation and injection phase

This pass follows stored maps through their consumers, rather than assigning units from table appearance. [map_models.py](../../scripts/map_models.py) provides independently written integer formulas; [execution results](map_consumer_validation.json) compare them with the compiled original instructions. [Per-map resolution status](MAP_RESOLUTION.md) and [physical_units.json](physical_units.json) record the results for all 71 layouts.

**A resolved numeric contribution is not necessarily a resolved physical unit.** Some tables contain gains, thresholds, event codes or logical gates. Others only have a meaningful pulse duration when combined with additional tables. Milliseconds, seconds and RPM remain conditional on the clock/crank profiles in [UNIT_DECODING.md](UNIT_DECODING.md). Absolute BTDC and the conflicting temperature scale remain open.

## Corrections to earlier labels

| Map | Corrected interpretation | Evidence |
|---|---|---|
| `modulo24_surface`, cells `0x1914` | Injection event-phase target; not fuel quantity | `0x7B92 → 0xEC98 → 0x0A1E/0x0A1C → 0xF4F2` |
| `correction_surface_A`, cells `0x1A1A` | Secondary injector quantity multiplier; cell 128 is unity | `0x84FA`, also startup/transient consumers |
| `correction_surface_B`, cells `0x3168` | Centered correction to common normalization, latched through `09D6 → CD4` | `0x8E29`, `0x8E59`, `0x7EF6` |
| `correction_surface_D`, cells `0x4A60` | Alternate base spark code selected in a special mode; replaces the normal base | `0x8979`, `0x899E` |
| `curve_4a33`, cells `0x4A36` | Coolant-indexed threshold on filtered relative throttle position, not spark-angle correction | `0x96BA` compares A89 with 08EC |
| `curve_3494`, cells `0x349A` | Speed-indexed threshold on the same relative-throttle quantity | `0x8FAA` |
| `curve_36a4` / `curve_36b2` | Adaptive decrement/increment **steps at state transitions**, not bounds | `0xA6D3–0xA73A` |
| `curve_1880` | Centered **additive** pressure-processing offset, not a multiplier | `0xB284–0xB2A1` |
| `curve_31ec` / `curve_3200` | Conditional hold counts before normalization correction recovery | `0x8E2F`, `0xA8C9` |

The relative-throttle quantity is `08E6`, a filtered version of `max(ADC10 - learned_closed,0)`. At `0x8F82`, it is capped at 255 into `08EC`. The two threshold curves therefore use ten-bit ADC-count increments above learned closed. They do **not** measure a rate of throttle movement. Angle conversion is still conditional on sensor geometry.

## Exact normal fuel gain

The two coolant curves `0x3315` / `0x3327` feed separate gain lanes through bytes `097B` / `097C`. The following notation separates the arithmetic from interpretation:

```
s = high_byte(0992)             selected post-start enrichment state
c = 097B or 097C                coolant curve result
o = 0980                       centered byte correction
t = 0982                       centered transient word
a = 097E                       centered adaptive word

pre = ((2048 + 64*s + 16*c + 4*(o-128)
        + (t-32768) + ((a >> 5)-1024)) & 0xFFFF) >> 1

Q8(value,factor) = min(65535, floor(value*factor/256))
corrected = Q8(Q8(pre,0979+384) >> 1, 097A)
gain_load     = Q8(corrected,0970)
gain_throttle = Q8(corrected,0978)
```

The source uses word arithmetic without saturation inside the initial `pre` expression. The mask is intentional: extreme synthetic combinations can wrap. The model preserves that behavior; the storage range is not an allowable tuning range.

For interpreting contribution sizes, normalize `pre` by 1024. With `s=c=0`, `o=128`, `t=a=32768`, `IAT=128`, `097A=128` and both pressure gains 128, the final Q8 gain is 256, or unity. Before later factors and rounding:

| Input contribution | Normalized effect |
|---|---|
| One selected post-start code | +3.125 percentage points |
| One coolant-curve code | +0.78125 percentage points |
| One centered `0980` code above 128 | +0.1953125 percentage points |
| One centered transient-word count above 32768 | +100/2048 percentage points |
| One adaptive-word count above 32768 | Approximately +100/65536 percentage points, quantized by shifts |

These are additions to a reference gain, not standalone percentages of the final pulse. Temperature, pressure, transient and channel gains subsequently multiply the result. The code paths for forced calibration modes bypass parts of this normal calculation.

### Pressure factors

The pressure-indexed curve `0x323C` and `correction_surface_C` combine as:

```
0970 = min(255, floor(curve_323c * correction_surface_C / 128))
```

Both are 128-centered reference multipliers, but their product is capped at 255 before use. Editing one can therefore have no further effect after the combined value saturates. `curve_32e0` supplies the other lane's pressure factor `0978`. Its reference value is also 128. This does not make the processed-load axis a directly measured kPa axis.

### Post-start states

`curve_32ef` / `curve_3301` initialize Q8 words `0994` / `0996`. On each execution of this fuel-update block:

```
0994 = 2 * max(0, floor(0994/2) - ROM[3313])
0996 = 2 * max(0, floor(0996/2) - ROM[3314])
0992 = max(0994,0996)
```

Stock decrement bytes are 123 and 2, respectively. The curves describe enrichment amplitudes with different decay rates, not two tables to add together. The gain calculation takes only the selected state's high byte. The exact seconds-to-decay cannot be obtained by assuming this fuel-update block executes at a fixed wall-clock interval in all modes.

## From gains to normal injector requests

After the common normalization already described in [UNIT_DECODING.md](UNIT_DECODING.md), `CE4/CE8` carry the primary load/throttle quantities. Centered correction byte `95C` contributes `4*(95C-128)` **timer ticks** to each, with word saturation. The two gain products are:

```
A = Q8(clamp(CE4 + 4*(95C-128),0,65535),0960)
B = Q8(clamp(CE8 + 4*(95C-128),0,65535),0964)
mix = floor(B*0998/256) + floor(A*(255-0998)/256)
```

The blend weights sum to **255**, not 256. Even equal quantities are therefore slightly attenuated. The optional `0AD4` reduction, ROM `19DA/19DC` quantity bounds, optional global factor, and additive compensation follow. The integer model includes the original reduction expression's word wrapping outside its expected operating range.

When `0CA8:1` is clear, the global factor is `ROM[19D4]*4/256`, rounded to nearest integer tick and saturated. Stock `19D4=32` makes that factor **one half**. When the bit is set, that factor is skipped. The result plus `095E` becomes the primary duration request `092A`. A main-table cell expressed in nominal milliseconds is therefore not the final pulse duration.

The secondary calculation uses `CE6/CEA`, `95D`, `0962/0966`, and the same blend. It then applies `correction_surface_A` as `2*CEC/256`, with rounding, **before** its normal quantity bounds and global factor. There is an early overflow branch that sets the request to `0xFFFF` and skips the later bounds. The two chains are not interchangeable in a faithful simulator. Variant 9 skips the normal secondary injector scheduler; these arithmetic paths can still be present in shared code.

`curve_34b0` scales a centered additive correction at `0x8623`:

```
result = clamp(128 + signed_round((input-128)*cell/256),0,255)
```

Thus this curve is a Q8 gain on a correction around 128. It does not multiply the whole fuel pulse directly.

## Startup fuel and separate transient pulses

The startup base `curve_1996` retains its Q8 interpolation result in `0934`. Its complete product is:

```
g = Q8(speed_cell * throttle_cell, IAT_cell+384)
g = Q8(g, pressure_cell)
startup_ticks = min(65535, floor(g * base_Q8 / 16384))
```

The speed/throttle/pressure curves are `19A8`, `19BA`, `19C6`; IAT is `3220`. With reference values 128 for these cells, one integer startup-base cell represents 256 timer ticks, nominally **0.512 ms**. Fractional interpolation, product saturation and later compensation still apply.

The extra transient-pulse families `34D0/34DA/34E4` and `355D/3567/3571` use a different joint equation:

```
P = pressure curve 353A
C = coolant curve 34FD
I = IAT curve 351D
R = selected transient-response curve
T = throttle curve 34EE

g = Q8(P*C,I+384)
extra_ticks = min(65535,floor(g*R*T/16384))
```

Ignoring integer effects, this can be expressed as `2*C*R` ticks times the normalized factors `P/128`, `T/128`, and `(I+384)/512`. The literal helper multiplier `(I+384)/256` in the earlier catalogue is the same calculation with the factor of two left in that stage. Neither representation assigns an independent measured duration to C or R alone. Their separate cell-unit fields remain unset; their **joint arithmetic is now decoded**. Eligibility conditions, pulse accumulation and scheduling remain separate from this product.

## Twelve delta-gain maps

The six `delta_0985_gain_*` curves multiply a signed throttle-coordinate delta. The six `delta_0989_gain_*` curves multiply a signed load-processing-coordinate delta. Both magnitudes are capped at 127 before these stages.

```
combined = clamp(throttle_delta*selected_throttle_gain
                 + load_delta*selected_load_gain, -32768,32767)
if combined < 0:
    0982 = 32768 - min(2048,floor(-combined*negative_coolant_gain/256))
else:
    0982 = 32768 + floor(combined*positive_coolant_gain/256)
```

The coolant gains come from `3357` and `3345`, respectively. The negative side has an additional cap of 2048. A delta-gain cell therefore corresponds to `cell*100/2048` normalized fuel percentage points **per internal delta count**, before coolant scaling and the remaining multipliers. It is not percent fuel per second. Opposite signed contributions cancel before sign-dependent coolant scaling.

## Adaptation and time thresholds

At a feedback-state transition, `curve_36a4` or `curve_36b2` supplies a byte that is shifted left eight and subtracted from or added to `097E`. Subsequent non-transition iterations use the separate word steps `36A0/36A2`, both stock 6. Actual clamps are the separate words at `36C0/36C2`, stock 6554 and 58982.

One curve cell is a transition step of `100/256` normalized percentage points; stock cell 4 therefore represents **1.5625 percentage points**, before other multipliers. It is not a 4% bound, and it is not necessarily applied on every task iteration.

The existing 2,500-tick base scheduler sets tasks every 2, 20 and 200 base updates. With the service-correlated 500 kHz timer profile:

| Map | Counter / period | Conditional physical interpretation |
|---|---|---|
| `18B6` | `0CAF`, 200 base updates | Cell seconds; stock 60 means nominal 60 seconds of counted non-startup time |
| `36C4` | `09B5`, 20 base updates | Cell × 0.1 seconds; stock zero means no delay from this threshold |
| `31EC` / `3200` | `09DD`, 2 base updates | Cell × 0.01 seconds of qualifying hold iterations |

Counters saturate, reset or advance conditionally. These are nominal count thresholds, not promises of exact elapsed time from power-on. Scheduler delays can also affect wall-clock timing.

## Pressure offset versus pressure gain

`curve_1880` modifies a pressure-coordinate word as `CB4=clamp(CB2+64*(cell-128),0,65535)`. Stock cells 128 add zero. In contrast, RAM-copied `curve_1854` rescales the signed distance from origin 7863:

```
C90 = clamp(7863 + signed_round((C8E-7863)*cell/128),0,65535)
```

The first is an offset; the second is a gain about an origin. Their values and inputs should not be confused with a directly calibrated pressure sensor transfer function.

## Injection event-phase map

`modulo24_surface` is now identified as an injection event target. Helper `0xC521` rotates both endpoint codes around reference `0D7E`, interpolates in that rotated coordinate, and rotates back. It does not simply choose the shortest arc between two cells.

After lookup, code 11 becomes 10; codes 23 and above become 22. `0xEC98` copies or conditionally slews the target into `0A1E`, later latched to `0A1C`. The primary dispatcher at `0xF4F2` compares `0A1C` with either `0C04` or `0923`, selected by mode, and calls the normal injector entry on equality. The secondary target has a separate offset path.

Tests cover all endpoint pairs in the 24-code helper at several fractions/reference cuts, all 256 post-lookup code sanitizations, direct target transfer, and equality dispatch in both counter modes. The optional slew limiter is traced but is not exhaustively tested here. **The absolute crank/TDC reference, and whether a displayed phase represents a physical start or end of injection in each mode, remain unresolved.** The stock table is all zero; that does not mean zero duration or no fuel.

## Active versus dormant calibrations

The common-normalization correction state requires `ROM[3130] == 0x80`; stock is `0xFF`. Its disabled path clears the relevant state and restores `CD4=128`. Therefore `correction_surface_B` and its `31EC/3200` hold values are present and looked up, but this normal correction state is disabled in the supplied image. Tests verify neutral restoration for every prior flag-byte value.

Both stock feedback-eligibility grids `35B0` and `363C` contain only zeros, so their normal gates reject eligibility. This is not evidence that every diagnostic or alternate path is disabled. Likewise, the secondary quantity multiplier's existence does not override the variant-9 normal scheduling gate.

No calibration or binary has been changed. Remaining work includes sensor physical scales, exact absolute crank references, more mode/override conditions, and the calibration bytes outside the 71 identified layouts. The machine-readable catalogue distinguishes numeric/code conversions, logical predicates, joint formulas and genuinely unresolved cell scales rather than reporting all 71 as physically decoded.
