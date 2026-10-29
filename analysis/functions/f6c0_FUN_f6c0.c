/* Entry f6c0 */

void FUN_f6c0(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  
  DAT_004e = 0x80;
  bVar1 = DAT_00e1;
  if ((bVar1 & 0x80) == 0) {
    sVar3 = DAT_0b74;
    if ((~DAT_0a18 & 0x20) != 0) {
      DAT_0a18 = DAT_0a18 & 0xdf;
      sVar3 = DAT_092c;
    }
    if ((~DAT_0cf2 & 1) == 0) {
      if (((DAT_0cf2 & 4) != 0) &&
         (DAT_0cf4 = (DAT_0cf4 + 1) - (0xfe < DAT_0cf4), DAT_0da5 <= DAT_0cf4)) {
        DAT_0cf2 = DAT_0cf2 & 0xfb;
      }
    }
    else {
      DAT_0cf3 = (DAT_0cf3 + 1) - (0xfe < DAT_0cf3);
      sVar3 = DAT_0cfc;
      if ((DAT_0da4 <= DAT_0cf3) && (DAT_0cf2 = DAT_0cf2 & 0xfe, DAT_0da5 != 0)) {
        DAT_0cf4 = 0;
        DAT_0cf2 = DAT_0cf2 | 4;
      }
    }
    sVar2 = DAT_005e;
    DAT_005e = sVar3 + sVar2;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0xc0;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
    DAT_0a18 = DAT_0a18 & 0xfd;
    return;
  }
  if ((DAT_0a18 & 0x20) == 0) {
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0x7f;
    DAT_0a18 = DAT_0a18 & 0xfd;
    return;
  }
  sVar3 = DAT_0044;
  sVar2 = DAT_0a2c;
  if ((DAT_0a2c + -5) - sVar3 < 0) {
    sVar3 = DAT_0044;
    sVar2 = sVar3 + 5;
  }
  DAT_005e = sVar2;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 & 0xbf | 0x80;
  DAT_004e = 0x80;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 0x80;
  DAT_0a18 = DAT_0a18 | 2;
  DAT_0a17 = DAT_0a17 | 2;
  DAT_0a19 = DAT_0a19 | 2;
  return;
}


