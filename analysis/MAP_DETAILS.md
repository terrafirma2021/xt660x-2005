# Per-map breakdown

Every catalogued map has a byte layout, input/output trace, raw values and nearby instruction evidence. A decoded layout does not establish physical units or make a tuning definition ready.

| Map | Cells | Role |
|---|---|---|
| [Normal load-based fuel quantity](map_details/main_quantity_A.md) | 0x1B66 | Primary fuel quantity surface A; see semantics/FUEL.md |
| [Throttle-based fuel quantity](map_details/main_quantity_B.md) | 0x2688 | Fuel quantity surface B; see semantics/FUEL.md |
| [Alternate load-based fuel quantity](map_details/main_quantity_C.md) | 0x37A8 | Primary fuel quantity surface C; see semantics/FUEL.md |
| [Base ignition timing — neutral](map_details/main_u8_A.md) | 0x42AE | Base spark timing surface A; see semantics/SPARK.md |
| [Base ignition timing — standard](map_details/main_u8_B.md) | 0x452E | Base spark timing surface B; see semantics/SPARK.md |
| [Base ignition timing — alternate](map_details/main_u8_C.md) | 0x47AE | Base spark timing surface C; see semantics/SPARK.md |
| [Injection event-phase target](map_details/modulo24_surface.md) | 0x1914 | Injection event-phase target; reference-rotated modulo-24 interpolation, not pulse duration or absolute BTDC |
| [Secondary injector quantity multiplier](map_details/correction_surface_A.md) | 0x1A1A | Secondary injector quantity multiplier; cell 128 is unity |
| [Fuel normalization offset](map_details/correction_surface_B.md) | 0x3168 | Centered correction to the common fuel normalization denominator; neutral 128 |
| [Fuel correction gain vs speed and load](map_details/correction_surface_C.md) | 0x3280 | Fuel correction surface |
| [Alternate base ignition timing vs speed and coolant](map_details/correction_surface_D.md) | 0x4A60 | Alternate base spark surface; replaces the normal base in this mode, not an additive correction |
| [Load-based fuel normalization input](map_details/fuel_normalization_load.md) | 0x311E | Fuel normalization input; selected when ROM 0x3114 equals 0x80 |
| [Throttle-based fuel normalization input](map_details/fuel_normalization_throttle.md) | 0x312A | Fuel normalization input; selected when ROM 0x3114 does not equal 0x80 |
| [Fuel normalization denominator gain](map_details/fuel_normalization_gain.md) | 0x321C | Dimensionless gain in the denominator of common fuel multiplier 0x0CE2 |
| [Feedback startup delay vs coolant](map_details/curve_18b6.md) | 0x18B9 | Coolant-dependent delay before feedback eligibility |
| [Startup fuel base quantity vs coolant](map_details/curve_1996.md) | 0x1999 | Startup fuel base quantity |
| [Post-start enrichment — fast-decay state](map_details/curve_32ef.md) | 0x32F2 | First post-start enrichment state; maximum of both states feeds normal fuel gain |
| [Post-start enrichment — slow-decay state](map_details/curve_3301.md) | 0x3304 | Second post-start enrichment state; maximum of both states feeds normal fuel gain |
| [Injector pulse compensation vs supply](map_details/curve_4234.md) | 0x4237 | Additive injection-pulse compensation; deadtime candidate |
| [Startup fuel multiplier vs pressure estimate](map_details/curve_19c6.md) | 0x19CC | Startup fuel multiplier |
| [Startup fuel multiplier vs throttle](map_details/curve_19ba.md) | 0x19C0 | Startup fuel multiplier |
| [Startup fuel multiplier vs engine speed](map_details/curve_19a8.md) | 0x19AE | Startup fuel multiplier |
| [Centered fuel-correction gain vs engine speed](map_details/curve_34b0.md) | 0x34B6 | Speed-dependent correction |
| [Relative-throttle qualification threshold vs speed](map_details/curve_3494.md) | 0x349A | Filtered relative-throttle threshold in a qualification counter path |
| [Transient fuel multiplier vs pressure estimate](map_details/curve_353a.md) | 0x3540 | Transient correction |
| [Transient fuel multiplier vs intake temperature](map_details/curve_351d.md) | 0x3520 | Transient temperature multiplier |
| [Transient fuel response 1 — neutral](map_details/curve_34d0.md) | 0x34D3 | Selected transient response curve |
| [Transient fuel response 1 — lower speed-ratio range](map_details/curve_34da.md) | 0x34DD | Selected transient response curve |
| [Transient fuel response 1 — higher speed-ratio range](map_details/curve_34e4.md) | 0x34E7 | Selected transient response curve |
| [Transient fuel multiplier vs throttle](map_details/curve_34ee.md) | 0x34F4 | Transient throttle correction |
| [Transient fuel response 2 — neutral](map_details/curve_355d.md) | 0x3560 | Selected transient response curve |
| [Transient fuel response 2 — standard](map_details/curve_3567.md) | 0x356A | Selected transient response curve |
| [Transient fuel response 2 — alternate](map_details/curve_3571.md) | 0x3574 | Selected transient response curve |
| [Fuel normalization recovery hold — standard](map_details/curve_31ec.md) | 0x31F2 | Hold count before normalization correction returns toward neutral |
| [Fuel normalization recovery hold — alternate](map_details/curve_3200.md) | 0x3206 | Alternate hold count before normalization correction returns toward neutral |
| [Feedback eligibility delay vs coolant](map_details/curve_36c4.md) | 0x36C7 | Delay before feedback eligibility |
| [Adaptive fuel correction — decrement step](map_details/curve_36a4.md) | 0x36AA | Adaptive correction decrement step; bounds are separate ROM words |
| [Adaptive fuel correction — increment step](map_details/curve_36b2.md) | 0x36B8 | Adaptive correction increment step; bounds are separate ROM words |
| [Fuel multiplier vs intake temperature](map_details/curve_3220.md) | 0x3223 | Fuel temperature multiplier; used with offset 0x0180 |
| [Positive transient fuel gain vs coolant](map_details/curve_3345.md) | 0x3348 | Coolant-dependent correction |
| [Negative transient fuel gain vs coolant](map_details/curve_3357.md) | 0x335A | Coolant-dependent correction |
| [Pressure-processing offset vs engine speed](map_details/curve_1880.md) | 0x1886 | Centered additive pressure-processing offset; not a multiplier |
| [Load-path fuel multiplier vs pressure estimate](map_details/curve_323c.md) | 0x3242 | Multiplier for correction_surface_C |
| [Throttle-path fuel multiplier vs pressure estimate](map_details/curve_32e0.md) | 0x32E6 | Pressure-dependent fuel correction |
| [Alternate ignition mode — throttle threshold vs coolant](map_details/curve_4a33.md) | 0x4A36 | Filtered relative-throttle threshold enabling alternate spark mode; not a spark-angle correction |
| [Coolant enrichment — load-based fuel path](map_details/curve_3315.md) | 0x3318 | Additive coolant enrichment contribution for first fuel-gain lane |
| [Coolant enrichment — throttle-based fuel path](map_details/curve_3327.md) | 0x332A | Additive coolant enrichment contribution for second fuel-gain lane |
| [Transient fuel pulse contribution vs coolant](map_details/curve_34fd.md) | 0x3500 | Transient temperature correction |
| [Spark timing bound vs pressure estimate](map_details/curve_4bac.md) | 0x4BB2 | Timing bound consumed at 0x8A2F |
| [Throttle-delta fuel gain — nonnegative, neutral](map_details/delta_0985_gain_1.md) | 0x336B | Gain applied to signed throttle-coordinate delta; calibrated physical rate remains unresolved |
| [Throttle-delta fuel gain — nonnegative, standard](map_details/delta_0985_gain_2.md) | 0x3382 | Gain applied to signed throttle-coordinate delta; calibrated physical rate remains unresolved |
| [Throttle-delta fuel gain — nonnegative, alternate](map_details/delta_0985_gain_3.md) | 0x3399 | Gain applied to signed throttle-coordinate delta; calibrated physical rate remains unresolved |
| [Throttle-delta fuel gain — negative, neutral](map_details/delta_0985_gain_4.md) | 0x33B0 | Gain applied to signed throttle-coordinate delta; calibrated physical rate remains unresolved |
| [Throttle-delta fuel gain — negative, standard](map_details/delta_0985_gain_5.md) | 0x33C7 | Gain applied to signed throttle-coordinate delta; calibrated physical rate remains unresolved |
| [Throttle-delta fuel gain — negative, alternate](map_details/delta_0985_gain_6.md) | 0x33DE | Gain applied to signed throttle-coordinate delta; calibrated physical rate remains unresolved |
| [Load-delta fuel gain — nonnegative, neutral](map_details/delta_0989_gain_1.md) | 0x33F7 | Gain applied to signed load-processing-coordinate delta; calibrated physical rate remains unresolved |
| [Load-delta fuel gain — nonnegative, standard](map_details/delta_0989_gain_2.md) | 0x340E | Gain applied to signed load-processing-coordinate delta; calibrated physical rate remains unresolved |
| [Load-delta fuel gain — nonnegative, alternate](map_details/delta_0989_gain_3.md) | 0x3425 | Gain applied to signed load-processing-coordinate delta; calibrated physical rate remains unresolved |
| [Load-delta fuel gain — negative, neutral](map_details/delta_0989_gain_4.md) | 0x343C | Gain applied to signed load-processing-coordinate delta; calibrated physical rate remains unresolved |
| [Load-delta fuel gain — negative, standard](map_details/delta_0989_gain_5.md) | 0x3453 | Gain applied to signed load-processing-coordinate delta; calibrated physical rate remains unresolved |
| [Load-delta fuel gain — negative, alternate](map_details/delta_0989_gain_6.md) | 0x346A | Gain applied to signed load-processing-coordinate delta; calibrated physical rate remains unresolved |
| [Air-induction enable vs speed and throttle](map_details/step_grid_4c44.md) | 0x4C44 | Air-induction solenoid eligibility grid; zero inhibits this eligibility path |
| [Air-induction enable vs speed and load](map_details/step_grid_4d48.md) | 0x4D48 | Air-induction solenoid eligibility grid; zero inhibits this eligibility path |
| [Adaptive feedback enable vs speed and throttle](map_details/step_grid_35b0.md) | 0x35B0 | Adaptive feedback eligibility grid; zero clears feedback-enable path |
| [Adaptive feedback enable vs speed and load](map_details/step_grid_363c.md) | 0x363C | Adaptive feedback eligibility grid; zero clears feedback-enable path |
| [Spark time correction — other variants](map_details/timing_speed_4f64.md) | 0x4F64 | Speed-indexed additive time correction in the spark planner; timer ticks, not absolute spark degrees |
| [Spark time correction — XT variant 9](map_details/timing_speed_4f81.md) | 0x4F81 | Speed-indexed additive time correction in the spark planner; timer ticks, not absolute spark degrees |
| [Ignition dwell contribution vs speed and supply](map_details/dwell_supply_speed.md) | 0x4B12 | Coil charge-duration contribution combined with other dwell terms; physical timer scale remains conditional |
| [Coolant sensor conversion](map_details/coolant_sensor_conversion.md) | 0x4F47 | Sensor conversion to internal temperature code; candidate Celsius scale remains conditional |
| [Intake air temperature sensor conversion](map_details/intake_temperature_conversion.md) | 0x4F26 | Sensor conversion to internal temperature code; candidate Celsius scale remains conditional |
| [Pressure-to-load processing gain](map_details/curve_1854.md) | 0x185A | Pressure/load-processing gain copied to RAM 0x0DBA |
