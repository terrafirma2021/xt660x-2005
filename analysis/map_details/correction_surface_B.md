# Fuel normalization offset

<!-- map-name -->
Stable ID: `correction_surface_B`. Category: Fuel.

This normal correction state is disabled in the supplied image by ROM 0x3130 = 0xFF. Selection numbers do not imply named riding modes.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Centered correction to the common fuel normalization denominator; neutral 128

Cells: **0x3168–31E9**, 13 rows × 10 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed; u16 0x08E8 throttle code.

Output: u8 0x09D8, latched to 0x09D6 and selected into 0x0CD4.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x314E. See inputs and call evidence.

Explicit breakpoint lookup.

`8192, 12288, 16384, 20480, 24576, 28672, 32768, 36864, 40960, 45056, 49152, 53248, 57344`

## Column Axis

Source: 0x313A. See inputs and call evidence.

Explicit breakpoint lookup.

`0, 512, 1024, 3072, 6144, 12288, 20480, 28672, 36864, 45056`

## Raw cells

```
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
a42d  fc09fa  LDD 0x9fa
a430  7c0dde  STD 0xdde
a433  fc09f8  LDD 0x9f8
a436  7c0de0  STD 0xde0
a439  c60a  LDAB #0xa
a43b  ce3165  LDX #0x3165
a43e  16c32d  JSR 0xc32d
a441  c30080  ADDD #0x80
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
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw-128`; unit: **normalization-code counts**.

Latched into CD4 under eligibility gates, added to the selected normalization code before its inverse-ratio calculation.

Stock activation: Normal state path is disabled: ROM 0x3130 is 0xFF; 0x8DF9 requires exactly 0x80. The disabled path resets CD4 to 128. Lookup presence alone does not establish an active effect.

row_axis conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 1600, 2400, 3200, 4000, 4800, 5600, 6400, 7200, 8000, 8800, 9600, 10400, 11200.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
