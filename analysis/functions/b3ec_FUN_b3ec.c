/* Entry b3ec */

void FUN_b3ec(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 0x40) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      DAT_088f = DAT_088f & 0x7f;
      DAT_0890 = DAT_0890 | 0x80;
      DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
      FUN_57e9(&DAT_0a00);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 0x40;
  }
  if ((~DAT_0891 & 0x20) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(&DAT_0a02);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 0x20;
  }
  if ((~DAT_0891 & 0x10) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(&DAT_0a04);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 0x10;
  }
  if ((~DAT_0891 & 8) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(&DAT_0a06);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 8;
  }
  if ((~DAT_0891 & 4) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(&DAT_0a07);
    }
    else {
      bVar1 = DAT_00e9;
      if ((bVar1 & 0x10) != 0) {
        bVar1 = DAT_00f0;
        DAT_00f0 = bVar1 & 0xf7;
        DAT_0891 = 0;
        DAT_0890 = DAT_0890 & 0x7f;
      }
    }
  }
  return;
}


