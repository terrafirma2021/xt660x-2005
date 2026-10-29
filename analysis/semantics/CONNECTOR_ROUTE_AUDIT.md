# Connector route audit: starter, interlocks, supply and serial line

This pass follows the four earlier candidate associations and rechecks the adjacent neutral assignment. It adds **10,344 instruction-fixture cases**, strengthens two function correlations, and withdraws a previously overconfident interlock wire pair. It does not measure any PCB continuity. Connector coordinates remain the [manual drawing positions](ECU_CONNECTOR.md), not OEM cavity numbers.

| Drawing position | Circuit | Result |
|---|---|---|
| U01 / L/W | Starter-relay network | PB1's software behavior is now tested; the external association remains a candidate |
| U02 / Y/L | Meter / immobilizer signal | Function corroborated by the manual's explicit signal-lead check and recovered SCI1 exchange |
| L01 / B/Y | Starting-permission relay network | Previous fixed PB0 association withdrawn; PB0/PB4 are unresolved alternatives |
| L02 / L/B | Interlock network | Previous fixed PB4 association withdrawn; overlapping manual references do not establish a unique MCU route |
| L11 / R/L | Fuel-system supply monitor | Function corroborated by the fault-43 wiring procedure and ATD4 diagnostic/fault path |

The resulting inventory has 15 function-correlated circuits, one candidate starter association, two unresolved interlock alternatives, five power/return networks and three crosses. The two alternative entries do **not** assert that one terminal joins both PB0 and PB4.

## Starter-request software: PB1

PORTB is filtered at `0x8B45–0x8B57` into RAM `0x0896`. The block at `0xCBEF–0xCC2F` uses bit 1:

| Configuration / input | Qualification | Result |
|---|---|---|
| Variant 9, PB1 low | Four successive active calls | Set `0x0880` bit 0 |
| Variant 9, PB1 high | Six successive inactive calls | Clear `0x0880` bit 0 |
| Other variants | Same counters, opposite PB1 polarity | Same output state |

ROM `0x18D4 = 4` and `0x18D5 = 6` provide those limits. The active/inactive counters are `0x0B05/0x0B06`; each path clears the opposite counter and saturates its own at 255. These are routine calls after the initial input filter, not a claim of four/six milliseconds. An interrupted three-call active run does not satisfy the four-call requirement.

Consumers make the starter interpretation stronger:

- `0x9DC0–0x9DCA` clears the PP4 headlight command while this state is set, and sets it when clear in this block.
- `0x9DCD–0x9DFD` combines the state with faults 12, 19, 30 (unless configured out), 41, 50 and a supply-related latch to set `0x0884` bit 5. The dashboard reply path at `0x63C5` consumes that warning state.
- The Yamaha manual's printed page 7-3 describes start-switch-dependent warning behavior for faults 12, 19, 30, 41 and 50. This matches a specific group of consumers, rather than just a name guessed from a waveform.
- `0x8B8D` also uses the state to qualify fault 19.

The L/W terminal in the drawing joins the starter/cut-off relay network, which supports its association with this software input. The actual conditioning route to PB1 remains unverified, so **U01 → PB1 stays a candidate**. No undocumented direct voltage-to-MCU connection is asserted.

## Interlock audit: PB0 and PB4 are known functions, not a proven wire pair

Diagnostic 20 reads filtered PB0 (`0x6583`); diagnostic 21 reads filtered PB4 for variant 9 (`0x65A0`). Low yields payload byte `0x00`, high `0xF0`; other variants substitute `0xF0` for diagnostic 21. This test stops before common packing and does not assume the dashboard's ON/OFF rendering.

The additional PB0 debounce at `0xCC30–0xCC62` sets or clears `0x088C` bit 7 after 15 matching calls (ROM `0x4BFD`). Fault 19's block at `0x8B6F–0x8BE8` uses PB0 high together with the starter state, a speed-code-high-byte threshold of 2 and an armed qualification state. It sets the fault only when the pre-existing counter is **greater than** 10, not equal to 10. Diagnostic operation, the configuration bypass and memory-fault conditions gate the block. Tests cover the normal qualification boundaries; they do not simulate every scheduler increment or physical switch transient.

The external evidence does not support the earlier fixed pair:

| Evidence | What it says |
|---|---|
| Manual printed 7-15 / PDF 358, fault 19 | Identifies the ECU **L/B** lead and diagnostic 20 for the sidestand-input fault |
| Manual printed 7-19 / PDF 362, fault 42 | Includes **relay L/Y → ECU L/B** in the neutral-switch checks |
| Wiring diagram PDF 462 | Shows ECU B/Y and L/B entering different points of a relay/diode network involving neutral, clutch and sidestand paths |
| Starting-system description, printed 8-18 / PDF 400 | Starter permission is neutral, or clutch pulled with sidestand retracted |

The fault-19 description is also repeated in the 2007 supplement, but that later variant is only a cross-check, not a replacement pinout for the supplied ECU. Shared diode paths can make a terminal relevant to more than one switch test; these overlapping references are not by themselves proof of a manual error.

Therefore the old **B/Y → PB0** and **L/B → PB4** physical pairing is withdrawn. The former candidate was too specific, and the latter was incorrectly marked corroborated from the fault-42 prose alone. The source-backed facts retained are both connector positions, their relay-network connections, and the separate diagnostic identities of PB0/PB4. Both entries now list unresolved alternatives explicitly. A matching board schematic or continuity/controlled input evidence is needed to settle the pair, rather than assigning the remaining pin by elimination.

## Supply monitor: R/L, ATD4 and fault 43

The manual's fault-43 procedure (printed 7-20 / PDF 363) specifically checks **R/L between the injection relay and ECU**, alongside diagnostic 09 and relay test 50. This supplies independent external evidence for the ATD4 monitor function.

The handler at `0x6C5E` stores the sample high byte in `0x0BCE`. Its diagnostic byte is `min(floor(sample × 256 / 240), 254)` at `0x0AEC`, selected by diagnostic 09 at `0x6577`. The supply-state logic compares the raw byte with **38** and establishes `0x0888` bit 1 after repeated same-side samples. The fixture begins from cleared state and runs two samples for every possible high byte. No measured voltage threshold is inferred from this raw code.

Fault 43 (`0x08B1` bit 2) compares that state with PA2 (`0x0000` bit 2):

| PA2 command | Supply-present flag | Fault qualification in the tested normal branch |
|---|---|---|
| High | Present | Consistent |
| Low | Absent | Consistent |
| High | Absent | Missing-supply branch, counter `0x0B48 > ROM 0x4E59` (stock 30) |
| Low | Present | Unexpected-supply branch, counter `0x0B49 > 0x0D8A` (stock 10) |

The branches have their own armed states. Tests seed those states and counters to check boundaries; these values are not asserted delay times in milliseconds. When fault 43 is active, `0x6EC5` substitutes raw **154** for effective supply `0x08D9`; otherwise it takes the measured high byte. This links the ADC channel, reported quantity, command feedback and fail-safe state.

The previous relay description “diagnostic activation clears the MCU bit” was misleading. Normal prime code at `0xACD9` **sets PA2**, while inhibit/stop code at `0xACE6` clears it. Diagnostic 50 clears PA2 at `0xBB23`, then sets it at `0xBB41`. The feedback logic expects supply present when PA2 is high. These are MCU-side commands; the power driver can invert the signal before the relay coil. The driver part and divider/resistor values are still untraced.

This supports **L11 / R/L → fuel-system monitor → ATD4/PAD4** at the same function-correlation level as the other sensor mappings. It is not a claim that the supply wire directly touches the MCU ADC pad.

## Communication: Y/L and SCI1

Printed page 8-62 / PDF 444 explicitly calls out the **Y/L signal lead between immobilizer and ECU**. The full wiring diagram joins the meter on this line. The recovered application exchanges dashboard and authentication bytes through SCI1, with receive handling at `0xCDC0` and reply transmission at `0xCCA9`; see the [serial trace](K_LINE.md) and existing [protocol validation](PROTOCOL_VERIFICATION.md).

This supports the U02 circuit's functional association with SCI1 RX/TX, conditionally package pins 69/70. It does not identify an ISO protocol, prove a particular transceiver, or assert that the external line is directly wired to both MCU pins. External voltage, drive topology and actual waveform remain unknown. No new serial physical-layer test was performed in this pass.

## Reproduction and sources

Run `python scripts/test_connector_paths.py /path/to/libxt660_full.so` against the existing compiled instruction translation. The [validation report](connector_path_validation.json) records firmware, test-script and library hashes. It contains 10,344 synthetic instruction cases; none is a hardware measurement. The [connector catalogue](mcu_pin_overview.json) and [source assignments](../../scripts/ecu_connector.py) keep the association levels explicit.

Manual evidence: [Yamaha XT660R/X 5VK1-AE1](https://scootertuub.nl/motoren/Yamaha/Yamaha%20XT%20660%20R%20X%202004%20Service%20Manual%20%20.pdf), PDF pages 346, 358, 362, 363, 400, 444 and 462. Secondary year cross-check only: [Yamaha 2007 supplement](https://scootertuub.nl/motoren/Yamaha/Yamaha%20XT%20660%20X%202007%20workshop%20manual%20.pdf), fault-19 table. Firmware evidence: [disassembly](../disassembly.tsv), [fixture source](../../scripts/test_connector_paths.py).
