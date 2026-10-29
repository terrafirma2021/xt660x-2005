# Injection event-phase target

<!-- map-name -->
Stable ID: `modulo24_surface`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Injection event-phase target; reference-rotated modulo-24 interpolation, not pulse duration or absolute BTDC

Cells: **0x1914–1995**, 10 rows × 13 columns, 8-bit unsigned big-endian values.

Inputs: u16 0x08E8 throttle code (row); u16 0x0900 selected speed (column).

Output: u8 0x0A1B; code 11 becomes 10 and codes >=23 become 22; transferred through 0x0A1E to 0x0A1C.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: See the helper and axis evidence below; standard grid paths use Q8 indices..

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Row Axis

Source: 0x18E6. See inputs and call evidence.

Explicit breakpoint lookup.

`0, 512, 2816, 5568, 11136, 22272, 27840, 33408, 38976, 44544`

## Column Axis

Source: 0x18FA. See inputs and call evidence.

Explicit breakpoint lookup.

`4096, 7168, 10240, 15360, 20480, 25600, 30720, 35840, 40960, 46080, 51200, 56320, 61440`

## Raw cells

```
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7b7e  fc0908  LDD 0x908
7b81  7c0de0  STD 0xde0
7b84  fc090e  LDD 0x90e
7b87  7c0dde  STD 0xdde
7b8a  c60d  LDAB #0xd
7b8c  ce1911  LDX #0x1911
7b8f  16c4dc  JSR 0xc4dc
7b92  8117  CMPA #0x17
7b94  2504  BCS 0x7b9a
7b96  8616  LDAA #0x16
7b98  2006  BRA 0x7ba0
7b9a  810b  CMPA #0xb
7b9c  2602  BNE 0x7ba0
7b9e  860a  LDAA #0xa
7ba0  7a0a1b  STAA 0xa1b
7ba3  1e08811003  BRSET 0x881,0x10,0x7bab
7ba8  067cc3  JMP 0x7cc3
7bab  ce19c6  LDX #0x19c6
7bae  fc08f2  LDD 0x8f2
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw`; unit: **injection event-phase code**.

Target used by injection scheduling, cyclic modulo 24 around D7E reference. After lookup 11 becomes 10 and >=23 becomes 22. Not absolute degrees BTDC or a duration.

C521 interpolates after rotating codes around D7E; A1B feeds EC98, A1E and latched A1C. Dispatcher F4F2 schedules injection when C04 or 0923 equals A1C. Mode gates and optional slew limiting remain relevant.

Consumer instruction addresses: `0xC521`, `0x7B92`, `0xEC98`, `0x85AB`, `0xF4F2`.

column_axis conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 800, 1400, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
