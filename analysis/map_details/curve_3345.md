# Positive transient fuel gain vs coolant

<!-- map-name -->
Stable ID: `curve_3345`. Category: Transient fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Coolant-dependent correction

Cells: **0x3348–3356**, 1 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F4 coolant.

Output: u8 0x098F.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 16; span 224; factor 16; index divisor 256. Header begins at 0x3345. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
47 42 38 35 32 30 28 27 26 25 25 24 24 24 24
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
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
b1b1  8b01  ADDA #0x1
b1b3  8200  SBCA #0x0
b1b5  7a0b3d  STAA 0xb3d
b1b8  b118b0  CMPA 0x18b0
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/256`; unit: **%**.

dimensionless multiplier of the stated contribution, not necessarily total fuel

uniform_input conversion: `coolant_celsius`; requires `xt660_coolant_owner_corroborated`.
Converted values: -20, -10, 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| uniform_input | u8 0x08F4 coolant | Coolant Celsius encoding: code*0.625-30 (owner-corroborated) | Owner-corroborated encoding; sensor accuracy not measured here |

### What remains for this map

- Celsius encoding is owner-corroborated; reconcile the manual 80 C fallback with this image's 60 C replacement and establish sensor accuracy/range for this ECU.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
