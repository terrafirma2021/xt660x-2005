# Fuel quantity maps and injector scheduling

The latest [map-consumer pass](MAP_CONSUMERS.md) adds exact arithmetic and corrects earlier generic roles, including the alternate spark base, relative-throttle thresholds, adaptive steps and injection event map. See [per-map status](MAP_RESOLUTION.md) for current interpretation.

The [unit-decoding pass](UNIT_DECODING.md) now derives the common normalization multiplier, three additional 2×2 grids, nominal timer-duration cell units and contribution gains. The [variant tests](VARIANTS.md) distinguish the second normal injector gate from its diagnostic handler.

**Primary injector output is identified by diagnostic 36. Major table layout/selection and timer-duration consumers are established. Complete physical cell-to-fuel/pulse conversion remains open.** See [instruction excerpts](fuel_maps_evidence.txt) and the [map atlas](../MAP_ATLAS.md).

## Major quantity grids

All three grids have 45 rows × 30 columns, unsigned big-endian 16-bit cells. In `0x7CC3–0x7E5F`:

| Grid cells | Speed row axis | Other column axis | Selection / result |
|---|---|---|---|
| A: `0x1B66` | `0x1B0C`, input `0x0900` | `0x1AD0`, input `0x0C90` | Selected when `0x0B80:0x01` clear; result `0x0952` or `0x0954` |
| C: `0x37A8` | `0x374E`, input `0x0900` | `0x3712`, input `0x0C90` | Selected when `0x0B80:0x01` set; same result pair |
| B: `0x2688` | `0x262E`, input `0x0900` | `0x25F2`, input derived from `0x08E8` | Separate lookup; result `0x0956` or `0x0958` |

RAM `0x0A16:0x02` chooses which member of each output pair receives the lookup. The mode bits' physical names are not established. Do not label these grids as cylinder 1/2 or economy/sport from the paired storage alone.

All 4,050 cell knots have been tested in their original selection/lookup blocks with both RAM output destinations (8,100 cases). This establishes the sampled layout and selection behavior, not physical units or every interpolated point.

The word-grid helper is `0xC499`. Pointer biases `0x1B51`, `0x3793`, and `0x2673` are **not the first cell addresses**. An editor must use the extracted cell addresses and preserve the headers/axes as distinct objects.

`0x0900` is the selected speed quantity described in [RPM_AND_CUTS.md](RPM_AND_CUTS.md). `0x0C90` is a computed load-like state written at `0x965E`; it must not yet be assigned a kPa, TPS-percent, or air-mass unit. `0x08E8` is in the throttle-related filtered path, but its exact scale and replacement conditions need further investigation.

## From calculations to pulse scheduling

The large calculation routine beginning `0x74B8` eventually writes primary request `0x092A` and secondary request `0x092C`. There are startup and alternate calculation paths, so the intervening transformation must be traced path-by-path before treating a cell as a duration.

Examples of final writes:

- `0x80B9–0x80C7` stores `0x093E`, adds compensation word `0x095E` with saturation, then writes `0x093A` and `0x092A`.
- `0x841A–0x8428` has another primary output path with the same final addition.
- `0x812E–0x813C` and `0x855B–0x8569` write the secondary output after adding `0x095E`.
- Startup path `0x7C2E–0x7C3C` also adds `0x095E` before writing `0x092A/0x092E`.

The compensation term is demonstrably additive; its complete physical role is not yet proven, so this document does not rename it injector dead time.

Normal primary entry `0xF519` checks suppression flags, combines `0x092A` with residual scheduling state, stores `0x0B72`, and calls `0xC55B`. That routine controls timer channel 6, compare register `0x005C`. Diagnostic 36 selects `0xB97F`, which uses the same timer channel. This ties the path to the primary injector.

The secondary path uses `0xF592`, `0x092C`, `0x0B74`, `0xC712`, and compare `0x005E`. It exits for stock variant `0x0D87 == 9`; diagnostic selector 37 exists in the binary but the selected service manual does not establish a second installed injector. Code presence alone is insufficient.

Some low-level injector routines can also write the request variables (`0xC690`, `0xC6E0`, and counterparts). They are not immutable outputs owned only by the main calculation. A custom logger needs to account for asynchronous writes.

## Cut conditions and corrections

The [cut dossier](RPM_AND_CUTS.md) records period limits, road-speed limits, conditional extra period limits, and the normal dispatcher's gate inventory. There are also asynchronous pulse routines (`0xC8C9`, `0xC939`) and transient calculation paths. Establishing that a flag skips the normal dispatcher does not prove that it cancels all asynchronous pulses.

Coolant value `0x08F4`, intake temperature `0x08F5`, supply-related value `0x08D9`, throttle-related state, load estimates and correction tables appear in this code family. Their exact multiplicative/additive ordering, fixed-point conventions and mode selection need individual proofs.

## What remains before an XDF fuel table is trustworthy

1. Follow each grid result through every operation to a timer-duration request, including saturation and conditional replacement.
2. Identify the physical column variable and both axis units.
3. Separate cranking, normal running, transient enrichment, temperature corrections and voltage compensation.
4. Determine timer tick duration and whether a cell is a duration, normalized quantity or intermediate coefficient.
5. Confirm which modes actually execute for the stock variant; validate table selection with controlled fixture inputs.
6. Correlate predicted and measured injector pulse widths.

The table layouts are usable for a raw research viewer now. Engineering-unit labels and tuning export remain unset until those checks are complete.
