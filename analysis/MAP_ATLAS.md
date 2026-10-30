# Calibration map atlas

Addresses below are file offsets and the working flat CPU12 addresses. Actual cell addresses differ from the pointers passed to the lookup helpers.
All cells and axes use raw ECU values. Input/output traces and evidence for every map are in [the per-map breakdown](MAP_DETAILS.md). Physical units and tuning limits remain unresolved. This is an analysis catalogue, not a flash definition.

## Confirmed grid layouts

| Map | Cell address | Rows × columns | Cell width | Row / column axes |
|---|---|---|---|---|
| [Normal load-based fuel quantity](map_details/main_quantity_A.md) | 0x1B66 | 45 × 30 | 16-bit BE | 0x1B0C / 0x1AD0 |
| [Throttle-based fuel quantity](map_details/main_quantity_B.md) | 0x2688 | 45 × 30 | 16-bit BE | 0x262E / 0x25F2 |
| [Alternate load-based fuel quantity](map_details/main_quantity_C.md) | 0x37A8 | 45 × 30 | 16-bit BE | 0x374E / 0x3712 |
| [Base ignition timing — neutral](map_details/main_u8_A.md) | 0x42AE | 32 × 20 | 8-bit BE | 0x426E / 0x4246 |
| [Base ignition timing — standard](map_details/main_u8_B.md) | 0x452E | 32 × 20 | 8-bit BE | 0x426E / 0x4246 |
| [Base ignition timing — alternate](map_details/main_u8_C.md) | 0x47AE | 32 × 20 | 8-bit BE | 0x426E / 0x4246 |
| [Injection event-phase target](map_details/modulo24_surface.md) | 0x1914 | 10 × 13 | 8-bit BE | 0x18E6 / 0x18FA |
| [Secondary injector quantity multiplier](map_details/correction_surface_A.md) | 0x1A1A | 12 × 15 | 8-bit BE | 0x1A02 / 0x19E4 |
| [Fuel normalization offset](map_details/correction_surface_B.md) | 0x3168 | 13 × 10 | 8-bit BE | 0x314E / 0x313A |
| [Fuel correction gain vs speed and load](map_details/correction_surface_C.md) | 0x3280 | 8 × 12 | 8-bit BE | 0x3270 / 0x3258 |
| [Alternate base ignition timing vs speed and coolant](map_details/correction_surface_D.md) | 0x4A60 | 10 × 15 | 8-bit BE | 0x4A56 / 0x4A46 |
| [Load-based fuel normalization input](map_details/fuel_normalization_load.md) | 0x311E | 2 × 2 | 8-bit BE | 0x311A / 0x3116 |
| [Throttle-based fuel normalization input](map_details/fuel_normalization_throttle.md) | 0x312A | 2 × 2 | 8-bit BE | 0x3126 / 0x3122 |
| [Fuel normalization denominator gain](map_details/fuel_normalization_gain.md) | 0x321C | 2 × 2 | 8-bit BE | 0x321A / 0x3216 |

## Uniform-axis curves

| Map | Header | Cells | Points | Input minimum / span / factor |
|---|---|---|---|---|
| [Feedback startup delay vs coolant](map_details/curve_18b6.md) | 0x18B6 | 0x18B9 | 15 | 16 / 224 / 16 |
| [Startup fuel base quantity vs coolant](map_details/curve_1996.md) | 0x1996 | 0x1999 | 15 | 16 / 224 / 16 |
| [Post-start enrichment — fast-decay state](map_details/curve_32ef.md) | 0x32EF | 0x32F2 | 15 | 16 / 224 / 16 |
| [Post-start enrichment — slow-decay state](map_details/curve_3301.md) | 0x3301 | 0x3304 | 15 | 16 / 224 / 16 |
| [Injector pulse compensation vs supply](map_details/curve_4234.md) | 0x4234 | 0x4237 | 7 | 19 / 192 / 8 |
| [Startup fuel multiplier vs pressure estimate](map_details/curve_19c6.md) | 0x19C6 | 0x19CC | 8 | 28672 / 28672 / 16 |
| [Startup fuel multiplier vs throttle](map_details/curve_19ba.md) | 0x19BA | 0x19C0 | 6 | 0 / 40960 / 8 |
| [Startup fuel multiplier vs engine speed](map_details/curve_19a8.md) | 0x19A8 | 0x19AE | 11 | 1229 / 5120 / 128 |
| [Centered fuel-correction gain vs engine speed](map_details/curve_34b0.md) | 0x34B0 | 0x34B6 | 15 | 5120 / 7168 / 128 |
| [Relative-throttle qualification threshold vs speed](map_details/curve_3494.md) | 0x3494 | 0x349A | 10 | 8192 / 36864 / 16 |
| [Transient fuel multiplier vs pressure estimate](map_details/curve_353a.md) | 0x353A | 0x3540 | 8 | 28672 / 28672 / 16 |
| [Transient fuel multiplier vs intake temperature](map_details/curve_351d.md) | 0x351D | 0x3520 | 25 | 16 / 192 / 32 |
| [Transient fuel response 1 — neutral](map_details/curve_34d0.md) | 0x34D0 | 0x34D3 | 7 | 128 / 48 / 32 |
| [Transient fuel response 1 — lower speed-ratio range](map_details/curve_34da.md) | 0x34DA | 0x34DD | 7 | 128 / 48 / 32 |
| [Transient fuel response 1 — higher speed-ratio range](map_details/curve_34e4.md) | 0x34E4 | 0x34E7 | 7 | 128 / 48 / 32 |
| [Transient fuel multiplier vs throttle](map_details/curve_34ee.md) | 0x34EE | 0x34F4 | 9 | 0 / 32768 / 16 |
| [Transient fuel response 2 — neutral](map_details/curve_355d.md) | 0x355D | 0x3560 | 7 | 128 / 48 / 32 |
| [Transient fuel response 2 — standard](map_details/curve_3567.md) | 0x3567 | 0x356A | 7 | 128 / 48 / 32 |
| [Transient fuel response 2 — alternate](map_details/curve_3571.md) | 0x3571 | 0x3574 | 7 | 128 / 48 / 32 |
| [Fuel normalization recovery hold — standard](map_details/curve_31ec.md) | 0x31EC | 0x31F2 | 13 | 8192 / 49152 / 16 |
| [Fuel normalization recovery hold — alternate](map_details/curve_3200.md) | 0x3200 | 0x3206 | 13 | 8192 / 49152 / 16 |
| [Feedback eligibility delay vs coolant](map_details/curve_36c4.md) | 0x36C4 | 0x36C7 | 15 | 16 / 224 / 16 |
| [Adaptive fuel correction — decrement step](map_details/curve_36a4.md) | 0x36A4 | 0x36AA | 7 | 6144 / 24576 / 16 |
| [Adaptive fuel correction — increment step](map_details/curve_36b2.md) | 0x36B2 | 0x36B8 | 7 | 6144 / 24576 / 16 |
| [Fuel multiplier vs intake temperature](map_details/curve_3220.md) | 0x3220 | 0x3223 | 25 | 16 / 192 / 32 |
| [Positive transient fuel gain vs coolant](map_details/curve_3345.md) | 0x3345 | 0x3348 | 15 | 16 / 224 / 16 |
| [Negative transient fuel gain vs coolant](map_details/curve_3357.md) | 0x3357 | 0x335A | 15 | 16 / 224 / 16 |
| [Pressure-processing offset vs engine speed](map_details/curve_1880.md) | 0x1880 | 0x1886 | 20 | 6144 / 38912 / 32 |
| [Load-path fuel multiplier vs pressure estimate](map_details/curve_323c.md) | 0x323C | 0x3242 | 21 | 29184 / 20480 / 64 |
| [Throttle-path fuel multiplier vs pressure estimate](map_details/curve_32e0.md) | 0x32E0 | 0x32E6 | 8 | 28672 / 28672 / 16 |
| [Alternate ignition mode — throttle threshold vs coolant](map_details/curve_4a33.md) | 0x4A33 | 0x4A36 | 15 | 16 / 224 / 16 |
| [Coolant enrichment — load-based fuel path](map_details/curve_3315.md) | 0x3315 | 0x3318 | 15 | 16 / 224 / 16 |
| [Coolant enrichment — throttle-based fuel path](map_details/curve_3327.md) | 0x3327 | 0x332A | 15 | 16 / 224 / 16 |
| [Transient fuel pulse contribution vs coolant](map_details/curve_34fd.md) | 0x34FD | 0x3500 | 29 | 16 / 224 / 32 |
| [Spark timing bound vs pressure estimate](map_details/curve_4bac.md) | 0x4BAC | 0x4BB2 | 21 | 29184 / 20480 / 64 |
| [Pressure-to-load processing gain](map_details/curve_1854.md) | 0x1854 | 0x185A | 21 | 29184 / 20480 / 64 |

## Computed-axis, sensor and inline step tables

| Map | Cells | Rows x columns | Method |
|---|---|---|---|
| [Throttle-delta fuel gain — nonnegative, neutral](map_details/delta_0985_gain_1.md) | 0x336B | 1 x 23 | 1D_precomputed_axis |
| [Throttle-delta fuel gain — nonnegative, standard](map_details/delta_0985_gain_2.md) | 0x3382 | 1 x 23 | 1D_precomputed_axis |
| [Throttle-delta fuel gain — nonnegative, alternate](map_details/delta_0985_gain_3.md) | 0x3399 | 1 x 23 | 1D_precomputed_axis |
| [Throttle-delta fuel gain — negative, neutral](map_details/delta_0985_gain_4.md) | 0x33B0 | 1 x 23 | 1D_precomputed_axis |
| [Throttle-delta fuel gain — negative, standard](map_details/delta_0985_gain_5.md) | 0x33C7 | 1 x 23 | 1D_precomputed_axis |
| [Throttle-delta fuel gain — negative, alternate](map_details/delta_0985_gain_6.md) | 0x33DE | 1 x 23 | 1D_precomputed_axis |
| [Load-delta fuel gain — nonnegative, neutral](map_details/delta_0989_gain_1.md) | 0x33F7 | 1 x 23 | 1D_precomputed_axis |
| [Load-delta fuel gain — nonnegative, standard](map_details/delta_0989_gain_2.md) | 0x340E | 1 x 23 | 1D_precomputed_axis |
| [Load-delta fuel gain — nonnegative, alternate](map_details/delta_0989_gain_3.md) | 0x3425 | 1 x 23 | 1D_precomputed_axis |
| [Load-delta fuel gain — negative, neutral](map_details/delta_0989_gain_4.md) | 0x343C | 1 x 23 | 1D_precomputed_axis |
| [Load-delta fuel gain — negative, standard](map_details/delta_0989_gain_5.md) | 0x3453 | 1 x 23 | 1D_precomputed_axis |
| [Load-delta fuel gain — negative, alternate](map_details/delta_0989_gain_6.md) | 0x346A | 1 x 23 | 1D_precomputed_axis |
| [Air-induction enable vs speed and throttle](map_details/step_grid_4c44.md) | 0x4C44 | 20 x 10 | 2D_step_grid |
| [Air-induction enable vs speed and load](map_details/step_grid_4d48.md) | 0x4D48 | 20 x 10 | 2D_step_grid |
| [Adaptive feedback enable vs speed and throttle](map_details/step_grid_35b0.md) | 0x35B0 | 10 x 10 | 2D_step_grid |
| [Adaptive feedback enable vs speed and load](map_details/step_grid_363c.md) | 0x363C | 10 x 10 | 2D_step_grid |
| [Spark time correction — other variants](map_details/timing_speed_4f64.md) | 0x4F64 | 1 x 29 | 1D_precomputed_axis |
| [Spark time correction — XT variant 9](map_details/timing_speed_4f81.md) | 0x4F81 | 1 x 29 | 1D_precomputed_axis |
| [Ignition dwell contribution vs speed and supply](map_details/dwell_supply_speed.md) | 0x4B12 | 15 x 9 | 2D_special_grid |
| [Coolant sensor conversion](map_details/coolant_sensor_conversion.md) | 0x4F47 | 1 x 29 | 1D_sensor_conversion |
| [Intake air temperature sensor conversion](map_details/intake_temperature_conversion.md) | 0x4F26 | 1 x 33 | 1D_sensor_conversion |

## Evidence and use

`maps.json` contains every extracted grid/curve, its raw values, axes and caller addresses. `map_extracts/` has byte-exact cell payloads and plain-text matrices.
`axes.json` records code-confirmed axis pointers, counts, raw breakpoints and input load instructions. `calibration_pointer_loads.json` includes pointer loads not yet classified as maps.
`calibration_references.json` records direct references into the entire calibration region. It includes scalar constants and flags, not only maps.

The 16-bit grid helper at 0xC499 uses X + 21 + 2 × (row × columns + column). The byte grid helper at 0xC32D uses X + 3 + row × columns + column. The modulo-24 helper at 0xC4DC uses the byte layout with cyclic interpolation.
The uniform-axis helpers at 0xC1CD and 0xC1F2 clamp the input, multiply its offset by a header factor, then interpolate adjacent byte cells. Their index denominators are 256 and 65536 respectively. The extracted point count includes the upper adjacent cell if a fractional endpoint needs it.

## Still unresolved

- Engineering-unit axis conversions (RPM, pressure, throttle and temperature); several sensor identities are established separately in the control guides.
- Final fuel/timing output scaling and mode-selection semantics.
- Remaining indirect references, scalars, flags and possible tables outside the catalogue; see the explicit coverage gaps. Identifying every map is not claimed.
- Boot/reset code and hardware identity: the final 2 KiB is all FF in the supplied file.
- Exact semantic function boundaries in unreferenced and shared-entry assembly routines.

Do not treat successful decompilation as proof of source-level accuracy or complete map identification.
