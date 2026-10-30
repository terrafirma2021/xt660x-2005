# Application decoding across all nine BIN records

All nine registered images now have an instruction-byte-checked application-family assignment, their own extracted calibration values, and an image-specific map catalogue. This is **static decoding**, not a claim that every physical unit, function purpose, constant or hardware path is resolved.

## Two code families, separate calibrations

| Family | Images | Application entry | Instructions | Instruction bytes | Decompiled functions | Maps per image | Cells per image |
|---|---|---|---:|---:|---:|---:|---:|
| Early | Original 2005, corrected copy, 2004–06 companion, both 2C1-00 files | `0x5000` | 15,942 | 42,849 | 225 | 71 | 8,275 |
| Later | 5VK-1X, 5VK-11, both 2C1-10 files | `0x4800` | 15,928 | 43,134 | 229 | 77 | 6,938 |

The entire code span and application dispatch span match within each family, including embedded code-region data. Every exported instruction is also compared individually with every member BIN. Thus the existing early disassembly applies to both 2C1-00 files **without copying the original calibration values**. The later disassembly is shared by four images for the same byte-backed reason.

The count of 663 image-specific map records contains repeated layouts across related images; it is not 663 unique map designs. All 69,127 cell values are read from their own image. A map is not treated as physically scaled merely because its layout was recovered.

## What changed between the applications

- The early application has three 45 × 30 word fuel surfaces. The later application has two, at `0x1B40` and `0x2662`, selected through load and throttle processing. The original third surface is not inserted into the later catalogue.
- Later base ignition surfaces are at `0x38D2`, `0x3B52` and `0x3DD2`, each 32 × 20 bytes. Calls at `0x7C66` consume the selected surface; neutral and ratio-selection tests immediately precede that call. Absolute BTDC still requires the crank reference.
- Several transient corrections change from uniform-axis curves to explicit stored axes. Their later shapes come from the axis-index calls and the subsequent lookup arguments, rather than old addresses or XDF labels.
- Four coolant-indexed word targets at `0x446A`, `0x448C`, `0x44AE` and `0x44D0` each have 11 points. A separate 12 × 12 surface starts at `0x451C`. Their raw consumers are recorded, but complete physical purpose and units remain open.
- The later coolant table is at `0x4713` and intake-temperature table at `0x46F2`. The ADC-coordinate transforms retain the familiar 29- and 33-point shapes. The later code also multiplies the internal temperature byte by 160 and takes the high byte (`0x69C7` and `0x6901`), then caps that result below 150. This proves a digital factor of 160/256 in that path; it does not independently prove a Celsius offset or analog circuit.
- Later initialization copies three lookup blocks from ROM into RAM: `0x185A → 0x0E32` (27 bytes), `0x32C9 → 0x0DA1` (18 bytes), and `0x32DB → 0x0DB3` (18 bytes). These maps are included; subsequent calls through RAM are linked to the ROM sources. A runtime write can still change those copies.

## Differences that matter within a family

The two 2C1-00 images change ten recovered map bodies relative to the original 2005 image: the normal load and throttle fuel surfaces, startup fuel, one post-start enrichment state, and six transient curves. Their application instructions remain identical. The two 2C1-10 images change nine recovered map bodies relative to the supplied 5VK-1X image: both base-fuel surfaces, startup fuel, and six transient curves.

The 5VK-1X and 5VK-11 images have identical recovered map bodies. Their four differing bytes remain separate evidence: a scalar at `0x348D`, the embedded identifier, and metadata/checksum bytes. `0x348D` is read at `0x5033`; it is outside the preceding extracted curve. Calling the files interchangeable or factory stock would go beyond this result.

The labelled immobilizer-off pairs have their own image records and unchanged source bytes. Modification labels are not a hardware behavior test. The later `0x4619` byte is copied into RAM `0x0E4D` at `0x58DF`; the second changed byte `0x4751` is retained in the residual-constant inventory, rather than silently classified as a map cell.

## Code coverage and decompiler limits

The later application's only non-instruction spans before metadata are:

| Range | Meaning |
|---|---|
| `0x61B6–0x61D5` | ADC handler pointer table, reached through indexed dispatch |
| `0xBC32–0xBC43` | Reciprocal/shift lookup constants, referenced at `0x773B` |
| `0xB0EC–0xB5FF` | Uniform FF padding |
| `0xF577–0xF76F` | Uniform FF padding |

Flow roots include the entry/interrupt dispatch, indirect ADC entries, unique original-function prefix candidates, and explicitly marked unreferenced candidates. A structurally decoded candidate does not prove execution or an original source-level function boundary. Pseudocode retains warnings about stack changes and infinite loops. All 229 recovered later functions decompile; the application-only program deliberately leaves boot target `0xF8A0` external. The five populated boot images share the separately decoded [boot region](xt660-2004-2006-companion/BOOT.md). Four FF-filled boot regions remain absent, not reconstructed reads.

## Artifacts and verification

- [Later structured pseudocode](families/late/decompiled.c), [disassembly](families/late/disassembly.tsv), [function index](families/late/functions.tsv), [references](families/late/references.tsv), and [compressed instruction p-code](families/late/full/instructions.jsonl.gz).
- [Early structured pseudocode](../decompiled.c) and [complete early instruction translation](../full/README.md).
- [Family verification](family_verification.json), [per-image catalogue](decode_catalog.json), and [lookup execution results](lookup_validation.json).
- Each image directory contains `maps.json` and `decode_review.json`. These include cells, stored axes, caller evidence, changed-map summaries, every explicit calibration operand, and remaining calibration byte ranges.

The lookup tests execute each image's actual CPU12 p-code against its cells at selected knots, clamp/fraction points and inline threshold boundaries. Synthetic step-table values check indexing even where the stored table is constant. These tests exercise recovered lookup arithmetic; they are not complete application simulations, physical CPU validation or engine tests.

Run `decode_firmware_maps.py --check`, `audit_firmware_families.py --check`, `test_firmware_lookups.py`, and the website validators. `run_family_analysis.ps1` rebuilds the later disassembly using the repository CPU12 processor and recorded seeds. The site shows separate grids for each BIN and retains model-specific wiring boundaries.

## Still open

The early calibration region has 884 bytes outside the map/header/axis catalogue; the later region has 1,459. Those ranges include constants, flags and potentially unidentified structures, and are preserved in each image's review. Every explicit code reference to them is indexed, but not every meaning is assigned. Several later table names intentionally describe their input or output rather than guessing an actuator.

No new claim of complete physical scaling is made. Sensor circuitry, final spark reference, fitted MCU/package identity and exact bike/market/ECU matching remain separate evidence requirements. There is no verified tuning export or live-flashing approval implied by this decoding.
