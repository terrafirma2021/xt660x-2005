/* Entry 6af6 */

void FUN_6af6(undefined2 param_1)

{
  byte extraout_A;
  
  DAT_08dc = (byte)((ushort)param_1 >> 8);
  if (DAT_08dc < 0x17) {
    DAT_09a1 = DAT_09a1 & 0xfe;
  }
  else {
    DAT_09a1 = DAT_09a1 | 1;
  }
  if (DAT_08dc < 0x1c) {
    DAT_09a1 = DAT_09a1 & 0xe7 | 4;
  }
  else {
    if ((DAT_09a1 & 8) != 0) {
      DAT_09a1 = DAT_09a1 | 0x10;
    }
    DAT_09a1 = DAT_09a1 & 0xfb | 8;
  }
  if ((~DAT_09a1 & 1) == 0) {
    if (DAT_18b4 <= DAT_09ab) {
      DAT_09a1 = DAT_09a1 & 0xfd;
    }
  }
  else if (DAT_18b3 <= DAT_09aa) {
    DAT_09a1 = DAT_09a1 | 2;
  }
  if ((((~DAT_0881 & 0x10) == 0) &&
      (((~DAT_09a1 & 0x10) != 0 ||
       ((DAT_18b5 != -0x80 &&
        (lookup_u8_uniform_axis(), DAT_0cae = extraout_A, extraout_A <= DAT_0caf)))))) &&
     ((~DAT_09a1 & 0x40) == 0)) {
    DAT_09a1 = DAT_09a1 | 0x40;
  }
  if ((((DAT_09a1 & 0x80) == 0) || ((DAT_09a1 & 4) == 0)) || ((DAT_09a1 & 0x40) == 0)) {
    DAT_09a1 = DAT_09a1 & 0xdf;
    DAT_09ac = 0;
LAB_6ba3:
    if ((~DAT_0881 & 0x20) == 0) goto LAB_6ba8;
  }
  else {
    DAT_09a1 = DAT_09a1 | 0x20;
    if (DAT_09ac < DAT_18c8) goto LAB_6ba3;
  }
  DAT_09a1 = DAT_09a1 & 0x9f;
  DAT_09ac = 0;
LAB_6ba8:
  if (((DAT_0d5a != -0x80) && (DAT_0d87 != '\t')) &&
     (((~DAT_08a0 & 4) == 0 && ((~DAT_08b2 & 0x80) == 0)))) {
    if ((~DAT_08b0 & 0x10) == 0) {
      if ((((((DAT_4e4c <= DAT_08f4) && (DAT_4e4e <= DAT_0900)) && (DAT_4e50 <= DAT_08e8)) &&
           ((DAT_0d87 != '\t' || ((DAT_0889 & 0x80) != 0)))) &&
          (((~DAT_0bab & 8) == 0 && (((~DAT_08af & 4) == 0 && ((~DAT_0bac & 0x80) == 0)))))) &&
         ((~DAT_09a1 & 2) == 0)) {
        if ((DAT_09a1 & 0x80) != 0) {
          DAT_08c2 = 0x20;
          DAT_08c3 = 0;
          return;
        }
        if ((DAT_08b6 & 0x40) == 0) {
          DAT_08b6 = DAT_08b6 | 0x40;
          DAT_08c2 = 0x20;
          DAT_08c3 = 0;
          return;
        }
        if (DAT_0b43 <= DAT_4e4b) {
          DAT_08c2 = 0x20;
          DAT_08c3 = 0;
          return;
        }
        if ((~DAT_08b0 & 0x10) != 0) {
          DAT_08c2 = 0x20;
          DAT_08c3 = 0;
          return;
        }
        if ((~DAT_08b9 & 0x10) != 0) {
          DAT_08b0 = DAT_08b0 | 0x10;
          DAT_08c2 = 0x20;
          DAT_08c3 = 0;
          DAT_0bd2 = DAT_0bd2 | 0x40;
          return;
        }
        DAT_08b0 = DAT_08b0 | 0x10;
        DAT_08b9 = DAT_08b9 | 0x10;
        DAT_08c2 = 0x20;
        DAT_08c3 = 0;
        DAT_0bd2 = DAT_0bd2 | 0x44;
        return;
      }
    }
    else if (((DAT_09a1 & 2) != 0) && ((DAT_08b0 & 0x10) != 0)) {
      DAT_08b0 = DAT_08b0 & 0xef;
      DAT_0bd2 = DAT_0bd2 | 0x40;
    }
    DAT_0b43 = 0;
    DAT_08b6 = DAT_08b6 & 0xbf;
  }
  DAT_08c2 = 0x20;
  DAT_08c3 = 0;
  return;
}


