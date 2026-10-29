/* Entry b97f */

void FUN_b97f(void)

{
  short sVar1;
  undefined2 uVar2;
  byte bVar3;
  
  DAT_0be4 = (DAT_0be4 + 1) - (0xfe < DAT_0be4);
  if (DAT_4f0d <= DAT_0be4) {
    DAT_0be3 = (DAT_0be3 + 1) - (0xfe < DAT_0be3);
    if (DAT_4f0b < DAT_0be3) {
      DAT_0893 = DAT_0893 & 0xaf;
      DAT_0be3 = 0;
    }
    else {
      DAT_0893 = DAT_0893 | 4;
      if (DAT_4e7b != 0) {
        sVar1 = DAT_0044;
        DAT_005c = sVar1 + 2;
        bVar3 = DAT_004c;
        DAT_004c = bVar3 & 0xbf;
        bVar3 = DAT_0048;
        DAT_0048 = bVar3 & 0xef | 0x20;
        DAT_004e = 0x40;
        uVar2 = DAT_0044;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        sVar1 = DAT_005c;
        DAT_005c = (ushort)DAT_4e7b * 0xfa + sVar1;
        bVar3 = DAT_004c;
        DAT_004c = bVar3 & 0xbf;
        bVar3 = DAT_0048;
        DAT_0048 = bVar3 | 0x30;
        DAT_004e = 0x40;
      }
    }
    DAT_0be4 = 0;
  }
  return;
}


