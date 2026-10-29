# Yamaha XT660X 2005 firmware analysis

A reverse-engineering project for the Yamaha XT660X 2005 firmware image. The repository contains the unchanged binary, structured C, an address-preserving compilable C translation of every decoded instruction, a complete byte listing, calibration analysis, and an annotated Ghidra program.

**Start with the [control-system breakdown](analysis/semantics/README.md)** for coolant/fan, sensor and output identities, RPM/cut logic, spark, fuel, serial diagnostics, startup, checksums, immobilizer behavior, and future XDF/tool definitions. The [full decompilation guide](analysis/full/README.md) and [function index](analysis/full/FUNCTION_INDEX.md) provide the underlying code.

All **15,942 decoded instructions / 42,849 instruction bytes** are translated, all **225 recovered routines** have structured C, and every byte of the **65,536-byte input** is classified. The complete C translation compiles and passes instruction-level comparisons and independent CPU12/lookup fixtures. This describes coverage of the supplied image, not recovery of the original manufacturer's source project.

The included CPU12 processor model corrects defects in Ghidra 12.1.4's bundled HC12 semantics: indexed word memory dereferencing, ADC overflow, SBC borrow handling, an inverted BRSET condition, and immediate ADCB reading the wrong accumulator. The corrections are documented in a reviewable patch and checked with independent instruction fixtures.

The [calibration map atlas](analysis/MAP_ATLAS.md) now documents **71 maps and curves**, with a [separate breakdown for every map](analysis/MAP_DETAILS.md): 19 grids, 36 uniform-axis curves, 14 precomputed-axis curves and two sensor-conversion curves. It includes 32 stored axes/threshold lists and computed axes. The [unit derivation](analysis/semantics/UNIT_DECODING.md) and [read-only conversion catalogue](analysis/semantics/physical_units.json) now provide 62 numeric, logical or conditional physical cell interpretations, joint arithmetic for seven more maps, and nominal speed axes for 40 maps. These are different levels of resolution; they do not mean 62 fully decoded physical tuning maps. Absolute spark reference and several sensor scales remain unresolved.

The [extended recovery pass](analysis/semantics/EXTENDED_MAPS.md) adds 22 previously missing layouts: transient fuel gains, air-induction and feedback eligibility grids, spark-path tables, sensor conversions, and a curve copied into RAM. [Remaining calibration work](analysis/REMAINING_CALIBRATIONS.md) accounts for every outstanding span and links 502 static address/width/access records. Three more 2×2 fuel-normalization maps are now recovered and their common multiplier is decoded. Catalogue coverage is not a claim that every physical map meaning is resolved.

The [variant analysis](analysis/semantics/VARIANTS.md) confirms that this image selects variant 9, which skips the second normal injector entry. A second diagnostic injector handler remains present; this does not establish complete twin-cylinder hardware or firmware support. The latest tests also exposed and corrected an ADCB accumulator defect in the decompiler model, and the generated analysis has been rebuilt.

The [map-consumer breakdown](analysis/semantics/MAP_CONSUMERS.md) now reconstructs normal and startup fuel arithmetic, post-start decay, transient pulses, adaptive steps and injection event timing. [Per-map status](analysis/semantics/MAP_RESOLUTION.md) distinguishes gains, thresholds, logical gates, conditional physical values and unresolved scales, including stock-disabled families.

The [temperature profile](analysis/semantics/TEMPERATURE_PROFILE.md) supplies conditional Celsius values for both sensor tables and 14 map axes. All 256 variant values were tested against the temperature routines; the fixed conversions and fallbacks stay unchanged, while spark correction selection changes. The XT660X target is retained; TDM manual data is comparison evidence. The [spark scheduler](analysis/semantics/SPARK_SCHEDULER.md) now has independently tested charge/fire planning and minimum-dwell handling. These passes add 141,432 instruction-execution cases.

## Checksum-corrected image

[XT660X 2005 startup-checksum-fixed.bin](firmware/XT660X%202005%20startup-checksum-fixed.bin) passes the recovered startup checksum routine in software validation. The single-byte change at `0xF7FD` (`FF` to `7F`) compensates the sum from `0xAAD5` to `0xAA55`; all maps and decoded instructions remain unchanged. The original dump is retained. [Correction details](analysis/semantics/CHECKSUM.md) explain the selected trailer padding, exact hashes and the separate check involving unavailable boot content. This is not a hardware-validated flash image.

## Focused control analysis

The [area guides](analysis/semantics/README.md) document coolant conversion, fan hysteresis and sensor-fault handling; separate spark/injector period limits and road-speed gates; six major map selections; and remaining work for a tuning definition. The [machine-readable catalogue](analysis/semantics/catalog.json) records 28 raw calibrations, eight ADC channels and six logical outputs. [212,090 focused control cases](analysis/semantics/control_validation.json) exercise the recovered behavior, in addition to instruction-level checks.

A branch-condition defect found during this pass materially affected earlier generated C. All generated code and the Ghidra archive have been regenerated; see [review notes](analysis/semantics/REVIEW_NOTES.md). Original firmware bytes are unchanged.

[150,614 additional cases](analysis/semantics/extended_map_validation.json) verify computed axes, selector branches, step-grid boundaries, special-grid interpolation, the RAM-copied curve and the checksum-corrected file.

[149,180 unit and variant cases](analysis/semantics/units_variant_validation.json) check normalization, scheduler cadence, sensor payload arithmetic, relative spark scheduling and both injector paths. The rebuilt full translation passes 344,357 checks, including independent accumulator tests at every immediate-ADCB site.

[259,216 additional consumer cases](analysis/semantics/map_consumer_validation.json) check complete arithmetic blocks, coupled gains, post-start state decay, transition steps, relative-throttle thresholds and injection phase dispatch.

## Communication and immobilizer analysis

The protocol findings are split into [serial transport](analysis/semantics/K_LINE.md), [dashboard diagnostics](analysis/semantics/DIAGNOSTICS.md), [startup](analysis/semantics/STARTUP.md), [checksums](analysis/semantics/CHECKSUMS.md), and [immobilizer patch/authentication](analysis/semantics/IMMOBILIZER.md). [Verification and offline decoding](analysis/semantics/PROTOCOL_VERIFICATION.md) provides reproducible instruction checks and capture-decoding examples.

The owner confirms that the supplied image was patched to skip immobilizer checking and recalls `0x4E7D: 00 → 80`. This exactly accounts for the ROM sum changing from the expected `AA55` to `AAD5` if it was the only modification. The pre-patch case was tested in simulated memory only; the supplied binary remains unchanged.

## Files

- [Supplied firmware](firmware/XT660X%202005.bin): 65,536 unchanged bytes.
- [Map atlas](analysis/MAP_ATLAS.md), [maps and values](analysis/maps.json), [axes](analysis/axes.json), and [byte-exact extracts](analysis/map_extracts).
- [Disassembly](analysis/disassembly.tsv), [approximate C](analysis/decompiled.c), and [individual routines](analysis/functions). The C is not original or buildable source.
- [Complete compilable low-level C](analysis/full/c), [all-byte listing](analysis/full/whole_image.asm), and [raw data as C](analysis/full/firmware_data.c).
- [Whole-image coverage](analysis/full/byte_coverage.json), [control-flow edges](analysis/full/control_flow.json), and [C translation validation](analysis/full/validation.json).
- [Function status](analysis/functions.tsv), [coverage gaps](analysis/undefined_code_ranges.tsv), and [verification](analysis/verification.json).
- [Annotated Ghidra program](analysis/XT660X-2005.gzf): import into Ghidra to inspect labels and cross-references.
- [Direct calibration references](analysis/calibration_references.json) and [pointer loads](analysis/calibration_pointer_loads.json), including unclassified items.
- [Analysis notes](analysis/ANALYSIS_NOTES.md): architecture evidence, limitations, and primary references.

SHA-256: `5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280`

## Scope

The complete decoded application is represented, including structurally recovered unreferenced code. **Complete original-source recovery and identification of every map are not claimed.** The top 2 KiB is all FF, including normal hardware vectors; a call to `0xF8A0` targets that unavailable region. Its bytes cannot be decompiled into absent code.

Vehicle/year attribution comes from the filename. Embedded strings mention T64 and 2002 dates. CPU12 instructions and fixed addresses match an MC9S12T64-style application; the exact ECU part number is unverified. Several sensor/output identities are now corroborated by diagnostic cross-references. Connector pins, engineering units, final fuel/timing scaling, and some special lookup forms still need analysis.

The supplied firmware remains unchanged and already contains the owner’s immobilizer patch. The separately named checksum-corrected copy changes one trailer byte; no calibration setting is altered. This is an analysis workspace, not a flash-ready tuning definition. No redistribution license is assigned to the supplied firmware.

## Reproduce

Tools used: Ghidra 12.1.4, JDK 21, Python 3 standard library, and Clang for C validation. The included `XT660-CPU12:BE:16:default` processor is a corrected flat CPU12 model. See [processor setup and corrections](ghidra/README.md) before opening the Ghidra archive.

```powershell
.\scripts\run_analysis.ps1 -GhidraHome 'C:\tools\ghidra_12.1.4_PUBLIC' -JavaHome 'C:\tools\jdk-21'
```

To regenerate only the catalogue and validate its bytes:

```powershell
python scripts/catalog_maps.py
python scripts/catalog_calibration_accesses.py
python scripts/sensor_profiles.py
python scripts/decode_units.py
python scripts/fix_startup_checksum.py
python scripts/verify_analysis.py
```
