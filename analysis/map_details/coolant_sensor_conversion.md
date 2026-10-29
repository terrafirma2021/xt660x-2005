# coolant_sensor_conversion

Sensor conversion to internal temperature code; Celsius offset unresolved

Cells: **0x4F47–4F63**, 1 rows × 29 columns, 8-bit unsigned big-endian values.

Inputs: 10-bit ADC channel 6.

Output: RAM 0x08F6 measured / 0x08F4 effective.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: linear Q8, high byte (floor); last intake-temperature knot is an interpolation endpoint beyond ADC maximum 1023.

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
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

unresolved cell conversion.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
