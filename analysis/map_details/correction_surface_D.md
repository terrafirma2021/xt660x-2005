# Alternate base ignition timing vs speed and coolant

<!-- map-name -->
Stable ID: `correction_surface_D`. Category: Ignition.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Alternate base spark surface; replaces the normal base in this mode, not an additive correction

Cells: **0x4A60–4AF5**, 10 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u8 high byte of 0x0900 selected speed; u8 0x08F4 coolant.

Output: u8 0x0A88 selected as a base by 0x0885 bit 0x20.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x4A56. See inputs and call evidence.

Explicit breakpoint lookup.

`20, 22, 24, 26, 28, 30, 32, 34, 36, 38`

## Column Axis

Source: 0x4A46. See inputs and call evidence.

Explicit breakpoint lookup.

`16, 32, 48, 64, 80, 96, 112, 128, 144, 160, 176, 192, 208, 224, 240`

## Raw cells

```
78 78 78 78 78 78 78 78 78 64 64 64 64 64 64
78 78 78 78 78 78 78 64 64 64 64 64 64 64 64
78 78 78 78 64 64 64 64 64 64 64 64 64 64 64
78 78 64 64 64 64 64 64 64 64 64 64 64 64 64
78 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b878  fc0a90  LDD 0xa90
b87b  7c0dde  STD 0xdde
b87e  fc0a8e  LDD 0xa8e
b881  7c0de0  STD 0xde0
b884  c60f  LDAB #0xf
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
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

conditional physical conversion.

Conversion: `raw*three_pitch_degrees/256`; unit: **relative crank degrees**.

relative scheduler angle, NOT absolute degrees BTDC; fixed and variable timer corrections follow

Required profiles: `nominal_xt_crank`. These are assumptions, not measured hardware parameters.

Used instead of A83 when 0885 bit 0x20 selects alternate spark mode; floor(max(selected_base,D05_if_required)*A86/128), then other trims and clamps

Consumer instruction addresses: `0x8979`, `0x899E`.

row_axis conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900.

column_axis conversion: `temperature_celsius_candidate`; requires `yamaha_temperature_candidate`.
Converted values: -20, -10, 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| row_axis | u8 high byte of 0x0900 selected speed | Speed coordinate | Confirm the timer clock and CPS pattern per crank revolution before treating the axis as RPM. |
| column_axis | u8 0x08F4 coolant | Effective coolant temperature code | Confirm the coolant circuit/temperature transfer and resolve the XT manual fallback conflict before assigning Celsius. |

### What remains for this map

- Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.
- Confirm CPS pattern per mechanical revolution; the 12-pitch / 180-degree speed-period interpretation remains conditional.
- Confirm the coolant circuit/temperature transfer and resolve the XT manual fallback conflict before assigning Celsius.
- Establish CPS edge relative to mechanical TDC and the coil firing edge; relative scheduler degrees are not absolute BTDC.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
