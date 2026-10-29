# curve_32ef

First post-start enrichment state; maximum of both states feeds normal fuel gain

Cells: **0x32F2–3300**, 1 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F4 coolant.

Output: u16 Q8 state 0x0994; decays by twice ROM 0x3313 per fuel update.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 16; span 224; factor 16; index divisor 256. Header begins at 0x32EF. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
137 108 80 62 46 34 23 18 17 12 8 6 4 4 4
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7169  16c1cd  JSR 0xc1cd
716c  7a0a08  STAA 0xa08
716f  1e0884081c  BRSET 0x884,0x8,0x7190
7174  1c088408  BSET 0x884,0x8
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
...
737d  1d0d0802  BCLR 0xd08,0x2
7381  b632ee  LDAA 0x32ee
7384  8180  CMPA #0x80
7386  2718  BEQ 0x73a0
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
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/32`; unit: **normalized fuel percentage points**.

Contribution of the selected post-start state high byte before remaining gains. States decay and their maximum is selected; they are not added.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
