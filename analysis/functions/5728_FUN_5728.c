/* Entry 5728 */

void FUN_5728(void)

{
  undefined2 uVar1;
  short sVar2;
  byte bVar3;
  
  while (bVar3 = DAT_0086, (~bVar3 & 0x80) != 0) {
    sVar2 = DAT_0e3c;
    DAT_0e3c = sVar2 + 1;
  }
  uVar1 = DAT_0090;
  DAT_0e3e = uVar1;
  uVar1 = DAT_0092;
  DAT_0e40 = uVar1;
  uVar1 = DAT_0094;
  DAT_0e42 = uVar1;
  uVar1 = DAT_0096;
  RAM0e44 = uVar1;
  uVar1 = DAT_0098;
  RAM0e46 = uVar1;
  uVar1 = DAT_009a;
  RAM0e48 = uVar1;
  bVar3 = DAT_0e3b;
  bVar3 = bVar3 & 3;
  if (bVar3 != 0) {
    if (bVar3 == 1) {
      uVar1 = DAT_009c;
      DAT_0e4c = uVar1;
      goto LAB_5784;
    }
    if (bVar3 == 2) {
      uVar1 = DAT_009c;
      DAT_0e4e = uVar1;
      goto LAB_5784;
    }
    if (bVar3 == 3) {
      uVar1 = DAT_009c;
      DAT_0e50 = uVar1;
      goto LAB_5784;
    }
  }
  uVar1 = DAT_009c;
  RAM0e4a = uVar1;
LAB_5784:
  bVar3 = DAT_0e3b;
  bVar3 = bVar3 & 3;
  if (bVar3 != 0) {
    if (bVar3 == 1) {
      uVar1 = DAT_009e;
      DAT_0e54 = uVar1;
      return;
    }
    if (bVar3 == 2) {
      uVar1 = DAT_009e;
      DAT_0e56 = uVar1;
      return;
    }
    if (bVar3 == 3) {
      uVar1 = DAT_009e;
      DAT_0e58 = uVar1;
      return;
    }
  }
  uVar1 = DAT_009e;
  DAT_0e52 = uVar1;
  return;
}


