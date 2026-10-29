# Yamaha XT660X 2005 firmware analysis

Private repository containing the unchanged supplied binary and a full-image decompilation package: structured C, an address-preserving compilable C translation of every decoded instruction, a complete byte listing, and the annotated Ghidra program.

**Start with [the full decompilation guide](analysis/full/README.md)** and [complete function index](analysis/full/FUNCTION_INDEX.md).

All **15,942 decoded instructions / 42,849 instruction bytes** are translated, all **225 recovered routines** have structured C, and every byte of the **65,536-byte input** is classified. The complete C translation compiles and passes instruction-level comparisons and independent CPU12/lookup fixtures. This describes coverage of the supplied image, not recovery of the original manufacturer's source project.

The deeper pass also fixed three defects in the bundled HC12 processor semantics: indexed word memory dereferencing, ADC overflow, and SBC borrow handling. The corrected processor model and patch are included; the previous uncorrected C must not be used as authoritative.

[The map atlas](analysis/MAP_ATLAS.md) remains available: 11 grid layouts, 35 uniform-axis curves, and 24 explicit axes. Physical fuel/ignition names and units still require semantic investigation.

## Files

- [Original firmware](firmware/XT660X%202005.bin): 65,536 unchanged bytes.
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

Vehicle/year attribution comes from the filename. Embedded strings mention T64 and 2002 dates. CPU12 instructions and fixed addresses match an MC9S12T64-style application; the exact ECU part number is unverified. Physical sensor names, engineering units, final fuel/timing scaling, and some special lookup forms still need analysis.

No firmware bytes or settings have been changed. This is an analysis workspace, not a flash-ready tuning definition. No redistribution license is assigned to the supplied firmware.

## Reproduce

Tools used: Ghidra 12.1.4, JDK 21, Python 3 standard library, and Clang for C validation. The included `XT660-CPU12:BE:16:default` processor is a corrected flat CPU12 model. See [processor setup and corrections](ghidra/README.md) before opening the Ghidra archive.

```powershell
.\scripts\run_analysis.ps1 -GhidraHome 'C:\tools\ghidra_12.1.4_PUBLIC' -JavaHome 'C:\tools\jdk-21'
```

To regenerate only the catalogue and validate its bytes:

```powershell
python scripts/catalog_maps.py
python scripts/verify_analysis.py
```
