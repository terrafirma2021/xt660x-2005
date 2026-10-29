/* Entry c227 */

ushort scale_u16_by_u8_rounded(ushort value,byte *scale_address)

{
  ushort uVar1;
  
  if (false) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = CONCAT11(0xff7f < *scale_address * value,(char)(*scale_address * value + 0x80 >> 8));
  }
  return uVar1;
}


