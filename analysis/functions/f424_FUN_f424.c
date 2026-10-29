/* Entry f424 */

void FUN_f424(void)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = DAT_004c;
  if ((bVar1 & 8) == 0) {
LAB_f486:
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xf7;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
  }
  else if ((((~DAT_0880 & 0x40) == 0) && ((~DAT_0880 & 4) == 0)) && ((~DAT_088d & 0x20) == 0)) {
    bVar1 = DAT_00e1;
    if ((bVar1 & 8) == 0) goto LAB_f498;
    if ((DAT_0c03 & 0x1f) == DAT_0924) {
      if ((DAT_0a2e._0_1_ < DAT_0d9e) ||
         (DAT_0e32 = (DAT_0af0 + DAT_0aa4) - DAT_0b7a, -1 < DAT_0e32 - DAT_0a9a)) {
        DAT_0a93 = DAT_0a93 & 0xfd;
        sVar2 = DAT_0af0 + DAT_0aa4;
      }
      else {
        DAT_0a93 = DAT_0a93 | 2;
        sVar2 = DAT_0b7a + DAT_0a9a;
      }
      DAT_0056 = sVar2;
      DAT_0a92 = DAT_0a92 | 0x80;
      goto LAB_f486;
    }
  }
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0xf7;
LAB_f498:
  DAT_004e = 8;
  return;
}


