# Fuel normalization recovery hold — normal ratio-code branch

<!-- map-name -->
Stable ID: `curve_31ec`. Category: Fuel.

The selector at 0xA448 splits ratio code 0x0898 at ROM 0x31EA (stock 5): normal 0–5 selects 0x31EC; extended above 5 selects 0x3200. The consuming normalization state is disabled in this image by ROM 0x3130 = 0xFF.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_SELECTORS.md).
<!-- /map-name -->

Hold count before normalization correction returns toward neutral

Cells: **0x31F2–31FE**, 1 rows × 13 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed.

Output: u8 0x09D9, latched into 0x09D7 and compared with 10-ms-task counter 0x09DD.

Selection: Ratio code 0x0898 <= ROM 0x31EA (stock 5); consuming normalization state disabled by stock ROM 0x3130 = 0xFF.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 8192; span 49152; factor 16; index divisor 65536. Header begins at 0x31EC. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
0 0 0 0 0 0 0 0 0 0 0 0 0
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
a444  7a09d8  STAA 0x9d8
a447  3d  RTS
a448  b60898  LDAA 0x898
a44b  b131ea  CMPA 0x31ea
a44e  2205  BHI 0xa455
a450  ce31ec  LDX #0x31ec
a453  2003  BRA 0xa458
a455  ce3200  LDX #0x3200
a458  fc0900  LDD 0x900
a45b  16c1f2  JSR 0xc1f2
a45e  7a09d9  STAA 0x9d9
a461  3d  RTS
a462  1f09cf101d  BRCLR 0x9cf,0x10,0xa484
a467  fc09d2  LDD 0x9d2
a46a  b309da  SUBD 0x9da
a46d  2511  BCS 0xa480
a46f  2613  BNE 0xa484
a471  b609de  LDAA 0x9de
a474  8b01  ADDA #0x1
a476  8200  SBCA #0x0
a478  7a09de  STAA 0x9de
a47b  b13214  CMPA 0x3214
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

conditional physical conversion.

Conversion: `raw*5000/timer_hz`; unit: **s**.

Latched threshold for qualifying 2-base-tick task iterations before correction recovery. Conditional count, not an unconditional wall-clock timer.

Required profiles: `nominal_xt_timer`. These are assumptions, not measured hardware parameters.

Stock activation: Normal state path is disabled: ROM 0x3130 is 0xFF; 0x8DF9 requires exactly 0x80. The disabled path resets CD4 to 128. Lookup presence alone does not establish an active effect.

uniform_input conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 1600, 2400, 3200, 4000, 4800, 5600, 6400, 7200, 8000, 8800, 9600, 10400, 11200.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
