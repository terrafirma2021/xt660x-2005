/* Entry c939 */

void FUN_c939(void)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar5;
  
  DAT_004e = 0x80;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x80) == 0) {
    sVar3 = DAT_005e;
    sVar5 = DAT_0044;
    if ((sVar3 - sVar5 < 0) || (sVar5 = (sVar3 - sVar5) - DAT_4f18, sVar5 < 0)) {
      sVar5 = 0;
    }
    DAT_0e02 = sVar5;
    sVar3 = DAT_0928;
    sVar1 = DAT_0b78;
    DAT_0b74 = (sVar5 + sVar3) - sVar1;
  }
  else {
    bVar2 = DAT_0a18;
    if ((bVar2 & 2) == 0) {
      uVar4 = DAT_0928;
      DAT_0b74 = uVar4;
    }
    else {
      sVar3 = DAT_005e;
      sVar5 = DAT_0044;
      if (((-1 < sVar3 - sVar5) && (sVar1 = DAT_0928, sVar1 = (sVar3 - sVar5) - sVar1, -1 < sVar1))
         && (-1 < sVar1 - DAT_4f18)) {
        uVar4 = DAT_005e;
        DAT_0a2c = uVar4;
        uVar4 = DAT_0928;
        DAT_0b74 = uVar4;
        FUN_c712();
        bVar2 = DAT_004c;
        DAT_004c = bVar2 | 0x80;
        DAT_0b78 = 0;
        bVar2 = DAT_0a18;
        DAT_0a18 = bVar2 | 0x20;
        return;
      }
      sVar5 = DAT_0928;
      sVar3 = DAT_0b74;
      DAT_0b74 = sVar5 + sVar3;
    }
  }
  FUN_c712();
  DAT_0b78 = 0;
  return;
}


