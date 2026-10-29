/* Entry ef6d */

void FUN_ef6d(byte param_1)

{
  byte bVar1;
  short sVar2;
  
  if (((~DAT_08a0 & 4) != 0) || ((~DAT_08b2 & 0x80) != 0)) {
    return;
  }
  if (param_1 != DAT_0924) {
    if (param_1 < DAT_0924) {
      return;
    }
    if ((~DAT_0a92 & 0x80) != 0) {
      return;
    }
    DAT_0aa4 = DAT_0db4;
  }
  bVar1 = DAT_00e1;
  if ((bVar1 & 8) == 0) {
    if ((((((((~DAT_088c & 2) == 0) && ((~DAT_089a & 2) == 0)) && ((~DAT_089b & 0x80) == 0)) &&
          (((~DAT_0884 & 4) == 0 && ((~DAT_0d08 & 1) == 0)))) &&
         (((~DAT_0884 & 2) == 0 && (((~DAT_088c & 0x80) == 0 && ((~DAT_0885 & 0x40) == 0)))))) &&
        ((~DAT_0bf8 & 0x80) == 0)) && ((~DAT_0a92 & 8) == 0)) {
      DAT_0b7a = DAT_0af0 + DAT_0db0;
      DAT_0056 = DAT_0b7a;
      bVar1 = DAT_0049;
      DAT_0049 = bVar1 | 0xc0;
      DAT_004e = 8;
      bVar1 = DAT_004c;
      DAT_004c = bVar1 | 8;
      DAT_0a92 = DAT_0a92 | 8;
    }
    return;
  }
  if (((((~DAT_0884 & 4) == 0) && ((~DAT_0884 & 2) == 0)) && ((~DAT_0885 & 0x40) == 0)) &&
     ((((~DAT_0bf8 & 0x80) == 0 && ((~DAT_088d & 0x20) == 0)) && ((DAT_0880 & 4) == 0)))) {
    if ((DAT_0a2e._0_1_ < DAT_0d9e) ||
       (DAT_0e2a = (DAT_0af0 + DAT_0aa4) - DAT_0b7a, -1 < DAT_0e2a - DAT_0a9a)) {
      DAT_0a93 = DAT_0a93 & 0xfd;
      sVar2 = DAT_0af0 + DAT_0aa4;
    }
    else {
      DAT_0a93 = DAT_0a93 | 2;
      sVar2 = DAT_0b7a + DAT_0a9a;
    }
    DAT_0056 = sVar2;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 8;
    DAT_0a92 = DAT_0a92 | 0x80;
    return;
  }
  return;
}


