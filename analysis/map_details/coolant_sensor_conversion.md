# Coolant sensor conversion

<!-- map-name -->
Stable ID: `coolant_sensor_conversion`. Category: Sensor processing.

Sensor identity is corroborated. The internal-code-to-Celsius profile remains conditional on the sensor circuit and ECU identification.

Naming evidence: [recovered derivation](../../analysis/semantics/TEMPERATURE_PROFILE.md).
<!-- /map-name -->

Sensor conversion to internal temperature code; candidate Celsius scale remains conditional

Cells: **0x4F47–4F63**, 1 rows × 29 columns, 8-bit unsigned big-endian values.

Inputs: 10-bit ADC channel 6.

Output: RAM 0x08F6 measured / 0x08F4 effective.

Selection: Measured conversion is computed at 0x7115-0x7136 on each handler call. Effective 08F4 takes fallback ROM 4E64 (144) only when 08A0 bit 0x04 is clear and 08B0 bit 0x80 is set; otherwise it takes measured 08F6. This handler does not select a temperature table by D87.

Interpolation: linear Q8, high byte (floor); coolant input clamps below ADC 60 and at/above ADC 956.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Column Axis

Source: computed in firmware. 10-bit ADC channel 6

q8=clamp((adc10*64-3840)//8,0,7168)

`60, 92, 124, 156, 188, 220, 252, 284, 316, 348, 380, 412, 444, 476, 508, 540, 572, 604, 636, 668, 700, 732, 764, 796, 828, 860, 892, 924, 956`

## Raw cells

```
239 210 190 175 163 153 144 136 128 122 116 110 104 99 93 88 83 78 73 67 62 57 51 45 38 31 23 13 0
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7096  7c08d2  STD 0x8d2
7099  cc0040  LDD #0x40
709c  7a08c2  STAA 0x8c2
709f  7b08c3  STAB 0x8c3
70a2  3d  RTS
70a3  f60d58  LDAB 0xd58
70a6  c180  CMPB #0x80
70a8  276b  BEQ 0x7115
70aa  1e08a00466  BRSET 0x8a0,0x4,0x7115
70af  1e08b28061  BRSET 0x8b2,0x80,0x7115
70b4  8107  CMPA #0x7
70b6  2504  BCS 0x70bc
70b8  81f8  CMPA #0xf8
70ba  2535  BCS 0x70f1
70bc  1f08b51026  BRCLR 0x8b5,0x10,0x70e7
70c1  b60b41  LDAA 0xb41
70c4  b10d8a  CMPA 0xd8a
70c7  2202  BHI 0x70cb
...
7109  1d08b080  BCLR 0x8b0,0x80
710d  1c0bd240  BSET 0xbd2,0x40
7111  1d0bac80  BCLR 0xbac,0x80
7115  fc08ca  LDD 0x8ca
7118  7c08d6  STD 0x8d6
711b  ce4f44  LDX #0x4f44
711e  fc08d6  LDD 0x8d6
7121  830f00  SUBD #0xf00
7124  2402  BCC 0x7128
7126  87  CLRA
7127  c7  CLRB
7128  49  LSRD
7129  49  LSRD
712a  49  LSRD
712b  8c1c00  CPD #0x1c00
712e  2503  BCS 0x7133
7130  cc1c00  LDD #0x1c00
7133  16c276  JSR 0xc276
7136  7a08f6  STAA 0x8f6
7139  c6a0  LDAB #0xa0
713b  12  MUL
713c  8196  CMPA #0x96
713e  2502  BCS 0x7142
7140  8695  LDAA #0x95
7142  7a0ae8  STAA 0xae8
7145  1e08a0040a  BRSET 0x8a0,0x4,0x7154
714a  1f08b08005  BRCLR 0x8b0,0x80,0x7154
714f  b64e64  LDAA 0x4e64
7152  2003  BRA 0x7157
7154  b608f6  LDAA 0x8f6
7157  7a08f4  STAA 0x8f4
715a  1e08832031  BRSET 0x883,0x20,0x7190
715f  1c088320  BSET 0x883,0x20
7163  b608f4  LDAA 0x8f4
7166  ce1996  LDX #0x1996
7169  16c1cd  JSR 0xc1cd
716c  7a0a08  STAA 0xa08
716f  1e0884081c  BRSET 0x884,0x8,0x7190
7174  1c088408  BSET 0x884,0x8
7178  b608f4  LDAA 0x8f4
717b  ce32ef  LDX #0x32ef
717e  16c1cd  JSR 0xc1cd
7181  7c0994  STD 0x994
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
| column_axis | 10-bit ADC channel 6 | ADC count | Not required: internal code/count |

### What remains for this map

- Confirm the coolant circuit/temperature transfer and resolve the XT manual fallback conflict before assigning Celsius.
- Selection is traced for the documented branches; complete all downstream override/fault paths before tuning sign-off.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
