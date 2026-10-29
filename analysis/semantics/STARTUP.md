# Power on and application initialization

[Area index](README.md) · [Serial link](K_LINE.md) · [Diagnostics](DIAGNOSTICS.md) · [Startup](STARTUP.md) · [Checksums](CHECKSUMS.md) · [Immobilizer](IMMOBILIZER.md) · [Verification](PROTOCOL_VERIFICATION.md)

The supplied application entry at `F7A0` jumps to `5000`. The normal hardware reset vectors and `F800–FFFF` are all `FF` in this file, so the path from physical reset to this entry cannot be reconstructed.

The application configures GPIO, timers, SCI1 and SPI, copies calibration into runtime variables, initializes sensor/state fields, loads persistent settings, performs the ROM checksum, enables interrupts, and enters its main loop. Relevant serial state writes include `08A0 |= 80` and `08AE |= 40` at `5200–5204`.

## Initial communication state

With the supplied configuration, the receive dispatcher enters the normal/dashboard handler. In an ordinary synthetic initial state, `FE → 01` transitions to normal requests. This establishes a logical handler sequence, not electrical wakeup timing. [Diagnostic initialization and buttons](DIAGNOSTICS.md#initial-requests-and-menu-entry) describes the subsequent state transitions.

The owner confirms that the image was patched to skip immobilizer checking. Configuration `4E7D = 80` skips the stored-registration initialization call and routes directly to normal communications. With candidate pre-patch configuration `00`, the [authentication exchange](IMMOBILIZER.md#authentication-and-registration-exchange) precedes that route.

## Integrity and unavailable boot code

Initialization still calls the [ROM checksum routine](CHECKSUMS.md) after the skipped immobilizer initialization. Its mismatch in the supplied file is exactly consistent with the recalled `00 → 80` change. The main loop also calls `F8A0`, inside the absent boot region. Physical reset, inherited clock/framing configuration, and any boot-level protocol remain unresolved.

## Evidence

Addresses apply to the supplied image (SHA-256 `5a781c2dbc67950fcba6ab3d30ba56b884d4247f66f76d143923db8547f31280`); CPU addresses equal file offsets. Addresses are hexadecimal; diagnostic menu numbers are decimal unless prefixed with `0x`.

See [byte-backed protocol excerpts](protocol_evidence.tsv) and [verification and reproduction](PROTOCOL_VERIFICATION.md).
