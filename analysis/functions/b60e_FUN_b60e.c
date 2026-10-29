/* Entry b60e */

void FUN_b60e(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0bd2 = DAT_0bd2 & 0xdf;
    DAT_0bd3 = DAT_0bd3 | 0x20;
    DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
    FUN_57e9(&DAT_0a22);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0bd3 = DAT_0bd3 & 0xdf;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


