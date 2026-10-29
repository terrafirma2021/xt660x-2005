# curve_3220

Fuel temperature multiplier; used with offset 0x0180

Cells: **0x3223–323B**, 1 rows × 25 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F5 intake temperature.

Output: u8 0x0979.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 16; span 192; factor 32; index divisor 256. Header begins at 0x3220. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
158 153 148 143 138 135 133 130 127 125 122 120 117 115 112 110 107 104 102 99 97 94 92 89 87
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b17a  49  LSRD
b17b  49  LSRD
b17c  49  LSRD
b17d  7c095e  STD 0x95e
b180  b608f5  LDAA 0x8f5
b183  ce3220  LDX #0x3220
b186  16c1cd  JSR 0xc1cd
b189  7a0979  STAA 0x979
b18c  b608f4  LDAA 0x8f4
b18f  ce3345  LDX #0x3345
b192  16c1cd  JSR 0xc1cd
b195  7a098f  STAA 0x98f
b198  b608f4  LDAA 0x8f4
b19b  ce3357  LDX #0x3357
b19e  16c1cd  JSR 0xc1cd
b1a1  7a0990  STAA 0x990
b1a4  1f08812029  BRCLR 0x881,0x20,0xb1d2
b1a9  1e08800824  BRSET 0x880,0x8,0xb1d2
b1ae  b60b3d  LDAA 0xb3d
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `(raw+384)*100/512`; unit: **%**.

IAT factor in the normal fuel chain; integer rounding occurs in the actual multi-stage calculation

Converted percentage applies to the normal-running consumer at 0x828C/0x82A6. Startup consumer at 0x7BF1 has different stage scaling.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
