# fuel_normalization_throttle

Fuel normalization input; selected when ROM 0x3114 does not equal 0x80

Cells: **0x312A–312D**, 2 rows × 2 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed; u16 0x08E8 throttle code.

Output: u8 0x0CD3.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x3126. See inputs and call evidence.

Explicit breakpoint lookup.

`3072, 65280`

## Column Axis

Source: 0x3122. See inputs and call evidence.

Explicit breakpoint lookup.

`5248, 26240`

## Raw cells

```
166 166
166 166
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7eca  fc0cda  LDD 0xcda
7ecd  7c0dde  STD 0xdde
7ed0  fc0cdc  LDD 0xcdc
7ed3  7c0de0  STD 0xde0
7ed6  c602  LDAB #0x2
7ed8  ce3127  LDX #0x3127
7edb  16c32d  JSR 0xc32d
7ede  c30080  ADDD #0x80
7ee1  7a0cd3  STAA 0xcd3
7ee4  b63114  LDAA 0x3114
7ee7  8180  CMPA #0x80
7ee9  2605  BNE 0x7ef0
7eeb  b60cd2  LDAA 0xcd2
7eee  2003  BRA 0x7ef3
7ef0  b60cd3  LDAA 0xcd3
7ef3  7a0cd1  STAA 0xcd1
7ef6  f60cd4  LDAB 0xcd4
7ef9  c080  SUBB #0x80
7efb  2508  BCS 0x7f05
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

unresolved cell conversion.

Combined code is clamp(selected_cell+CD4-128,0,255); used through (code+128), not a proven AFR encoding.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
