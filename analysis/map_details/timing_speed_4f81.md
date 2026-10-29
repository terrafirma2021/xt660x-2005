# timing_speed_4f81

Speed correction in spark-timing path; final degree conversion unresolved

Cells: **0x4F81–4F9D**, 1 rows × 29 columns, 8-bit unsigned big-endian values.

Inputs: u16 RAM 0x08F8: instantaneous speed code.

Output: u8 RAM 0x0A8B.

Selection: RAM 0x0D87 == 9.

Interpolation: 0xC28D with one row; linear Q8 rounded to nearest byte.

**Engineering conversion is unresolved; tuning export is disabled.**

## Column Axis

Source: computed in firmware. u16 RAM 0x08F8 via RAM 0x0918

q8=clamp(input-4096,0,57344)//8 (0xCC63)

`4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, 34816, 36864, 38912, 40960, 43008, 45056, 47104, 49152, 51200, 53248, 55296, 57344, 59392, 61440`

## Raw cells

```
53 99 127 139 150 156 158 161 162 164 166 171 174 174 174 176 176 177 176 177 177 177 178 178 177 176 175 174 174
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
88c3  7a0b95  STAA 0xb95
88c6  2009  BRA 0x88d1
88c8  1d088902  BCLR 0x889,0x2
88cc  8600  LDAA #0x0
88ce  7a0b92  STAA 0xb92
88d1  b60d87  LDAA 0xd87
88d4  8109  CMPA #0x9
88d6  2705  BEQ 0x88dd
88d8  ce4f61  LDX #0x4f61
88db  2003  BRA 0x88e0
88dd  ce4f7e  LDX #0x4f7e
88e0  fc0918  LDD 0x918
88e3  7c0dde  STD 0xdde
88e6  87  CLRA
88e7  c7  CLRB
88e8  7c0de0  STD 0xde0
88eb  42  INCA
88ec  c61d  LDAB #0x1d
88ee  16c28d  JSR 0xc28d
88f1  7a0a8b  STAA 0xa8b
88f4  1f0880040c  BRCLR 0x880,0x4,0x8905
88f9  8640  LDAA #0x40
88fb  7a0a82  STAA 0xa82
88fe  1d088702  BCLR 0x887,0x2
8902  068a89  JMP 0x8a89
8905  b64243  LDAA 0x4243
8908  8101  CMPA #0x1
890a  2615  BNE 0x8921
890c  b64244  LDAA 0x4244
890f  b14242  CMPA 0x4242
8912  2503  BCS 0x8917
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
