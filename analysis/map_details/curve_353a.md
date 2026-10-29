# Transient fuel multiplier vs pressure estimate

<!-- map-name -->
Stable ID: `curve_353a`. Category: Transient fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Transient correction

Cells: **0x3540–3547**, 1 rows × 8 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x08F2 pressure-derived estimate.

Output: u8 0x0A0D.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 28672; span 28672; factor 16; index divisor 65536. Header begins at 0x353A. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
83 94 105 116 121 131 142 152
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
9207  18250114  LBCS 0x931f
920b  200a  BRA 0x9217
920d  b608ed  LDAA 0x8ed
9210  b134c9  CMPA 0x34c9
9213  18250108  LBCS 0x931f
9217  ce353a  LDX #0x353a
921a  fc08f2  LDD 0x8f2
921d  16c1f2  JSR 0xc1f2
9220  7a0a0d  STAA 0xa0d
9223  f60a0f  LDAB 0xa0f
9226  12  MUL
9227  b7c6  XGDY
9229  b608f5  LDAA 0x8f5
922c  ce351d  LDX #0x351d
922f  16c1cd  JSR 0xc1cd
9232  7a0a10  STAA 0xa10
9235  180e  TAB
9237  87  CLRA
9238  c30180  ADDD #0x180
923b  16c243  JSR 0xc243
...
9429  1d0cf202  BCLR 0xcf2,0x2
942d  1e0cf20106  BRSET 0xcf2,0x1,0x9438
9432  87  CLRA
9433  c7  CLRB
9434  18200082  LBRA 0x94ba
9438  ce353a  LDX #0x353a
943b  fc08f2  LDD 0x8f2
943e  16c1f2  JSR 0xc1f2
9441  7a0a0d  STAA 0xa0d
9444  f60a0f  LDAB 0xa0f
9447  12  MUL
9448  b7c6  XGDY
944a  b608f5  LDAA 0x8f5
944d  ce351d  LDX #0x351d
9450  16c1cd  JSR 0xc1cd
9453  7a0a10  STAA 0xa10
9456  180e  TAB
9458  87  CLRA
9459  c30180  ADDD #0x180
945c  16c243  JSR 0xc243
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
