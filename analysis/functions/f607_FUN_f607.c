/* Entry f607 */

void FUN_f607(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  
  DAT_004e = 0x40;
  bVar1 = DAT_00e1;
  if ((bVar1 & 0x40) == 0) {
    sVar3 = DAT_0b72;
    if ((~DAT_0a18 & 0x80) != 0) {
      DAT_0a18 = DAT_0a18 & 0x7f;
      sVar3 = DAT_092a;
    }
    if ((~DAT_0cf2 & 1) == 0) {
      if (((DAT_0cf2 & 4) != 0) &&
         (DAT_0cf4 = (DAT_0cf4 + 1) - (0xfe < DAT_0cf4), DAT_0da5 <= DAT_0cf4)) {
        DAT_0cf2 = DAT_0cf2 & 0xfb;
      }
    }
    else {
      DAT_0cf3 = (DAT_0cf3 + 1) - (0xfe < DAT_0cf3);
      sVar3 = DAT_0cf6;
      if ((DAT_0da4 <= DAT_0cf3) && (DAT_0cf2 = DAT_0cf2 & 0xfe, DAT_0da5 != 0)) {
        DAT_0cf4 = 0;
        DAT_0cf2 = DAT_0cf2 | 4;
      }
    }
    sVar2 = DAT_005c;
    DAT_005c = sVar3 + sVar2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0x30;
    DAT_004e = 0x40;
    DAT_0a18 = DAT_0a18 & 0xf7;
    return;
  }
  if ((DAT_0a18 & 0x80) == 0) {
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    DAT_0a18 = DAT_0a18 & 0xf7;
    return;
  }
  sVar3 = DAT_0044;
  sVar2 = DAT_0a2a;
  if ((DAT_0a2a + -5) - sVar3 < 0) {
    sVar3 = DAT_0044;
    sVar2 = sVar3 + 5;
  }
  DAT_005c = sVar2;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 & 0xef | 0x20;
  DAT_004e = 0x40;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 0x40;
  DAT_0a18 = DAT_0a18 | 8;
  DAT_0a17 = DAT_0a17 | 8;
  DAT_0a19 = DAT_0a19 | 8;
  return;
}


