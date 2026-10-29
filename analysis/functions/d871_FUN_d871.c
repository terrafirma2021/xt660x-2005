/* Entry d871 */

void FUN_d871(void)

{
  ushort *puVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined1 extraout_A;
  short sVar12;
  byte bVar16;
  char cVar17;
  undefined1 uVar18;
  undefined2 uVar13;
  undefined *puVar14;
  ushort uVar15;
  undefined2 *puVar19;
  undefined2 *puVar20;
  
  bVar9 = DAT_08be;
  DAT_08be = bVar9 | 0x80;
  DAT_004e = 2;
  bVar9 = DAT_00e1;
  if ((bVar9 & 2) != 0) {
    bVar9 = DAT_08be;
    DAT_08be = bVar9 | 0x40;
    bVar9 = DAT_004b;
    DAT_004b = bVar9 & 0xfb | 8;
    goto LAB_dc06;
  }
  bVar9 = DAT_08be;
  DAT_08be = bVar9 | 0x20;
  bVar9 = DAT_0883;
  DAT_0883 = bVar9 | 4;
  bVar9 = DAT_0880;
  DAT_0880 = bVar9 | 8;
  DAT_0b62 = 0;
  DAT_0bc8 = 0;
  cVar17 = DAT_0d52;
  if ((((cVar17 != -0x80) && (bVar9 = DAT_08a0, (~bVar9 & 4) != 0)) &&
      (bVar9 = DAT_08b2, (~bVar9 & 0x80) != 0)) && (bVar9 = DAT_08af, (bVar9 & 0x40) != 0)) {
    bVar9 = DAT_08af;
    DAT_08af = bVar9 & 0xbf;
    bVar9 = DAT_0bd2;
    DAT_0bd2 = bVar9 | 0x80;
  }
  bVar9 = DAT_0afd;
  bVar8 = DAT_0d66;
  if (bVar8 <= bVar9) {
    DAT_0afb = 0;
  }
  uVar18 = DAT_0c07;
  DAT_0c0f = uVar18;
  uVar13 = DAT_0c08;
  DAT_0c10 = uVar13;
  sVar12 = DAT_0052;
  sVar3 = DAT_0af0;
  DAT_0c08 = sVar12 - sVar3;
  uVar13 = DAT_0052;
  DAT_0af0 = uVar13;
  bVar9 = DAT_0c02;
  if ((short)((ushort)bVar9 << 8) < 0) {
    bVar9 = 0xff;
  }
  else if (bVar9 < 8) {
    bVar9 = 0;
  }
  else {
    bVar8 = DAT_0c08._0_1_;
    bVar9 = (byte)(bVar9 + ((byte)~bVar8 >> 4)) >> 4;
  }
  DAT_0c07 = bVar9;
  uVar13 = DAT_0044;
  DAT_0c00 = uVar13;
  DAT_0c02 = 0;
  bVar9 = DAT_0d08;
  if (((~bVar9 & 1) != 0) && (bVar9 = DAT_0880, (bVar9 & 1) != 0)) {
    bVar9 = DAT_0caa;
    bVar9 = (bVar9 + 1) - (0xfe < bVar9);
    DAT_0caa = bVar9;
    bVar8 = DAT_0d67;
    if ((bVar8 <= bVar9) &&
       ((bVar9 = DAT_0c03, 0xbf < bVar9 || (bVar9 = DAT_0d08, (bVar9 & 2) != 0)))) {
      bVar9 = DAT_0883;
      DAT_0883 = bVar9 | 0x10;
      bVar9 = DAT_0d08;
      DAT_0d08 = bVar9 & 0xfd;
    }
  }
  uVar4 = DAT_0daa;
  DAT_0c2e = uVar4;
  uVar15 = DAT_0c2e;
  sVar12 = uVar4 + uVar15;
  if (CARRY2(uVar4,uVar15)) {
    sVar12 = -1;
  }
  DAT_0c30 = sVar12;
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    FUN_f147();
  }
  else {
    bVar9 = DAT_0884;
    if (((~bVar9 & 4) != 0) && (bVar9 = DAT_0bf8, (~bVar9 & 0x80) != 0)) {
      FUN_f043();
    }
  }
  DAT_0b09 = 0;
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    uVar18 = DAT_0c27;
    DAT_0c23 = uVar18;
    uVar13 = DAT_0c28;
    DAT_0c24 = uVar13;
    bVar9 = DAT_0c03;
    if ((bVar9 & 0x1f) == 10) {
      cVar17 = DAT_0c07;
      if ((cVar17 == '\0') && (uVar15 = DAT_0c08, uVar15 < 0x100)) goto LAB_dc06;
      uVar18 = DAT_0c07;
      DAT_0c2b = uVar18;
      uVar13 = DAT_0c08;
      DAT_0c2c = uVar13;
      bVar9 = DAT_0c07;
      DAT_0c27 = bVar9 >> 1;
      uVar13 = DAT_0c08;
      bVar8 = (byte)((ushort)uVar13 >> 8);
      DAT_0c28 = CONCAT11(bVar8 >> 1 | bVar9 << 7,(byte)uVar13 >> 1 | bVar8 << 7);
    }
    else {
      cVar17 = DAT_0c07;
      if ((cVar17 == '\0') && (uVar15 = DAT_0c08, uVar15 < 0x80)) goto LAB_dc06;
      uVar18 = DAT_0c07;
      DAT_0c27 = uVar18;
      uVar15 = DAT_0c08;
      DAT_0c28 = uVar15;
      uVar4 = DAT_0c24;
      DAT_0c2c = uVar15 + uVar4;
      cVar6 = DAT_0c27;
      cVar17 = DAT_0c23;
      DAT_0c2b = cVar6 + cVar17 + CARRY2(uVar15,uVar4);
    }
    bVar9 = DAT_0c03;
    bVar9 = bVar9 & 0x1f;
    if (bVar9 == 0) {
      uVar13 = DAT_0c28;
      cVar17 = DAT_0c27;
      if (cVar17 != '\0') {
        uVar13 = 0xffff;
      }
      DAT_0a2e = uVar13;
      DAT_0a38 = uVar13;
      bVar9 = DAT_0e21;
      if ((bVar9 & 0x80) != 0) {
        uVar18 = DAT_091b;
        DAT_0921 = uVar18;
      }
      DAT_091b = 0;
      cVar17 = DAT_0c2b;
      if (cVar17 == '\0') {
        uVar15 = DAT_0c2c;
      }
      else {
        uVar15 = 0xffff;
      }
LAB_db96:
      uVar4 = DAT_0a2e;
      sVar12 = uVar15 + uVar4;
      if (CARRY2(uVar15,uVar4)) {
        sVar12 = -1;
      }
    }
    else {
      if (bVar9 == 1) {
LAB_da48:
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a3a = uVar13;
        bVar9 = DAT_0e21;
        if ((bVar9 & 0x80) != 0) {
          uVar18 = DAT_091c;
          DAT_0921 = uVar18;
        }
        DAT_091c = 0;
        uVar4 = DAT_0a38;
        uVar5 = DAT_0a42;
        uVar15 = uVar4 + uVar5;
        if (CARRY2(uVar4,uVar5)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 2) {
LAB_da79:
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a3c = uVar13;
        bVar9 = DAT_0e21;
        if ((bVar9 & 0x80) != 0) {
          uVar18 = DAT_091d;
          DAT_0921 = uVar18;
        }
        DAT_091d = 0;
        uVar5 = DAT_0a3a;
        uVar4 = DAT_0a38;
        uVar15 = uVar5 + uVar4;
        if (CARRY2(uVar5,uVar4)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 3) {
LAB_daaa:
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a3e = uVar13;
        bVar9 = DAT_0e21;
        if ((bVar9 & 0x80) != 0) {
          uVar18 = DAT_091e;
          DAT_0921 = uVar18;
        }
        DAT_091e = 0;
        uVar5 = DAT_0a3c;
        uVar4 = DAT_0a3a;
        uVar15 = uVar5 + uVar4;
        if (CARRY2(uVar5,uVar4)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 4) {
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a40 = uVar13;
        bVar9 = DAT_0e21;
        if ((bVar9 & 0x80) != 0) {
          bVar9 = DAT_091f;
          DAT_0921 = (char)(((ushort)bVar9 << 7) >> 8);
        }
        DAT_091f = 0;
        uVar5 = DAT_0a3e;
        uVar4 = DAT_0a3c;
        uVar15 = uVar5 + uVar4;
        if (CARRY2(uVar5,uVar4)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 5) {
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a42 = uVar13;
        bVar9 = DAT_0e21;
        if ((bVar9 & 0x80) != 0) {
          uVar18 = DAT_0920;
          DAT_0921 = uVar18;
        }
        DAT_0920 = 0;
        bVar9 = DAT_0e21;
        DAT_0e21 = bVar9 | 0x80;
        uVar4 = DAT_0a3e;
        uVar5 = DAT_0a40;
        uVar15 = uVar4 + uVar5;
        if (CARRY2(uVar4,uVar5)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 6) {
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a38 = uVar13;
        uVar18 = DAT_091b;
        DAT_0921 = uVar18;
        DAT_091b = 0;
        uVar5 = DAT_0a42;
        uVar4 = DAT_0a40;
        uVar15 = uVar5 + uVar4;
        if (CARRY2(uVar5,uVar4)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 7) goto LAB_da48;
      if (bVar9 == 8) goto LAB_da79;
      if (bVar9 == 9) goto LAB_daaa;
      uVar13 = DAT_0c28;
      cVar17 = DAT_0c27;
      if (cVar17 != '\0') {
        uVar13 = 0xffff;
      }
      DAT_0a2e = uVar13;
      DAT_0a42 = uVar13;
      DAT_0a40 = uVar13;
      uVar18 = DAT_0920;
      DAT_0921 = uVar18;
      DAT_0920 = 0;
      cVar17 = DAT_0c2b;
      if (cVar17 == '\0') {
        uVar15 = DAT_0a3e;
        uVar4 = DAT_0c2c;
        sVar12 = uVar15 + uVar4;
        if (CARRY2(uVar15,uVar4)) goto LAB_db91;
      }
      else {
LAB_db91:
        sVar12 = -1;
      }
    }
    DAT_0a34 = sVar12;
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    cVar17 = DAT_0c03;
    bVar9 = cVar17 + 1;
    if (10 < bVar9) {
      bVar9 = 0;
    }
    DAT_0c03 = bVar9;
    DAT_0c04 = bVar9 & 0x1f;
    bVar9 = DAT_0884;
    if (((~bVar9 & 4) == 0) || (bVar9 = DAT_0bf8, (~bVar9 & 0x80) == 0)) {
LAB_dbf1:
      DAT_091b = 0;
      DAT_091c = 0;
      DAT_091d = 0;
      DAT_091e = 0;
      DAT_091f = 0;
      DAT_0920 = 0;
      DAT_0b09 = 0;
      goto LAB_dc06;
    }
    bVar9 = DAT_0922;
    if (bVar9 < 0x16) {
      sVar12 = DAT_0b60;
      DAT_0b60 = sVar12 + 1;
      if (bVar9 == 10) {
        bVar9 = 0xb;
      }
      uVar15 = (ushort)(byte)(bVar9 + 1) << 8;
    }
    else {
      bVar9 = DAT_0922;
      if (0xbf < bVar9) {
        DAT_0922 = (bVar9 + 1) - (0xfe < bVar9);
        goto LAB_dbf1;
      }
      sVar12 = DAT_0b60;
      DAT_0b60 = sVar12 + 1;
      cVar17 = DAT_0922;
      cVar17 = cVar17 + '\x01';
      if (cVar17 == '\v') {
        cVar17 = '\f';
      }
      uVar15 = CONCAT11(cVar17,cVar17) & 0xff1f;
      if (0x16 < (byte)uVar15) {
        uVar15 = (ushort)(byte)((char)(uVar15 >> 8) - 0x17) << 8;
      }
    }
    DAT_0922 = (char)(uVar15 >> 8);
    bVar9 = DAT_0922;
    DAT_0923 = bVar9 & 0x1f;
  }
  uVar18 = DAT_0085;
  DAT_08c4 = uVar18;
  bVar9 = DAT_088d;
  DAT_088d = bVar9 | 1;
  DAT_0085 = 1;
  sVar12 = DAT_0044;
  DAT_08c8 = sVar12 + 0x4b;
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    bVar8 = DAT_0c04;
    bVar9 = DAT_0921;
    if (0x33 < bVar9) {
      DAT_0a2e = 0xffff;
    }
    bVar10 = DAT_0a2e._0_1_;
    bVar9 = DAT_0880;
    if ((~bVar9 & 1) == 0) {
      bVar9 = DAT_0d73;
      if (bVar9 <= bVar10) {
        bVar9 = DAT_0b5d;
        bVar10 = DAT_0d74;
        if (bVar9 < bVar10) {
          bVar9 = DAT_0885;
          DAT_0885 = bVar9 | 0x40;
          goto LAB_dcfa;
        }
      }
      bVar9 = DAT_0885;
      DAT_0885 = bVar9 & 0xbf;
      bVar9 = DAT_0884;
      DAT_0884 = bVar9 & 0xfb;
    }
    else {
      bVar9 = DAT_0880;
      if (((bVar9 & 2) != 0) && ((byte)(&DAT_0d68)[bVar8] <= bVar10)) {
        bVar9 = DAT_0884;
        DAT_0884 = bVar9 | 4;
        DAT_0aff = 0;
        FUN_721f();
        bVar9 = DAT_088d;
        if ((bVar9 & 1) != 0) {
          bVar9 = DAT_088d;
          DAT_088d = bVar9 & 0xfe;
          FUN_f39d();
        }
        goto LAB_dc06;
      }
      bVar9 = DAT_0b5d;
      bVar10 = DAT_0d74;
      if (bVar10 <= bVar9) {
        bVar9 = DAT_0885;
        DAT_0885 = bVar9 & 0xbf;
      }
    }
LAB_dcfa:
    bVar9 = DAT_0bf8;
    if (((((~bVar9 & 0x80) != 0) && (bVar9 = DAT_0bf8, (bVar9 & 0x40) != 0)) &&
        (bVar9 = DAT_0a2e._0_1_, (byte)(&DAT_0d68)[bVar8] <= bVar9)) &&
       (bVar9 = DAT_0bf8, (~bVar9 & 0x20) != 0)) {
      bVar9 = DAT_0bf8;
      DAT_0bf8 = bVar9 | 0x80;
      DAT_0bf9 = 0;
      FUN_721f();
      bVar9 = DAT_088d;
      if ((bVar9 & 1) != 0) {
        bVar9 = DAT_088d;
        DAT_088d = bVar9 & 0xfe;
        FUN_f39d();
      }
LAB_dc06:
      DAT_0b00 = 0;
      DAT_004e = 2;
      bVar9 = DAT_08be;
      DAT_08be = bVar9 & 0xdf;
      bVar9 = DAT_08be;
      DAT_08be = bVar9 & 0xbf;
      bVar9 = DAT_08be;
      DAT_08be = bVar9 & 0x7f;
      return;
    }
    bVar9 = DAT_0882;
    DAT_0882 = bVar9 | 0x80;
  }
  DAT_0b00 = 0;
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    cVar17 = DAT_0d5e;
    if (((cVar17 != -0x80) && (bVar9 = DAT_08a0, (~bVar9 & 4) != 0)) &&
       (bVar9 = DAT_08b2, (~bVar9 & 0x80) != 0)) {
      bVar9 = DAT_0880;
      if ((~bVar9 & 1) == 0) {
LAB_dd63:
        cVar17 = DAT_0d5e;
        if (((cVar17 != -0x80) && (bVar9 = DAT_0880, (~bVar9 & 0x80) != 0)) &&
           ((((bVar9 = DAT_0d08, (~bVar9 & 1) != 0 &&
              (((bVar9 = DAT_0884, (~bVar9 & 2) != 0 && (bVar9 = DAT_0884, (~bVar9 & 4) != 0)) &&
               (bVar9 = DAT_088c, (~bVar9 & 0x80) != 0)))) &&
             ((bVar9 = DAT_0885, (~bVar9 & 0x40) != 0 && (bVar9 = DAT_0bf8, (~bVar9 & 0x80) != 0))))
            && (bVar9 = DAT_089b, (~bVar9 & 0x80) != 0)))) {
          cVar17 = DAT_0c04;
          bVar9 = DAT_088c;
          if ((((~bVar9 & 2) == 0) || (bVar9 = DAT_089a, (~bVar9 & 2) == 0)) || (cVar17 != '\b'))
          goto LAB_de0b;
          bVar9 = DAT_0a92;
          if ((bVar9 & 8) != 0) {
            bVar9 = DAT_004e;
            if ((bVar9 & 0x20) == 0) {
              DAT_0b50 = 0;
              bVar9 = DAT_0b46;
              bVar9 = (bVar9 + 1) - (0xfe < bVar9);
              DAT_0b46 = bVar9;
              bVar8 = DAT_0d78;
              if ((bVar8 <= bVar9) && (bVar9 = DAT_08b1, (~bVar9 & 0x80) != 0)) {
                bVar9 = DAT_08b1;
                DAT_08b1 = bVar9 | 0x80;
                bVar9 = DAT_0bd2;
                DAT_0bd2 = bVar9 | 0x20;
                bVar9 = DAT_08ba;
                if ((~bVar9 & 0x80) != 0) {
                  bVar9 = DAT_08ba;
                  DAT_08ba = bVar9 | 0x80;
                  bVar9 = DAT_0bd2;
                  DAT_0bd2 = bVar9 | 2;
                }
              }
            }
            else {
              DAT_0b46 = 0;
              bVar9 = DAT_0b50;
              bVar9 = (bVar9 + 1) - (0xfe < bVar9);
              DAT_0b50 = bVar9;
              bVar8 = DAT_0d76;
              if ((bVar8 <= bVar9) && (bVar9 = DAT_08b1, (bVar9 & 0x80) != 0)) {
                bVar9 = DAT_08b1;
                DAT_08b1 = bVar9 & 0x7f;
                bVar9 = DAT_0bd2;
                DAT_0bd2 = bVar9 | 0x20;
              }
            }
          }
        }
      }
      else {
        bVar9 = DAT_0b6e;
        bVar8 = DAT_0d75;
        if (bVar8 <= bVar9) {
          bVar9 = DAT_0bce;
          bVar8 = DAT_0d77;
          if (bVar8 <= bVar9) goto LAB_dd63;
        }
      }
    }
    uVar18 = DAT_0c04;
    DAT_004e = 0x20;
  }
LAB_de0b:
  bVar9 = DAT_0bfe;
  if (((~bVar9 & 0x80) == 0) && (cVar17 = DAT_0c04, cVar17 == '\n')) {
    bVar9 = DAT_0a92;
    DAT_0a92 = bVar9 & 0x77;
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    bVar9 = DAT_0a2e._0_1_;
    bVar8 = DAT_0d79;
    if (bVar9 < bVar8) {
      bVar8 = DAT_0d7a;
      if (bVar9 < bVar8) {
        uVar18 = DAT_0881;
        bVar9 = DAT_0881;
        DAT_0881 = bVar9 & 0xef;
      }
    }
    else {
      bVar9 = DAT_0881;
      DAT_0881 = bVar9 | 0x10;
      uVar18 = DAT_0d7b;
      DAT_0a1a = uVar18;
    }
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    bVar9 = DAT_0a2e._0_1_;
    bVar8 = DAT_0d7d;
    if (((bVar9 < bVar8) || (bVar8 = DAT_0880, (~bVar8 & 1) != 0)) &&
       (bVar8 = DAT_0d7c, bVar9 < bVar8)) {
      cVar17 = DAT_0c04;
      if (cVar17 == '\0') {
        bVar8 = DAT_0880;
        DAT_0880 = bVar8 & 0xbf;
      }
      bVar8 = DAT_0d7c;
      if (bVar8 <= bVar9) goto LAB_de81;
      if (cVar17 == '\0') {
        bVar9 = DAT_0880;
        DAT_0880 = bVar9 & 0xfb;
      }
    }
    else {
      bVar9 = DAT_0880;
      DAT_0880 = bVar9 | 0x40;
LAB_de81:
      bVar9 = DAT_0880;
      DAT_0880 = bVar9 | 4;
      DAT_0a86 = 0x80;
    }
    bVar9 = DAT_0881;
    DAT_0881 = bVar9 & 0xdf;
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    FUN_ed29();
    FUN_ed6d();
  }
  bVar9 = DAT_0bfe;
  if (((~bVar9 & 0x80) == 0) && (cVar17 = DAT_0c04, cVar17 == '\0')) {
    bVar9 = DAT_0887;
    DAT_0887 = bVar9 | 2;
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    cVar17 = DAT_0923;
    if (((cVar17 == '\0') || (cVar17 == '\x06')) || ((cVar17 == '\f' || (cVar17 == '\x12')))) {
      bVar9 = DAT_0881;
      DAT_0881 = bVar9 | 4;
      bVar9 = DAT_0887;
      DAT_0887 = bVar9 | 1;
    }
    bVar9 = DAT_0ca8;
    if (((bVar9 & 1) != 0) && (cVar6 = DAT_0da6, cVar17 == (char)(cVar6 + '\x04'))) {
      bVar9 = DAT_0881;
      DAT_0881 = bVar9 | 2;
    }
    bVar9 = DAT_088b;
    if ((bVar9 & 0x80) == 0) {
      bVar8 = DAT_0c04;
      bVar9 = DAT_0d7e;
      bVar9 = bVar9 & 0x1f;
      if (0xb < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
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
      bVar9 = DAT_0cab;
      bVar9 = bVar9 & 0x1f;
      if (0xb < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
        bVar9 = DAT_0a17;
        DAT_0a17 = bVar9 & 0xfd;
        bVar9 = DAT_0a19;
        DAT_0a19 = bVar9 & 0xfd;
        uVar18 = DAT_0a28._0_1_;
        DAT_0a24._0_1_ = uVar18;
        uVar18 = DAT_0a28._1_1_;
        DAT_0a24._1_1_ = uVar18;
        uVar18 = DAT_0a1f;
        DAT_0a1d = uVar18;
      }
    }
    else {
      bVar9 = DAT_0923;
      bVar8 = DAT_0d7e;
      if (bVar9 == (bVar8 & 0x1f)) {
        bVar8 = DAT_0a17;
        DAT_0a17 = bVar8 & 0xf7;
        bVar8 = DAT_0a19;
        DAT_0a19 = bVar8 & 0xf7;
        bVar8 = DAT_088b;
        DAT_088b = bVar8 | 0x40;
        uVar18 = DAT_0a26._0_1_;
        DAT_0a22._0_1_ = uVar18;
        uVar18 = DAT_0a26._1_1_;
        DAT_0a22._1_1_ = uVar18;
        uVar18 = DAT_0a1e;
        DAT_0a1c = uVar18;
      }
      uVar18 = DAT_0cab;
      uVar15 = CONCAT11(bVar9,uVar18) & 0xff1f;
      if ((char)(uVar15 >> 8) == (char)uVar15) {
        bVar9 = DAT_0a17;
        DAT_0a17 = bVar9 & 0xfd;
        bVar9 = DAT_0a19;
        DAT_0a19 = bVar9 & 0xfd;
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
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    bVar9 = DAT_0ca8;
    if ((~bVar9 & 1) == 0) {
      bVar9 = DAT_0923;
      bVar8 = DAT_0d7e;
      if (bVar9 == (bVar8 & 0x1f)) {
        bVar8 = DAT_088b;
        if ((~bVar8 & 0x80) == 0) {
          cVar17 = DAT_0a20;
          DAT_0a20 = bVar9 + (cVar17 == '\0');
        }
        else {
          DAT_0a20 = 0;
        }
      }
      bVar8 = DAT_0cab;
      if (bVar9 == (bVar8 & 0x1f)) {
        bVar8 = DAT_088b;
        if ((~bVar8 & 0x80) == 0) {
          cVar17 = DAT_0a21;
          DAT_0a21 = bVar9 + (cVar17 == '\0');
        }
        else {
          DAT_0a21 = 0;
        }
      }
      uVar18 = DAT_0a1c;
      uVar15 = CONCAT11(bVar9,uVar18) & 0xff1f;
      if (((char)(uVar15 >> 8) == (char)uVar15) && (bVar9 = DAT_0a19, (bVar9 & 8) != 0)) {
        FUN_ec98();
      }
      uVar18 = DAT_0923;
      uVar11 = DAT_0a1d;
      uVar15 = CONCAT11(uVar18,uVar11) & 0xff1f;
      if (((char)(uVar15 >> 8) == (char)uVar15) && (bVar9 = DAT_0a19, (bVar9 & 2) != 0)) {
        FUN_ed11();
      }
      uVar18 = DAT_0923;
      uVar11 = DAT_0d7e;
      uVar15 = CONCAT11(uVar18,uVar11) & 0xff1f;
      cVar17 = (char)(uVar15 >> 8);
      if (cVar17 == (char)uVar15) {
        bVar9 = DAT_0881;
        DAT_0881 = bVar9 & 0x7f;
      }
      uVar18 = DAT_0cab;
      uVar15 = CONCAT11(cVar17,uVar18) & 0xff1f;
      if ((char)(uVar15 >> 8) == (char)uVar15) {
        bVar9 = DAT_0881;
        DAT_0881 = bVar9 & 0xbf;
      }
    }
    else {
      bVar8 = DAT_0c04;
      bVar9 = DAT_0d7e;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
        bVar9 = DAT_088b;
        if ((~bVar9 & 0x80) == 0) {
          cVar17 = DAT_0a20;
          DAT_0a20 = bVar8 + (cVar17 == '\0');
        }
        else {
          DAT_0a20 = 0;
        }
      }
      bVar9 = DAT_0cab;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
        bVar9 = DAT_088b;
        if ((~bVar9 & 0x80) == 0) {
          cVar17 = DAT_0a21;
          DAT_0a21 = bVar8 + (cVar17 == '\0');
        }
        else {
          DAT_0a21 = 0;
        }
      }
      bVar9 = DAT_0a1c;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if ((bVar8 == bVar9) && (bVar9 = DAT_0a19, (bVar9 & 8) != 0)) {
        FUN_ec98();
      }
      bVar8 = DAT_0c04;
      bVar9 = DAT_0a1d;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if ((bVar8 == bVar9) && (bVar9 = DAT_0a19, (bVar9 & 2) != 0)) {
        FUN_ed11();
      }
      bVar8 = DAT_0c04;
      bVar9 = DAT_0d7e;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
        bVar9 = DAT_0881;
        DAT_0881 = bVar9 & 0x7f;
      }
      bVar9 = DAT_0cab;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
        bVar9 = DAT_0881;
        DAT_0881 = bVar9 & 0xbf;
      }
    }
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    bVar9 = DAT_0922;
    if (((bVar9 & 0x1f) == 0) || ((bVar9 & 0x1f) == 0xc)) {
      uVar13 = DAT_0ac2;
      DAT_0ac4 = uVar13;
      sVar12 = DAT_0ab0;
      DAT_0ac2 = sVar12;
      sVar3 = DAT_0ac4;
      sVar12 = sVar12 - sVar3;
      bVar9 = DAT_0abf;
      if ((~bVar9 & 4) != 0) {
        sVar12 = 0;
      }
      if ((char)((ushort)sVar12 >> 8) != '\0') {
        sVar12 = 0xff;
      }
      DAT_0ac0 = (char)sVar12;
      bVar9 = DAT_0abf;
      DAT_0abf = bVar9 | 4;
      bVar9 = DAT_0ac0;
      bVar10 = DAT_0d7f;
      bVar8 = DAT_0ac8;
      bVar16 = (byte)((ushort)bVar9 * (ushort)bVar10);
      bVar10 = (byte)((ushort)bVar9 * (ushort)bVar10 >> 8);
      bVar9 = bVar10 - (bVar16 < bVar8);
      if (bVar10 < (bVar16 < bVar8)) {
        cVar17 = -(bVar16 - bVar8);
        bVar8 = DAT_0d80;
        iVar2 = (uint)bVar8 * (uint)CONCAT11((~bVar9 + 1) - (cVar17 != '\0'),cVar17);
        uVar13 = (undefined2)iVar2;
        if ((short)((uint)iVar2 >> 0x10) != 0) {
          uVar13 = 0xffff;
        }
        bVar9 = DAT_0abf;
        bVar8 = (byte)((ushort)uVar13 >> 8);
        bVar10 = (byte)uVar13;
        if ((bVar9 & 1) == 0) {
          bVar16 = DAT_0ac6._1_1_;
          bVar9 = bVar8 - (bVar10 < bVar16);
          uVar13 = CONCAT11(bVar9,bVar10 - bVar16);
          if ((bVar10 < bVar16) <= bVar8) goto LAB_e16b;
          cVar17 = -(bVar10 - bVar16);
          uVar13 = CONCAT11((~bVar9 + 1) - (cVar17 != '\0'),cVar17);
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 & 0xfe;
        }
        else {
          bVar9 = DAT_0ac6._1_1_;
          uVar13 = CONCAT11(bVar8 + CARRY1(bVar10,bVar9),bVar10 + bVar9);
          if (CARRY1(bVar8,CARRY1(bVar10,bVar9))) {
            uVar13 = 0xffff;
          }
LAB_e16b:
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 | 1;
        }
        DAT_0ac6 = uVar13;
      }
      else {
        bVar10 = DAT_0d80;
        iVar2 = (uint)bVar10 * (uint)CONCAT11(bVar9,bVar16 - bVar8);
        uVar13 = (undefined2)iVar2;
        if ((short)((uint)iVar2 >> 0x10) != 0) {
          uVar13 = 0xffff;
        }
        bVar9 = DAT_0abf;
        bVar8 = (byte)((ushort)uVar13 >> 8);
        bVar10 = (byte)uVar13;
        if ((bVar9 & 1) == 0) {
          bVar9 = DAT_0ac6._1_1_;
          uVar13 = CONCAT11(bVar8 + CARRY1(bVar10,bVar9),bVar10 + bVar9);
          if (CARRY1(bVar8,CARRY1(bVar10,bVar9))) {
            uVar13 = 0xffff;
          }
LAB_e1ad:
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 & 0xfe;
        }
        else {
          bVar16 = DAT_0ac6._1_1_;
          bVar9 = bVar8 - (bVar10 < bVar16);
          uVar13 = CONCAT11(bVar9,bVar10 - bVar16);
          if ((bVar10 < bVar16) <= bVar8) goto LAB_e1ad;
          cVar17 = -(bVar10 - bVar16);
          uVar13 = CONCAT11((~bVar9 + 1) - (cVar17 != '\0'),cVar17);
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 | 1;
        }
        DAT_0ac6 = uVar13;
      }
      bVar8 = DAT_0ac8;
      bVar9 = DAT_0abf;
      if ((bVar9 & 1) == 0) {
        bVar9 = DAT_0ac6._0_1_;
        cVar17 = bVar8 + bVar9;
        if (CARRY1(bVar8,bVar9)) {
          cVar17 = -1;
        }
      }
      else {
        bVar9 = DAT_0ac6._0_1_;
        cVar17 = bVar8 - bVar9;
        if (bVar8 < bVar9) {
          cVar17 = '\0';
        }
      }
      DAT_0ac8 = cVar17;
      bVar9 = DAT_0ac8;
      bVar8 = DAT_0acc;
      if (bVar9 < bVar8) {
        bVar10 = DAT_0d80;
        sVar12 = (ushort)(byte)-(bVar9 - bVar8) * (ushort)bVar10;
        bVar9 = DAT_0abf;
        bVar8 = (byte)((ushort)sVar12 >> 8);
        bVar10 = (byte)sVar12;
        if ((bVar9 & 2) == 0) {
          bVar16 = DAT_0aca._1_1_;
          bVar9 = bVar8 - (bVar10 < bVar16);
          uVar13 = CONCAT11(bVar9,bVar10 - bVar16);
          if ((bVar10 < bVar16) <= bVar8) goto LAB_e1f4;
          cVar17 = -(bVar10 - bVar16);
          uVar13 = CONCAT11((~bVar9 + 1) - (cVar17 != '\0'),cVar17);
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 & 0xfd;
        }
        else {
          bVar9 = DAT_0aca._1_1_;
          uVar13 = CONCAT11(bVar8 + CARRY1(bVar10,bVar9),bVar10 + bVar9);
          if (CARRY1(bVar8,CARRY1(bVar10,bVar9))) {
            uVar13 = 0xffff;
          }
LAB_e1f4:
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 | 2;
        }
        DAT_0aca = uVar13;
      }
      else {
        bVar10 = DAT_0d80;
        sVar12 = (ushort)(byte)(bVar9 - bVar8) * (ushort)bVar10;
        bVar9 = DAT_0abf;
        bVar8 = (byte)((ushort)sVar12 >> 8);
        bVar10 = (byte)sVar12;
        if ((bVar9 & 2) == 0) {
          bVar9 = DAT_0aca._1_1_;
          uVar13 = CONCAT11(bVar8 + CARRY1(bVar10,bVar9),bVar10 + bVar9);
          if (CARRY1(bVar8,CARRY1(bVar10,bVar9))) {
            uVar13 = 0xffff;
          }
LAB_e22b:
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 & 0xfd;
        }
        else {
          bVar16 = DAT_0aca._1_1_;
          bVar9 = bVar8 - (bVar10 < bVar16);
          uVar13 = CONCAT11(bVar9,bVar10 - bVar16);
          if ((bVar10 < bVar16) <= bVar8) goto LAB_e22b;
          cVar17 = -(bVar10 - bVar16);
          uVar13 = CONCAT11((~bVar9 + 1) - (cVar17 != '\0'),cVar17);
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 | 2;
        }
        DAT_0aca = uVar13;
      }
      bVar8 = DAT_0acc;
      bVar9 = DAT_0abf;
      if ((bVar9 & 2) == 0) {
        bVar9 = DAT_0aca._0_1_;
        cVar17 = bVar8 + bVar9;
        if (CARRY1(bVar8,bVar9)) {
          cVar17 = -1;
        }
      }
      else {
        bVar9 = DAT_0aca._0_1_;
        cVar17 = bVar8 - bVar9;
        if (bVar8 < bVar9) {
          cVar17 = '\0';
        }
      }
      DAT_0acc = cVar17;
      cVar17 = DAT_0d87;
      if (cVar17 == '\t') {
        bVar9 = DAT_0acc;
        bVar8 = DAT_0d81;
        if (bVar9 < bVar8) {
          puVar14 = (undefined *)0x100;
        }
        else {
          bVar8 = DAT_0d82;
          if (bVar9 < bVar8) {
            puVar14 = &UNK_0201;
          }
          else {
            bVar8 = DAT_0d83;
            if (bVar9 < bVar8) {
              puVar14 = &UNK_0402;
            }
            else {
              bVar8 = DAT_0d84;
              if (bVar9 < bVar8) {
                puVar14 = (undefined *)0x803;
              }
              else {
                bVar8 = DAT_0d85;
                if (bVar8 <= bVar9) goto LAB_e28e;
                puVar14 = &UNK_1004;
              }
            }
          }
        }
      }
      else {
LAB_e28e:
        puVar14 = &UNK_2005;
      }
      DAT_0bcb = (char)((ushort)puVar14 >> 8);
      DAT_0bca = (char)puVar14;
      cVar17 = DAT_0d61;
      if ((((cVar17 != -0x80) && (cVar17 = DAT_0d87, cVar17 == '\t')) &&
          (bVar9 = DAT_08a0, (~bVar9 & 4) != 0)) && (bVar9 = DAT_08b2, (~bVar9 & 0x80) != 0)) {
        cVar17 = DAT_0d87;
        if (((cVar17 == '\t') && (bVar9 = DAT_0896._0_1_, (bVar9 & 0x10) == 0)) ||
           (bVar9 = DAT_0881, (~bVar9 & 0x10) == 0)) {
          DAT_0bcc = 0;
          DAT_0bcd = 0;
        }
        else {
          cVar17 = DAT_0bca;
          if (cVar17 == '\0') {
            bVar9 = DAT_08b6;
            if ((bVar9 & 2) != 0) {
              bVar9 = DAT_0bcc;
              bVar8 = DAT_0d88;
              if (bVar9 <= bVar8) goto LAB_e34d;
              bVar9 = DAT_08b1;
              if ((~bVar9 & 8) != 0) {
                bVar9 = DAT_08b1;
                DAT_08b1 = bVar9 | 8;
                bVar9 = DAT_0bd2;
                DAT_0bd2 = bVar9 | 0x20;
                bVar9 = DAT_08ba;
                if ((~bVar9 & 8) != 0) {
                  bVar9 = DAT_08ba;
                  DAT_08ba = bVar9 | 8;
                  bVar9 = DAT_0bd2;
                  DAT_0bd2 = bVar9 | 2;
                }
              }
              bVar9 = DAT_0889;
              DAT_0889 = bVar9 & 0xfd;
              DAT_0b92 = 0;
            }
            bVar9 = DAT_08b6;
            DAT_08b6 = bVar9 | 2;
          }
          else {
            bVar9 = DAT_08b6;
            if ((bVar9 & 2) == 0) {
              bVar9 = DAT_0bcd;
              bVar8 = DAT_0d8a;
              if ((bVar8 < bVar9) && (bVar9 = DAT_08b1, (bVar9 & 8) != 0)) {
                bVar9 = DAT_08b1;
                DAT_08b1 = bVar9 & 0xf7;
                bVar9 = DAT_0bd2;
                DAT_0bd2 = bVar9 | 0x20;
                bVar9 = DAT_08af;
                if (((~bVar9 & 8) != 0) && (bVar9 = DAT_08af, (~bVar9 & 4) != 0)) {
                  bVar9 = DAT_0889;
                  DAT_0889 = bVar9 | 2;
                  DAT_0b94 = 0;
                  uVar18 = DAT_0a83;
                  DAT_0b92 = uVar18;
                  DAT_0b95 = uVar18;
                }
              }
            }
            else {
              bVar9 = DAT_08b6;
              DAT_08b6 = bVar9 & 0xfd;
            }
          }
        }
      }
LAB_e34d:
      bVar9 = DAT_08b1;
      if ((bVar9 & 8) == 0) {
        uVar11 = DAT_0bcb;
        uVar18 = DAT_0bca;
      }
      else {
        uVar11 = 0x20;
        uVar18 = 5;
      }
      DAT_0899 = uVar11;
      DAT_0898 = uVar18;
    }
  }
  do {
    bVar9 = DAT_008b;
    if ((~bVar9 & 2) == 0) {
      uVar13 = DAT_0092;
      DAT_08cc = uVar13;
      bVar9 = DAT_088d;
      DAT_088d = bVar9 & 0xfd;
      goto LAB_e37e;
    }
    sVar12 = DAT_0044;
    sVar3 = DAT_08c8;
  } while (sVar12 - sVar3 < 0);
  bVar9 = DAT_088d;
  DAT_088d = bVar9 | 2;
LAB_e37e:
  bVar9 = DAT_088d;
  DAT_088d = bVar9 & 0xfe;
  FUN_f39d();
  bVar9 = DAT_088d;
  if ((~bVar9 & 2) != 0) {
    puVar20 = &DAT_0c42;
    puVar19 = &DAT_0c58;
    bVar9 = DAT_0bfe;
    if ((bVar9 & 0x80) != 0) {
      bVar9 = DAT_0c04;
      puVar20 = &DAT_0c42 + bVar9;
      bVar9 = DAT_0922;
      puVar19 = &DAT_0c58 + (bVar9 & 0xff1f);
    }
    uVar13 = DAT_08cc;
    *puVar20 = uVar13;
    *puVar19 = uVar13;
    DAT_0c40 = uVar13;
    DAT_08c2 = 0x40;
    DAT_08c3 = 0;
  }
  cVar17 = DAT_0d53;
  if (((cVar17 != -0x80) && (bVar9 = DAT_08a0, (~bVar9 & 4) != 0)) &&
     (bVar9 = DAT_08b2, (~bVar9 & 0x80) != 0)) {
    uVar13 = DAT_0c40;
    bVar9 = (byte)((ushort)uVar13 >> 8);
    if ((bVar9 < 0x1a) || (0xf5 < bVar9)) {
      bVar9 = DAT_08b5;
      if ((bVar9 & 0x40) == 0) {
        bVar9 = DAT_08b5;
        DAT_08b5 = bVar9 | 0x40;
        bVar9 = DAT_0bab;
        DAT_0bab = bVar9 | 0x20;
      }
      else {
        bVar9 = DAT_0b3e;
        bVar8 = DAT_0d89;
        if ((bVar8 < bVar9) && (bVar9 = DAT_08af, (~bVar9 & 0x20) != 0)) {
          bVar9 = DAT_08af;
          DAT_08af = bVar9 | 0x20;
          bVar9 = DAT_0bd2;
          DAT_0bd2 = bVar9 | 0x80;
          bVar9 = DAT_08b8;
          if ((~bVar9 & 0x20) != 0) {
            bVar9 = DAT_08b8;
            DAT_08b8 = bVar9 | 0x20;
            bVar9 = DAT_0bd2;
            DAT_0bd2 = bVar9 | 8;
          }
        }
      }
    }
    else {
      bVar9 = DAT_08b5;
      if ((bVar9 & 0x40) == 0) {
        bVar9 = DAT_0b4b;
        bVar8 = DAT_0d8a;
        if (bVar8 < bVar9) {
          bVar9 = DAT_08af;
          if ((bVar9 & 0x20) != 0) {
            bVar9 = DAT_08af;
            DAT_08af = bVar9 & 0xdf;
            bVar9 = DAT_0bd2;
            DAT_0bd2 = bVar9 | 0x80;
          }
          bVar9 = DAT_0bab;
          DAT_0bab = bVar9 & 0xdf;
        }
      }
      else {
        bVar9 = DAT_08b5;
        DAT_08b5 = bVar9 & 0xbf;
      }
    }
  }
  cVar17 = DAT_0c04;
  cVar6 = DAT_0d8b;
  if (cVar6 == -0x80) {
    if (cVar17 == '\x01') {
      uVar13 = DAT_0c9a;
      DAT_0c9c = uVar13;
      uVar13 = DAT_0c44;
      DAT_0c9a = uVar13;
      goto LAB_e461;
    }
  }
  else if (cVar17 == '\0') {
    uVar13 = DAT_0c9a;
    DAT_0c9c = uVar13;
    uVar13 = DAT_0c42;
    DAT_0c9a = uVar13;
LAB_e461:
    bVar9 = DAT_08af;
    if (((~bVar9 & 0x20) == 0) || (bVar9 = DAT_08af, (bVar9 & 0x10) != 0)) {
      uVar13 = DAT_0da8;
      DAT_0c8a = uVar13;
    }
    else {
      bVar9 = DAT_0ca8;
      if ((~bVar9 & 1) == 0) {
        cVar17 = DAT_0d8d;
        if (cVar17 == '\x01') {
LAB_e491:
          bVar9 = DAT_0d94;
          DAT_0c8a = (&DAT_0c58)[bVar9];
          DAT_0c94 = (&DAT_0c58)[bVar9];
        }
        else if (cVar17 == '\x02') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar8 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar8];
          bVar9 = DAT_0d8e;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar8 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d8f;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 2;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 2),uVar18) / 2);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar17 == '\x03') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar8 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar8];
          bVar9 = DAT_0d8e;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar8 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d8f;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d90;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 3;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 3),uVar18) / 3);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar17 == '\x04') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar8 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar8];
          bVar9 = DAT_0d8e;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar8 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d8f;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d90;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d91;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 4;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 4),uVar18) / 4);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar17 == '\x05') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar8 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar8];
          bVar9 = DAT_0d8e;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar8 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d8f;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d90;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d91;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d98;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d92;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 5;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 5),uVar18) / 5);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else {
          if (cVar17 != '\x06') goto LAB_e491;
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar8 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar8];
          bVar9 = DAT_0d8e;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar8 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d8f;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d90;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d91;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d98;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d92;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d99;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar15,uVar4)),
                              bVar9 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d93;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar9 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar9 + CARRY1(bVar9,CARRY2(uVar4,uVar15)),
                              bVar9 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 6;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 6),uVar18) / 6);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
      }
      else {
        uVar13 = DAT_0c88;
        DAT_0c8a = uVar13;
        DAT_0c94 = uVar13;
      }
    }
    uVar13 = DAT_08f2;
    FUN_f3b7();
    DAT_0c93 = extraout_A;
    bVar9 = DAT_0c93;
    puVar7 = (undefined *)DAT_0c8a;
    puVar14 = puVar7 + -0x1eb7;
    if (puVar7 < &UNK_1eb7) {
      iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar14 >> 8) + 1) - ((char)-(char)puVar14 != '\0'),
                             -(char)puVar14) * (uint)bVar9 * 2;
      uVar15 = (ushort)iVar2;
      bVar9 = (byte)((uint)iVar2 >> 0x18);
      cVar17 = bVar9 + (0xff7f < uVar15);
      if (CONCAT11(bVar9 + CARRY1(bVar9,0xff7f < uVar15),cVar17) < 0x100) {
        DAT_0e04._0_1_ = cVar17;
        RAM0e05 = uVar15 + 0x80;
        puVar7 = (undefined *)DAT_0e04;
        puVar14 = &UNK_1eb7 + -(short)puVar7;
        if (puVar7 < &UNK_1eb8) goto LAB_ea7c;
      }
      puVar14 = (undefined *)0x0;
    }
    else {
      iVar2 = ZEXT24(puVar14) * (uint)bVar9 * 2;
      uVar15 = (ushort)iVar2;
      bVar9 = (byte)((uint)iVar2 >> 0x18);
      cVar17 = bVar9 + (0xff7f < uVar15);
      if (CONCAT11(bVar9 + CARRY1(bVar9,0xff7f < uVar15),cVar17) < 0x100) {
        DAT_0e04._0_1_ = cVar17;
        RAM0e05 = uVar15 + 0x80;
        uVar15 = DAT_0e04;
        puVar14 = &UNK_1eb7 + uVar15;
        if (uVar15 < 0xe149) goto LAB_ea7c;
      }
      puVar14 = (undefined *)0xffff;
    }
LAB_ea7c:
    DAT_0c8c = puVar14;
    bVar9 = DAT_0ca8;
    if ((~bVar9 & 1) != 0) {
      bVar9 = DAT_0ca8;
      if ((bVar9 & 2) == 0) {
LAB_eaa2:
        bVar9 = DAT_0ca8;
        if ((~bVar9 & 2) != 0) {
          uVar15 = DAT_0c9a;
          uVar4 = DAT_0c9c;
          if ((uVar4 < uVar15) && (uVar5 = DAT_0dac, uVar5 <= uVar15 - uVar4)) {
            bVar9 = DAT_0ca8;
            DAT_0ca8 = bVar9 | 2;
            cVar17 = DAT_0c03;
            DAT_0922 = cVar17 + '\f';
            goto LAB_eac0;
          }
        }
        DAT_0ca9 = 0;
      }
      else {
        uVar4 = DAT_0c9c;
        uVar15 = DAT_0c9a;
        if ((uVar4 <= uVar15) || (uVar5 = DAT_0dac, uVar4 - uVar15 < uVar5)) goto LAB_eaa2;
        bVar9 = DAT_0ca8;
        DAT_0ca8 = bVar9 & 0xfd;
        uVar18 = DAT_0c03;
        DAT_0922 = uVar18;
LAB_eac0:
        bVar9 = DAT_0ca9;
        bVar9 = (bVar9 + 1) - (0xfe < bVar9);
        DAT_0ca9 = bVar9;
        bVar8 = DAT_0d9a;
        if (bVar8 <= bVar9) {
          bVar9 = DAT_0ca8;
          DAT_0ca8 = bVar9 | 1;
        }
      }
    }
  }
  bVar9 = DAT_0bfe;
  if ((bVar9 & 0x80) != 0) {
    uVar15 = DAT_0c9a;
    uVar4 = DAT_0c9c;
    if (uVar15 < uVar4) {
      cVar17 = DAT_0c04;
      cVar6 = DAT_0d8c;
      if (cVar17 == cVar6) {
        uVar13 = DAT_0c40;
        DAT_0c88 = uVar13;
      }
    }
  }
  bVar9 = DAT_0889;
  if ((((~bVar9 & 4) != 0) && (bVar9 = DAT_0885, (~bVar9 & 0x80) != 0)) &&
     (bVar9 = DAT_0889, (bVar9 & 0x10) != 0)) {
    bVar9 = DAT_0889;
    DAT_0889 = bVar9 | 8;
    bVar9 = DAT_0889;
    DAT_0889 = bVar9 | 4;
  }
  bVar9 = DAT_0a53;
  puVar1 = (ushort *)(&DAT_0a54 + (ushort)bVar9 * 2);
  bVar9 = DAT_0a52;
  bVar9 = (bVar9 + 1) - (0xfe < bVar9);
  DAT_0a52 = bVar9;
  if (bVar9 < 0x18) {
    if (1 < bVar9) {
      uVar18 = DAT_0a4f._0_1_;
      DAT_0df6 = uVar18;
      uVar13 = RAM0a50;
      DAT_0df7 = uVar13;
      goto LAB_eb49;
    }
  }
  else {
    uVar15 = RAM0a50;
    DAT_0df7 = uVar15 - *puVar1;
    cVar17 = DAT_0a4f._0_1_;
    DAT_0df6 = cVar17 - (uVar15 < *puVar1);
LAB_eb49:
    cVar17 = DAT_0c07;
    if (cVar17 == '\0') {
      uVar15 = DAT_0c08;
    }
    else {
      uVar15 = 0xffff;
    }
    *puVar1 = uVar15;
    uVar15 = DAT_0df7;
    sVar12 = uVar15 + *puVar1;
    RAM0a50 = sVar12;
    DAT_0df7 = sVar12;
    cVar17 = DAT_0df6;
    cVar17 = cVar17 + CARRY2(uVar15,*puVar1);
    DAT_0a4f._0_1_ = cVar17;
    DAT_0df6 = cVar17;
    bVar9 = DAT_0a52;
    if (bVar9 < 0x17) {
      cVar17 = DAT_0a52;
      bVar9 = cVar17 - 1;
      DAT_0df9 = bVar9;
      uVar15 = DAT_0a4f;
      RAM0df6 = uVar15 / bVar9;
      uVar18 = DAT_0a51;
      bVar8 = DAT_0df9;
      DAT_0df7._1_1_ = (char)(CONCAT11((char)(uVar15 % (ushort)bVar9),uVar18) / (ushort)bVar8);
      uVar15 = DAT_0df7;
      DAT_0df7 = (short)((uint)uVar15 * 0x16);
      DAT_0df6 = (char)((uint)uVar15 * 0x16 >> 0x10);
    }
    uVar18 = DAT_0df6;
    DAT_0a4b._0_1_ = uVar18;
    uVar13 = DAT_0df7;
    RAM0a4c = uVar13;
    cVar17 = DAT_0a53;
    bVar9 = cVar17 + 1;
    if (0x15 < bVar9) {
      bVar9 = 0;
    }
    DAT_0a53 = bVar9;
  }
  cVar17 = DAT_0dd5;
  if ((cVar17 != -0x80) && (bVar9 = DAT_0d06, (~bVar9 & 0x80) != 0)) {
    bVar9 = DAT_0a2e._0_1_;
    bVar8 = DAT_0dd8;
    if (bVar9 < bVar8) {
      bVar8 = DAT_0dd7;
      if (bVar9 < bVar8) {
        bVar9 = DAT_0d0a;
        bVar8 = DAT_0dd6;
        if ((bVar9 < bVar8) && (bVar9 = DAT_0d08, (~bVar9 & 8) != 0)) {
          bVar9 = DAT_0d08;
          DAT_0d08 = bVar9 & 0xfe;
          DAT_0afc = 0;
          bVar9 = DAT_0d08;
          DAT_0d08 = bVar9 | 8;
        }
      }
    }
    else {
      bVar9 = DAT_0d08;
      DAT_0d08 = bVar9 | 1;
    }
  }
  cVar17 = DAT_0d87;
  if (cVar17 != '\t') {
    cVar17 = DAT_0c04;
    if (cVar17 != '\0') goto LAB_ec8f;
    bVar9 = DAT_0ada;
    if (((~bVar9 & 0x10) == 0) || (bVar9 = DAT_0ada, (bVar9 & 4) != 0)) {
      bVar9 = DAT_0ae1;
      bVar9 = (bVar9 + 1) - (0xfe < bVar9);
      DAT_0ae1 = bVar9;
      bVar8 = DAT_0ddb;
      if (bVar8 <= bVar9) {
        DAT_0ae1 = 0;
        bVar9 = DAT_0ada;
        if ((bVar9 & 0x10) == 0) {
          uVar15 = DAT_0ad6;
          uVar4 = DAT_0db8;
          sVar12 = uVar15 - uVar4;
          if (uVar15 < uVar4) {
            sVar12 = 0;
          }
          DAT_0ad6 = sVar12;
          bVar9 = DAT_0ad9;
          bVar8 = DAT_0dda;
          cVar17 = bVar9 - bVar8;
          if (bVar9 < bVar8) {
            cVar17 = '\0';
          }
          DAT_0ad9 = cVar17;
        }
        else {
          uVar4 = DAT_0ad6;
          uVar5 = DAT_0db8;
          uVar15 = uVar4 + uVar5;
          if ((CARRY2(uVar4,uVar5)) || (0x200 < uVar15)) {
            uVar15 = 0x200;
          }
          DAT_0ad6 = uVar15;
          bVar8 = DAT_0ad9;
          bVar10 = DAT_0dda;
          bVar9 = bVar8 + bVar10;
          if ((CARRY1(bVar8,bVar10)) || (bVar8 = DAT_0ddc, bVar8 < bVar9)) {
            bVar9 = DAT_0ddc;
          }
          DAT_0ad9 = bVar9;
        }
      }
    }
    bVar9 = DAT_0ada;
    if ((bVar9 & 0x20) != 0) {
      uVar13 = DAT_0ad6;
      DAT_0ad4 = uVar13;
      uVar18 = DAT_0ad9;
      DAT_0ad8 = uVar18;
      goto LAB_ec8f;
    }
  }
  DAT_0ad4 = 0;
  DAT_0ad8 = 0;
LAB_ec8f:
  bVar9 = DAT_08be;
  DAT_08be = bVar9 & 0xdf;
  bVar9 = DAT_08be;
  DAT_08be = bVar9 & 0x7f;
  return;
}


