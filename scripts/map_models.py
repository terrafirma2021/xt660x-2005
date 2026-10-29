"""Independent integer models of recovered map consumers, not ECU control software.

Names describe observed roles. Word wrapping is deliberate where the original
code does not saturate; synthetic out-of-range inputs are not tuning ranges.
"""

def clamp(value, lo=0, hi=65535):
    return min(hi, max(lo, value))


def q8(value, factor):
    return min(65535, value*factor//256)


def rounded_q8(value, factor):
    return min(65535, (value*factor+128)//256)


def decay(state, step):
    return 2*max(0, state//2-step)


def pre_gain(post_start_high, coolant_cell, centered_byte, transient_word, adaptive_word):
    v=((((32+post_start_high)*4+coolant_cell)*4-128+centered_byte)*4
       -32768+transient_word+(adaptive_word>>5)-1024)&65535
    return v>>1


def normal_gains(post_start_word, coolant_a, coolant_b, centered_byte,
                 transient_word, adaptive_word, iat_cell, transient_byte,
                 pressure_a, pressure_b):
    pre_a=pre_gain(post_start_word>>8,coolant_a,centered_byte,transient_word,adaptive_word)
    pre_b=pre_gain(post_start_word>>8,coolant_b,centered_byte,transient_word,adaptive_word)
    corrected_a=q8(q8(pre_a,iat_cell+384)>>1,transient_byte)
    corrected_b=q8(q8(pre_b,iat_cell+384)>>1,transient_byte)
    return {0x96c:pre_a,0x96e:pre_b,0x968:corrected_a,0x96a:corrected_b,
            0x960:q8(corrected_a,pressure_a),0x962:q8(corrected_b,pressure_a),
            0x964:q8(corrected_a,pressure_b),0x966:q8(corrected_b,pressure_b)}


def blended_quantity(quantity_a, quantity_b, gain_a, gain_b, additive_byte, blend, reduction):
    a=q8(clamp(quantity_a+4*(additive_byte-128)),gain_a)
    b=q8(clamp(quantity_b+4*(additive_byte-128)),gain_b)
    value=(b*blend//256)+(a*(255-blend)//256)
    if reduction:
        factor=(((1024-reduction)&65535)<<6)&65535
        value=value*factor//65536
    return a,b,value


def primary_request(quantity_a,quantity_b,gain_a,gain_b,additive_byte,blend,
                    reduction,lower,upper,global_byte,skip_global,compensation):
    a,b,value=blended_quantity(quantity_a,quantity_b,gain_a,gain_b,additive_byte,blend,reduction)
    limited=clamp(value,lower,upper)
    scaled=limited if skip_global else rounded_q8(limited,global_byte*4)
    return {0x942:a,0x944:b,0x940:limited,0x93c:limited,0x93e:scaled,
            0x93a:clamp(scaled+compensation),0x92a:clamp(scaled+compensation)}


def secondary_request(quantity_a,quantity_b,gain_a,gain_b,additive_byte,blend,
                      reduction,channel_gain,lower,upper,global_byte,skip_global,compensation):
    a,b,value=blended_quantity(quantity_a,quantity_b,gain_a,gain_b,additive_byte,blend,reduction)
    result={0x94e:a,0x950:b,0x94c:value,0x948:value}
    product=value*channel_gain*2+128
    if product>=1<<24:
        # Original early overflow branch bypasses later limits and leaves 95A/94A alone.
        result.update({0x92c:65535,0x946:65535})
        return result
    limited=clamp(product//256,lower,upper)
    scaled=limited if skip_global else rounded_q8(limited,global_byte*4)
    result.update({0x95a:limited,0x94a:scaled,0x92c:clamp(scaled+compensation),
                   0x946:clamp(scaled+compensation)})
    return result


def startup_ticks(base_q8,speed_cell,throttle_cell,iat_cell,pressure_cell):
    gain=q8(speed_cell*throttle_cell,iat_cell+384)
    gain=q8(gain,pressure_cell)
    return min(65535,gain*base_q8//16384)


def extra_transient_ticks(pressure_cell,coolant_cell,iat_cell,response_cell,throttle_cell):
    gain=q8(pressure_cell*coolant_cell,iat_cell+384)
    return min(65535,gain*response_cell*throttle_cell//16384)


def signed_transient(throttle_delta,throttle_gain,load_delta,load_gain,positive_gain,negative_gain):
    combined=clamp(throttle_delta*throttle_gain+load_delta*load_gain,-32768,32767)
    if combined<0:
        return 32768-min(2048,(-combined)*negative_gain//256)
    return 32768+combined*positive_gain//256


def load_rescale(value,gain):
    origin=0x1eb7
    delta=(abs(value-origin)*gain*2+128)//256
    return clamp(origin+delta if value>=origin else origin-delta)


def centered_offset(value,gain_byte):
    return clamp(value+64*(gain_byte-128))


def centered_gain(value,gain_byte):
    magnitude=(abs(value-128)*gain_byte+128)//256
    return clamp(128+magnitude if value>=128 else 128-magnitude,0,255)


def cyclic_event(first,second,fraction,origin):
    a,b=(first-origin)%24,(second-origin)%24
    return ((a*(256-fraction)+b*fraction)//256+origin)%24


def valid_injection_event(code):
    return 22 if code>=23 else 10 if code==11 else code
