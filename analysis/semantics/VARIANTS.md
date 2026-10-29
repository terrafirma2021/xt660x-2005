# Variant selection and the second injector channel

**The supplied image selects a configuration that skips the second normal injector scheduler.** There is shared code for another injector channel. This supports a configurable firmware-family interpretation, but does not establish that changing one byte produces a working twin-cylinder ECU.

## Direct evidence

| Location | Behavior |
|---|---|
| ROM `0x18D3` | Stock value `9` |
| `0x611E` | Copies that byte to RAM `0x0D87` during initialization |
| `0xF519` | Primary normal injection entry; accepts requested duration at `0x092A` |
| `0xF58A` | Calls `0xC55B`, the timer-channel-6 output scheduler (`TC6`, `0x005C`) |
| `0xF592–0xF597` | Tests `0x0D87 == 9`; branches directly to `RTS` at `0xF5AD` |
| `0xF5AE–0xF606` | Other variants can schedule the secondary duration at `0x092C`, via `0xC712` and timer channel 7 (`TC7`, `0x005E`) |
| `0xB97F` / `0xBA06` | Separate diagnostic injector handlers, corresponding to selectors 36 / 37 |

Execution fixtures check all 256 variant-byte values with the other normal-path interlocks clear: value 9 returns before any RAM/peripheral write in the second entry; the other 255 reach the secondary scheduling helper. The primary entry reaches its own helper for all variants under the fixture conditions. This demonstrates the particular gate, not complete engine operation.

**The gate is path-specific.** The isolated diagnostic-37 handler can still write timer channel 7 with variant 9. Its existence must not be confused with an enabled normal second injector or a guarantee that a corresponding driver is fitted and wired. No variant or other calibration byte has been changed in either delivered binary.

## What this establishes about two cylinders

Two injector scheduling paths and model-dependent selectors are consistent with a shared codebase supporting different engine configurations. They do not distinguish two-cylinder injection from another arrangement with two injector outputs by themselves. There is no established second ignition-coil scheduler: the recovered coil path uses timer channel 3, and a direct-reference search finds no application instruction operands for the timer-4/5 compare registers. That negative search is not proof against every possible indirect or external output mechanism.

The supplied filename is the source of the XT660X/2005 attribution; the exact ECU hardware and donor models remain unverified. A matching twin-cylinder binary, a board/connector trace, or matching manufacturer hardware documentation would be needed to identify the other configuration confidently. A Yamaha model list alone would not prove identical electronics or software.

## Why this helps unit decoding

The user's target is the XT660X; the TDM twin-cylinder configuration is a family-comparison lead. The stock selector is an enumeration (`9`), not a decoded cylinder-count byte. Other values must not all be labeled TDM without matching firmware evidence.

The [temperature/variant pass](TEMPERATURE_PROFILE.md) directly tests that setting. All 256 values leave the two temperature routines' fixed tables and fault replacements unchanged in the tested states. In contrast, `0x88D1` selects spark correction cells `0x4F81` for value 9 and `0x4F64` otherwise. `0x6BB3` also bypasses the pressure-related diagnostic branch for value 9; that branch uses coolant, speed and throttle eligibility thresholds, but does not change the temperature transfer curve. A model-specific diagnostic gate and a different sensor conversion are distinct effects.

The TDM manual's 60°C coolant fallback matches the inferred scale, whereas the XT manual states 80°C. There is presently no observed `D87` branch selecting a temperature offset or replacement that explains this discrepancy. See [66,600 execution cases](sensor_variant_validation.json), including 30,504 temperature/fallback cases and 36,096 spark-curve selection/interpolation cases.

Cylinder count must not be inserted as an unexplained factor of two in the RPM formula. The program's selected capture history, normalized crank intervals and timer clock determine that conversion. Variant 9 selects some timing and transient curves as well as skipping this injector entry. The [unit derivation](UNIT_DECODING.md) therefore carries its crank-pattern assumptions explicitly and keeps absolute TDC phase unresolved.

See [byte-backed instruction evidence](variant_units_evidence.txt), [execution results](units_variant_validation.json), [fuel scheduling](FUEL.md) and [hardware cross-references](IO_AND_DIAGNOSTICS.md).

The timer register interpretation follows the [NXP MC9S12T64 manual](https://www.nxp.com/docs/en/data-sheet/9S12T64AF16V1.pdf), ECT chapter. It identifies MCU registers, not ECU connector pins.
