# step_grid_4d48

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

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
