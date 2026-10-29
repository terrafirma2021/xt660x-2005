# curve_34fd

Transient temperature correction

Cells: **0x3500–351C**, 1 rows × 29 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F4 coolant.

Output: u8 0x0A0F.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 16; span 224; factor 32; index divisor 256. Header begins at 0x34FD. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
39 38 37 36 35 34 32 31 29 27 26 25 24 24 23 23 21 20 19 18 17 16 16 16 16 16 16 16 16
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
b8aa  ce3327  LDX #0x3327
b8ad  b608f4  LDAA 0x8f4
b8b0  16c1cd  JSR 0xc1cd
b8b3  7a097c  STAA 0x97c
b8b6  b608f4  LDAA 0x8f4
b8b9  ce34fd  LDX #0x34fd
b8bc  16c1cd  JSR 0xc1cd
b8bf  7a0a0f  STAA 0xa0f
b8c2  b64243  LDAA 0x4243
b8c5  8102  CMPA #0x2
b8c7  2606  BNE 0xb8cf
b8c9  1c088440  BSET 0x884,0x40
b8cd  2004  BRA 0xb8d3
b8cf  1d088440  BCLR 0x884,0x40
b8d3  ce4bac  LDX #0x4bac
b8d6  fc08f2  LDD 0x8f2
b8d9  16c1f2  JSR 0xc1f2
b8dc  7a0d05  STAA 0xd05
b8df  1d08bc01  BCLR 0x8bc,0x1
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

joint arithmetic decoded; standalone physical cell unit not assigned.

Selected response R (34D0/34DA/34E4 or 355D/3567/3571) and coolant C (34FD) participate in extra_transient_ticks(P,C,I,R,T). See map_models.py and MAP_CONSUMERS.md; assigning milliseconds to R or C alone would depend on the other factors.

Consumer instruction addresses: `0x9220`, `0x9232`, `0x9274`, `0x9495`, `0x94BA`.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
