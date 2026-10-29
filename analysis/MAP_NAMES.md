# Map names and stable references

Names describe the recovered function. They are research aliases, not original Yamaha symbols. Stable IDs, file names and URLs remain unchanged so instruction fixtures, external links and data joins stay reproducible. Physical units, mode identity and tuning readiness remain separate questions.

All 71 entries have been reviewed against the input/output traces and current consumer research. Selection letters/numbers are retained only when the branches are known but their physical mode names are not.

| Map name | Stable ID | First cell | Category | Naming evidence |
|---|---|---|---|---|
| [Load-based fuel quantity (mode flag clear)](map_details/main_quantity_A.md) | `main_quantity_A` | `0x1B66` | Fuel | [Derivation](../analysis/semantics/FUEL.md) |
| [Throttle-based fuel quantity](map_details/main_quantity_B.md) | `main_quantity_B` | `0x2688` | Fuel | [Derivation](../analysis/semantics/FUEL.md) |
| [Load-based fuel quantity (mode flag set)](map_details/main_quantity_C.md) | `main_quantity_C` | `0x37A8` | Fuel | [Derivation](../analysis/semantics/FUEL.md) |
| [Base ignition timing — selection A](map_details/main_u8_A.md) | `main_u8_A` | `0x42AE` | Ignition | [Derivation](../analysis/semantics/SPARK.md) |
| [Base ignition timing — selection B](map_details/main_u8_B.md) | `main_u8_B` | `0x452E` | Ignition | [Derivation](../analysis/semantics/SPARK.md) |
| [Base ignition timing — selection C](map_details/main_u8_C.md) | `main_u8_C` | `0x47AE` | Ignition | [Derivation](../analysis/semantics/SPARK.md) |
| [Injection event-phase target](map_details/modulo24_surface.md) | `modulo24_surface` | `0x1914` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Secondary injector quantity multiplier](map_details/correction_surface_A.md) | `correction_surface_A` | `0x1A1A` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Fuel normalization offset](map_details/correction_surface_B.md) | `correction_surface_B` | `0x3168` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Fuel correction gain vs speed and load](map_details/correction_surface_C.md) | `correction_surface_C` | `0x3280` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Alternate base ignition timing vs speed and coolant](map_details/correction_surface_D.md) | `correction_surface_D` | `0x4A60` | Ignition | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Load-based fuel normalization input](map_details/fuel_normalization_load.md) | `fuel_normalization_load` | `0x311E` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Throttle-based fuel normalization input](map_details/fuel_normalization_throttle.md) | `fuel_normalization_throttle` | `0x312A` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Fuel normalization denominator gain](map_details/fuel_normalization_gain.md) | `fuel_normalization_gain` | `0x321C` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Feedback startup delay vs coolant](map_details/curve_18b6.md) | `curve_18b6` | `0x18B9` | Feedback | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Startup fuel base quantity vs coolant](map_details/curve_1996.md) | `curve_1996` | `0x1999` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Post-start enrichment — fast-decay state](map_details/curve_32ef.md) | `curve_32ef` | `0x32F2` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Post-start enrichment — slow-decay state](map_details/curve_3301.md) | `curve_3301` | `0x3304` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Injector pulse compensation vs supply](map_details/curve_4234.md) | `curve_4234` | `0x4237` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Startup fuel multiplier vs pressure estimate](map_details/curve_19c6.md) | `curve_19c6` | `0x19CC` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Startup fuel multiplier vs throttle](map_details/curve_19ba.md) | `curve_19ba` | `0x19C0` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Startup fuel multiplier vs engine speed](map_details/curve_19a8.md) | `curve_19a8` | `0x19AE` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Centered fuel-correction gain vs engine speed](map_details/curve_34b0.md) | `curve_34b0` | `0x34B6` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Relative-throttle qualification threshold vs speed](map_details/curve_3494.md) | `curve_3494` | `0x349A` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Transient fuel multiplier vs pressure estimate](map_details/curve_353a.md) | `curve_353a` | `0x3540` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Transient fuel multiplier vs intake temperature](map_details/curve_351d.md) | `curve_351d` | `0x3520` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Transient fuel pulse response — family 1, selection A](map_details/curve_34d0.md) | `curve_34d0` | `0x34D3` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Transient fuel pulse response — family 1, selection B](map_details/curve_34da.md) | `curve_34da` | `0x34DD` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Transient fuel pulse response — family 1, selection C](map_details/curve_34e4.md) | `curve_34e4` | `0x34E7` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Transient fuel multiplier vs throttle](map_details/curve_34ee.md) | `curve_34ee` | `0x34F4` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Transient fuel pulse response — family 2, selection A](map_details/curve_355d.md) | `curve_355d` | `0x3560` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Transient fuel pulse response — family 2, selection B](map_details/curve_3567.md) | `curve_3567` | `0x356A` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Transient fuel pulse response — family 2, selection C](map_details/curve_3571.md) | `curve_3571` | `0x3574` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Fuel normalization recovery hold — selection 1](map_details/curve_31ec.md) | `curve_31ec` | `0x31F2` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Fuel normalization recovery hold — selection 2](map_details/curve_3200.md) | `curve_3200` | `0x3206` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Feedback eligibility delay vs coolant](map_details/curve_36c4.md) | `curve_36c4` | `0x36C7` | Feedback | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Adaptive fuel correction — decrement step](map_details/curve_36a4.md) | `curve_36a4` | `0x36AA` | Feedback | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Adaptive fuel correction — increment step](map_details/curve_36b2.md) | `curve_36b2` | `0x36B8` | Feedback | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Fuel multiplier vs intake temperature](map_details/curve_3220.md) | `curve_3220` | `0x3223` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Positive transient fuel gain vs coolant](map_details/curve_3345.md) | `curve_3345` | `0x3348` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Negative transient fuel gain vs coolant](map_details/curve_3357.md) | `curve_3357` | `0x335A` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Pressure-processing offset vs engine speed](map_details/curve_1880.md) | `curve_1880` | `0x1886` | Sensor processing | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Load-path fuel multiplier vs pressure estimate](map_details/curve_323c.md) | `curve_323c` | `0x3242` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Throttle-path fuel multiplier vs pressure estimate](map_details/curve_32e0.md) | `curve_32e0` | `0x32E6` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Alternate ignition mode — throttle threshold vs coolant](map_details/curve_4a33.md) | `curve_4a33` | `0x4A36` | Ignition | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Coolant enrichment — load-based fuel path](map_details/curve_3315.md) | `curve_3315` | `0x3318` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Coolant enrichment — throttle-based fuel path](map_details/curve_3327.md) | `curve_3327` | `0x332A` | Fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Transient fuel pulse contribution vs coolant](map_details/curve_34fd.md) | `curve_34fd` | `0x3500` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Spark timing bound vs pressure estimate](map_details/curve_4bac.md) | `curve_4bac` | `0x4BB2` | Ignition | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Throttle-delta fuel gain — selection 1](map_details/delta_0985_gain_1.md) | `delta_0985_gain_1` | `0x336B` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Throttle-delta fuel gain — selection 2](map_details/delta_0985_gain_2.md) | `delta_0985_gain_2` | `0x3382` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Throttle-delta fuel gain — selection 3](map_details/delta_0985_gain_3.md) | `delta_0985_gain_3` | `0x3399` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Throttle-delta fuel gain — selection 4](map_details/delta_0985_gain_4.md) | `delta_0985_gain_4` | `0x33B0` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Throttle-delta fuel gain — selection 5](map_details/delta_0985_gain_5.md) | `delta_0985_gain_5` | `0x33C7` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Throttle-delta fuel gain — selection 6](map_details/delta_0985_gain_6.md) | `delta_0985_gain_6` | `0x33DE` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Load-delta fuel gain — selection 1](map_details/delta_0989_gain_1.md) | `delta_0989_gain_1` | `0x33F7` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Load-delta fuel gain — selection 2](map_details/delta_0989_gain_2.md) | `delta_0989_gain_2` | `0x340E` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Load-delta fuel gain — selection 3](map_details/delta_0989_gain_3.md) | `delta_0989_gain_3` | `0x3425` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Load-delta fuel gain — selection 4](map_details/delta_0989_gain_4.md) | `delta_0989_gain_4` | `0x343C` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Load-delta fuel gain — selection 5](map_details/delta_0989_gain_5.md) | `delta_0989_gain_5` | `0x3453` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Load-delta fuel gain — selection 6](map_details/delta_0989_gain_6.md) | `delta_0989_gain_6` | `0x346A` | Transient fuel | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
| [Air-induction enable vs speed and throttle](map_details/step_grid_4c44.md) | `step_grid_4c44` | `0x4C44` | Air induction | [Derivation](../analysis/semantics/EXTENDED_MAPS.md) |
| [Air-induction enable vs speed and load](map_details/step_grid_4d48.md) | `step_grid_4d48` | `0x4D48` | Air induction | [Derivation](../analysis/semantics/EXTENDED_MAPS.md) |
| [Adaptive feedback enable vs speed and throttle](map_details/step_grid_35b0.md) | `step_grid_35b0` | `0x35B0` | Feedback | [Derivation](../analysis/semantics/EXTENDED_MAPS.md) |
| [Adaptive feedback enable vs speed and load](map_details/step_grid_363c.md) | `step_grid_363c` | `0x363C` | Feedback | [Derivation](../analysis/semantics/EXTENDED_MAPS.md) |
| [Spark time correction — other variants](map_details/timing_speed_4f64.md) | `timing_speed_4f64` | `0x4F64` | Ignition | [Derivation](../analysis/semantics/SPARK_SCHEDULER.md) |
| [Spark time correction — XT variant 9](map_details/timing_speed_4f81.md) | `timing_speed_4f81` | `0x4F81` | Ignition | [Derivation](../analysis/semantics/SPARK_SCHEDULER.md) |
| [Ignition dwell contribution vs speed and supply](map_details/dwell_supply_speed.md) | `dwell_supply_speed` | `0x4B12` | Ignition | [Derivation](../analysis/semantics/SPARK_SCHEDULER.md) |
| [Coolant sensor conversion](map_details/coolant_sensor_conversion.md) | `coolant_sensor_conversion` | `0x4F47` | Sensor processing | [Derivation](../analysis/semantics/TEMPERATURE_PROFILE.md) |
| [Intake air temperature sensor conversion](map_details/intake_temperature_conversion.md) | `intake_temperature_conversion` | `0x4F26` | Sensor processing | [Derivation](../analysis/semantics/TEMPERATURE_PROFILE.md) |
| [Pressure-to-load processing gain](map_details/curve_1854.md) | `curve_1854` | `0x185A` | Sensor processing | [Derivation](../analysis/semantics/MAP_CONSUMERS.md) |
