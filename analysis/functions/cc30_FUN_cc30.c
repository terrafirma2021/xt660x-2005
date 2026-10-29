/* Entry cc30 */

void FUN_cc30(void)

{
  byte bVar1;
  
  bVar1 = DAT_0896._0_1_;
  if ((~bVar1 & 1) == 0) {
    bVar1 = DAT_0b07;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b07 = bVar1;
    DAT_0b08 = 0;
    if (DAT_4bfd <= bVar1) {
      bVar1 = DAT_088c;
      DAT_088c = bVar1 | 0x80;
    }
  }
  else {
    bVar1 = DAT_0b08;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b08 = bVar1;
    DAT_0b07 = 0;
    if (DAT_4bfd <= bVar1) {
      bVar1 = DAT_088c;
      DAT_088c = bVar1 & 0x7f;
      return;
    }
  }
  return;
}


