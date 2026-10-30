# Owner-supplied XT660 XDFs and companion binaries

The supplied XT660 folder is useful, especially its **2004–06 companion BIN**, but its XDFs are not reliable enough to import as verified tuning definitions. This first, extension-filtered review examined eight XDF files and five .bin files. The later [complete dataset inventory](../../dataset/README.md) also accounts for two extensionless firmware images, two ZIP duplicates, three images and an edit log; it supersedes the file count, not the table checks below. Four XML XDFs expose 64 table declarations; four other XDFs are non-XML and their formulas were not recovered by this audit. The [structured report](local_xt660_audit.json) records every file hash, all readable table declarations, axis links and comparisons. None of these external binaries has replaced the target firmware.

## A matching application with a populated boot region

`xt 660 r/xt660 04-06(5vk-8591a-01).bin` is 59,392 bytes, mapped to CPU addresses `1800–FFFF`. SHA-256:

`1abfbaa9018b5a26452df4c060265a791979b6016d57981fb95b50d7192cbe0b`

Of the **57,344 bytes at 1800–F7FF**, 57,343 match the supplied target exactly. The only difference is `4E7D`: this companion contains `00`, while the target contains the owner's known immobilizer-skip value `80`. That includes exact agreement across the map data and application instructions. The companion's startup word sum is **AA55**, independently corroborating the explanation for the target's AAD5 sum.

The companion contains 1,868 non-FF bytes in its 2,048-byte boot region, with reset vector `F800`. This whole region is identical to the boot in the earlier 2008-labelled BIN already examined in [external scale checks](EXTERNAL_SCALE_CHECKS.md). Boot SHA-256:

`9f313f065e7f71309fb1c51f320d48f1d0a3ac72875464abded8e54fbc39df10`

This is substantially stronger evidence of a compatible boot than the earlier comparison to a different application revision. It establishes a **companion boot candidate**, not a physical read of the owner's ECU boot. The target's original and checksum-corrected files remain unchanged, and the existing target-only translation still excludes the missing boot.

Byte-checked reset-path anchors include:

| Address | Companion behavior |
|---|---|
| F800 | Initializes stack pointer to 1000 |
| F80A–F810 | Sets PLL SYNR=7 and REFDV=1 |
| F81A | Selects PLL clock after the lock wait |
| F883–F889 | Compares the application trailer against 5AA5 and conditionally branches to F7A0 |
| F7A0 | Jumps to application entry 5000, matching the target |

The PLL relationship remains **bus = 4 × oscillator frequency**. The boot constants do not specify the oscillator in hertz. Together with the [service tool's 15,625-baud setting](YAMAHA_SERVICE_TOOL.md), this supports the nominal timing interpretation; it does not establish a measured clock or mechanical spark-to-TDC reference.

## What the XDFs get right and wrong

XDF address bases must be applied before comparison. The 2004–06 `final.xdf` subtracts 6144 (1800 hexadecimal), so its declared CPU-style addresses refer to offsets in the short BIN. The other readable definitions use zero base offset. Treating all XDF addresses as CPU addresses would give misleading matches.

| Definition or field | Comparison with the matching application |
|---|---|
| Original 2004–06 XDF fuel tables | File offsets 0366, 0E88 and 1FA8 map exactly to the three recovered 45 × 30 word tables at CPU 1B66, 2688 and 37A8 |
| Original 2004–06 XDF ignition entries | Offsets 2D2E and 2FAE match the standard and alternate ignition maps at 452E and 47AE |
| Final XDF fuel tables | Starts and 45 × 30 word dimensions match the first two recovered fuel tables |
| Final XDF ignition tables | Declares 42AC, 452C and 47AC; the actual first cells are **42AE, 452E and 47AE**. Each definition begins two bytes early |
| Final XDF dwell table | Declares 4B10; the recovered cells begin at **4B12** |
| Final XDF fan temperatures | Declares **4C03–4C04**, containing B0/08. The fan decision reads **4BFE–4BFF**, containing CD/D9 (205/217) |
| Original XDF fan and limiter entries | Its zero base leaves apparent CPU-style entries unadjusted: fan 4C03 resolves to CPU 6403, not the fan thresholds |
| Final XDF injection-phase table | Begins at the recovered 1914, but declares 13 × 10 rather than the recovered 10 × 13 storage layout |
| Final XDF timing curves | Its “RPM IGN. Limit Cyl#1/#2” entries start at 4F63/4F80, one byte before recovered time-correction cells 4F64/4F81; the cylinder labels do not establish their role |

Some axes link to separate breakpoint tables. The audit resolves those links rather than assuming every inline address/formula is active. In particular, `final.xdf` has old-looking inline RPM formulas while linked breakpoint tables use `/5.12`. It also links its TPS fuel map to the load map's RPM breakpoint table. These relationships need review as definitions, not indiscriminate copying of every XML formula.

## Physical-scale comparison

| XDF proposal | Assessment for the target |
|---|---|
| RPM code / 5.12 | Agrees numerically with our existing nominal RPM profile; an independent definition's use of it is support, not a clock measurement |
| Limiter 15,000,000 / period | Agrees with the nominal 500 kHz timer and half-revolution period model. Other files use nearby constants 14,999,733 and 15,004,500 without explaining them |
| Ignition code × 90/256 − 12.5 | Slope agrees with the conditional relative-angle derivation; the **−12.5° absolute offset has no supporting crank reference in the XDF** |
| Ignition code / 4 or code × 0.2 | Later-year definitions disagree with each other and with the target's conditional scheduler slope. Do not transfer them to this application |
| Dwell code / 25 or code × 0.032 | Neither equals the target's nominal 32 ticks × 2 µs = 0.064 ms per contribution code. This contribution also precedes downstream corrections and limits |
| Fan `5*(code−29)/9`, `code/2.121`, or `code*0.476` | Conflicting proposals; no candidate passed the target coolant resistance/lookup consistency test under the stated circuit model |
| Temperature axes `(code−32)/1.8` | A Fahrenheit conversion appears in a later-year XDF, but does not establish that this XT ECU's internal temperature code is Fahrenheit |

Four temperature formulas were tested against both exact sensor lookup curves and the published resistance intervals: **eight candidate/sensor tests, all incompatible under the existing ratiometric constant-pullup model**. This rejects direct transfer under those assumptions; it does not prove how an undocumented analog circuit works. Fan-only display fits are not independent sensor calibration evidence.

The pressure/throttle axis factors also vary between definitions, for example `/440`, `/458.88`, and affine formulas. Matching a plausible endpoint is insufficient to establish sensor units. Several fuel tables retain raw `X`, so these XDFs do not supply a complete physical-unit conversion even on their own terms.

The later XDF's “gear 4–6” label is not evidence that this five-speed XT has a sixth gear. Existing neutral/standard/alternate titles remain tied to the [traced selector](MAP_SELECTORS.md), not inherited XDF labels.

## Reproduce and next use

Run against the supplied folder, preserving the relative filenames:

```text
python scripts/audit_local_xt660.py PATH_TO_XT660_FOLDER
python scripts/audit_local_xt660.py PATH_TO_XT660_FOLDER --check
```

The script never executes an XDF equation or modifies source files. It reads storage declarations, resolves explicit table links, compares bytes, checks reset anchors and evaluates independently written temperature hypotheses. It does not emulate TunerPro or decode the four non-XML definitions. Third-party files are not required by the public site's build and are not redistributed.

The matching BIN supports further boot-service analysis. The readable XDFs help cross-check table locations and propose formulas, but **no new absolute physical scale is verified by this review**. The two-byte map errors alone rule out using the final definition unchanged for tuning this image.
