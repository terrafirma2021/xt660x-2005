# Per-map breakdown

Every catalogued map has a byte layout, input/output trace, raw values and nearby instruction evidence. A decoded layout does not establish physical units or make a tuning definition ready.

| Map | Cells | Role |
|---|---|---|
| [main_quantity_A](map_details/main_quantity_A.md) | 0x1B66 | Primary fuel quantity surface A; see semantics/FUEL.md |
| [main_quantity_B](map_details/main_quantity_B.md) | 0x2688 | Fuel quantity surface B; see semantics/FUEL.md |
| [main_quantity_C](map_details/main_quantity_C.md) | 0x37A8 | Primary fuel quantity surface C; see semantics/FUEL.md |
| [main_u8_A](map_details/main_u8_A.md) | 0x42AE | Base spark timing surface A; see semantics/SPARK.md |
| [main_u8_B](map_details/main_u8_B.md) | 0x452E | Base spark timing surface B; see semantics/SPARK.md |
| [main_u8_C](map_details/main_u8_C.md) | 0x47AE | Base spark timing surface C; see semantics/SPARK.md |
| [modulo24_surface](map_details/modulo24_surface.md) | 0x1914 | Cyclic 24-code surface; physical event meaning unresolved |
| [correction_surface_A](map_details/correction_surface_A.md) | 0x1A1A | Speed/throttle correction |
| [correction_surface_B](map_details/correction_surface_B.md) | 0x3168 | Control correction |
| [correction_surface_C](map_details/correction_surface_C.md) | 0x3280 | Fuel correction surface |
| [correction_surface_D](map_details/correction_surface_D.md) | 0x4A60 | Temperature/speed correction in spark path |
| [curve_18b6](map_details/curve_18b6.md) | 0x18B9 | Coolant-dependent feedback threshold |
| [curve_1996](map_details/curve_1996.md) | 0x1999 | Startup fuel base quantity |
| [curve_32ef](map_details/curve_32ef.md) | 0x32F2 | Startup/reset state curve |
| [curve_3301](map_details/curve_3301.md) | 0x3304 | Startup/reset state curve |
| [curve_4234](map_details/curve_4234.md) | 0x4237 | Additive injection-pulse compensation; deadtime candidate |
| [curve_19c6](map_details/curve_19c6.md) | 0x19CC | Startup fuel multiplier |
| [curve_19ba](map_details/curve_19ba.md) | 0x19C0 | Startup fuel multiplier |
| [curve_19a8](map_details/curve_19a8.md) | 0x19AE | Startup fuel multiplier |
| [curve_34b0](map_details/curve_34b0.md) | 0x34B6 | Speed-dependent correction |
| [curve_3494](map_details/curve_3494.md) | 0x349A | Transient threshold |
| [curve_353a](map_details/curve_353a.md) | 0x3540 | Transient correction |
| [curve_351d](map_details/curve_351d.md) | 0x3520 | Transient temperature multiplier |
| [curve_34d0](map_details/curve_34d0.md) | 0x34D3 | Selected transient response curve |
| [curve_34da](map_details/curve_34da.md) | 0x34DD | Selected transient response curve |
| [curve_34e4](map_details/curve_34e4.md) | 0x34E7 | Selected transient response curve |
| [curve_34ee](map_details/curve_34ee.md) | 0x34F4 | Transient throttle correction |
| [curve_355d](map_details/curve_355d.md) | 0x3560 | Selected transient response curve |
| [curve_3567](map_details/curve_3567.md) | 0x356A | Selected transient response curve |
| [curve_3571](map_details/curve_3571.md) | 0x3574 | Selected transient response curve |
| [curve_31ec](map_details/curve_31ec.md) | 0x31F2 | Speed-dependent control correction |
| [curve_3200](map_details/curve_3200.md) | 0x3206 | Speed-dependent control correction |
| [curve_36c4](map_details/curve_36c4.md) | 0x36C7 | Feedback eligibility threshold |
| [curve_36a4](map_details/curve_36a4.md) | 0x36AA | Adaptive correction subtraction bound |
| [curve_36b2](map_details/curve_36b2.md) | 0x36B8 | Adaptive correction addition bound |
| [curve_3220](map_details/curve_3220.md) | 0x3223 | Fuel temperature multiplier; used with offset 0x0180 |
| [curve_3345](map_details/curve_3345.md) | 0x3348 | Coolant-dependent correction |
| [curve_3357](map_details/curve_3357.md) | 0x335A | Coolant-dependent correction |
| [curve_1880](map_details/curve_1880.md) | 0x1886 | Pressure-processing correction |
| [curve_323c](map_details/curve_323c.md) | 0x3242 | Multiplier for correction_surface_C |
| [curve_32e0](map_details/curve_32e0.md) | 0x32E6 | Pressure-dependent fuel correction |
| [curve_4a33](map_details/curve_4a33.md) | 0x4A36 | Temperature correction in spark path |
| [curve_3315](map_details/curve_3315.md) | 0x3318 | Coolant-dependent fuel correction |
| [curve_3327](map_details/curve_3327.md) | 0x332A | Coolant-dependent fuel correction |
| [curve_34fd](map_details/curve_34fd.md) | 0x3500 | Transient temperature correction |
| [curve_4bac](map_details/curve_4bac.md) | 0x4BB2 | Timing bound consumed at 0x8A2F |
| [delta_0985_gain_1](map_details/delta_0985_gain_1.md) | 0x336B | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [delta_0985_gain_2](map_details/delta_0985_gain_2.md) | 0x3382 | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [delta_0985_gain_3](map_details/delta_0985_gain_3.md) | 0x3399 | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [delta_0985_gain_4](map_details/delta_0985_gain_4.md) | 0x33B0 | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [delta_0985_gain_5](map_details/delta_0985_gain_5.md) | 0x33C7 | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [delta_0985_gain_6](map_details/delta_0985_gain_6.md) | 0x33DE | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [delta_0989_gain_1](map_details/delta_0989_gain_1.md) | 0x33F7 | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [delta_0989_gain_2](map_details/delta_0989_gain_2.md) | 0x340E | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [delta_0989_gain_3](map_details/delta_0989_gain_3.md) | 0x3425 | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [delta_0989_gain_4](map_details/delta_0989_gain_4.md) | 0x343C | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [delta_0989_gain_5](map_details/delta_0989_gain_5.md) | 0x3453 | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [delta_0989_gain_6](map_details/delta_0989_gain_6.md) | 0x346A | Gain applied to a signed transient-delta path; physical delta identity unresolved |
| [step_grid_4c44](map_details/step_grid_4c44.md) | 0x4C44 | Air-induction solenoid eligibility grid; zero inhibits this eligibility path |
| [step_grid_4d48](map_details/step_grid_4d48.md) | 0x4D48 | Air-induction solenoid eligibility grid; zero inhibits this eligibility path |
| [step_grid_35b0](map_details/step_grid_35b0.md) | 0x35B0 | Adaptive feedback eligibility grid; zero clears feedback-enable path |
| [step_grid_363c](map_details/step_grid_363c.md) | 0x363C | Adaptive feedback eligibility grid; zero clears feedback-enable path |
| [timing_speed_4f64](map_details/timing_speed_4f64.md) | 0x4F64 | Speed correction in spark-timing path; final degree conversion unresolved |
| [timing_speed_4f81](map_details/timing_speed_4f81.md) | 0x4F81 | Speed correction in spark-timing path; final degree conversion unresolved |
| [dwell_supply_speed](map_details/dwell_supply_speed.md) | 0x4B12 | Spark output timing/dwell candidate; timer units and electrical interpretation unresolved |
| [coolant_sensor_conversion](map_details/coolant_sensor_conversion.md) | 0x4F47 | Sensor conversion to internal temperature code; Celsius offset unresolved |
| [intake_temperature_conversion](map_details/intake_temperature_conversion.md) | 0x4F26 | Sensor conversion to internal temperature code; Celsius offset unresolved |
| [curve_1854](map_details/curve_1854.md) | 0x185A | Pressure/load-processing gain copied to RAM 0x0DBA |
