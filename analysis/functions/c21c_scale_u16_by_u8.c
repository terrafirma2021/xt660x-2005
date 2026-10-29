/* Entry c21c */

ushort scale_u16_by_u8(ushort value,byte *scale_address)

{
  return (ushort)((uint)*scale_address * (uint)value >> 8);
}


