/* Entry 8b34 */

void FUN_8b34(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uchar uVar4;
  short sVar5;
  undefined *puVar6;
  byte bVar7;
  short sVar8;
  ushort uVar9;
  ushort uVar10;
  char cVar15;
  undefined1 uVar16;
  ushort uVar11;
  ushort uVar12;
  undefined *puVar13;
  byte bVar17;
  undefined2 uVar14;
  char cVar18;
  byte bVar19;
  ushort *puVar20;
  byte *pbVar21;
  
  bVar7 = DAT_0882;
  DAT_0882 = bVar7 & 0xbf;
  bVar7 = DAT_08bc;
  DAT_08bc = bVar7 | 8;
  FUN_5fa4();
  uVar16 = DAT_0896._0_1_;
  DAT_0dde._0_1_ = uVar16;
  bVar7 = DAT_0001;
  bVar17 = DAT_0896._1_1_;
  bVar19 = DAT_0896._0_1_;
  bVar3 = DAT_0896._1_1_;
  DAT_0896 = CONCAT11(((bVar7 ^ bVar17) & bVar19) + (~(bVar7 ^ bVar17) & bVar3),bVar7);
  bVar7 = DAT_0000;
  bVar17 = DAT_0894._1_1_;
  bVar19 = DAT_0894._0_1_;
  bVar3 = DAT_0894._1_1_;
  DAT_0894 = CONCAT11(((bVar7 ^ bVar17) & bVar19) + (~(bVar7 ^ bVar17) & bVar3),bVar7);
  cVar18 = DAT_0d57;
  if (((cVar18 != -0x80) && (bVar7 = DAT_08a0, (~bVar7 & 4) != 0)) &&
     (bVar7 = DAT_08b2, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0896._0_1_;
    if ((bVar7 & 1) == 0) {
      bVar7 = DAT_08b6;
      if ((bVar7 & 4) == 0) {
        bVar7 = DAT_0bc7;
        bVar19 = DAT_0d8a;
        if ((bVar19 < bVar7) && (bVar7 = DAT_08af, (bVar7 & 2) != 0)) {
          bVar7 = DAT_08af;
          DAT_08af = bVar7 & 0xfd;
          bVar7 = DAT_0bd2;
          DAT_0bd2 = bVar7 | 0x80;
        }
      }
      else {
        bVar7 = DAT_08b6;
        DAT_08b6 = bVar7 & 0xfb;
      }
    }
    else {
      bVar7 = DAT_0900._0_1_;
      if ((bVar7 < DAT_4e4a) || (bVar7 = DAT_0880, (~bVar7 & 1) != 0)) {
        bVar7 = DAT_08b6;
        DAT_08b6 = bVar7 & 0xfb;
        DAT_0bc6 = 0;
        DAT_0bc7 = 0;
      }
      else {
        bVar7 = DAT_08b6;
        if ((bVar7 & 4) != 0) {
          bVar7 = DAT_0bc6;
          bVar19 = DAT_0d8a;
          if (bVar7 <= bVar19) goto LAB_8bec;
          bVar7 = DAT_08af;
          if ((~bVar7 & 2) != 0) {
            bVar7 = DAT_08af;
            DAT_08af = bVar7 | 2;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 0x80;
            bVar7 = DAT_08b8;
            if ((~bVar7 & 2) != 0) {
              bVar7 = DAT_08b8;
              DAT_08b8 = bVar7 | 2;
              bVar7 = DAT_0bd2;
              DAT_0bd2 = bVar7 | 8;
            }
          }
        }
        bVar7 = DAT_08b6;
        DAT_08b6 = bVar7 | 4;
      }
    }
  }
LAB_8bec:
  bVar7 = DAT_0889;
  if ((bVar7 & 0x20) == 0) {
LAB_8c00:
    bVar7 = 0;
  }
  else {
    bVar7 = DAT_0baf;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    if (0x32 < bVar7) {
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 & 0xdf;
      goto LAB_8c00;
    }
  }
  DAT_0baf = bVar7;
  uVar9 = DAT_0bb0;
  uVar10 = DAT_0bb4;
  if (uVar9 < uVar10) {
    bVar7 = DAT_0bba;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
  }
  else {
    bVar7 = 0;
  }
  DAT_0bba = bVar7;
  if (3 < bVar7) {
    sVar8 = DAT_0bb4;
    bVar7 = (byte)((ushort)(sVar8 + -1) >> 8);
    DAT_0bb4 = CONCAT11(bVar7 + CARRY1(bVar7,sVar8 == 0),bVar7 + (sVar8 == 0));
    DAT_0bba = 0;
  }
  uVar9 = DAT_0bb0;
  uVar10 = DAT_0bb4;
  sVar8 = uVar9 - uVar10;
  if (uVar9 < uVar10) {
    sVar8 = 0;
  }
  DAT_0bb6 = sVar8;
  uVar9 = DAT_08d0;
  uVar10 = DAT_08e0;
  if (uVar9 < uVar10) {
    bVar7 = DAT_08ef;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
  }
  else {
    bVar7 = 0;
  }
  DAT_08ef = bVar7;
  if (3 < bVar7) {
    sVar8 = DAT_08e0;
    bVar7 = (byte)((ushort)(sVar8 + -1) >> 8);
    DAT_08e0 = CONCAT11(bVar7 + CARRY1(bVar7,sVar8 == 0),bVar7 + (sVar8 == 0));
    DAT_08ef = 0;
  }
  uVar9 = DAT_08d0;
  uVar10 = DAT_08e0;
  sVar8 = uVar9 - uVar10;
  if (uVar9 < uVar10) {
    sVar8 = 0;
  }
  DAT_08e2 = sVar8;
  uVar11 = DAT_08e4;
  uVar10 = DAT_08e2;
  uVar9 = uVar11 - uVar10;
  if (uVar11 < uVar10) {
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  if (uVar9 < 8) {
    bVar7 = DAT_088d;
    DAT_088d = bVar7 & 0xf7;
  }
  else {
    bVar7 = DAT_088d;
    DAT_088d = bVar7 | 8;
    bVar7 = DAT_088d;
    DAT_088d = bVar7 | 4;
    uVar14 = DAT_08e2;
    DAT_08e4 = uVar14;
  }
  uVar10 = DAT_08e2;
  uVar11 = DAT_08e6;
  uVar9 = uVar10 - uVar11;
  if (uVar10 < uVar11) {
    uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                     -(char)uVar9),&UNK_1840);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = scale_u16_by_u8(uVar9,&UNK_1840);
  }
  sVar8 = DAT_08e6;
  DAT_08e6 = uVar9 + sVar8;
  uVar10 = DAT_0bb6;
  uVar11 = DAT_0bb8;
  uVar9 = uVar10 - uVar11;
  if (uVar10 < uVar11) {
    uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                     -(char)uVar9),&UNK_1840);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = scale_u16_by_u8(uVar9,&UNK_1840);
  }
  sVar8 = DAT_0bb8;
  DAT_0bb8 = uVar9 + sVar8;
  uVar10 = DAT_08e2;
  uVar11 = DAT_09d0;
  uVar9 = uVar10 - uVar11;
  if (uVar10 < uVar11) {
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    uVar10 = scale_u16_by_u8(uVar9,&UNK_312e);
    uVar10 = CONCAT11((~(byte)(uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),-(char)uVar10);
  }
  else {
    uVar10 = scale_u16_by_u8(uVar9,&UNK_312e);
  }
  sVar8 = DAT_09d0;
  DAT_09d0 = uVar10 + sVar8;
  cVar18 = DAT_09df;
  DAT_09df = cVar18 + '\x01';
  bVar7 = DAT_312f;
  if (9 < DAT_312f) {
    bVar7 = 10;
  }
  DAT_0de2 = bVar7;
  bVar7 = DAT_09df;
  bVar19 = DAT_0de2;
  if (bVar19 <= bVar7) {
    bVar7 = DAT_09e0;
    DAT_09e0 = bVar7 | 1;
    DAT_09df = 0;
  }
  bVar7 = DAT_09df;
  puVar20 = &DAT_09e2 + bVar7;
  uVar10 = DAT_09d0;
  *puVar20 = uVar10;
  bVar7 = DAT_09e0;
  if ((~bVar7 & 1) == 0) {
    uVar14 = DAT_09d2;
    DAT_09da = uVar14;
    DAT_0dde = 0;
    DAT_0de0 = 0;
    puVar20 = &DAT_09e2;
    do {
      uVar10 = RAM0ddf;
      RAM0ddf = *puVar20 + uVar10;
      cVar18 = DAT_0dde._0_1_;
      DAT_0dde._0_1_ = cVar18 + CARRY2(*puVar20,uVar10);
      puVar20 = puVar20 + 1;
      cVar18 = DAT_0de0._1_1_;
      DAT_0de0._1_1_ = cVar18 + 1U;
      bVar7 = DAT_0de2;
    } while ((byte)(cVar18 + 1U) < bVar7);
    cVar18 = DAT_0de2;
    if (cVar18 == '\0') {
      uVar14 = DAT_09e2;
      RAM0de3 = uVar14;
    }
    else {
      bVar7 = DAT_0de0._1_1_;
      uVar10 = DAT_0dde;
      RAM0de2 = uVar10 / bVar7;
      uVar16 = DAT_0de0._0_1_;
      uVar10 = CONCAT11((char)(uVar10 % (ushort)bVar7),uVar16);
      bVar7 = DAT_0de0._1_1_;
      puVar20 = (ushort *)(uVar10 % (ushort)bVar7);
      DAT_0de4 = (char)(uVar10 / bVar7);
      uVar14 = RAM0de3;
    }
    DAT_09d2 = uVar14;
  }
  FUN_a405(puVar20);
  FUN_a448();
  FUN_a462();
  bVar7 = DAT_09cf;
  if ((~bVar7 & 0x40) == 0) {
LAB_8df9:
    if ((((DAT_3130 != -0x80) || (bVar7 = DAT_08af, (~bVar7 & 8) == 0)) ||
        ((bVar7 = DAT_08af, (~bVar7 & 4) == 0 || (bVar7 = DAT_0881, (~bVar7 & 0x10) == 0)))) ||
       (((cVar18 = DAT_0d87, cVar18 == '\t' && (bVar7 = DAT_0896._0_1_, (bVar7 & 0x10) == 0)) ||
        (bVar7 = DAT_09cf, (~bVar7 & 0x10) == 0)))) goto LAB_8e37;
    bVar7 = DAT_09cf;
    if ((~bVar7 & 1) != 0) {
      bVar7 = DAT_09cf;
      DAT_09cf = bVar7 | 1;
      uVar16 = DAT_09d8;
      DAT_09d6 = uVar16;
      uVar16 = DAT_09d9;
      DAT_09d7 = uVar16;
    }
  }
  else {
    bVar7 = DAT_09cf;
    if ((~bVar7 & 0x80) == 0) {
LAB_8dd1:
      uVar10 = DAT_09d2;
      uVar11 = DAT_09da;
      if (uVar11 <= uVar10) {
        bVar7 = DAT_09dc;
        bVar7 = (bVar7 + 1) - (0xfe < bVar7);
        DAT_09dc = bVar7;
        if (bVar7 < DAT_3136) goto LAB_8e47;
        uVar10 = DAT_09d2;
        uVar11 = DAT_09d4;
        if ((uVar11 < uVar10) && (uVar10 - uVar11 <= DAT_3138)) {
          bVar7 = DAT_09cf;
          DAT_09cf = bVar7 | 0x40;
          goto LAB_8df9;
        }
      }
    }
    else {
      uVar10 = DAT_09d2;
      uVar11 = DAT_09da;
      if (((uVar11 <= uVar10) && (DAT_3132 <= uVar10 - uVar11)) && (uVar10 - uVar11 <= DAT_3134)) {
        uVar14 = DAT_09da;
        DAT_09d4 = uVar14;
        bVar7 = DAT_09cf;
        DAT_09cf = bVar7 | 0x80;
        goto LAB_8dd1;
      }
    }
LAB_8e37:
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0x7f;
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xbf;
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xfe;
    DAT_09dc = 0;
  }
LAB_8e47:
  bVar7 = DAT_09cf;
  if ((bVar7 & 1) == 0) {
LAB_8e8d:
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xf7;
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xfe;
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xfd;
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xfb;
    bVar7 = 0x80;
  }
  else {
    bVar7 = DAT_09cf;
    if ((~bVar7 & 8) != 0) {
      uVar10 = DAT_09d2;
      uVar11 = DAT_09da;
      if (uVar11 <= uVar10) {
        bVar7 = DAT_09d6;
        goto LAB_8e9f;
      }
LAB_8e81:
      bVar7 = DAT_09cf;
      DAT_09cf = bVar7 & 0xbf;
      bVar7 = DAT_09cf;
      DAT_09cf = bVar7 & 0x7f;
      DAT_09dc = 0;
      goto LAB_8e8d;
    }
    bVar19 = DAT_0cd4;
    if (bVar19 < 0x80) {
      bVar7 = bVar19 + DAT_3213;
      if (((CARRY1(bVar19,DAT_3213)) || (bVar7 == 0x80)) || (0x7f < bVar7)) {
LAB_8e7d:
        bVar7 = DAT_09cf;
        DAT_09cf = bVar7 | 0x10;
        goto LAB_8e81;
      }
    }
    else {
      bVar7 = bVar19 - DAT_3213;
      if (((bVar19 < DAT_3213) || (bVar7 == 0x80)) || (bVar7 < 0x80)) goto LAB_8e7d;
    }
  }
LAB_8e9f:
  DAT_0cd4 = bVar7;
  bVar7 = DAT_0b0d;
  uVar12 = DAT_08e6;
  uVar10 = *(ushort *)((short)&DAT_0b0e + (ushort)bVar7);
  uVar11 = uVar12 - uVar10;
  cVar15 = (char)uVar11;
  cVar18 = (char)(uVar11 >> 8);
  if (uVar12 < uVar10) {
    bVar19 = cVar18 + 0x80;
    if ((bVar19 < 0x80) && (0x7f7f < CONCAT11(bVar19,cVar15))) {
      bVar19 = cVar15 + 0x80;
    }
    else {
      bVar19 = 0;
    }
  }
  else if ((uVar11 < 0x8000) && (CONCAT11(cVar18 + -0x80,cVar15) < 0x8080)) {
    bVar19 = cVar15 + 0x80;
  }
  else {
    bVar19 = 0xff;
  }
  DAT_08ed = bVar19;
  bVar17 = DAT_0881;
  if ((bVar17 & 0x10) == 0) {
    if (DAT_19d7 <= bVar19) {
      DAT_0b03 = 0;
    }
  }
  else {
    DAT_0b03 = 0xff;
  }
  bVar19 = DAT_08ed;
  if (DAT_348b < bVar19) {
    DAT_0b17 = 0;
  }
  else {
    bVar19 = DAT_0b17;
    DAT_0b17 = (bVar19 + 1) - (0xfe < bVar19);
  }
  uVar10 = DAT_08e6;
  *(ushort *)((short)&DAT_0b0e + (ushort)bVar7) = uVar10;
  cVar18 = DAT_0b0d;
  DAT_0b0d = cVar18 + 2U & DAT_1842;
  bVar7 = DAT_0a86;
  if (bVar7 < 0x80) {
    bVar7 = DAT_08ed;
    if (DAT_4b0f <= bVar7) {
      bVar7 = DAT_0888;
      DAT_0888 = bVar7 | 0x40;
    }
  }
  else {
    bVar7 = DAT_0888;
    DAT_0888 = bVar7 & 0xbf;
  }
  bVar7 = DAT_0bbc;
  uVar12 = DAT_0bb8;
  uVar10 = *(ushort *)((short)&DAT_0bbe + (ushort)bVar7);
  uVar11 = uVar12 - uVar10;
  cVar18 = (char)uVar11;
  cVar15 = (char)(uVar11 >> 8);
  if (uVar12 < uVar10) {
    bVar19 = cVar15 + 0x80;
    if ((bVar19 < 0x80) && (0x7f7f < CONCAT11(bVar19,cVar18))) {
      cVar18 = cVar18 + -0x80;
    }
    else {
      cVar18 = '\0';
    }
  }
  else if ((uVar11 < 0x8000) && (CONCAT11(cVar15 + -0x80,cVar18) < 0x8080)) {
    cVar18 = cVar18 + -0x80;
  }
  else {
    cVar18 = -1;
  }
  DAT_0bbb = cVar18;
  uVar10 = DAT_0bb8;
  *(ushort *)((short)&DAT_0bbe + (ushort)bVar7) = uVar10;
  cVar18 = DAT_0bbc;
  DAT_0bbc = cVar18 + 2U & DAT_1842;
  cVar18 = DAT_08e6._0_1_;
  if (cVar18 == '\0') {
    uVar14 = DAT_08e6;
    uVar16 = (undefined1)uVar14;
  }
  else {
    uVar16 = 0xff;
  }
  DAT_08ec = uVar16;
  uVar10 = DAT_0900;
  uVar10 = lookup_u8_uniform_u16_axis(uVar10,&UNK_3494);
  DAT_0a05 = (char)(uVar10 >> 8);
  FUN_a314();
  bVar7 = DAT_08af;
  if (((~bVar7 & 8) != 0) && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)) {
    bVar7 = DAT_08ec;
    bVar19 = DAT_0a05;
    if (bVar19 < bVar7) {
      cVar18 = '\0';
    }
    else {
      bVar7 = DAT_0b18;
      cVar18 = (bVar7 + 1) - (0xfe < bVar7);
    }
    DAT_0b18 = cVar18;
    bVar7 = DAT_0886;
    if ((bVar7 & 0x10) == 0) {
LAB_8fd5:
      cVar18 = '\0';
    }
    else {
      bVar7 = DAT_08ec;
      bVar19 = DAT_0a06;
      if (bVar7 < bVar19) goto LAB_8fd5;
      bVar7 = DAT_0b19;
      cVar18 = (bVar7 + 1) - (0xfe < bVar7);
    }
    DAT_0b19 = cVar18;
  }
  bVar7 = DAT_0b16;
  DAT_0b16 = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0e20;
  bVar7 = (bVar7 + 1) - (0xfe < bVar7);
  DAT_0e20 = bVar7;
  if (DAT_4e8c <= bVar7) {
    FUN_cbef();
    bVar7 = DAT_0883;
    if ((~bVar7 & 2) == 0) {
      bVar7 = DAT_0880;
      if ((~bVar7 & 1) != 0) {
        DAT_0b6e = 0;
        bVar7 = DAT_0883;
        DAT_0883 = bVar7 & 0xfd;
        bVar7 = DAT_0bf8;
        DAT_0bf8 = bVar7 | 0x40;
      }
    }
    else {
      bVar7 = DAT_0880;
      if ((bVar7 & 1) != 0) {
        bVar7 = DAT_0883;
        DAT_0883 = bVar7 | 2;
        bVar7 = DAT_0889;
        DAT_0889 = bVar7 | 0x10;
        bVar7 = DAT_0bf8;
        DAT_0bf8 = bVar7 & 0xdf;
      }
    }
  }
  bVar7 = DAT_0880;
  if ((~bVar7 & 1) == 0) {
    bVar7 = DAT_0a2e._0_1_;
    bVar19 = DAT_0d7d;
    if (bVar19 <= bVar7) {
      bVar7 = DAT_0880;
      DAT_0880 = bVar7 | 0x44;
    }
    bVar7 = DAT_0d08;
    if ((((((((~bVar7 & 1) != 0) && (bVar7 = DAT_0884, (~bVar7 & 2) != 0)) &&
           (bVar7 = DAT_0884, (~bVar7 & 1) != 0)) &&
          ((bVar7 = DAT_088c, (~bVar7 & 0x80) != 0 && (bVar7 = DAT_0883, (bVar7 & 0x10) != 0)))) &&
         ((bVar7 = DAT_0881, (~bVar7 & 8) != 0 &&
          ((cVar18 = DAT_0dd9, cVar18 == -0x80 || (bVar7 = DAT_08b0, (~bVar7 & 8) != 0)))))) &&
        (bVar7 = DAT_08b1, (~bVar7 & 0x10) != 0)) &&
       ((bVar7 = DAT_08a0, (~bVar7 & 4) != 0 && (DAT_18df != -0x80)))) {
      bVar7 = DAT_091b;
      if (0xbf < bVar7) {
        DAT_091b = 0xc0;
      }
      bVar7 = DAT_091c;
      if (0xbf < bVar7) {
        DAT_091c = 0xc0;
      }
      bVar7 = DAT_091d;
      if (0xbf < bVar7) {
        DAT_091d = 0xc0;
      }
      bVar7 = DAT_091e;
      if (0xbf < bVar7) {
        DAT_091e = 0xc0;
      }
      uVar14 = DAT_095e;
      bVar7 = DAT_0a08;
      bVar19 = (byte)((ushort)uVar14 >> 8);
      uVar14 = CONCAT11(bVar19 + bVar7,(char)uVar14);
      if (CARRY1(bVar19,bVar7)) {
        uVar14 = 0xffff;
      }
      DAT_0926 = uVar14;
      FUN_864e();
      bVar19 = DAT_0cec;
      bVar7 = DAT_0a08;
      iVar2 = (uint)bVar7 * 0x100 * (uint)bVar19 * 2;
      uVar10 = (ushort)iVar2;
      bVar7 = (byte)((uint)iVar2 >> 0x18);
      cVar18 = bVar7 + (0xff7f < uVar10);
      uVar11 = CONCAT11(bVar7 + CARRY1(bVar7,0xff7f < uVar10),cVar18);
      uVar9 = uVar10 + 0x80;
      if (uVar11 < 0x100) {
        DAT_0dde._0_1_ = cVar18;
        DAT_0dde._1_1_ = (char)(uVar10 + 0x80 >> 8);
        uVar12 = DAT_0dde;
        uVar10 = DAT_095e;
        sVar8 = uVar12 + uVar10;
        uVar9 = uVar11;
        if (CARRY2(uVar12,uVar10)) goto LAB_90dd;
      }
      else {
LAB_90dd:
        sVar8 = -1;
      }
      DAT_0928 = sVar8;
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 | 0x80;
      FUN_c8c9();
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 & 0x7f;
      cVar18 = DAT_0d87;
      if (cVar18 != '\t') {
        bVar7 = DAT_0a17;
        DAT_0a17 = bVar7 | 0x20;
        FUN_c939();
        bVar7 = DAT_0a17;
        DAT_0a17 = bVar7 & 0xdf;
      }
      bVar7 = DAT_0881;
      DAT_0881 = bVar7 | 8;
    }
  }
  else {
    DAT_0b5c = 0;
  }
  bVar7 = DAT_0886;
  if ((((bVar7 & 0x40) == 0) || (bVar7 = DAT_08ed, bVar7 < DAT_34ce)) ||
     (bVar7 = DAT_0b1e, bVar7 < DAT_3553)) {
    sVar8 = 0;
  }
  else {
    bVar7 = DAT_0881;
    DAT_0881 = bVar7 | 1;
    DAT_0b1e = 0;
    if (((DAT_4b08 != '\0') && (cVar18 = DAT_0a86, cVar18 == -0x80)) &&
       (DAT_0a86 = DAT_4b0b, DAT_4b0b < 0x80)) {
      DAT_0a87 = DAT_4b0e;
    }
    cVar18 = DAT_097a;
    if ((cVar18 == '\0') && (DAT_097a = DAT_3483, DAT_3483 != -0x80)) {
      DAT_0a04 = DAT_3486;
    }
    cVar18 = DAT_0d87;
    bVar7 = DAT_354e;
    if (((((cVar18 == '\t') && (bVar19 = DAT_0896._0_1_, bVar7 = DAT_3548, (~bVar19 & 0x10) == 0))
         && (bVar19 = DAT_0899, bVar7 = DAT_3549, (bVar19 & 2) == 0)) &&
        ((bVar19 = DAT_0899, bVar7 = DAT_354a, (bVar19 & 4) == 0 &&
         (bVar19 = DAT_0899, bVar7 = DAT_354b, (bVar19 & 8) == 0)))) &&
       ((bVar19 = DAT_0899, bVar7 = DAT_354c, (bVar19 & 0x10) == 0 &&
        (bVar19 = DAT_0899, bVar7 = DAT_354e, (bVar19 & 0x20) != 0)))) {
      bVar7 = DAT_354d;
    }
    sVar8 = (ushort)bVar7 << 5;
  }
  DAT_0a12 = sVar8;
  cVar18 = DAT_0b21;
  if (cVar18 == '\x01') {
    bVar7 = DAT_0886;
    if ((((~bVar7 & 0x40) == 0) || (bVar7 = DAT_0881, (~bVar7 & 0x10) == 0)) ||
       ((bVar7 = DAT_0900._0_1_, bVar7 < DAT_34c5 || (DAT_34c6 < bVar7)))) goto LAB_931f;
    sVar8 = DAT_08e6;
    bVar7 = (byte)((ushort)(sVar8 << 6) >> 8);
    if ((bVar7 < DAT_34c7) || (DAT_34c8 < bVar7)) goto LAB_931f;
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar7 = DAT_0896._0_1_, (bVar7 & 0x10) == 0)) {
      bVar7 = DAT_08ed;
      if (DAT_34c9 <= bVar7) goto LAB_9217;
      goto LAB_931f;
    }
    bVar7 = DAT_08ed;
    if (bVar7 < DAT_34ca) goto LAB_931f;
LAB_9217:
    uVar9 = DAT_08f2;
    uVar9 = lookup_u8_uniform_u16_axis(uVar9,&UNK_353a);
    bVar19 = (byte)(uVar9 >> 8);
    DAT_0a0d = bVar19;
    bVar7 = DAT_0a0f;
    uVar9 = (ushort)bVar19 * (ushort)bVar7;
    uVar4 = DAT_08f5;
    uVar10 = lookup_u8_uniform_axis(uVar4,&UNK_351d);
    bVar7 = (byte)(uVar10 >> 8);
    DAT_0a10 = bVar7;
    uVar9 = multiply_u16_shift8_saturate(bVar7 + 0x180,uVar9);
    DAT_0dde = uVar9;
    uVar4 = DAT_08ed;
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) != 0)) {
      pbVar21 = &UNK_34d0;
    }
    else {
      bVar7 = DAT_0898;
      if (DAT_34cf < bVar7) {
        pbVar21 = &UNK_34e4;
      }
      else {
        pbVar21 = &UNK_34da;
      }
    }
    uVar9 = lookup_u8_uniform_axis(uVar4,pbVar21);
    DAT_0a0c = (char)(uVar9 >> 8);
    uVar9 = DAT_08ce;
    uVar9 = lookup_u8_uniform_u16_axis(uVar9,&UNK_34ee);
    bVar19 = (byte)(uVar9 >> 8);
    DAT_0a0e = bVar19;
    bVar7 = DAT_0a0c;
    uVar9 = DAT_0dde;
    uVar1 = (uint)((ushort)bVar19 * (ushort)bVar7) * (uint)uVar9;
    if (uVar1 < 0x40000000) {
      bVar7 = (byte)(uVar1 >> 0x10);
      uVar9 = CONCAT11(((char)(uVar1 >> 0x18) << 1 | bVar7 >> 7) << 1 | (bVar7 & 0x7f) >> 6,
                       (bVar7 << 1 | (byte)(uVar1 >> 8) >> 7) << 1 |
                       (byte)((ushort)((short)uVar1 << 1) >> 0xf));
      if (uVar9 <= DAT_34cc) goto LAB_931f;
    }
    else {
      uVar9 = 0xffff;
    }
    DAT_0a0a = uVar9;
    do {
      bVar7 = DAT_0b21;
      uVar9 = (ushort)((uint)bVar7 * 0x9c4 >> 0x10);
      DAT_0dde = (short)((uint)bVar7 * 0x9c4);
      uVar12 = DAT_0a0a;
      uVar11 = DAT_095e;
      uVar10 = uVar12 + uVar11;
      if (CARRY2(uVar12,uVar11)) {
        uVar10 = 0xffff;
      }
      uVar11 = DAT_0dde;
      if (uVar10 < uVar11) break;
      bVar7 = DAT_0b21;
      bVar7 = (bVar7 + 1) - (0xfe < bVar7);
      DAT_0b21 = bVar7;
    } while (bVar7 < 0x1b);
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar7 = DAT_0896._0_1_, (bVar7 & 0x10) == 0)) {
      bVar7 = DAT_0b20;
      bVar19 = DAT_3551;
      if (bVar7 < DAT_354f) {
LAB_92fe:
        bVar7 = DAT_0b1c;
        if (bVar19 <= bVar7) goto LAB_931f;
        bVar7 = DAT_0b1c;
        DAT_0b1c = (bVar7 + 1) - (0xfe < bVar7);
      }
      else {
        DAT_0b20 = 0;
        DAT_0b1c = 0;
      }
    }
    else {
      bVar7 = DAT_0b20;
      bVar19 = DAT_3552;
      if (bVar7 < DAT_3550) goto LAB_92fe;
      DAT_0b20 = 0;
      DAT_0b1c = 0;
    }
    bVar7 = DAT_0881;
    DAT_0881 = bVar7 | 1;
    if (DAT_3487 == -0x80) {
      DAT_097a = 0x80;
    }
  }
  else {
    cVar18 = DAT_0b21;
    DAT_0b21 = cVar18 + -1;
LAB_931f:
    DAT_0a0a = 0;
  }
  bVar7 = DAT_0881;
  if (((((((bVar7 & 1) != 0) && (bVar7 = DAT_0d08, (~bVar7 & 1) != 0)) &&
        (bVar7 = DAT_0884, (~bVar7 & 2) != 0)) &&
       ((bVar7 = DAT_0884, (~bVar7 & 1) != 0 && (bVar7 = DAT_088c, (~bVar7 & 0x80) != 0)))) &&
      (bVar7 = DAT_08a0, (~bVar7 & 4) != 0)) &&
     (((cVar18 = DAT_0dd9, cVar18 == -0x80 || (bVar7 = DAT_08b0, (~bVar7 & 8) != 0)) &&
      (bVar7 = DAT_08b1, (bVar7 & 0x10) == 0)))) {
    uVar11 = DAT_0a0a;
    uVar12 = DAT_0a12;
    uVar10 = uVar11 + uVar12;
    if ((CARRY2(uVar11,uVar12)) || (24999 < uVar10)) {
      uVar10 = 25000;
    }
    DAT_0a14 = uVar10;
    uVar11 = DAT_095e;
    sVar8 = uVar10 + uVar11;
    if (CARRY2(uVar10,uVar11)) {
      sVar8 = -1;
    }
    DAT_0926 = sVar8;
    FUN_864e(uVar9,sVar8);
    bVar7 = DAT_0cec;
    uVar9 = DAT_0a14;
    iVar2 = (uint)uVar9 * (uint)bVar7 * 2;
    uVar9 = (ushort)iVar2;
    bVar7 = (byte)((uint)iVar2 >> 0x18);
    cVar18 = bVar7 + (0xff7f < uVar9);
    if (CONCAT11(bVar7 + CARRY1(bVar7,0xff7f < uVar9),cVar18) < 0x100) {
      uVar10 = CONCAT11(cVar18,(char)(uVar9 + 0x80 >> 8));
      uVar9 = DAT_095e;
      sVar8 = uVar10 + uVar9;
      if (CARRY2(uVar10,uVar9)) goto LAB_939e;
    }
    else {
LAB_939e:
      sVar8 = -1;
    }
    DAT_0928 = sVar8;
    bVar7 = DAT_08b1;
    if ((~bVar7 & 0x80) != 0) {
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 | 0x80;
      FUN_c8c9();
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 & 0x7f;
    }
    cVar18 = DAT_0d87;
    if ((cVar18 != '\t') && (bVar7 = DAT_08b1, (~bVar7 & 0x80) != 0)) {
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 | 0x20;
      FUN_c939();
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 & 0xdf;
    }
  }
  bVar7 = DAT_0881;
  DAT_0881 = bVar7 & 0xfe;
  bVar7 = DAT_08c0;
  DAT_08c0 = bVar7 | 0x40;
  bVar7 = DAT_0886;
  if (((((~bVar7 & 0x40) == 0) || (bVar7 = DAT_0881, (~bVar7 & 0x10) == 0)) ||
      (bVar7 = DAT_0900._0_1_, bVar7 < DAT_3554)) || (DAT_3555 < bVar7)) {
LAB_9429:
    bVar7 = DAT_0cf2;
    DAT_0cf2 = bVar7 & 0xfd;
    bVar7 = DAT_0cf2;
    if ((~bVar7 & 1) == 0) goto LAB_9438;
    uVar9 = 0;
  }
  else {
    sVar8 = DAT_08e6;
    bVar7 = (byte)((ushort)(sVar8 << 6) >> 8);
    if ((bVar7 < DAT_3556) || (DAT_3557 < bVar7)) goto LAB_9429;
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar7 = DAT_0896._0_1_, (bVar7 & 0x10) == 0)) {
      bVar7 = DAT_08ed;
      if (bVar7 < DAT_3558) goto LAB_9429;
    }
    else {
      bVar7 = DAT_08ed;
      if (bVar7 < DAT_3559) goto LAB_9429;
    }
    bVar7 = DAT_0cf2;
    DAT_0cf2 = bVar7 | 2;
LAB_9438:
    uVar9 = DAT_08f2;
    uVar9 = lookup_u8_uniform_u16_axis(uVar9,&UNK_353a);
    bVar19 = (byte)(uVar9 >> 8);
    DAT_0a0d = bVar19;
    bVar7 = DAT_0a0f;
    uVar9 = (ushort)bVar19 * (ushort)bVar7;
    uVar4 = DAT_08f5;
    uVar10 = lookup_u8_uniform_axis(uVar4,&UNK_351d);
    bVar7 = (byte)(uVar10 >> 8);
    DAT_0a10 = bVar7;
    uVar9 = multiply_u16_shift8_saturate(bVar7 + 0x180,uVar9);
    DAT_0dde = uVar9;
    uVar4 = DAT_08ed;
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) != 0)) {
      pbVar21 = &UNK_355d;
    }
    else {
      bVar7 = DAT_0898;
      if (DAT_355c < bVar7) {
        pbVar21 = &UNK_3571;
      }
      else {
        pbVar21 = &UNK_3567;
      }
    }
    uVar9 = lookup_u8_uniform_axis(uVar4,pbVar21);
    DAT_0d04 = (char)(uVar9 >> 8);
    uVar9 = DAT_08ce;
    uVar9 = lookup_u8_uniform_u16_axis(uVar9,&UNK_34ee);
    bVar19 = (byte)(uVar9 >> 8);
    DAT_0a0e = bVar19;
    bVar7 = DAT_0d04;
    uVar9 = DAT_0dde;
    uVar1 = (uint)((ushort)bVar19 * (ushort)bVar7) * (uint)uVar9;
    if (uVar1 < 0x40000000) {
      bVar7 = (byte)(uVar1 >> 0x10);
      uVar9 = CONCAT11(((char)(uVar1 >> 0x18) << 1 | bVar7 >> 7) << 1 | (bVar7 & 0x7f) >> 6,
                       (bVar7 << 1 | (byte)(uVar1 >> 8) >> 7) << 1 |
                       (byte)((ushort)((short)uVar1 << 1) >> 0xf));
    }
    else {
      uVar9 = 0xffff;
    }
  }
  DAT_0d02 = uVar9;
  DAT_0cfa = uVar9;
  uVar11 = DAT_0940;
  uVar10 = uVar9 + uVar11;
  uVar12 = DAT_19dc;
  if (((!CARRY2(uVar9,uVar11)) && (uVar10 < DAT_19dc)) && (uVar12 = uVar10, uVar10 < DAT_19da)) {
    uVar12 = DAT_19da;
  }
  DAT_0cf8 = uVar12;
  uVar9 = DAT_095e;
  sVar8 = uVar12 + uVar9;
  if (CARRY2(uVar12,uVar9)) {
    sVar8 = -1;
  }
  DAT_0cf6 = sVar8;
  FUN_864e();
  bVar7 = DAT_0cec;
  uVar9 = DAT_0d02;
  iVar2 = (uint)uVar9 * (uint)bVar7 * 2;
  uVar9 = (ushort)iVar2;
  bVar7 = (byte)((uint)iVar2 >> 0x18);
  cVar18 = bVar7 + (0xff7f < uVar9);
  if (CONCAT11(bVar7 + CARRY1(bVar7,0xff7f < uVar9),cVar18) < 0x100) {
    DAT_0dde._0_1_ = cVar18;
    RAM0ddf = uVar9 + 0x80;
    uVar9 = DAT_0dde;
  }
  else {
    uVar9 = 0xffff;
  }
  DAT_0d00 = uVar9;
  uVar11 = DAT_095a;
  uVar10 = uVar9 + uVar11;
  uVar12 = DAT_19dc;
  if (((!CARRY2(uVar9,uVar11)) && (uVar10 < DAT_19dc)) && (uVar12 = uVar10, uVar10 < DAT_19da)) {
    uVar12 = DAT_19da;
  }
  DAT_0cfe = uVar12;
  uVar9 = DAT_095e;
  sVar8 = uVar12 + uVar9;
  if (CARRY2(uVar12,uVar9)) {
    sVar8 = -1;
  }
  DAT_0cfc = sVar8;
  bVar7 = DAT_0d08;
  if ((((~bVar7 & 1) == 0) || (bVar7 = DAT_0884, (~bVar7 & 2) == 0)) ||
     ((bVar7 = DAT_0884, (~bVar7 & 1) == 0 || (bVar7 = DAT_088c, (~bVar7 & 0x80) == 0)))) {
LAB_9581:
    bVar7 = DAT_0cf2;
    DAT_0cf2 = bVar7 & 0xfe;
  }
  else {
    bVar7 = DAT_08ed;
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar19 = DAT_0896._0_1_, (bVar19 & 0x10) == 0)) {
      if (DAT_355a <= bVar7) goto LAB_9566;
      goto LAB_9581;
    }
    if (bVar7 < DAT_355b) goto LAB_9581;
LAB_9566:
    cVar18 = DAT_0dd9;
    if ((((cVar18 != -0x80) && (bVar7 = DAT_08b0, (~bVar7 & 8) == 0)) ||
        (bVar7 = DAT_08b1, (~bVar7 & 0x10) == 0)) ||
       ((bVar7 = DAT_0ca8, (bVar7 & 1) == 0 || (bVar7 = DAT_08b1, (bVar7 & 0x80) != 0))))
    goto LAB_9581;
    bVar7 = DAT_0cf2;
    if ((((~bVar7 & 1) != 0) && (bVar7 = DAT_0cf2, (bVar7 & 2) != 0)) &&
       ((bVar7 = DAT_0cf2, (~bVar7 & 4) != 0 && (cVar18 = DAT_0da4, cVar18 != '\0')))) {
      DAT_0cf3 = 0;
      bVar7 = DAT_0cf2;
      DAT_0cf2 = bVar7 | 1;
    }
  }
  bVar7 = DAT_08c0;
  DAT_08c0 = bVar7 & 0xbf;
  uVar10 = DAT_0c8a;
  uVar11 = DAT_0c8e;
  uVar9 = uVar10 - uVar11;
  if (uVar10 < uVar11) {
    uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                     -(char)uVar9),&UNK_1852);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = scale_u16_by_u8(uVar9,&UNK_1852);
  }
  sVar8 = DAT_0c8e;
  DAT_0c8e = uVar9 + sVar8;
  bVar7 = DAT_0ca8;
  if ((bVar7 & 1) == 0) {
    uVar14 = DAT_0c98;
    DAT_0c96 = uVar14;
  }
  else {
    uVar10 = DAT_0c94;
    uVar11 = DAT_0c96;
    uVar9 = uVar10 - uVar11;
    if (uVar10 < uVar11) {
      uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                       -(char)uVar9),&UNK_1852);
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    else {
      uVar9 = scale_u16_by_u8(uVar9,&UNK_1852);
    }
    sVar8 = DAT_0c96;
    DAT_0c96 = uVar9 + sVar8;
  }
  uVar9 = DAT_08f2;
  uVar9 = lookup_u8_uniform_u16_axis(uVar9,&DAT_0dba);
  DAT_0c92 = (char)(uVar9 >> 8);
  bVar7 = DAT_0c92;
  puVar6 = (undefined *)DAT_0c8e;
  puVar13 = puVar6 + -0x1eb7;
  if (puVar6 < &UNK_1eb7) {
    iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar13 >> 8) + 1) - ((char)-(char)puVar13 != '\0'),
                           -(char)puVar13) * (uint)bVar7 * 2;
    uVar9 = (ushort)iVar2;
    bVar7 = (byte)((uint)iVar2 >> 0x18);
    cVar18 = bVar7 + (0xff7f < uVar9);
    if (CONCAT11(bVar7 + CARRY1(bVar7,0xff7f < uVar9),cVar18) < 0x100) {
      DAT_0dde._0_1_ = cVar18;
      RAM0ddf = uVar9 + 0x80;
      puVar6 = (undefined *)DAT_0dde;
      puVar13 = &UNK_1eb7 + -(short)puVar6;
      if (puVar6 < &UNK_1eb8) goto LAB_965e;
    }
    puVar13 = (undefined *)0x0;
  }
  else {
    iVar2 = ZEXT24(puVar13) * (uint)bVar7 * 2;
    uVar9 = (ushort)iVar2;
    bVar7 = (byte)((uint)iVar2 >> 0x18);
    cVar18 = bVar7 + (0xff7f < uVar9);
    if (CONCAT11(bVar7 + CARRY1(bVar7,0xff7f < uVar9),cVar18) < 0x100) {
      DAT_0dde._0_1_ = cVar18;
      RAM0ddf = uVar9 + 0x80;
      uVar9 = DAT_0dde;
      puVar13 = &UNK_1eb7 + uVar9;
      if (uVar9 < 0xe149) goto LAB_965e;
    }
    puVar13 = (undefined *)0xffff;
  }
LAB_965e:
  DAT_0c90 = puVar13;
  FUN_cc30();
  bVar7 = DAT_08f4;
  if (DAT_4a31 < bVar7) {
    if (DAT_4a32 <= bVar7) {
      bVar7 = DAT_0885;
      DAT_0885 = bVar7 & 0xfb;
    }
  }
  else {
    bVar7 = DAT_0885;
    DAT_0885 = bVar7 | 4;
  }
  bVar7 = DAT_0a2e._0_1_;
  bVar19 = DAT_0d7c;
  if (bVar7 < bVar19) {
    if ((bVar7 < DAT_4240) || (cVar18 = DAT_0a82, cVar18 != '@')) {
      bVar19 = DAT_088d;
      DAT_088d = bVar19 & 0xdf;
    }
    else {
      bVar19 = DAT_088d;
      DAT_088d = bVar19 | 0x20;
    }
    if (bVar7 < DAT_4a30) {
      bVar7 = DAT_0880;
      DAT_0880 = bVar7 & 0xfb;
      goto LAB_96f1;
    }
    bVar7 = DAT_08ed;
    if (DAT_4a2e < bVar7) {
      DAT_0a8a = 0;
      goto LAB_96f1;
    }
    bVar7 = DAT_0a8a;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0a8a = bVar7;
    if (bVar7 <= DAT_4a2f) goto LAB_96f1;
    bVar19 = DAT_0a89;
    bVar7 = DAT_08ec;
    if ((((bVar19 < bVar7) || (bVar7 = DAT_08af, (~bVar7 & 8) == 0)) ||
        (bVar7 = DAT_08af, (~bVar7 & 4) == 0)) ||
       (((cVar18 = DAT_0d87, cVar18 == '\t' && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) ||
        (bVar7 = DAT_0885, (bVar7 & 4) == 0)))) goto LAB_96f1;
    bVar7 = DAT_0885;
    DAT_0885 = bVar7 | 0x20;
  }
  else {
    bVar7 = DAT_0880;
    DAT_0880 = bVar7 | 4;
    bVar7 = DAT_088d;
    DAT_088d = bVar7 & 0xdf;
LAB_96f1:
    bVar7 = DAT_0885;
    DAT_0885 = bVar7 & 0xdf;
  }
  bVar7 = DAT_0b20;
  DAT_0b20 = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0b1e;
  DAT_0b1e = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0b1f;
  DAT_0b1f = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0b1d;
  DAT_0b1d = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0afd;
  DAT_0afd = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0881;
  if ((~bVar7 & 0x10) == 0) {
    cVar18 = '\0';
  }
  else {
    bVar7 = DAT_0afe;
    cVar18 = (bVar7 + 1) - (0xfe < bVar7);
  }
  DAT_0afe = cVar18;
  bVar7 = DAT_0880;
  if (((~bVar7 & 1) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x40) == 0)) {
    bVar7 = DAT_0b5d;
    cVar18 = (bVar7 + 1) - (0xfe < bVar7);
  }
  else {
    cVar18 = '\0';
  }
  DAT_0b5d = cVar18;
  bVar7 = DAT_09a1;
  if ((~bVar7 & 1) == 0) {
    bVar7 = DAT_09aa;
    DAT_09aa = (bVar7 + 1) - (0xfe < bVar7);
    DAT_09ab = 0;
  }
  else {
    bVar7 = DAT_09ab;
    DAT_09ab = (bVar7 + 1) - (0xfe < bVar7);
    DAT_09aa = 0;
  }
  bVar7 = DAT_091b;
  DAT_091b = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_091c;
  DAT_091c = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_091d;
  DAT_091d = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_091e;
  DAT_091e = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_091f;
  DAT_091f = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0920;
  DAT_0920 = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0b09;
  DAT_0b09 = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0893;
  if ((bVar7 & 0x80) == 0) {
LAB_9802:
    bVar7 = 0;
  }
  else {
    bVar7 = DAT_0be7;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    if (DAT_4f15 < bVar7) {
      bVar7 = DAT_0893;
      DAT_0893 = bVar7 & 0x7f;
      goto LAB_9802;
    }
  }
  DAT_0be7 = bVar7;
  bVar7 = DAT_0900._0_1_;
  uVar16 = DAT_4b9e;
  if (bVar7 < DAT_4b9c) {
    uVar16 = DAT_4b9d;
  }
  DAT_0a9f = uVar16;
  bVar7 = DAT_08ce._0_1_;
  bVar19 = DAT_0a9e;
  if ((bVar7 < bVar19) || ((byte)(bVar7 - bVar19) < DAT_4b99)) {
    DAT_0a9d = 0;
LAB_984d:
    cVar18 = DAT_0aa0;
    if ((cVar18 == '\0') || (DAT_0aa0 = cVar18 + -1, (char)(cVar18 + -1) == '\0')) {
      DAT_0aa0 = DAT_4b9a;
      bVar7 = DAT_0a9c;
      bVar19 = bVar7 - DAT_4b9b;
      if (bVar7 < DAT_4b9b) {
        bVar19 = 0;
      }
      goto LAB_986d;
    }
  }
  else {
    bVar17 = DAT_0a9f;
    sVar8 = (ushort)(byte)((bVar7 - bVar19) - DAT_4b99) * (ushort)bVar17;
    if ((char)((ushort)sVar8 >> 8) != '\0') {
      sVar8 = 0xff;
    }
    bVar19 = (byte)sVar8;
    DAT_0a9d = bVar19;
    bVar7 = DAT_0a9c;
    if ((bVar19 < bVar7) || (bVar19 == bVar7)) goto LAB_984d;
    if (DAT_4b9f <= bVar19) {
      bVar19 = DAT_4b9f;
    }
LAB_986d:
    DAT_0a9c = bVar19;
  }
  uVar16 = DAT_08ce._0_1_;
  DAT_0a9e = uVar16;
  uVar10 = DAT_0900;
  uVar11 = DAT_0aa8;
  uVar9 = uVar10 - uVar11;
  if (uVar10 < uVar11) {
    uVar9 = scale_u16_by_u8_rounded
                      (CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                -(char)uVar9),&UNK_4af6);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = scale_u16_by_u8_rounded(uVar9,&UNK_4af6);
  }
  sVar8 = DAT_0aa8;
  DAT_0aa8 = uVar9 + sVar8;
  bVar7 = DAT_0af7;
  if ((bVar7 & 1) == 0) {
    bVar7 = DAT_0aaa;
    DAT_0aaa = (bVar7 + 1) - (0xfe < bVar7);
    bVar7 = DAT_0aab;
    DAT_0aab = (bVar7 + 1) - (0xfe < bVar7);
  }
  bVar7 = DAT_0abe;
  if ((DAT_4af7 < bVar7) && (bVar7 < DAT_4af8)) {
    bVar7 = DAT_0aa6;
    DAT_0aa6 = bVar7 | 0x80;
  }
  else {
    bVar7 = DAT_0aa6;
    DAT_0aa6 = bVar7 & 0x7f;
    bVar7 = DAT_0aa6;
    if ((bVar7 & 0x40) != 0) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xdf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  bVar7 = DAT_0aa6;
  if ((((~bVar7 & 8) != 0) && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)) &&
     (bVar7 = DAT_0aa6, (~bVar7 & 2) != 0)) {
    cVar18 = DAT_0d87;
    if (cVar18 == '\t') {
      cVar18 = DAT_0898;
      if (cVar18 == DAT_4af9) {
        bVar7 = DAT_0aaa;
        if (DAT_4afd <= bVar7) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 0x20;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 | 8;
          FUN_997a();
          return;
        }
      }
      else {
        DAT_0aaa = 0;
        bVar7 = DAT_0aa6;
        if ((bVar7 & 0x20) != 0) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xdf;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xf7;
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xbf;
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 2;
          goto LAB_9a25;
        }
      }
    }
    else {
      bVar7 = DAT_0aa8._0_1_;
      if ((bVar7 < DAT_4afb) || (DAT_4afc <= bVar7)) {
        DAT_0aaa = 0;
        bVar7 = DAT_0aa6;
        if ((bVar7 & 0x20) != 0) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xdf;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xf7;
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xbf;
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 2;
          goto LAB_9a25;
        }
      }
      else {
        bVar7 = DAT_0aaa;
        if (DAT_4afd <= bVar7) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 0x20;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 | 8;
          FUN_997a();
          return;
        }
      }
    }
    cVar18 = DAT_0d87;
    if (cVar18 == '\t') {
      cVar18 = DAT_0898;
      if (cVar18 == DAT_4afa) {
        bVar7 = DAT_0aab;
        if (DAT_4afd <= bVar7) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 0x10;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 | 4;
        }
LAB_99b5:
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      bVar7 = DAT_0aa6;
      if ((bVar7 & 0x10) == 0) goto LAB_99b5;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      bVar7 = DAT_0aa7;
      DAT_0aa7 = bVar7 & 0xfb;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
    }
    else {
      bVar7 = DAT_0aa8._0_1_;
      if ((DAT_4afe <= bVar7) && (bVar7 < DAT_4aff)) {
        bVar7 = DAT_0aab;
        if (DAT_4afd <= bVar7) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 0x10;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 | 4;
        }
LAB_99f2:
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      bVar7 = DAT_0aa6;
      if ((bVar7 & 0x10) == 0) goto LAB_99f2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      bVar7 = DAT_0aa7;
      DAT_0aa7 = bVar7 & 0xfb;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
    }
  }
LAB_9a25:
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
    bVar19 = DAT_4b05;
    if ((bVar7 & 8) != 0) {
      bVar19 = DAT_4b04;
    }
    DAT_0aac = bVar19;
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
  if ((~bVar7 & 2) == 0) {
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
          bVar19 = DAT_4b05;
          if ((bVar7 & 8) != 0) {
            bVar19 = DAT_4b04;
          }
          bVar17 = DAT_0aad;
          bVar7 = bVar19 + bVar17;
          if (CARRY1(bVar19,bVar17)) {
            bVar7 = 0xff;
          }
          bVar19 = DAT_0a83;
          if (bVar7 < bVar19) {
            DAT_0aac = bVar7;
          }
          else {
            bVar7 = DAT_0aa7;
            DAT_0aa7 = bVar7 & 0xfd;
          }
        }
        bVar7 = DAT_0aa7;
        if ((~bVar7 & 2) != 0) {
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
    if ((~bVar7 & 1) != 0) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  uVar14 = DAT_0ab4;
  DAT_0ab6 = uVar14;
  sVar8 = DAT_0ab0;
  DAT_0ab4 = sVar8;
  sVar5 = DAT_0ab6;
  sVar8 = sVar8 - sVar5;
  bVar7 = DAT_0ab2;
  if ((~bVar7 & 4) != 0) {
    sVar8 = 0;
  }
  if ((char)((ushort)sVar8 >> 8) != '\0') {
    sVar8 = 0xff;
  }
  DAT_0ab3 = (char)sVar8;
  bVar7 = DAT_0ab2;
  DAT_0ab2 = bVar7 | 4;
  bVar7 = DAT_0ab3;
  iVar2 = (uint)DAT_4bd4 * (uint)bVar7;
  DAT_0dde = (short)((uint)iVar2 >> 0x10);
  bVar7 = DAT_0aba;
  bVar17 = (byte)iVar2;
  bVar19 = (byte)((uint)iVar2 >> 8);
  DAT_0de0 = CONCAT11(bVar19 - (bVar17 < bVar7),bVar17 - bVar7);
  if (bVar19 < (bVar17 < bVar7)) {
    cVar18 = DAT_0dde._1_1_;
    if (cVar18 == '\x01') goto LAB_9b9a;
    if (cVar18 != '\0') goto LAB_9b48;
    uVar14 = DAT_0de0;
    iVar2 = (uint)DAT_4bd6 *
            (uint)CONCAT11((~(byte)((ushort)uVar14 >> 8) + 1) - ((char)-(char)uVar14 != '\0'),
                           -(char)uVar14);
    uVar14 = (undefined2)iVar2;
    if ((short)((uint)iVar2 >> 0x10) != 0) {
      uVar14 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar19 = (byte)((ushort)uVar14 >> 8);
    bVar17 = (byte)uVar14;
    if ((bVar7 & 1) == 0) {
      bVar3 = DAT_0ab8._1_1_;
      bVar7 = bVar19 - (bVar17 < bVar3);
      uVar14 = CONCAT11(bVar7,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_9b87;
      cVar18 = -(bVar17 - bVar3);
      uVar14 = CONCAT11((~bVar7 + 1) - (cVar18 != '\0'),cVar18);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar7 = DAT_0ab8._1_1_;
      uVar14 = CONCAT11(bVar19 + CARRY1(bVar17,bVar7),bVar17 + bVar7);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar7))) {
        uVar14 = 0xffff;
      }
LAB_9b87:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar14;
  }
  else {
    cVar18 = DAT_0dde._1_1_;
    if (cVar18 != '\0') {
LAB_9b48:
      DAT_0de0 = 0xffff;
    }
LAB_9b9a:
    uVar9 = DAT_0de0;
    uVar14 = (undefined2)((uint)DAT_4bd6 * (uint)uVar9);
    if ((short)((uint)DAT_4bd6 * (uint)uVar9 >> 0x10) != 0) {
      uVar14 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar19 = (byte)((ushort)uVar14 >> 8);
    bVar17 = (byte)uVar14;
    if ((bVar7 & 1) == 0) {
      bVar7 = DAT_0ab8._1_1_;
      uVar14 = CONCAT11(bVar19 + CARRY1(bVar17,bVar7),bVar17 + bVar7);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar7))) {
        uVar14 = 0xffff;
      }
LAB_9bcc:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar3 = DAT_0ab8._1_1_;
      bVar7 = bVar19 - (bVar17 < bVar3);
      uVar14 = CONCAT11(bVar7,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_9bcc;
      cVar18 = -(bVar17 - bVar3);
      uVar14 = CONCAT11((~bVar7 + 1) - (cVar18 != '\0'),cVar18);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar14;
  }
  bVar19 = DAT_0aba;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 1) == 0) {
    bVar7 = DAT_0ab8._0_1_;
    cVar18 = bVar19 + bVar7;
    if (CARRY1(bVar19,bVar7)) {
      cVar18 = -1;
    }
  }
  else {
    bVar7 = DAT_0ab8._0_1_;
    cVar18 = bVar19 - bVar7;
    if (bVar19 < bVar7) {
      cVar18 = '\0';
    }
  }
  DAT_0aba = cVar18;
  bVar7 = DAT_0aba;
  bVar19 = DAT_0abe;
  if (bVar7 < bVar19) {
    sVar8 = (ushort)(byte)-(bVar7 - bVar19) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar19 = (byte)((ushort)sVar8 >> 8);
    bVar17 = (byte)sVar8;
    if ((bVar7 & 2) == 0) {
      bVar3 = DAT_0abd;
      bVar7 = bVar19 - (bVar17 < bVar3);
      uVar14 = CONCAT11(bVar7,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_9c13;
      cVar18 = -(bVar17 - bVar3);
      uVar14 = CONCAT11((~bVar7 + 1) - (cVar18 != '\0'),cVar18);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar7 = DAT_0abd;
      uVar14 = CONCAT11(bVar19 + CARRY1(bVar17,bVar7),bVar17 + bVar7);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar7))) {
        uVar14 = 0xffff;
      }
LAB_9c13:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar14;
  }
  else {
    sVar8 = (ushort)(byte)(bVar7 - bVar19) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar19 = (byte)((ushort)sVar8 >> 8);
    bVar17 = (byte)sVar8;
    if ((bVar7 & 2) == 0) {
      bVar7 = DAT_0abd;
      uVar14 = CONCAT11(bVar19 + CARRY1(bVar17,bVar7),bVar17 + bVar7);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar7))) {
        uVar14 = 0xffff;
      }
LAB_9c4a:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar3 = DAT_0abd;
      bVar7 = bVar19 - (bVar17 < bVar3);
      uVar14 = CONCAT11(bVar7,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_9c4a;
      cVar18 = -(bVar17 - bVar3);
      uVar14 = CONCAT11((~bVar7 + 1) - (cVar18 != '\0'),cVar18);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar14;
  }
  bVar19 = DAT_0abe;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 2) == 0) {
    bVar7 = DAT_0abc;
    cVar18 = bVar19 + bVar7;
    if (CARRY1(bVar19,bVar7)) {
      cVar18 = -1;
    }
  }
  else {
    bVar7 = DAT_0abc;
    cVar18 = bVar19 - bVar7;
    if (bVar19 < bVar7) {
      cVar18 = '\0';
    }
  }
  DAT_0abe = cVar18;
  if ((DAT_4ba7 != -0x80) ||
     ((((cVar18 = DAT_0d87, cVar18 == '\t' && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) ||
       (bVar7 = DAT_0900._0_1_, DAT_4ba8 <= bVar7)) || (bVar7 = DAT_08ce._0_1_, DAT_4ba9 <= bVar7)))
     ) {
    DAT_0aaf = 0;
    bVar7 = DAT_088d;
    DAT_088d = bVar7 & 0xbf;
  }
  cVar18 = DAT_0af7;
  if (cVar18 == '\0') {
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
    cVar18 = DAT_0d87;
    if (cVar18 == '\t') {
      bVar7 = DAT_08f4;
      if (((bVar7 < DAT_4c03) || (uVar9 = DAT_0992, (ushort)DAT_4c04 << 8 < uVar9)) ||
         ((uVar9 = DAT_0982, DAT_4c06 < uVar9 || (bVar7 = DAT_0881, (~bVar7 & 0x20) == 0)))) {
LAB_9d2a:
        cVar18 = '\0';
LAB_9d2b:
        DAT_0acf = cVar18;
        bVar7 = DAT_09a1;
        if (((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08a0, (~bVar7 & 0x20) != 0)) &&
            (bVar7 = DAT_08b0, (~bVar7 & 0x10) != 0)) &&
           (((bVar7 = DAT_08b0, (~bVar7 & 4) != 0 && (bVar7 = DAT_08b0, (~bVar7 & 2) != 0)) &&
            ((bVar7 = DAT_08b1, (~bVar7 & 0x80) != 0 && (bVar7 = DAT_08b1, (~bVar7 & 0x40) != 0)))))
           ) goto LAB_9d51;
      }
      else {
        cVar18 = DAT_0d87;
        if ((cVar18 != '\t') || (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) {
          bVar7 = DAT_0898;
          if ((&DAT_4e11)[bVar7] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        cVar18 = DAT_0acd;
        if (cVar18 == '\0') goto LAB_9d2a;
        FUN_a3b4();
        cVar18 = DAT_0ace;
        if (cVar18 == '\0') goto LAB_9d2a;
        bVar7 = DAT_0acf;
        if (bVar7 < DAT_4c02) {
          cVar18 = (bVar7 + 1) - (0xfe < bVar7);
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
    cVar18 = DAT_0bdd;
    cVar15 = DAT_0d49;
    if (cVar18 != cVar15) goto LAB_9cbd;
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9d6e:
    if ((DAT_4e1b == 0xff) || (uVar9 = DAT_0a2e, (ushort)DAT_4e1b << 8 < uVar9)) {
      cVar18 = '\0';
    }
    else {
      bVar7 = DAT_0b91;
      if (DAT_4e95 <= bVar7) {
        bVar19 = DAT_0b90;
        DAT_0b90 = bVar19 | 0x80;
      }
      cVar18 = (bVar7 + 1) - (0xfe < bVar7);
    }
    DAT_0b91 = cVar18;
    uVar9 = DAT_0a2e;
    if (((ushort)DAT_4e1a << 8 < uVar9) && (DAT_4e1a != 0xff)) {
      bVar7 = DAT_0b90;
      if ((bVar7 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        cVar18 = DAT_0d87;
        if ((cVar18 != '\t') && (bVar7 = DAT_088c, (bVar7 & 0x80) != 0)) {
          bVar7 = DAT_0b90;
          DAT_0b90 = bVar7 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        bVar7 = DAT_0880;
        if ((~bVar7 & 1) != 0) goto LAB_9dc5;
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
    cVar18 = DAT_0bdd;
    cVar15 = DAT_0d4c;
    if (cVar18 != cVar15) goto LAB_9d6e;
  }
  bVar7 = DAT_0880;
  if (((bVar7 & 1) == 0) ||
     ((((bVar7 = DAT_08af, (~bVar7 & 0x40) != 0 && (bVar7 = DAT_08af, (~bVar7 & 2) != 0)) &&
       ((cVar18 = DAT_0dd9, cVar18 == -0x80 || (bVar7 = DAT_08b0, (~bVar7 & 8) != 0)))) &&
      (((bVar7 = DAT_08b1, (~bVar7 & 0x10) != 0 && (bVar7 = DAT_08b2, (~bVar7 & 0x80) != 0)) &&
       (bVar7 = DAT_08b4, (~bVar7 & 8) != 0)))))) {
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
        DAT_0888 = bVar7 & 0xf7;
      }
      else {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 | 8;
      }
      goto LAB_9e24;
    }
  }
  bVar7 = DAT_0889;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0bd1;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0bd1 = bVar7;
    if (DAT_4e66 <= bVar7) {
      DAT_0bd1 = 0;
      bVar7 = DAT_0b94;
      DAT_0b94 = (bVar7 + 1) - (0xfe < bVar7);
    }
  }
  cVar18 = DAT_0b9a;
  if ((cVar18 != -1) && (uVar9 = DAT_0b98, DAT_4e3a <= uVar9)) {
    DAT_0b98 = 0;
    bVar7 = DAT_0b9a;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b9a = bVar7;
    if (4 < bVar7) {
      uVar16 = DAT_08af;
      DAT_08b8 = uVar16;
      uVar16 = DAT_08b0;
      DAT_08b9 = uVar16;
      uVar16 = DAT_08b1;
      DAT_08ba = uVar16;
      uVar16 = DAT_08b2;
      DAT_08bb = uVar16;
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
  cVar18 = DAT_0dd5;
  if ((cVar18 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0a;
    DAT_0d0a = (bVar7 + 1) - (0xfe < bVar7);
  }
  cVar18 = DAT_0dd5;
  if ((cVar18 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0b;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0d0b = bVar7;
    if (bVar7 <= DAT_4f16) {
      bVar3 = DAT_0d09;
      bVar17 = DAT_0ab3;
      bVar19 = bVar3 + bVar17;
      if (CARRY1(bVar3,bVar17)) {
        bVar19 = 0xff;
      }
      DAT_0d09 = bVar19;
      if ((DAT_4f16 <= bVar7) && (bVar19 <= DAT_4e84)) {
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 1;
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 8;
      }
    }
  }
  bVar7 = DAT_08d9;
  uVar9 = (ushort)bVar7 * 0x100;
  bVar7 = DAT_0881;
  if ((~bVar7 & 0x10) != 0) {
    uVar11 = DAT_08da;
    uVar10 = uVar9 - uVar11;
    if (uVar9 < uVar11) {
      uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),
                                       -(char)uVar10),&UNK_18b2);
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    else {
      uVar9 = scale_u16_by_u8(uVar10,&UNK_18b2);
    }
    sVar8 = DAT_08da;
    uVar9 = uVar9 + sVar8;
  }
  DAT_08da = uVar9;
  cVar18 = DAT_0d87;
  if (cVar18 != '\t') {
    bVar7 = DAT_088d;
    if (((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
        ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
         ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
       ((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 &&
        ((((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar9 = DAT_0900, DAT_4e1e <= uVar9)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)) && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x80;
      bVar7 = DAT_0adc;
      if (DAT_4e2a <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x80;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0x7f;
      DAT_0adc = 0;
    }
  }
  cVar18 = DAT_0d87;
  if (cVar18 != '\t') {
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
      if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
         ((uVar9 = DAT_0900, DAT_4e20 <= uVar9 &&
          ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0xf3 | 0x70;
      }
      else {
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x10) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xef;
          DAT_0ae1 = 0;
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x40) != 0) {
          bVar7 = DAT_0ada;
          if ((~bVar7 & 8) != 0) {
            bVar7 = DAT_0ada;
            if (((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08b1, (bVar7 & 0x20) == 0)) ||
                (uVar9 = DAT_0900, DAT_4e22 < uVar9)) ||
               ((bVar7 = DAT_08af, (~bVar7 & 8) == 0 || (bVar7 = DAT_08af, (~bVar7 & 4) == 0))))
            goto LAB_a04f;
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 | 8;
          }
          bVar7 = DAT_0ada;
          if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
             ((uVar9 = DAT_0900, uVar9 < DAT_4e20 &&
              ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
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
    }
  }
LAB_a04f:
  cVar18 = DAT_0d87;
  if (cVar18 != '\t') {
    bVar7 = DAT_088d;
    if (((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
        ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
         ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
       (((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 &&
         (((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar9 = DAT_0900, uVar9 < DAT_4e24)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)))) &&
        (((bVar7 = DAT_08af, (~bVar7 & 4) != 0 && (sVar8 = DAT_0ad6, sVar8 == 0)) &&
         (cVar18 = DAT_0ad9, cVar18 == '\0')))))) {
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
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xbf;
      DAT_0add = 0;
    }
  }
  cVar18 = DAT_0d87;
  if (cVar18 != '\t') {
    cVar18 = DAT_0d5f;
    if (cVar18 != -0x80) {
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
        if ((DAT_4e57 <= bVar7) && (bVar7 = DAT_08b1, (~bVar7 & 0x20) != 0)) {
          bVar7 = DAT_08b1;
          DAT_08b1 = bVar7 | 0x20;
          bVar7 = DAT_0bd2;
          DAT_0bd2 = bVar7 | 0x20;
          bVar7 = DAT_08ba;
          if ((~bVar7 & 0x20) != 0) {
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
      if (((DAT_4e57 <= bVar7) &&
          (((bVar7 = DAT_088d, (~bVar7 & 0x20) == 0 || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
           ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
            ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))))) &&
         (((bVar7 = DAT_0ada, (~bVar7 & 0x80) == 0 || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
          ((((((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 && (bVar7 = DAT_0abe, bVar7 <= DAT_4e29)) &&
              (uVar9 = DAT_0900, uVar9 < DAT_4e24)) &&
             ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))) &&
            (sVar8 = DAT_0ad6, sVar8 == 0)) && (cVar18 = DAT_0ad9, cVar18 == '\0')))))) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 8;
        bVar7 = DAT_0ae0;
        if (DAT_4e31 <= bVar7) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0x7f;
          cVar18 = DAT_0d5f;
          if ((cVar18 != -0x80) && (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) {
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
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_0890;
        if ((~bVar7 & 0x40) != 0) goto LAB_a1d9;
        FUN_b4c6();
      }
    }
  }
  else {
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
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_088f;
        if ((~bVar7 & 0x40) != 0) goto LAB_a24a;
        FUN_b4c6();
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


