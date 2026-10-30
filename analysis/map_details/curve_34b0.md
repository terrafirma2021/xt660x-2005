# Centered fuel-correction gain vs engine speed

<!-- map-name -->
Stable ID: `curve_34b0`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Speed-dependent correction

Cells: **0x34B6–34C4**, 1 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0900 selected speed.

Output: u8 0x09A0.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 5120; span 7168; factor 128; index divisor 65536. Header begins at 0x34B0. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
255 255 255 255 255 255 255 255 255 255 255 255 255 0 0
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7fff  2405  BCC 0x8006
8001  fc0994  LDD 0x994
8004  2003  BRA 0x8009
8006  fc0996  LDD 0x996
8009  7c0992  STD 0x992
800c  ce34b0  LDX #0x34b0
800f  fc0900  LDD 0x900
8012  16c1f2  JSR 0xc1f2
8015  7a09a0  STAA 0x9a0
8018  1e0a16020b  BRSET 0xa16,0x2,0x8028
801d  f609fc  LDAB 0x9fc
8020  168623  JSR 0x8623
8023  7a095c  STAA 0x95c
8026  2009  BRA 0x8031
8028  f60a00  LDAB 0xa00
802b  168623  JSR 0x8623
802e  7a095d  STAA 0x95d
8031  b619de  LDAA 0x19de
8034  8101  CMPA #0x1
8036  2703  BEQ 0x803b
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/256`; unit: **%**.

dimensionless multiplier of the stated contribution, not necessarily total fuel

95C/95D=clamp(128+signed_round((input-128)*cell/256),0,255); centered result later contributes 4*(result-128) timer ticks

Consumer instruction addresses: `0x8623`, `0x8323`.

uniform_input conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400.

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
