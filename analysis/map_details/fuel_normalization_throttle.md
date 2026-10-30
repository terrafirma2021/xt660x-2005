# Throttle-based fuel normalization input

<!-- map-name -->
Stable ID: `fuel_normalization_throttle`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Fuel normalization input; selected when ROM 0x3114 does not equal 0x80

Cells: **0x312A–312D**, 2 rows × 2 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed; u16 0x08E8 throttle code.

Output: u8 0x0CD3.

Selection: Both tables are evaluated; ROM 0x3114 != 0x80 selects throttle (selected in stock, value 0) at 0x7EE4; this is an equality comparison, not a bit test.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x3126. See inputs and call evidence.

Explicit breakpoint lookup.

`3072, 65280`

## Column Axis

Source: 0x3122. See inputs and call evidence.

Explicit breakpoint lookup.

`5248, 26240`

## Raw cells

```
166 166
166 166
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7eca  fc0cda  LDD 0xcda
7ecd  7c0dde  STD 0xdde
7ed0  fc0cdc  LDD 0xcdc
7ed3  7c0de0  STD 0xde0
7ed6  c602  LDAB #0x2
7ed8  ce3127  LDX #0x3127
7edb  16c32d  JSR 0xc32d
7ede  c30080  ADDD #0x80
7ee1  7a0cd3  STAA 0xcd3
7ee4  b63114  LDAA 0x3114
7ee7  8180  CMPA #0x80
7ee9  2605  BNE 0x7ef0
7eeb  b60cd2  LDAA 0xcd2
7eee  2003  BRA 0x7ef3
7ef0  b60cd3  LDAA 0xcd3
7ef3  7a0cd1  STAA 0xcd1
7ef6  f60cd4  LDAB 0xcd4
7ef9  c080  SUBB #0x80
7efb  2508  BCS 0x7f05
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw`; unit: **inverse-ratio input code**.

Selected lookup code enters clamp(raw+CD4-128,0,255), then the rounded inverse-ratio consumer. Zero combined code bypasses normalization to unity. This is not an AFR or direct percent-fuel encoding.

The selected rounded lookup becomes CD1; CD0=clamp(CD1+CD4-128,0,255). CE2=normalization(CD0,CD5,ROM[1ACE]) is a Q8 multiplier shared by 0952/0954/0956/0958 into CE4/CE6/CE8/CEA. Increasing a nonzero code at fixed gain/reference reduces the ideal multiplier; code zero instead bypasses to unity. See NORMALIZATION.md for exact rounding and exceptions.

### Fixed stock reference example

With gain 128, reference 166 and offset code 128, all stock cells produce a 100% multiplier. Firmware interpolates raw codes first, rounds to a byte, then takes the inverse ratio. Do not interpolate these displayed percentages or reuse them with different gain/offset/reference.

See [normalization derivation and tests](../semantics/NORMALIZATION.md).

Stock activation: ROM 0x3114 is 0: the throttle table is selected; the load table is calculated but not selected. ROM 0x3130 is 0xFF, disabling the normal offset state and resetting CD4 to 128.

Consumer instruction addresses: `0x7EE4`, `0x7EF3`, `0x7F0B`, `0x7F50`, `0x7FA8`, `0x7FAB`, `0x7FD5`.

row_axis conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 600, 12750.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| row_axis | u16 0x0900 selected speed | Speed coordinate | Confirm the timer clock and CPS pattern per crank revolution before treating the axis as RPM. |
| column_axis | u16 0x08E8 throttle code | Relative throttle coordinate | Confirm the learned-closed reference and sensor/mechanical transfer before assigning degrees or percent throttle. |

### What remains for this map

- Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.
- Confirm CPS pattern per mechanical revolution; the 12-pitch / 180-degree speed-period interpretation remains conditional.
- Confirm the learned-closed reference and sensor/mechanical transfer before assigning degrees or percent throttle.
- Selection is traced for the documented branches; complete all downstream override/fault paths before tuning sign-off.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
