# Spark event and coil-charge scheduling

The subsequent [CPS/reference pass](CRANK_REFERENCE.md) links synchronization to normal ignition dispatch: one firing transition per repeating pattern while the longer cycle counter alternates halves, supporting wasted spark. Event 6 is six ordinary pitches after the gap-ending edge; its physical TDC offset remains to be established.

The ordinary spark planner and its normal compare dispatch are now modeled independently in [spark_models.py](../../scripts/spark_models.py) and compared with the original instruction translation in [74,832 cases](spark_schedule_validation.json). This establishes the event-relative time equation, including planner overflow behavior and minimum-charge intervention. Physical TDC phase remains separate.

## Firing-time equation

The snapshot at `0x53F4` sets `A30 = one normalized pitch`, `A36 = three normalized pitches`, and `A32 = floor(A36/4)`. The planner at `0x54F0` computes:

```
advance = max(0, min(65535, floor(A82*A36/256) + A8B) - ROM16[4F9E])
ROM16[4F9E] = 150
```

It returns the fire event in `DE3`, advance in `DE5` and residual ticks after that event in `DE7`. The caller copies these into `924`, `A94`, `AA4`. It tries event 6, then earlier events 5, 4 and 3 so that the residual meets `DB4`, the minimum lead. Intermediate additions sometimes saturate; two residual-plus-pitch additions wrap. [The independent model](../../scripts/spark_models.py) preserves those distinctions rather than replacing the routine with an idealized equation.

On a uniform, unsaturated segment with the minimum lead satisfied, event selection cancels out:

```
fire_time_relative_to_capture6 = A32 - advance
```

Under the nominal 12-pitch crank interpretation, ignoring integer rounding, the advance **before capture event 6** is:

```
(A82 - 64) * 90/256 degrees + (A8B - 150) * 6*rpm/timer_hz degrees
```

The existing `raw*90/256` cell conversion is the proportional angle term, not the complete event-relative advance. Code 64 cancels `A32` only before the time correction; it is not proof of zero BTDC. Absolute BTDC would additionally require the physical angular position of capture event 6. The missing TDC reference cannot be obtained by arbitrarily labeling a normal idle cell as the manufacturer's idle specification.

Variant 9 selects cells `0x4F81`; other selector values use `0x4F64`. Both supply `A8B` in timer ticks. The selection and all knot/fraction cases are covered separately in [sensor/variant tests](sensor_variant_validation.json).

## Charge start

At `0x55B6`, the planner adds `A96` dwell to `A94` advance with **16-bit wrapping**, then works backward from `A32`. It selects a charge event in `925` and residual in `AA2`, subject to lead `DB0`. Its earlier-event loop has a bound, and the event-10 branch handles crossing the counter discontinuity. All those arithmetic branches are tested, including synthetic inputs outside plausible operation.

For ordinary uniform-pitch cases:

```
charge_time_relative_to_capture6 = A32 - advance - dwell
fire_time - charge_time = dwell
```

For example, pitch 1600 ticks, final code 128, correction 150 and dwell 800 ticks produce charge event 4 at capture6−2000 ticks and fire event 5 at capture6−1200 ticks. Under the nominal clock, their separation is 1.6 ms. This example describes a computed schedule, not an observed motorcycle trace.

## Compare action and minimum dwell

Normal charge dispatch `0xEE78` checks faults/cuts and the event counter. At the selected event, with pattern skipping disabled, it writes `TC3 = AF0 + AA2`, stores that compare at `B7A`, and sets channel-3 control bits to `11`. Fire dispatch `0xEF6D` normally writes `TC3 = AF0 + AA4` and changes those bits to `10`.

The [NXP MC9S12T64 specification](https://www.nxp.com/docs/en/data-sheet/9S12T64AF16V1.pdf), page 385, table 65, defines `11` as setting the MCU output high and `10` as clearing it low on compare. Thus the modeled dwell interval is high on the MCU timer output. The transistor/coil-terminal polarity still depends on the board. Diagnostic 30 independently ties this timer channel to the ignition-coil function.

If the pin is already high, the normal firing path can delay release until `B7A + A9A`. The exact test is:

```
elapsed = (AF0 + AA4 - B7A) & 65535
limited = (high_byte(A2E) >= D9E) and (((elapsed - A9A) & 65535) has bit 15 set)
```

This is `CPD` followed by **BPL**, testing N alone. Treating it as an ordinary signed comparison is wrong at overflow boundaries. The model and randomized execution checks include those cases and timer wrap. If limited, `A93:02` is set; otherwise it is cleared. This override can make the delivered spark later than the nominal planner request.

The pin-low branch can schedule a late charge at `AF0 + DB0`; missed charge events can instead use current timer +10. Fixed-event paths at `0xEDC3`/`0xEE19`, forced fire at `0xED6D`, and pattern skipping in `0xEF01` remain separate from the normal timeline fixtures. Their existence must not be hidden by calling this every-mode hardware simulation.

## Validation scope

- 24,000 fire-planner cases cover saturation, borrowing and event choice.
- 24,000 charge-planner cases cover wrapping, the loop bound and counter-gap branch.
- 24,000 fire-dispatch cases cover the minimum-charge condition and timer-control writes.
- 2,832 linked planner/dispatch cases demonstrate charge-to-fire separation on ordinary wheel segments.

The harness explicitly simulates the ECT pin becoming high after a charge compare because the translated peripheral registers are RAM. It does not model analog coil current, all crank interrupts, all mode gates or physical engine timing. Run `scripts/test_spark_schedule.py` with the compiled library path to reproduce it.
