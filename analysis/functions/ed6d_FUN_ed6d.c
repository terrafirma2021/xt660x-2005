/* Entry ed6d */

void FUN_ed6d(void)

{
  byte bVar1;
  short sVar2;
  
  if (((~DAT_0885 & 0x40) == 0) && ((DAT_0884 & 2) == 0)) {
    if (DAT_0c04 != '\a') {
      return;
    }
    if ((((~DAT_0880 & 0x40) == 0) && (DAT_0d9e <= DAT_0a2e._0_1_)) &&
       (sVar2 = DAT_0044, (sVar2 - DAT_0b7a) - DAT_0a9a < 0)) {
      DAT_0a93 = DAT_0a93 | 2;
      sVar2 = DAT_0b7a + DAT_0a9a;
    }
    else {
      DAT_0a93 = DAT_0a93 & 0xfd;
      sVar2 = DAT_0044;
    }
    DAT_0056 = sVar2 + 10;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xf7;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
    DAT_0a92 = DAT_0a92 | 0x80;
    return;
  }
  return;
}


