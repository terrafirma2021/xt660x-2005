/* Entry b4c6 */

void FUN_b4c6(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 0x40) == 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) == 0) {
      bVar3 = DAT_088f;
      DAT_088f = bVar3 & 0xbf;
      bVar3 = DAT_0890;
      DAT_0890 = bVar3 | 0x40;
      uVar2 = RAM0b32;
      bVar3 = (byte)(uVar2 + 1);
      RAM0b32 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),
                         bVar3 - (0xfffe < uVar2));
      uVar1 = DAT_0a00;
      FUN_57e9(&DAT_0a01);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 0x40;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 0x20) == 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) == 0) {
      uVar1 = DAT_0a00;
      FUN_57e9(&DAT_0a03);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 0x20;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 0x10) == 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) == 0) {
      uVar1 = DAT_0a00;
      FUN_57e9(&DAT_0a05);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 0x10;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 8) == 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) == 0) {
      uVar1 = DAT_0b32;
      FUN_57e9(&DAT_0a08);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 8;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 4) == 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) == 0) {
      uVar1 = DAT_0b33;
      FUN_57e9(&UNK_0a09);
    }
    else {
      bVar3 = DAT_00e9;
      if ((bVar3 & 0x10) != 0) {
        bVar3 = DAT_00f0;
        DAT_00f0 = bVar3 & 0xf7;
        DAT_0891 = 0;
        bVar3 = DAT_0890;
        DAT_0890 = bVar3 & 0xbf;
      }
    }
  }
  return;
}


