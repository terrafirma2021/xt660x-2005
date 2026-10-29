# curve_355d

Selected transient response curve

Cells: **0x3560–3566**, 1 rows × 7 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08ED throttle-derived delta.

Output: u8 0x0D04.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 128; span 48; factor 32; index divisor 256. Header begins at 0x355D. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
20 20 33 25 25 38 25
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
9462  b608ed  LDAA 0x8ed
9465  f60d87  LDAB 0xd87
9468  c109  CMPB #0x9
946a  260a  BNE 0x9476
946c  1e08961005  BRSET 0x896,0x10,0x9476
9471  ce355d  LDX #0x355d
9474  2010  BRA 0x9486
9476  f60898  LDAB 0x898
9479  f1355c  CMPB 0x355c
947c  2205  BHI 0x9483
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
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
