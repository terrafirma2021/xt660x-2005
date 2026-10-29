/* Entry 857d */

void FUN_857d(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  byte bVar3;
  
  bVar3 = DAT_088b;
  if ((~bVar3 & 0x40) == 0) {
    bVar3 = DAT_088b;
    if ((bVar3 & 0x80) != 0) {
      return;
    }
  }
  else {
    bVar3 = DAT_088b;
    DAT_088b = bVar3 & 0xbf;
    bVar3 = DAT_0ca8;
    if (((bVar3 & 1) != 0) && (bVar3 = DAT_0881, (~bVar3 & 0x10) == 0)) {
      bVar3 = DAT_088b;
      if ((~bVar3 & 0x80) != 0) {
        return;
      }
      bVar3 = DAT_088b;
      DAT_088b = bVar3 | 0x80;
      FUN_ec98();
      uVar2 = DAT_0a26;
      DAT_0a22 = uVar2;
      uVar1 = DAT_0a1e;
      DAT_0a1c = uVar1;
      FUN_ed11();
      uVar2 = DAT_0a28;
      DAT_0a24 = uVar2;
      uVar1 = DAT_0a1f;
      DAT_0a1d = uVar1;
      return;
    }
    bVar3 = DAT_088b;
    if ((bVar3 & 0x80) != 0) {
      bVar3 = DAT_088b;
      DAT_088b = bVar3 & 0x7f;
      DAT_0a22 = 0;
      DAT_0a24 = 0;
      bVar3 = DAT_18e0;
      if (0x16 < DAT_18e0) {
        bVar3 = 0x16;
      }
      if (bVar3 < 0xc) {
        if (bVar3 == 0xb) {
          bVar3 = 10;
        }
      }
      else {
        bVar3 = bVar3 - 0xc;
      }
      DAT_0a1c = bVar3;
      DAT_0a1d = bVar3;
    }
  }
  DAT_0a26 = 0;
  bVar3 = DAT_18e0;
  if (0x16 < DAT_18e0) {
    bVar3 = 0x16;
  }
  if (bVar3 < 0xc) {
    if (bVar3 == 0xb) {
      bVar3 = 10;
    }
  }
  else {
    bVar3 = bVar3 - 0xc;
  }
  DAT_0a1e = bVar3;
  DAT_0a28 = 0;
  uVar1 = DAT_0a1e;
  DAT_0a1f = uVar1;
  return;
}


