# Startup fuel multiplier vs pressure estimate

<!-- map-name -->
Stable ID: `curve_19c6`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Startup fuel multiplier

Cells: **0x19CC–19D3**, 1 rows × 8 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x08F2 pressure-derived estimate.

Output: u8 0x0938.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 28672; span 28672; factor 16; index divisor 65536. Header begins at 0x19C6. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
78 89 99 110 121 131 142 152
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7b9c  2602  BNE 0x7ba0
7b9e  860a  LDAA #0xa
7ba0  7a0a1b  STAA 0xa1b
7ba3  1e08811003  BRSET 0x881,0x10,0x7bab
7ba8  067cc3  JMP 0x7cc3
7bab  ce19c6  LDX #0x19c6
7bae  fc08f2  LDD 0x8f2
7bb1  16c1f2  JSR 0xc1f2
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
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/128`; unit: **percent of reference multiplier**.

128 represents unity in the normalized consumer equation; exact integer stages and saturation are in map_models.py.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| uniform_input | u16 0x08F2 pressure-derived estimate | Pressure-derived estimate | Confirm the pressure estimator, analog transfer and reference before assigning kPa to 08F2. |

### What remains for this map

- Confirm the pressure estimator, analog transfer and reference before assigning kPa to 08F2.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
