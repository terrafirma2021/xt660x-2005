# Ignition dwell contribution vs speed and supply

<!-- map-name -->
Stable ID: `dwell_supply_speed`. Category: Ignition.

Role follows the recovered time/charge scheduler. Timer units depend on the nominal clock profile. A dwell contribution is not the final complete dwell duration, and a time correction is not absolute BTDC.

Naming evidence: [recovered derivation](../../analysis/semantics/SPARK_SCHEDULER.md).
<!-- /map-name -->

Coil charge-duration contribution combined with other dwell terms; physical timer scale remains conditional

Cells: **0x4B12–4B98**, 15 rows × 9 columns, 8-bit unsigned big-endian values.

Inputs: u16 RAM 0x0900: selected speed code; u8 RAM 0x08D9: supply code.

Output: u16 RAM 0x0A98 = rounded cell * 32; added to RAM 0x0A9C * 32, limited into 0x0A96.

Selection: RAM 0x088D bit 0x40 overrides lookup result with ROM 0x4BAB.

Interpolation: 0xC28D: round column interpolation to bytes, then round row interpolation.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: computed in firmware. u16 RAM 0x0900

q8=clamp(input-4096,0,57344)//16

`4096, 8192, 12288, 16384, 20480, 24576, 28672, 32768, 36864, 40960, 45056, 49152, 53248, 57344, 61440`

## Column Axis

Source: computed in firmware. u8 RAM 0x08D9

input<26 substitutes 179; q8=clamp(input-83,0,128)*16

`83, 99, 115, 131, 147, 163, 179, 195, 211`

## Raw cells

```
164 150 136 130 124 118 112 110 108
164 150 136 130 124 118 112 110 108
164 150 136 130 124 118 112 110 108
164 150 136 130 121 112 106 100 95
157 139 125 112 104 96 90 85 81
137 120 109 100 92 85 79 76 71
123 106 96 89 82 76 71 68 65
110 98 89 81 75 70 65 62 59
103 90 82 75 70 65 62 57 56
95 84 76 70 65 60 57 54 51
89 79 71 65 60 57 54 51 48
83 75 67 62 57 54 51 48 46
79 70 64 59 54 51 48 46 43
76 67 60 56 53 50 46 45 42
71 64 59 54 50 46 45 42 40
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
8acd  49  LSRD
8ace  49  LSRD
8acf  49  LSRD
8ad0  49  LSRD
8ad1  7c0de0  STD 0xde0
8ad4  ce4b0f  LDX #0x4b0f
8ad7  c609  LDAB #0x9
8ad9  860f  LDAA #0xf
8adb  16c28d  JSR 0xc28d
8ade  1f088d4003  BRCLR 0x88d,0x40,0x8ae6
8ae3  b64bab  LDAA 0x4bab
8ae6  c7  CLRB
8ae7  49  LSRD
8ae8  49  LSRD
8ae9  49  LSRD
8aea  7c0a98  STD 0xa98
8aed  b60a9c  LDAA 0xa9c
8af0  c7  CLRB
8af1  49  LSRD
8af2  49  LSRD
8af3  49  LSRD
8af4  f30a98  ADDD 0xa98
8af7  1e0880400a  BRSET 0x880,0x40,0x8b06
8afc  bc0a48  CPD 0xa48
...
8b12  7c0dde  STD 0xdde
8b15  fc0a2e  LDD 0xa2e
8b18  bc0dde  CPD 0xdde
8b1b  2503  BCS 0x8b20
8b1d  fc0dde  LDD 0xdde
8b20  7c0a96  STD 0xa96
8b23  b7c6  XGDY
8b25  ce4ba1  LDX #0x4ba1
8b28  16c21c  JSR 0xc21c
8b2b  59  ASLD
8b2c  7c0a9a  STD 0xa9a
8b2f  1d08bc20  BCLR 0x8bc,0x20
8b33  3d  RTS
8b34  1d088240  BCLR 0x882,0x40
8b38  1c08bc08  BSET 0x8bc,0x8
8b3c  165fa4  JSR 0x5fa4
8b3f  b60896  LDAA 0x896
8b42  7a0dde  STAA 0xdde
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

conditional physical conversion.

Conversion: `raw*32*1000/timer_hz`; unit: **ms**.

base dwell contribution; additional dwell and speed clamps still apply

Required profiles: `nominal_xt_timer`. These are assumptions, not measured hardware parameters.

row_axis conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 800, 1600, 2400, 3200, 4000, 4800, 5600, 6400, 7200, 8000, 8800, 9600, 10400, 11200, 12000.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
