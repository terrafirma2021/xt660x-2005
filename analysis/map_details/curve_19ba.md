# curve_19ba

Startup fuel multiplier

Cells: **0x19C0–19C5**, 1 rows × 6 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x08CE throttle-derived; zero on fault path.

Output: u8 0x0937.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Engineering conversion is unresolved; tuning export is disabled.**

## Uniform axis

Minimum 0; span 40960; factor 8; index divisor 65536. Header begins at 0x19BA. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
64 128 128 128 128 128
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7bb4  7a0938  STAA 0x938
7bb7  b608f4  LDAA 0x8f4
7bba  ce1996  LDX #0x1996
7bbd  16c1cd  JSR 0xc1cd
7bc0  7c0934  STD 0x934
7bc3  ce19ba  LDX #0x19ba
7bc6  1e08af080a  BRSET 0x8af,0x8,0x7bd5
7bcb  1e08af0405  BRSET 0x8af,0x4,0x7bd5
7bd0  fc08ce  LDD 0x8ce
7bd3  2003  BRA 0x7bd8
7bd5  cc0000  LDD #0x0
7bd8  16c1f2  JSR 0xc1f2
7bdb  7a0937  STAA 0x937
7bde  ce19a8  LDX #0x19a8
7be1  fc0900  LDD 0x900
7be4  16c1f2  JSR 0xc1f2
7be7  7a0936  STAA 0x936
7bea  f60937  LDAB 0x937
7bed  12  MUL
7bee  b7c6  XGDY
7bf0  87  CLRA
7bf1  f60979  LDAB 0x979
7bf4  c30180  ADDD #0x180
7bf7  16c243  JSR 0xc243
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
