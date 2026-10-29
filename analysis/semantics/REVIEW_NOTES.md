# Review notes: semantic pass, 29 October 2026

## Fourth processor-model defect

Following the coolant fault path instruction-by-instruction exposed an inverted `BRSET` predicate in the inherited Ghidra HC12 model. All three addressing forms computed `(~memory & mask)` but branched when it was **nonzero**. CPU12 BRSET must branch when it is **zero**, meaning every selected bit is set. See the manufacturer [CPU12 Reference Manual, Rev. 4, page 115](https://mil.ufl.edu/4744/docs/hc12/cpu12rm.rev4.pdf).

This is a material correction: earlier generated C could reverse fault gates and other flag-driven decisions. The earlier `9d17538`/`042796c` outputs are superseded for semantic interpretation. Byte listings and original firmware remain unchanged. The current structured C, full instruction C, p-code and Ghidra archive have all been regenerated using the corrected model.

The [processor patch](../../ghidra/cpu12-corrections.patch) now includes this correction alongside indexed-word dereferencing, ADC overflow and SBC borrow handling. The test executes **every direct/extended BRSET and BRCLR instance in this image against all 256 input-byte values**: 250,880 cases. Expected branch predicates are written from the instruction definition, not copied from p-code. Branch destinations and unchanged CCR are checked. Indexed BRSET was corrected in the model too; the test statement applies to the direct/extended forms actually exercised.

The older p-code-versus-C tests could not detect this error: both implementations consumed the same incorrect p-code. They still test translation consistency, but are not a substitute for independent instruction/behavior checks. No exhaustive CPU-model certification is claimed after this correction either.

## What changed beyond the processor model

- Added explicit register ABI information for interpolation entry `0xC276`, restoring the temperature conversion inputs in its structured presentation.
- Re-ran extraction, decompilation, full C generation and coverage checks; retained 15,942 instructions / 42,849 instruction bytes.
- Corrected the reproduction script's headless property quoting and project-directory name; Ghidra rejected the previous leading-dot project path.
- Re-imported the regenerated Ghidra archive and verified original ROM bytes, processor identity, recovered code and calibration labels.
- Added service-manual diagnostic cross-references and area-specific algorithm documentation.
- Added 212,090 focused test cases: temperature conversions, fan decisions, fault boundaries, reciprocal speed, main cut flags, selected entry gates, and all cell knots/normal selection paths for the six major maps.

## Evidence limits

The fixture library supplies RAM and registers directly. It does not reproduce ADC electrical behavior, timer progression, interrupt arrival or physical outputs. Tests at exact map knots prove lookup orientation and sampled selection paths, not every interpolation fraction or all operating modes. The complete structured C still has inferred calling conventions and may misrepresent register-heavy calls; use the byte-backed instruction excerpts and tested low-level translation to resolve ambiguity.

All physical identities based on the service manual are cross-correlations with a 2004 model manual. Exact ECU part number and 2005 applicability remain hardware-verification items. No Celsius, RPM, ignition-degree or fuel-unit formula was guessed to make an editor appear finished.

## Subsequent ADCB correction during unit decoding

An exhaustive normalization test failed at combined code 1 / gain 255. Single-stepping `0x7F68` showed the inherited immediate-ADCB constructor reading A and writing B. It must add the operand and incoming carry to B. This corrupted multiword rounding in normalization and other consumers. The stock scalar/reference pattern alone did not expose it. The model is fixed, the patch updated, and all decompilation exports regenerated; outputs from commit `5cdde85` are superseded for behavior involving this defective constructor. Original instruction bytes and both firmware files are unchanged.

New instruction fixtures exhaust B, carry and old overflow at every immediate-ADCB instance, with a different A value. Indexed ADCA and direct ADCB also use the corrected shared carry macro consistently. The additional unit fixtures independently check normalization, Q8 products and spark timing. See [engineering derivation](UNIT_DECODING.md) and [execution report](units_variant_validation.json). Passing them is still not exhaustive certification of the inherited processor model.
