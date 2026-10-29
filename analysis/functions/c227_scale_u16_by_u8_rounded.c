/* Entry c227 */

ushort scale_u16_by_u8_rounded(ushort value,byte *scale_address)

{
  byte bVar2;
  ushort uVar1;
  
  uVar1 = (ushort)((uint)*scale_address * (uint)value);
  bVar2 = (byte)((uint)*scale_address * (uint)value >> 0x10);
  if (CARRY1(bVar2,0xff7f < uVar1)) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = CONCAT11(bVar2 + (0xff7f < uVar1),(char)(uVar1 + 0x80 >> 8));
  }
  return uVar1;
}


