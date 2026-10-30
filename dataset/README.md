# Yamaha ECU dataset and applicability

The [website](https://terrafirma2021.github.io/xt660x-2005/) now selects **model → year → market → ECU → firmware**. Selection persists across maps, wiring, MCU pins, research and image records, and is encoded in shareable URLs. The existing repository address is retained to preserve links. The project name is **Yamaha ECU Research**, covering XT660R/X/Z and a separate TDM900 comparison profile. XT600 is not an alias for XT660; Ténéré is XT660Z.

## One record for each claim

- [vehicles.json](vehicles.json) owns model/year/market/ECU associations, O₂ equipment statements and source references. A listed year may be a filename claim; each profile states its limits.
- [files.json](files.json) accounts for all 21 files in the supplied Desktop/XT660 folder, including extensionless images and ZIP members. Originals are preserved without altering their bytes.
- [firmware registry](../firmware/registry.json) owns immutable image identity, address base and explicitly reviewed map sharing.
- [complete inventory](../analysis/firmware/dataset_inventory.json) checks hashes, archive duplicates, embedded identifiers and all 36 pairwise comparisons of nine registered images.
- The existing map, unit, decompilation and MCU datasets remain shared research for the original application. They are not copied into each vehicle profile or assigned to unrelated firmware.

The seven distinct supplied images are additional evidence, not seven confirmed factory revisions. Together with the original owner image and its checksum-corrected derivative there are nine registered records. The two ZIP members are exact copies of already registered files. The eight XDFs remain candidate definitions: four readable XML files contain 64 declarations; four non-XML files are preserved with their screenshots but are not completely decoded.

## Byte-backed findings

| Images | Difference / scope |
|---|---|
| 2004–06 companion and owner dump | Application differs only at `0x4E7D`; all 71 map bodies and stored axes agree. Companion has boot bytes; owner dump has FF placeholders. |
| Extensionless `2C1-8591A-00` pair | One byte at `0x4E7D`, `00` versus `80`. Both have FF-filled boot regions. Different application from the original study. |
| `2C1-8591A-10` pair | Two bytes: `0x4619` `00→80`, `0x4751` `FF→7F`. Modification labels are untested source claims. |
| 2008-labelled `5VK-1X` and `5VK-11` | Four differing bytes: `0x348D`, `0xF776`, `0xF77E`, `0xF77F`. Embedded identifiers are `Y2051100` and `Y2051150`. Neither is assumed stock. |
| Five short supplied BINs | Their complete 2 KB boot regions match. This supports a shared boot-byte record, not application or ECU interchangeability. |

The associated 2008 TunerPro log records six edits to two named tables, dated `06/04/2023` in the source log. Date convention and before/after bytes are not established. The bench-pin JPEG claims 2C1-8591A-10 and three power/communication positions; it is not a verified harness or connector-to-MCU mapping. The two TunerPro screenshots show the companion file with a Mauro definition, including unknown labels and gear labels; display names do not override code evidence.

## Model and hardware boundaries

The 2004 R/X manual and 2007 R/X supplement are distinct hardware references. The latter includes an O₂ sensor. Brazil's 2008 2C13 catalogue lists 2C1-8591A-00; its 2014 2C19 catalogue lists 2C1-8591A-10. The wider 2012–2016 span remains a filename claim. The 5VKL catalogue lists 5VK-8591A-11 and an oxygen sensor, but its June 2013 publication date is not proof of a supplied dump's model year. Manufacturer sources and page locators are centralized in [vehicles.json](vehicles.json).

XT660Z has a distinct 11D ECU/parts reference and no matched local dump. TDM900 is comparison-only: dormant second-channel code does not prove TDM firmware or hardware. These profiles show their own sources rather than the 2005 XT map and pin explorer. Unknown O₂ equipment remains unknown instead of inheriting another market's configuration.

## Extending the static site

The [Fowlers parts dataset](parts_catalogue.json) adds **89 inspected model/market records**, covering standard, restricted and ABS catalogue variants, **267 assembly pages** and **618 relevant component rows**. Every original ECU reference is kept separate from a listed replacement. In particular, early R/X records show `5VK-8591A-00 → -03`, later R/X records `5VK-8591A-10 → -12`; these replacement chains do not identify the supplied `-01`, `-11` or `-1X` dumps. XT660ZA's `56P-H2590-00` harness stays separate from the non-ABS Ténéré harness even where the ECU reference agrees.

Inspection uses UK and Europe listings where offered, otherwise the first listed country; it does not claim all global markets or every colour. The Fowlers family indexes are not complete production histories. Seventeen older **XTZ660** catalogue groups were deliberately excluded from **XT660Z**. The site now contains 110 applicability profiles, with this parts evidence centralized in JSON rather than duplicated MCU documents.

1. Preserve an image and record its provenance/hash using the [maintainer import workflow](../firmware/ADDING_IMAGES.md). There is no website upload form or server-side BIN handling.
2. Add a vehicle profile with year, market, ECU reference, source IDs and explicitly qualified firmware association. Reuse shared references; do not duplicate the analysis per MCU.
3. Assign map research only after byte/axis and consumer checks. Matching filenames, boot regions or part-number prefixes are insufficient. Pin evidence requires an independent hardware applicability review.
4. Run `dataset_inventory.py`, `firmware_catalog.py`, `verify_vehicle_catalog.py`, then the website build and link/grid verification. CI repeats these checks.

“Matched” always names what matched: file hash, boot bytes, map cells, catalogue part number, or inspected hardware. It is not an overall tuning approval. New images remain unreviewed until their own control flow, scaling and physical hardware claims are checked.
