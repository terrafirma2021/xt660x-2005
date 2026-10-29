/* Entry dc39 */

void candidate_unreferenced_dc39(void)

{
  ushort *puVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  undefined *puVar5;
  char cVar6;
  ushort uVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 extraout_A;
  byte bVar16;
  char cVar17;
  undefined1 uVar18;
  undefined2 uVar12;
  undefined *puVar13;
  ushort uVar14;
  short sVar15;
  undefined2 *puVar19;
  undefined2 *puVar20;
  
  DAT_0b60 = 0;
  bVar11 = DAT_0922;
  if (0xbf < bVar11) {
    bVar11 = DAT_0880;
    DAT_0880 = bVar11 | 0x80;
    bVar11 = DAT_088c;
    DAT_088c = bVar11 | 0x20;
    bVar11 = DAT_088c;
    DAT_088c = bVar11 | 0x10;
  }
  DAT_0922 = 0;
  bVar11 = DAT_0922;
  DAT_0923 = bVar11 & 0x1f;
  uVar18 = DAT_0085;
  DAT_08c4 = uVar18;
  bVar11 = DAT_088d;
  DAT_088d = bVar11 | 1;
  DAT_0085 = 1;
  sVar15 = DAT_0044;
  DAT_08c8 = sVar15 + 0x4b;
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) != 0) {
    bVar9 = DAT_0c04;
    bVar11 = DAT_0921;
    if (0x33 < bVar11) {
      DAT_0a2e = 0xffff;
    }
    bVar8 = DAT_0a2e._0_1_;
    bVar11 = DAT_0880;
    if ((~bVar11 & 1) == 0) {
      bVar11 = DAT_0880;
      if (((bVar11 & 2) != 0) && ((byte)(&DAT_0d68)[bVar9] <= bVar8)) {
        bVar11 = DAT_0884;
        DAT_0884 = bVar11 | 4;
        DAT_0aff = 0;
        FUN_721f();
        bVar11 = DAT_088d;
        if ((bVar11 & 1) != 0) {
          bVar11 = DAT_088d;
          DAT_088d = bVar11 & 0xfe;
          FUN_f39d();
        }
        goto LAB_dc06;
      }
      bVar11 = DAT_0b5d;
      bVar8 = DAT_0d74;
      if (bVar8 <= bVar11) {
        bVar11 = DAT_0885;
        DAT_0885 = bVar11 & 0xbf;
      }
    }
    else {
      bVar11 = DAT_0d73;
      if (bVar11 <= bVar8) {
        bVar11 = DAT_0b5d;
        bVar8 = DAT_0d74;
        if (bVar11 < bVar8) {
          bVar11 = DAT_0885;
          DAT_0885 = bVar11 | 0x40;
          goto LAB_dcfa;
        }
      }
      bVar11 = DAT_0885;
      DAT_0885 = bVar11 & 0xbf;
      bVar11 = DAT_0884;
      DAT_0884 = bVar11 & 0xfb;
    }
LAB_dcfa:
    bVar11 = DAT_0bf8;
    if (((((~bVar11 & 0x80) == 0) && (bVar11 = DAT_0bf8, (bVar11 & 0x40) != 0)) &&
        (bVar11 = DAT_0a2e._0_1_, (byte)(&DAT_0d68)[bVar9] <= bVar11)) &&
       (bVar11 = DAT_0bf8, (~bVar11 & 0x20) == 0)) {
      bVar11 = DAT_0bf8;
      DAT_0bf8 = bVar11 | 0x80;
      DAT_0bf9 = 0;
      FUN_721f();
      bVar11 = DAT_088d;
      if ((bVar11 & 1) != 0) {
        bVar11 = DAT_088d;
        DAT_088d = bVar11 & 0xfe;
        FUN_f39d();
      }
LAB_dc06:
      DAT_0b00 = 0;
      DAT_004e = 2;
      bVar11 = DAT_08be;
      DAT_08be = bVar11 & 0xdf;
      bVar11 = DAT_08be;
      DAT_08be = bVar11 & 0xbf;
      bVar11 = DAT_08be;
      DAT_08be = bVar11 & 0x7f;
      return;
    }
    bVar11 = DAT_0882;
    DAT_0882 = bVar11 | 0x80;
  }
  DAT_0b00 = 0;
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) != 0) {
    cVar17 = DAT_0d5e;
    if (((cVar17 != -0x80) && (bVar11 = DAT_08a0, (~bVar11 & 4) == 0)) &&
       (bVar11 = DAT_08b2, (~bVar11 & 0x80) == 0)) {
      bVar11 = DAT_0880;
      if ((~bVar11 & 1) == 0) {
        bVar11 = DAT_0b6e;
        bVar9 = DAT_0d75;
        if (bVar9 <= bVar11) {
          bVar11 = DAT_0bce;
          bVar9 = DAT_0d77;
          if (bVar9 <= bVar11) goto LAB_dd63;
        }
      }
      else {
LAB_dd63:
        cVar17 = DAT_0d5e;
        if (((cVar17 != -0x80) && (bVar11 = DAT_0880, (~bVar11 & 0x80) == 0)) &&
           ((((bVar11 = DAT_0d08, (~bVar11 & 1) == 0 &&
              (((bVar11 = DAT_0884, (~bVar11 & 2) == 0 && (bVar11 = DAT_0884, (~bVar11 & 4) == 0))
               && (bVar11 = DAT_088c, (~bVar11 & 0x80) == 0)))) &&
             ((bVar11 = DAT_0885, (~bVar11 & 0x40) == 0 &&
              (bVar11 = DAT_0bf8, (~bVar11 & 0x80) == 0)))) &&
            (bVar11 = DAT_089b, (~bVar11 & 0x80) == 0)))) {
          cVar17 = DAT_0c04;
          bVar11 = DAT_088c;
          if ((((~bVar11 & 2) != 0) || (bVar11 = DAT_089a, (~bVar11 & 2) != 0)) || (cVar17 != '\b'))
          goto LAB_de0b;
          bVar11 = DAT_0a92;
          if ((bVar11 & 8) != 0) {
            bVar11 = DAT_004e;
            if ((bVar11 & 0x20) == 0) {
              DAT_0b50 = 0;
              bVar11 = DAT_0b46;
              bVar11 = (bVar11 + 1) - (0xfe < bVar11);
              DAT_0b46 = bVar11;
              bVar9 = DAT_0d78;
              if ((bVar9 <= bVar11) && (bVar11 = DAT_08b1, (~bVar11 & 0x80) == 0)) {
                bVar11 = DAT_08b1;
                DAT_08b1 = bVar11 | 0x80;
                bVar11 = DAT_0bd2;
                DAT_0bd2 = bVar11 | 0x20;
                bVar11 = DAT_08ba;
                if ((~bVar11 & 0x80) == 0) {
                  bVar11 = DAT_08ba;
                  DAT_08ba = bVar11 | 0x80;
                  bVar11 = DAT_0bd2;
                  DAT_0bd2 = bVar11 | 2;
                }
              }
            }
            else {
              DAT_0b46 = 0;
              bVar11 = DAT_0b50;
              bVar11 = (bVar11 + 1) - (0xfe < bVar11);
              DAT_0b50 = bVar11;
              bVar9 = DAT_0d76;
              if ((bVar9 <= bVar11) && (bVar11 = DAT_08b1, (bVar11 & 0x80) != 0)) {
                bVar11 = DAT_08b1;
                DAT_08b1 = bVar11 & 0x7f;
                bVar11 = DAT_0bd2;
                DAT_0bd2 = bVar11 | 0x20;
              }
            }
          }
        }
      }
    }
    uVar18 = DAT_0c04;
    DAT_004e = 0x20;
  }
LAB_de0b:
  bVar11 = DAT_0bfe;
  if (((~bVar11 & 0x80) != 0) && (cVar17 = DAT_0c04, cVar17 == '\n')) {
    bVar11 = DAT_0a92;
    DAT_0a92 = bVar11 & 0x77;
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) != 0) {
    bVar11 = DAT_0a2e._0_1_;
    bVar9 = DAT_0d79;
    if (bVar11 < bVar9) {
      bVar9 = DAT_0d7a;
      if (bVar11 < bVar9) {
        uVar18 = DAT_0881;
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0xef;
      }
    }
    else {
      bVar11 = DAT_0881;
      DAT_0881 = bVar11 | 0x10;
      uVar18 = DAT_0d7b;
      DAT_0a1a = uVar18;
    }
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) != 0) {
    bVar11 = DAT_0a2e._0_1_;
    bVar9 = DAT_0d7d;
    if (((bVar11 < bVar9) || (bVar9 = DAT_0880, (~bVar9 & 1) == 0)) &&
       (bVar9 = DAT_0d7c, bVar11 < bVar9)) {
      cVar17 = DAT_0c04;
      if (cVar17 == '\0') {
        bVar9 = DAT_0880;
        DAT_0880 = bVar9 & 0xbf;
      }
      bVar9 = DAT_0d7c;
      if (bVar9 <= bVar11) goto LAB_de81;
      if (cVar17 == '\0') {
        bVar11 = DAT_0880;
        DAT_0880 = bVar11 & 0xfb;
      }
    }
    else {
      bVar11 = DAT_0880;
      DAT_0880 = bVar11 | 0x40;
LAB_de81:
      bVar11 = DAT_0880;
      DAT_0880 = bVar11 | 4;
      DAT_0a86 = 0x80;
    }
    bVar11 = DAT_0881;
    DAT_0881 = bVar11 & 0xdf;
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) != 0) {
    FUN_ed29();
    FUN_ed6d();
  }
  bVar11 = DAT_0bfe;
  if (((~bVar11 & 0x80) != 0) && (cVar17 = DAT_0c04, cVar17 == '\0')) {
    bVar11 = DAT_0887;
    DAT_0887 = bVar11 | 2;
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) != 0) {
    cVar17 = DAT_0923;
    if (((cVar17 == '\0') || (cVar17 == '\x06')) || ((cVar17 == '\f' || (cVar17 == '\x12')))) {
      bVar11 = DAT_0881;
      DAT_0881 = bVar11 | 4;
      bVar11 = DAT_0887;
      DAT_0887 = bVar11 | 1;
    }
    bVar11 = DAT_0ca8;
    if (((bVar11 & 1) != 0) && (cVar6 = DAT_0da6, cVar17 == (char)(cVar6 + '\x04'))) {
      bVar11 = DAT_0881;
      DAT_0881 = bVar11 | 2;
    }
    bVar11 = DAT_088b;
    if ((bVar11 & 0x80) == 0) {
      bVar9 = DAT_0c04;
      bVar11 = DAT_0d7e;
      bVar11 = bVar11 & 0x1f;
      if (0xb < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_0a17;
        DAT_0a17 = bVar11 & 0xf7;
        bVar11 = DAT_0a19;
        DAT_0a19 = bVar11 & 0xf7;
        bVar11 = DAT_088b;
        DAT_088b = bVar11 | 0x40;
        uVar18 = DAT_0a26._0_1_;
        DAT_0a22._0_1_ = uVar18;
        uVar18 = DAT_0a26._1_1_;
        DAT_0a22._1_1_ = uVar18;
        uVar18 = DAT_0a1e;
        DAT_0a1c = uVar18;
      }
      bVar11 = DAT_0cab;
      bVar11 = bVar11 & 0x1f;
      if (0xb < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_0a17;
        DAT_0a17 = bVar11 & 0xfd;
        bVar11 = DAT_0a19;
        DAT_0a19 = bVar11 & 0xfd;
        uVar18 = DAT_0a28._0_1_;
        DAT_0a24._0_1_ = uVar18;
        uVar18 = DAT_0a28._1_1_;
        DAT_0a24._1_1_ = uVar18;
        uVar18 = DAT_0a1f;
        DAT_0a1d = uVar18;
      }
    }
    else {
      bVar11 = DAT_0923;
      bVar9 = DAT_0d7e;
      if (bVar11 == (bVar9 & 0x1f)) {
        bVar9 = DAT_0a17;
        DAT_0a17 = bVar9 & 0xf7;
        bVar9 = DAT_0a19;
        DAT_0a19 = bVar9 & 0xf7;
        bVar9 = DAT_088b;
        DAT_088b = bVar9 | 0x40;
        uVar18 = DAT_0a26._0_1_;
        DAT_0a22._0_1_ = uVar18;
        uVar18 = DAT_0a26._1_1_;
        DAT_0a22._1_1_ = uVar18;
        uVar18 = DAT_0a1e;
        DAT_0a1c = uVar18;
      }
      uVar18 = DAT_0cab;
      uVar14 = CONCAT11(bVar11,uVar18) & 0xff1f;
      if ((char)(uVar14 >> 8) == (char)uVar14) {
        bVar11 = DAT_0a17;
        DAT_0a17 = bVar11 & 0xfd;
        bVar11 = DAT_0a19;
        DAT_0a19 = bVar11 & 0xfd;
        uVar18 = DAT_0a28._0_1_;
        DAT_0a24._0_1_ = uVar18;
        uVar18 = DAT_0a28._1_1_;
        DAT_0a24._1_1_ = uVar18;
        uVar18 = DAT_0a1f;
        DAT_0a1d = uVar18;
      }
    }
    FUN_f49f();
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) != 0) {
    bVar11 = DAT_0ca8;
    if ((~bVar11 & 1) == 0) {
      bVar9 = DAT_0c04;
      bVar11 = DAT_0d7e;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_088b;
        if ((~bVar11 & 0x80) == 0) {
          DAT_0a20 = 0;
        }
        else {
          cVar17 = DAT_0a20;
          DAT_0a20 = bVar9 + (cVar17 == '\0');
        }
      }
      bVar11 = DAT_0cab;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_088b;
        if ((~bVar11 & 0x80) == 0) {
          DAT_0a21 = 0;
        }
        else {
          cVar17 = DAT_0a21;
          DAT_0a21 = bVar9 + (cVar17 == '\0');
        }
      }
      bVar11 = DAT_0a1c;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if ((bVar9 == bVar11) && (bVar11 = DAT_0a19, (bVar11 & 8) != 0)) {
        FUN_ec98();
      }
      bVar9 = DAT_0c04;
      bVar11 = DAT_0a1d;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if ((bVar9 == bVar11) && (bVar11 = DAT_0a19, (bVar11 & 2) != 0)) {
        FUN_ed11();
      }
      bVar9 = DAT_0c04;
      bVar11 = DAT_0d7e;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0x7f;
      }
      bVar11 = DAT_0cab;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0xbf;
      }
    }
    else {
      bVar11 = DAT_0923;
      bVar9 = DAT_0d7e;
      if (bVar11 == (bVar9 & 0x1f)) {
        bVar9 = DAT_088b;
        if ((~bVar9 & 0x80) == 0) {
          DAT_0a20 = 0;
        }
        else {
          cVar17 = DAT_0a20;
          DAT_0a20 = bVar11 + (cVar17 == '\0');
        }
      }
      bVar9 = DAT_0cab;
      if (bVar11 == (bVar9 & 0x1f)) {
        bVar9 = DAT_088b;
        if ((~bVar9 & 0x80) == 0) {
          DAT_0a21 = 0;
        }
        else {
          cVar17 = DAT_0a21;
          DAT_0a21 = bVar11 + (cVar17 == '\0');
        }
      }
      uVar18 = DAT_0a1c;
      uVar14 = CONCAT11(bVar11,uVar18) & 0xff1f;
      if (((char)(uVar14 >> 8) == (char)uVar14) && (bVar11 = DAT_0a19, (bVar11 & 8) != 0)) {
        FUN_ec98();
      }
      uVar18 = DAT_0923;
      uVar10 = DAT_0a1d;
      uVar14 = CONCAT11(uVar18,uVar10) & 0xff1f;
      if (((char)(uVar14 >> 8) == (char)uVar14) && (bVar11 = DAT_0a19, (bVar11 & 2) != 0)) {
        FUN_ed11();
      }
      uVar18 = DAT_0923;
      uVar10 = DAT_0d7e;
      uVar14 = CONCAT11(uVar18,uVar10) & 0xff1f;
      cVar17 = (char)(uVar14 >> 8);
      if (cVar17 == (char)uVar14) {
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0x7f;
      }
      uVar18 = DAT_0cab;
      uVar14 = CONCAT11(cVar17,uVar18) & 0xff1f;
      if ((char)(uVar14 >> 8) == (char)uVar14) {
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0xbf;
      }
    }
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) != 0) {
    bVar11 = DAT_0922;
    if (((bVar11 & 0x1f) == 0) || ((bVar11 & 0x1f) == 0xc)) {
      uVar12 = DAT_0ac2;
      DAT_0ac4 = uVar12;
      sVar15 = DAT_0ab0;
      DAT_0ac2 = sVar15;
      sVar3 = DAT_0ac4;
      sVar15 = sVar15 - sVar3;
      bVar11 = DAT_0abf;
      if ((~bVar11 & 4) == 0) {
        sVar15 = 0;
      }
      if ((char)((ushort)sVar15 >> 8) != '\0') {
        sVar15 = 0xff;
      }
      DAT_0ac0 = (char)sVar15;
      bVar11 = DAT_0abf;
      DAT_0abf = bVar11 | 4;
      bVar11 = DAT_0ac0;
      bVar8 = DAT_0d7f;
      bVar9 = DAT_0ac8;
      bVar16 = (byte)((ushort)bVar11 * (ushort)bVar8);
      bVar8 = (byte)((ushort)bVar11 * (ushort)bVar8 >> 8);
      bVar11 = bVar8 - (bVar16 < bVar9);
      if (bVar8 < (bVar16 < bVar9)) {
        cVar17 = -(bVar16 - bVar9);
        bVar9 = DAT_0d80;
        iVar2 = (uint)bVar9 * (uint)CONCAT11((~bVar11 + 1) - (cVar17 != '\0'),cVar17);
        uVar12 = (undefined2)iVar2;
        if ((short)((uint)iVar2 >> 0x10) != 0) {
          uVar12 = 0xffff;
        }
        bVar11 = DAT_0abf;
        bVar9 = (byte)((ushort)uVar12 >> 8);
        bVar8 = (byte)uVar12;
        if ((bVar11 & 1) == 0) {
          bVar16 = DAT_0ac6._1_1_;
          bVar11 = bVar9 - (bVar8 < bVar16);
          uVar12 = CONCAT11(bVar11,bVar8 - bVar16);
          if ((bVar8 < bVar16) <= bVar9) goto LAB_e16b;
          cVar17 = -(bVar8 - bVar16);
          uVar12 = CONCAT11((~bVar11 + 1) - (cVar17 != '\0'),cVar17);
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 & 0xfe;
        }
        else {
          bVar11 = DAT_0ac6._1_1_;
          uVar12 = CONCAT11(bVar9 + CARRY1(bVar8,bVar11),bVar8 + bVar11);
          if (CARRY1(bVar9,CARRY1(bVar8,bVar11))) {
            uVar12 = 0xffff;
          }
LAB_e16b:
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 | 1;
        }
        DAT_0ac6 = uVar12;
      }
      else {
        bVar8 = DAT_0d80;
        iVar2 = (uint)bVar8 * (uint)CONCAT11(bVar11,bVar16 - bVar9);
        uVar12 = (undefined2)iVar2;
        if ((short)((uint)iVar2 >> 0x10) != 0) {
          uVar12 = 0xffff;
        }
        bVar11 = DAT_0abf;
        bVar9 = (byte)((ushort)uVar12 >> 8);
        bVar8 = (byte)uVar12;
        if ((bVar11 & 1) == 0) {
          bVar11 = DAT_0ac6._1_1_;
          uVar12 = CONCAT11(bVar9 + CARRY1(bVar8,bVar11),bVar8 + bVar11);
          if (CARRY1(bVar9,CARRY1(bVar8,bVar11))) {
            uVar12 = 0xffff;
          }
LAB_e1ad:
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 & 0xfe;
        }
        else {
          bVar16 = DAT_0ac6._1_1_;
          bVar11 = bVar9 - (bVar8 < bVar16);
          uVar12 = CONCAT11(bVar11,bVar8 - bVar16);
          if ((bVar8 < bVar16) <= bVar9) goto LAB_e1ad;
          cVar17 = -(bVar8 - bVar16);
          uVar12 = CONCAT11((~bVar11 + 1) - (cVar17 != '\0'),cVar17);
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 | 1;
        }
        DAT_0ac6 = uVar12;
      }
      bVar9 = DAT_0ac8;
      bVar11 = DAT_0abf;
      if ((bVar11 & 1) == 0) {
        bVar11 = DAT_0ac6._0_1_;
        cVar17 = bVar9 + bVar11;
        if (CARRY1(bVar9,bVar11)) {
          cVar17 = -1;
        }
      }
      else {
        bVar11 = DAT_0ac6._0_1_;
        cVar17 = bVar9 - bVar11;
        if (bVar9 < bVar11) {
          cVar17 = '\0';
        }
      }
      DAT_0ac8 = cVar17;
      bVar11 = DAT_0ac8;
      bVar9 = DAT_0acc;
      if (bVar11 < bVar9) {
        bVar8 = DAT_0d80;
        sVar15 = (ushort)(byte)-(bVar11 - bVar9) * (ushort)bVar8;
        bVar11 = DAT_0abf;
        bVar9 = (byte)((ushort)sVar15 >> 8);
        bVar8 = (byte)sVar15;
        if ((bVar11 & 2) == 0) {
          bVar16 = DAT_0aca._1_1_;
          bVar11 = bVar9 - (bVar8 < bVar16);
          uVar12 = CONCAT11(bVar11,bVar8 - bVar16);
          if ((bVar8 < bVar16) <= bVar9) goto LAB_e1f4;
          cVar17 = -(bVar8 - bVar16);
          uVar12 = CONCAT11((~bVar11 + 1) - (cVar17 != '\0'),cVar17);
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 & 0xfd;
        }
        else {
          bVar11 = DAT_0aca._1_1_;
          uVar12 = CONCAT11(bVar9 + CARRY1(bVar8,bVar11),bVar8 + bVar11);
          if (CARRY1(bVar9,CARRY1(bVar8,bVar11))) {
            uVar12 = 0xffff;
          }
LAB_e1f4:
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 | 2;
        }
        DAT_0aca = uVar12;
      }
      else {
        bVar8 = DAT_0d80;
        sVar15 = (ushort)(byte)(bVar11 - bVar9) * (ushort)bVar8;
        bVar11 = DAT_0abf;
        bVar9 = (byte)((ushort)sVar15 >> 8);
        bVar8 = (byte)sVar15;
        if ((bVar11 & 2) == 0) {
          bVar11 = DAT_0aca._1_1_;
          uVar12 = CONCAT11(bVar9 + CARRY1(bVar8,bVar11),bVar8 + bVar11);
          if (CARRY1(bVar9,CARRY1(bVar8,bVar11))) {
            uVar12 = 0xffff;
          }
LAB_e22b:
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 & 0xfd;
        }
        else {
          bVar16 = DAT_0aca._1_1_;
          bVar11 = bVar9 - (bVar8 < bVar16);
          uVar12 = CONCAT11(bVar11,bVar8 - bVar16);
          if ((bVar8 < bVar16) <= bVar9) goto LAB_e22b;
          cVar17 = -(bVar8 - bVar16);
          uVar12 = CONCAT11((~bVar11 + 1) - (cVar17 != '\0'),cVar17);
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 | 2;
        }
        DAT_0aca = uVar12;
      }
      bVar9 = DAT_0acc;
      bVar11 = DAT_0abf;
      if ((bVar11 & 2) == 0) {
        bVar11 = DAT_0aca._0_1_;
        cVar17 = bVar9 + bVar11;
        if (CARRY1(bVar9,bVar11)) {
          cVar17 = -1;
        }
      }
      else {
        bVar11 = DAT_0aca._0_1_;
        cVar17 = bVar9 - bVar11;
        if (bVar9 < bVar11) {
          cVar17 = '\0';
        }
      }
      DAT_0acc = cVar17;
      cVar17 = DAT_0d87;
      if (cVar17 == '\t') {
        bVar11 = DAT_0acc;
        bVar9 = DAT_0d81;
        if (bVar11 < bVar9) {
          puVar13 = (undefined *)0x100;
        }
        else {
          bVar9 = DAT_0d82;
          if (bVar11 < bVar9) {
            puVar13 = &UNK_0201;
          }
          else {
            bVar9 = DAT_0d83;
            if (bVar11 < bVar9) {
              puVar13 = &UNK_0402;
            }
            else {
              bVar9 = DAT_0d84;
              if (bVar11 < bVar9) {
                puVar13 = (undefined *)0x803;
              }
              else {
                bVar9 = DAT_0d85;
                if (bVar9 <= bVar11) goto LAB_e28e;
                puVar13 = &UNK_1004;
              }
            }
          }
        }
      }
      else {
LAB_e28e:
        puVar13 = &UNK_2005;
      }
      DAT_0bcb = (char)((ushort)puVar13 >> 8);
      DAT_0bca = (char)puVar13;
      cVar17 = DAT_0d61;
      if ((((cVar17 != -0x80) && (cVar17 = DAT_0d87, cVar17 == '\t')) &&
          (bVar11 = DAT_08a0, (~bVar11 & 4) == 0)) && (bVar11 = DAT_08b2, (~bVar11 & 0x80) == 0)) {
        cVar17 = DAT_0d87;
        if (((cVar17 == '\t') && (bVar11 = DAT_0896._0_1_, (bVar11 & 0x10) == 0)) ||
           (bVar11 = DAT_0881, (~bVar11 & 0x10) != 0)) {
          DAT_0bcc = 0;
          DAT_0bcd = 0;
        }
        else {
          cVar17 = DAT_0bca;
          if (cVar17 == '\0') {
            bVar11 = DAT_08b6;
            if ((bVar11 & 2) != 0) {
              bVar11 = DAT_0bcc;
              bVar9 = DAT_0d88;
              if (bVar11 <= bVar9) goto LAB_e34d;
              bVar11 = DAT_08b1;
              if ((~bVar11 & 8) == 0) {
                bVar11 = DAT_08b1;
                DAT_08b1 = bVar11 | 8;
                bVar11 = DAT_0bd2;
                DAT_0bd2 = bVar11 | 0x20;
                bVar11 = DAT_08ba;
                if ((~bVar11 & 8) == 0) {
                  bVar11 = DAT_08ba;
                  DAT_08ba = bVar11 | 8;
                  bVar11 = DAT_0bd2;
                  DAT_0bd2 = bVar11 | 2;
                }
              }
              bVar11 = DAT_0889;
              DAT_0889 = bVar11 & 0xfd;
              DAT_0b92 = 0;
            }
            bVar11 = DAT_08b6;
            DAT_08b6 = bVar11 | 2;
          }
          else {
            bVar11 = DAT_08b6;
            if ((bVar11 & 2) == 0) {
              bVar11 = DAT_0bcd;
              bVar9 = DAT_0d8a;
              if ((bVar9 < bVar11) && (bVar11 = DAT_08b1, (bVar11 & 8) != 0)) {
                bVar11 = DAT_08b1;
                DAT_08b1 = bVar11 & 0xf7;
                bVar11 = DAT_0bd2;
                DAT_0bd2 = bVar11 | 0x20;
                bVar11 = DAT_08af;
                if (((~bVar11 & 8) == 0) && (bVar11 = DAT_08af, (~bVar11 & 4) == 0)) {
                  bVar11 = DAT_0889;
                  DAT_0889 = bVar11 | 2;
                  DAT_0b94 = 0;
                  uVar18 = DAT_0a83;
                  DAT_0b92 = uVar18;
                  DAT_0b95 = uVar18;
                }
              }
            }
            else {
              bVar11 = DAT_08b6;
              DAT_08b6 = bVar11 & 0xfd;
            }
          }
        }
      }
LAB_e34d:
      bVar11 = DAT_08b1;
      if ((bVar11 & 8) == 0) {
        uVar10 = DAT_0bcb;
        uVar18 = DAT_0bca;
      }
      else {
        uVar10 = 0x20;
        uVar18 = 5;
      }
      DAT_0899 = uVar10;
      DAT_0898 = uVar18;
    }
  }
  do {
    bVar11 = DAT_008b;
    if ((~bVar11 & 2) != 0) {
      uVar12 = DAT_0092;
      DAT_08cc = uVar12;
      bVar11 = DAT_088d;
      DAT_088d = bVar11 & 0xfd;
      goto LAB_e37e;
    }
    sVar15 = DAT_0044;
    sVar3 = DAT_08c8;
  } while (sVar15 - sVar3 < 0);
  bVar11 = DAT_088d;
  DAT_088d = bVar11 | 2;
LAB_e37e:
  bVar11 = DAT_088d;
  DAT_088d = bVar11 & 0xfe;
  FUN_f39d();
  bVar11 = DAT_088d;
  if ((~bVar11 & 2) == 0) {
    puVar20 = &DAT_0c42;
    puVar19 = &DAT_0c58;
    bVar11 = DAT_0bfe;
    if ((bVar11 & 0x80) != 0) {
      bVar11 = DAT_0c04;
      puVar20 = &DAT_0c42 + bVar11;
      bVar11 = DAT_0922;
      puVar19 = &DAT_0c58 + (bVar11 & 0xff1f);
    }
    uVar12 = DAT_08cc;
    *puVar20 = uVar12;
    *puVar19 = uVar12;
    DAT_0c40 = uVar12;
    DAT_08c2 = 0x40;
    DAT_08c3 = 0;
  }
  cVar17 = DAT_0d53;
  if (((cVar17 != -0x80) && (bVar11 = DAT_08a0, (~bVar11 & 4) == 0)) &&
     (bVar11 = DAT_08b2, (~bVar11 & 0x80) == 0)) {
    uVar12 = DAT_0c40;
    bVar11 = (byte)((ushort)uVar12 >> 8);
    if ((bVar11 < 0x1a) || (0xf5 < bVar11)) {
      bVar11 = DAT_08b5;
      if ((bVar11 & 0x40) == 0) {
        bVar11 = DAT_08b5;
        DAT_08b5 = bVar11 | 0x40;
        bVar11 = DAT_0bab;
        DAT_0bab = bVar11 | 0x20;
      }
      else {
        bVar11 = DAT_0b3e;
        bVar9 = DAT_0d89;
        if ((bVar9 < bVar11) && (bVar11 = DAT_08af, (~bVar11 & 0x20) == 0)) {
          bVar11 = DAT_08af;
          DAT_08af = bVar11 | 0x20;
          bVar11 = DAT_0bd2;
          DAT_0bd2 = bVar11 | 0x80;
          bVar11 = DAT_08b8;
          if ((~bVar11 & 0x20) == 0) {
            bVar11 = DAT_08b8;
            DAT_08b8 = bVar11 | 0x20;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 8;
          }
        }
      }
    }
    else {
      bVar11 = DAT_08b5;
      if ((bVar11 & 0x40) == 0) {
        bVar11 = DAT_0b4b;
        bVar9 = DAT_0d8a;
        if (bVar9 < bVar11) {
          bVar11 = DAT_08af;
          if ((bVar11 & 0x20) != 0) {
            bVar11 = DAT_08af;
            DAT_08af = bVar11 & 0xdf;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x80;
          }
          bVar11 = DAT_0bab;
          DAT_0bab = bVar11 & 0xdf;
        }
      }
      else {
        bVar11 = DAT_08b5;
        DAT_08b5 = bVar11 & 0xbf;
      }
    }
  }
  cVar17 = DAT_0c04;
  cVar6 = DAT_0d8b;
  if (cVar6 == -0x80) {
    if (cVar17 == '\x01') {
      uVar12 = DAT_0c9a;
      DAT_0c9c = uVar12;
      uVar12 = DAT_0c44;
      DAT_0c9a = uVar12;
      goto LAB_e461;
    }
  }
  else if (cVar17 == '\0') {
    uVar12 = DAT_0c9a;
    DAT_0c9c = uVar12;
    uVar12 = DAT_0c42;
    DAT_0c9a = uVar12;
LAB_e461:
    bVar11 = DAT_08af;
    if (((~bVar11 & 0x20) == 0) && (bVar11 = DAT_08af, (bVar11 & 0x10) == 0)) {
      bVar11 = DAT_0ca8;
      if ((~bVar11 & 1) == 0) {
        uVar12 = DAT_0c88;
        DAT_0c8a = uVar12;
        DAT_0c94 = uVar12;
      }
      else {
        cVar17 = DAT_0d8d;
        if (cVar17 == '\x01') {
LAB_e491:
          bVar11 = DAT_0d94;
          DAT_0c8a = (&DAT_0c58)[bVar11];
          DAT_0c94 = (&DAT_0c58)[bVar11];
        }
        else if (cVar17 == '\x02') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar9 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar9];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar12 = DAT_0df7;
          DAT_0ca0 = uVar12;
          bVar9 = DAT_0d95;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          uVar14 = RAM0c9f;
          DAT_0dfa = uVar14 / 2;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar14 % 2),uVar18) / 2);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar12 = RAM0dfb;
          }
          else {
            uVar12 = 0xffff;
          }
          DAT_0c8a = uVar12;
          DAT_0c94 = uVar12;
        }
        else if (cVar17 == '\x03') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar9 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar9];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar12 = DAT_0df7;
          DAT_0ca0 = uVar12;
          bVar9 = DAT_0d95;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d96;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          uVar14 = RAM0c9f;
          DAT_0dfa = uVar14 / 3;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar14 % 3),uVar18) / 3);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar12 = RAM0dfb;
          }
          else {
            uVar12 = 0xffff;
          }
          DAT_0c8a = uVar12;
          DAT_0c94 = uVar12;
        }
        else if (cVar17 == '\x04') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar9 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar9];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar12 = DAT_0df7;
          DAT_0ca0 = uVar12;
          bVar9 = DAT_0d95;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d96;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d97;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          uVar14 = RAM0c9f;
          DAT_0dfa = uVar14 / 4;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar14 % 4),uVar18) / 4);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar12 = RAM0dfb;
          }
          else {
            uVar12 = 0xffff;
          }
          DAT_0c8a = uVar12;
          DAT_0c94 = uVar12;
        }
        else if (cVar17 == '\x05') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar9 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar9];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar12 = DAT_0df7;
          DAT_0ca0 = uVar12;
          bVar9 = DAT_0d95;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d96;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d97;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d98;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d92;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          uVar14 = RAM0c9f;
          DAT_0dfa = uVar14 / 5;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar14 % 5),uVar18) / 5);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar12 = RAM0dfb;
          }
          else {
            uVar12 = 0xffff;
          }
          DAT_0c8a = uVar12;
          DAT_0c94 = uVar12;
        }
        else {
          if (cVar17 != '\x06') goto LAB_e491;
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar9 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar9];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar12 = DAT_0df7;
          DAT_0ca0 = uVar12;
          bVar9 = DAT_0d95;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d96;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d97;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d98;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d92;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d99;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar14,uVar4)),
                              bVar11 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d93;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar12 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar14)),
                              bVar11 + CARRY2(uVar4,uVar14));
          uVar14 = RAM0c9f;
          DAT_0dfa = uVar14 / 6;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar14 % 6),uVar18) / 6);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar12 = RAM0dfb;
          }
          else {
            uVar12 = 0xffff;
          }
          DAT_0c8a = uVar12;
          DAT_0c94 = uVar12;
        }
      }
    }
    else {
      uVar12 = DAT_0da8;
      DAT_0c8a = uVar12;
    }
    uVar12 = DAT_08f2;
    FUN_f3b7();
    DAT_0c93 = extraout_A;
    bVar11 = DAT_0c93;
    puVar5 = (undefined *)DAT_0c8a;
    puVar13 = puVar5 + -0x1eb7;
    if (puVar5 < &UNK_1eb7) {
      iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar13 >> 8) + 1) - ((char)-(char)puVar13 != '\0'),
                             -(char)puVar13) * (uint)bVar11 * 2;
      uVar14 = (ushort)iVar2;
      bVar11 = (byte)((uint)iVar2 >> 0x18);
      cVar17 = bVar11 + (0xff7f < uVar14);
      if (CONCAT11(bVar11 + CARRY1(bVar11,0xff7f < uVar14),cVar17) < 0x100) {
        DAT_0e04._0_1_ = cVar17;
        RAM0e05 = uVar14 + 0x80;
        puVar5 = (undefined *)DAT_0e04;
        puVar13 = &UNK_1eb7 + -(short)puVar5;
        if (puVar5 < &UNK_1eb8) goto LAB_ea7c;
      }
      puVar13 = (undefined *)0x0;
    }
    else {
      iVar2 = ZEXT24(puVar13) * (uint)bVar11 * 2;
      uVar14 = (ushort)iVar2;
      bVar11 = (byte)((uint)iVar2 >> 0x18);
      cVar17 = bVar11 + (0xff7f < uVar14);
      if (CONCAT11(bVar11 + CARRY1(bVar11,0xff7f < uVar14),cVar17) < 0x100) {
        DAT_0e04._0_1_ = cVar17;
        RAM0e05 = uVar14 + 0x80;
        uVar14 = DAT_0e04;
        puVar13 = &UNK_1eb7 + uVar14;
        if (uVar14 < 0xe149) goto LAB_ea7c;
      }
      puVar13 = (undefined *)0xffff;
    }
LAB_ea7c:
    DAT_0c8c = puVar13;
    bVar11 = DAT_0ca8;
    if ((~bVar11 & 1) == 0) {
      bVar11 = DAT_0ca8;
      if ((bVar11 & 2) == 0) {
LAB_eaa2:
        bVar11 = DAT_0ca8;
        if ((~bVar11 & 2) == 0) {
          uVar14 = DAT_0c9a;
          uVar4 = DAT_0c9c;
          if ((uVar4 < uVar14) && (uVar7 = DAT_0dac, uVar7 <= uVar14 - uVar4)) {
            bVar11 = DAT_0ca8;
            DAT_0ca8 = bVar11 | 2;
            cVar17 = DAT_0c03;
            DAT_0922 = cVar17 + '\f';
            goto LAB_eac0;
          }
        }
        DAT_0ca9 = 0;
      }
      else {
        uVar4 = DAT_0c9c;
        uVar14 = DAT_0c9a;
        if ((uVar4 <= uVar14) || (uVar7 = DAT_0dac, uVar4 - uVar14 < uVar7)) goto LAB_eaa2;
        bVar11 = DAT_0ca8;
        DAT_0ca8 = bVar11 & 0xfd;
        uVar18 = DAT_0c03;
        DAT_0922 = uVar18;
LAB_eac0:
        bVar11 = DAT_0ca9;
        bVar11 = (bVar11 + 1) - (0xfe < bVar11);
        DAT_0ca9 = bVar11;
        bVar9 = DAT_0d9a;
        if (bVar9 <= bVar11) {
          bVar11 = DAT_0ca8;
          DAT_0ca8 = bVar11 | 1;
        }
      }
    }
  }
  bVar11 = DAT_0bfe;
  if ((bVar11 & 0x80) != 0) {
    uVar14 = DAT_0c9a;
    uVar4 = DAT_0c9c;
    if (uVar14 < uVar4) {
      cVar17 = DAT_0c04;
      cVar6 = DAT_0d8c;
      if (cVar17 == cVar6) {
        uVar12 = DAT_0c40;
        DAT_0c88 = uVar12;
      }
    }
  }
  bVar11 = DAT_0889;
  if ((((~bVar11 & 4) == 0) && (bVar11 = DAT_0885, (~bVar11 & 0x80) == 0)) &&
     (bVar11 = DAT_0889, (bVar11 & 0x10) != 0)) {
    bVar11 = DAT_0889;
    DAT_0889 = bVar11 | 8;
    bVar11 = DAT_0889;
    DAT_0889 = bVar11 | 4;
  }
  bVar11 = DAT_0a53;
  puVar1 = (ushort *)(&DAT_0a54 + (ushort)bVar11 * 2);
  bVar11 = DAT_0a52;
  bVar11 = (bVar11 + 1) - (0xfe < bVar11);
  DAT_0a52 = bVar11;
  if (bVar11 < 0x18) {
    if (1 < bVar11) {
      uVar18 = DAT_0a4f._0_1_;
      DAT_0df6 = uVar18;
      uVar12 = RAM0a50;
      DAT_0df7 = uVar12;
      goto LAB_eb49;
    }
  }
  else {
    uVar14 = RAM0a50;
    DAT_0df7 = uVar14 - *puVar1;
    cVar17 = DAT_0a4f._0_1_;
    DAT_0df6 = cVar17 - (uVar14 < *puVar1);
LAB_eb49:
    cVar17 = DAT_0c07;
    if (cVar17 == '\0') {
      uVar14 = DAT_0c08;
    }
    else {
      uVar14 = 0xffff;
    }
    *puVar1 = uVar14;
    uVar14 = DAT_0df7;
    sVar15 = uVar14 + *puVar1;
    RAM0a50 = sVar15;
    DAT_0df7 = sVar15;
    cVar17 = DAT_0df6;
    cVar17 = cVar17 + CARRY2(uVar14,*puVar1);
    DAT_0a4f._0_1_ = cVar17;
    DAT_0df6 = cVar17;
    bVar11 = DAT_0a52;
    if (bVar11 < 0x17) {
      cVar17 = DAT_0a52;
      bVar11 = cVar17 - 1;
      DAT_0df9 = bVar11;
      uVar14 = DAT_0a4f;
      RAM0df6 = uVar14 / bVar11;
      uVar18 = DAT_0a51;
      bVar9 = DAT_0df9;
      DAT_0df7._1_1_ = (char)(CONCAT11((char)(uVar14 % (ushort)bVar11),uVar18) / (ushort)bVar9);
      uVar14 = DAT_0df7;
      DAT_0df7 = (short)((uint)uVar14 * 0x16);
      DAT_0df6 = (char)((uint)uVar14 * 0x16 >> 0x10);
    }
    uVar18 = DAT_0df6;
    DAT_0a4b._0_1_ = uVar18;
    uVar12 = DAT_0df7;
    RAM0a4c = uVar12;
    cVar17 = DAT_0a53;
    bVar11 = cVar17 + 1;
    if (0x15 < bVar11) {
      bVar11 = 0;
    }
    DAT_0a53 = bVar11;
  }
  cVar17 = DAT_0dd5;
  if ((cVar17 != -0x80) && (bVar11 = DAT_0d06, (~bVar11 & 0x80) == 0)) {
    bVar11 = DAT_0a2e._0_1_;
    bVar9 = DAT_0dd8;
    if (bVar11 < bVar9) {
      bVar9 = DAT_0dd7;
      if (bVar11 < bVar9) {
        bVar11 = DAT_0d0a;
        bVar9 = DAT_0dd6;
        if ((bVar11 < bVar9) && (bVar11 = DAT_0d08, (~bVar11 & 8) == 0)) {
          bVar11 = DAT_0d08;
          DAT_0d08 = bVar11 & 0xfe;
          DAT_0afc = 0;
          bVar11 = DAT_0d08;
          DAT_0d08 = bVar11 | 8;
        }
      }
    }
    else {
      bVar11 = DAT_0d08;
      DAT_0d08 = bVar11 | 1;
    }
  }
  cVar17 = DAT_0d87;
  if (cVar17 != '\t') {
    cVar17 = DAT_0c04;
    if (cVar17 != '\0') goto LAB_ec8f;
    bVar11 = DAT_0ada;
    if (((~bVar11 & 0x10) != 0) || (bVar11 = DAT_0ada, (bVar11 & 4) != 0)) {
      bVar11 = DAT_0ae1;
      bVar11 = (bVar11 + 1) - (0xfe < bVar11);
      DAT_0ae1 = bVar11;
      bVar9 = DAT_0ddb;
      if (bVar9 <= bVar11) {
        DAT_0ae1 = 0;
        bVar11 = DAT_0ada;
        if ((bVar11 & 0x10) == 0) {
          uVar14 = DAT_0ad6;
          uVar4 = DAT_0db8;
          sVar15 = uVar14 - uVar4;
          if (uVar14 < uVar4) {
            sVar15 = 0;
          }
          DAT_0ad6 = sVar15;
          bVar11 = DAT_0ad9;
          bVar9 = DAT_0dda;
          cVar17 = bVar11 - bVar9;
          if (bVar11 < bVar9) {
            cVar17 = '\0';
          }
          DAT_0ad9 = cVar17;
        }
        else {
          uVar4 = DAT_0ad6;
          uVar7 = DAT_0db8;
          uVar14 = uVar4 + uVar7;
          if ((CARRY2(uVar4,uVar7)) || (0x200 < uVar14)) {
            uVar14 = 0x200;
          }
          DAT_0ad6 = uVar14;
          bVar9 = DAT_0ad9;
          bVar8 = DAT_0dda;
          bVar11 = bVar9 + bVar8;
          if ((CARRY1(bVar9,bVar8)) || (bVar9 = DAT_0ddc, bVar9 < bVar11)) {
            bVar11 = DAT_0ddc;
          }
          DAT_0ad9 = bVar11;
        }
      }
    }
    bVar11 = DAT_0ada;
    if ((bVar11 & 0x20) != 0) {
      uVar12 = DAT_0ad6;
      DAT_0ad4 = uVar12;
      uVar18 = DAT_0ad9;
      DAT_0ad8 = uVar18;
      goto LAB_ec8f;
    }
  }
  DAT_0ad4 = 0;
  DAT_0ad8 = 0;
LAB_ec8f:
  bVar11 = DAT_08be;
  DAT_08be = bVar11 & 0xdf;
  bVar11 = DAT_08be;
  DAT_08be = bVar11 & 0x7f;
  return;
}


