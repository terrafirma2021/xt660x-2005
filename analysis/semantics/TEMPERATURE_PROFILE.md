# Temperature scale and variant checks

The target remains the supplied **XT660X 2005** image. The TDM900 manual is a comparison for shared Yamaha behavior, not a replacement identification of this firmware.

The best-supported current affine interpretation is **`temperature = raw * 0.625 - 30 °C`**. It is now available as an explicitly conditional profile in [physical_units.json](physical_units.json), covering the two sensor tables and the temperature axes of 14 maps. It is not a measured board calibration. [temperature_profile.json](temperature_profile.json) contains all 1,024 ADC inputs for both sensors, the resistance comparisons and the assumptions needed to reproduce them.

## Does the variant setting change temperature?

ROM `0x18D3 = 9` initializes RAM `0x0D87`. That selector demonstrably changes map choices and the second normal injector path. However, the temperature routines in this image do not select alternative tables or fallback bytes from it:

| Signal | Conversion | Fault replacement |
|---|---|---|
| Intake air | `0x7040` loads fixed pointer `0x4F23`, cells `0x4F26` | `0x7060` loads fixed ROM byte `0x4E65 = 80` |
| Coolant | `0x711B` loads fixed pointer `0x4F44`, cells `0x4F47` | `0x714F` loads fixed ROM byte `0x4E64 = 144` |

[74,792 instruction-execution cases](sensor_variant_validation.json) test the claim: 30,504 temperature cases vary all 256 selector values, ADC inputs and established fault states; 8,192 further cases exhaust both sensors across every ADC input and all established fault/override bit combinations at variant 9; 36,096 cases check selection and fractional interpolation of the two spark correction curves. Every ADC input is covered for selector values 0, 9 and 255; the remaining selector values use 18 boundary/interior ADC samples. Temperature results and replacements remain identical when only `D87` changes. The spark curve changes exactly at value 9. These are isolated-routine tests, not proof about all upstream state or other firmware images.

The coolant diagnostic payload uses the **measured** temperature code even when the effective code is replaced due to a fault. The IAT diagnostic payload uses the **effective** code. Neither diagnostic payload by itself establishes a dashboard Celsius offset.

## Exact coolant lookup and replacement path

The coolant map is present at **0x4F47-0x4F63**, with **29 stored cells**. It maps ADC input to an internal temperature code; it is not a two-dimensional fuel surface. The website shows its full digital curve and the cell grid directly below the page title. Its ADC slider covers all 1,024 possible inputs. Candidate Celsius is an optional, explicitly conditional display.

```text
q = min(7168, max(0, adc10 * 64 - 3840) // 8)
index, fraction = divmod(q, 256)
measured = cell[28] if index == 28 else
           (cell[index] * (256-fraction) + cell[index+1] * fraction) // 256
```

The first stored knot is ADC 60; the last is ADC 956. Inputs below 60 clamp to code 239, while inputs at/above 956 clamp to code 0. Each intermediate knot is 32 ADC counts apart. These digital facts do not depend on assigning Celsius.

At `0x7136`, measured code is written to `08F6`. The branch at `0x7145-0x7157` sets effective code `08F4` to fallback byte `ROM[4E64]=144` only when `08A0 & 4 == 0` and `08B0 & 128 != 0`; otherwise it copies the measured code. The diagnostic payload `0AE8=min(149, measured*160//256)` continues to report the measured conversion even during replacement. The initial startup and enrichment state writes at `0x715A-0x718D` use the effective code under their one-shot flags.

For IAT, the branch at `0x702A-0x7063` runs the table when `08A0 & 4 != 0` or `08B0 & 64 == 0`; otherwise effective code `08F5` takes `ROM[4E65]=80`. IAT diagnostics report that effective code. The named bits above are firmware conditions, not newly identified physical operating-mode names. Fault qualification and upstream state writers remain separate from this established-state branch check.

The extra 8,192 execution cases verify these exact output and diagnostic choices against the instruction translation. They confirm digital arithmetic and branching; they do not resolve the analog circuit or the conflicting manual temperature.

## Evidence for the candidate scale

The [Yamaha XT660R/X 2004 service manual](https://scootertuub.nl/motoren/Yamaha/Yamaha%20XT%20660%20R%20X%202004%20Service%20Manual%20%20.pdf), section 2-18 / PDF page 44, specifies coolant resistance intervals at 20, 80 and 110°C, and IAT intervals at 20 and 80°C. We test those intervals against the complete digital curves, allowing for ADC quantization, the two input bits discarded by the IAT routine, and the floor-quantized output code.

Assuming an NTC to ground with a constant pullup to the ADC reference:

```
ADC ratio = sensor_resistance / (sensor_resistance + pullup_resistance)
pullup_resistance = sensor_resistance * (1 / ADC_ratio - 1)
```

Each published temperature/resistance interval produces an allowable pullup interval. A common intersection must exist across every temperature for that sensor. This checks curve shape as well as one fallback point.

| Candidate | Coolant: common pullup across three temperatures | IAT: common pullup across two temperatures |
|---|---|---|
| `0.625*raw - 30` | 1.751–1.835 kΩ | 2.427–3.002 kΩ |
| `0.625*raw - 10`, forcing coolant byte 144 to 80°C | No intersection | Not applied to IAT |
| `0.9375*raw - 55`, forcing both XT manual fallbacks through one affine conversion | No intersection | No intersection |

Thus the first candidate is consistent with nominal 1.8 kΩ coolant and 2.7 kΩ IAT pullups. Those component values have **not** been measured. This is a consistency test under stated circuit assumptions, not proof that no other transfer function could fit.

The [Yamaha TDM900 service manual](https://biker.ee/manuals/yamaha/Yamaha-TDM900-2002-2007_Workshop_Service_Repair_Manual.pdf), section 7-4 / PDF page 367, gives coolant/IAT fault replacements of 60°C/20°C. That matches bytes 144/80 under this candidate. Its coolant resistance specification, section 8-47 / PDF page 447, is also comparable. The XT manual instead specifies coolant replacement 80°C on PDF page 347. **That disagreement remains real.** We have not found a variant-selected temperature offset that reconciles it in this image, and we have not identified the non-9 configurations as a particular TDM ECU.

## Map and fan interpretation under this profile

Uniform temperature knots 16, 32, ... 240 become -20, -10, ... 120°C. IAT curve `0x3220` uses knots 16, 24, ... 208, giving -20 to 100°C in 5°C steps. The conversion catalogue retains raw knots and the profile requirement alongside every converted axis.

Normal fan hysteresis clears below raw 205 and sets above raw 217. The last clear code is 204, conditionally 97.5°C; the first set code is 218, conditionally 106.25°C. Equality retains the previous state. Sensor faults, diagnostic mode and override paths are separate. These values are not hardware-verified switching temperatures.

To distinguish the remaining hypotheses, a resistance substituted at the ECU sensor input plus its resulting internal/diagnostic value would establish the analog transfer; a known-temperature reading would establish the physical offset. The missing measurement does not prevent further tracing of other maps.

Reproduce with `python scripts/sensor_profiles.py`; run `scripts/test_sensor_variants.py` against the compiled full-translation library. No firmware byte is modified by either script.
