/* Entry f6c0 */

void FUN_f6c0(void)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  
  DAT_004e = 0x80;
  bVar1 = DAT_00e1;
  if ((bVar1 & 0x80) == 0) {
    bVar1 = DAT_0a18;
    if ((~bVar1 & 0x20) == 0) {
      bVar1 = DAT_0a18;
      DAT_0a18 = bVar1 & 0xdf;
      sVar5 = DAT_092c;
    }
    else {
      sVar5 = DAT_0b74;
    }
    bVar1 = DAT_0cf2;
    if ((~bVar1 & 1) == 0) {
      bVar1 = DAT_0cf3;
      bVar1 = (bVar1 + 1) - (0xfe < bVar1);
      DAT_0cf3 = bVar1;
      bVar3 = DAT_0da4;
      if (bVar3 <= bVar1) {
        bVar1 = DAT_0cf2;
        DAT_0cf2 = bVar1 & 0xfe;
        cVar4 = DAT_0da5;
        if (cVar4 != '\0') {
          DAT_0cf4 = 0;
          bVar1 = DAT_0cf2;
          DAT_0cf2 = bVar1 | 4;
        }
      }
      sVar5 = DAT_0cfc;
    }
    else {
      bVar1 = DAT_0cf2;
      if ((bVar1 & 4) != 0) {
        bVar1 = DAT_0cf4;
        bVar1 = (bVar1 + 1) - (0xfe < bVar1);
        DAT_0cf4 = bVar1;
        bVar3 = DAT_0da5;
        if (bVar3 <= bVar1) {
          bVar1 = DAT_0cf2;
          DAT_0cf2 = bVar1 & 0xfb;
        }
      }
    }
    sVar2 = DAT_005e;
    DAT_005e = sVar5 + sVar2;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0xc0;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 & 0xfd;
    return;
  }
  bVar1 = DAT_0a18;
  if ((bVar1 & 0x20) == 0) {
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0x7f;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 & 0xfd;
    return;
  }
  sVar2 = DAT_0a2c;
  sVar5 = DAT_0044;
  if ((sVar2 + -5) - sVar5 < 0) {
    sVar5 = DAT_0044;
    sVar5 = sVar5 + 5;
  }
  else {
    sVar5 = DAT_0a2c;
  }
  DAT_005e = sVar5;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 & 0xbf | 0x80;
  DAT_004e = 0x80;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 0x80;
  bVar1 = DAT_0a18;
  DAT_0a18 = bVar1 | 2;
  bVar1 = DAT_0a17;
  DAT_0a17 = bVar1 | 2;
  bVar1 = DAT_0a19;
  DAT_0a19 = bVar1 | 2;
  return;
}


