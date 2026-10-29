# Checksum correction

The [corrected image](../../firmware/XT660X%202005%20startup-checksum-fixed.bin) passes the recovered startup checksum routine in the compiled instruction translation. The original dump is preserved separately. The correction is reproducible with `python scripts/fix_startup_checksum.py`; exact bytes and hashes are in [checksum_fix.json](checksum_fix.json).

## Algorithm and evidence

The startup caller at `0x5358–0x535B` passes `D = 0xF7FF` to routine `0xA489`. The routine starts at `0x1800`, adds big-endian 16-bit words modulo 65536, advances the pointer by two, and continues while the pointer is at or below the supplied limit. It compares the result with `0xAA55`, stores the actual sum at RAM `0x0E66`, and updates port `0x00F0` bit `0x80` and failure state `0x08B2` bit `0x80`. Calls to `0x5FA4` service the watchdog and preserve D; they do not return the checksum boundary.

| Image | Range, inclusive | Sum | Startup result |
|---|---|---|---|
| Original | `0x1800–0xF7FF` | `0xAAD5` | Fails comparison |
| Corrected copy | `0x1800–0xF7FF` | `0xAA55` | Passes comparison |

## Exact change

The compensation word at `0xF7FC` changes from `0xFFFF` to `0xFF7F`. Only byte **`0xF7FD: FF → 7F`** differs. This subtracts `0x0080` from the sum. All calibration bytes, decoded application instructions, the terminal `0x5AA5` marker, and the `0xF800–0xFFFF` FF boot placeholder remain unchanged.

This word is **analyst-selected trailer padding**, not a positively identified manufacturer checksum field. It lies outside decoded instructions and has no static reference in the recovered application. Absent boot code cannot be checked for additional dependencies. The fix is an arithmetic correction verified against the supplied application; it is not evidence of hardware or flash-programmer compatibility.

Corrected SHA-256: `972ac93e76cb632470092d88c2a57e910daae69c02d6cdef52f1cad72f6909e7`.

## Alternate full-address-space check

The mode-dependent caller at `0xA2DE` supplies `0xFFFF`, including the missing boot region. The original placeholder-filled file sums to `0xA6D5` over this range; the startup-corrected copy sums to `0xA655`. That alternate range is not repaired by fabricating boot data. Its behavior on hardware depends on the actual missing contents.

## Verification

[Extended map validation](extended_map_validation.json) executes the checksum routine with both original ranges, synthetic success fixtures, and the actual delivered corrected file. It checks the stored sum and the success/failure bits. The correction script also asserts the original identity, verifies no overlap with decoded instructions/static targets, and proves that the delivered diff is confined to the compensation word.
