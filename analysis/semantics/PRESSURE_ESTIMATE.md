# Pressure-estimate axis: source selection and tracking

Six curves use RAM `08F2`: startup pressure gain (`19C6`), transient pressure gain (`353A`), load/throttle fuel pressure gains (`323C`, `32E0`), spark bound (`4BAC`) and pressure-to-load gain (`1854`). This input is a selected, clamped state, not the diagnostic pressure byte and not automatically kPa.

[pressure_state.py](../../scripts/pressure_state.py) models the newly traced blocks. [Execution results](pressure_state_validation.json) compare them with the original instruction translation. Tests are scoped to the stated entry/exit boundaries; they do not establish sensor calibration or exercise every upstream gate.

## Priority at B304–B381

The first matching row wins. Conditions name raw flags without inventing a hardware meaning for every bit.

| Priority | Condition | Selected word | Side effect |
|---|---|---|---|
| 1 | `B3B <= ROM[1843]` and `0880 & 08` | `0DA8` | Set B3B to 255; replace tracking words |
| 2 | `089F & 08` | `0DA8` | Clear that request bit; replace tracking words |
| 3 | `08AF & 3C` | `0DA8` | Replace tracking words |
| 4 | `089F & 80` | `0CA4` | Replace tracking words |
| 5 | `ROM[186F] == 80` | `0CC8` | Keep tracking words |
| 6 | Otherwise | `0CB6` | Keep tracking words |

Replacement writes the selected word to `CB4`, `CB6`, `CC6`, `CCA` and `CC8` before clamping. The selected value is clamped by the ordered comparisons against ROM words `18AC` and `18AE`, then stored in `08F2`. B3B increments with saturation at 255.

Stock values are selector **128**, startup counter threshold **12**, lower clamp **27,520 (`6B80`)**, upper clamp **65,280 (`FF00`)**. Thus the normal stock path selects **CC8**, not CB6. The limit comparison is inclusive at both ends; the initialization and replacement values retain their separate provenance. Initialization at `5261–5274` copies `0E40` into this state family.

## Stock tracked state at 8764–87E2

After the upstream eligibility gates accept an update, the code averages five words at `CB8`, `CBA`, `CBC`, `CBE`, `CC0` with a 24-bit sum. It then moves the previous CCA toward that mean using the byte at `189E`:

```text
mean = floor(sum(five_samples) / 5)
step = floor(abs(mean - previous_CCA) * ROM[189E] / 256)
current = previous_CCA + step   if mean >= previous_CCA
          previous_CCA - step  otherwise
CC6 = mean
CCA = CC8 = current
```

Stock gain is **255/256**, with truncation of the magnitude toward zero. This is a stateful accepted-window update, not a new affine sensor conversion. Entry gates at `8712–8760` check flags, sample spread, throttle, speed and load; the isolated tracking fixture starts after those gates and does not certify their complete behavior or sampling cadence.

## Verification scope and what remains

The selection fixture covers all **65,536 request/fault byte pairs**, all **65,536 candidate words through each of the two normal sources**, and **8,000 randomized threshold/limit cases**: 204,608 selection checks. Another **8,192 cases** test the five-sample mean, both signs of the tracking filter, all gain-byte values and large sums. Total: **212,800 passing cases**.

The existing [load-consumer tests](MAP_CONSUMERS.md) separately establish the `C8E -> C90` signed rescale around origin `1EB7`. This new work explains source selection and tracking for `08F2`; it does not collapse `08F2`, `C90`, raw ADC and diagnostic payload into one coordinate. Remaining work includes upstream acquisition and other filters, flag semantics, physical sensor transfer and behavior under real operating conditions.

Reproduce with `python3 scripts/test_pressure_state.py /path/to/libxt660_full.so`. Original and checksum-corrected firmware files are unchanged.
