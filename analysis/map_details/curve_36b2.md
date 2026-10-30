# Adaptive fuel correction — increment step

<!-- map-name -->
Stable ID: `curve_36b2`. Category: Feedback.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Adaptive correction increment step; bounds are separate ROM words

Cells: **0x36B8–36BE**, 1 rows × 7 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed.

Output: u16 0x09A8 = high byte << 8; added to 0x097E at a state transition.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 6144; span 24576; factor 16; index divisor 65536. Header begins at 0x36B2. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
4 4 4 4 4 4 4
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
a6f4  cc0000  LDD #0x0
a6f7  202f  BRA 0xa728
a6f9  1f09a20119  BRCLR 0x9a2,0x1,0xa717
a6fe  16ab66  JSR 0xab66
a701  16ab90  JSR 0xab90
a704  ce36b2  LDX #0x36b2
a707  fc0900  LDD 0x900
a70a  16c1f2  JSR 0xc1f2
a70d  c7  CLRB
a70e  7c09a8  STD 0x9a8
a711  1d09a201  BCLR 0x9a2,0x1
a715  2003  BRA 0xa71a
a717  fc36a2  LDD 0x36a2
a71a  7c0dde  STD 0xdde
a71d  fc097e  LDD 0x97e
a720  f30dde  ADDD 0xdde
a723  2403  BCC 0xa728
a725  ccffff  LDD #0xffff
a728  bc36c0  CPD 0x36c0
a72b  2405  BCC 0xa732
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/256`; unit: **normalized fuel percentage points per transition step**.

Magnitude of a transition-triggered adjustment to centered RAM 0x097E. Not a bound or percentage applied on every scheduler tick.

uniform_input conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 1200, 2000, 2800, 3600, 4400, 5200, 6000.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| uniform_input | u16 0x0900 selected speed | Speed coordinate | Resolve the RPM telemetry divisor190 versus nominal divisor256 scale conflict; confirm timer clock and CPS pattern per crank revolution. See EXTERNAL_SCALE_CHECKS.md. |

### What remains for this map

- Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.
- Confirm CPS pattern per mechanical revolution; the 12-pitch / 180-degree speed-period interpretation remains conditional.
- Resolve the RPM telemetry conflict: firmware divides speed code by 190, while the nominal map scale and the historical byte*50 logger would require 256. See EXTERNAL_SCALE_CHECKS.md.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
