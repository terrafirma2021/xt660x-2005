# curve_36c4

Feedback eligibility threshold

Cells: **0x36C7–36D5**, 1 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F4 coolant.

Output: u8 0x09B4 compared with 0x09B5.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Engineering conversion is unresolved; tuning export is disabled.**

## Uniform axis

Minimum 16; span 224; factor 16; index divisor 256. Header begins at 0x36C4. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
a57d  2204  BHI 0xa583
a57f  1d09a280  BCLR 0x9a2,0x80
a583  1f08811004  BRCLR 0x881,0x10,0xa58c
a588  182000a6  LBRA 0xa632
a58c  b608f4  LDAA 0x8f4
a58f  ce36c4  LDX #0x36c4
a592  16c1cd  JSR 0xc1cd
a595  7a09b4  STAA 0x9b4
a598  b109b5  CMPA 0x9b5
a59b  18220093  LBHI 0xa632
a59f  b608f4  LDAA 0x8f4
a5a2  b1357e  CMPA 0x357e
a5a5  18250089  LBCS 0xa632
a5a9  16abdd  JSR 0xabdd
a5ac  b609ae  LDAA 0x9ae
a5af  1827007f  LBEQ 0xa632
a5b3  16ac2e  JSR 0xac2e
a5b6  b609af  LDAA 0x9af
a5b9  18270075  LBEQ 0xa632
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
