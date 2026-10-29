/* Entry b97f */

void FUN_b97f(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  
  bVar1 = DAT_0be4;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0be4 = bVar1;
  if (DAT_4f0d <= bVar1) {
    bVar1 = DAT_0be3;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0be3 = bVar1;
    if (DAT_4f0b < bVar1) {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xef;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xbf;
      DAT_0be3 = 0;
    }
    else {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 4;
      if (DAT_4e7b != 0) {
        sVar2 = DAT_0044;
        DAT_005c = sVar2 + 2;
        bVar1 = DAT_004c;
        DAT_004c = bVar1 & 0xbf;
        bVar1 = DAT_0048;
        DAT_0048 = bVar1 & 0xef | 0x20;
        DAT_004e = 0x40;
        uVar3 = DAT_0044;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        sVar2 = DAT_005c;
        DAT_005c = (ushort)DAT_4e7b * 0xfa + sVar2;
        bVar1 = DAT_004c;
        DAT_004c = bVar1 & 0xbf;
        bVar1 = DAT_0048;
        DAT_0048 = bVar1 | 0x30;
        DAT_004e = 0x40;
      }
    }
    DAT_0be4 = 0;
  }
  return;
}


