# step_grid_35b0

Adaptive feedback eligibility grid; zero clears feedback-enable path

Cells: **0x35B0–3613**, 10 rows × 10 columns, 8-bit unsigned big-endian values.

Inputs: u16 RAM 0x0900: selected speed code; u16 RAM 0x08E8.

Output: u8 RAM 0x09AE; column/row bins at 0x09B0/0x09B1.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: none; strict > threshold selects upper bin; equality stays in lower bin.

**Engineering conversion is unresolved; tuning export is disabled.**

## Row Axis

Source: 0x359C. u16 RAM 0x0900

lower bin; bin = number of thresholds strictly below input

`4096, 6144, 8192, 10496, 12288, 14336, 16384, 18432, 23040`

Following unused stored word: `{"address": "0x35AE", "raw": 24576, "status": "present but not compared by this lookup"}`.

## Column Axis

Source: 0x3588. u16 RAM 0x08E8

lower bin; bin = number of thresholds strictly below input

`0, 768, 1024, 1600, 2624, 3648, 5248, 9472, 15744`

Following unused stored word: `{"address": "0x359A", "raw": 52416, "status": "present but not compared by this lookup"}`.

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
abd2  b136ec  CMPA 0x36ec
abd5  2303  BLS 0xabda
abd7  b636ec  LDAA 0x36ec
abda  6a00  STAA 0,IX
abdc  3d  RTS
abdd  c60a  LDAB #0xa
abdf  53  DECB
abe0  53  DECB
abe1  58  ASLB
abe2  fd08e8  LDY 0x8e8
abe5  ce3588  LDX #0x3588
abe8  1ae5  ABX
abea  ad00  CPY 0,IX
abec  2207  BHI 0xabf5
abee  c002  SUBB #0x2
abf0  24f3  BCC 0xabe5
abf2  c7  CLRB
abf3  2003  BRA 0xabf8
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
