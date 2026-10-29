# Full-image decompilation

This package covers the entire supplied 64 KiB image, not only initialization or calibration lookup code. It provides both readable structured pseudocode and a complete address-preserving translation that keeps condition flags, register aliases, memory accesses and all decoded control transfers explicit.

## Read the code

- [Complete function index](FUNCTION_INDEX.md): every recovered routine, including code at the end of the image.
- [Combined structured C](../decompiled.c): 225 recovered routines. Original names/types are unavailable; generated names and candidate boundaries remain visible.
- [Compilable low-level C](c): every one of the 15,942 decoded instructions, grouped by address page. For example, `page_80.c` covers instruction addresses `0x8000–0x80FF`; `page_f7.c` contains the final routines and dispatch stubs. Each case names its original bytes, assembly and function.
- [Whole-image listing](whole_image.asm): code and data from `0x0000` through `0xFFFF`, without skipped bytes.
- [Firmware data C array](firmware_data.c): every original input byte, including fill, metadata and otherwise unnamed data.
- [Raw instruction semantics](instructions.jsonl): the p-code used to generate the complete C translation.
- [Control-flow graph data](control_flow.json), [indirect-call tables](indirect_calls.json), and [machine-readable function index](function_index.json).

Structured C is approximate pseudocode, not a compiler-ready original-source reconstruction. The `c/` directory is a separate compilable translation with explicit CPU state. It does not depend on guessed C calling conventions or on the decompiler deciding a block is reachable.

## Coverage

All 65,536 input bytes are accounted for in [byte_coverage.json](byte_coverage.json):

| Content | Bytes |
|---|---:|
| Decoded instructions | 42,849 |
| Calibration/data region | 14,336 |
| FF bytes over the working IO/RAM address range | 6,144 |
| Unavailable/erased boot-region bytes | 2,048 |
| Embedded tables and dispatch pointers | 72 |
| Metadata and trailer | 57 |
| Padding, including one unreachable NOP | 30 |

There are zero unclassified bytes and zero decoded instructions without a containing recovered function. Data and FF padding are preserved as data; they are not invented executable routines. Coverage is not a claim that every scalar, sensor, map, or operating mode has a verified physical name.

## Corrections beyond the first pass

The main routine at `0x5000` now includes the previously unowned continuation `0x52D0–0x54EF`. Its recovered body grew from 720 to 1,264 bytes. Lookup routines now have explicit register argument/return storage. Shared RAM is conservatively volatile, and the structured pass does not discard unreachable blocks or assume readonly memory for simplification.

More importantly, the bundled HC12 language had incorrect indexed 16-bit memory semantics: `SUBD 0,X` could become subtraction of X itself, and `LDY 4,X` could become X+4 rather than a memory read. The repository's processor model fixes this, plus ADC overflow and SBC borrow propagation. [The patch](../../ghidra/cpu12-corrections.patch) is reviewable. Both the structured C and complete C were regenerated with the corrected model.

Remaining structured-decompiler warnings concern stack-pointer setup and infinite-loop blocks. They remain listed in [decompiler_warnings.tsv](decompiler_warnings.tsv). The low-level translation independently retains every decoded instruction even when the high-level presentation is imperfect.

## Build and test the complete translation

From the repository root on Linux/WSL, with Clang or GCC:

```sh
clang -std=c11 -O0 -fPIC -shared analysis/full/c/page_*.c analysis/full/c/dispatch.c -o /tmp/libxt660_full.so
python3 scripts/test_full_lift.py /tmp/libxt660_full.so
```

The verification uses an independent Python p-code evaluator for **31,884 instruction states**, plus CPU12 fixtures and lookup results at original table knots. Indexed word loads, arithmetic carry/borrow, call-stack writes, curve values and major-axis searches are checked. [Validation results](validation.json) distinguish translation consistency from hardware equivalence.

`xt_step` executes one translated instruction against explicit register/RAM state; `xt_run` runs a bounded number of steps. The host must supply peripheral state and interrupt effects. This is not a cycle-accurate ECU simulator, a live firmware image, or a replacement flash. Self-modifying code is not re-decoded. Undefined divide-by-zero behavior reports `XT_DIVZERO`; execution into missing boot bytes reports `XT_MISSING_BOOT`.

## Unrecoverable material

The supplied `0xF800–0xFFFF` region is entirely FF, yet the application calls `0xF8A0`. There is no boot routine at that address in this file. Complete recovery of that absent code requires another dump containing it. Original source names, comments, build files and source-level abstractions are also not recoverable with certainty from this stripped image.
