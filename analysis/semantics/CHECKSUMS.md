# Serial and ROM checksums

[Area index](README.md) · [Serial link](K_LINE.md) · [Diagnostics](DIAGNOSTICS.md) · [Startup](STARTUP.md) · [Checksums](CHECKSUMS.md) · [Immobilizer](IMMOBILIZER.md) · [Verification](PROTOCOL_VERIFICATION.md)

Every recovered application reply is emitted from RAM in this order:

```text
08A6  08A7  08A8  08A9  08AA
 B0    B1    B2    B3     CS

CS = (B0 + B1 + B2 + B3) & 0xFF
```

`6486–6492` stores B3 and adds all four bytes. `CCB0–CDBF` sends the five bytes. There is no separate received checksum in these single-byte request handlers. UART error checks occur in `CDC0` before dispatch.

Examples:

```text
47 47 47 47 1C     0x47 * 4 modulo 256 = 0x1C
13 7C 43 47 19     0x13 + 0x7C + 0x43 + 0x47 = 0x119
```

The ROM checksum is a different operation. `5358–535B` passes endpoint `F7FF` to `A489`. That routine adds big-endian 16-bit words from `1800` through `F7FE`, modulo 65536, and compares the result with `AA55`. It stores the computed sum at RAM `0E66`. The supplied bytes yield `AAD5`. The error-reporting configuration copied from `4E7A` is `00`, so the `80` sentinel does not suppress this checksum error path. Whether that fault is displayed or affects a real ECU also depends on runtime state.

A separate conditional caller at `A2DE–A2E1` requests endpoint `FFFF`. That covers boot storage as well, whose actual contents are unavailable here. `F7FE–F7FF = 5A A5` is a trailer marker included in the boot-time sum; its presence does not make the checksum valid. The [owner-confirmed immobilizer patch](IMMOBILIZER.md#effect-of-the-immobilizer-patch) explains the checksum delta if it was the only modification. No separate correction location has been established, and no correction was made.

## Evidence

Addresses apply to the supplied image (SHA-256 `5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280`); CPU addresses equal file offsets. Addresses are hexadecimal; diagnostic menu numbers are decimal unless prefixed with `0x`.

See [byte-backed protocol excerpts](protocol_evidence.tsv) and [verification and reproduction](PROTOCOL_VERIFICATION.md).
