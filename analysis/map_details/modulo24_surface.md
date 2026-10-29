# modulo24_surface

Cyclic 24-code surface; physical event meaning unresolved

Cells: **0x1914–1995**, 10 rows × 13 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x08E8 throttle code (row); u16 0x0900 selected speed (column).

Output: u8 0x0A1B; excludes codes 11 and >=23 after lookup.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Engineering conversion is unresolved; tuning export is disabled.**

## Row Axis

Source: 0x18E6. See inputs and call evidence.

Explicit breakpoint lookup.

`0, 512, 2816, 5568, 11136, 22272, 27840, 33408, 38976, 44544`

## Column Axis

Source: 0x18FA. See inputs and call evidence.

Explicit breakpoint lookup.

`4096, 7168, 10240, 15360, 20480, 25600, 30720, 35840, 40960, 46080, 51200, 56320, 61440`

## Raw cells

```
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7b7e  fc0908  LDD 0x908
7b81  7c0de0  STD 0xde0
7b84  fc090e  LDD 0x90e
7b87  7c0dde  STD 0xdde
7b8a  c60d  LDAB #0xd
7b8c  ce1911  LDX #0x1911
7b8f  16c4dc  JSR 0xc4dc
7b92  8117  CMPA #0x17
7b94  2504  BCS 0x7b9a
7b96  8616  LDAA #0x16
7b98  2006  BRA 0x7ba0
7b9a  810b  CMPA #0xb
7b9c  2602  BNE 0x7ba0
7b9e  860a  LDAA #0xa
7ba0  7a0a1b  STAA 0xa1b
7ba3  1e08811003  BRSET 0x881,0x10,0x7bab
7ba8  067cc3  JMP 0x7cc3
7bab  ce19c6  LDX #0x19c6
7bae  fc08f2  LDD 0x8f2
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
