# curve_4bac

Timing bound consumed at 0x8A2F

Cells: **0x4BB2–4BC6**, 1 rows × 21 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x08F2 pressure-derived estimate.

Output: u8 0x0D05.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 29184; span 20480; factor 64; index divisor 65536. Header begins at 0x4BAC. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
109 109 109 109 109 109 109 109 102 96 90 85 80 76 72 69 0 0 0 0 0
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
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
b8e3  3d  RTS
b900  b60be4  LDAA 0xbe4
b903  8b01  ADDA #0x1
b905  8200  SBCA #0x0
b907  7a0be4  STAA 0xbe4
b90a  b14f0d  CMPA 0x4f0d
b90d  256f  BCS 0xb97e
b90f  b60be3  LDAA 0xbe3
b912  8b01  ADDA #0x1
b914  8200  SBCA #0x0
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

conditional physical conversion.

Conversion: `raw*three_pitch_degrees/256`; unit: **relative crank degrees**.

relative scheduler angle, NOT absolute degrees BTDC; fixed and variable timer corrections follow

Required profiles: `nominal_xt_crank`. These are assumptions, not measured hardware parameters.

Minimum base code in the normal spark path; conditional minimum in the alternate path; scaled by A86/128 and later corrected

Consumer instruction addresses: `0x89A9`, `0x8A2F`.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
