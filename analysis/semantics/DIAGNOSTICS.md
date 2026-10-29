# Dashboard diagnostic protocol and fault codes

[Area index](README.md) · [Serial link](K_LINE.md) · [Diagnostics](DIAGNOSTICS.md) · [Startup](STARTUP.md) · [Checksums](CHECKSUMS.md) · [Immobilizer](IMMOBILIZER.md) · [Verification](PROTOCOL_VERIFICATION.md)

This guide covers peer commands, diagnostic display data and fault-code packing. [Hardware and diagnostic cross-references](IO_AND_DIAGNOSTICS.md) traces the associated ADC channels and actuator outputs.

## Initial requests and menu entry

For the ordinary initial state, a synthetic execution of the byte handler verifies that `FE`, then `01`, moves from the startup state to the normal request state. This is a logical byte sequence, not a verified timing or electrical wakeup procedure. In normal state the accepted request set is `00`, `01`, `02`, and `FE`.

| Incoming byte | Recovered application meaning |
|---|---|
| `FE` | Startup announcement/handshake; also accepted in the normal request state |
| `00` | Normal request selecting reply B3 = `00` |
| `01` | Normal request selecting the coolant/display byte at `0AE8`, capped to `9F` in this path |
| `02` | Normal request selecting reply B3 = `01` |
| `CA` | Neutral/released button state |
| `CB` | Increment selection/value; consistent with the meter RESET button |
| `CC` | Decrement selection/value; consistent with the meter SELECT button |
| `CD` | Both-button/hold-confirm state |

The button identities are inferred by combining the code's increment/decrement behavior with the [manufacturer service manual, diagnostic-mode section](https://www.manualslib.com/manual/1068449/Yamaha-Xt660r-2004.html?page=350#manual). Their numeric byte assignments come from this firmware, not from the manual.

Startup `CD` sets `08A2` bit 7. A periodic counter at `BFD3–BFEF` reaches the configured threshold `4E32 = 50` and sets `08A3` bit 7. A subsequent handler call can enter menu selection (`08A0` bit 6). In that state `CB → CA` toggles the menu choice. Repeated `CD` reaches a count of `80` at `CF4C–CF58`, selecting diagnostic mode or CO mode according to that choice. These are firmware counts; assigning seconds requires scheduler/clock validation.

In diagnostic mode, `CA → CB` advances the diagnostic number and `CA → CC` decreases it, with wraparound and variant-dependent skips. Holding a button follows repeat-counter paths. The byte is a button/state command, not a direct request for the same-numbered diagnostic item.

## Diagnostic values and fault codes

The menu contains 21 entries at ROM `4EF6`, with count `15` at `4EF5`. Configuration `18D3 = 09` makes the navigation code skip indices 11 and 16: diagnostic numbers **37 and 57**. Thus the current menu has 19 selectable items.

The item names below are correlated with the [Yamaha/MBK 5VK1-AE1 service manual, pages 7-10 and 7-11](https://www.manualslib.com/manual/1068449/Yamaha-Xt660r-2004.html?page=353#manual). The manual is for 2004; these firmware IDs and sources are independently recovered. The table identifies the signal, not a fully validated conversion from serial byte to engineering units.

| Diagnostic number | Item | Reply data source or behavior |
|---|---|---|
| 01 | Throttle angle | `0AE9` |
| 03 | Intake pressure | `0AEA` |
| 05 | Intake temperature | `0AEB` |
| 06 | Coolant temperature | `0AE8` |
| 07 | Vehicle speed pulse | `0AE3`, with `FF` mapped to `FE` |
| 08 | Lean angle input | `08DD`, with `FF` mapped to `FE` |
| 09 | Fuel system voltage | `0AEC` |
| 20 | Sidestand switch | `00` or `F0` from input/state bits |
| 21 | Neutral switch | `00` or `F0`, variant dependent |
| 30 | Ignition coil test | Value byte `00`; actuation handled separately |
| 36 | Injector test | Value byte `00`; actuation handled separately |
| 37 | Other variant actuator | Present in table; skipped for variant 09; physical identity unresolved |
| 48 | Air induction test | Value byte `00`; actuation handled separately |
| 50 | Fuel injection relay | Value byte `00`; actuation handled separately |
| 51 | Fan relay | Value byte `00`; actuation handled separately |
| 52 | Headlight relay | Value byte `00`; actuation handled separately |
| 57 | Other variant actuator | Present in table; skipped for variant 09; physical identity unresolved |
| 60 | EEPROM fault detail | `6630 → 0BDF` |
| 61 | Fault history | `6672 → 0BDF` |
| 62 | History count and erase mode | `6726 → 0BDF`; mode can lead to persistent-history changes |
| 70 | Program control number | ROM `4E7C`, currently `00` |

`650B` selects the diagnostic data. `08A1` bit 5 selects whether B3 shows the diagnostic number or its value; the reply status B2 bit 6 reflects that display phase. CO paths use identifiers `C1` and `C2` and an adjustment byte at `0AED`. An invalid-command path emits B2 = `40`, B3 = `FF`, which must not be mistaken for a valid diagnostic number.

For ordinary replies, B0 comes from `0AE2`, a divided engine-period-derived quantity. B1 comes from `0AE3`, a saturating difference of counter `0AB0` between receive events. B2 combines a fault-code value with mode/status bits 6 and 7. B3 depends on the request and state. A capture should retain raw B0/B1 until clock and scaling are verified.

Diagnostic menu numbers and fault numbers are separate namespaces. The fault lookup at `4EC9` maps the four-byte bitmap as follows, in bit 7 through bit 0 order:

| Bitmap byte | Fault numbers in decimal |
|---|---|
| `08AF` | 11, 12, 13, 14, 15, 16, 19, 20 |
| `08B0` | 21, 22, 23, 24, 30, 31, 32, 0 |
| `08B1` | 33, 34, 37, 41, 42, 43, 44, 46 |
| `08B2` | 50, 0, 0, 0, 0, 0, 0, 0 |

Zero entries are unmapped/reserved. Persistent/history bitmaps are accumulated separately at `08B8–08BB`. For example, diagnostic item 30 selects an actuator test; fault number 30 is not that request.

## Evidence

Addresses apply to the supplied image (SHA-256 `5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280`); CPU addresses equal file offsets. Addresses are hexadecimal; diagnostic menu numbers are decimal unless prefixed with `0x`.

See [byte-backed protocol excerpts](protocol_evidence.tsv) and [verification and reproduction](PROTOCOL_VERIFICATION.md).
