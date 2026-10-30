# Scaling comparison with other Denso/Yamaha ECUs

Research date: 30 October 2026. **All 71 map records were reviewed for applicability; no new absolute physical scale was established by copying an external definition.** The useful new firmware result is the [pressure-estimate selection and tracking model](PRESSURE_ESTIMATE.md), which narrows the unresolved input path for six curves.

The machine-readable [source inventory](external_definition_sources.json) pins inspected GitHub files to revisions and blob hashes. The [candidate audit](external_scaling_audit.json) records results and every map's current cell/axis interpretation. Run `python scripts/audit_external_scaling.py --check` to reproduce the applicability checks. This test does not certify the external authors' definitions on their hardware.

## Actual definitions inspected

| Source | What was found | Applicability to this XT image |
|---|---|---|
| [Suzuki Liana XDF](https://github.com/zelenecul/liana-33920-68j-ecu-mapping-reverse/blob/69b7c6ae49350f8b10473f877b5f277ea5b1abab/Suzuki_Liana_33920-68J.xdf) | 600 tables parsed; IAT uses `X*0.01-100` with 16-bit cells; injector lag uses `X*0.001`; ignition limit uses `X*0.01-100` | XT sensor/spark tables use bytes, and its duration consumers have different tick multipliers. These formulas cannot be copied directly. |
| [DensoToXDF Suzuki example](https://github.com/tientuk3/DensoToXDF/blob/15fdf85a8c1042c928a9e65ab5a68e354887226a/test/32920-41G00.xdf) | 171 tables, 513 math expressions, all `X` | A structural definition, with no physical conversion to borrow. Its generator targets SH/M32R directory layouts. |
| [Yamaha Aerox XDF](https://github.com/AutotronicCommunity/YAMAHA-AEROX-XDF--BIN/blob/e2a30fc3b9a166c59c922d68b55e3ea8a3b5198d/AEROX%20%20BBP-H594A-01.xdf) | 75,632-byte binary file, not readable XML; corresponding BIN listed as 1 MiB | No conversion formulas recovered from this file. It supplies no verified XT scale. |
| [Toyotune 3S-GTE research](https://github.com/jonsole/toyotune/blob/570995adc0ff3d374b588bae92bf5ede944253d8/hw/dash_cluster/PLAN.md) | RPM `/5.12`, injection `*4 us`, nonlinear temperature fit operating on inverted ADC-derived codes | RPM factor equals our nominal factor numerically. Temperature encoding and injection timebase differ; agreement in one field cannot validate the others. |

[OldSkullTuning's XT660 page](https://oldskulltuning.com/yamaha-xt-660-remap-ecu-tunerpro-maps/) lists relevant fuel, spark, dwell and axis definitions, but its public page supplies no conversion equations or matching file for this image. [MotoEditor's 2015–2017 XT660 listing](https://motoeditor.com/definition/yamaha-xt660-2015-2017-2c1-8591a-20) concerns ECU `2C1-8591A-20`; its verification claim was not independently reproduced here. Neither listing is evidence that this 2005 dump has the same scale. No purchase was made.

## Temperature candidates tested against the XT curves

Each candidate is evaluated over all 1,024 ADC inputs for both sensors: **8,192 ADC/candidate evaluations**. The comparison uses the Yamaha resistance intervals and the same conservative quantization envelope as the [existing sensor model](TEMPERATURE_PROFILE.md). Each sensor may have a different unknown pullup, but that pullup must stay constant across its reference temperatures. Rejection is conditional on this ratiometric NTC circuit model.

| Proposed conversion of XT post-table code | Coolant | Intake | Meaning |
|---|---|---|---|
| Suzuki IAT `0.01*code-100` | Reject | Reject | Cannot represent the reference temperatures in the XT byte range. The external definition uses 16 bits. |
| Toyota diagnostic `0.625*code-40` | Reject | Compatible | No common coolant pullup fits all three resistance points. One sensor passing is insufficient. |
| Toyotune nonlinear temperature formula | Reject | Reject | No common pullup fits each sensor's reference points when the formula is applied to XT lookup output. Toyota's original ADC encoding is a different quantity. |
| Existing XT candidate `0.625*code-30` | Compatible | Compatible | Still conditional: the earlier offset sweep also admits -36 through -24 at this slope. Compatibility does not determine a unique offset. |

The `0.625*X-40` lead comes from the [Toyota Corolla RM1037U service description](https://manualzz.com/doc/30255717/toyota-sfi-system-engine-user-manual), thermostat Mode 06 test 08/component 81. That source describes a diagnostic result, not a Yamaha internal calibration variable. The earlier owner logger remains a guess and is not used as calibration evidence.

## Timing comparison

Directly interpreting an XT timer tick as the Liana lag-table step of 1 us would give a 2.5-second fan diagnostic repeat and 1-second active window. Using the Toyotune injection step of 4 us would give 10 seconds and 4 seconds. The XT service-manual sequence is 5 seconds and 2 seconds, supporting the existing **2 us nominal tick**. This comparison rules out those direct substitutions under the documented scheduler interpretation; it does not measure the oscillator. External table cells may also be scaled before reaching their own timers.

The Toyotune RPM factor `/5.12` equals `*100/512`, matching the XT nominal derivation. It is a useful convention match, not an independent observation of this ECU's clock or crank pattern. Absolute spark BTDC still needs physical crank reference; an external spark offset cannot supply it.

## Remaining work across the map families

| Family | Established interpretation | Remaining physical dependency |
|---|---|---|
| Fuel duration, dwell, time corrections and delays | Exact tick multipliers and documented consumer arithmetic | Actual timer clock; downstream operating conditions remain separate |
| RPM axes | Reciprocal arithmetic and nominal `/5.12` scale | Clock and crank-pattern interpretation |
| Temperature cells and axes | Exact digital lookup; candidate Celsius profile | Unique temperature offset/transfer and XT fallback discrepancy |
| Pressure/load axes | Signed load rescale; pressure source priority, clamps and accepted-window tracking | Analog pressure transfer and remaining acquisition/eligibility paths; processed load is not raw sensor pressure |
| TPS and supply axes | ADC/code transforms | Mechanical TPS reference and voltage divider/reference |
| Spark and injection phase | Relative spark and cyclic event arithmetic | Physical crank/TDC and event reference |
| Gains, offsets, eligibility and normalization | Dimensionless/code/logical effects | Do not rename these AFR, fuel mass or absolute units without evidence |
| Seven transient-factor curves | Exact joint pulse calculation | No unique standalone millisecond conversion for an isolated factor |

The [per-map resolution review](MAP_RESOLUTION.md) remains authoritative for individual open items. The comparison has not changed the 64 numeric/logical/conditional interpretations and seven joint-factor descriptions into 71 verified tuning scales.
