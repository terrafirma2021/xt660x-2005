# curve_18b6

Coolant-dependent feedback threshold

Cells: **0x18B9–18C7**, 1 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F4 coolant.

Output: u8 0x0CAE.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Engineering conversion is unresolved; tuning export is disabled.**

## Uniform axis

Minimum 16; span 224; factor 16; index divisor 256. Header begins at 0x18B6. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
60 60 60 60 60 60 60 60 60 60 60 60 60 60 60
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
6b4e  1e09a11018  BRSET 0x9a1,0x10,0x6b6b
6b53  b618b5  LDAA 0x18b5
6b56  8180  CMPA #0x80
6b58  271a  BEQ 0x6b74
6b5a  b608f4  LDAA 0x8f4
6b5d  ce18b6  LDX #0x18b6
6b60  16c1cd  JSR 0xc1cd
6b63  7a0cae  STAA 0xcae
6b66  b10caf  CMPA 0xcaf
6b69  2209  BHI 0x6b74
6b6b  1e09a14004  BRSET 0x9a1,0x40,0x6b74
6b70  1c09a140  BSET 0x9a1,0x40
6b74  1f09a18023  BRCLR 0x9a1,0x80,0x6b9c
6b79  1f09a1041e  BRCLR 0x9a1,0x4,0x6b9c
6b7e  1f09a14019  BRCLR 0x9a1,0x40,0x6b9c
6b83  1c09a120  BSET 0x9a1,0x20
6b87  b609ac  LDAA 0x9ac
6b8a  b118c8  CMPA 0x18c8
6b8d  2514  BCS 0x6ba3
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
