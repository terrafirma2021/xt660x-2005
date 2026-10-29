/* Entry c8c9 */

void FUN_c8c9(void)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar5;
  
  DAT_004e = 0x40;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x40) == 0) {
    sVar3 = DAT_005c;
    sVar5 = DAT_0044;
    if ((sVar3 - sVar5 < 0) || (sVar5 = (sVar3 - sVar5) - DAT_4f18, sVar5 < 0)) {
      sVar5 = 0;
    }
    DAT_0e02 = sVar5;
    sVar3 = DAT_0926;
    sVar1 = DAT_0b76;
    DAT_0b72 = (sVar5 + sVar3) - sVar1;
  }
  else {
    bVar2 = DAT_0a18;
    if ((bVar2 & 8) == 0) {
      uVar4 = DAT_0926;
      DAT_0b72 = uVar4;
    }
    else {
      sVar3 = DAT_005c;
      sVar5 = DAT_0044;
      if (((-1 < sVar3 - sVar5) && (sVar1 = DAT_0926, sVar1 = (sVar3 - sVar5) - sVar1, -1 < sVar1))
         && (-1 < sVar1 - DAT_4f18)) {
        uVar4 = DAT_005c;
        DAT_0a2a = uVar4;
        uVar4 = DAT_0926;
        DAT_0b72 = uVar4;
        FUN_c55b();
        bVar2 = DAT_004c;
        DAT_004c = bVar2 | 0x40;
        DAT_0b76 = 0;
        bVar2 = DAT_0a18;
        DAT_0a18 = bVar2 | 0x80;
        return;
      }
      sVar5 = DAT_0926;
      sVar3 = DAT_0b72;
      DAT_0b72 = sVar5 + sVar3;
    }
  }
  FUN_c55b();
  DAT_0b76 = 0;
  return;
}


