# Secondary injector quantity multiplier

<!-- map-name -->
Stable ID: `correction_surface_A`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Secondary injector quantity multiplier; cell 128 is unity

Cells: **0x1A1A–1ACD**, 12 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed; u16 0x08E8 throttle code.

Output: u8 0x0CEC.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x1A02. See inputs and call evidence.

Explicit breakpoint lookup.

`0, 6656, 7680, 10240, 12800, 15360, 20480, 25600, 28160, 30720, 35840, 46080`

## Column Axis

Source: 0x19E4. See inputs and call evidence.

Explicit breakpoint lookup.

`0, 512, 5248, 7872, 10496, 13120, 15744, 18368, 20992, 23616, 28800, 34048, 39296, 45184, 47168`

## Raw cells

```
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
8676  fc0cee  LDD 0xcee
8679  7c0dde  STD 0xdde
867c  fc0cf0  LDD 0xcf0
867f  7c0de0  STD 0xde0
8682  c60f  LDAB #0xf
8684  ce1a17  LDX #0x1a17
8687  16c32d  JSR 0xc32d
868a  c30080  ADDD #0x80
868d  7a0cec  STAA 0xcec
8690  3d  RTS
8691  1d088104  BCLR 0x881,0x4
8695  1c08bf80  BSET 0x8bf,0x80
8699  1d08bf80  BCLR 0x8bf,0x80
869d  3d  RTS
869e  1d088102  BCLR 0x881,0x2
86a2  1c08c020  BSET 0x8c0,0x20
86a6  87  CLRA
86a7  f6189a  LDAB 0x189a
86aa  59  ASLD
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/128`; unit: **percent of reference multiplier**.

128 represents unity in the normalized consumer equation; exact integer stages and saturation are in map_models.py.

rounded_q8(quantity,2*cell); secondary injector channel gain

Stock activation: Used in secondary-quantity arithmetic; variant 9 skips the normal secondary injector scheduling entry. Diagnostic paths are separate.

Consumer instruction addresses: `0x84FA`, `0x7C42`, `0x94E8`.

row_axis conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 0, 1300, 1500, 2000, 2500, 3000, 4000, 5000, 5500, 6000, 7000, 9000.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
