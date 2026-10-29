/* Entry baed */

void FUN_baed(void)

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
      bVar1 = DAT_0000;
      DAT_0000 = bVar1 & 0xfb;
    }
    DAT_0be4 = 0;
  }
  if (((DAT_0893 & 8) != 0) && (DAT_0be5 = (DAT_0be5 + 1) - (0xfe < DAT_0be5), DAT_4f0f < DAT_0be5))
  {
    DAT_0893 = DAT_0893 & 0xf7;
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 | 4;
  }
  return;
}


