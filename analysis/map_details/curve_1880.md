# curve_1880

Pressure-processing correction

Cells: **0x1886–1899**, 1 rows × 20 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed.

Output: u8 0x0CB0.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Engineering conversion is unresolved; tuning export is disabled.**

## Uniform axis

Minimum 6144; span 38912; factor 32; index divisor 65536. Header begins at 0x1880. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b26f  8200  SBCA #0x0
b271  2008  BRA 0xb27b
b273  7a0b3a  STAA 0xb3a
b276  b11871  CMPA 0x1871
b279  2329  BLS 0xb2a4
b27b  ce1880  LDX #0x1880
b27e  fc0900  LDD 0x900
b281  16c1f2  JSR 0xc1f2
b284  7a0cb0  STAA 0xcb0
b287  c7  CLRB
b288  49  LSRD
b289  49  LSRD
b28a  832000  SUBD #0x2000
b28d  250a  BCS 0xb299
b28f  f30cb2  ADDD 0xcb2
b292  240d  BCC 0xb2a1
b294  ccffff  LDD #0xffff
b297  2008  BRA 0xb2a1
b299  f30cb2  ADDD 0xcb2
b29c  2503  BCS 0xb2a1
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
