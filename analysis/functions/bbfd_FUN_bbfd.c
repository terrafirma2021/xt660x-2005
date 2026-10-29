/* Entry bbfd */

void FUN_bbfd(void)

{
  byte bVar1;
  
  bVar1 = DAT_0888;
  if ((~bVar1 & 2) == 0) {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 | 4;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 | 1;
  }
  else {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xfb;
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xef;
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xbf;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfe;
  }
  return;
}


