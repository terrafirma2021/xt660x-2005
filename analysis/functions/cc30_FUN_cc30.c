/* Entry cc30 */

void FUN_cc30(void)

{
  if ((~DAT_0896._0_1_ & 1) == 0) {
    DAT_0b08 = (DAT_0b08 + 1) - (0xfe < DAT_0b08);
    DAT_0b07 = 0;
    if (DAT_4bfd <= DAT_0b08) {
      DAT_088c = DAT_088c & 0x7f;
      return;
    }
  }
  else {
    DAT_0b07 = (DAT_0b07 + 1) - (0xfe < DAT_0b07);
    DAT_0b08 = 0;
    if (DAT_4bfd <= DAT_0b07) {
      DAT_088c = DAT_088c | 0x80;
    }
  }
  return;
}


