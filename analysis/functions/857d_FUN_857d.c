/* Entry 857d */

void FUN_857d(void)

{
  byte bVar1;
  
  if ((~DAT_088b & 0x40) == 0) {
    bVar1 = DAT_088b;
    if ((DAT_088b & 0x80) != 0) {
      return;
    }
  }
  else {
    bVar1 = DAT_088b & 0xbf;
    if (((DAT_0ca8 & 1) != 0) && ((~DAT_0881 & 0x10) == 0)) {
      if ((~bVar1 & 0x80) != 0) {
        DAT_088b = bVar1;
        return;
      }
      DAT_088b = bVar1 | 0x80;
      FUN_ec98();
      DAT_0a22 = DAT_0a26;
      DAT_0a1c = DAT_0a1e;
      FUN_ed11();
      DAT_0a1d = DAT_0a1f;
      DAT_0a24 = DAT_0a28;
      return;
    }
    if ((DAT_088b & 0x80) != 0) {
      bVar1 = DAT_088b & 0x3f;
      DAT_0a22 = 0;
      DAT_0a24 = 0;
      DAT_0a1c = DAT_18e0;
      if (0x16 < DAT_18e0) {
        DAT_0a1c = 0x16;
      }
      if (DAT_0a1c < 0xc) {
        DAT_0a1d = DAT_0a1c;
        if (DAT_0a1c == 0xb) {
          DAT_0a1c = 10;
          DAT_0a1d = DAT_0a1c;
        }
      }
      else {
        DAT_0a1c = DAT_0a1c - 0xc;
        DAT_0a1d = DAT_0a1c;
      }
    }
  }
  DAT_088b = bVar1;
  DAT_0a1f = DAT_18e0;
  if (0x16 < DAT_18e0) {
    DAT_0a1f = 0x16;
  }
  if (DAT_0a1f < 0xc) {
    if (DAT_0a1f == 0xb) {
      DAT_0a1f = 10;
    }
  }
  else {
    DAT_0a1f = DAT_0a1f - 0xc;
  }
  DAT_0a28 = 0;
  DAT_0a26 = 0;
  DAT_0a1e = DAT_0a1f;
  return;
}


