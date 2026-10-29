/* Entry b900 */

void FUN_b900(void)

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
      sVar2 = DAT_0044;
      DAT_0056 = sVar2 + 2;
      bVar1 = DAT_004c;
      DAT_004c = bVar1 & 0xf7;
      bVar1 = DAT_0049;
      DAT_0049 = bVar1 | 0xc0;
      DAT_004e = 8;
      uVar3 = DAT_0044;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      sVar2 = DAT_0056;
      DAT_0056 = DAT_4f12 + sVar2;
      bVar1 = DAT_004c;
      DAT_004c = bVar1 & 0xf7;
      bVar1 = DAT_0049;
      DAT_0049 = bVar1 & 0xbf | 0x80;
      DAT_004e = 8;
    }
    DAT_0be4 = 0;
  }
  return;
}


