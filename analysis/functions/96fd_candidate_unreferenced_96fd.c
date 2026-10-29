/* Entry 96fd */

void candidate_unreferenced_96fd(void)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  ushort uVar9;
  byte bVar12;
  undefined2 uVar10;
  char cVar13;
  short sVar11;
  byte bVar14;
  
  bVar8 = DAT_0880;
  DAT_0880 = bVar8 & 0xfb;
  bVar8 = DAT_0b20;
  DAT_0b20 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b1e;
  DAT_0b1e = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b1f;
  DAT_0b1f = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b1d;
  DAT_0b1d = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0afd;
  DAT_0afd = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) == 0) {
    bVar8 = DAT_0afe;
    cVar13 = (bVar8 + 1) - (0xfe < bVar8);
  }
  else {
    cVar13 = '\0';
  }
  DAT_0afe = cVar13;
  bVar8 = DAT_0880;
  if (((~bVar8 & 1) == 0) && (bVar8 = DAT_0885, (~bVar8 & 0x40) == 0)) {
    cVar13 = '\0';
  }
  else {
    bVar8 = DAT_0b5d;
    cVar13 = (bVar8 + 1) - (0xfe < bVar8);
  }
  DAT_0b5d = cVar13;
  bVar8 = DAT_09a1;
  if ((~bVar8 & 1) == 0) {
    bVar8 = DAT_09ab;
    DAT_09ab = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09aa = 0;
  }
  else {
    bVar8 = DAT_09aa;
    DAT_09aa = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09ab = 0;
  }
  bVar8 = DAT_091b;
  DAT_091b = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091c;
  DAT_091c = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091d;
  DAT_091d = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091e;
  DAT_091e = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091f;
  DAT_091f = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0920;
  DAT_0920 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b09;
  DAT_0b09 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0893;
  if ((bVar8 & 0x80) == 0) {
LAB_9802:
    bVar8 = 0;
  }
  else {
    bVar8 = DAT_0be7;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    if (DAT_4f15 < bVar8) {
      bVar8 = DAT_0893;
      DAT_0893 = bVar8 & 0x7f;
      goto LAB_9802;
    }
  }
  DAT_0be7 = bVar8;
  bVar8 = DAT_0900._0_1_;
  uVar7 = DAT_4b9e;
  if (bVar8 < DAT_4b9c) {
    uVar7 = DAT_4b9d;
  }
  DAT_0a9f = uVar7;
  bVar8 = DAT_08ce._0_1_;
  bVar14 = DAT_0a9e;
  if ((bVar8 < bVar14) || ((byte)(bVar8 - bVar14) < DAT_4b99)) {
    DAT_0a9d = 0;
LAB_984d:
    cVar13 = DAT_0aa0;
    if ((cVar13 == '\0') || (DAT_0aa0 = cVar13 + -1, (char)(cVar13 + -1) == '\0')) {
      DAT_0aa0 = DAT_4b9a;
      bVar8 = DAT_0a9c;
      bVar14 = bVar8 - DAT_4b9b;
      if (bVar8 < DAT_4b9b) {
        bVar14 = 0;
      }
      goto LAB_986d;
    }
  }
  else {
    bVar12 = DAT_0a9f;
    sVar11 = (ushort)(byte)((bVar8 - bVar14) - DAT_4b99) * (ushort)bVar12;
    if ((char)((ushort)sVar11 >> 8) != '\0') {
      sVar11 = 0xff;
    }
    bVar14 = (byte)sVar11;
    DAT_0a9d = bVar14;
    bVar8 = DAT_0a9c;
    if ((bVar14 < bVar8) || (bVar14 == bVar8)) goto LAB_984d;
    if (DAT_4b9f <= bVar14) {
      bVar14 = DAT_4b9f;
    }
LAB_986d:
    DAT_0a9c = bVar14;
  }
  uVar7 = DAT_08ce._0_1_;
  DAT_0a9e = uVar7;
  uVar2 = DAT_0900;
  uVar3 = DAT_0aa8;
  uVar9 = uVar2 - uVar3;
  if (uVar2 < uVar3) {
    uVar9 = scale_u16_by_u8_rounded
                      (CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                -(char)uVar9),&UNK_4af6);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = scale_u16_by_u8_rounded(uVar9,&UNK_4af6);
  }
  sVar11 = DAT_0aa8;
  DAT_0aa8 = uVar9 + sVar11;
  bVar8 = DAT_0af7;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0aaa;
    DAT_0aaa = (bVar8 + 1) - (0xfe < bVar8);
    bVar8 = DAT_0aab;
    DAT_0aab = (bVar8 + 1) - (0xfe < bVar8);
  }
  bVar8 = DAT_0abe;
  if ((DAT_4af7 < bVar8) && (bVar8 < DAT_4af8)) {
    bVar8 = DAT_0aa6;
    DAT_0aa6 = bVar8 | 0x80;
  }
  else {
    bVar8 = DAT_0aa6;
    DAT_0aa6 = bVar8 & 0x7f;
    bVar8 = DAT_0aa6;
    if ((bVar8 & 0x40) != 0) {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xdf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  bVar8 = DAT_0aa6;
  if ((((~bVar8 & 8) == 0) && (bVar8 = DAT_0aa6, (~bVar8 & 4) == 0)) &&
     (bVar8 = DAT_0aa6, (~bVar8 & 2) == 0)) {
    cVar13 = DAT_0d87;
    if (cVar13 == '\t') {
      cVar13 = DAT_0898;
      if (cVar13 == DAT_4af9) {
        bVar8 = DAT_0aaa;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x20;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 8;
          FUN_997a();
          return;
        }
      }
      else {
        DAT_0aaa = 0;
        bVar8 = DAT_0aa6;
        if ((bVar8 & 0x20) != 0) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xdf;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xf7;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xbf;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 2;
          goto LAB_9a25;
        }
      }
    }
    else {
      bVar8 = DAT_0aa8._0_1_;
      if ((bVar8 < DAT_4afb) || (DAT_4afc <= bVar8)) {
        DAT_0aaa = 0;
        bVar8 = DAT_0aa6;
        if ((bVar8 & 0x20) != 0) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xdf;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xf7;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xbf;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 2;
          goto LAB_9a25;
        }
      }
      else {
        bVar8 = DAT_0aaa;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x20;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 8;
          FUN_997a();
          return;
        }
      }
    }
    cVar13 = DAT_0d87;
    if (cVar13 == '\t') {
      cVar13 = DAT_0898;
      if (cVar13 == DAT_4afa) {
        bVar8 = DAT_0aab;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x10;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 4;
        }
LAB_99b5:
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      bVar8 = DAT_0aa6;
      if ((bVar8 & 0x10) == 0) goto LAB_99b5;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      bVar8 = DAT_0aa7;
      DAT_0aa7 = bVar8 & 0xfb;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
    }
    else {
      bVar8 = DAT_0aa8._0_1_;
      if ((DAT_4afe <= bVar8) && (bVar8 < DAT_4aff)) {
        bVar8 = DAT_0aab;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x10;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 4;
        }
LAB_99f2:
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      bVar8 = DAT_0aa6;
      if ((bVar8 & 0x10) == 0) goto LAB_99f2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      bVar8 = DAT_0aa7;
      DAT_0aa7 = bVar8 & 0xfb;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
    }
  }
LAB_9a25:
  bVar8 = DAT_0aa6;
  if ((bVar8 & 8) != 0) {
    bVar8 = DAT_0aaa;
    if (bVar8 < DAT_4b01) {
      bVar8 = DAT_08e8._0_1_;
      if (DAT_4b02 <= bVar8) {
        DAT_0aaa = 0;
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 | 4;
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 & 0xf7;
      }
    }
    else {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xdf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xf7;
    }
  }
  bVar8 = DAT_0aa6;
  if ((bVar8 & 4) != 0) {
    bVar8 = DAT_0aa7;
    bVar14 = DAT_4b05;
    if ((bVar8 & 8) != 0) {
      bVar14 = DAT_4b04;
    }
    DAT_0aac = bVar14;
    bVar8 = DAT_08e8._0_1_;
    if ((bVar8 < DAT_4b02) || (bVar8 = DAT_0aaa, DAT_4b06 <= bVar8)) {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 1;
      bVar8 = DAT_0aa7;
      DAT_0aa7 = bVar8 | 2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xfb;
    }
  }
  bVar8 = DAT_0aa6;
  if ((~bVar8 & 2) != 0) {
    bVar8 = DAT_0aa6;
    if ((bVar8 & 1) != 0) {
      bVar8 = DAT_0aae;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0aae = bVar8;
      if (DAT_4b07 <= bVar8) {
        DAT_0aae = 0;
        bVar8 = DAT_0aad;
        DAT_0aad = (bVar8 + 1) - (0xfe < bVar8);
        bVar8 = DAT_0aa7;
        if ((bVar8 & 2) != 0) {
          bVar8 = DAT_0aa7;
          bVar14 = DAT_4b05;
          if ((bVar8 & 8) != 0) {
            bVar14 = DAT_4b04;
          }
          bVar12 = DAT_0aad;
          bVar8 = bVar14 + bVar12;
          if (CARRY1(bVar14,bVar12)) {
            bVar8 = 0xff;
          }
          bVar14 = DAT_0a83;
          if (bVar8 < bVar14) {
            DAT_0aac = bVar8;
          }
          else {
            bVar8 = DAT_0aa7;
            DAT_0aa7 = bVar8 & 0xfd;
          }
        }
        bVar8 = DAT_0aa7;
        if ((~bVar8 & 2) == 0) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xfe;
          DAT_0aad = 0;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xf7;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xfb;
        }
      }
    }
    bVar8 = DAT_0aa6;
    if ((~bVar8 & 1) == 0) {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  uVar10 = DAT_0ab4;
  DAT_0ab6 = uVar10;
  sVar11 = DAT_0ab0;
  DAT_0ab4 = sVar11;
  sVar4 = DAT_0ab6;
  sVar11 = sVar11 - sVar4;
  bVar8 = DAT_0ab2;
  if ((~bVar8 & 4) == 0) {
    sVar11 = 0;
  }
  if ((char)((ushort)sVar11 >> 8) != '\0') {
    sVar11 = 0xff;
  }
  DAT_0ab3 = (char)sVar11;
  bVar8 = DAT_0ab2;
  DAT_0ab2 = bVar8 | 4;
  bVar8 = DAT_0ab3;
  iVar1 = (uint)DAT_4bd4 * (uint)bVar8;
  DAT_0dde = (short)((uint)iVar1 >> 0x10);
  bVar8 = DAT_0aba;
  bVar12 = (byte)iVar1;
  bVar14 = (byte)((uint)iVar1 >> 8);
  DAT_0de0 = CONCAT11(bVar14 - (bVar12 < bVar8),bVar12 - bVar8);
  if (bVar14 < (bVar12 < bVar8)) {
    cVar13 = DAT_0dde._1_1_;
    if (cVar13 == '\x01') goto LAB_9b9a;
    if (cVar13 != '\0') goto LAB_9b48;
    uVar10 = DAT_0de0;
    iVar1 = (uint)DAT_4bd6 *
            (uint)CONCAT11((~(byte)((ushort)uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),
                           -(char)uVar10);
    uVar10 = (undefined2)iVar1;
    if ((short)((uint)iVar1 >> 0x10) != 0) {
      uVar10 = 0xffff;
    }
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)uVar10 >> 8);
    bVar12 = (byte)uVar10;
    if ((bVar8 & 1) == 0) {
      bVar5 = DAT_0ab8._1_1_;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9b87;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfe;
    }
    else {
      bVar8 = DAT_0ab8._1_1_;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9b87:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 1;
    }
    DAT_0ab8 = uVar10;
  }
  else {
    cVar13 = DAT_0dde._1_1_;
    if (cVar13 != '\0') {
LAB_9b48:
      DAT_0de0 = 0xffff;
    }
LAB_9b9a:
    uVar9 = DAT_0de0;
    uVar10 = (undefined2)((uint)DAT_4bd6 * (uint)uVar9);
    if ((short)((uint)DAT_4bd6 * (uint)uVar9 >> 0x10) != 0) {
      uVar10 = 0xffff;
    }
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)uVar10 >> 8);
    bVar12 = (byte)uVar10;
    if ((bVar8 & 1) == 0) {
      bVar8 = DAT_0ab8._1_1_;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9bcc:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfe;
    }
    else {
      bVar5 = DAT_0ab8._1_1_;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9bcc;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 1;
    }
    DAT_0ab8 = uVar10;
  }
  bVar14 = DAT_0aba;
  bVar8 = DAT_0ab2;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0ab8._0_1_;
    cVar13 = bVar14 + bVar8;
    if (CARRY1(bVar14,bVar8)) {
      cVar13 = -1;
    }
  }
  else {
    bVar8 = DAT_0ab8._0_1_;
    cVar13 = bVar14 - bVar8;
    if (bVar14 < bVar8) {
      cVar13 = '\0';
    }
  }
  DAT_0aba = cVar13;
  bVar8 = DAT_0aba;
  bVar14 = DAT_0abe;
  if (bVar8 < bVar14) {
    sVar11 = (ushort)(byte)-(bVar8 - bVar14) * (ushort)DAT_4bd6;
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)sVar11 >> 8);
    bVar12 = (byte)sVar11;
    if ((bVar8 & 2) == 0) {
      bVar5 = DAT_0abd;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9c13;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfd;
    }
    else {
      bVar8 = DAT_0abd;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9c13:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 2;
    }
    RAM0abc = uVar10;
  }
  else {
    sVar11 = (ushort)(byte)(bVar8 - bVar14) * (ushort)DAT_4bd6;
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)sVar11 >> 8);
    bVar12 = (byte)sVar11;
    if ((bVar8 & 2) == 0) {
      bVar8 = DAT_0abd;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9c4a:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfd;
    }
    else {
      bVar5 = DAT_0abd;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9c4a;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 2;
    }
    RAM0abc = uVar10;
  }
  bVar14 = DAT_0abe;
  bVar8 = DAT_0ab2;
  if ((bVar8 & 2) == 0) {
    bVar8 = DAT_0abc;
    cVar13 = bVar14 + bVar8;
    if (CARRY1(bVar14,bVar8)) {
      cVar13 = -1;
    }
  }
  else {
    bVar8 = DAT_0abc;
    cVar13 = bVar14 - bVar8;
    if (bVar14 < bVar8) {
      cVar13 = '\0';
    }
  }
  DAT_0abe = cVar13;
  if ((DAT_4ba7 != -0x80) ||
     ((((cVar13 = DAT_0d87, cVar13 == '\t' && (bVar8 = DAT_0896._0_1_, (~bVar8 & 0x10) != 0)) ||
       (bVar8 = DAT_0900._0_1_, DAT_4ba8 <= bVar8)) || (bVar8 = DAT_08ce._0_1_, DAT_4ba9 <= bVar8)))
     ) {
    DAT_0aaf = 0;
    bVar8 = DAT_088d;
    DAT_088d = bVar8 & 0xbf;
  }
  cVar13 = DAT_0af7;
  if (cVar13 == '\0') {
    bVar8 = DAT_0aaf;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0aaf = bVar8;
    if (DAT_4baa <= bVar8) {
      bVar8 = DAT_088d;
      DAT_088d = bVar8 | 0x40;
    }
  }
  bVar8 = DAT_08a0;
  if ((bVar8 & 4) == 0) {
LAB_9cbd:
    cVar13 = DAT_0d87;
    if (cVar13 == '\t') {
      bVar8 = DAT_08f4;
      if (((bVar8 < DAT_4c03) || (uVar9 = DAT_0992, (ushort)DAT_4c04 << 8 < uVar9)) ||
         ((uVar9 = DAT_0982, DAT_4c06 < uVar9 || (bVar8 = DAT_0881, (~bVar8 & 0x20) != 0)))) {
LAB_9d2a:
        cVar13 = '\0';
LAB_9d2b:
        DAT_0acf = cVar13;
        bVar8 = DAT_09a1;
        if (((((~bVar8 & 0x80) == 0) && (bVar8 = DAT_08a0, (~bVar8 & 0x20) == 0)) &&
            (bVar8 = DAT_08b0, (~bVar8 & 0x10) == 0)) &&
           (((bVar8 = DAT_08b0, (~bVar8 & 4) == 0 && (bVar8 = DAT_08b0, (~bVar8 & 2) == 0)) &&
            ((bVar8 = DAT_08b1, (~bVar8 & 0x80) == 0 && (bVar8 = DAT_08b1, (~bVar8 & 0x40) == 0)))))
           ) goto LAB_9d51;
      }
      else {
        cVar13 = DAT_0d87;
        if ((cVar13 != '\t') || (bVar8 = DAT_0896._0_1_, (~bVar8 & 0x10) != 0)) {
          bVar8 = DAT_0898;
          if ((&DAT_4e11)[bVar8] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        cVar13 = DAT_0acd;
        if (cVar13 == '\0') goto LAB_9d2a;
        FUN_a3b4();
        cVar13 = DAT_0ace;
        if (cVar13 == '\0') goto LAB_9d2a;
        bVar8 = DAT_0acf;
        if (bVar8 < DAT_4c02) {
          cVar13 = (bVar8 + 1) - (0xfe < bVar8);
          goto LAB_9d2b;
        }
        DAT_0acf = (bVar8 + 1) - (0xfe < bVar8);
      }
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 | 2;
      bVar8 = DAT_0889;
      DAT_0889 = bVar8 | 0x80;
    }
    else {
LAB_9d51:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xfd;
      bVar8 = DAT_0889;
      DAT_0889 = bVar8 & 0x7f;
    }
  }
  else {
    cVar13 = DAT_0bdd;
    cVar6 = DAT_0d49;
    if (cVar13 != cVar6) goto LAB_9cbd;
  }
  bVar8 = DAT_08a0;
  if ((bVar8 & 4) == 0) {
LAB_9d6e:
    if ((DAT_4e1b == 0xff) || (uVar9 = DAT_0a2e, (ushort)DAT_4e1b << 8 < uVar9)) {
      cVar13 = '\0';
    }
    else {
      bVar8 = DAT_0b91;
      if (DAT_4e95 <= bVar8) {
        bVar14 = DAT_0b90;
        DAT_0b90 = bVar14 | 0x80;
      }
      cVar13 = (bVar8 + 1) - (0xfe < bVar8);
    }
    DAT_0b91 = cVar13;
    uVar9 = DAT_0a2e;
    if (((ushort)DAT_4e1a << 8 < uVar9) && (DAT_4e1a != 0xff)) {
      bVar8 = DAT_0b90;
      if ((bVar8 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        cVar13 = DAT_0d87;
        if ((cVar13 != '\t') && (bVar8 = DAT_088c, (bVar8 & 0x80) != 0)) {
          bVar8 = DAT_0b90;
          DAT_0b90 = bVar8 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        bVar8 = DAT_0880;
        if ((~bVar8 & 1) == 0) goto LAB_9dc5;
      }
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xef;
    }
    else {
LAB_9dc5:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 | 0x10;
    }
  }
  else {
    cVar13 = DAT_0bdd;
    cVar6 = DAT_0d4c;
    if (cVar13 != cVar6) goto LAB_9d6e;
  }
  bVar8 = DAT_0880;
  if (((bVar8 & 1) == 0) ||
     ((((bVar8 = DAT_08af, (~bVar8 & 0x40) == 0 && (bVar8 = DAT_08af, (~bVar8 & 2) == 0)) &&
       ((cVar13 = DAT_0dd9, cVar13 == -0x80 || (bVar8 = DAT_08b0, (~bVar8 & 8) == 0)))) &&
      (((bVar8 = DAT_08b1, (~bVar8 & 0x10) == 0 && (bVar8 = DAT_08b2, (~bVar8 & 0x80) == 0)) &&
       (bVar8 = DAT_08b4, (~bVar8 & 8) == 0)))))) {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 & 0xdf;
  }
  else {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 | 0x20;
  }
  bVar8 = DAT_0884;
  if ((bVar8 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    bVar8 = DAT_0b6f;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0b6f = bVar8;
    if (DAT_4e38 <= bVar8) {
      bVar8 = DAT_0888;
      if ((~bVar8 & 8) == 0) {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 | 8;
      }
      else {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 & 0xf7;
      }
      goto LAB_9e24;
    }
  }
  bVar8 = DAT_0889;
  if ((~bVar8 & 2) != 0) {
    bVar8 = DAT_0bd1;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0bd1 = bVar8;
    if (DAT_4e66 <= bVar8) {
      DAT_0bd1 = 0;
      bVar8 = DAT_0b94;
      DAT_0b94 = (bVar8 + 1) - (0xfe < bVar8);
    }
  }
  cVar13 = DAT_0b9a;
  if ((cVar13 != -1) && (uVar9 = DAT_0b98, DAT_4e3a <= uVar9)) {
    DAT_0b98 = 0;
    bVar8 = DAT_0b9a;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0b9a = bVar8;
    if (4 < bVar8) {
      uVar7 = DAT_08af;
      DAT_08b8 = uVar7;
      uVar7 = DAT_08b0;
      DAT_08b9 = uVar7;
      uVar7 = DAT_08b1;
      DAT_08ba = uVar7;
      uVar7 = DAT_08b2;
      DAT_08bb = uVar7;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 8;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 4;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 2;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 1;
      DAT_0b9a = 0xff;
    }
    bVar8 = DAT_0be8;
    DAT_0be8 = bVar8 | 0x40;
  }
  cVar13 = DAT_0dd5;
  if ((cVar13 != -0x80) && (bVar8 = DAT_0d06, (~bVar8 & 0x80) == 0)) {
    bVar8 = DAT_0d0a;
    DAT_0d0a = (bVar8 + 1) - (0xfe < bVar8);
  }
  cVar13 = DAT_0dd5;
  if ((cVar13 != -0x80) && (bVar8 = DAT_0d06, (~bVar8 & 0x80) == 0)) {
    bVar8 = DAT_0d0b;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0d0b = bVar8;
    if (bVar8 <= DAT_4f16) {
      bVar5 = DAT_0d09;
      bVar12 = DAT_0ab3;
      bVar14 = bVar5 + bVar12;
      if (CARRY1(bVar5,bVar12)) {
        bVar14 = 0xff;
      }
      DAT_0d09 = bVar14;
      if ((DAT_4f16 <= bVar8) && (bVar14 <= DAT_4e84)) {
        bVar8 = DAT_0d08;
        DAT_0d08 = bVar8 | 1;
        bVar8 = DAT_0d08;
        DAT_0d08 = bVar8 | 8;
      }
    }
  }
  bVar8 = DAT_08d9;
  uVar9 = (ushort)bVar8 * 0x100;
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) == 0) {
    uVar3 = DAT_08da;
    uVar2 = uVar9 - uVar3;
    if (uVar9 < uVar3) {
      uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar2 >> 8) + 1) - ((char)-(char)uVar2 != '\0'),
                                       -(char)uVar2),&UNK_18b2);
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    else {
      uVar9 = scale_u16_by_u8(uVar2,&UNK_18b2);
    }
    sVar11 = DAT_08da;
    uVar9 = uVar9 + sVar11;
  }
  DAT_08da = uVar9;
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    bVar8 = DAT_088d;
    if (((((~bVar8 & 0x20) == 0) && (bVar8 = DAT_0885, (~bVar8 & 0x20) == 0)) &&
        ((bVar8 = DAT_0889, (~bVar8 & 2) != 0 ||
         ((bVar8 = DAT_0880, (~bVar8 & 4) != 0 || (bVar8 = DAT_0aa6, (~bVar8 & 4) != 0)))))) ||
       ((bVar8 = DAT_08ec, DAT_4e28 < bVar8 ||
        ((((bVar8 = DAT_0abe, DAT_4e29 < bVar8 || (uVar9 = DAT_0900, uVar9 < DAT_4e1e)) ||
          (bVar8 = DAT_08af, (~bVar8 & 8) != 0)) || (bVar8 = DAT_08af, (~bVar8 & 4) != 0)))))) {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 & 0x7f;
      DAT_0adc = 0;
    }
    else {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 | 0x80;
      bVar8 = DAT_0adc;
      if (DAT_4e2a <= bVar8) {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 | 0x80;
      }
    }
  }
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    bVar8 = DAT_08ec;
    if ((DAT_4e28 < bVar8) || (bVar8 = DAT_0abe, DAT_4e2b < bVar8)) {
      bVar8 = DAT_0ada;
      DAT_0ada = bVar8 & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      bVar8 = DAT_0ada;
      if ((bVar8 & 0x40) != 0) {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 | 0x20;
      }
      bVar8 = DAT_0ada;
      if ((((~bVar8 & 0x80) == 0) && (bVar8 = DAT_08b1, (bVar8 & 0x20) == 0)) ||
         ((uVar9 = DAT_0900, uVar9 < DAT_4e20 ||
          ((bVar8 = DAT_08af, (~bVar8 & 8) != 0 || (bVar8 = DAT_08af, (~bVar8 & 4) != 0)))))) {
        bVar8 = DAT_0ada;
        if ((bVar8 & 0x10) != 0) {
          bVar8 = DAT_0ada;
          DAT_0ada = bVar8 & 0xef;
          DAT_0ae1 = 0;
        }
        bVar8 = DAT_0ada;
        if ((bVar8 & 0x40) != 0) {
          bVar8 = DAT_0ada;
          if ((~bVar8 & 8) == 0) {
            bVar8 = DAT_0ada;
            if (((((~bVar8 & 0x80) == 0) && (bVar8 = DAT_08b1, (bVar8 & 0x20) == 0)) ||
                (uVar9 = DAT_0900, DAT_4e22 < uVar9)) ||
               ((bVar8 = DAT_08af, (~bVar8 & 8) != 0 || (bVar8 = DAT_08af, (~bVar8 & 4) != 0))))
            goto LAB_a04f;
            bVar8 = DAT_0ada;
            DAT_0ada = bVar8 | 8;
          }
          bVar8 = DAT_0ada;
          if ((((~bVar8 & 0x80) != 0) || (bVar8 = DAT_08b1, (bVar8 & 0x20) != 0)) &&
             ((uVar9 = DAT_0900, uVar9 < DAT_4e20 &&
              ((bVar8 = DAT_08af, (~bVar8 & 8) == 0 && (bVar8 = DAT_08af, (~bVar8 & 4) == 0)))))) {
            bVar8 = DAT_0ada;
            DAT_0ada = bVar8 & 0xef | 100;
            goto LAB_a04f;
          }
        }
        bVar8 = DAT_0ada;
        if ((bVar8 & 4) != 0) {
          bVar8 = DAT_0ada;
          DAT_0ada = bVar8 & 0xfb;
          DAT_0ae1 = 0;
        }
      }
      else {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 & 0xf3 | 0x70;
      }
    }
  }
LAB_a04f:
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    bVar8 = DAT_088d;
    if (((((~bVar8 & 0x20) == 0) && (bVar8 = DAT_0885, (~bVar8 & 0x20) == 0)) &&
        ((bVar8 = DAT_0889, (~bVar8 & 2) != 0 ||
         ((bVar8 = DAT_0880, (~bVar8 & 4) != 0 || (bVar8 = DAT_0aa6, (~bVar8 & 4) != 0)))))) ||
       (((bVar8 = DAT_08ec, DAT_4e28 < bVar8 ||
         (((bVar8 = DAT_0abe, DAT_4e29 < bVar8 || (uVar9 = DAT_0900, DAT_4e24 <= uVar9)) ||
          (bVar8 = DAT_08af, (~bVar8 & 8) != 0)))) ||
        (((bVar8 = DAT_08af, (~bVar8 & 4) != 0 || (sVar11 = DAT_0ad6, sVar11 != 0)) ||
         (cVar13 = DAT_0ad9, cVar13 != '\0')))))) {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 & 0xbf;
      DAT_0add = 0;
    }
    else {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 | 0x40;
      bVar8 = DAT_0add;
      if (DAT_4e31 <= bVar8) {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = 0;
        DAT_0ae1 = 0;
      }
    }
  }
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    cVar13 = DAT_0d5f;
    if (cVar13 != -0x80) {
      bVar8 = DAT_0ada;
      if ((bVar8 & 0x40) == 0) {
        bVar8 = DAT_0adb;
        DAT_0adb = bVar8 & 0xdf;
        DAT_0ade = 0;
      }
      else {
        bVar8 = DAT_0adb;
        DAT_0adb = bVar8 | 0x20;
        bVar8 = DAT_0ade;
        if ((DAT_4e57 <= bVar8) && (bVar8 = DAT_08b1, (~bVar8 & 0x20) == 0)) {
          bVar8 = DAT_08b1;
          DAT_08b1 = bVar8 | 0x20;
          bVar8 = DAT_0bd2;
          DAT_0bd2 = bVar8 | 0x20;
          bVar8 = DAT_08ba;
          if ((~bVar8 & 0x20) == 0) {
            bVar8 = DAT_08ba;
            DAT_08ba = bVar8 | 0x20;
            bVar8 = DAT_0bd2;
            DAT_0bd2 = bVar8 | 2;
          }
        }
      }
    }
    bVar8 = DAT_0881;
    if ((bVar8 & 0x10) == 0) {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 | 0x10;
      bVar8 = DAT_0adf;
      if ((DAT_4e57 <= bVar8) &&
         (((((bVar8 = DAT_088d, (~bVar8 & 0x20) != 0 || (bVar8 = DAT_0885, (~bVar8 & 0x20) != 0)) ||
            ((bVar8 = DAT_0889, (~bVar8 & 2) == 0 &&
             ((bVar8 = DAT_0880, (~bVar8 & 4) == 0 && (bVar8 = DAT_0aa6, (~bVar8 & 4) == 0)))))) &&
           ((bVar8 = DAT_0ada, (~bVar8 & 0x80) != 0 || (bVar8 = DAT_08b1, (bVar8 & 0x20) != 0)))) &&
          ((((((bVar8 = DAT_08ec, bVar8 <= DAT_4e28 && (bVar8 = DAT_0abe, bVar8 <= DAT_4e29)) &&
              (uVar9 = DAT_0900, uVar9 < DAT_4e24)) &&
             ((bVar8 = DAT_08af, (~bVar8 & 8) == 0 && (bVar8 = DAT_08af, (~bVar8 & 4) == 0)))) &&
            (sVar11 = DAT_0ad6, sVar11 == 0)) && (cVar13 = DAT_0ad9, cVar13 == '\0')))))) {
        bVar8 = DAT_0adb;
        DAT_0adb = bVar8 | 8;
        bVar8 = DAT_0ae0;
        if (DAT_4e31 <= bVar8) {
          bVar8 = DAT_0ada;
          DAT_0ada = bVar8 & 0x7f;
          cVar13 = DAT_0d5f;
          if ((cVar13 != -0x80) && (bVar8 = DAT_08b1, (bVar8 & 0x20) != 0)) {
            bVar8 = DAT_08b1;
            DAT_08b1 = bVar8 & 0xdf;
            bVar8 = DAT_0bd2;
            DAT_0bd2 = bVar8 | 0x20;
          }
        }
        goto LAB_a1ae;
      }
    }
    else {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 & 0xef;
      DAT_0adf = 0;
    }
    bVar8 = DAT_0adb;
    DAT_0adb = bVar8 & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  FUN_5fc8();
  bVar8 = DAT_0891;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0891;
    if ((bVar8 & 0x80) == 0) {
LAB_a24a:
      bVar8 = DAT_0bd2;
      if (bVar8 == 0) {
LAB_a26f:
        bVar8 = DAT_0be8;
        if (bVar8 != 0) {
          if ((bVar8 & 0x80) == 0) {
            if ((bVar8 & 0x40) == 0) {
              if ((bVar8 & 4) != 0) goto LAB_a2b4;
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
      else if ((bVar8 & 0x80) == 0) {
        if ((bVar8 & 0x40) == 0) {
          if ((bVar8 & 0x20) == 0) {
            if ((bVar8 & 0x10) == 0) {
              if ((bVar8 & 8) == 0) {
                if ((bVar8 & 4) == 0) {
                  if ((bVar8 & 2) == 0) {
                    if ((bVar8 & 1) != 0) goto LAB_a2aa;
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
      bVar8 = DAT_088f;
      if ((~bVar8 & 0x80) == 0) {
        bVar8 = DAT_088f;
        if ((~bVar8 & 0x40) == 0) goto LAB_a24a;
        FUN_b4c6();
      }
      else {
        FUN_b3ec();
      }
    }
  }
  else {
    bVar8 = DAT_0891;
    if ((bVar8 & 0x80) == 0) {
LAB_a1d9:
      bVar8 = DAT_0bd3;
      if (bVar8 == 0) {
LAB_a20e:
        bVar8 = DAT_0be9;
        if (bVar8 != 0) {
          if ((bVar8 & 0x80) != 0) goto LAB_a296;
          if ((bVar8 & 0x40) != 0) goto LAB_a2af;
          if ((bVar8 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
          FUN_b7b9();
        }
      }
      else {
        if ((bVar8 & 0x80) != 0) goto LAB_a282;
        if ((bVar8 & 0x40) != 0) goto LAB_a287;
        if ((bVar8 & 0x20) != 0) goto LAB_a28c;
        if ((bVar8 & 0x10) != 0) goto LAB_a291;
        if ((bVar8 & 8) != 0) goto LAB_a29b;
        if ((bVar8 & 4) != 0) goto LAB_a2a0;
        if ((bVar8 & 2) != 0) goto LAB_a2a5;
        if ((bVar8 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
        FUN_b721();
      }
    }
    else {
      bVar8 = DAT_0890;
      if ((~bVar8 & 0x80) == 0) {
        bVar8 = DAT_0890;
        if ((~bVar8 & 0x40) == 0) goto LAB_a1d9;
        FUN_b4c6();
      }
      else {
        FUN_b3ec();
      }
    }
  }
LAB_a2b9:
  bVar8 = DAT_0000;
  bVar8 = bVar8 & 0xe0;
  if (bVar8 == 0x80) {
    bVar8 = DAT_08b1;
    if (((bVar8 & 0x80) != 0x80) || (bVar8 = DAT_0000, (bVar8 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar8 != 0) {
    if (((bVar8 == 0x40) && (bVar8 = DAT_08b1, (bVar8 & 0x80) == 0x80)) &&
       (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  bVar8 = DAT_08b1;
  if (((bVar8 & 0x80) == 0x80) && (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  bVar8 = DAT_08bc;
  DAT_08bc = bVar8 & 0xf7;
  return;
}


