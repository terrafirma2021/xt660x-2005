/* Entry b7b9 */

void FUN_b7b9(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0be8 = DAT_0be8 & 0xfb;
    DAT_0be9 = DAT_0be9 | 4;
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
  }
  if (DAT_0d15 < 0xb) {
    FUN_57e9(DAT_0d15 + 0xa50);
    DAT_0d15 = (DAT_0d15 + 1) - (0xfe < DAT_0d15);
  }
  else {
    FUN_5e63();
    FUN_5f35();
    DAT_0d08 = DAT_0d08 | 0x40;
    DAT_0be9 = DAT_0be9 & 0xfb;
    DAT_0891 = DAT_0891 & 0xfd;
  }
  return;
}


