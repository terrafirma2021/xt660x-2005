/* Entry bc2e */

void FUN_bc2e(void)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  byte bVar8;
  ushort uVar9;
  
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 | 1;
  bVar1 = DAT_0880;
  if ((bVar1 & 1) != 0) {
    bVar1 = DAT_0b5c;
    DAT_0b5c = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0880;
  if (((bVar1 & 1) == 0) || (bVar1 = DAT_0883, (~bVar1 & 4) == 0)) {
    DAT_0baa = 0;
  }
  else {
    bVar1 = DAT_0baa;
    DAT_0baa = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0883;
  DAT_0883 = bVar1 & 0xfb;
  bVar1 = DAT_0881;
  if ((~bVar1 & 0x10) == 0) {
    DAT_09b5 = 0;
  }
  else {
    bVar1 = DAT_09b5;
    DAT_09b5 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b5;
  if ((bVar1 & 0x40) == 0) {
    DAT_0b3e = 0;
    bVar1 = DAT_0b4b;
    DAT_0b4b = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b4b = 0;
    bVar1 = DAT_0b3e;
    DAT_0b3e = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0bfe;
  if ((bVar1 & 0x80) == 0) {
LAB_bcca:
    DAT_0b3f = 0;
    DAT_0b4c = 0;
    bVar1 = DAT_08b5;
    DAT_08b5 = bVar1 & 0xfb;
    bVar1 = DAT_08b5;
    DAT_08b5 = bVar1 & 0xfd;
  }
  else {
    bVar1 = DAT_08b5;
    if ((bVar1 & 4) == 0) {
      bVar1 = DAT_08b5;
      if ((bVar1 & 2) == 0) goto LAB_bcca;
      DAT_0b3f = 0;
      bVar1 = DAT_0b4c;
      DAT_0b4c = (bVar1 + 1) - (0xfe < bVar1);
    }
    else {
      DAT_0b4c = 0;
      bVar1 = DAT_0b3f;
      DAT_0b3f = (bVar1 + 1) - (0xfe < bVar1);
    }
  }
  bVar1 = DAT_08b5;
  if ((bVar1 & 0x80) == 0) {
    DAT_0b40 = 0;
    bVar1 = DAT_0b4d;
    DAT_0b4d = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b4d = 0;
    bVar1 = DAT_0b40;
    DAT_0b40 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b5;
  if ((bVar1 & 0x20) == 0) {
    DAT_0b42 = 0;
    bVar1 = DAT_0b4f;
    DAT_0b4f = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b4f = 0;
    bVar1 = DAT_0b42;
    DAT_0b42 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b5;
  if ((bVar1 & 0x10) == 0) {
    DAT_0b41 = 0;
    bVar1 = DAT_0b4e;
    DAT_0b4e = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b4e = 0;
    bVar1 = DAT_0b41;
    DAT_0b41 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b6;
  if ((bVar1 & 4) == 0) {
    DAT_0bc6 = 0;
    bVar1 = DAT_0bc7;
    DAT_0bc7 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0bc7 = 0;
    bVar1 = DAT_0bc6;
    DAT_0bc6 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b6;
  if ((((~bVar1 & 2) == 0) ||
      (((cVar2 = DAT_0d87, cVar2 == '\t' && (bVar1 = DAT_0896._0_1_, (bVar1 & 0x10) == 0)) ||
       (bVar1 = DAT_0881, (~bVar1 & 0x10) == 0)))) || (cVar2 = DAT_0bca, cVar2 == '\0')) {
    DAT_0bcd = 0;
  }
  else {
    bVar1 = DAT_0bcd;
    DAT_0bcd = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b7;
  if ((bVar1 & 0x80) == 0) {
    DAT_0b48 = 0;
    bVar1 = DAT_0b52;
    DAT_0b52 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b52 = 0;
  }
  bVar1 = DAT_08b7;
  if ((bVar1 & 0x40) == 0) {
    DAT_0b49 = 0;
    bVar1 = DAT_0b53;
    DAT_0b53 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b53 = 0;
    bVar1 = DAT_0b49;
    DAT_0b49 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b7;
  if ((bVar1 & 0x20) == 0) {
    DAT_0bcf = 0;
    bVar1 = DAT_0bd0;
    DAT_0bd0 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0bd0 = 0;
    bVar1 = DAT_0bcf;
    DAT_0bcf = (bVar1 + 1) - (0xfe < bVar1);
  }
  cVar2 = DAT_0d60;
  if (((cVar2 == -0x80) || (bVar1 = DAT_08a0, (~bVar1 & 4) == 0)) ||
     (bVar1 = DAT_08b2, (~bVar1 & 0x80) == 0)) goto LAB_be8a;
  if (DAT_4e91 != -0x80) {
    bVar1 = DAT_08dd;
    if ((DAT_4e96 <= bVar1) || (bVar1 <= DAT_4e97)) {
      bVar1 = DAT_08b6;
      if ((bVar1 & 8) == 0) {
        bVar1 = DAT_08b6;
        DAT_08b6 = bVar1 | 8;
        DAT_0b0c = 0;
      }
      else {
        bVar1 = DAT_0b0c;
        bVar1 = (bVar1 + 1) - (0xfe < bVar1);
        DAT_0b0c = bVar1;
        bVar8 = DAT_0d8a;
        if ((bVar8 <= bVar1) && (bVar1 = DAT_08b1, (~bVar1 & 0x10) != 0)) {
          bVar1 = DAT_08b1;
          DAT_08b1 = bVar1 | 0x10;
          bVar1 = DAT_0bd2;
          DAT_0bd2 = bVar1 | 0x20;
          bVar1 = DAT_08ba;
          if ((~bVar1 & 0x10) != 0) {
            bVar1 = DAT_08ba;
            DAT_08ba = bVar1 | 0x10;
            bVar1 = DAT_0bd2;
            DAT_0bd2 = bVar1 | 2;
          }
        }
      }
      goto LAB_be8a;
    }
    bVar1 = DAT_08b6;
    if ((~bVar1 & 8) == 0) {
      bVar1 = DAT_08b6;
      DAT_08b6 = bVar1 & 0xf7;
      DAT_0b0c = 0;
      goto LAB_be8a;
    }
    bVar1 = DAT_0b0c;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b0c = bVar1;
    bVar8 = DAT_0d8a;
    if (bVar1 < bVar8) goto LAB_be8a;
  }
  bVar1 = DAT_08b1;
  if ((bVar1 & 0x10) != 0) {
    bVar1 = DAT_08b1;
    DAT_08b1 = bVar1 & 0xef;
    bVar1 = DAT_0bd2;
    DAT_0bd2 = bVar1 | 0x20;
  }
LAB_be8a:
  cVar2 = DAT_0d52;
  if ((((cVar2 != -0x80) && (bVar1 = DAT_08a0, (~bVar1 & 4) != 0)) &&
      (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)) && (bVar1 = DAT_0baa, DAT_4e3c <= bVar1)) {
    bVar1 = DAT_08af;
    if ((~bVar1 & 0x40) != 0) {
      bVar1 = DAT_08af;
      DAT_08af = bVar1 | 0x40;
      bVar1 = DAT_0bd2;
      DAT_0bd2 = bVar1 | 0x80;
    }
    bVar1 = DAT_08b8;
    if ((~bVar1 & 0x40) != 0) {
      bVar1 = DAT_08b8;
      DAT_08b8 = bVar1 | 0x40;
      bVar1 = DAT_0bd2;
      DAT_0bd2 = bVar1 | 8;
    }
  }
  cVar2 = DAT_0d56;
  if (((cVar2 != -0x80) && (bVar1 = DAT_08af, (~bVar1 & 8) != 0)) &&
     ((bVar1 = DAT_08a0, (~bVar1 & 4) != 0 && (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)))) {
    uVar9 = DAT_0900;
    uVar3 = DAT_0b9c;
    if (uVar3 <= uVar9) {
      DAT_0b9c = uVar9;
      bVar1 = DAT_089e;
      DAT_089e = bVar1 | 0x80;
    }
    uVar3 = DAT_0b9c;
    uVar9 = uVar3 - DAT_4e44;
    if (uVar3 < DAT_4e44) {
      uVar9 = 0;
    }
    uVar3 = DAT_0900;
    if (uVar3 < uVar9) {
      sVar4 = DAT_0900;
      DAT_0b9c = sVar4 + DAT_4e44;
      bVar1 = DAT_089e;
      DAT_089e = bVar1 & 0x7f;
    }
    bVar1 = DAT_089e;
    if ((~bVar1 & 0x80) == 0) {
      bVar1 = DAT_089e;
      bVar1 = ~bVar1;
    }
    else {
      bVar1 = DAT_089e;
    }
    if (((bVar1 & 0x40) != 0) && (bVar1 = DAT_0b9e, bVar1 < DAT_4e46)) {
      DAT_0b9e = (bVar1 + 1) - (0xfe < bVar1);
    }
    uVar3 = DAT_0bb0;
    uVar7 = DAT_0bb2;
    uVar9 = uVar3 - uVar7;
    if (uVar3 < uVar7) {
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    if (DAT_4e48 <= uVar9) {
      bVar1 = DAT_0b9e;
      if ((bVar1 < DAT_4e46) && (bVar1 = DAT_08af, (bVar1 & 4) != 0)) {
        bVar1 = DAT_08af;
        DAT_08af = bVar1 & 0xfb;
        bVar1 = DAT_0bd2;
        DAT_0bd2 = bVar1 | 0x80;
        bVar1 = DAT_08af;
        if (((~bVar1 & 8) != 0) && (bVar1 = DAT_08b1, (~bVar1 & 8) != 0)) {
          bVar1 = DAT_0889;
          DAT_0889 = bVar1 | 2;
          DAT_0b94 = 0;
          uVar5 = DAT_0a83;
          DAT_0b92 = uVar5;
          DAT_0b95 = uVar5;
        }
      }
      DAT_0b9e = 0;
    }
    bVar1 = DAT_0b9e;
    if (bVar1 == DAT_4e46) {
      bVar1 = DAT_08af;
      if ((~bVar1 & 4) != 0) {
        bVar1 = DAT_08af;
        DAT_08af = bVar1 | 4;
        bVar1 = DAT_0bd2;
        DAT_0bd2 = bVar1 | 0x80;
        bVar1 = DAT_08b8;
        if ((~bVar1 & 4) != 0) {
          bVar1 = DAT_08b8;
          DAT_08b8 = bVar1 | 4;
          bVar1 = DAT_0bd2;
          DAT_0bd2 = bVar1 | 8;
        }
      }
      bVar1 = DAT_08b6;
      DAT_08b6 = bVar1 | 1;
      bVar1 = DAT_0889;
      DAT_0889 = bVar1 & 0xfd;
      DAT_0b92 = 0;
    }
    bVar1 = DAT_089e;
    if ((~bVar1 & 0x80) == 0) {
      bVar1 = DAT_089e;
      DAT_089e = bVar1 | 0x40;
    }
    else {
      bVar1 = DAT_089e;
      DAT_089e = bVar1 & 0xbf;
    }
    uVar6 = DAT_0bb0;
    DAT_0bb2 = uVar6;
  }
  cVar2 = DAT_08f8._0_1_;
  if (((cVar2 == '\n') && (bVar1 = DAT_0880, (~bVar1 & 1) != 0)) && (bVar1 = DAT_0bce, bVar1 < 0x10)
     ) {
    bVar1 = DAT_0b7e;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b7e = bVar1;
    if (0x1d < bVar1) {
      FUN_5843();
      return;
    }
  }
  else {
    DAT_0b7e = 0;
  }
  bVar1 = DAT_08a3;
  if (((~bVar1 & 0x80) != 0) && (bVar1 = DAT_08a2, (bVar1 & 0x80) != 0)) {
    bVar1 = DAT_0b34;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b34 = bVar1;
    if (DAT_4e32 <= bVar1) {
      bVar1 = DAT_08a3;
      DAT_08a3 = bVar1 | 0x80;
    }
  }
  cVar2 = DAT_0dd5;
  if ((cVar2 != -0x80) && (bVar1 = DAT_0d06, (~bVar1 & 0x80) != 0)) {
    bVar1 = DAT_0d0f;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0d0f = bVar1;
    if (DAT_4e83 <= bVar1) {
      bVar1 = DAT_0d08;
      DAT_0d08 = bVar1 | 1;
    }
  }
  cVar2 = DAT_0dd5;
  if ((((cVar2 != -0x80) && (bVar1 = DAT_0d06, (~bVar1 & 0x80) != 0)) &&
      (bVar1 = DAT_0d07, (bVar1 & 8) != 0)) && (bVar1 = DAT_0d07, (~bVar1 & 4) != 0)) {
    bVar1 = DAT_0d0d;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0d0d = bVar1;
    if (DAT_4e81 <= bVar1) {
      bVar1 = DAT_0d07;
      DAT_0d07 = bVar1 | 4;
      bVar1 = DAT_0d0e;
      bVar1 = (bVar1 + 1) - (0xfe < bVar1);
      DAT_0d0e = bVar1;
      if (DAT_4e82 <= bVar1) {
        bVar1 = DAT_0d08;
        DAT_0d08 = bVar1 | 1;
      }
    }
  }
  bVar1 = DAT_0882;
  DAT_0882 = bVar1 & 0xfd;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 & 0xfe;
  return;
}


