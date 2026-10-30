# Injector pulse compensation vs supply

<!-- map-name -->
Stable ID: `curve_4234`. Category: Fuel.

An additive supply-dependent pulse correction is established. Injector dead time remains a candidate physical interpretation, so it is not the primary name.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Additive injection-pulse compensation; deadtime candidate

Cells: **0x4237–423D**, 1 rows × 7 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08DA supply-derived.

Output: u16 0x095E = high byte * 8.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 19; span 192; factor 8; index divisor 256. Header begins at 0x4234. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
60 166 166 91 60 43 31
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
74b0  7b0ae2  STAB 0xae2
74b3  1d08bc10  BCLR 0x8bc,0x10
74b7  3d  RTS
74b8  1c08bc40  BSET 0x8bc,0x40
74bc  b608da  LDAA 0x8da
74bf  ce4234  LDX #0x4234
74c2  16c1cd  JSR 0xc1cd
74c5  c7  CLRB
74c6  49  LSRD
74c7  49  LSRD
74c8  49  LSRD
74c9  49  LSRD
74ca  49  LSRD
74cb  7c095e  STD 0x95e
74ce  f60d54  LDAB 0xd54
74d1  c180  CMPB #0x80
74d3  2604  BNE 0x74d9
74d5  182000af  LBRA 0x7588
74d9  1e08a004f7  BRSET 0x8a0,0x4,0x74d5
...
b161  1d08bc04  BCLR 0x8bc,0x4
b165  3d  RTS
b166  1d088210  BCLR 0x882,0x10
b16a  1c08bc02  BSET 0x8bc,0x2
b16e  b608da  LDAA 0x8da
b171  ce4234  LDX #0x4234
b174  16c1cd  JSR 0xc1cd
b177  c7  CLRB
b178  49  LSRD
b179  49  LSRD
b17a  49  LSRD
b17b  49  LSRD
b17c  49  LSRD
b17d  7c095e  STD 0x95e
b180  b608f5  LDAA 0x8f5
b183  ce3220  LDX #0x3220
b186  16c1cd  JSR 0xc1cd
b189  7a0979  STAA 0x979
b18c  b608f4  LDAA 0x8f4
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

conditional physical conversion.

Conversion: `raw*8*1000/timer_hz`; unit: **ms**.

additive injector-duration compensation after lookup rounding

Evidence profiles: `nominal_xt_timer`. Consult each profile for its corroboration, assumptions and limits.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| uniform_input | u8 0x08DA supply-derived | Supply-derived code | Confirm the voltage divider/reference and filtering before assigning volts. |

### What remains for this map

- Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.
- Confirm the voltage divider/reference and filtering before assigning volts.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
