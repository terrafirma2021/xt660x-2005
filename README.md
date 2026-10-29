# Yamaha XT660X 2005 firmware analysis

Private repository containing the unchanged supplied binary, CPU12 disassembly, Ghidra pseudocode, an annotated Ghidra program, and a reproducible calibration-map catalogue.

**Start with [the map atlas](analysis/MAP_ATLAS.md).** It documents 11 code-confirmed grid layouts, 35 uniform-axis curves, and 24 explicit axes. Fuel/ignition roles remain hypotheses; raw addresses, shapes, values, and caller references are supplied separately.

## Files

- [Original firmware](firmware/XT660X%202005.bin): 65,536 unchanged bytes.
- [Map atlas](analysis/MAP_ATLAS.md), [maps and values](analysis/maps.json), [axes](analysis/axes.json), and [byte-exact extracts](analysis/map_extracts).
- [Disassembly](analysis/disassembly.tsv), [approximate C](analysis/decompiled.c), and [individual routines](analysis/functions). The C is not original or buildable source.
- [Function status](analysis/functions.tsv), [coverage gaps](analysis/undefined_code_ranges.tsv), and [verification](analysis/verification.json).
- [Annotated Ghidra program](analysis/XT660X-2005.gzf): import into Ghidra to inspect labels and cross-references.
- [Direct calibration references](analysis/calibration_references.json) and [pointer loads](analysis/calibration_pointer_loads.json), including unclassified items.
- [Analysis notes](analysis/ANALYSIS_NOTES.md): architecture evidence, limitations, and primary references.

SHA-256: `5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280`

## Scope

The supplied application is extensively disassembled and decompiled, with separate labels for structurally recovered unreferenced code. **Complete original-source recovery and identification of every map are not claimed.** The top 2 KiB is all FF, including the normal hardware vectors; a call to `0xF8A0` targets that unavailable region.

Vehicle/year attribution comes from the filename. Embedded strings mention T64 and 2002 dates. CPU12 instructions and fixed addresses match an MC9S12T64-style application; the exact ECU part number is unverified. Physical sensor names, engineering units, final fuel/timing scaling, and some special lookup forms still need analysis.

No firmware bytes or settings have been changed. This is an analysis workspace, not a flash-ready tuning definition. No redistribution license is assigned to the supplied firmware.

## Reproduce

Tools used: Ghidra 12.1.4, JDK 21, Python 3 standard library. The flat `HC-12:BE:16:default` language is intentional: the generic HCS12 model uses paging for other devices, while this T64 application uses fixed CPU12 addresses.

```powershell
.\scripts\run_analysis.ps1 -GhidraHome 'C:\tools\ghidra_12.1.4_PUBLIC' -JavaHome 'C:\tools\jdk-21'
```

To regenerate only the catalogue and validate its bytes:

```powershell
python scripts/catalog_maps.py
python scripts/verify_analysis.py
```
