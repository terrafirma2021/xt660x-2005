# Throttle-delta fuel gain — negative, standard

<!-- map-name -->
Stable ID: `delta_0985_gain_5`. Category: Transient fuel.

Directions refer to internal coordinate deltas, including deadband encoding, not calibrated physical rates. Neutral-input branch requires variant 9 and filtered PB4 low; otherwise normal/extended split at stock ratio code 5. These codes are not established gear numbers.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_SELECTORS.md).
<!-- /map-name -->

Gain applied to signed throttle-coordinate delta; calibrated physical rate remains unresolved

Cells: **0x33C7–33DD**, 1 rows × 23 columns, 8-bit unsigned big-endian values.

Inputs: u16 RAM 0x0900: selected speed code.

Output: u8 RAM 0x098D.

Selection: RAM 0x0985 bit 7 clear; otherwise RAM 0x0898 <= ROM 0x336A.

Interpolation: 0xC1DB linear Q8; caller takes high byte (floor).

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Column Axis

Source: computed in firmware. u16 RAM 0x0900: selected speed code

u=clamp(input-4096,0,55296); q8=u//4 if u<10240 else u//8+1280 if u<14336 else u//16+2176

`4096, 5120, 6144, 7168, 8192, 9216, 10240, 11264, 12288, 13312, 14336, 16384, 18432, 22528, 26624, 30720, 34816, 38912, 43008, 47104, 51200, 55296, 59392`

## Raw cells

```
0 0 0 0 0 0 0 13 29 39 59 75 78 88 96 102 102 102 102 102 102 102 102
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7a69  ce33ad  LDX #0x33ad
7a6c  2010  BRA 0x7a7e
7a6e  b60898  LDAA 0x898
7a71  b1336a  CMPA 0x336a
7a74  2205  BHI 0x7a7b
7a76  ce33c4  LDX #0x33c4
7a79  2003  BRA 0x7a7e
7a7b  ce33db  LDX #0x33db
7a7e  fc0de8  LDD 0xde8
7a81  16c1db  JSR 0xc1db
7a84  7a098d  STAA 0x98d
7a87  f60de2  LDAB 0xde2
7a8a  12  MUL
7a8b  7c0de2  STD 0xde2
7a8e  b60de1  LDAA 0xde1
7a91  8580  BITA #0x80
7a93  270d  BEQ 0x7aa2
7a95  cc8000  LDD #0x8000
7a98  b30de2  SUBD 0xde2
7a9b  2410  BCC 0x7aad
7a9d  cc0000  LDD #0x0
7aa0  200b  BRA 0x7aad
...
cc75  2003  BRA 0xcc7a
cc77  49  LSRD
cc78  49  LSRD
cc79  49  LSRD
cc7a  3d  RTS
cc7b  8010  SUBA #0x10
cc7d  2403  BCC 0xcc82
cc7f  cc0000  LDD #0x0
cc82  83d800  SUBD #0xd800
cc85  2503  BCS 0xcc8a
cc87  cc0000  LDD #0x0
cc8a  c3d800  ADDD #0xd800
cc8d  8128  CMPA #0x28
cc8f  2404  BCC 0xcc95
cc91  49  LSRD
cc92  49  LSRD
cc93  2013  BRA 0xcca8
cc95  8138  CMPA #0x38
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

numeric contribution decoded.

Conversion: `raw*100/2048`; unit: **normalized fuel percentage points per raw delta count**.

Slope before the sign-dependent coolant factor and downstream gains. Delta source is an internal code, not degrees/second or kPa/second.

column_axis conversion: `speed_rpm`; requires `nominal_xt_timer`, `nominal_xt_crank`.
Converted values: 800, 1000, 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800, 3200, 3600, 4400, 5200, 6000, 6800, 7600, 8400, 9200, 10000, 10800, 11600.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| column_axis | u16 RAM 0x0900: selected speed code | Speed coordinate | Confirm the timer clock and CPS pattern per crank revolution before treating the axis as RPM. |

### What remains for this map

- Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.
- Confirm CPS pattern per mechanical revolution; the 12-pitch / 180-degree speed-period interpretation remains conditional.
- Convert the internal signed delta and its sampling/deadband to a physical rate before naming a rate-based gain.
- Selection is traced for the documented branches; complete all downstream override/fault paths before tuning sign-off.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
