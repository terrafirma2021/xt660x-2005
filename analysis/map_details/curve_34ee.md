# Transient fuel multiplier vs throttle

<!-- map-name -->
Stable ID: `curve_34ee`. Category: Transient fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Transient throttle correction

Cells: **0x34F4–34FC**, 1 rows × 9 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x08CE throttle-derived.

Output: u8 0x0A0E.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 0; span 32768; factor 16; index divisor 65536. Header begins at 0x34EE. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
148 148 138 133 131 128 122 115 115
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
925d  ce34da  LDX #0x34da
9260  2003  BRA 0x9265
9262  ce34e4  LDX #0x34e4
9265  16c1cd  JSR 0xc1cd
9268  7a0a0c  STAA 0xa0c
926b  ce34ee  LDX #0x34ee
926e  fc08ce  LDD 0x8ce
9271  16c1f2  JSR 0xc1f2
9274  7a0a0e  STAA 0xa0e
9277  f60a0c  LDAB 0xa0c
927a  12  MUL
927b  fd0dde  LDY 0xdde
927e  13  EMUL
927f  8d4000  CPY #0x4000
9282  2505  BCS 0x9289
9284  cdffff  LDY #0xffff
9287  2015  BRA 0x929e
9289  59  ASLD
928a  b7c6  XGDY
928c  55  ROLB
...
947e  ce3567  LDX #0x3567
9481  2003  BRA 0x9486
9483  ce3571  LDX #0x3571
9486  16c1cd  JSR 0xc1cd
9489  7a0d04  STAA 0xd04
948c  ce34ee  LDX #0x34ee
948f  fc08ce  LDD 0x8ce
9492  16c1f2  JSR 0xc1f2
9495  7a0a0e  STAA 0xa0e
9498  f60d04  LDAB 0xd04
949b  12  MUL
949c  fd0dde  LDY 0xdde
949f  13  EMUL
94a0  8d4000  CPY #0x4000
94a3  2505  BCS 0x94aa
94a5  cdffff  LDY #0xffff
94a8  200e  BRA 0x94b8
94aa  59  ASLD
94ab  b7c6  XGDY
94ad  55  ROLB
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/128`; unit: **percent of reference multiplier**.

128 represents unity in the normalized consumer equation; exact integer stages and saturation are in map_models.py.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| uniform_input | u16 0x08CE throttle-derived | Relative throttle coordinate | Confirm the learned-closed reference and sensor/mechanical transfer before assigning degrees or percent throttle. |

### What remains for this map

- Confirm the learned-closed reference and sensor/mechanical transfer before assigning degrees or percent throttle.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
