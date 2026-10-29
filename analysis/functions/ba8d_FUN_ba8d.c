/* Entry ba8d */

void FUN_ba8d(void)

{
  byte bVar1;
  
  DAT_0be4 = (DAT_0be4 + 1) - (0xfe < DAT_0be4);
  if (DAT_4f0d <= DAT_0be4) {
    DAT_0be3 = (DAT_0be3 + 1) - (0xfe < DAT_0be3);
    if (DAT_4f0b < DAT_0be3) {
      DAT_0893 = DAT_0893 & 0xaf;
      DAT_0be3 = 0;
    }
    else {
      DAT_0893 = DAT_0893 | 0xc;
      DAT_0be5 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 2;
      DAT_0889 = DAT_0889 | 0x80;
    }
    DAT_0be4 = 0;
  }
  if (((DAT_0893 & 8) != 0) && (DAT_0be5 = (DAT_0be5 + 1) - (0xfe < DAT_0be5), DAT_4f0f < DAT_0be5))
  {
    DAT_0893 = DAT_0893 & 0xf7;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfd;
    DAT_0889 = DAT_0889 & 0x7f;
  }
  return;
}


