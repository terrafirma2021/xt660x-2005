# Companion boot: reset and service layer

This analysis is scoped to [the registered companion BIN](../../../firmware/images/xt660-2004-2006-companion.bin), SHA-256 `1abfbaa9018b5a26452df4c060265a791979b6016d57981fb95b50d7192cbe0b`. The 59,392-byte file begins at CPU 1800. Its application matches the primary image except for configuration 4E7D, and its populated F800–FFFF region is identical to the earlier comparison boot. See [the source comparison](../../semantics/LOCAL_XDF_REVIEW.md).

The new export contains **675 instructions covering 1,676 bytes**, **19 boot-rooted function/template decompilations**, and an all-byte listing covering all **2,048 bytes**. Remaining bytes include data, vectors and padding; they are not silently called instructions. The [verification report](boot/verification.json) checks every instruction's bytes against this BIN and checks complete region accounting. This is static analysis, not execution validation of peripheral behavior.

## Reset to application

Reset vectors FFFA, FFFC and FFFE contain F800. At F800, the code sets SP to 1000; programs SYNR=7 and REFDV=1; waits for PLL lock; selects the PLL; clears the boot state and RAM; and configures a timer and SCI0. The PLL gives bus = 4 × oscillator, not an independently known oscillator frequency.

At F883–F889, a 5AA5 trailer marker at F7FE allows a conditional branch to F7A0, whose JMP enters the matching application at 5000. Otherwise boot state 0022 is set to 5A and execution enters the service loop at F8A0. The application itself also calls F8A0. Thus this formerly missing destination has a concrete purpose: it services boot communication and periodic work, and returns to the application unless the boot-loop state requests continued polling.

The original owner's F800–FFFF bytes are still FF; this code is not silently inserted into that file or into its existing application translation.

## Service dispatcher and handlers

F8A0 checks a completed-message flag, selects a handler through the 16-word table at FF30–FF4F, clears/updates communication flags, invokes FD92 and either loops or returns. Packet state occupies 0800 onwards. The following roles follow the static instructions; they are not a validated flashing procedure.

| Entry | Recovered role |
|---|---|
| F904 | Default/rejected request handling and short response setup |
| F913 | Session-gate comparison against a fixed boot record; updates session state |
| F945 | Changes service mode, disables application peripherals for one path, and handles a restart/wait path |
| F99A | Selects read-response lengths; SCI0 transmit code supplies addressed data |
| F9C8 | Byte/word memory-write handler with a special address/state check |
| F9E9 | Prepares a memory window; can copy a 2 KiB block into 1000–17FF |
| FA35 / FAE1 | Compares staged blocks, invokes a flash operation helper and checks status |
| FB63 | Additional flash-operation path with command/status handling |
| FBFE / FC1F | Copy executable templates into RAM at 0C00 and call them |
| FC5D / FCC0 | ROM-resident templates intended for execution after copying to RAM; relocation and peripheral effects are not execution-tested |
| FD1C | Diagnostic path with a full 1800–FFFF word sum and RAM write/read tests, followed by a terminal loop |
| FD92 | Periodic timer flag service, watchdog writes and receive timeout cleanup |
| FDC3 | SCI0 transmit/receive interrupt handler |
| FE9A | Default interrupt infinite loop |

The service interrupt uses SCI0 registers C8–CF; the dashboard/application link uses SCI1 D0–D7. Reset sets SCI0 divisor 0068. Under the nominal 16 MHz bus this would be approximately 9,615 baud. It is not the application's 15,625-baud SCI1 setting. The electrical route for this boot interface is not established by these register assignments.

The receive path checks a running additive sum, stores command/status/length data and marks completed packets. The transmit path emits payload and a negated accumulated checksum. This is a different framing/state machine from the application's four payload bytes plus checksum. Do not mix the two offline decoders or assume the service commands are dashboard diagnostic numbers.

## Artifacts and limits

- [Disassembly](boot/disassembly.tsv): CPU address, exact bytes and decoded instruction.
- [Complete boot listing](boot/boot_bytes.asm): every boot byte accounted for.
- [Function list](boot/functions.tsv) and [Ghidra pseudocode](boot/decompiled.c): 19 boot-rooted entries. Ghidra can expand the conditional application handoff in reset pseudocode; it is not recovered original source or buildable C.
- [Verification](boot/verification.json): source, exporter, processor and artifact hashes.

The instruction byte check does not verify all CPU flags, RAM relocation, asynchronous serial interrupts, flash commands or watchdog side effects. Existing application execution counts apply to the original application fixtures, not an end-to-end run of this companion with its boot. Hardware validation, exact oscillator and mechanical TDC remain open.

To regenerate, use Ghidra 12.1.4 with the repository's corrected `XT660-CPU12:BE:16:default` processor. Import this short BIN with BinaryLoader base address `0x1800`, disable automatic analysis, and run [AnalyzeCompanionBoot.java](../../../scripts/AnalyzeCompanionBoot.java) with this directory's `boot` folder as its output argument. Then run `python scripts/normalize_analysis_text.py`, `python scripts/firmware_catalog.py` and `python scripts/firmware_catalog.py --check`. Use a separate scratch Ghidra project; the primary annotated archive stays intact.
