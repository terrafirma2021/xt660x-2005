/* Entry ed6d */

void FUN_ed6d(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  
  bVar1 = DAT_0885;
  if (((~bVar1 & 0x40) != 0) && (bVar1 = DAT_0884, (bVar1 & 2) == 0)) {
    cVar4 = DAT_0c04;
    if (cVar4 != '\a') {
      return;
    }
    bVar1 = DAT_0880;
    if ((((~bVar1 & 0x40) == 0) || (bVar1 = DAT_0a2e._0_1_, bVar5 = DAT_0d9e, bVar1 < bVar5)) ||
       (sVar6 = DAT_0044, sVar3 = DAT_0b7a, sVar2 = DAT_0a9a, -1 < (sVar6 - sVar3) - sVar2)) {
      bVar1 = DAT_0a93;
      DAT_0a93 = bVar1 & 0xfd;
      sVar6 = DAT_0044;
    }
    else {
      bVar1 = DAT_0a93;
      DAT_0a93 = bVar1 | 2;
      sVar6 = DAT_0b7a;
      sVar2 = DAT_0a9a;
      sVar6 = sVar6 + sVar2;
    }
    DAT_0056 = sVar6 + 10;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xf7;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
    bVar1 = DAT_0a92;
    DAT_0a92 = bVar1 | 0x80;
    return;
  }
  return;
}


