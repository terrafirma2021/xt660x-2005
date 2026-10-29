/* Entry b900 */

void FUN_b900(void)

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
      sVar1 = DAT_0044;
      DAT_0056 = sVar1 + 2;
      bVar3 = DAT_004c;
      DAT_004c = bVar3 & 0xf7;
      bVar3 = DAT_0049;
      DAT_0049 = bVar3 | 0xc0;
      DAT_004e = 8;
      uVar2 = DAT_0044;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      sVar1 = DAT_0056;
      DAT_0056 = DAT_4f12 + sVar1;
      bVar3 = DAT_004c;
      DAT_004c = bVar3 & 0xf7;
      bVar3 = DAT_0049;
      DAT_0049 = bVar3 & 0xbf | 0x80;
      DAT_004e = 8;
    }
    DAT_0be4 = 0;
  }
  return;
}


