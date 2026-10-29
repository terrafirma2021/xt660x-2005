/* Entry bc2e */

void FUN_bc2e(void)

{
  byte bVar1;
  ushort uVar2;
  
  if ((DAT_0880 & 1) != 0) {
    DAT_0b5c = (DAT_0b5c + 1) - (0xfe < DAT_0b5c);
  }
  if (((DAT_0880 & 1) == 0) || ((~DAT_0883 & 4) != 0)) {
    DAT_0baa = 0;
  }
  else {
    DAT_0baa = (DAT_0baa + 1) - (0xfe < DAT_0baa);
  }
  DAT_0883 = DAT_0883 & 0xfb;
  if ((~DAT_0881 & 0x10) == 0) {
    DAT_09b5 = (DAT_09b5 + 1) - (0xfe < DAT_09b5);
  }
  else {
    DAT_09b5 = '\0';
  }
  if ((DAT_08b5 & 0x40) == 0) {
    DAT_0b3e = '\0';
    DAT_0b4b = (DAT_0b4b + 1) - (0xfe < DAT_0b4b);
  }
  else {
    DAT_0b4b = '\0';
    DAT_0b3e = (DAT_0b3e + 1) - (0xfe < DAT_0b3e);
  }
  if ((DAT_0bfe & 0x80) == 0) {
LAB_bcca:
    DAT_0b3f = '\0';
    DAT_0b4c = '\0';
    DAT_08b5 = DAT_08b5 & 0xf9;
  }
  else if ((DAT_08b5 & 4) == 0) {
    if ((DAT_08b5 & 2) == 0) goto LAB_bcca;
    DAT_0b3f = '\0';
    DAT_0b4c = (DAT_0b4c + 1) - (0xfe < DAT_0b4c);
  }
  else {
    DAT_0b4c = '\0';
    DAT_0b3f = (DAT_0b3f + 1) - (0xfe < DAT_0b3f);
  }
  if ((DAT_08b5 & 0x80) == 0) {
    DAT_0b40 = '\0';
    DAT_0b4d = (DAT_0b4d + 1) - (0xfe < DAT_0b4d);
  }
  else {
    DAT_0b4d = '\0';
    DAT_0b40 = (DAT_0b40 + 1) - (0xfe < DAT_0b40);
  }
  if ((DAT_08b5 & 0x20) == 0) {
    DAT_0b42 = '\0';
    DAT_0b4f = (DAT_0b4f + 1) - (0xfe < DAT_0b4f);
  }
  else {
    DAT_0b4f = '\0';
    DAT_0b42 = (DAT_0b42 + 1) - (0xfe < DAT_0b42);
  }
  if ((DAT_08b5 & 0x10) == 0) {
    DAT_0b41 = '\0';
    DAT_0b4e = (DAT_0b4e + 1) - (0xfe < DAT_0b4e);
  }
  else {
    DAT_0b4e = '\0';
    DAT_0b41 = (DAT_0b41 + 1) - (0xfe < DAT_0b41);
  }
  if ((DAT_08b6 & 4) == 0) {
    DAT_0bc6 = '\0';
    DAT_0bc7 = (DAT_0bc7 + 1) - (0xfe < DAT_0bc7);
  }
  else {
    DAT_0bc7 = '\0';
    DAT_0bc6 = (DAT_0bc6 + 1) - (0xfe < DAT_0bc6);
  }
  if ((((~DAT_08b6 & 2) == 0) &&
      (((DAT_0d87 != '\t' || ((DAT_0896._0_1_ & 0x10) != 0)) && ((~DAT_0881 & 0x10) == 0)))) &&
     (DAT_0bca != '\0')) {
    DAT_0bcd = (DAT_0bcd + 1) - (0xfe < DAT_0bcd);
  }
  else {
    DAT_0bcd = '\0';
  }
  if ((DAT_08b7 & 0x80) == 0) {
    DAT_0b48 = 0;
    DAT_0b52 = (DAT_0b52 + 1) - (0xfe < DAT_0b52);
  }
  else {
    DAT_0b52 = '\0';
  }
  if ((DAT_08b7 & 0x40) == 0) {
    DAT_0b49 = '\0';
    DAT_0b53 = (DAT_0b53 + 1) - (0xfe < DAT_0b53);
  }
  else {
    DAT_0b53 = '\0';
    DAT_0b49 = (DAT_0b49 + 1) - (0xfe < DAT_0b49);
  }
  if ((DAT_08b7 & 0x20) == 0) {
    DAT_0bcf = '\0';
    DAT_0bd0 = (DAT_0bd0 + 1) - (0xfe < DAT_0bd0);
  }
  else {
    DAT_0bd0 = '\0';
    DAT_0bcf = (DAT_0bcf + 1) - (0xfe < DAT_0bcf);
  }
  bVar1 = DAT_0bd2;
  if (((DAT_0d60 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    if (DAT_4e91 == -0x80) {
LAB_be39:
      if ((DAT_08b1 & 0x10) != 0) {
        DAT_08b1 = DAT_08b1 & 0xef;
        bVar1 = DAT_0bd2 | 0x20;
      }
    }
    else if ((DAT_08dd < DAT_4e96) && (DAT_4e97 < DAT_08dd)) {
      if ((~DAT_08b6 & 8) == 0) {
        DAT_0b0c = (DAT_0b0c + 1) - (0xfe < DAT_0b0c);
        if (DAT_0d8a <= DAT_0b0c) goto LAB_be39;
      }
      else {
        DAT_08b6 = DAT_08b6 & 0xf7;
        DAT_0b0c = 0;
      }
    }
    else if ((DAT_08b6 & 8) == 0) {
      DAT_08b6 = DAT_08b6 | 8;
      DAT_0b0c = 0;
    }
    else {
      DAT_0b0c = (DAT_0b0c + 1) - (0xfe < DAT_0b0c);
      if ((DAT_0d8a <= DAT_0b0c) && ((~DAT_08b1 & 0x10) == 0)) {
        DAT_08b1 = DAT_08b1 | 0x10;
        bVar1 = DAT_0bd2 | 0x20;
        if ((~DAT_08ba & 0x10) == 0) {
          DAT_08ba = DAT_08ba | 0x10;
          bVar1 = DAT_0bd2 | 0x22;
        }
      }
    }
  }
  DAT_0bd2 = bVar1;
  if ((((DAT_0d52 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) &&
     (DAT_4e3c <= DAT_0baa)) {
    if ((~DAT_08af & 0x40) == 0) {
      DAT_08af = DAT_08af | 0x40;
      DAT_0bd2 = DAT_0bd2 | 0x80;
    }
    if ((~DAT_08b8 & 0x40) == 0) {
      DAT_08b8 = DAT_08b8 | 0x40;
      DAT_0bd2 = DAT_0bd2 | 8;
    }
  }
  if (((DAT_0d56 == -0x80) || ((~DAT_08af & 8) != 0)) ||
     (((~DAT_08a0 & 4) != 0 || ((~DAT_08b2 & 0x80) != 0)))) goto LAB_bfac;
  if (DAT_0b9c <= DAT_0900) {
    DAT_0b9c = DAT_0900;
    DAT_089e = DAT_089e | 0x80;
  }
  uVar2 = DAT_0b9c - DAT_4e44;
  if (DAT_0b9c < DAT_4e44) {
    uVar2 = 0;
  }
  if (DAT_0900 < uVar2) {
    DAT_0b9c = DAT_0900 + DAT_4e44;
    DAT_089e = DAT_089e & 0x7f;
  }
  if ((~DAT_089e & 0x80) == 0) {
    if ((DAT_089e & 0x40) != 0) {
LAB_bf14:
      if (DAT_0b9e < DAT_4e46) {
        DAT_0b9e = (DAT_0b9e + 1) - (0xfe < DAT_0b9e);
      }
    }
  }
  else if ((~DAT_089e & 0x40) == 0) goto LAB_bf14;
  uVar2 = DAT_0bb0 - DAT_0bb2;
  if (DAT_0bb0 < DAT_0bb2) {
    uVar2 = CONCAT11((~(byte)(uVar2 >> 8) + 1) - ((char)-(char)uVar2 != '\0'),-(char)uVar2);
  }
  if (DAT_4e48 <= uVar2) {
    if ((DAT_0b9e < DAT_4e46) && ((DAT_08af & 4) != 0)) {
      DAT_08af = DAT_08af & 0xfb;
      DAT_0bd2 = DAT_0bd2 | 0x80;
      if (((~DAT_08af & 8) == 0) && ((~DAT_08b1 & 8) == 0)) {
        DAT_0889 = DAT_0889 | 2;
        DAT_0b94 = 0;
        DAT_0b92 = DAT_0a83;
        DAT_0b95 = DAT_0a83;
      }
    }
    DAT_0b9e = 0;
  }
  if (DAT_0b9e == DAT_4e46) {
    bVar1 = DAT_0bd2;
    if ((~DAT_08af & 4) == 0) {
      DAT_08af = DAT_08af | 4;
      bVar1 = DAT_0bd2 | 0x80;
      if ((~DAT_08b8 & 4) == 0) {
        DAT_08b8 = DAT_08b8 | 4;
        bVar1 = DAT_0bd2 | 0x88;
      }
    }
    DAT_0bd2 = bVar1;
    DAT_08b6 = DAT_08b6 | 1;
    DAT_0889 = DAT_0889 & 0xfd;
    DAT_0b92 = 0;
  }
  if ((~DAT_089e & 0x80) == 0) {
    DAT_089e = DAT_089e & 0xbf;
  }
  else {
    DAT_089e = DAT_089e | 0x40;
  }
  DAT_0bb2 = DAT_0bb0;
LAB_bfac:
  if (((DAT_08f8._0_1_ == '\n') && ((~DAT_0880 & 1) == 0)) && (DAT_0bce < 0x10)) {
    DAT_0b7e = (DAT_0b7e + 1) - (0xfe < DAT_0b7e);
    if (0x1d < DAT_0b7e) {
      DAT_08bf = DAT_08bf | 1;
      FUN_5843();
      return;
    }
  }
  else {
    DAT_0b7e = 0;
  }
  if ((((~DAT_08a3 & 0x80) == 0) && ((DAT_08a2 & 0x80) != 0)) &&
     (DAT_0b34 = (DAT_0b34 + 1) - (0xfe < DAT_0b34), DAT_4e32 <= DAT_0b34)) {
    DAT_08a3 = DAT_08a3 | 0x80;
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) &&
     (DAT_0d0f = (DAT_0d0f + 1) - (0xfe < DAT_0d0f), DAT_4e83 <= DAT_0d0f)) {
    DAT_0d08 = DAT_0d08 | 1;
  }
  if ((((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) && ((DAT_0d07 & 8) != 0)) &&
     (((~DAT_0d07 & 4) == 0 && (DAT_0d0d = (DAT_0d0d + 1) - (0xfe < DAT_0d0d), DAT_4e81 <= DAT_0d0d)
      ))) {
    DAT_0d07 = DAT_0d07 | 4;
    DAT_0d0e = (DAT_0d0e + 1) - (0xfe < DAT_0d0e);
    if (DAT_4e82 <= DAT_0d0e) {
      DAT_0d08 = DAT_0d08 | 1;
    }
  }
  DAT_0882 = DAT_0882 & 0xfd;
  DAT_08bf = DAT_08bf & 0xfe;
  return;
}


