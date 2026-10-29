/* Entry cbef */

void FUN_cbef(void)

{
  if (DAT_0d87 == '\t') {
    if ((~DAT_0896._0_1_ & 2) != 0) {
LAB_cc19:
      DAT_0b06 = (DAT_0b06 + 1) - (0xfe < DAT_0b06);
      if (DAT_0b06 < DAT_18d5) {
        DAT_0b05 = 0;
        return;
      }
      DAT_0880 = DAT_0880 & 0xfe;
      DAT_0b05 = 0;
      return;
    }
  }
  else if ((DAT_0896._0_1_ & 2) == 0) goto LAB_cc19;
  DAT_0b06 = 0;
  DAT_0b05 = (DAT_0b05 + 1) - (0xfe < DAT_0b05);
  if (DAT_0b05 < DAT_18d4) {
    DAT_0b06 = 0;
    return;
  }
  DAT_0880 = DAT_0880 | 1;
  return;
}


