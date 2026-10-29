# curve_4a33

Filtered relative-throttle threshold enabling alternate spark mode; not a spark-angle correction

Cells: **0x4A36–4A44**, 1 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F4 coolant.

Output: u8 0x0A89 compared with 0x08EC.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 16; span 224; factor 16; index divisor 256. Header begins at 0x4A33. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
32 32 32 32 32 32 32 32 32 32 32 32 32 32 32
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b886  ce4a5d  LDX #0x4a5d
b889  16c32d  JSR 0xc32d
b88c  c30080  ADDD #0x80
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
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw`; unit: **10-bit ADC counts above learned closed position**.

Threshold compared with min(255,filtered relative TPS count). Electrical/mechanical angle remains unconfirmed.

A89 compared against min(255,08E6), a filtered relative TPS count; coolant selects the threshold, not a spark-angle correction

Consumer instruction addresses: `0x8C99`, `0x8F82`, `0x96BA`.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
