/* Entry f424 */

void FUN_f424(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  short sVar5;
  
  bVar1 = DAT_004c;
  if ((bVar1 & 8) == 0) {
LAB_f486:
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xf7;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
  }
  else {
    bVar1 = DAT_0880;
    if ((((~bVar1 & 0x40) == 0) && (bVar1 = DAT_0880, (~bVar1 & 4) == 0)) &&
       (bVar1 = DAT_088d, (~bVar1 & 0x20) == 0)) {
      bVar1 = DAT_00e1;
      if ((bVar1 & 8) == 0) goto LAB_f498;
      bVar4 = DAT_0c03;
      bVar1 = DAT_0924;
      if ((bVar4 & 0x1f) != bVar1) goto LAB_f495;
      bVar1 = DAT_0a2e._0_1_;
      bVar4 = DAT_0d9e;
      if (bVar1 < bVar4) {
LAB_f476:
        bVar1 = DAT_0a93;
        DAT_0a93 = bVar1 & 0xfd;
        sVar5 = DAT_0af0;
        sVar2 = DAT_0aa4;
        sVar5 = sVar5 + sVar2;
      }
      else {
        sVar3 = DAT_0af0;
        sVar2 = DAT_0aa4;
        sVar5 = DAT_0b7a;
        sVar5 = (sVar3 + sVar2) - sVar5;
        DAT_0e32 = sVar5;
        sVar2 = DAT_0a9a;
        if (-1 < sVar5 - sVar2) goto LAB_f476;
        bVar1 = DAT_0a93;
        DAT_0a93 = bVar1 | 2;
        sVar5 = DAT_0b7a;
        sVar2 = DAT_0a9a;
        sVar5 = sVar5 + sVar2;
      }
      DAT_0056 = sVar5;
      bVar1 = DAT_0a92;
      DAT_0a92 = bVar1 | 0x80;
      goto LAB_f486;
    }
  }
LAB_f495:
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0xf7;
LAB_f498:
  DAT_004e = 8;
  return;
}


