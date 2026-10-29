# Transient fuel pulse response — family 1, selection B

<!-- map-name -->
Stable ID: `curve_34da`. Category: Transient fuel.

Family 1 feeds RAM 0x0A0C; family 2 feeds 0x0D04. A/B/C distinguish the three choices within each family, not cylinders or rider modes. Pulse duration depends on their joint product with other curves.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Selected transient response curve

Cells: **0x34DD–34E3**, 1 rows × 7 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08ED throttle-derived delta.

Output: u8 0x0A0C.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 128; span 48; factor 32; index divisor 256. Header begins at 0x34DA. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
1 2 3 5 8 13 23
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
9250  ce34d0  LDX #0x34d0
9253  2010  BRA 0x9265
9255  f60898  LDAB 0x898
9258  f134cf  CMPB 0x34cf
925b  2205  BHI 0x9262
925d  ce34da  LDX #0x34da
9260  2003  BRA 0x9265
9262  ce34e4  LDX #0x34e4
9265  16c1cd  JSR 0xc1cd
9268  7a0a0c  STAA 0xa0c
926b  ce34ee  LDX #0x34ee
926e  fc08ce  LDD 0x8ce
9271  16c1f2  JSR 0xc1f2
9274  7a0a0e  STAA 0xa0e
9277  f60a0c  LDAB 0xa0c
927a  12  MUL
927b  fd0dde  LDY 0xdde
927e  13  EMUL
927f  8d4000  CPY #0x4000
9282  2505  BCS 0x9289
9284  cdffff  LDY #0xffff
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

joint arithmetic decoded; standalone physical cell unit not assigned.

Selected response R (34D0/34DA/34E4 or 355D/3567/3571) and coolant C (34FD) participate in extra_transient_ticks(P,C,I,R,T). See map_models.py and MAP_CONSUMERS.md; assigning milliseconds to R or C alone would depend on the other factors.

Consumer instruction addresses: `0x9220`, `0x9232`, `0x9274`, `0x9495`, `0x94BA`.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
