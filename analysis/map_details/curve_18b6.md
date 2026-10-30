# Feedback startup delay vs coolant

<!-- map-name -->
Stable ID: `curve_18b6`. Category: Feedback.

Descriptive alias based on recovered dataflow; it does not establish physical axis units or tuning readiness.

Naming evidence: [recovered derivation](../../analysis/semantics/MAP_CONSUMERS.md).
<!-- /map-name -->

Coolant-dependent delay before feedback eligibility

Cells: **0x18B9–18C7**, 1 rows × 15 columns, 8-bit unsigned big-endian values.

Inputs: u8 0x08F4 coolant.

Output: u8 0x0CAE compared with 1-second-task counter 0x0CAF.

Selection: See caller evidence; full mode/override conditions not yet exhaustively documented.

Interpolation: clamped uniform Q8 linear lookup; output may retain Q8 or take high byte as documented.

**Tuning export is disabled.** Conditional conversions and unresolved physical references are recorded per map in the [engineering-unit companion](../semantics/physical_units.json); see the [derivation](../semantics/UNIT_DECODING.md).

## Uniform axis

Minimum 16; span 224; factor 16; index divisor 256. Header begins at 0x18B6. These are internal scaling parameters, not physical-unit labels.

## Raw cells

```
60 60 60 60 60 60 60 60 60 60 60 60 60 60 60
```

## Instruction evidence

Addresses refer to the unchanged image. Windows around entry/call sites provide context, not a complete execution trace.

```
6b4e  1e09a11018  BRSET 0x9a1,0x10,0x6b6b
6b53  b618b5  LDAA 0x18b5
6b56  8180  CMPA #0x80
6b58  271a  BEQ 0x6b74
6b5a  b608f4  LDAA 0x8f4
6b5d  ce18b6  LDX #0x18b6
6b60  16c1cd  JSR 0xc1cd
6b63  7a0cae  STAA 0xcae
6b66  b10caf  CMPA 0xcaf
6b69  2209  BHI 0x6b74
6b6b  1e09a14004  BRSET 0x9a1,0x40,0x6b74
6b70  1c09a140  BSET 0x9a1,0x40
6b74  1f09a18023  BRCLR 0x9a1,0x80,0x6b9c
6b79  1f09a1041e  BRCLR 0x9a1,0x4,0x6b9c
6b7e  1f09a14019  BRCLR 0x9a1,0x40,0x6b9c
6b83  1c09a120  BSET 0x9a1,0x20
6b87  b609ac  LDAA 0x9ac
6b8a  b118c8  CMPA 0x18c8
6b8d  2514  BCS 0x6ba3
```

[Machine-readable catalogue](../maps.json) · [All map breakdowns](../MAP_DETAILS.md)

<!-- generated-unit-decoding -->
## Recovered consumer and unit interpretation

conditional physical conversion.

Conversion: `raw*500000/timer_hz`; unit: **s**.

Threshold in a saturating counter incremented by the 200-base-tick task; reset in startup state. Nominal one second per count.

Evidence profiles: `nominal_xt_timer`. Consult each profile for its corroboration, assumptions and limits.

uniform_input conversion: `coolant_celsius`; requires `xt660_coolant_owner_corroborated`.
Converted values: -20, -10, 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120.

### Every input axis

| Axis | Traced source | Interpretation | Physical scale |
|---|---|---|---|
| uniform_input | u8 0x08F4 coolant | Coolant Celsius encoding: code*0.625-30 (owner-corroborated) | Owner-corroborated encoding; sensor accuracy not measured here |

### What remains for this map

- Confirm actual timer clock; the 500 kHz profile remains service-correlated, not measured.
- Celsius encoding is owner-corroborated; reconcile the manual 80 C fallback with this image's 60 C replacement and establish sensor accuracy/range for this ECU.
- Finish the entry, override and fault-path conditions for this lookup; the current selection description is incomplete.
- Validate edited behaviour, permitted ranges and output effects on the identified ECU; software arithmetic checks do not provide bench sign-off.

See [consumer derivations](../semantics/MAP_CONSUMERS.md), [per-map status](../semantics/MAP_RESOLUTION.md) and [machine-readable values](../semantics/physical_units.json). Complete axis interpretation, mode coverage and hardware validation are separate from this cell interpretation.
