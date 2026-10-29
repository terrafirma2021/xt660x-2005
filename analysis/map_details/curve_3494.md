# Relative-throttle qualification threshold vs speed

<!-- map-name -->
Stable ID: `curve_3494`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Filtered relative-throttle threshold in a qualification counter path

Cells: **0x349A–34A3**, 1 rows × 10 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed.

Output: u8 0x0A05 compared with 0x08EC.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 8192; span 36864; factor 16; index divisor 65536. Header begins at 0x3494. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
4 4 4 4 4 4 4 4 4 4
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
8f85  2605  BNE 0x8f8c
8f87  fc08e6  LDD 0x8e6
8f8a  2002  BRA 0x8f8e
8f8c  c6ff  LDAB #0xff
8f8e  7b08ec  STAB 0x8ec
8f91  ce3494  LDX #0x3494
8f94  fc0900  LDD 0x900
8f97  16c1f2  JSR 0xc1f2
8f9a  7a0a05  STAA 0xa05
8f9d  16a314  JSR 0xa314
8fa0  1e08af0834  BRSET 0x8af,0x8,0x8fd9
8fa5  1e08af042f  BRSET 0x8af,0x4,0x8fd9
8faa  b608ec  LDAA 0x8ec
8fad  b10a05  CMPA 0xa05
8fb0  2303  BLS 0x8fb5
8fb2  87  CLRA
8fb3  2007  BRA 0x8fbc
8fb5  b60b18  LDAA 0xb18
8fb8  8b01  ADDA #0x1
8fba  8200  SBCA #0x0
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw`; unit: **10-bit ADC counts above learned closed position**.

Threshold compared with min(255,filtered relative TPS count). Electrical/mechanical angle remains unconfirmed.

A05 compared against min(255,08E6), a filtered relative TPS count; not a throttle-rate threshold

Consumer instruction addresses: `0x8C99`, `0x8F82`, `0x8FAA`.

uniform_input conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 1600, 2400, 3200, 4000, 4800, 5600, 6400, 7200, 8000, 8800.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
