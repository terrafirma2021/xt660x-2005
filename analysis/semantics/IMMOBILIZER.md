# Immobilizer patch and authentication

[Area index](README.md) · [Serial link](K_LINE.md) · [Diagnostics](DIAGNOSTICS.md) · [Startup](STARTUP.md) · [Checksums](CHECKSUMS.md) · [Immobilizer](IMMOBILIZER.md) · [Verification](PROTOCOL_VERIFICATION.md)

The owner confirms that the supplied image was patched to skip immobilizer checking and recalls a `00 → 80` change. The observed configuration at `4E7D` is `80`. Testing only that byte as `00` in interpreter memory restores the expected ROM checksum `AA55`; the supplied patched image produces `AAD5`. This strongly supports the recalled single-byte change, but an original binary would be needed to prove there were no other modifications. That simulation did not change a firmware file. A separate [checksum-corrected copy](CHECKSUM.md) now compensates the sum while preserving the supplied immobilizer setting.

## Effect of the immobilizer patch

The observed change selects a configuration sentinel. It does not remove the authentication instructions. At `61DE`, ROM `4E7D` is copied into RAM `0DD5`, which several routines compare against `80`.

| Location | Behavior when configuration is `80` |
|---|---|
| `534A–5355` | Skips initial authentication inhibit setup and the stored-registration initialization call at `5EF1` |
| `CE2A–CE3B` | Routes received bytes directly to normal/dashboard handler `CE51` |
| `A9AF–AA51` | Skips the arithmetic challenge-response comparison |
| `AA51–AAB1` | Skips received-registration validation in this path |
| `9E9E–9EEE` | Skips authentication-progress counters and their related inhibit decision |
| `BFF3–C05A` | Skips authentication communication timeout handling |
| `EBC6–EBFD` | Skips another authentication-dependent inhibit calculation |

With configuration `00`, the receiver instead calls `D36C` until authentication completion sets RAM `0D06` bit 7; it then switches to `CE51`. Both dispatch cases were checked in the instruction interpreter. This establishes the logical difference between the patched configuration and the candidate pre-patch configuration without changing any firmware file.

The checksum effect is exact: `4E7D` is the low byte of the big-endian word at `4E7C`. Changing it from `00` to `80` adds `0080` to the 16-bit word sum: `AA55 + 0080 = AAD5`. The checksum routine still runs after the skipped initialization. Thus the earlier checksum finding is consistent with the owner's intentional patch, rather than evidence that the supplied file suffered an unexplained read error. It does not establish whether the physical ECU exposes or enforces that fault.

## Authentication and registration exchange

This code exists in `D36C–D6A2`, but **is not selected by the current `4E7D = 80` configuration**. At `CE2A–CE3B`, the receiver routes to `CE51` when `0DD5 == 80` or `0D06` bit 7 is set. Otherwise it routes to `D36C`. The following is a decode of that alternate path, not a claim that the current image performs it on power-on.

The owner's patch history makes this the relevant path for reconstructing the pre-patch behavior. The logic remains available for instruction-level analysis; the external immobilizer and instrument firmware are still absent.

| Peer byte | Meaning in the authentication handler |
|---|---|
| `3E` | Reset exchange state, sample timer low byte, generate challenge |
| `3D` | Advance to registration-status stage |
| `80–BF`, three bytes | Six payload bits per byte; buffers a challenge response |
| `40–7F`, nine bytes | Registration/enrollment data, accepted only in the relevant unregistered state |
| `3F` | Poll verification/persistence/completion state |
| `33–37` | Error/status class; accepted handling depends on state |
| `FE`, `01`, `02`, `05` | Fallback/startup handling in this context |

The same `3E` value here is not evidence of the standard diagnostic TesterPresent service.

The challenge uses the timer byte read at `0045`. With all three results truncated to eight bits:

```text
a = (19 × timer_low + 19) & 255
b = (19 × a         + 19) & 255
c = (19 × b         + 19) & 255

ECU reply = a b 43 c checksum
```

The arithmetic check at `A9C4–AA4D` decodes three received chunks and compares:

```text
received = ((r0 & 63) << 12) | ((r1 & 63) << 6) | (r2 & 63)
expected = a*b + b*c + c*a
```

The maximum possible expected value is 195,075, fitting in 18 bits. This check is arithmetic; no secret key is an input to this particular comparison. For a synthetic timer byte `00`, the challenge is `13 7C 43 47 19`, the arithmetic result is 12,509, and captured response chunks `83 83 9D` encode that result. This does not by itself establish completion of all state/registration checks.

| Five-byte ECU reply | State meaning recovered from code |
|---|---|
| `a b 43 c CS` | Challenge |
| `k0 k1 4B k2 CS` | Stored three-byte registration record |
| `4A 4A 4A 4A 28` | No registered record selected |
| `47 47 47 47 1C` | A response chunk was buffered; not proof of authentication success |
| `49 49 49 49 24` | Enrollment chunk buffered, or verification/storage still pending |
| `45 45 45 45 14` | Successful completion polling |
| `46 46 46 46 18` | Arithmetic verification failed |
| `44 44 44 44 10` | Poll outside the accepted completion stage/window |
| `00 00 48 00 48` | Startup/session fallback |
| `00 00 38 00 38` | Sequence failure/reset |
| `00 00 xx 00 xx`, `xx = 33–37` | Echo of the accepted error/status byte |

After the three response chunks, the main-loop check sets `0D08` bit 4 for equality and bit 5 when the check has run. Completion polling checks these flags and any pending registration work. On its fourth successful completion count, `D4B3` sets `0D06` bit 7, after which dispatch changes to the normal handler.

The following complete registered-record case was verified in synthetic memory with timer byte `00` and an invented stored record `41 42 43`. These record bytes are test data, not the motorcycle's keys:

```text
Peer → ECU       ECU → peer
3E               13 7C 43 47 19     challenge
3D               41 42 4B 43 11     synthetic stored record
83               47 47 47 47 1C     first response chunk
83               47 47 47 47 1C     second response chunk
9D               47 47 47 47 1C     third response chunk
                 [main-loop arithmetic check runs]
3F               45 45 45 45 14     completion count 1
3F               45 45 45 45 14     completion count 2
3F               45 45 45 45 14     completion count 3
3F               45 45 45 45 14     count 4; completion flag set
```

Changing the final response chunk from `9D` to `9C` makes the next poll return `46 46 46 46 18`; the completion flag remains clear. This tests the complete registered-record logical exchange, including rejection. It does not validate the real peer's identity checks, capture timing, or physical key recognition. In particular, the ECU's arithmetic check is not a decode of the transponder's own authentication algorithm.

## Exhaustive seed and replay simulation

Run date: 2026-10-29; tested against repository baseline `72fc171536914363f4030bcd4ca3d7ce4ba09038`.

The recovered ECU application accepts a response calculated from its transmitted challenge for every possible value of the sampled timer byte. Repeating one fixed response does not work across all challenges. This supports a possible explanation for consistent emulator operation: calculating the response for each exchange requires no secret input in the particular ECU-side check tested here. It does not identify how any commercial emulator is implemented.

### Results

| Experiment | Successful / tested | Meaning |
|---|---:|---|
| Fresh response calculated from the transmitted challenge | 256 / 256 | Authentication completion flag set for every timer seed |
| Same fixed response reused for all seeds | 1 / 256 | Replay succeeds only for a matching challenge in this experiment |
| Correct response with its lowest bit flipped | 0 / 256 | Arithmetic validation rejects the corruption |
| Fresh response, omitting the registration-status command | 0 / 256 | Sequence/state requirements still apply |
| Four different synthetic stored-record payloads, all seeds | 1,024 / 1,024 | These payload bytes are unnecessary to the response calculator under the assumed registered state |
| Every generated response against every generated challenge | 258 / 65,536 | Arithmetic-check matrix only; includes 256 matching-seed cases and two cross-seed cases |

There are 256 distinct challenge frames but 255 distinct expected responses. Seeds 68 and 180 share a response; the matrix therefore contains two cross-seed acceptances. Among the generated responses, a single fixed response matches at most two of the 256 seeds. These counts do not establish the real distribution of timer values at power-on.

### Method

The harness interprets recovered CPU12 instructions from the repository's disassembly. It verifies the listed instruction bytes against the supplied firmware, then exercises the receive dispatcher at `CDC0`, transmit routine at `CCB0`, and response-check path at `A9AF–AA51`. The interpreter implements the selected instruction subset; this is not a full silicon or peripheral emulator. Byte agreement does not independently validate every disassembler or interpreter semantic.

The peer initiates the tested application exchange. The ECU returns the challenge, and the synthetic peer calculates its response using only the transmitted challenge frame. Successful sessions set the ECU's authentication-completion flag on the fourth successful completion poll. All emitted five-byte reply checksums were checked. Corrupt-response sessions never set completion.

The uploaded firmware contains the bypass setting. The harness restores the candidate pre-patch setting `4E7D=00` and its RAM copy only in simulated memory, so the authentication handler and comparison execute. The resulting simulated startup checksum is `AA55`. The original pre-patch binary was not supplied; this configuration follows the user's recollection of a single `00 → 80` modification. The firmware file on disk remained unchanged.

### Limits

- A valid registered-record state is supplied in RAM. Real external-storage initialization, enrollment, and record validity are not tested.
- UART readiness is supplied synthetically. Electrical levels, baud rate, delays, interrupts, timeout scheduling, and real power-on behavior are not established.
- The main-loop response check is invoked at the appropriate modeled stage; the entire firmware is not run continuously from reset. Watchdog servicing is stubbed.
- The physical key/transponder-to-immobilizer exchange is outside this model and may use separate secrets.
- Authentication completion in this application path does not demonstrate a physical engine start or exclude other enable conditions.

Thus, the evidence supports **a challenge-dependent ECU-facing calculation without a secret input in this checked path**. A fixed opening command alone says nothing about security, and a fixed response is not universally accepted. Hardware traces would be needed to validate the modeled sequence and timing on a real unpatched ECU.

### Reproduce

From the repository root with Python 3:

```sh
python scripts/simulate_immo_exchange.py .
```

Keep assertions enabled; do not use Python `-O`. The [simulation harness](../../scripts/simulate_immo_exchange.py) uses the existing selected-path interpreter and writes [machine-readable results](immo_simulation_results.json), including source hashes, experiment counts, eight sample traces, and accepted replay pairs. An optional `--out PATH` selects another results file. Firmware is read only.

## Stored keys and markers

Three different concepts should not be confused:

1. `CA–CD` describe dashboard button states.
2. The arithmetic exchange above uses a generated challenge; it has no recovered secret-key parameter.
3. A three-byte registration record is read through SPI from storage outside this 64 KiB dump. Its bytes cannot be recovered from the supplied firmware alone.

`5E63` uses encoded read command words `0C50–0C5A`, issued through `57B4`. The nine record bytes are loaded at `0D1A–0D22`; the two marker bytes go to `0D23–0D24`. The code tests marker `5A A5`. These are encoded device command words, not proof that the external chip is mapped into CPU memory at those addresses.

The nine-byte record contains three copies of three bytes. `5F35` compares copies and produces the selected record at `0D37–0D39`. Its third-byte minority-copy path has an unusual backward branch at `5F8E → 5F78`; it must not be casually rewritten as a clean majority-vote function. Invalid/default paths also use sentinel records. These values are not identified physical transponder secrets.

The enrollment handler buffers nine bytes at `0D28–0D30`. `AA62–AA7A` checks that the three copies match; after the arithmetic check succeeds, the persistence worker at `B7B9` writes those nine bytes plus marker `5A A5`, using command words based at `0A50`. The actual external memory chip and key-to-immobilizer radio protocol remain unidentified.

Other constants have separate roles: `AA55` is the ROM checksum target, `A55A` gates a special execution/communications state via RAM/registers `0020/0024`, and `5AA5` is used as a stored/trailer marker. They are not interchangeable passwords or KWP initialization keywords.

## Evidence

Addresses apply to the supplied image (SHA-256 `5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280`); CPU addresses equal file offsets. Addresses are hexadecimal; diagnostic menu numbers are decimal unless prefixed with `0x`.

See [byte-backed protocol excerpts](protocol_evidence.tsv) and [verification and reproduction](PROTOCOL_VERIFICATION.md).
