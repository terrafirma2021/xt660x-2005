# External scale checks: earlier XT660 projects

The owner's earlier repositories provide comparison evidence beyond the supplied image. They are separate sources, with separate revision and measurement limits. No bytes from another ECU have been merged into the target firmware.

## Coolant: earlier logger is an unvalidated hypothesis

**Correction, 2026-10-30:** the owner clarified that the earlier logger conversions were guesses and that they had no supporting measurement data. The previous owner-corroborated status is withdrawn from the coolant table, twelve coolant-dependent map axes, generated catalogue and website. Neither logger output labels nor guessed conversion constants establish physical units.

The [earlier implementation](https://github.com/terrafirma2021/Yamaha-DataLogger/blob/d06a80aef95bf97d6e15eef1c1d851fde6cc4975/yamaha/src/main.cpp#L443) subtracts 30 from the received coolant byte. That describes what the logger did, not what temperature the ECU measured. Its unsigned result also wraps below zero.

The supplied firmware at `7139–7142` independently proves only:

```text
wire = min(149, floor(internal_code * 5/8))
```

It does not subtract 30 or identify the physical temperature unit. `Celsius = code*0.625-30` remains a candidate supported by the service-manual resistance fit under a constant ratiometric NTC pullup model. The contradictory XT manual coolant fallback remains open. Its Fahrenheit equivalent would be `code*1.125-22`, but that is conditional on the same candidate, not proof of a Fahrenheit implementation.

The [fourteen hypothesis/sensor trials](temperature_profile.json) compare seven named interpretations for both sensors. Ordinary Celsius and Fahrenheit proposals fail the stated circuit-model checks. Rejecting those proposals does not prove that the surviving candidate is the unique physical transfer, and the earlier logger supplies no independent confirmation. A further 162 sensor/offset trials admit thirteen shared integer offsets (-36 through -24) with slope fixed at 0.625 and unknown pullups. Thus the resistance evidence does not uniquely establish -30. All fourteen temperature-dependent map axes remain conditional.

## Earlier dump: real boot code, different application

The earlier [64k.bin](https://github.com/terrafirma2021/Yamaha-K-line-Tool/blob/0051cc769973d8c6f7aa74cd6a0b817e3939e1a2/64k.bin) is actually 59,392 bytes, covering addresses `1800–FFFF`. Its SHA-256 is `4e7166156f5e7a53c4c2f81a7e20f45503c032cc57b40d8f85d5c721d2550824`. Git blob: `b2a6234118297ee19b468437f348527b6171d1f9`. The `F7A0` entry jumps to 4800, whereas the supplied image jumps to 5000. This is not a complete read of the supplied revision.

| Evidence | Earlier dump | Supplied image |
|---|---|---|
| IAT cells, 33 bytes | `46F2–4712` | `4F26–4F46`, identical |
| Coolant cells, 29 bytes | `4713–472F` | `4F47–4F63`, identical |
| Coolant/IAT fallback bytes | `4600/4601`:144/80 | `4E64/4E65`:144/80 |
| Fan lower/upper thresholds | `4226/4227`:205/217 | `4BFE/4BFF`:205/217 |
| RPM telemetry divisor | `45D2`:190 | `4E34`:190 |
| Timer prescaler | `484C–484E`:5 | `5057–5059`:5 |
| Application SCI divisor | `4863–4866`:64 | `506E–5071`:64 |
| Boot/reset region | Present; reset vectors point to F800 | All FF; absent |

Decoded earlier reset sequence:

```text
F807 87          CLRA
F808 5a3a        STAA 003A       ; PLLCTL=0
F80A 8607        LDAA #7
F80C 5a34        STAA 0034       ; SYNR=7
F80E 8601        LDAA #1
F810 5a35        STAA 0035       ; REFDV=1
F812 86f1        LDAA #F1
F814 5a3a        STAA 003A       ; PLL enabled
F816 4f3708fc    BRCLR 0037,08,F816 ; wait LOCK
F81A 4c3980      BSET 0039,80    ; select PLL
```

The [NXP MC9S12T64 CRG description](https://www.nxp.com/docs/en/data-sheet/9S12T64AF16V1.pdf) gives `PLLCLK=2*OSCCLK*(SYNR+1)/(REFDV+1)` and PLL-selected bus clock `PLLCLK/2`. Thus this earlier boot establishes **bus=4*oscillator**, not an absolute frequency. A 4 MHz oscillator would give 16 MHz bus and 500 kHz timer. Neither the oscillator nor the target revision's missing boot is established by this comparison. The original and checksum-corrected target binaries remain unchanged.

## RPM: an unvalidated logger hypothesis disagrees with the nominal profile

The earlier logger multiplies RPM payload by 50; this is an unvalidated guess, not a measured scale. Independently, the supplied firmware at `749E–74B0` divides the selected internal speed code by **190**, with byte saturation. The earlier dump also uses 190. The exact operation is:

```text
wire_rpm_byte = min(255, floor(selected_speed_code / max(1, ROM_word_4E34)))
```

The logger interpretation would imply an ideal internal scale `code*50/190`. Existing nominal clock/crank derivation gives `code*50/256`. The former is **34.7368% higher**. For code 5120, the firmware sends 26 and the logger would display 1300 rpm; the nominal map coordinate is 1000 rpm. Quantization cannot explain that difference.

This comparison does not disprove the nominal physical scale: one side is only a guessed logger formula. Do not use the earlier logger to promote or replace the forty nominal RPM axes. Paired engine-speed, payload and source-period observations, or equivalent revision-specific evidence, are needed to reconcile this. The new execution test exhausts all 65,536 speed inputs through the division/saturation instructions, plus 45 divisor and boundary cases. It verifies the discrepancy in arithmetic, not which physical interpretation applies.

The logger's configured 16040 baud and the older sniffer's 16064 baud are receive settings, not measured ECU clock frequencies. Substituting either into the SCI divisor equation would create an unsupported physical calibration.

## Reproduce the comparison

Read the linked earlier binary at base 1800; compare the ranges above against the supplied image, then disassemble the listed reset bytes with the repository CPU12 model. Run `python scripts/sensor_profiles.py` for all fourteen temperature hypothesis/sensor comparisons. Run `scripts/test_units_variants.py` against the compiled full translation for the telemetry arithmetic checks. Source hashes and exact ranges above bind the external comparison; no external binary is required by the site's build.
