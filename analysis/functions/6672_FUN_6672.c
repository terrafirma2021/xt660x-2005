/* Entry 6672 */

void FUN_6672(void)

{
  if (((DAT_0892 & 0x10) == 0) || (DAT_0b66 == '\0')) {
    DAT_0b67 = ~DAT_08af & DAT_08b8;
    DAT_0b68 = ~DAT_08b0 & DAT_08b9;
    DAT_0b69 = ~DAT_08b1 & DAT_08ba;
    DAT_0b6a = ~DAT_08b2 & DAT_08bb;
    if ((DAT_0b67 != 0 || DAT_0b68 != 0) || (DAT_0b69 != 0 || DAT_0b6a != 0)) {
      FUN_66d6();
      DAT_0bdf = (&DAT_4ec9)[DAT_0b71];
      DAT_0892 = DAT_0892 | 0x10;
      DAT_0b66 = DAT_4eeb;
    }
  }
  else {
    DAT_0b66 = DAT_0b66 + -1;
  }
  return;
}


