# fuel_normalization_gain

Dimensionless gain in the denominator of common fuel multiplier 0x0CE2

Cells: **0x321C–321F**, 2 rows × 2 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x0CD0 combined normalization code; u16 0x0C90 load code.

Output: u8 0x0CD5.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x321A. See inputs and call evidence.

Explicit breakpoint lookup.

`70, 246`

## Column Axis

Source: 0x3216. See inputs and call evidence.

Explicit breakpoint lookup.

`9984, 47744`

## Raw cells

```
128 128
128 128
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7f36  fc0cde  LDD 0xcde
7f39  7c0dde  STD 0xdde
7f3c  fc0ce0  LDD 0xce0
7f3f  7c0de0  STD 0xde0
7f42  c602  LDAB #0x2
7f44  ce3219  LDX #0x3219
7f47  16c32d  JSR 0xc32d
7f4a  c30080  ADDD #0x80
7f4d  7a0cd5  STAA 0xcd5
7f50  87  CLRA
7f51  f60cd0  LDAB 0xcd0
7f54  274f  BEQ 0x7fa5
7f56  c30080  ADDD #0x80
7f59  b7c6  XGDY
7f5b  87  CLRA
7f5c  f60cd5  LDAB 0xcd5
7f5f  2744  BEQ 0x7fa5
7f61  59  ASLD
7f62  13  EMUL
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/128`; unit: **%**.

multiplicative factor in the denominator, not a direct fuel multiplier

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
