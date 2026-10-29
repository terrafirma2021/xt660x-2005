/* Entry 5728 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5728(void)

{
  byte bVar1;
  
  while (bVar1 = DAT_0086, (~bVar1 & 0x80) == 0) {
    DAT_0e3c = DAT_0e3c + 1;
  }
  DAT_0e3e = DAT_0090;
  DAT_0e40 = DAT_0092;
  DAT_0e42 = DAT_0094;
  _DAT_0e44 = DAT_0096;
  _DAT_0e46 = DAT_0098;
  _DAT_0e48 = DAT_009a;
  bVar1 = DAT_0e3b & 3;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      DAT_0e4c = DAT_009c;
      goto LAB_5784;
    }
    if (bVar1 == 2) {
      DAT_0e4e = DAT_009c;
      goto LAB_5784;
    }
    if (bVar1 == 3) {
      DAT_0e50 = DAT_009c;
      goto LAB_5784;
    }
  }
  _DAT_0e4a = DAT_009c;
LAB_5784:
  bVar1 = DAT_0e3b & 3;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      DAT_0e54 = DAT_009e;
      return;
    }
    if (bVar1 == 2) {
      DAT_0e56 = DAT_009e;
      return;
    }
    if (bVar1 == 3) {
      DAT_0e58 = DAT_009e;
      return;
    }
  }
  DAT_0e52 = DAT_009e;
  return;
}


