# curve_34b0

Speed-dependent correction

Cells: **0x34B6–34C4**, 1 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed.

Output: u8 0x09A0.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 5120; span 7168; factor 128; index divisor 65536. Header begins at 0x34B0. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
255 255 255 255 255 255 255 255 255 255 255 255 255 0 0
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7fff  2405  BCC 0x8006
8001  fc0994  LDD 0x994
8004  2003  BRA 0x8009
8006  fc0996  LDD 0x996
8009  7c0992  STD 0x992
800c  ce34b0  LDX #0x34b0
800f  fc0900  LDD 0x900
8012  16c1f2  JSR 0xc1f2
8015  7a09a0  STAA 0x9a0
8018  1e0a16020b  BRSET 0xa16,0x2,0x8028
801d  f609fc  LDAB 0x9fc
8020  168623  JSR 0x8623
8023  7a095c  STAA 0x95c
8026  2009  BRA 0x8031
8028  f60a00  LDAB 0xa00
802b  168623  JSR 0x8623
802e  7a095d  STAA 0x95d
8031  b619de  LDAA 0x19de
8034  8101  CMPA #0x1
8036  2703  BEQ 0x803b
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
