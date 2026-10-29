# curve_36a4

Adaptive correction subtraction bound

Cells: **0x36AA–36B0**, 1 rows × 7 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed.

Output: u16 0x09A6 = high byte << 8.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Engineering conversion is unresolved; tuning export is disabled.**

## Uniform axis

Minimum 6144; span 24576; factor 16; index divisor 65536. Header begins at 0x36A4. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
4 4 4 4 4 4 4
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
a6c1  2065  BRA 0xa728
a6c3  1f09a10231  BRCLR 0x9a1,0x2,0xa6f9
a6c8  1e09a20119  BRSET 0x9a2,0x1,0xa6e6
a6cd  16ab66  JSR 0xab66
a6d0  16ab90  JSR 0xab90
a6d3  ce36a4  LDX #0x36a4
a6d6  fc0900  LDD 0x900
a6d9  16c1f2  JSR 0xc1f2
a6dc  c7  CLRB
a6dd  7c09a6  STD 0x9a6
a6e0  1c09a201  BSET 0x9a2,0x1
a6e4  2003  BRA 0xa6e9
a6e6  fc36a0  LDD 0x36a0
a6e9  7c0dde  STD 0xdde
a6ec  fc097e  LDD 0x97e
a6ef  b30dde  SUBD 0xdde
a6f2  2434  BCC 0xa728
a6f4  cc0000  LDD #0x0
a6f7  202f  BRA 0xa728
a6f9  1f09a20119  BRCLR 0x9a2,0x1,0xa717
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
