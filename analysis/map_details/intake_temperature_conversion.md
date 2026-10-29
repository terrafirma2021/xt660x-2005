# Intake air temperature sensor conversion

<!-- map-name -->
Stable ID: `intake_temperature_conversion`. Category: Sensor processing.

Sensor identity is corroborated. The internal-code-to-Celsius profile remains conditional on the sensor circuit and ECU identification.

Naming evidence: [recovered derivation](../../analysis/semantics/TEMPERATURE_PROFILE.md).
<!-- /map-name -->

Sensor conversion to internal temperature code; Celsius offset unresolved

Cells: **0x4F26–4F46**, 1 rows × 33 columns, 8-bit unsigned big-endian values.

Inputs: 10-bit ADC channel 3.

Output: RAM 0x08F5.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: linear Q8, high byte (floor); last intake-temperature knot is an interpolation endpoint beyond ADC maximum 1023.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Column Axis

Source: computed in firmware. 10-bit ADC channel 3

q8=(adc10//4)*32

`0, 32, 64, 96, 128, 160, 192, 224, 256, 288, 320, 352, 384, 416, 448, 480, 512, 544, 576, 608, 640, 672, 704, 736, 768, 800, 832, 864, 896, 928, 960, 992, 1024`

## Raw cells

```
255 255 211 184 166 152 141 131 123 116 109 103 97 91 86 81 76 71 67 62 57 52 48 43 37 32 26 19 12 3 0 0 0
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
6fb6  2000  BRA 0x6fb8
6fb8  cc0800  LDD #0x800
6fbb  7a08c2  STAA 0x8c2
6fbe  7b08c3  STAB 0x8c3
6fc1  3d  RTS
6fc2  f60d59  LDAB 0xd59
6fc5  c180  CMPB #0x80
6fc7  2761  BEQ 0x702a
6fc9  1e08a0045c  BRSET 0x8a0,0x4,0x702a
6fce  1e08b28057  BRSET 0x8b2,0x80,0x702a
6fd3  8107  CMPA #0x7
6fd5  2504  BCS 0x6fdb
6fd7  81f8  CMPA #0xf8
6fd9  252f  BCS 0x700a
6fdb  1f08b52024  BRCLR 0x8b5,0x20,0x7004
6fe0  b60b42  LDAA 0xb42
6fe3  b10d8a  CMPA 0xd8a
6fe6  2342  BLS 0x702a
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

conditional physical conversion.

Conversion: `raw*0.625-30`; unit: **candidate degC**.

Inferred temperature profile; consistent with sensor resistances and TDM fallback values, but XT660 manual coolant fallback differs. See TEMPERATURE_PROFILE.md.

Required profiles: `yamaha_temperature_candidate`. These are assumptions, not measured hardware parameters.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| column_axis | 10-bit ADC channel 3 | ADC count | Not required: internal code/count |

### What remains for this map

- Confirm the IAT circuit/temperature transfer before assigning Celsius.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
