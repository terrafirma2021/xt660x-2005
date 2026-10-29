# Serial communication and K-line identification

[Area index](README.md) · [Serial link](K_LINE.md) · [Diagnostics](DIAGNOSTICS.md) · [Startup](STARTUP.md) · [Checksums](CHECKSUMS.md) · [Immobilizer](IMMOBILIZER.md) · [Verification](PROTOCOL_VERIFICATION.md)

The recovered application uses SCI1 for a byte-oriented request/reply link. The [connector route audit](CONNECTOR_ROUTE_AUDIT.md) now correlates this function with the manual's Y/L meter/immobilizer signal lead, drawing position U02. Calling the electrical interface K-line still requires board/waveform evidence: line voltage, transceiver and ISO compliance are not established.

| Address or routine | Decoded role |
|---|---|
| `00D0–00D1` | SCI1 baud divisor, set to `0040` at `506E–5071` |
| `00D2` | SCI1 control register 1; this application does not explicitly establish its complete framing configuration |
| `00D3` | SCI1 control register 2 |
| `00D4` | SCI1 status register 1 |
| `00D7` | SCI1 data byte |
| `F7B6 → CDC0` | Supplied serial interrupt dispatch stub and receive handler |
| `F7EA → CCA9 → CCB0` | Supplied periodic interrupt stub and reply transmitter |
| `00D8–00DD` | SPI peripheral used for separate persistent-storage transactions |

The register identification and baud formula follow the [NXP MC9S12T64 specification, SCI section](https://www.nxp.com/docs/en/data-sheet/9S12T64AF16V1.pdf#page=424): baud is `bus_clock / (16 × divisor)`. Here that is `bus_clock / 1024`; a 16 MHz bus would give **15,625 baud**. The actual bus clock and inherited framing configuration need confirmation. Eight data bits, no parity and one stop bit is consistent with the peripheral reset defaults, but the missing boot region prevents treating that as a verified complete startup configuration.

At `5073–5075`, control value `24` enables reception and receive interrupts. After accepting a byte, `CE3E–CE40` writes `08`, enabling transmission while disabling reception. After the reply, `CDBB–CDBD` writes `26`, returning to receive/wakeup operation. The transmitter checks data-empty and transmission-complete flags between reply bytes. This is a request/reply flow, not a continuous arbitrary-length packet parser.

The recovered application does not establish an ISO 9141 five-baud initialization or a KWP fast-init sequence. Do not substitute generic `33`, `55`, `81`, `27`, or `3E` conventions for the meanings below. Other protocol code could exist in the unavailable boot region or the instrument/immobilizer units.

## Packet layout

The application accepts individual peer bytes and emits a five-byte ECU reply from RAM `08A6–08AA`: four payload bytes followed by an additive checksum. There is no separate received checksum in the recovered single-byte handlers. See [checksum arithmetic and examples](CHECKSUMS.md).

Payload interpretation depends on whether the dispatcher selects [normal/dashboard diagnostics](DIAGNOSTICS.md) or [immobilizer authentication](IMMOBILIZER.md). Capture direction and frame boundaries must be known before interpreting a stream; a matching byte value alone does not identify a standard automotive service.

For passive decoding and ROM inspection, use [the offline decoder](../../scripts/xt660_protocol_decode.py); examples and limitations are in [protocol verification](PROTOCOL_VERIFICATION.md#offline-decoder).

## Evidence

Addresses apply to the supplied image (SHA-256 `5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280`); CPU addresses equal file offsets. Addresses are hexadecimal; diagnostic menu numbers are decimal unless prefixed with `0x`.

See [byte-backed protocol excerpts](protocol_evidence.tsv) and [verification and reproduction](PROTOCOL_VERIFICATION.md).
