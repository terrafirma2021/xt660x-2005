# correction_surface_D

Temperature/speed correction in spark path

Cells: **0x4A60–4AF5**, 10 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u8 high byte of 0x0900 selected speed; u8 0x08F4 coolant.

Output: u8 0x0A88.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Engineering conversion is unresolved; tuning export is disabled.**

## Row Axis

Source: 0x4A56. See inputs and call evidence.

Explicit breakpoint lookup.

`20, 22, 24, 26, 28, 30, 32, 34, 36, 38`

## Column Axis

Source: 0x4A46. See inputs and call evidence.

Explicit breakpoint lookup.

`16, 32, 48, 64, 80, 96, 112, 128, 144, 160, 176, 192, 208, 224, 240`

## Raw cells

```
78 78 78 78 78 78 78 78 78 64 64 64 64 64 64
78 78 78 78 78 78 78 64 64 64 64 64 64 64 64
78 78 78 78 64 64 64 64 64 64 64 64 64 64 64
78 78 64 64 64 64 64 64 64 64 64 64 64 64 64
78 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b878  fc0a90  LDD 0xa90
b87b  7c0dde  STD 0xdde
b87e  fc0a8e  LDD 0xa8e
b881  7c0de0  STD 0xde0
b884  c60f  LDAB #0xf
b886  ce4a5d  LDX #0x4a5d
b889  16c32d  JSR 0xc32d
b88c  c30080  ADDD #0x80
b88f  7a0a88  STAA 0xa88
b892  b608f4  LDAA 0x8f4
b895  ce4a33  LDX #0x4a33
b898  16c1cd  JSR 0xc1cd
b89b  7a0a89  STAA 0xa89
b89e  ce3315  LDX #0x3315
b8a1  b608f4  LDAA 0x8f4
b8a4  16c1cd  JSR 0xc1cd
b8a7  7a097b  STAA 0x97b
b8aa  ce3327  LDX #0x3327
b8ad  b608f4  LDAA 0x8f4
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
