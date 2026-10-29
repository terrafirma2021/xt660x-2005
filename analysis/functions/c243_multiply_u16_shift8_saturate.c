/* Entry c243 */

ushort multiply_u16_shift8_saturate(ushort value,ushort factor)

{
  ushort uVar1;
  
  if ((ushort)((uint)value * (uint)factor >> 0x10) < 0x100) {
    uVar1 = (ushort)((uint)value * (uint)factor >> 8);
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}


