# Throttle-path fuel multiplier vs pressure estimate

<!-- map-name -->
Stable ID: `curve_32e0`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Pressure-dependent fuel correction

Cells: **0x32E6–32ED**, 1 rows × 8 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x08F2 pressure-derived estimate.

Output: u8 0x0978.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 28672; span 28672; factor 16; index divisor 65536. Header begins at 0x32E0. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
78 89 99 110 121 131 142 152
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b3d2  12  MUL
b3d3  59  ASLD
b3d4  2402  BCC 0xb3d8
b3d6  86ff  LDAA #0xff
b3d8  7a0970  STAA 0x970
b3db  ce32e0  LDX #0x32e0
b3de  fc08f2  LDD 0x8f2
b3e1  16c1f2  JSR 0xc1f2
b3e4  7a0978  STAA 0x978
b3e7  1d08bc02  BCLR 0x8bc,0x2
b3eb  3d  RTS
b3ec  1e0891403a  BRSET 0x891,0x40,0xb42b
b3f1  1e08910222  BRSET 0x891,0x2,0xb418
b3f6  1d088f80  BCLR 0x88f,0x80
b3fa  1c089080  BSET 0x890,0x80
b3fe  fc0b30  LDD 0xb30
b401  c30001  ADDD #0x1
b404  c200  SBCB #0x0
b406  8200  SBCA #0x0
b408  7c0b30  STD 0xb30
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/128`; unit: **percent of reference multiplier**.

128 represents unity in the normalized consumer equation; exact integer stages and saturation are in map_models.py.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
