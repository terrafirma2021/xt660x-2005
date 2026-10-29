# curve_31ec

Speed-dependent control correction

Cells: **0x31F2–31FE**, 1 rows × 13 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed.

Output: u8 0x09D9.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 8192; span 49152; factor 16; index divisor 65536. Header begins at 0x31EC. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
0 0 0 0 0 0 0 0 0 0 0 0 0
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
a444  7a09d8  STAA 0x9d8
a447  3d  RTS
a448  b60898  LDAA 0x898
a44b  b131ea  CMPA 0x31ea
a44e  2205  BHI 0xa455
a450  ce31ec  LDX #0x31ec
a453  2003  BRA 0xa458
a455  ce3200  LDX #0x3200
a458  fc0900  LDD 0x900
a45b  16c1f2  JSR 0xc1f2
a45e  7a09d9  STAA 0x9d9
a461  3d  RTS
a462  1f09cf101d  BRCLR 0x9cf,0x10,0xa484
a467  fc09d2  LDD 0x9d2
a46a  b309da  SUBD 0x9da
a46d  2511  BCS 0xa480
a46f  2613  BNE 0xa484
a471  b609de  LDAA 0x9de
a474  8b01  ADDA #0x1
a476  8200  SBCA #0x0
a478  7a09de  STAA 0x9de
a47b  b13214  CMPA 0x3214
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
