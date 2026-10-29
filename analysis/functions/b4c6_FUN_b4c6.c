/* Entry b4c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_b4c6(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 0x40) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      DAT_088f = DAT_088f & 0xbf;
      DAT_0890 = DAT_0890 | 0x40;
      _DAT_0b32 = CONCAT11((char)(_DAT_0b32 + 1 >> 8),(char)(_DAT_0b32 + 1) - (0xfffe < _DAT_0b32));
      FUN_57e9(&DAT_0a01);
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
      FUN_57e9(&DAT_0a03);
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
      FUN_57e9(&DAT_0a05);
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
      FUN_57e9(&DAT_0a08);
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
      FUN_57e9(0xa09);
    }
    else {
      bVar1 = DAT_00e9;
      if ((bVar1 & 0x10) != 0) {
        bVar1 = DAT_00f0;
        DAT_00f0 = bVar1 & 0xf7;
        DAT_0891 = 0;
        DAT_0890 = DAT_0890 & 0xbf;
      }
    }
  }
  return;
}


