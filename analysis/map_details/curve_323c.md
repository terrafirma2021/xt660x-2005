# Load-path fuel multiplier vs pressure estimate

<!-- map-name -->
Stable ID: `curve_323c`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Multiplier for correction_surface_C

Cells: **0x3242–3256**, 1 rows × 21 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x08F2 pressure-derived estimate.

Output: u8 0x0971.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 29184; span 20480; factor 64; index divisor 65536. Header begins at 0x323C. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
80 82 85 88 90 93 96 98 101 103 106 109 111 114 117 119 122 125 127 130 132
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b374  7c08f2  STD 0x8f2
b377  b60b3b  LDAA 0xb3b
b37a  8b01  ADDA #0x1
b37c  8200  SBCA #0x0
b37e  7a0b3b  STAA 0xb3b
b381  ce323c  LDX #0x323c
b384  fc08f2  LDD 0x8f2
b387  16c1f2  JSR 0xc1f2
b38a  7a0971  STAA 0x971
b38d  fc0c90  LDD 0xc90
b390  7c0ba2  STD 0xba2
b393  cc3258  LDD #0x3258
b396  7c0ba4  STD 0xba4
b399  860c  LDAA #0xc
b39b  16ca49  JSR 0xca49
b39e  7c0974  STD 0x974
b3a1  fc0900  LDD 0x900
b3a4  7c0ba2  STD 0xba2
b3a7  cc3270  LDD #0x3270
b3aa  7c0ba4  STD 0xba4
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/128`; unit: **percent of reference multiplier**.

128 represents unity in the normalized consumer equation; exact integer stages and saturation are in map_models.py.

970=min(255,floor(correction_surface_C*cell/128)); neither input is an independent final fuel percentage

Consumer instruction addresses: `0xB3CF`, `0x82D6`.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
