# Spark maps and timer scheduling

The [unit-decoding pass](UNIT_DECODING.md) now gives the exact code-to-timer equation, conditional relative crank-angle scale and nominal dwell-duration scale. Absolute BTDC phase remains unresolved.

**Physical output is identified through diagnostic 30. Main map lookup and parts of the scheduling arithmetic are traced. Absolute degrees and all correction meanings are not yet resolved.** See [instruction excerpts](spark_evidence.txt).

## Output identity

Diagnostic selector 30 at ROM `0x4EFF` is copied to RAM `0x0D46`. The actuator dispatcher calls `0xB900`, which writes compare `0x0056` and manipulates channel-3 control bits. The service manual names diagnostic 30 as ignition coil. This connects the normal timer-3 routines to spark with much stronger evidence than table shape alone.

## Base-map selection

`0x8827–0x88AE` calculates indices and samples one of three byte grids:

| Cells | Size | Selection condition |
|---|---|---|
| `0x42AE` | 32 rows × 20 columns, unsigned bytes | RAM `0x0D87 == 9` and `0x0896:0x10` clear |
| `0x452E` | Same | Otherwise, RAM `0x0898 <= ROM[0x4245]` |
| `0x47AE` | Same | Otherwise |

The row index uses selected engine-speed word `0x0902` and the 32-word axis at `0x426E`. The column index uses word `0x08E8` and the 20-word axis at `0x4246`. If flag `0x088D:0x04` is clear, the column input is replaced by `0xD000`. `0x08E8` is a filtered value derived from the throttle-related path; its exact engineering scale and substitution conditions need further review.

The routine puts the index/fraction pairs in scratch RAM, calls byte-grid helper `0xC32D` using pointer biases `0x42AB`, `0x452B`, or `0x47AB`, then adds `0x0080` and stores the high byte at `0x0A83`. That is rounding the helper's Q8 result to a byte, not adding 128 units of ignition advance.

The selectors should retain their raw descriptions until their full writers are established. In particular, do not name the three grids “low octane”, “high octane”, or “power mode” without evidence.

## Base map is not final spark

Later branches combine `0x0A83` with other limits/corrections. One observed path at `0x8A2F–0x8A78`:

1. Takes the larger of `0x0A83` and `0x0D05`.
2. Multiplies it by byte `0x0A86`.
3. Shifts the product right seven bits (a `/128` correction convention).
4. Optionally subtracts `0x0AD8` and bounds it using ROM `0x4E2F/0x4E30` when `0x0ADA:0x40` is set.
5. Caps/stores the result as `0x0A82`, using ROM `0x4242` as an upper bound in this path.

Alternate paths exist at `0x89B8` and `0x8A19`, including the `0x0AAC` override. This breakdown is not an assertion that the five steps are the only path to final timing.

## Conversion into scheduled timer events

The main loop at `0x5407` takes timing byte `0x0A82` into routine `0x54F0`. That routine:

- uses timed interval `0x0A36` and the byte-dependent scaling helper `0xC21C`;
- adds correction byte `0x0A8B` and subtracts ROM word `0x4F9E`, with clamping;
- compares the resulting time quantity with `0x0A32` and later interval combinations;
- returns a selected event index through `0x0DE3` and time values through `0x0DE5/0x0DE7`.

The caller copies these to `0x0924`, `0x0A94`, and `0x0AA4`. Other routines including `0x55B6`, `0x5664`, `0xED29`, `0xEE78`, and `0xEF6D` schedule channel-3 events and handle charging/termination. ROM `0x4F20` is used as a timing offset in `0x5664`. The [cut dossier](RPM_AND_CUTS.md) identifies several scheduling gates.

This provides a concrete chain from a ROM map to a coil-related timer. To finish an angle definition, establish the crank-event angular reference, interval span, timer frequency, signed/offset convention, dwell-versus-fire edge polarity, and all alternate timing paths. A plausible-looking map value must not be labelled degrees BTDC based on appearance.

## Next proofs for this area

- Exact stored knots and ordinary selection paths now pass all 1,920 cells across the three grids. Extend this to fractional interpolation, substituted inputs and distinctly modified fixture cells where identical stock cells could hide bank-selection errors.
- Trace every writer of `0x0A82`, `0x0A83`, `0x0A86`, `0x0D05` and the override state.
- Model one complete crank-event sequence and show which edge ends coil charging.
- Correlate a known measured advance with the recovered internal value.
- Describe each correction and limiter separately in the future definition.

The existing [map extracts](../map_extracts) are suitable for raw inspection. No degrees conversion has been added to them.
