# Preparing an XDF or custom tool

The deliverable now is an evidence model that either kind of tool can consume. It deliberately separates **byte layout**, **software behavior**, **physical interpretation**, and **validated editing**.

## Definition fields

[catalog.json](catalog.json) contains exact offsets, widths, counts, byte order, stock bytes, descriptions and instruction references for 28 scalar/curve items. It also describes ADC and output identities. Existing [maps.json](../maps.json) and [axes.json](../axes.json) supply grid layouts and values.

| Field needed by an editor | Current state |
|---|---|
| Exact binary identity and length | Known: SHA-256 and 65,536 bytes |
| CPU-address/file-offset translation | Flat for this dump; identity mapping |
| Scalar width, endianness, unsigned/signed encoding | Recorded for the focused catalogue |
| Cell address, dimensions and axis storage | Existing map atlas, plus new sensor curves |
| Runtime selector / variant / alternate calibration | Documented where traced; incomplete globally |
| Conversion to Celsius, RPM, degrees, milliseconds, pressure | Intentionally null until verified |
| Reverse conversion and rounding policy | Not defined for engineering units |
| Valid physical adjustment ranges | Not inferred from the limits of a byte or word |
| Checksum algorithm and covered ranges | [ROM and serial algorithms](CHECKSUMS.md) recovered; [startup-corrected copy](CHECKSUM.md) tested. Factory correction field, absent boot content and flash workflow remain unvalidated. |
| Flash format, programming procedure, boot requirements | Unresolved; supplied boot region absent |

`ready_for_tuning_export` is false for every current entry. This does not mean the offsets are guesses. It means the whole definition is not yet validated for engineering-unit edits and flash use.

## Important encoding details

- Fan set/clear thresholds use strict comparisons. A displayed “fan on” value must account for the fact that an internal value equal to the upper parameter does not switch it on.
- Period-based RPM cuts run in the inverse direction: higher speed means lower period. Their resume comparisons differ between the main and conditional limits.
- The temperature conversion has an implicit axis and a three-byte pointer bias; data start is not the loaded pointer.
- A timer request is not necessarily the same unit as a source map cell.
- A byte-wide MCU output register is not a calibration. RAM state should be observable in a future logger, not exposed as an editable ROM table.
- The secondary channel is disabled by the stock variant. Merely finding a second table/output is not evidence that it is used on this motorcycle.

## A useful first custom-tool scope

A read-only research viewer can be built directly from the current assets: verify the image hash, navigate areas, show raw tables/axes, display exact stock values and instruction references, and show each unresolved unit or mode explicitly. The viewer should distinguish functionally tested items from layout-only candidates. This would be useful before adding write support.

An eventual editing tool should bind definitions to a verified image identity, preserve unknown bytes, record exact changes, apply a validated encode/decode pair, and run the established integrity calculation before producing an output. No XDF version-specific serialization is prescribed here; choose the target format when implementation begins and test it in the intended editor.

## Remaining research by priority

1. **Physical units:** establish coolant payload-to-Celsius mapping, timer frequency, crank-event geometry and road-speed scale. These unlock fan and limit definitions.
2. **Spark:** complete the chain from final timing byte to the coil firing edge and establish the absolute angle reference; classify corrections.
3. **Fuel:** complete every map-to-request transformation and prove duration units, voltage compensation, temperature corrections and transient paths.
4. **All cut reasons:** build a writer/consumer record for every dispatcher gate; distinguish rev/road-speed limits, deceleration, faults and interlocks.
5. **Connector pins:** match the exact ECU part number and harness/board to the logical MCU channels.
6. **Integrity and packaging:** validate the correction field against the actual ECU/programming format and resolve the missing boot content before producing a flash-oriented definition. The startup computation and range are now recovered.

Matching ECU identification, read-tool/acquisition details, a verified wiring diagram, and measured sensor/timer traces will resolve facts that this image alone cannot prove. None is required to continue the remaining static software analysis.

## Reproducing the focused evidence

From the repository root:

```sh
python3 scripts/build_semantic_catalog.py
clang -std=c11 -O0 -fPIC -shared analysis/full/c/page_*.c analysis/full/c/dispatch.c -o /tmp/libxt660_full.so
python3 scripts/test_full_lift.py /tmp/libxt660_full.so
python3 scripts/test_control_semantics.py /tmp/libxt660_full.so
python3 scripts/fix_startup_checksum.py
python3 scripts/test_extended_maps.py /tmp/libxt660_full.so
python3 scripts/verify_semantics.py
```

The control fixtures use supplied ROM values and controlled RAM/register inputs. They check decisions and table results against the original instruction translation, not live ECU waveforms. Table-knot tests do not prove every interpolated point or physical scaling.

## Conditional engineering companion

[physical_units.json](physical_units.json) now provides per-map conversion status, named clock/crank assumptions, converted cell values for 15 maps and nominal speed axes for 32 maps. [UNIT_DECODING.md](UNIT_DECODING.md) separates exact arithmetic from inferred physical scales and conflicting sensor evidence. An editor must display these assumptions and must not relabel relative spark angle as BTDC, treat load as measured kPa, or silently enable writes because a conversion is present.
