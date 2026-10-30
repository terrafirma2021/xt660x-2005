# Add another firmware image

The [firmware library](https://terrafirma2021.github.io/xt660x-2005/firmware/) is generated from [registry.json](registry.json). Each image has an immutable file, SHA-256, explicit CPU address base, provenance, claimed years and separate analysis status. The repository name and existing research links stay stable.

From the repository root:

```powershell
python scripts/add_firmware.py 'C:\path\new.bin' --id xt660-example --label 'XT660 example' --base-address 0x1800 --claimed-years 'Unknown' --provenance 'Describe where this exact file came from'
python scripts/firmware_catalog.py
python scripts/firmware_catalog.py --check
python scripts/test_firmware_library.py
python scripts/build_pages.py
python scripts/verify_pages.py
```

Use base `0x0000` for a full 65,536-byte address-space dump, or `0x1800` only when the shorter file actually represents addresses 1800–FFFF. Length alone does not prove the base. The importer requires an explicit base and rejects address-space overflow, duplicate hashes, reused IDs and overwrites. It preserves the incoming bytes and creates `firmware/images/<id>.bin`.

Review the new registry entry and generated catalogue, then commit and push the BIN, registry and catalogue to `main`. The existing GitHub Pages workflow publishes its image page automatically. Install `site/requirements.txt` if building locally for the first time. Stage any new Markdown guides before the site build, which indexes tracked documents.

New entries start **Unreviewed** and do not inherit the 71-map catalogue, pin assignments, units or test results. The website shows the image record but hides the map grid when an unreviewed image is selected. For different code revisions, add analysis under `analysis/firmware/<id>/` and establish map locations and consumers separately. Sharing the current catalogue requires an explicit review: all stored cells/axes must match, and application differences must equal the reviewed list. Do not set that flag merely because a filename says XT660.

The current owner dump and 2004–06 companion have identical stored maps and application instructions, with a single configuration difference at 4E7D. Their authentication behavior differs. The checksum-corrected owner copy is labelled **derived**. Claimed years are not asserted as distinct factory revisions.

The website is static: it has no public upload endpoint and does not grant visitors repository write access. A contributor can provide a BIN through the normal repository contribution process; registration and review happen before publishing. BINs live in GitHub, with links from image pages; the Pages artifact does not embed them. This importer does not flash an ECU or alter a calibration.
