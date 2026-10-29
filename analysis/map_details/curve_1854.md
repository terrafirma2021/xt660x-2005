# curve_1854

Pressure/load-processing gain copied to RAM 0x0DBA

Cells: **0x185A–186E**, 1 rows × 21 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x08F2 pressure-derived estimate.

Output: u8 0x0C92; alternate unreferenced path writes 0x0C93.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 29184; span 20480; factor 64; index divisor 65536. Header begins at 0x1854. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
239 228 218 209 201 193 186 179 173 166 161 156 151 147 143 140 136 132 128 125 122
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
6226  18044f1e0db0  MOVW 0x4f1e,0xdb0
622c  18044f1a0db2  MOVW 0x4f1a,0xdb2
6232  18044f220db4  MOVW 0x4f22,0xdb4
6238  18044e8a0db6  MOVW 0x4e8a,0xdb6
623e  18044e260db8  MOVW 0x4e26,0xdb8
6244  c61b  LDAB #0x1b
6246  ce1854  LDX #0x1854
6249  cd0dba  LDY #0xdba
624c  a600  LDAA 0,IX
624e  6a40  STAA 0,IY
6250  08  INX
6251  02  INY
6252  c001  SUBB #0x1
6254  2702  BEQ 0x6258
6256  24f4  BCC 0x624c
6258  3d  RTS
6259  b60abe  LDAA 0xabe
625c  b14be0  CMPA 0x4be0
625f  240b  BCC 0x626c
6261  b14bdf  CMPA 0x4bdf
6264  240a  BCC 0x6270
...
95ef  f30c96  ADDD 0xc96
95f2  7c0c96  STD 0xc96
95f5  2006  BRA 0x95fd
95f7  fc0c98  LDD 0xc98
95fa  7c0c96  STD 0xc96
95fd  ce0dba  LDX #0xdba
9600  fc08f2  LDD 0x8f2
9603  16c1f2  JSR 0xc1f2
9606  7a0c92  STAA 0xc92
9609  87  CLRA
960a  f60c92  LDAB 0xc92
960d  59  ASLD
960e  b7c6  XGDY
9610  fc0c8e  LDD 0xc8e
9613  831eb7  SUBD #0x1eb7
9616  2522  BCS 0x963a
9618  13  EMUL
9619  c30080  ADDD #0x80
961c  b7c6  XGDY
961e  c900  ADCB #0x0
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)
