# fuel_normalization_load

Fuel normalization input; selected when ROM 0x3114 equals 0x80

Cells: **0x311E–3121**, 2 rows × 2 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed; u16 0x0C90 load code.

Output: u8 0x0CD2.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x311A. See inputs and call evidence.

Explicit breakpoint lookup.

`3072, 65280`

## Column Axis

Source: 0x3116. See inputs and call evidence.

Explicit breakpoint lookup.

`9984, 47744`

## Raw cells

```
166 166
166 166
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7e88  fc0cd6  LDD 0xcd6
7e8b  7c0dde  STD 0xdde
7e8e  fc0cd8  LDD 0xcd8
7e91  7c0de0  STD 0xde0
7e94  c602  LDAB #0x2
7e96  ce311b  LDX #0x311b
7e99  16c32d  JSR 0xc32d
7e9c  c30080  ADDD #0x80
7e9f  7a0cd2  STAA 0xcd2
7ea2  fc0900  LDD 0x900
7ea5  7c0ba2  STD 0xba2
7ea8  cc3126  LDD #0x3126
7eab  7c0ba4  STD 0xba4
7eae  8602  LDAA #0x2
7eb0  16ca49  JSR 0xca49
7eb3  7c0cda  STD 0xcda
7eb6  fc08e8  LDD 0x8e8
7eb9  7c0ba2  STD 0xba2
7ebc  cc3122  LDD #0x3122
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

unresolved cell conversion.

Combined code is clamp(selected_cell+CD4-128,0,255); used through (code+128), not a proven AFR encoding.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
