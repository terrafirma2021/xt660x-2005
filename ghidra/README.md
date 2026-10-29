# Corrected CPU12 processor model

`XT660CPU12` is an external Ghidra processor module derived from Ghidra 12.1.4's HC12 language. It has its own language ID, `XT660-CPU12:BE:16:default`, and does not modify the installed Ghidra files. The upstream files retain their Apache-2.0 license; see [LICENSE.Ghidra](LICENSE.Ghidra).

Corrections in [cpu12-corrections.patch](cpu12-corrections.patch):

1. The HC12 `indexed2_5` constructor exports the word **at** the effective address (`*:2`), not the effective address value. This also fixes indexed word stores and arithmetic/compare operands using that constructor.
2. ADC overflow is derived from both additions, not the incoming V flag.
3. SBC flags incorporate incoming borrow in both the outgoing borrow and signed-overflow calculation.
4. All BRSET forms branch when `(~memory & mask) == 0`; the inherited model used the inverted predicate. The direct/extended BRSET and BRCLR instances are tested with every input byte.

The fixes have independent instruction fixtures and are exercised by the firmware's original lookup routines. Their basis is the instruction semantics in the [NXP MC9S12T64 reference manual](https://www.nxp.com/docs/en/data-sheet/9S12T64AF16V1.pdf). This is not an exhaustive silicon-level certification of the whole upstream language.

The BRSET correction was found during the [control-system semantic pass](../analysis/semantics/REVIEW_NOTES.md). Earlier generated C is superseded for flag-dependent behavior.

## Headless analysis

`scripts/run_analysis.ps1` compiles and loads this module automatically. It sets the Java property `ghidra.external.modules` to the absolute `XT660CPU12` directory before importing the binary.

## Open the annotated archive in the GUI

Start Ghidra with the same external module property, then import `analysis/XT660X-2005.gzf`:

```powershell
$module = (Resolve-Path '.\ghidra\XT660CPU12').Path
$env:GHIDRA_JAVA_OPTIONS = '-Dghidra.external.modules=' + $module
& 'C:\tools\ghidra_12.1.4_PUBLIC\ghidraRun.bat'
```

Recompile `HC12.slaspec` with the installation's `support/sleigh.bat` if using a different compatible Ghidra version. The archive needs this custom language; opening it with the uncorrected stock language would reintroduce the defects.
