# curve_32e0

Pressure-dependent fuel correction

Cells: **0x32E6–32ED**, 1 rows × 8 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x08F2 pressure-derived estimate.

Output: u8 0x0978.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Engineering conversion is unresolved; tuning export is disabled.**

## Uniform axis

Minimum 28672; span 28672; factor 16; index divisor 65536. Header begins at 0x32E0. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
78 89 99 110 121 131 142 152
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b3d2  12  MUL
b3d3  59  ASLD
b3d4  2402  BCC 0xb3d8
b3d6  86ff  LDAA #0xff
b3d8  7a0970  STAA 0x970
b3db  ce32e0  LDX #0x32e0
b3de  fc08f2  LDD 0x8f2
b3e1  16c1f2  JSR 0xc1f2
b3e4  7a0978  STAA 0x978
b3e7  1d08bc02  BCLR 0x8bc,0x2
b3eb  3d  RTS
b3ec  1e0891403a  BRSET 0x891,0x40,0xb42b
b3f1  1e08910222  BRSET 0x891,0x2,0xb418
b3f6  1d088f80  BCLR 0x88f,0x80
b3fa  1c089080  BSET 0x890,0x80
b3fe  fc0b30  LDD 0xb30
b401  c30001  ADDD #0x1
b404  c200  SBCB #0x0
b406  8200  SBCA #0x0
b408  7c0b30  STD 0xb30
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
