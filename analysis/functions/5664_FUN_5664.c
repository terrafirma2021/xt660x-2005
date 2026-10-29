/* Entry 5664 */

void FUN_5664(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  short sVar5;
  
  bVar1 = DAT_088c;
  if (((((~bVar1 & 2) == 0) && (bVar1 = DAT_089a, (~bVar1 & 2) == 0)) &&
      (bVar1 = DAT_00e1, (bVar1 & 8) == 0)) &&
     (bVar4 = DAT_0c03, bVar1 = DAT_0925, (bVar4 & 0x1f) == bVar1)) {
    sVar5 = DAT_0044;
    DAT_0dde = sVar5 + DAT_4f20;
    sVar3 = DAT_0af0;
    sVar2 = DAT_0aa2;
    sVar5 = DAT_0dde;
    sVar5 = (sVar3 + sVar2) - sVar5;
    if (sVar5 < 0) {
      sVar5 = DAT_0dde;
    }
    else {
      sVar2 = DAT_0dde;
      sVar5 = sVar5 + sVar2;
    }
    DAT_0b7a = sVar5;
    DAT_0056 = sVar5;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 | 0xc0;
    DAT_004e = 8;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 8;
    bVar1 = DAT_0a92;
    DAT_0a92 = bVar1 | 8;
  }
  return;
}


