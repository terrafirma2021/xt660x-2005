"""Independent integer models of the spark planners; no physical TDC assumption."""


def fire_plan(code, three, quarter, pitch, correction, minimum, offset=150):
    advance = max(0, min(65535, code*three//256+correction)-offset)
    residual = quarter-advance
    if residual >= minimum:
        return 6, advance, residual
    residual = min(65535, quarter+pitch)-advance
    if residual >= 0:
        if residual < minimum:
            return 4, advance, (residual+pitch)&65535
        return 5, advance, residual
    residual = min(65535, min(65535, quarter+pitch)+pitch)-advance
    if residual >= 0:
        if residual < minimum:
            return 3, advance, (residual+pitch)&65535
        return 4, advance, residual
    residual = min(65535, quarter+three)-advance
    return 3, advance, max(minimum, residual)


def charge_plan(dwell, advance, quarter, pitch, minimum):
    total = (dwell+advance)&65535
    if total < quarter:
        residual = quarter-total
        if residual < minimum:
            return 5, (residual+pitch)&65535
        return 6, residual
    residual = (-(total-quarter)-minimum)&65535
    count = 1
    while True:
        summed = residual+pitch
        if summed > 65535:
            residual = summed&65535
            break
        residual = summed
        count += 1
        if count == 9:
            summed = residual+pitch
            residual = (summed&65535) if summed > 65535 else 0
            break
    residual = (residual+minimum)&65535
    if count < 7:
        return (6-count)&31, residual
    if count == 7:
        summed = residual+pitch
        residual = summed if summed <= 65535 else (minimum+pitch)&65535
    return 10, residual


def fire_deadline(capture, residual, charge_compare, min_charge, pitch_high, threshold):
    desired = (capture+residual)&65535
    elapsed = (desired-charge_compare)&65535
    # CPD followed by BPL tests N alone, not the signed N xor V relation.
    limited = pitch_high >= threshold and bool(((elapsed-min_charge)&65535)&32768)
    return ((charge_compare+min_charge)&65535 if limited else desired), limited
