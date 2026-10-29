# delta_0989_gain_4

Gain applied to a signed transient-delta path; physical delta identity unresolved

Cells: **0x343C–3452**, 1 rows × 23 columns, 8-bit unsigned big-endian values.

Inputs: u16 RAM 0x0900: selected speed code.

Output: u8 RAM 0x098E.

Selection: RAM 0x0989 bit 7 clear; variant 0x0D87 == 9 and RAM 0x0896 bit 0x10 clear.

Interpolation: 0xC1DB linear Q8; caller takes high byte (floor).

**Engineering conversion is unresolved; tuning export is disabled.**

## Column Axis

Source: computed in firmware. u16 RAM 0x0900: selected speed code

u=clamp(input-4096,0,55296); q8=u//4 if u<10240 else u//8+1280 if u<14336 else u//16+2176

`4096, 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312, 14336, 16384, 18432, 22528, 26624, 30720, 34816, 38912, 43008, 47104, 51200, 55296, 59392`

## Raw cells

```
8 8 8 8 8 8 8 13 29 30 30 30 30 30 30 30 30 30 30 30 30 30 30
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
78e8  ce3422  LDX #0x3422
78eb  201e  BRA 0x790b
78ed  c109  CMPB #0x9
78ef  260a  BNE 0x78fb
78f1  1e08961005  BRSET 0x896,0x10,0x78fb
78f6  ce3439  LDX #0x3439
78f9  2010  BRA 0x790b
78fb  b60898  LDAA 0x898
78fe  b133f6  CMPA 0x33f6
7901  2205  BHI 0x7908
7903  ce3450  LDX #0x3450
7906  2003  BRA 0x790b
7908  ce3467  LDX #0x3467
790b  fc0de8  LDD 0xde8
790e  16c1db  JSR 0xc1db
7911  7a098e  STAA 0x98e
7914  f60ddf  LDAB 0xddf
7917  12  MUL
7918  7c0ddf  STD 0xddf
791b  b60dde  LDAA 0xdde
791e  8580  BITA #0x80
7920  270d  BEQ 0x792f
7922  cc8000  LDD #0x8000
7925  b30ddf  SUBD 0xddf
7928  2410  BCC 0x793a
792a  cc0000  LDD #0x0
792d  200b  BRA 0x793a
...
cc75  2003  BRA 0xcc7a
cc77  49  LSRD
cc78  49  LSRD
cc79  49  LSRD
cc7a  3d  RTS
cc7b  8010  SUBA #0x10
cc7d  2403  BCC 0xcc82
cc7f  cc0000  LDD #0x0
cc82  83d800  SUBD #0xd800
cc85  2503  BCS 0xcc8a
cc87  cc0000  LDD #0x0
cc8a  c3d800  ADDD #0xd800
cc8d  8128  CMPA #0x28
cc8f  2404  BCC 0xcc95
cc91  49  LSRD
cc92  49  LSRD
cc93  2013  BRA 0xcca8
cc95  8138  CMPA #0x38
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
