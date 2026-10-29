# Coolant enrichment — load-based fuel path

<!-- map-name -->
Stable ID: `curve_3315`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Additive coolant enrichment contribution for first fuel-gain lane

Cells: **0x3318–3326**, 1 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F4 coolant.

Output: u8 0x097B contributes 8*cell to pre-gain 0x096C.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 16; span 224; factor 16; index divisor 256. Header begins at 0x3315. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
61 53 46 38 32 27 21 15 10 7 6 5 4 3 2
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b88f  7a0a88  STAA 0xa88
b892  b608f4  LDAA 0x8f4
b895  ce4a33  LDX #0x4a33
b898  16c1cd  JSR 0xc1cd
b89b  7a0a89  STAA 0xa89
b89e  ce3315  LDX #0x3315
b8a1  b608f4  LDAA 0x8f4
b8a4  16c1cd  JSR 0xc1cd
b8a7  7a097b  STAA 0x97b
b8aa  ce3327  LDX #0x3327
b8ad  b608f4  LDAA 0x8f4
b8b0  16c1cd  JSR 0xc1cd
b8b3  7a097c  STAA 0x97c
b8b6  b608f4  LDAA 0x8f4
b8b9  ce34fd  LDX #0x34fd
b8bc  16c1cd  JSR 0xc1cd
b8bf  7a0a0f  STAA 0xa0f
b8c2  b64243  LDAA 0x4243
b8c5  8102  CMPA #0x2
b8c7  2606  BNE 0xb8cf
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/128`; unit: **normalized fuel percentage points**.

Additive coolant contribution to the normalized pre-gain, before IAT, pressure, transient and other multipliers. Zero contribution at cell zero.

uniform_input conversion: `temperature_celsius_candidate`; requires `yamaha_temperature_candidate`.
Converted values: -20, -10, 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
