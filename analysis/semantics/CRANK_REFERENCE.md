# CPS reference, cycle recognition and wasted spark

**The supplied XT660X image's normal spark path fires once per synchronized crank pattern, including both halves of its longer cycle counter.** With one pattern per crank revolution, that is wasted spark: one firing opportunity on compression and another on exhaust. This is firmware behavior, not a fixed capability imposed by the MCU.

The CPS trace also identifies the software phase reference more precisely: **capture event 0 is the edge ending the long gap; event 6 is six ordinary pitches after it.** Under the 12-pitch-per-revolution interpretation, event 6 is 180 crank degrees after that gap-ending edge. The mechanical angle from this edge to piston TDC is not encoded as a separately identified calibration in this path.

## Capture and synchronization

Initialization at `0x536C–0x5372` configures timer channel 1 for falling-edge capture. Handler `0xD871` reads MCU input `PTIT:01` at `0x00E1`, and capture register `TC1` at `0x0052`. A high input takes a short return path and restores falling-edge selection; it does not advance the phase. These are MCU signal levels after the input circuit, not a claim about the polarity of the raw VR sensor wires.

For a low input, `0xD8D3–0xD8DD` calculates the difference from the previous capture and updates `AF0`. The gap detector at `0xF043` compares recent intervals. A synthetic pattern of ten ordinary intervals and one double interval acquires synchronization; a uniform sequence does not in the tested cases. It confirms the gap when the following ordinary interval arrives. `BFE:80` means synchronized state here, not a model selector.

Once synchronized:

| State / code | Meaning |
|---|---|
| `C03`, copied to `C04` | Pattern phase, advancing through 0…10 and wrapping after 10 |
| `0xD9AD–0xD9D5` | On the interval arriving after old phase 10, divides the gap duration by two |
| `A2E` | Current normalized single-pitch interval |
| `A34` | Three-pitch history sum after the history has filled |
| `0xDBAA–0xDBB9` | Advances and stores the new phase used by ignition |
| `922`, copied/masked into `923` | Longer cycle position, with codes 11 and 23 omitted across the gap |

At steady speed the pattern represents twelve normalized pitches but eleven captured falling edges. The first ordinary edge after the gap has phase 1; the gap-ending edge has phase 0 after synchronization is established. The software observations are stronger than identifying tooth count from table shape, but a physical rotor trace is still needed to confirm the exact hardware pattern.

## Why the longer counter does not imply sequential spark

At `0xDE95`, the capture handler calls `0xED29`. Normal ignition dispatch reads **`C04`**, including the selected charge event and fire events 3…6. It does not use `923` to permit only one half of the longer cycle. The charge/fire state flags reset at phase 10, so the next pattern can charge and fire again.

The separate longer phase is useful for injection. Pressure samples are taken at crank positions and compared across patterns. At `0xEA7F–0xEAD9`, qualifying changes between `C9A` and `C9C` align `922` to either `C03` or `C03 + 12`, and repeated qualifying changes set `CA8:01`. This is evidence for pressure-based cycle identification. It does not establish a precise TDC angle from pressure, and it does not change `C04` in that alignment block.

The spark-pattern skip logic at `0xEF01` and fault/cut gates remain possible suppressors. The wasted-spark conclusion describes the normal, uninhibited path; it does not claim every revolution always produces an actual plug discharge under every condition.

## Executed CPS-to-spark fixture

[test_crank_reference.py](../../scripts/test_crank_reference.py) uses the original instruction translation and stock initialization/calibration copies. It supplies capture events, lets the code acquire synchronization, advances through the gap, runs the actual spark planner and dispatch, and explicitly simulates the timer output's set/clear compare edges. The handler runs through `0xDE9B`; its later ADC/injection work is outside this fixture.

[561 checks pass](crank_reference_validation.json), including three streams of twelve patterns at pitches 800, 1600 and 2400 timer ticks. After settling:

- One high-to-low output transition occurs every **12 pitch durations**.
- The longer counter at pattern phase 6 alternates between **18 and 6**; ignition occurs in both halves.
- Each modeled high interval equals the requested dwell, here half a pitch.
- The normalized single-pitch and three-pitch history agree across the double gap.
- Uniform input does not acquire gap synchronization, and high-input captures do not advance phase.
- Independent pressure-alignment fixtures adjust the longer counter without changing the ignition phase counter.

The report includes individual output timestamps and two-pattern phase traces. Peripheral behavior is explicitly simulated; no hardware waveform has been measured.

## What this gives the BTDC equation

The ordinary unsaturated planner gives:

```
fire_time_relative_to_capture6 = floor(A36/4) - advance_ticks
```

If `theta6` is the physical BTDC angle of capture event 6, the idealized nominal-angle equation is:

```
spark_BTDC = theta6 + (A82 - 64)*90/256 + (A8B - 150)*6*rpm/timer_hz
theta6 = theta_gap_end - 180 degrees      # under the 12-pitch crank profile
```

Use a consistent angular wrap and account for integer rounding and the minimum-charge override in the [scheduler derivation](SPARK_SCHEDULER.md). Wasted spark removes the need to choose compression versus exhaust for the ignition opportunity; it does not supply `theta6`. Rotating the trigger pattern relative to the piston leaves these code paths and interval ratios unchanged.

The [Yamaha XT660R/X service manual](https://scootertuub.nl/motoren/Yamaha/Yamaha%20XT%20660%20R%20X%202004%20Service%20Manual%20%20.pdf) specifies 9° BTDC at 1,400 rpm and checks ignition against the rotor firing marks (section 3-20, PDF page 101). It identifies TDC with a different rotor mark during valve adjustment (section 3-14). These provide physical references, but neither specification identifies which captured edge corresponds to that mark in this dump. The CPS resistance/wiring check is section 8-15, PDF page 397.

The remaining datum is therefore specific: **the angle between the gap-ending CPS edge and the rotor's TDC mark**, or a simultaneous known-TDC/CPS trace. Alternatively, measured spark timing paired with the actual final `A82`, correction `A8B`, mode and period can determine `theta6`. A generic idle table cell alone cannot, because it may not equal the final timing code.
