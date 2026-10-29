# Engine speed, spark cut and fuel cut

The [unit-decoding pass](UNIT_DECODING.md) now derives conditional RPM scaling using the service-correlated nominal clock and explicit crank-pattern assumption. Those assumptions are carried with the converted axes.

**Established:** raw speed calculation, three separate period-based cut flags, separate road-speed flags, and their output consumers. **Not established:** a verified RPM conversion or every reason for disabling ignition/injection. [Instruction evidence](rpm_cuts_evidence.txt) is authoritative for comparisons.

## Engine-speed variables

The timer-input routine `0xD871` reads capture register `0x0052`. It maintains timed interval state; selected intervals are stored into `0x0A38, 0x0A3A, …, 0x0A42` (six words). `0x73A5` sums these with unsigned saturation into `0x0A44`. Call this **P**, a period-domain quantity. Higher speed means smaller P.

At `0x73F7–0x741E`, integer/fractional division computes a reciprocal. For the tested non-overflow range `1200 <= P <= 65535`, the exact result is:

`speed_raw = min(0xFE00, 8 × floor(37500 × 256 / P))`.

This is stored in `0x08F8`. The factor of eight is applied after truncating the Q8 quotient, so values are multiples of eight. The invalid/stale-state path at `0x73A9` can instead supply `0x01E0`; do not interpret every value as a fresh measurement. Division-by-zero/overflow behavior outside the tested domain is not an RPM calibration rule.

`0x0906` is a second reciprocal estimate, based on the three-byte interval quantity at `0x0A4B–0x0A4D` shifted right twice into `0x0A80`. `0x87E7–0x8824` averages and filters `0x08F8` into `0x08FE`.

ROM `0x18D7` selects downstream speed sources:

| Selector | RAM `0x0900` | RAM `0x0902` |
|---|---|---|
| Zero | `0x08F8` | `0x08FE` |
| Nonzero; stock is 1 | `0x0906` | `0x0906` |

The major quantity-map speed axes use `0x0900`; the main timing-map speed axis uses `0x0902`. A definition must distinguish measured period, instantaneous speed, filtered speed and selected speed.

### Why RPM units are not filled in yet

ROM axis values are internally consistent with a reciprocal speed scale, but internal consistency does not prove revolutions per minute. To get physical RPM from P, establish the timer tick frequency `f_tick` and the number of crank revolutions `R` represented by P:

`RPM = 60 × f_tick × R / P`.

The program sets `0x004D = 5`; the MCU model identifies the timer prescaler field there. The actual clock and angular span represented by the accumulated intervals still need matching hardware or waveform evidence. Boot code is absent from this dump, so clock setup cannot be assumed complete. No guessed RPM multiplier is embedded in the catalogue.

## Main period limits: three pairs

`0x7588–0x75C6` independently updates three bits in RAM `0x088C` using P. Every parameter below is an **unsigned, big-endian 16-bit ROM word**.

| Output gate | Resume parameter | Cut parameter | RAM flag | Confirmed consumer |
|---|---|---|---|---|
| Primary injector | `0x4BC8 = 2055` | `0x4BCA = 2054` | `0x088C:0x08` | `0xF519` exits before timer-6 scheduling |
| Spark | `0x4BCC = 2055` | `0x4BCE = 2054` | `0x088C:0x02` | `0x5664`, `0xEE78` and other timer-3 scheduling gates |
| Secondary injector-like path | `0x4BD0 = 2055` | `0x4BD2 = 2054` | `0x088C:0x04` | `0xF592` exits before timer-7 scheduling |

For each pair: **set cut when P <= cut value; clear cut when P >= resume value; otherwise preserve state**. Equality is intentionally different from the normal fan thresholds. Smaller period limits permit greater speed, assuming an unchanged clock and period definition. The stock period boundaries are adjacent integers, so there is no integer P strictly between them.

The secondary output code exists but `0xF592` returns immediately when variant RAM `0x0D87 == 9`, the stock value copied from ROM `0x18D3`. Its presence does not prove that this ECU has a second connected injector. Do not expose it as an active second-cylinder setting.

The fixture exercises all 65,536 period values with all three cut bits initially clear and initially set; each bit's decision is independent. These tests check flag behavior, not an engine's physical rev limit.

## Additional period limits under a separate condition

At `0x77C6`, RAM `0x08B1:0x08` decides whether another pair of injector cut flags is evaluated. If that bit is clear, `0x0886:0x04` and `0x0886:0x02` are cleared. If set:

| Output | Resume above | Cut at or below | Cut flag | Consumer |
|---|---|---|---|---|
| Primary injector | `0x34A8 = 1595` | `0x34AA = 1578` | `0x0886:0x04` | `0xF4E0` skips primary call |
| Secondary path | `0x34AC = 1595` | `0x34AE = 1578` | `0x0886:0x02` | `0xF4FC` skips secondary call |

Here the resume comparison is **strictly greater**, unlike the main period limits. The initiating fault/state's physical meaning is unresolved. Label these conditional period limits, not a proven limp-home rev limit.

## Road-speed cuts are separate

Timer-channel-2 routine `0xF3F3` increments counter `0x0AB0`. One consumer feeds diagnostic 07; another takes pulse-count differences, applies gain at `0x4BD4` and filter factor `0x4BD6`, and produces filtered road-speed byte `0x0ABE` at `0x9C69`. Neither km/h nor mph has been established.

Routine `0x6259` evaluates three byte-sized hysteresis pairs:

| Gate | Clear-below parameter | Set-at-or-above parameter | RAM flag |
|---|---|---|---|
| Primary injector | `0x4BDF` | `0x4BE0` | `0x089A:0x08` |
| Spark | `0x4BE1` | `0x4BE2` | `0x089A:0x02` |
| Secondary injector | `0x4BE3` | `0x4BE4` | `0x089A:0x04` |

The upper comparison is evaluated first. Between bounds the previous bit is kept. Exact stock bytes are in [catalog.json](catalog.json). These flags are independently checked beside the period flags in `0xF519`, `0xF592`, and `0x5664`. Changing an engine-period threshold alone does not eliminate these gates.

## Fuel-cut gate inventory

At `0xF49F–0xF4DF`, the normal injection dispatcher can return before either channel when any of these gates inhibits it:

- `0x088C:0x20`, `0x08A0:0x04`, `0x08B2:0x80`, `0x088C:0x80`, `0x0D08:0x01`, any bit of `0x0884:0x07`, `0x0885:0x40`, or `0x0BF8:0x80` is set;
- `0x08B0:0x08` is set while configuration `0x0DD9 != 0x80`;
- `0x08B1:0x10` is set;
- any bit in `0x0886:0xC1` is set.

After passing those gates, channel-event selection and conditional period bits control calls to `0xF519`/`0xF592`. Each entry adds its main period flag, road-speed flag and `0x08B1:0x80` check. Other asynchronous injection routines exist, including `0xC8C9` and `0xC939`; this inventory is the normal dispatcher, not proof that every possible pulse path has been exhausted.

The wide collection of conditions is why “fuel cut” must not become a single generic toggle. Deceleration, fault, interlock and synchronization interpretations must be assigned by tracing each flag's writers. The main period and road-speed bits are identified; many other physical reasons are still open.

## Spark suppression is likewise layered

Timer-3 scheduling has the main period and road-speed gates and additional engine-state/interlock checks. Some paths suppress scheduling; others terminate or change an existing timer event. A return before a new pulse is not automatically an immediate cancellation of a pulse already armed in hardware. The read-only tests stop at instruction boundaries and do not simulate timer execution.

Before exposing “spark cut” as an editor option, finish the producer/consumer audit for each relevant bit, distinguish new-event suppression from active-event shutdown, and verify the behavior under the selected operating state.
