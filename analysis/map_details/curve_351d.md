# curve_351d

Transient temperature multiplier

Cells: **0x3520–3538**, 1 rows × 25 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F5 intake temperature.

Output: u8 0x0A10; subsequently widened and offset by 0x0180.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 16; span 192; factor 32; index divisor 256. Header begins at 0x351D. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
158 153 148 143 138 135 133 130 128 125 122 120 117 115 112 110 107 98 89 80 71 64 56 48 40
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
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
923e  7c0dde  STD 0xdde
9241  b608ed  LDAA 0x8ed
9244  f60d87  LDAB 0xd87
9247  c109  CMPB #0x9
9249  260a  BNE 0x9255
924b  1e08961005  BRSET 0x896,0x10,0x9255
9250  ce34d0  LDX #0x34d0
...
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
945f  7c0dde  STD 0xdde
9462  b608ed  LDAA 0x8ed
9465  f60d87  LDAB 0xd87
9468  c109  CMPB #0x9
946a  260a  BNE 0x9476
946c  1e08961005  BRSET 0x896,0x10,0x9476
9471  ce355d  LDX #0x355d
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `(raw+384)*100/256`; unit: **%**.

factor in transient contribution; not the same scaling as normal IAT correction

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
