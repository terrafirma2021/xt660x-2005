# step_grid_4c44

Air-induction solenoid eligibility grid; zero inhibits this eligibility path

Cells: **0x4C44–4D0B**, 20 rows × 10 columns, 8-bit unsigned big-endian values.

Inputs: u16 RAM 0x0900: selected speed code; u16 RAM 0x08E8.

Output: u8 RAM 0x0ACD; column/row bins at 0x0AD0/0x0AD1.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: none; strict > threshold selects upper bin; equality stays in lower bin.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x4C1C. u16 RAM 0x0900

lower bin; bin = number of thresholds strictly below input

`4096, 5120, 5632, 6144, 6656, 7168, 7680, 10240, 12800, 15360, 17920, 20480, 23040, 25600, 30720, 35840, 40960, 46080, 51200`

Following unused stored word: `{"address": "0x4C42", "raw": 56320, "status": "present but not compared by this lookup"}`.

## Column Axis

Source: 0x4C08. u16 RAM 0x08E8

lower bin; bin = number of thresholds strictly below input

`0, 2624, 5248, 7872, 9152, 10496, 11776, 13120, 14400`

Following unused stored word: `{"address": "0x4C1A", "raw": 15744, "status": "present but not compared by this lookup"}`.

## Raw cells

```
0 0 0 0 1 1 1 1 1 1
0 0 0 0 1 1 1 1 1 1
0 0 0 0 1 1 1 1 1 1
0 0 0 0 1 1 1 1 1 1
0 0 0 0 1 1 1 1 1 1
0 0 0 0 1 1 1 1 1 1
0 0 0 0 1 1 1 1 1 1
0 0 0 0 1 1 1 1 1 1
0 0 0 0 1 1 1 1 1 1
0 0 0 0 1 1 1 1 1 1
0 0 0 0 1 1 1 1 1 1
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
a357  2403  BCC 0xa35c
a359  7a0a06  STAA 0xa06
a35c  b608ec  LDAA 0x8ec
a35f  7a0a07  STAA 0xa07
a362  3d  RTS
a363  c60a  LDAB #0xa
a365  53  DECB
a366  53  DECB
a367  58  ASLB
a368  fd08e8  LDY 0x8e8
a36b  ce4c08  LDX #0x4c08
a36e  1ae5  ABX
a370  ad00  CPY 0,IX
a372  2207  BHI 0xa37b
a374  c002  SUBB #0x2
a376  24f3  BCC 0xa36b
a378  c7  CLRB
a379  2003  BRA 0xa37e
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

logical behavior decoded.

Conversion: `raw != 0`; unit: **eligible**.

Zero inhibits this gate; any nonzero byte passes this gate. Other conditions can still inhibit the function.

Eligibility: zero inhibits the documented path; nonzero permits its next tests. Not a continuous physical quantity.

row_axis conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 800, 1000, 1100, 1200, 1300, 1400, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 6000, 7000, 8000, 9000, 10000.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
