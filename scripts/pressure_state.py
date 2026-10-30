"""Independent model of B304-B381 pressure-estimate selection, not sensor units."""


def track_pressure(samples, previous, gain):
    """8764-87E2 after its eligibility gates, five-word mean then Q8 filter."""
    assert len(samples) == 5
    mean = sum(samples)//5
    magnitude = abs(mean-previous)*gain//256
    current = previous+magnitude if mean >= previous else previous-magnitude
    return mean, current


def select_pressure(counter, startup_flags, request_flags, fault_flags, selector,
                    fallback, replacement, filtered, tracked, lower, upper, threshold):
    writes = {}
    if counter <= threshold and startup_flags & 8:
        counter = 255
        source, value = 'fallback', fallback
    elif request_flags & 8:
        request_flags &= ~8
        source, value = 'fallback', fallback
    elif fault_flags & 0x3c:
        source, value = 'fallback', fallback
    elif request_flags & 0x80:
        source, value = 'replacement', replacement
    elif selector == 0x80:
        source, value = 'tracked', tracked
    else:
        source, value = 'filtered', filtered
    if source in ('fallback', 'replacement'):
        writes.update({a: value for a in (0xcb4, 0xcb6, 0xcc6, 0xcca, 0xcc8)})
    # Preserve comparison order, including synthetic inverted limits.
    value = lower if value < lower else upper if value > upper else value
    writes[0x8f2] = value
    return dict(source=source, words=writes, counter=min(255, counter+1),
                request_flags=request_flags)
