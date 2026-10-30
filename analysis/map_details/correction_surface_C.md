# Fuel correction gain vs speed and load

<!-- map-name -->
Stable ID: `correction_surface_C`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Fuel correction surface

Cells: **0x3280–32DF**, 8 rows × 12 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed; u16 0x0C90 load code.

Output: u8 0x0972; multiplied by 0x0971, scaled and saturated into 0x0970.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x3270. See inputs and call evidence.

Explicit breakpoint lookup.

`4096, 5120, 6144, 10240, 20480, 30720, 40960, 51200`

## Column Axis

Source: 0x3258. See inputs and call evidence.

Explicit breakpoint lookup.

`16960, 19008, 21056, 23104, 25152, 27200, 29248, 31296, 33344, 35392, 37440, 47680`

## Raw cells

```
128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128
128 128 128 128 128 128 128 128 128 128 128 128
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b3b5  fc0976  LDD 0x976
b3b8  7c0dde  STD 0xdde
b3bb  fc0974  LDD 0x974
b3be  7c0de0  STD 0xde0
b3c1  c60c  LDAB #0xc
b3c3  ce327d  LDX #0x327d
b3c6  16c32d  JSR 0xc32d
b3c9  c30080  ADDD #0x80
b3cc  7a0972  STAA 0x972
b3cf  f60971  LDAB 0x971
b3d2  12  MUL
b3d3  59  ASLD
b3d4  2402  BCC 0xb3d8
b3d6  86ff  LDAA #0xff
b3d8  7a0970  STAA 0x970
b3db  ce32e0  LDX #0x32e0
b3de  fc08f2  LDD 0x8f2
b3e1  16c1f2  JSR 0xc1f2
b3e4  7a0978  STAA 0x978
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/128`; unit: **percent of reference multiplier**.

128 represents unity in the normalized consumer equation; exact integer stages and saturation are in map_models.py.

970=min(255,floor(cell*curve_323c/128)); factors couple and saturate before the fuel multiplication

Consumer instruction addresses: `0xB3CC`, `0x82D6`.

row_axis conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 800, 1000, 1200, 2000, 4000, 6000, 8000, 10000.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| row_axis | u16 0x0900 selected speed | Speed coordinate | Resolve the RPM telemetry divisor190 versus nominal divisor256 scale conflict; confirm timer clock and CPS pattern per crank revolution. See EXTERNAL_SCALE_CHECKS.md. |
| column_axis | u16 0x0C90 load code | Processed load coordinate | Finish the pressure-to-load transfer across modes; C90 is not a direct kPa axis. |

### What remains for this map

- Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.
- Confirm CPS pattern per mechanical revolution; the 12-pitch / 180-degree speed-period interpretation remains conditional.
- Resolve the RPM telemetry conflict: firmware divides speed code by 190, while the nominal map scale and the historical byte*50 logger would require 256. See EXTERNAL_SCALE_CHECKS.md.
- Finish the pressure-to-load transfer across modes; C90 is not a direct kPa axis.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
