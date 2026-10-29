/* Entry ba8d */

void FUN_ba8d(void)

{
  byte bVar1;
  
  bVar1 = DAT_0be4;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0be4 = bVar1;
  if (DAT_4f0d <= bVar1) {
    bVar1 = DAT_0be3;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0be3 = bVar1;
    if (DAT_4f0b < bVar1) {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xef;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xbf;
      DAT_0be3 = 0;
    }
    else {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 4;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 8;
      DAT_0be5 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 2;
      bVar1 = DAT_0889;
      DAT_0889 = bVar1 | 0x80;
    }
    DAT_0be4 = 0;
  }
  bVar1 = DAT_0893;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0be5, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0be5 = bVar1, DAT_4f0f < bVar1)) {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xf7;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfd;
    bVar1 = DAT_0889;
    DAT_0889 = bVar1 & 0x7f;
  }
  return;
}


