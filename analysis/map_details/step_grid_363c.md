# step_grid_363c

Adaptive feedback eligibility grid; zero clears feedback-enable path

Cells: **0x363C–369F**, 10 rows × 10 columns, 8-bit unsigned big-endian values.

Inputs: u16 RAM 0x0900: selected speed code; u16 RAM 0x0C90.

Output: u8 RAM 0x09AF; column/row bins at 0x09B2/0x09B3.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: none; strict > threshold selects upper bin; equality stays in lower bin.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x3628. u16 RAM 0x0900

lower bin; bin = number of thresholds strictly below input

`4096, 6144, 8192, 10496, 12288, 14336, 16384, 18432, 23040`

Following unused stored word: `{"address": "0x363A", "raw": 24576, "status": "present but not compared by this lookup"}`.

## Column Axis

Source: 0x3614. u16 RAM 0x0C90

lower bin; bin = number of thresholds strictly below input

`20992, 22976, 25600, 27328, 29248, 31616, 33600, 35968, 38912`

Following unused stored word: `{"address": "0x3626", "raw": 39872, "status": "present but not compared by this lookup"}`.

## Raw cells

```
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
ac23  c335b0  ADDD #0x35b0
ac26  b7c5  XGDX
ac28  a600  LDAA 0,IX
ac2a  7a09ae  STAA 0x9ae
ac2d  3d  RTS
ac2e  c60a  LDAB #0xa
ac30  53  DECB
ac31  53  DECB
ac32  58  ASLB
ac33  fd0c90  LDY 0xc90
ac36  ce3614  LDX #0x3614
ac39  1ae5  ABX
ac3b  ad00  CPY 0,IX
ac3d  2207  BHI 0xac46
ac3f  c002  SUBB #0x2
ac41  24f3  BCC 0xac36
ac43  c7  CLRB
ac44  2003  BRA 0xac49
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

logical behavior decoded.

Conversion: `raw != 0`; unit: **eligible**.

Zero inhibits this gate; any nonzero byte passes this gate. Other conditions can still inhibit the function.

Eligibility: zero inhibits the documented path; nonzero permits its next tests. Not a continuous physical quantity.

Stock activation: Every stock cell is zero, rejecting this normal feedback-eligibility gate.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
