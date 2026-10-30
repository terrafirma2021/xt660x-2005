# Air-induction enable vs speed and load

<!-- map-name -->
Stable ID: `step_grid_4d48`. Category: Air induction.

Logical eligibility gate: zero inhibits the path; nonzero permits further tests. It is not a physical percentage or a complete enable decision. Both stock adaptive-feedback grids contain only zero.

Naming evidence: [recovered derivation](../../analysis/semantics/EXTENDED_MAPS.md).
<!-- /map-name -->

Air-induction solenoid eligibility grid; zero inhibits this eligibility path

Cells: **0x4D48–4E0F**, 20 rows × 10 columns, 8-bit unsigned big-endian values.

Inputs: u16 RAM 0x0900: selected speed code; u16 RAM 0x0C90.

Output: u8 RAM 0x0ACE; column/row bins at 0x0AD2/0x0AD3.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: none; strict > threshold selects upper bin; equality stays in lower bin.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x4D20. u16 RAM 0x0900

lower bin; bin = number of thresholds strictly below input

`4608, 5632, 6656, 10240, 20480, 30720, 46080, 46592, 47104, 47616, 48128, 48640, 49152, 49664, 50176, 50688, 51200, 51712, 52224`

Following unused stored word: `{"address": "0x4D46", "raw": 52736, "status": "present but not compared by this lookup"}`.

## Column Axis

Source: 0x4D0C. u16 RAM 0x0C90

lower bin; bin = number of thresholds strictly below input

`20992, 22976, 25344, 27136, 29248, 31616, 33600, 35968, 37888`

Following unused stored word: `{"address": "0x4D1E", "raw": 39872, "status": "present but not compared by this lookup"}`.

## Raw cells

```
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
a3a9  c34c44  ADDD #0x4c44
a3ac  b7c5  XGDX
a3ae  a600  LDAA 0,IX
a3b0  7a0acd  STAA 0xacd
a3b3  3d  RTS
a3b4  c60a  LDAB #0xa
a3b6  53  DECB
a3b7  53  DECB
a3b8  58  ASLB
a3b9  fd0c90  LDY 0xc90
a3bc  ce4d0c  LDX #0x4d0c
a3bf  1ae5  ABX
a3c1  ad00  CPY 0,IX
a3c3  2207  BHI 0xa3cc
a3c5  c002  SUBB #0x2
a3c7  24f3  BCC 0xa3bc
a3c9  c7  CLRB
a3ca  2003  BRA 0xa3cf
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

logical behavior decoded.

Conversion: `raw != 0`; unit: **eligible**.

Zero inhibits this gate; any nonzero byte passes this gate. Other conditions can still inhibit the function.

Eligibility: zero inhibits the documented path; nonzero permits its next tests. Not a continuous physical quantity.

row_axis conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 900, 1100, 1300, 2000, 4000, 6000, 9000, 9100, 9200, 9300, 9400, 9500, 9600, 9700, 9800, 9900, 10000, 10100, 10200.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| row_axis | u16 RAM 0x0900: selected speed code | Speed coordinate | Resolve the RPM telemetry divisor190 versus nominal divisor256 scale conflict; confirm timer clock and CPS pattern per crank revolution. See EXTERNAL_SCALE_CHECKS.md. |
| column_axis | u16 RAM 0x0C90 | Processed load coordinate | Finish the pressure-to-load transfer across modes; C90 is not a direct kPa axis. |

### What remains for this map

- Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.
- Confirm CPS pattern per mechanical revolution; the 12-pitch / 180-degree speed-period interpretation remains conditional.
- Resolve the RPM telemetry conflict: firmware divides speed code by 190, while the nominal map scale and the historical byte*50 logger would require 256. See EXTERNAL_SCALE_CHECKS.md.
- Finish the pressure-to-load transfer across modes; C90 is not a direct kPa axis.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
