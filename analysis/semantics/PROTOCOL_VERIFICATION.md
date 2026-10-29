# Protocol verification and reproduction

[Area index](README.md) · [Serial link](K_LINE.md) · [Diagnostics](DIAGNOSTICS.md) · [Startup](STARTUP.md) · [Checksums](CHECKSUMS.md) · [Immobilizer](IMMOBILIZER.md) · [Verification](PROTOCOL_VERIFICATION.md)

The protocol analysis was first developed against `042796c`, then rechecked against `1779f6e5f4a6ff2b8c8bd07e8ab47f67233f50f6`, the current code-analysis baseline when these guides were integrated. The firmware hash is unchanged. The checks operate on byte-backed assembly, independently of the generated C's calling-convention presentation.

## Verification coverage

The [verification results](protocol_verification.json) come from [a selected-path CPU12 interpreter](../../scripts/verify_protocol.py). It checks decoded instruction bytes against the ROM, then exercises:

- The startup ROM sum, including the `AAD5` mismatch in the supplied patched image.
- 4,096 synthetic payload checks for the five-byte reply checksum.
- Challenge generation for all 256 timer-byte seeds and 512 valid/corrupted arithmetic responses.
- Authentication buffering, normal `FE → 01` state transition, and diagnostic up/down navigation.
- The candidate pre-patch configuration in private interpreter memory, which restores sum `AA55`.
- Patched/pre-patch receive dispatch and complete valid/invalid registered-record authentication exchanges.

These checks supply synthetic RAM and registers. They do not emulate a whole ECU, external storage, interrupt timing, hardware waveforms, or a physical ignition key. The interpreter implements the instructions needed by these fixtures and fails on unsupported instructions.

## Current and historical C limitations

The earlier `042796c` structured C inverted an authentication-routing condition. The repository has since fixed BRSET semantics and regenerated that C; see [the semantic review notes](REVIEW_NOTES.md). The obsolete routing expression is not treated as a current defect here.

The structured `62AA` routine in the `1779f6e` baseline still assigns `08A9 = 0` and omits B3 from the displayed checksum expression. Assembly `6486–648F` instead stores the live A register and adds all four payload bytes. Follow the instruction evidence for this register-heavy path. Translation consistency tests do not by themselves prove that inferred high-level function interfaces preserve the protocol meaning.

## Reproduce

From the repository root, with Python 3 and no external packages:

```sh
python scripts/verify_protocol.py
python scripts/xt660_protocol_decode.py rom "firmware/XT660X 2005.bin"
```

The verifier defaults to this repository and writes `analysis/semantics/protocol_verification.json`. Optional positional arguments select another repository and result path. The firmware input remains read only, including during the candidate pre-patch test.

## Offline decoder

[The offline decoder](../../scripts/xt660_protocol_decode.py) uses only Python's standard library. Supply known frame boundaries and direction from a capture. It decodes replies and peer bytes, validates captured challenge arithmetic, inspects repeated storage records, and checks the ROM sum/configuration. It performs no hardware communication or firmware modification.

```text
python scripts/xt660_protocol_decode.py ecu "13 7c 43 47 19" --mode auth
python scripts/xt660_protocol_decode.py peer "fe 01 ca cb cc cd"
python scripts/xt660_protocol_decode.py response "83 83 9d" --challenge "13 7c 43 47 19"
python scripts/xt660_protocol_decode.py ecu "00 00 00 19 19" --mode diag --diag-id 6
python scripts/xt660_protocol_decode.py rom "firmware/XT660X 2005.bin"
```

[protocol_evidence.tsv](protocol_evidence.tsv) contains the relevant instruction ranges and original bytes. For complete context, consult the [repository disassembly](../disassembly.tsv). All example captures above are synthetic, not recordings from the motorcycle.

## Remaining evidence

Physical K-line identification, bus clock/baud, reset-time wakeup, missing boot services, exact timing, stored vehicle-specific registration bytes, transponder cryptography, and display scaling are not fully established. A timestamped bidirectional capture and external-memory read would resolve several of these gaps. [Existing control-system guides](README.md) provide the separately traced sensor conversions and logical output identities.
