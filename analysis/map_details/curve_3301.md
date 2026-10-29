# curve_3301

Startup/reset state curve

Cells: **0x3304–3312**, 1 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F4 coolant.

Output: u16 0x0996.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 16; span 224; factor 16; index divisor 256. Header begins at 0x3301. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
21 18 15 12 11 9 8 6 6 4 3 2 2 2 2
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7178  b608f4  LDAA 0x8f4
717b  ce32ef  LDX #0x32ef
717e  16c1cd  JSR 0xc1cd
7181  7c0994  STD 0x994
7184  b608f4  LDAA 0x8f4
7187  ce3301  LDX #0x3301
718a  16c1cd  JSR 0xc1cd
718d  7c0996  STD 0x996
7190  1f08a00408  BRCLR 0x8a0,0x4,0x719d
7195  b60bdd  LDAA 0xbdd
7198  b10d4b  CMPA 0xd4b
719b  2730  BEQ 0x71cd
719d  1f08b08014  BRCLR 0x8b0,0x80,0x71b6
71a2  1e0881100f  BRSET 0x881,0x10,0x71b6
71a7  b60abe  LDAA 0xabe
71aa  b14c00  CMPA 0x4c00
71ad  2516  BCS 0x71c5
71af  b14c01  CMPA 0x4c01
71b2  2319  BLS 0x71cd
...
7388  b608f4  LDAA 0x8f4
738b  ce32ef  LDX #0x32ef
738e  16c1cd  JSR 0xc1cd
7391  7c0994  STD 0x994
7394  b608f4  LDAA 0x8f4
7397  ce3301  LDX #0x3301
739a  16c1cd  JSR 0xc1cd
739d  7c0996  STD 0x996
73a0  1d0e2180  BCLR 0xe21,0x80
73a4  3d  RTS
73a5  1c08bc10  BSET 0x8bc,0x10
73a9  b60921  LDAA 0x921
73ac  8140  CMPA #0x40
73ae  250c  BCS 0x73bc
73b0  ccffff  LDD #0xffff
73b3  7c0a44  STD 0xa44
73b6  cc01e0  LDD #0x1e0
73b9  067416  JMP 0x7416
73bc  fc0a38  LDD 0xa38
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
