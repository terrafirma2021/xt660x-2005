/* Entry ee78 */

void FUN_ee78(void)

{
  short sVar1;
  byte bVar2;
  
  if ((~DAT_08a0 & 4) != 0) {
    return;
  }
  if ((~DAT_08b2 & 0x80) != 0) {
    return;
  }
  bVar2 = DAT_00e1;
  if ((bVar2 & 8) != 0) {
    return;
  }
  if ((~DAT_0a92 & 8) != 0) {
    return;
  }
  if ((~DAT_0884 & 4) != 0) {
    return;
  }
  if ((~DAT_0d08 & 1) != 0) {
    return;
  }
  if ((~DAT_0884 & 2) != 0) {
    return;
  }
  if ((~DAT_088c & 0x80) != 0) {
    return;
  }
  if ((~DAT_0885 & 0x40) != 0) {
    return;
  }
  if ((~DAT_0bf8 & 0x80) != 0) {
    return;
  }
  if ((~DAT_088c & 2) != 0) {
    return;
  }
  if ((~DAT_089a & 2) != 0) {
    return;
  }
  if (DAT_0c04 == DAT_0925) {
    if ((DAT_089b & 0x20) != 0) {
      if ((DAT_089b & 0x10) == 0) {
        if ((DAT_089b & 2) == 0) {
          if (DAT_0b28 <= DAT_0b2a) {
            DAT_089b = DAT_089b | 2;
            DAT_0b2a = 0;
            DAT_0b29 = DAT_0b29 + 1;
            return;
          }
          DAT_0b2a = DAT_0b2a + 1;
          goto LAB_ef50;
        }
      }
      else {
        DAT_089b = DAT_089b & 0xef | 10;
      }
      if (DAT_0b29 < DAT_0b27) {
        DAT_0b29 = DAT_0b29 + 1;
        return;
      }
      DAT_089b = DAT_089b & 0xfd;
      DAT_0b2a = DAT_0b2a + 1;
      DAT_0b29 = 0;
    }
LAB_ef50:
    bVar2 = DAT_0049;
    DAT_0049 = bVar2 | 0xc0;
    DAT_004e = 8;
    bVar2 = DAT_004c;
    DAT_004c = bVar2 | 8;
    DAT_0b7a = DAT_0af0 + DAT_0aa2;
    goto LAB_ef63;
  }
  if (DAT_0c04 == 0) {
    if ((DAT_0925 != 10) && (DAT_0925 != 9)) {
      return;
    }
LAB_eee7:
    if ((DAT_089b & 0x20) != 0) {
      return;
    }
  }
  else {
    if (6 < DAT_0c04) {
      if (DAT_0c04 != 10) {
        return;
      }
      if (DAT_0925 != 9) {
        return;
      }
      goto LAB_eee7;
    }
    if ((DAT_0c04 < DAT_0925) || ((DAT_089b & 0x20) != 0)) {
      return;
    }
  }
  bVar2 = DAT_0049;
  DAT_0049 = bVar2 | 0xc0;
  DAT_004e = 8;
  bVar2 = DAT_004c;
  DAT_004c = bVar2 | 8;
  sVar1 = DAT_0044;
  DAT_0b7a = sVar1 + 10;
LAB_ef63:
  DAT_0056 = DAT_0b7a;
  DAT_0a92 = DAT_0a92 | 8;
  return;
}


