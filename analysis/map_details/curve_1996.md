# Startup fuel base quantity vs coolant

<!-- map-name -->
Stable ID: `curve_1996`. Category: Fuel.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Startup fuel base quantity

Cells: **0x1999–19A7**, 1 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F4 coolant.

Output: u16 0x0934; initialization also writes high byte to 0x0A08.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 16; span 224; factor 16; index divisor 256. Header begins at 0x1996. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
56 51 46 40 33 26 20 14 8 7 7 7 7 7 7
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
7154  b608f6  LDAA 0x8f6
7157  7a08f4  STAA 0x8f4
715a  1e08832031  BRSET 0x883,0x20,0x7190
715f  1c088320  BSET 0x883,0x20
7163  b608f4  LDAA 0x8f4
7166  ce1996  LDX #0x1996
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
...
7bab  ce19c6  LDX #0x19c6
7bae  fc08f2  LDD 0x8f2
7bb1  16c1f2  JSR 0xc1f2
7bb4  7a0938  STAA 0x938
7bb7  b608f4  LDAA 0x8f4
7bba  ce1996  LDX #0x1996
7bbd  16c1cd  JSR 0xc1cd
7bc0  7c0934  STD 0x934
7bc3  ce19ba  LDX #0x19ba
7bc6  1e08af080a  BRSET 0x8af,0x8,0x7bd5
7bcb  1e08af0405  BRSET 0x8af,0x4,0x7bd5
7bd0  fc08ce  LDD 0x8ce
7bd3  2003  BRA 0x7bd8
7bd5  cc0000  LDD #0x0
7bd8  16c1f2  JSR 0xc1f2
7bdb  7a0937  STAA 0x937
7bde  ce19a8  LDX #0x19a8
7be1  fc0900  LDD 0x900
7be4  16c1f2  JSR 0xc1f2
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

conditional physical conversion.

Conversion: `raw*256*1000/timer_hz`; unit: **ms**.

Startup base with neutral reference multipliers. Interpolation retains Q8; speed, throttle, IAT and pressure factors follow.

Required profiles: `nominal_xt_timer`. These are assumptions, not measured hardware parameters.

uniform_input conversion: `temperature_celsius_candidate`; requires `yamaha_temperature_candidate`.
Converted values: -20, -10, 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| uniform_input | u8 0x08F4 coolant | Effective coolant temperature code | Confirm the coolant circuit/temperature transfer and resolve the XT manual fallback conflict before assigning Celsius. |

### What remains for this map

- Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.
- Confirm the coolant circuit/temperature transfer and resolve the XT manual fallback conflict before assigning Celsius.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
