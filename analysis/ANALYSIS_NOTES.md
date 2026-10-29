# Static-analysis notes

Analysis date: 29 October 2026. Original input: `XT660X 2005.bin`, 65,536 bytes.

## Architecture and memory

Instructions at `0x5000` decode coherently as CPU12 setup instructions. Calls and table pointers consistently use file offsets as CPU addresses. Embedded markers are `FOR T64 NEW DATAUPDATE '02/01/XX` at `0x1800` and `FOR T64 NEW PROGUPDATE  02/02/22` at `0xF780`.

NXP documents the MC9S12T64 as an HCS12 device with 64 KiB flash and fixed normal-mode flash mapping. This supports the working model but does not establish exact hardware identity without an ECU/chip label or acquisition details.

| File range | Observed content / interpretation |
|---|---|
| 0000–17FF | All FF in file; IO and runtime RAM overlap this address range. Imported as uninitialized writable memory, with volatile IO. |
| 1800–4FFF | Calibration/data region: markers, axes, cells, constants, flags and padding. |
| 5000–F773 | Application code with small embedded tables/padding. |
| F774–F79F | Trailer/build metadata. |
| F7A0–F7ED | Application entry and interrupt-dispatch stubs. |
| F7EE–F7FF | Trailer/padding/signature. |
| F800–FFFF | All FF; no usable boot code or hardware vectors supplied. Imported as uninitialized to prevent false decoding. |

The original file remains unchanged. Uninitialized memory is a Ghidra model only. This file cannot distinguish omitted/read-protected boot storage from genuinely erased storage.

## Recovery method and limits

The analysis seeds `0x5000`, `0xF7A0`, and the dispatch stubs; resumes after long NOP delays; follows direct calls; and resolves the computed ADC dispatch table at `0x6968`, evidenced by the indexed call at `0x68E7`. The adjacent function-pointer table at `0x6948` is also decoded.

Structurally coherent unreferenced routines/alternate blocks use `candidate_unreferenced_` names. These are inferred entries, not proof of execution. Shared-entry assembly and fall-through code make function boundaries and calling conventions approximate. Decompiled C contains overlapping-global, removed-block, and stack-pointer warnings. Register arguments/returns may be incompletely represented by the default compiler model. Use byte-backed assembly to resolve ambiguity.

Successful decompilation means C was generated, not semantic equivalence proven. `functions.tsv` separately records unavailable targets. Function filenames include their entry address because Ghidra may share a name between a routine and a thunk.

## Map evidence

Three word grids have 45 rows and 30 columns, with cells at `0x1B66`, `0x2688`, and `0x37A8`. Code loads 30- and 45-point axes, stores index/fraction pairs in scratch RAM, and calls `0xC499`. Its pointer arithmetic and `0xC3E2` interpolation establish the layout. The A/C choice branches on RAM `0x0B80` bit 0; state chooses outputs at `0x0952`/`0x0954` and `0x0956`/`0x0958`. Fuel-related interpretation remains provisional.

Three byte grids have 32 rows and 20 columns, with cells at `0x42AE`, `0x452E`, and `0x47AE`, sharing axes `0x426E` and `0x4246`. Code around `0x8827–0x88AE` chooses a table and calls the byte-grid helper. Selection depends on RAM `0x0D87`, `0x0896`, and `0x0898`; no physical mode names are asserted for those fields. Timing-related interpretation and any degrees conversion remain unverified.

The atlas also includes smaller surfaces and uniform-axis curves. Special/precomputed-index tables and scalar parameters remain unclassified where extent or meaning has not been verified. Direct references and explicit pointers are retained for further analysis.

Complete physical mapping requires tracing ADC inputs to hardware connections and sensor characteristics, then tracing fuel/timing calculations into timer outputs, including clocks and modes. Scalar limits, checksums, diagnostics and special lookup forms still need semantic review. The file cannot provide absent boot code. This is a usable calibration-navigation foundation, not a complete XDF/A2L with known units.

## Primary references

- [NXP MC9S12T64 documentation](https://www.nxp.com/products/S12T).
- [NXP MC9S12T64 data sheet/reference manual](https://www.nxp.com/docs/en/data-sheet/9S12T64AF16V1.pdf), especially normal-mode flash mapping.
- [Ghidra upstream](https://github.com/NationalSecurityAgency/ghidra). The installed HC12 language specification was inspected locally. The binary was analyzed locally, not uploaded to a remote decompiler.
