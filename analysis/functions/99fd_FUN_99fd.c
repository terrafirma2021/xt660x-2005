/* Entry 99fd */

void FUN_99fd(void)

{
  int iVar1;
  ushort value;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar11;
  undefined2 uVar8;
  char cVar12;
  short sVar9;
  byte bVar13;
  ushort uVar10;
  
  bVar7 = DAT_08e8._0_1_;
  if (DAT_4b00 <= bVar7) {
    DAT_0aaa = 0;
    DAT_0aab = 0;
    bVar7 = DAT_0aa6;
    if (((~bVar7 & 0x20) != 0) || (bVar7 = DAT_0aa6, (bVar7 & 0x10) != 0)) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 8;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xdf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
    }
  }
  bVar7 = DAT_0aa6;
  if ((bVar7 & 8) != 0) {
    bVar7 = DAT_0aaa;
    if (bVar7 < DAT_4b01) {
      bVar7 = DAT_08e8._0_1_;
      if (DAT_4b02 <= bVar7) {
        DAT_0aaa = 0;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 4;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 & 0xf7;
      }
    }
    else {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xdf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xf7;
    }
  }
  bVar7 = DAT_0aa6;
  if ((bVar7 & 4) != 0) {
    bVar7 = DAT_0aa7;
    bVar13 = DAT_4b05;
    if ((bVar7 & 8) != 0) {
      bVar13 = DAT_4b04;
    }
    DAT_0aac = bVar13;
    bVar7 = DAT_08e8._0_1_;
    if ((bVar7 < DAT_4b02) || (bVar7 = DAT_0aaa, DAT_4b06 <= bVar7)) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 1;
      bVar7 = DAT_0aa7;
      DAT_0aa7 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfb;
    }
  }
  bVar7 = DAT_0aa6;
  if ((~bVar7 & 2) != 0) {
    bVar7 = DAT_0aa6;
    if ((bVar7 & 1) != 0) {
      bVar7 = DAT_0aae;
      bVar7 = (bVar7 + 1) - (0xfe < bVar7);
      DAT_0aae = bVar7;
      if (DAT_4b07 <= bVar7) {
        DAT_0aae = 0;
        bVar7 = DAT_0aad;
        DAT_0aad = (bVar7 + 1) - (0xfe < bVar7);
        bVar7 = DAT_0aa7;
        if ((bVar7 & 2) != 0) {
          bVar7 = DAT_0aa7;
          bVar13 = DAT_4b05;
          if ((bVar7 & 8) != 0) {
            bVar13 = DAT_4b04;
          }
          bVar11 = DAT_0aad;
          bVar7 = bVar13 + bVar11;
          if (CARRY1(bVar13,bVar11)) {
            bVar7 = 0xff;
          }
          bVar13 = DAT_0a83;
          if (bVar7 < bVar13) {
            DAT_0aac = bVar7;
          }
          else {
            bVar7 = DAT_0aa7;
            DAT_0aa7 = bVar7 & 0xfd;
          }
        }
        bVar7 = DAT_0aa7;
        if ((~bVar7 & 2) == 0) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xfe;
          DAT_0aad = 0;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xf7;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xfb;
        }
      }
    }
    bVar7 = DAT_0aa6;
    if ((~bVar7 & 1) == 0) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  uVar8 = DAT_0ab4;
  DAT_0ab6 = uVar8;
  sVar9 = DAT_0ab0;
  DAT_0ab4 = sVar9;
  sVar4 = DAT_0ab6;
  sVar9 = sVar9 - sVar4;
  bVar7 = DAT_0ab2;
  if ((~bVar7 & 4) == 0) {
    sVar9 = 0;
  }
  if ((char)((ushort)sVar9 >> 8) != '\0') {
    sVar9 = 0xff;
  }
  DAT_0ab3 = (char)sVar9;
  bVar7 = DAT_0ab2;
  DAT_0ab2 = bVar7 | 4;
  bVar7 = DAT_0ab3;
  iVar1 = (uint)DAT_4bd4 * (uint)bVar7;
  DAT_0dde = (short)((uint)iVar1 >> 0x10);
  bVar7 = DAT_0aba;
  bVar11 = (byte)iVar1;
  bVar13 = (byte)((uint)iVar1 >> 8);
  DAT_0de0 = CONCAT11(bVar13 - (bVar11 < bVar7),bVar11 - bVar7);
  if (bVar13 < (bVar11 < bVar7)) {
    cVar12 = DAT_0dde._1_1_;
    if (cVar12 == '\x01') goto LAB_9b9a;
    if (cVar12 != '\0') goto LAB_9b48;
    uVar8 = DAT_0de0;
    iVar1 = (uint)DAT_4bd6 *
            (uint)CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),
                           -(char)uVar8);
    uVar8 = (undefined2)iVar1;
    if ((short)((uint)iVar1 >> 0x10) != 0) {
      uVar8 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)uVar8 >> 8);
    bVar11 = (byte)uVar8;
    if ((bVar7 & 1) == 0) {
      bVar5 = DAT_0ab8._1_1_;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9b87;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar7 = DAT_0ab8._1_1_;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9b87:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar8;
  }
  else {
    cVar12 = DAT_0dde._1_1_;
    if (cVar12 != '\0') {
LAB_9b48:
      DAT_0de0 = 0xffff;
    }
LAB_9b9a:
    uVar10 = DAT_0de0;
    uVar8 = (undefined2)((uint)DAT_4bd6 * (uint)uVar10);
    if ((short)((uint)DAT_4bd6 * (uint)uVar10 >> 0x10) != 0) {
      uVar8 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)uVar8 >> 8);
    bVar11 = (byte)uVar8;
    if ((bVar7 & 1) == 0) {
      bVar7 = DAT_0ab8._1_1_;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9bcc:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar5 = DAT_0ab8._1_1_;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9bcc;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar8;
  }
  bVar13 = DAT_0aba;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 1) == 0) {
    bVar7 = DAT_0ab8._0_1_;
    cVar12 = bVar13 + bVar7;
    if (CARRY1(bVar13,bVar7)) {
      cVar12 = -1;
    }
  }
  else {
    bVar7 = DAT_0ab8._0_1_;
    cVar12 = bVar13 - bVar7;
    if (bVar13 < bVar7) {
      cVar12 = '\0';
    }
  }
  DAT_0aba = cVar12;
  bVar7 = DAT_0aba;
  bVar13 = DAT_0abe;
  if (bVar7 < bVar13) {
    sVar9 = (ushort)(byte)-(bVar7 - bVar13) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)sVar9 >> 8);
    bVar11 = (byte)sVar9;
    if ((bVar7 & 2) == 0) {
      bVar5 = DAT_0abd;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9c13;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar7 = DAT_0abd;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9c13:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar8;
  }
  else {
    sVar9 = (ushort)(byte)(bVar7 - bVar13) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)sVar9 >> 8);
    bVar11 = (byte)sVar9;
    if ((bVar7 & 2) == 0) {
      bVar7 = DAT_0abd;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9c4a:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar5 = DAT_0abd;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9c4a;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar8;
  }
  bVar13 = DAT_0abe;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 2) == 0) {
    bVar7 = DAT_0abc;
    cVar12 = bVar13 + bVar7;
    if (CARRY1(bVar13,bVar7)) {
      cVar12 = -1;
    }
  }
  else {
    bVar7 = DAT_0abc;
    cVar12 = bVar13 - bVar7;
    if (bVar13 < bVar7) {
      cVar12 = '\0';
    }
  }
  DAT_0abe = cVar12;
  if (((DAT_4ba7 != -0x80) ||
      (((cVar12 = DAT_0d87, cVar12 == '\t' && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) != 0)) ||
       (bVar7 = DAT_0900._0_1_, DAT_4ba8 <= bVar7)))) || (bVar7 = DAT_08ce._0_1_, DAT_4ba9 <= bVar7)
     ) {
    DAT_0aaf = 0;
    bVar7 = DAT_088d;
    DAT_088d = bVar7 & 0xbf;
  }
  cVar12 = DAT_0af7;
  if (cVar12 == '\0') {
    bVar7 = DAT_0aaf;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0aaf = bVar7;
    if (DAT_4baa <= bVar7) {
      bVar7 = DAT_088d;
      DAT_088d = bVar7 | 0x40;
    }
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9cbd:
    cVar12 = DAT_0d87;
    if (cVar12 == '\t') {
      bVar7 = DAT_08f4;
      if (((bVar7 < DAT_4c03) || (uVar10 = DAT_0992, (ushort)DAT_4c04 << 8 < uVar10)) ||
         ((uVar10 = DAT_0982, DAT_4c06 < uVar10 || (bVar7 = DAT_0881, (~bVar7 & 0x20) != 0)))) {
LAB_9d2a:
        cVar12 = '\0';
LAB_9d2b:
        DAT_0acf = cVar12;
        bVar7 = DAT_09a1;
        if (((((((~bVar7 & 0x80) == 0) && (bVar7 = DAT_08a0, (~bVar7 & 0x20) == 0)) &&
              (bVar7 = DAT_08b0, (~bVar7 & 0x10) == 0)) &&
             ((bVar7 = DAT_08b0, (~bVar7 & 4) == 0 && (bVar7 = DAT_08b0, (~bVar7 & 2) == 0)))) &&
            (bVar7 = DAT_08b1, (~bVar7 & 0x80) == 0)) && (bVar7 = DAT_08b1, (~bVar7 & 0x40) == 0))
        goto LAB_9d51;
      }
      else {
        cVar12 = DAT_0d87;
        if ((cVar12 != '\t') || (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) != 0)) {
          bVar7 = DAT_0898;
          if ((&DAT_4e11)[bVar7] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        cVar12 = DAT_0acd;
        if (cVar12 == '\0') goto LAB_9d2a;
        FUN_a3b4();
        cVar12 = DAT_0ace;
        if (cVar12 == '\0') goto LAB_9d2a;
        bVar7 = DAT_0acf;
        if (bVar7 < DAT_4c02) {
          cVar12 = (bVar7 + 1) - (0xfe < bVar7);
          goto LAB_9d2b;
        }
        DAT_0acf = (bVar7 + 1) - (0xfe < bVar7);
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 2;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 | 0x80;
    }
    else {
LAB_9d51:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xfd;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 & 0x7f;
    }
  }
  else {
    cVar12 = DAT_0bdd;
    cVar6 = DAT_0d49;
    if (cVar12 != cVar6) goto LAB_9cbd;
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9d6e:
    if ((DAT_4e1b == 0xff) || (uVar10 = DAT_0a2e, (ushort)DAT_4e1b << 8 < uVar10)) {
      cVar12 = '\0';
    }
    else {
      bVar7 = DAT_0b91;
      if (DAT_4e95 <= bVar7) {
        bVar13 = DAT_0b90;
        DAT_0b90 = bVar13 | 0x80;
      }
      cVar12 = (bVar7 + 1) - (0xfe < bVar7);
    }
    DAT_0b91 = cVar12;
    uVar10 = DAT_0a2e;
    if (((ushort)DAT_4e1a << 8 < uVar10) && (DAT_4e1a != 0xff)) {
      bVar7 = DAT_0b90;
      if ((bVar7 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        cVar12 = DAT_0d87;
        if ((cVar12 != '\t') && (bVar7 = DAT_088c, (bVar7 & 0x80) != 0)) {
          bVar7 = DAT_0b90;
          DAT_0b90 = bVar7 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        bVar7 = DAT_0880;
        if ((~bVar7 & 1) == 0) goto LAB_9dc5;
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xef;
    }
    else {
LAB_9dc5:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 0x10;
    }
  }
  else {
    cVar12 = DAT_0bdd;
    cVar6 = DAT_0d4c;
    if (cVar12 != cVar6) goto LAB_9d6e;
  }
  bVar7 = DAT_0880;
  if (((bVar7 & 1) == 0) ||
     ((((bVar7 = DAT_08af, (~bVar7 & 0x40) == 0 && (bVar7 = DAT_08af, (~bVar7 & 2) == 0)) &&
       ((cVar12 = DAT_0dd9, cVar12 == -0x80 || (bVar7 = DAT_08b0, (~bVar7 & 8) == 0)))) &&
      (((bVar7 = DAT_08b1, (~bVar7 & 0x10) == 0 && (bVar7 = DAT_08b2, (~bVar7 & 0x80) == 0)) &&
       (bVar7 = DAT_08b4, (~bVar7 & 8) == 0)))))) {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 & 0xdf;
  }
  else {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 | 0x20;
  }
  bVar7 = DAT_0884;
  if ((bVar7 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    bVar7 = DAT_0b6f;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b6f = bVar7;
    if (DAT_4e38 <= bVar7) {
      bVar7 = DAT_0888;
      if ((~bVar7 & 8) == 0) {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 | 8;
      }
      else {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 & 0xf7;
      }
      goto LAB_9e24;
    }
  }
  bVar7 = DAT_0889;
  if ((~bVar7 & 2) != 0) {
    bVar7 = DAT_0bd1;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0bd1 = bVar7;
    if (DAT_4e66 <= bVar7) {
      DAT_0bd1 = 0;
      bVar7 = DAT_0b94;
      DAT_0b94 = (bVar7 + 1) - (0xfe < bVar7);
    }
  }
  cVar12 = DAT_0b9a;
  if ((cVar12 != -1) && (uVar10 = DAT_0b98, DAT_4e3a <= uVar10)) {
    DAT_0b98 = 0;
    bVar7 = DAT_0b9a;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b9a = bVar7;
    if (4 < bVar7) {
      uVar2 = DAT_08af;
      DAT_08b8 = uVar2;
      uVar2 = DAT_08b0;
      DAT_08b9 = uVar2;
      uVar2 = DAT_08b1;
      DAT_08ba = uVar2;
      uVar2 = DAT_08b2;
      DAT_08bb = uVar2;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 8;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 4;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 2;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 1;
      DAT_0b9a = 0xff;
    }
    bVar7 = DAT_0be8;
    DAT_0be8 = bVar7 | 0x40;
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) == 0)) {
    bVar7 = DAT_0d0a;
    DAT_0d0a = (bVar7 + 1) - (0xfe < bVar7);
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) == 0)) {
    bVar7 = DAT_0d0b;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0d0b = bVar7;
    if (bVar7 <= DAT_4f16) {
      bVar5 = DAT_0d09;
      bVar11 = DAT_0ab3;
      bVar13 = bVar5 + bVar11;
      if (CARRY1(bVar5,bVar11)) {
        bVar13 = 0xff;
      }
      DAT_0d09 = bVar13;
      if ((DAT_4f16 <= bVar7) && (bVar13 <= DAT_4e84)) {
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 1;
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 8;
      }
    }
  }
  bVar7 = DAT_08d9;
  uVar10 = (ushort)bVar7 * 0x100;
  bVar7 = DAT_0881;
  if ((~bVar7 & 0x10) == 0) {
    uVar3 = DAT_08da;
    value = uVar10 - uVar3;
    if (uVar10 < uVar3) {
      uVar10 = scale_u16_by_u8(CONCAT11((~(byte)(value >> 8) + 1) - ((char)-(char)value != '\0'),
                                        -(char)value),&UNK_18b2);
      uVar10 = CONCAT11((~(byte)(uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),-(char)uVar10);
    }
    else {
      uVar10 = scale_u16_by_u8(value,&UNK_18b2);
    }
    sVar9 = DAT_08da;
    uVar10 = uVar10 + sVar9;
  }
  DAT_08da = uVar10;
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_088d;
    if (((((~bVar7 & 0x20) == 0) && (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) &&
        ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 ||
         ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 || (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) ||
       ((bVar7 = DAT_08ec, DAT_4e28 < bVar7 ||
        ((((bVar7 = DAT_0abe, DAT_4e29 < bVar7 || (uVar10 = DAT_0900, uVar10 < DAT_4e1e)) ||
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)) || (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0x7f;
      DAT_0adc = 0;
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x80;
      bVar7 = DAT_0adc;
      if (DAT_4e2a <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x80;
      }
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_08ec;
    if ((DAT_4e28 < bVar7) || (bVar7 = DAT_0abe, DAT_4e2b < bVar7)) {
      bVar7 = DAT_0ada;
      DAT_0ada = bVar7 & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) != 0) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x20;
      }
      bVar7 = DAT_0ada;
      if ((((~bVar7 & 0x80) == 0) && (bVar7 = DAT_08b1, (bVar7 & 0x20) == 0)) ||
         ((uVar10 = DAT_0900, uVar10 < DAT_4e20 ||
          ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 || (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x10) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xef;
          DAT_0ae1 = 0;
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x40) != 0) {
          bVar7 = DAT_0ada;
          if ((~bVar7 & 8) == 0) {
            bVar7 = DAT_0ada;
            if (((((~bVar7 & 0x80) == 0) && (bVar7 = DAT_08b1, (bVar7 & 0x20) == 0)) ||
                (uVar10 = DAT_0900, DAT_4e22 < uVar10)) ||
               ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 || (bVar7 = DAT_08af, (~bVar7 & 4) != 0))))
            goto LAB_a04f;
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 | 8;
          }
          bVar7 = DAT_0ada;
          if ((((~bVar7 & 0x80) != 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
             ((uVar10 = DAT_0900, uVar10 < DAT_4e20 &&
              ((bVar7 = DAT_08af, (~bVar7 & 8) == 0 && (bVar7 = DAT_08af, (~bVar7 & 4) == 0)))))) {
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 & 0xef | 100;
            goto LAB_a04f;
          }
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 4) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xfb;
          DAT_0ae1 = 0;
        }
      }
      else {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0xf3 | 0x70;
      }
    }
  }
LAB_a04f:
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_088d;
    if ((((((((~bVar7 & 0x20) == 0) && (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) &&
           ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 ||
            ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 || (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) ||
          (bVar7 = DAT_08ec, DAT_4e28 < bVar7)) ||
         (((bVar7 = DAT_0abe, DAT_4e29 < bVar7 || (uVar10 = DAT_0900, DAT_4e24 <= uVar10)) ||
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)))) ||
        ((bVar7 = DAT_08af, (~bVar7 & 4) != 0 || (sVar9 = DAT_0ad6, sVar9 != 0)))) ||
       (cVar12 = DAT_0ad9, cVar12 != '\0')) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xbf;
      DAT_0add = 0;
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x40;
      bVar7 = DAT_0add;
      if (DAT_4e31 <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = 0;
        DAT_0ae1 = 0;
      }
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    cVar12 = DAT_0d5f;
    if (cVar12 != -0x80) {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) == 0) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 & 0xdf;
        DAT_0ade = 0;
      }
      else {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 0x20;
        bVar7 = DAT_0ade;
        if ((DAT_4e57 <= bVar7) && (bVar7 = DAT_08b1, (~bVar7 & 0x20) == 0)) {
          bVar7 = DAT_08b1;
          DAT_08b1 = bVar7 | 0x20;
          bVar7 = DAT_0bd2;
          DAT_0bd2 = bVar7 | 0x20;
          bVar7 = DAT_08ba;
          if ((~bVar7 & 0x20) == 0) {
            bVar7 = DAT_08ba;
            DAT_08ba = bVar7 | 0x20;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 2;
          }
        }
      }
    }
    bVar7 = DAT_0881;
    if ((bVar7 & 0x10) == 0) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x10;
      bVar7 = DAT_0adf;
      if ((((DAT_4e57 <= bVar7) &&
           (((bVar7 = DAT_088d, (~bVar7 & 0x20) != 0 || (bVar7 = DAT_0885, (~bVar7 & 0x20) != 0)) ||
            ((bVar7 = DAT_0889, (~bVar7 & 2) == 0 &&
             ((bVar7 = DAT_0880, (~bVar7 & 4) == 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) == 0))))))))
          && ((bVar7 = DAT_0ada, (~bVar7 & 0x80) != 0 || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0))))
         && ((((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 && (bVar7 = DAT_0abe, bVar7 <= DAT_4e29)) &&
              (uVar10 = DAT_0900, uVar10 < DAT_4e24)) &&
             (((bVar7 = DAT_08af, (~bVar7 & 8) == 0 && (bVar7 = DAT_08af, (~bVar7 & 4) == 0)) &&
              ((sVar9 = DAT_0ad6, sVar9 == 0 && (cVar12 = DAT_0ad9, cVar12 == '\0')))))))) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 8;
        bVar7 = DAT_0ae0;
        if (DAT_4e31 <= bVar7) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0x7f;
          cVar12 = DAT_0d5f;
          if ((cVar12 != -0x80) && (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) {
            bVar7 = DAT_08b1;
            DAT_08b1 = bVar7 & 0xdf;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 0x20;
          }
        }
        goto LAB_a1ae;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xef;
      DAT_0adf = 0;
    }
    bVar7 = DAT_0adb;
    DAT_0adb = bVar7 & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  FUN_5fc8();
  bVar7 = DAT_0891;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a24a:
      bVar7 = DAT_0bd2;
      if (bVar7 == 0) {
LAB_a26f:
        bVar7 = DAT_0be8;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) == 0) {
            if ((bVar7 & 0x40) == 0) {
              if ((bVar7 & 4) != 0) goto LAB_a2b4;
            }
            else {
LAB_a2af:
              FUN_b78f();
            }
          }
          else {
LAB_a296:
            FUN_b758();
          }
        }
      }
      else if ((bVar7 & 0x80) == 0) {
        if ((bVar7 & 0x40) == 0) {
          if ((bVar7 & 0x20) == 0) {
            if ((bVar7 & 0x10) == 0) {
              if ((bVar7 & 8) == 0) {
                if ((bVar7 & 4) == 0) {
                  if ((bVar7 & 2) == 0) {
                    if ((bVar7 & 1) != 0) goto LAB_a2aa;
                    goto LAB_a26f;
                  }
LAB_a2a5:
                  FUN_b6ea();
                }
                else {
LAB_a2a0:
                  FUN_b6b3();
                }
              }
              else {
LAB_a29b:
                FUN_b67c();
              }
            }
            else {
LAB_a291:
              FUN_b645();
            }
          }
          else {
LAB_a28c:
            FUN_b60e();
          }
        }
        else {
LAB_a287:
          FUN_b5d7();
        }
      }
      else {
LAB_a282:
        FUN_b5a0();
      }
    }
    else {
      bVar7 = DAT_088f;
      if ((~bVar7 & 0x80) == 0) {
        bVar7 = DAT_088f;
        if ((~bVar7 & 0x40) == 0) goto LAB_a24a;
        FUN_b4c6();
      }
      else {
        FUN_b3ec();
      }
    }
  }
  else {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a1d9:
      bVar7 = DAT_0bd3;
      if (bVar7 == 0) {
LAB_a20e:
        bVar7 = DAT_0be9;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) != 0) goto LAB_a296;
          if ((bVar7 & 0x40) != 0) goto LAB_a2af;
          if ((bVar7 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
          FUN_b7b9();
        }
      }
      else {
        if ((bVar7 & 0x80) != 0) goto LAB_a282;
        if ((bVar7 & 0x40) != 0) goto LAB_a287;
        if ((bVar7 & 0x20) != 0) goto LAB_a28c;
        if ((bVar7 & 0x10) != 0) goto LAB_a291;
        if ((bVar7 & 8) != 0) goto LAB_a29b;
        if ((bVar7 & 4) != 0) goto LAB_a2a0;
        if ((bVar7 & 2) != 0) goto LAB_a2a5;
        if ((bVar7 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
        FUN_b721();
      }
    }
    else {
      bVar7 = DAT_0890;
      if ((~bVar7 & 0x80) == 0) {
        bVar7 = DAT_0890;
        if ((~bVar7 & 0x40) == 0) goto LAB_a1d9;
        FUN_b4c6();
      }
      else {
        FUN_b3ec();
      }
    }
  }
LAB_a2b9:
  bVar7 = DAT_0000;
  bVar7 = bVar7 & 0xe0;
  if (bVar7 == 0x80) {
    bVar7 = DAT_08b1;
    if (((bVar7 & 0x80) != 0x80) || (bVar7 = DAT_0000, (bVar7 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar7 != 0) {
    if (((bVar7 == 0x40) && (bVar7 = DAT_08b1, (bVar7 & 0x80) == 0x80)) &&
       (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  bVar7 = DAT_08b1;
  if (((bVar7 & 0x80) == 0x80) && (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  bVar7 = DAT_08bc;
  DAT_08bc = bVar7 & 0xf7;
  return;
}


