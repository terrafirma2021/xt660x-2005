/* Entry 6630 */

void FUN_6630(void)

{
  if (((DAT_0892 & 0x10) == 0) || (DAT_0b66 == '\0')) {
    DAT_0b67 = DAT_08b4 & 3;
    DAT_0b68 = 0;
    DAT_0b69 = 0;
    DAT_0b6a = 0;
    if (DAT_0b67 != 0) {
      FUN_66d6();
      DAT_0bdf = (&DAT_4eeb)[DAT_0b71];
      DAT_0892 = DAT_0892 | 0x10;
      DAT_0b66 = DAT_4ef4;
    }
  }
  else {
    DAT_0b66 = DAT_0b66 + -1;
  }
  return;
}


