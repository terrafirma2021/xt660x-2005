# Intake air temperature sensor conversion

<!-- map-name -->
Stable ID: `intake_temperature_conversion`. Category: Sensor processing.

Sensor identity is corroborated. The internal-code-to-Celsius profile remains conditional on the sensor circuit and ECU identification.

Naming evidence: [recovered derivation](../../analysis/semantics/TEMPERATURE_PROFILE.md).
<!-- /map-name -->

Sensor conversion to internal temperature code; candidate Celsius scale remains conditional

Cells: **0x4F26–4F46**, 1 rows × 33 columns, 8-bit unsigned big-endian values.

Inputs: 10-bit ADC channel 3.

Output: RAM 0x08F5.

Selection: Lookup runs when 08A0 bit 0x04 is set or 08B0 bit 0x40 is clear; otherwise 08F5 takes ROM 4E65 (80). This handler does not select a temperature table by D87.

Interpolation: linear Q8, high byte (floor); discards two ADC low bits; last stored knot at 1024 is an interpolation endpoint beyond ADC maximum 1023.

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
...
7018  b10d8a  CMPA 0xd8a
701b  230d  BLS 0x702a
701d  1f08b04008  BRCLR 0x8b0,0x40,0x702a
7022  1d08b040  BCLR 0x8b0,0x40
7026  1c0bd240  BSET 0xbd2,0x40
702a  1e08a00405  BRSET 0x8a0,0x4,0x7034
702f  1e08b04026  BRSET 0x8b0,0x40,0x705a
7034  b608ca  LDAA 0x8ca
7037  7a08d8  STAA 0x8d8
703a  8000  SUBA #0x0
703c  2402  BCC 0x7040
703e  8600  LDAA #0x0
7040  ce4f23  LDX #0x4f23
7043  c620  LDAB #0x20
7045  12  MUL
7046  16c1db  JSR 0xc1db
7049  7a08f5  STAA 0x8f5
704c  c6a0  LDAB #0xa0
704e  12  MUL
704f  8196  CMPA #0x96
7051  2502  BCS 0x7055
7053  8695  LDAA #0x95
7055  7a0aeb  STAA 0xaeb
7058  2018  BRA 0x7072
705a  b608ca  LDAA 0x8ca
705d  7a08d8  STAA 0x8d8
7060  b64e65  LDAA 0x4e65
7063  7a08f5  STAA 0x8f5
7066  c6a0  LDAB #0xa0
7068  12  MUL
7069  8196  CMPA #0x96
706b  2502  BCS 0x706f
706d  8695  LDAA #0x95
706f  7a0aeb  STAA 0xaeb
7072  cc1000  LDD #0x1000
7075  7a08c2  STAA 0x8c2
7078  7b08c3  STAB 0x8c3
707b  3d  RTS
707c  1e0880100a  BRSET 0x880,0x10,0x708b
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
- Selection is traced for the documented branches; complete all downstream override/fault paths before tuning sign-off.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
