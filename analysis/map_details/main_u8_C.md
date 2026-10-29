# Base ignition timing — extended ratio-code branch

<!-- map-name -->
Stable ID: `main_u8_C`. Category: Ignition.

Neutral-input branch means variant 9 with filtered PB4 low (0x0896 bit 4 clear). Otherwise stock threshold 5 chooses B for ratio codes 0–5, C for codes above 5. The recovered normal classifier produces only 0–5; fault 42 forces 5. Absolute BTDC remains unresolved.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_SELECTORS.md).
<!-- /map-name -->

Base spark timing surface C; see semantics/SPARK.md

Cells: **0x47AE–4A2D**, 32 rows × 20 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x0902 selected speed; u16 0x08E8 throttle code; conditional 0xD000 substitution.

Output: u8 0x0A83 after Q8 rounding; corrected into 0x0A82.

Selection: Outside neutral-input branch: ratio code 0x0898 > ROM 0x4245 (stock 5); not emitted by the recovered normal classifier.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x426E. See inputs and call evidence.

Explicit breakpoint lookup.

`3072, 4096, 4608, 5120, 5632, 6144, 6656, 7168, 8192, 9216, 10240, 12800, 15360, 17920, 20480, 23040, 25600, 28160, 30720, 33280, 35840, 38400, 40960, 43520, 46080, 48640, 51200, 53760, 56320, 58880, 61440, 64000`

## Column Axis

Source: 0x4246. See inputs and call evidence.

Explicit breakpoint lookup.

`0, 256, 1280, 2688, 5248, 10752, 15936, 21248, 31872, 41408, 44032, 45568, 46656, 47168, 47680, 48256, 48768, 49280, 49792, 50304`

## Raw cells

```
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
97 82 70 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
172 149 78 64 64 64 64 64 70 70 70 70 70 70 70 70 70 70 70 70
193 176 143 126 116 104 87 81 84 84 84 84 84 84 84 84 84 84 84 84
206 191 181 164 156 138 112 104 104 98 98 98 98 98 98 98 98 98 98 98
197 186 181 172 172 149 121 112 104 104 104 104 104 104 104 104 104 104 104 104
189 189 189 189 189 166 132 121 110 104 104 104 104 104 104 104 104 104 104 104
181 181 181 181 181 166 138 132 110 110 110 110 110 110 110 110 110 110 110 110
169 169 169 169 169 178 149 132 110 112 112 112 112 112 112 112 112 112 112 112
161 161 161 161 161 183 155 138 115 110 110 110 110 110 110 110 110 110 110 110
152 152 152 152 152 172 166 141 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
141 141 141 141 141 161 169 144 115 115 115 115 115 115 115 115 115 115 115 115
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
8896  f60898  LDAB 0x898
8899  f14245  CMPB 0x4245
889c  2205  BHI 0x88a3
889e  ce452b  LDX #0x452b
88a1  2003  BRA 0x88a6
88a3  ce47ab  LDX #0x47ab
88a6  c614  LDAB #0x14
88a8  16c32d  JSR 0xc32d
88ab  c30080  ADDD #0x80
88ae  7a0a83  STAA 0xa83
88b1  1f0889021b  BRCLR 0x889,0x2,0x88d1
88b6  b60b92  LDAA 0xb92
88b9  bb0b94  ADDA 0xb94
88bc  250a  BCS 0x88c8
88be  b10a83  CMPA 0xa83
88c1  2205  BHI 0x88c8
88c3  7a0b95  STAA 0xb95
88c6  2009  BRA 0x88d1
88c8  1d088902  BCLR 0x889,0x2
88cc  8600  LDAA #0x0
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

conditional physical conversion.

Conversion: `raw*three_pitch_degrees/256`; unit: **relative crank degrees**.

relative scheduler angle, NOT absolute degrees BTDC; fixed and variable timer corrections follow

Required profiles: `nominal_xt_crank`. These are assumptions, not measured hardware parameters.

row_axis conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 600, 800, 900, 1000, 1100, 1200, 1300, 1400, 1600, 1800, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000, 10500, 11000, 11500, 12000, 12500.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
