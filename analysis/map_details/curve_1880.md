# Pressure-processing offset vs engine speed

<!-- map-name -->
Stable ID: `curve_1880`. Category: Sensor processing.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Centered additive pressure-processing offset; not a multiplier

Cells: **0x1886–1899**, 1 rows × 20 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed.

Output: u8 0x0CB0; 0x0CB4 = clamp(0x0CB2 + 64*(cell-128),0,65535).

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 6144; span 38912; factor 32; index divisor 65536. Header begins at 0x1880. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
128 128 128 128 128 128 128 128 128 128 128 128 128 128 128 128 128 128 128 128
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b26f  8200  SBCA #0x0
b271  2008  BRA 0xb27b
b273  7a0b3a  STAA 0xb3a
b276  b11871  CMPA 0x1871
b279  2329  BLS 0xb2a4
b27b  ce1880  LDX #0x1880
b27e  fc0900  LDD 0x900
b281  16c1f2  JSR 0xc1f2
b284  7a0cb0  STAA 0xcb0
b287  c7  CLRB
b288  49  LSRD
b289  49  LSRD
b28a  832000  SUBD #0x2000
b28d  250a  BCS 0xb299
b28f  f30cb2  ADDD 0xcb2
b292  240d  BCC 0xb2a1
b294  ccffff  LDD #0xffff
b297  2008  BRA 0xb2a1
b299  f30cb2  ADDD 0xcb2
b29c  2503  BCS 0xb2a1
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `64*(raw-128)`; unit: **pressure-coordinate counts**.

Additive offset into CB4 relative to CB2, saturated to a word. It is not a pressure multiplier or measured kPa.

uniform_input conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 1200, 1600, 2000, 2400, 2800, 3200, 3600, 4000, 4400, 4800, 5200, 5600, 6000, 6400, 6800, 7200, 7600, 8000, 8400, 8800.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| uniform_input | u16 0x0900 selected speed | Speed coordinate | Resolve the RPM telemetry divisor190 versus nominal divisor256 scale conflict; confirm timer clock and CPS pattern per crank revolution. See EXTERNAL_SCALE_CHECKS.md. |

### What remains for this map

- Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.
- Confirm CPS pattern per mechanical revolution; the 12-pitch / 180-degree speed-period interpretation remains conditional.
- Resolve the RPM telemetry conflict: firmware divides speed code by 190, while the nominal map scale and the historical byte*50 logger would require 256. See EXTERNAL_SCALE_CHECKS.md.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
