# Startup fuel multiplier vs engine speed

<!-- map-name -->
Stable ID: `curve_19a8`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Startup fuel multiplier

Cells: **0x19AE–19B8**, 1 rows × 11 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed.

Output: u8 0x0936.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 1229; span 5120; factor 128; index divisor 65536. Header begins at 0x19A8. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
128 114 98 82 66 61 57 53 48 44 40
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7bd0  fc08ce  LDD 0x8ce
7bd3  2003  BRA 0x7bd8
7bd5  cc0000  LDD #0x0
7bd8  16c1f2  JSR 0xc1f2
7bdb  7a0937  STAA 0x937
7bde  ce19a8  LDX #0x19a8
7be1  fc0900  LDD 0x900
7be4  16c1f2  JSR 0xc1f2
7be7  7a0936  STAA 0x936
7bea  f60937  LDAB 0x937
7bed  12  MUL
7bee  b7c6  XGDY
7bf0  87  CLRA
7bf1  f60979  LDAB 0x979
7bf4  c30180  ADDD #0x180
7bf7  16c243  JSR 0xc243
7bfa  b7c6  XGDY
7bfc  87  CLRA
7bfd  f60938  LDAB 0x938
7c00  16c243  JSR 0xc243
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/128`; unit: **percent of reference multiplier**.

128 represents unity in the normalized consumer equation; exact integer stages and saturation are in map_models.py.

uniform_input conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 240.039, 340.039, 440.039, 540.039, 640.039, 740.039, 840.039, 940.039, 1040.04, 1140.04, 1240.04.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| uniform_input | u16 0x0900 selected speed | Speed coordinate | Confirm the timer clock and CPS pattern per crank revolution before treating the axis as RPM. |

### What remains for this map

- Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.
- Confirm CPS pattern per mechanical revolution; the 12-pitch / 180-degree speed-period interpretation remains conditional.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
