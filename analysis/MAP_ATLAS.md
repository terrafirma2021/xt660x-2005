# Calibration map atlas

Addresses below are file offsets and the working flat CPU12 addresses. Actual cell addresses differ from the pointers passed to the lookup helpers.
All cells and axes use raw ECU values. Physical roles, units, and tuning limits are unverified. This is an analysis catalogue, not a flash definition.

## Confirmed grid layouts

| ID | Cell address | Rows × columns | Cell width | Row / column axes |
|---|---|---|---|---|
| main_quantity_A | 0x1B66 | 45 × 30 | 16-bit BE | 0x1B0C / 0x1AD0 |
| main_quantity_B | 0x2688 | 45 × 30 | 16-bit BE | 0x262E / 0x25F2 |
| main_quantity_C | 0x37A8 | 45 × 30 | 16-bit BE | 0x374E / 0x3712 |
| main_u8_A | 0x42AE | 32 × 20 | 8-bit BE | 0x426E / 0x4246 |
| main_u8_B | 0x452E | 32 × 20 | 8-bit BE | 0x426E / 0x4246 |
| main_u8_C | 0x47AE | 32 × 20 | 8-bit BE | 0x426E / 0x4246 |
| modulo24_surface | 0x1914 | 10 × 13 | 8-bit BE | 0x18E6 / 0x18FA |
| correction_surface_A | 0x1A1A | 12 × 15 | 8-bit BE | 0x1A02 / 0x19E4 |
| correction_surface_B | 0x3168 | 13 × 10 | 8-bit BE | 0x314E / 0x313A |
| correction_surface_C | 0x3280 | 8 × 12 | 8-bit BE | 0x3270 / 0x3258 |
| correction_surface_D | 0x4A60 | 10 × 15 | 8-bit BE | 0x4A56 / 0x4A46 |

## Uniform-axis curves

| Header | Cells | Points | Input minimum / span / factor |
|---|---|---|---|
| 0x18B6 | 0x18B9 | 15 | 16 / 224 / 16 |
| 0x1996 | 0x1999 | 15 | 16 / 224 / 16 |
| 0x32EF | 0x32F2 | 15 | 16 / 224 / 16 |
| 0x3301 | 0x3304 | 15 | 16 / 224 / 16 |
| 0x4234 | 0x4237 | 7 | 19 / 192 / 8 |
| 0x19C6 | 0x19CC | 8 | 28672 / 28672 / 16 |
| 0x19BA | 0x19C0 | 6 | 0 / 40960 / 8 |
| 0x19A8 | 0x19AE | 11 | 1229 / 5120 / 128 |
| 0x34B0 | 0x34B6 | 15 | 5120 / 7168 / 128 |
| 0x3494 | 0x349A | 10 | 8192 / 36864 / 16 |
| 0x353A | 0x3540 | 8 | 28672 / 28672 / 16 |
| 0x351D | 0x3520 | 25 | 16 / 192 / 32 |
| 0x34D0 | 0x34D3 | 7 | 128 / 48 / 32 |
| 0x34DA | 0x34DD | 7 | 128 / 48 / 32 |
| 0x34E4 | 0x34E7 | 7 | 128 / 48 / 32 |
| 0x34EE | 0x34F4 | 9 | 0 / 32768 / 16 |
| 0x355D | 0x3560 | 7 | 128 / 48 / 32 |
| 0x3567 | 0x356A | 7 | 128 / 48 / 32 |
| 0x3571 | 0x3574 | 7 | 128 / 48 / 32 |
| 0x31EC | 0x31F2 | 13 | 8192 / 49152 / 16 |
| 0x3200 | 0x3206 | 13 | 8192 / 49152 / 16 |
| 0x36C4 | 0x36C7 | 15 | 16 / 224 / 16 |
| 0x36A4 | 0x36AA | 7 | 6144 / 24576 / 16 |
| 0x36B2 | 0x36B8 | 7 | 6144 / 24576 / 16 |
| 0x3220 | 0x3223 | 25 | 16 / 192 / 32 |
| 0x3345 | 0x3348 | 15 | 16 / 224 / 16 |
| 0x3357 | 0x335A | 15 | 16 / 224 / 16 |
| 0x1880 | 0x1886 | 20 | 6144 / 38912 / 32 |
| 0x323C | 0x3242 | 21 | 29184 / 20480 / 64 |
| 0x32E0 | 0x32E6 | 8 | 28672 / 28672 / 16 |
| 0x4A33 | 0x4A36 | 15 | 16 / 224 / 16 |
| 0x3315 | 0x3318 | 15 | 16 / 224 / 16 |
| 0x3327 | 0x332A | 15 | 16 / 224 / 16 |
| 0x34FD | 0x3500 | 29 | 16 / 224 / 32 |
| 0x4BAC | 0x4BB2 | 21 | 29184 / 20480 / 64 |

## Evidence and use

`maps.json` contains every extracted grid/curve, its raw values, axes and caller addresses. `map_extracts/` has byte-exact cell payloads and plain-text matrices.
`axes.json` records code-confirmed axis pointers, counts, raw breakpoints and input load instructions. `calibration_pointer_loads.json` includes pointer loads not yet classified as maps.
`calibration_references.json` records direct references into the entire calibration region. It includes scalar constants and flags, not only maps.

The 16-bit grid helper at 0xC499 uses X + 21 + 2 × (row × columns + column). The byte grid helper at 0xC32D uses X + 3 + row × columns + column. The modulo-24 helper at 0xC4DC uses the byte layout with cyclic interpolation.
The uniform-axis helpers at 0xC1CD and 0xC1F2 clamp the input, multiply its offset by a header factor, then interpolate adjacent byte cells. Their index denominators are 256 and 65536 respectively. The extracted point count includes the upper adjacent cell if a fractional endpoint needs it.

## Still unresolved

- Physical sensor names and axis conversions (RPM, pressure, throttle and temperature).
- Final fuel/timing output scaling and mode-selection semantics.
- Special/precomputed-index tables, bit-packed maps, scalars and indirect references outside the confirmed catalogue.
- Boot/reset code and hardware identity: the final 2 KiB is all FF in the supplied file.
- Exact semantic function boundaries in unreferenced and shared-entry assembly routines.

Do not treat successful decompilation as proof of source-level accuracy or complete map identification.
