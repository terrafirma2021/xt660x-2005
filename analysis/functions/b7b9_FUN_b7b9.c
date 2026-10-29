/* Entry b7b9 */

void FUN_b7b9(void)

{
  byte bVar1;
  
  bVar1 = DAT_0891;
  if ((~bVar1 & 2) == 0) {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
  }
  else {
    bVar1 = DAT_0be8;
    DAT_0be8 = bVar1 & 0xfb;
    bVar1 = DAT_0be9;
    DAT_0be9 = bVar1 | 4;
  }
  bVar1 = DAT_0d15;
  if (bVar1 < 0xb) {
    FUN_57e9(bVar1 + 0xa50);
    bVar1 = DAT_0d15;
    DAT_0d15 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    FUN_5e63();
    FUN_5f35();
    bVar1 = DAT_0d08;
    DAT_0d08 = bVar1 | 0x40;
    bVar1 = DAT_0be9;
    DAT_0be9 = bVar1 & 0xfb;
    bVar1 = DAT_0891;
    DAT_0891 = bVar1 & 0xfd;
  }
  return;
}


