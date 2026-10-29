/* Entry f607 */

void FUN_f607(void)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  
  DAT_004e = 0x40;
  bVar1 = DAT_00e1;
  if ((bVar1 & 0x40) == 0) {
    bVar1 = DAT_0a18;
    if ((~bVar1 & 0x80) == 0) {
      bVar1 = DAT_0a18;
      DAT_0a18 = bVar1 & 0x7f;
      sVar5 = DAT_092a;
    }
    else {
      sVar5 = DAT_0b72;
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
      sVar5 = DAT_0cf6;
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
    sVar2 = DAT_005c;
    DAT_005c = sVar5 + sVar2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0x30;
    DAT_004e = 0x40;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 & 0xf7;
    return;
  }
  bVar1 = DAT_0a18;
  if ((bVar1 & 0x80) == 0) {
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 & 0xf7;
    return;
  }
  sVar2 = DAT_0a2a;
  sVar5 = DAT_0044;
  if ((sVar2 + -5) - sVar5 < 0) {
    sVar5 = DAT_0044;
    sVar5 = sVar5 + 5;
  }
  else {
    sVar5 = DAT_0a2a;
  }
  DAT_005c = sVar5;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 & 0xef | 0x20;
  DAT_004e = 0x40;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 0x40;
  bVar1 = DAT_0a18;
  DAT_0a18 = bVar1 | 8;
  bVar1 = DAT_0a17;
  DAT_0a17 = bVar1 | 8;
  bVar1 = DAT_0a19;
  DAT_0a19 = bVar1 | 8;
  return;
}


