/* Entry baed */

void FUN_baed(void)

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
      bVar1 = DAT_0000;
      DAT_0000 = bVar1 & 0xfb;
    }
    DAT_0be4 = 0;
  }
  bVar1 = DAT_0893;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0be5, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0be5 = bVar1, DAT_4f0f < bVar1)) {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xf7;
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 | 4;
  }
  return;
}


