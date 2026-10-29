/* Entry 74b8 */

void FUN_74b8(uchar param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  byte extraout_A;
  byte extraout_A_00;
  byte extraout_A_01;
  byte extraout_A_02;
  uchar uVar5;
  undefined1 extraout_A_03;
  undefined1 extraout_A_04;
  ushort uVar6;
  byte bVar12;
  undefined2 uVar7;
  short sVar8;
  byte bVar13;
  char cVar14;
  ushort uVar9;
  undefined2 uVar10;
  undefined1 uVar15;
  short sVar11;
  byte *pbVar16;
  ushort uVar17;
  
  bVar12 = DAT_08bc;
  DAT_08bc = bVar12 | 0x40;
  uVar6 = lookup_u8_uniform_axis(param_1,&UNK_4234);
  DAT_095e = (uVar6 >> 8) << 3;
  cVar14 = DAT_0d54;
  if (((cVar14 != -0x80) && (bVar12 = DAT_08a0, (~bVar12 & 4) != 0)) &&
     (bVar12 = DAT_08b2, (~bVar12 & 0x80) != 0)) {
    bVar12 = DAT_0bfe;
    if ((bVar12 & 0x80) == 0) {
LAB_751f:
      bVar12 = DAT_08b5;
      DAT_08b5 = bVar12 & 0xfb;
      bVar12 = DAT_08b5;
      DAT_08b5 = bVar12 & 0xfd;
    }
    else {
      uVar17 = DAT_0c9c;
      uVar9 = DAT_0c9a;
      uVar6 = uVar17 - uVar9;
      if (uVar17 < uVar9) {
        uVar6 = CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
      }
      if (DAT_4e42 < uVar6) {
        bVar12 = DAT_08b5;
        if ((~bVar12 & 2) == 0) {
          bVar12 = DAT_0b4c;
          bVar13 = DAT_0d8a;
          if (bVar13 < bVar12) {
            bVar12 = DAT_08af;
            if ((bVar12 & 0x10) != 0) {
              bVar12 = DAT_08af;
              DAT_08af = bVar12 & 0xef;
              bVar12 = DAT_0bd2;
              DAT_0bd2 = bVar12 | 0x80;
            }
            bVar12 = DAT_0bab;
            DAT_0bab = bVar12 & 0xef;
          }
        }
        else {
          bVar12 = DAT_08b5;
          DAT_08b5 = bVar12 | 2;
          bVar12 = DAT_08b5;
          DAT_08b5 = bVar12 & 0xfb;
        }
      }
      else {
        bVar12 = DAT_0881;
        if (((((~bVar12 & 0x10) == 0) || (bVar12 = DAT_0900._0_1_, DAT_4e40 < bVar12)) ||
            ((bVar12 = DAT_08e8._0_1_, DAT_4e41 < bVar12 ||
             ((bVar12 = DAT_0bab, (~bVar12 & 0x20) == 0 || (bVar12 = DAT_0bab, (~bVar12 & 8) == 0)))
             ))) || (bVar12 = DAT_08af, (~bVar12 & 4) == 0)) goto LAB_751f;
        bVar12 = DAT_08b5;
        if ((bVar12 & 4) == 0) {
          bVar12 = DAT_08b5;
          DAT_08b5 = bVar12 | 4;
          bVar12 = DAT_08b5;
          DAT_08b5 = bVar12 & 0xfd;
          bVar12 = DAT_0bab;
          DAT_0bab = bVar12 | 0x10;
        }
        else {
          bVar12 = DAT_0b3f;
          if ((DAT_4e3e < bVar12) && (bVar12 = DAT_08af, (~bVar12 & 0x10) != 0)) {
            bVar12 = DAT_08af;
            DAT_08af = bVar12 | 0x10;
            bVar12 = DAT_0bd2;
            DAT_0bd2 = bVar12 | 0x80;
            bVar12 = DAT_08b8;
            if ((~bVar12 & 0x10) != 0) {
              bVar12 = DAT_08b8;
              DAT_08b8 = bVar12 | 0x10;
              bVar12 = DAT_0bd2;
              DAT_0bd2 = bVar12 | 8;
            }
          }
        }
      }
    }
  }
  uVar6 = DAT_0a44;
  if (DAT_4bca < uVar6) {
    if (DAT_4bc8 <= uVar6) {
      bVar12 = DAT_088c;
      DAT_088c = bVar12 & 0xf7;
    }
  }
  else {
    bVar12 = DAT_088c;
    DAT_088c = bVar12 | 8;
  }
  if (DAT_4bd2 < uVar6) {
    if (DAT_4bd0 <= uVar6) {
      bVar12 = DAT_088c;
      DAT_088c = bVar12 & 0xfb;
    }
  }
  else {
    bVar12 = DAT_088c;
    DAT_088c = bVar12 | 4;
  }
  if (DAT_4bce < uVar6) {
    if (DAT_4bcc <= uVar6) {
      bVar12 = DAT_088c;
      DAT_088c = bVar12 & 0xfd;
    }
  }
  else {
    bVar12 = DAT_088c;
    DAT_088c = bVar12 | 2;
  }
  bVar12 = DAT_08af;
  if (((~bVar12 & 8) != 0) && (bVar12 = DAT_08af, (~bVar12 & 4) != 0)) {
    bVar12 = DAT_0886;
    if ((~bVar12 & 0x10) == 0) {
      bVar12 = DAT_0b19;
      if (DAT_3492 <= bVar12) {
        bVar12 = DAT_0886;
        if (((bVar12 & 0x40) != 0) && (bVar12 = DAT_0886, (bVar12 & 0x10) != 0)) {
          bVar12 = DAT_088a;
          DAT_088a = bVar12 | 0x20;
          bVar12 = DAT_088a;
          DAT_088a = bVar12 | 2;
        }
        bVar12 = DAT_0886;
        DAT_0886 = bVar12 & 0xef;
      }
    }
    else {
      bVar12 = DAT_0b18;
      if (DAT_3491 <= bVar12) {
        bVar12 = DAT_0886;
        DAT_0886 = bVar12 | 0x10;
      }
    }
  }
  bVar12 = DAT_08af;
  if (((~bVar12 & 0x20) == 0) || (bVar12 = DAT_08af, (~bVar12 & 0x10) == 0)) {
LAB_7659:
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xf7;
  }
  else {
    bVar12 = DAT_08af;
    if (((~bVar12 & 8) == 0) || (bVar12 = DAT_08af, (~bVar12 & 4) == 0)) {
LAB_761e:
      bVar12 = DAT_0c90._0_1_;
      if (DAT_3490 < bVar12) {
        if ((DAT_348f <= bVar12) && (bVar12 = DAT_0886, (bVar12 & 8) != 0)) {
          bVar12 = DAT_0886;
          if ((bVar12 & 0x40) != 0) {
            bVar12 = DAT_088a;
            DAT_088a = bVar12 | 0x40;
            bVar12 = DAT_088a;
            DAT_088a = bVar12 | 4;
          }
          goto LAB_7659;
        }
      }
      else {
        bVar12 = DAT_0886;
        DAT_0886 = bVar12 | 8;
      }
    }
    else {
      bVar12 = DAT_08ec;
      bVar13 = DAT_0a06;
      if (bVar12 < bVar13) goto LAB_761e;
      bVar12 = DAT_0886;
      if ((bVar12 & 8) != 0) {
        bVar12 = DAT_0886;
        if ((bVar12 & 0x40) != 0) {
          bVar12 = DAT_088a;
          DAT_088a = bVar12 | 0x20;
          bVar12 = DAT_088a;
          DAT_088a = bVar12 | 2;
        }
        goto LAB_7659;
      }
    }
  }
  bVar12 = DAT_08f4;
  if (((DAT_348a < bVar12) && (bVar12 = DAT_0afa, DAT_3489 < bVar12)) &&
     (bVar12 = DAT_088d, (bVar12 & 4) != 0)) {
    bVar13 = DAT_0900._0_1_;
    bVar12 = DAT_0886;
    if ((~bVar12 & 0x40) == 0) {
      if (DAT_348d <= bVar13) goto LAB_7697;
      bVar12 = DAT_0886;
      if ((bVar12 & 0x40) == 0) goto LAB_777d;
      bVar12 = DAT_088a;
      DAT_088a = bVar12 | 0x80;
      bVar12 = DAT_088a;
      DAT_088a = bVar12 | 8;
LAB_76fd:
      cVar14 = DAT_097a;
      if ((cVar14 == '\0') &&
         ((((bVar12 = DAT_088a, uVar15 = DAT_3481, uVar4 = DAT_3484, (~bVar12 & 0x80) == 0 ||
            (bVar12 = DAT_088a, (~bVar12 & 0x40) == 0)) ||
           (bVar12 = DAT_088a, uVar15 = DAT_3482, uVar4 = DAT_3485, (~bVar12 & 0x20) == 0)) ||
          (bVar12 = DAT_088a, uVar15 = DAT_3483, uVar4 = DAT_3486, (~bVar12 & 0x10) == 0)))) {
        DAT_097a = uVar15;
        DAT_0a04 = uVar4;
      }
      cVar14 = DAT_0a86;
      if ((cVar14 == -0x80) &&
         (((bVar12 = DAT_088a, bVar13 = DAT_4b09, uVar15 = DAT_4b0c, (~bVar12 & 8) == 0 ||
           ((DAT_4b08 != '\0' &&
            (((bVar12 = DAT_088a, (~bVar12 & 4) == 0 ||
              (bVar12 = DAT_088a, bVar13 = DAT_4b0a, uVar15 = DAT_4b0d, (~bVar12 & 2) == 0)) ||
             (bVar12 = DAT_088a, bVar13 = DAT_4b0b, uVar15 = DAT_4b0e, (~bVar12 & 1) == 0)))))) &&
          (DAT_0a86 = bVar13, bVar13 < 0x80)))) {
        DAT_0a87 = uVar15;
      }
      goto LAB_777a;
    }
    if (bVar13 <= DAT_348e) goto LAB_777d;
LAB_7697:
    bVar12 = DAT_0886;
    if (((((bVar12 & 0x10) == 0) || (bVar12 = DAT_08af, (~bVar12 & 8) == 0)) ||
        (bVar12 = DAT_08af, (~bVar12 & 4) == 0)) &&
       (((bVar12 = DAT_08af, (~bVar12 & 0x20) == 0 || (bVar12 = DAT_08af, (~bVar12 & 0x10) == 0)) ||
        (bVar12 = DAT_0886, (bVar12 & 8) == 0)))) {
      bVar12 = DAT_0886;
      if ((bVar12 & 0x40) != 0) goto LAB_76fd;
      goto LAB_777d;
    }
    bVar12 = DAT_0b16;
    if (bVar12 <= DAT_34a6) goto LAB_7785;
    bVar12 = DAT_0b17;
    if ((bVar12 < DAT_348c) ||
       ((cVar14 = DAT_0d87, cVar14 == '\t' && (bVar12 = DAT_0896._0_1_, (bVar12 & 0x10) == 0)))) {
      bVar12 = DAT_0886;
      if ((bVar12 & 0x40) != 0) {
        bVar12 = DAT_088a;
        DAT_088a = bVar12 | 0x10;
        bVar12 = DAT_088a;
        DAT_088a = bVar12 | 1;
        goto LAB_76fd;
      }
      goto LAB_777d;
    }
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 | 0x40;
    DAT_097a = 0;
    DAT_0a04 = 0;
  }
  else {
    bVar12 = DAT_0886;
    if ((bVar12 & 0x40) == 0) goto LAB_777d;
LAB_777a:
    DAT_0b16 = 0;
LAB_777d:
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xef;
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xf7;
LAB_7785:
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xbf;
    DAT_088a = 0;
    bVar12 = DAT_0900._0_1_;
    if (((bVar12 < DAT_3488) || (bVar12 = DAT_08f4, bVar12 <= DAT_348a)) ||
       (bVar12 = DAT_0896._0_1_, (~bVar12 & 0x10) != 0)) {
      DAT_097a = 0x80;
    }
  }
  bVar12 = DAT_0a2e._0_1_;
  bVar13 = DAT_0d7c;
  if ((bVar13 <= bVar12) || (bVar12 = DAT_0900._0_1_, bVar12 < DAT_4b11)) {
    DAT_0a86 = 0x80;
  }
  bVar12 = DAT_08b1;
  if ((~bVar12 & 8) == 0) {
    uVar6 = DAT_0a44;
    if (DAT_34aa < uVar6) {
      if (DAT_34a8 < uVar6) {
        bVar12 = DAT_0886;
        DAT_0886 = bVar12 & 0xfb;
      }
    }
    else {
      bVar12 = DAT_0886;
      DAT_0886 = bVar12 | 4;
    }
    if (DAT_34ae < uVar6) {
      if (DAT_34ac < uVar6) {
        bVar12 = DAT_0886;
        DAT_0886 = bVar12 & 0xfd;
      }
    }
    else {
      bVar12 = DAT_0886;
      DAT_0886 = bVar12 | 2;
    }
  }
  else {
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xfb;
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xfd;
  }
  uVar9 = DAT_08ce;
  uVar17 = DAT_08e8;
  uVar6 = uVar9 - uVar17;
  if (uVar9 < uVar17) {
    uVar6 = scale_u16_by_u8(CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),
                                     -(char)uVar6),&UNK_1841);
    uVar6 = CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
  }
  else {
    uVar6 = scale_u16_by_u8(uVar6,&UNK_1841);
  }
  sVar8 = DAT_08e8;
  DAT_08e8 = uVar6 + sVar8;
  bVar12 = DAT_0b03;
  if (bVar12 < DAT_19d8) {
    uVar7 = DAT_08ce;
    DAT_08e8 = uVar7;
  }
  bVar12 = DAT_0afe;
  if (bVar12 < 100) {
    uVar7 = DAT_0c8c;
    DAT_08f0 = uVar7;
  }
  else {
    cVar14 = DAT_0d87;
    if ((cVar14 == '\t') && (bVar12 = DAT_0896._0_1_, (bVar12 & 0x10) == 0)) {
      pbVar16 = &UNK_3343;
    }
    else {
      pbVar16 = &UNK_3342;
    }
    uVar17 = DAT_0c8c;
    uVar9 = DAT_08f0;
    uVar6 = uVar17 - uVar9;
    if (uVar17 < uVar9) {
      uVar6 = scale_u16_by_u8(CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),
                                       -(char)uVar6),pbVar16);
      uVar6 = CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
    }
    else {
      uVar6 = scale_u16_by_u8(uVar6,pbVar16);
    }
    sVar8 = DAT_08f0;
    DAT_08f0 = uVar6 + sVar8;
  }
  bVar2 = DAT_0c8c._0_1_;
  bVar13 = DAT_08f0._0_1_;
  bVar12 = bVar2 - bVar13;
  if (bVar2 < bVar13) {
    bVar12 = -bVar12;
    DAT_0dde._0_1_ = 0x80;
  }
  else {
    DAT_0dde._0_1_ = 0;
  }
  if (0x7f < bVar12) {
    bVar12 = 0x7f;
  }
  DAT_0dde._1_1_ = bVar12;
  uVar6 = DAT_0dde;
  if ((uVar6 & 0x8000) == 0) {
    cVar14 = (char)uVar6;
  }
  else {
    cVar14 = DAT_0dde._1_1_;
    cVar14 = -cVar14;
  }
  DAT_0988 = cVar14 + -0x80;
  bVar12 = DAT_0dde._1_1_;
  if (DAT_3344 < bVar12) {
    DAT_0989 = cVar14 + -0x80;
  }
  else {
    DAT_0989 = 0x80;
    DAT_0dde._1_1_ = 0;
  }
  uVar7 = DAT_0900;
  uVar7 = FUN_cc7b();
  RAM0de8 = uVar7;
  cVar3 = DAT_0d87;
  cVar14 = DAT_0989;
  if (cVar14 < '\0') {
    if ((cVar3 == '\t') && (bVar12 = DAT_0896._0_1_, (~bVar12 & 0x10) != 0)) {
      pbVar16 = &UNK_33f4;
    }
    else {
      bVar12 = DAT_0898;
      if (DAT_33f5 < bVar12) {
        pbVar16 = &UNK_3422;
      }
      else {
        pbVar16 = &UNK_340b;
      }
    }
  }
  else if ((cVar3 == '\t') && (bVar12 = DAT_0896._0_1_, (~bVar12 & 0x10) != 0)) {
    pbVar16 = &UNK_3439;
  }
  else {
    bVar12 = DAT_0898;
    if (DAT_33f6 < bVar12) {
      pbVar16 = &UNK_3467;
    }
    else {
      pbVar16 = &UNK_3450;
    }
  }
  uVar6 = RAM0de8;
  uVar6 = interp_u8_q8_index(uVar6,pbVar16);
  extraout_A = (byte)(uVar6 >> 8);
  DAT_098e = extraout_A;
  bVar12 = DAT_0dde._1_1_;
  RAM0ddf = (ushort)extraout_A * (ushort)bVar12;
  bVar12 = DAT_0dde._0_1_;
  if ((bVar12 & 0x80) == 0) {
    uVar6 = RAM0ddf;
    sVar8 = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      sVar8 = -1;
    }
  }
  else {
    uVar6 = RAM0ddf;
    sVar8 = -0x8000 - uVar6;
    if (0x8000 < uVar6) {
      sVar8 = 0;
    }
  }
  DAT_098a = sVar8;
  cVar14 = DAT_0d87;
  uVar15 = DAT_333a;
  if ((cVar14 == '\t') && (bVar12 = DAT_0896._0_1_, (bVar12 & 0x10) == 0)) {
    uVar15 = DAT_3339;
  }
  DAT_0de0._1_1_ = uVar15;
  uVar9 = DAT_08ce;
  uVar17 = DAT_08ea;
  uVar6 = uVar9 - uVar17;
  if (uVar9 < uVar17) {
    uVar6 = scale_u16_by_u8(CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),
                                     -(char)uVar6),(byte *)((short)&DAT_0de0 + 1));
    uVar6 = CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
  }
  else {
    uVar6 = scale_u16_by_u8(uVar6,(byte *)((short)&DAT_0de0 + 1));
  }
  sVar8 = DAT_08ea;
  DAT_08ea = uVar6 + sVar8;
  bVar12 = DAT_0b02;
  if ((byte)(DAT_333f - 1U) < bVar12) {
    bVar12 = DAT_0885;
    DAT_0885 = bVar12 & 0xfd;
    bVar12 = DAT_08e8._0_1_;
    if (bVar12 <= DAT_333b) {
      bVar12 = DAT_08ed;
      if (DAT_333c <= bVar12) {
        DAT_0b02 = 0;
        DAT_0b04 = 0;
        goto LAB_79b5;
      }
      goto LAB_79b9;
    }
LAB_79ca:
    bVar12 = DAT_08ea._0_1_;
  }
  else {
    bVar12 = DAT_0b04;
    if (DAT_333d <= (byte)((bVar12 + 1) - (0xfe < bVar12))) goto LAB_79ca;
    bVar12 = DAT_0b04;
    DAT_0b04 = (bVar12 + 1) - (0xfe < bVar12);
LAB_79b5:
    bVar12 = DAT_0885;
    DAT_0885 = bVar12 | 2;
LAB_79b9:
    bVar12 = DAT_0885;
    if ((bVar12 & 2) == 0) goto LAB_79ca;
    bVar13 = DAT_08ea._0_1_;
    bVar12 = bVar13 - DAT_333e;
    if (bVar13 < DAT_333e) {
      bVar12 = 0;
    }
  }
  bVar2 = DAT_08e8._0_1_;
  bVar13 = bVar2 - bVar12;
  if (bVar2 < bVar12) {
    bVar13 = -bVar13;
    DAT_0de0._1_1_ = 0x80;
  }
  else {
    DAT_0de0._1_1_ = 0;
  }
  if (0x7f < bVar13) {
    bVar13 = 0x7f;
  }
  DAT_0de2 = bVar13;
  uVar6 = RAM0de1;
  if ((uVar6 & 0x8000) == 0) {
    cVar14 = (char)uVar6;
  }
  else {
    cVar14 = DAT_0de2;
    cVar14 = -cVar14;
  }
  DAT_0984 = cVar14 + -0x80;
  bVar12 = DAT_08e8._0_1_;
  if ((DAT_3340 <= bVar12) || (bVar12 = DAT_0afe, bVar12 < 100)) {
    DAT_0de2 = 0;
    DAT_0984 = 0x80;
  }
  bVar12 = DAT_0de2;
  if (DAT_3341 < bVar12) {
    uVar15 = DAT_0984;
    DAT_0985 = uVar15;
  }
  else {
    DAT_0985 = 0x80;
    DAT_0de2 = 0;
  }
  uVar7 = DAT_0900;
  uVar7 = FUN_cc7b();
  RAM0de8 = uVar7;
  cVar3 = DAT_0d87;
  cVar14 = DAT_0985;
  if (cVar14 < '\0') {
    if ((cVar3 == '\t') && (bVar12 = DAT_0896._0_1_, (~bVar12 & 0x10) != 0)) {
      pbVar16 = &UNK_3368;
    }
    else {
      bVar12 = DAT_0898;
      if (DAT_3369 < bVar12) {
        pbVar16 = &UNK_3396;
      }
      else {
        pbVar16 = &UNK_337f;
      }
    }
  }
  else if ((cVar3 == '\t') && (bVar12 = DAT_0896._0_1_, (~bVar12 & 0x10) != 0)) {
    pbVar16 = &UNK_33ad;
  }
  else {
    bVar12 = DAT_0898;
    if (DAT_336a < bVar12) {
      pbVar16 = &UNK_33db;
    }
    else {
      pbVar16 = &UNK_33c4;
    }
  }
  uVar6 = RAM0de8;
  uVar6 = interp_u8_q8_index(uVar6,pbVar16);
  extraout_A_00 = (byte)(uVar6 >> 8);
  DAT_098d = extraout_A_00;
  bVar12 = DAT_0de2;
  RAM0de2 = (ushort)extraout_A_00 * (ushort)bVar12;
  bVar12 = DAT_0de0._1_1_;
  if ((bVar12 & 0x80) == 0) {
    uVar6 = RAM0de2;
    sVar8 = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      sVar8 = -1;
    }
  }
  else {
    uVar6 = RAM0de2;
    sVar8 = -0x8000 - uVar6;
    if (0x8000 < uVar6) {
      sVar8 = 0;
    }
  }
  DAT_0986 = sVar8;
  bVar12 = DAT_0de0._1_1_;
  if ((bVar12 & 0x80) == 0) {
    bVar12 = DAT_0dde._0_1_;
    if ((bVar12 & 0x80) == 0) {
      sVar8 = RAM0ddf;
      sVar11 = RAM0de2;
      sVar8 = sVar8 + sVar11;
      if (0x7f < (byte)((ushort)sVar8 >> 8)) {
        sVar8 = 0x7fff;
      }
    }
    else {
      uVar9 = RAM0de2;
      uVar6 = RAM0ddf;
      sVar8 = uVar9 - uVar6;
      if (uVar9 < uVar6) {
        sVar8 = CONCAT11((~(byte)((ushort)sVar8 >> 8) + 1) - ((char)-(char)sVar8 != '\0'),
                         -(char)sVar8);
        goto LAB_7b07;
      }
    }
LAB_7aff:
    DAT_0de5 = sVar8;
    DAT_0de4 = 0;
    uVar6 = DAT_0de5;
    uVar6 = scale_u16_by_u8(uVar6,&DAT_098f);
    sVar8 = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      sVar8 = -1;
    }
  }
  else {
    bVar12 = DAT_0dde._0_1_;
    if ((bVar12 & 0x80) == 0) {
      uVar6 = RAM0ddf;
      uVar9 = RAM0de2;
      sVar8 = uVar6 - uVar9;
      if (uVar9 <= uVar6) goto LAB_7aff;
      sVar8 = CONCAT11((~(byte)((ushort)sVar8 >> 8) + 1) - ((char)-(char)sVar8 != '\0'),-(char)sVar8
                      );
    }
    else {
      sVar8 = RAM0ddf;
      sVar11 = RAM0de2;
      sVar8 = sVar8 + sVar11;
      if (0x7f < (byte)((ushort)sVar8 >> 8)) {
        sVar8 = -0x8000;
      }
    }
LAB_7b07:
    DAT_0de5 = sVar8;
    DAT_0de4 = 0x80;
    uVar6 = DAT_0de5;
    uVar6 = scale_u16_by_u8(uVar6,&DAT_0990);
    if (7 < (byte)(uVar6 >> 8)) {
      uVar6 = 0x800;
    }
    DAT_0de7 = uVar6;
    sVar8 = DAT_0de7;
    sVar8 = -0x8000 - sVar8;
  }
  DAT_0982 = sVar8;
  bVar12 = DAT_0de4;
  if ((bVar12 & 0x80) == 0) {
    sVar8 = DAT_0de5;
    uVar15 = (undefined1)((ushort)(sVar8 + -0x8000) >> 8);
  }
  else {
    sVar8 = DAT_0de5;
    uVar15 = (undefined1)((ushort)(-0x8000 - sVar8) >> 8);
  }
  DAT_098c = uVar15;
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x18fa;
  uVar6 = axis_index_u16_ascending(0xfa);
  DAT_0908 = uVar6;
  uVar7 = DAT_08e8;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x18e6;
  uVar6 = axis_index_u16_ascending(0xe6);
  DAT_090e = uVar6;
  uVar7 = DAT_0908;
  DAT_0de0 = uVar7;
  uVar7 = DAT_090e;
  DAT_0dde = uVar7;
  uVar6 = bilinear_modulo24_grid(&UNK_1911,'\r');
  extraout_A_01 = (byte)(uVar6 >> 8);
  if (extraout_A_01 < 0x17) {
    bVar12 = extraout_A_01;
    if (extraout_A_01 == 0xb) {
      bVar12 = 10;
    }
  }
  else {
    bVar12 = 0x16;
  }
  DAT_0a1b = bVar12;
  bVar12 = DAT_0881;
  if ((~bVar12 & 0x10) == 0) {
    uVar6 = DAT_08f2;
    uVar6 = lookup_u8_uniform_u16_axis(uVar6,&UNK_19c6);
    DAT_0938 = (char)(uVar6 >> 8);
    uVar6 = lookup_u8_uniform_axis((uchar)uVar6,&UNK_1996);
    DAT_0934 = uVar6;
    bVar12 = DAT_08af;
    if (((~bVar12 & 8) == 0) || (bVar12 = DAT_08af, (~bVar12 & 4) == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = DAT_08ce;
    }
    uVar6 = lookup_u8_uniform_u16_axis(uVar6,&UNK_19ba);
    DAT_0937 = (char)(uVar6 >> 8);
    uVar6 = DAT_0900;
    uVar6 = lookup_u8_uniform_u16_axis(uVar6,&UNK_19a8);
    extraout_A_02 = (byte)(uVar6 >> 8);
    DAT_0936 = extraout_A_02;
    bVar12 = DAT_0937;
    bVar13 = DAT_0979;
    uVar6 = multiply_u16_shift8_saturate(bVar13 + 0x180,(ushort)extraout_A_02 * (ushort)bVar12);
    bVar12 = DAT_0938;
    uVar9 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6);
    uVar6 = DAT_0934;
    uVar17 = (ushort)((uint)uVar9 * (uint)uVar6 >> 0x10);
    if (uVar17 < 0x4000) {
      sVar8 = (ushort)(byte)((byte)((uint)uVar9 * (uint)uVar6 >> 8) >> 6) + uVar17 * 4;
    }
    else {
      sVar8 = -1;
    }
    DAT_0932 = sVar8;
    uVar7 = DAT_08ce;
    DAT_08e8 = uVar7;
    DAT_08ea = uVar7;
    uVar9 = DAT_095e;
    uVar6 = DAT_0932;
    sVar8 = uVar9 + uVar6;
    if (CARRY2(uVar9,uVar6)) {
      sVar8 = -1;
    }
    DAT_092a = sVar8;
    DAT_092e = sVar8;
    FUN_864e();
    bVar12 = DAT_0cec;
    uVar6 = DAT_0932;
    iVar1 = (uint)uVar6 * (uint)bVar12 * 2;
    uVar6 = (ushort)iVar1;
    bVar12 = (byte)((uint)iVar1 >> 0x18);
    cVar14 = bVar12 + (0xff7f < uVar6);
    if (CONCAT11(bVar12 + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
      DAT_0dde._0_1_ = cVar14;
      RAM0ddf = uVar6 + 0x80;
      uVar9 = DAT_0dde;
      uVar6 = DAT_095e;
      sVar8 = uVar9 + uVar6;
      if (CARRY2(uVar9,uVar6)) goto LAB_7c69;
    }
    else {
LAB_7c69:
      sVar8 = -1;
    }
    DAT_092c = sVar8;
    DAT_0930 = sVar8;
    bVar12 = DAT_0a16;
    if ((~bVar12 & 2) == 0) {
      bVar12 = DAT_0881;
      DAT_0881 = bVar12 | 0x40;
      bVar12 = DAT_0a16;
      DAT_0a16 = bVar12 & 0xfd;
    }
    else {
      bVar12 = DAT_0881;
      DAT_0881 = bVar12 | 0x80;
      bVar12 = DAT_0a16;
      DAT_0a16 = bVar12 & 0xfe;
    }
    bVar12 = DAT_088b;
    if ((~bVar12 & 0x80) != 0) {
      DAT_0a26 = 0;
      bVar12 = DAT_18e0;
      if (0x16 < DAT_18e0) {
        bVar12 = 0x16;
      }
      if (bVar12 < 0xc) {
        if (bVar12 == 0xb) {
          bVar12 = 10;
        }
      }
      else {
        bVar12 = bVar12 - 0xc;
      }
      DAT_0a1e = bVar12;
      DAT_0a28 = 0;
      uVar15 = DAT_0a1e;
      DAT_0a1f = uVar15;
    }
    bVar12 = DAT_0a16;
    DAT_0a16 = bVar12 & 0xf7;
    goto LAB_8578;
  }
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x1b0c;
  uVar6 = axis_index_u16_ascending('\f');
  DAT_090a = uVar6;
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x374e;
  uVar6 = axis_index_u16_ascending('N');
  DAT_0b8c = uVar6;
  bVar12 = DAT_0a16;
  if ((~bVar12 & 2) == 0) {
    bVar12 = DAT_0b80;
    if ((~bVar12 & 1) == 0) {
      uVar7 = DAT_0c90;
      DAT_0ba2 = uVar7;
      DAT_0ba4 = 0x3712;
      uVar6 = axis_index_u16_ascending('\x12');
      DAT_0b8e = uVar6;
      sVar8 = DAT_0b8e;
      DAT_0e06 = (char)((ushort)sVar8 >> 8);
      DAT_0e08 = sVar8 << 8;
      sVar8 = DAT_0b8c;
      uVar5 = (uchar)((ushort)sVar8 >> 8);
      DAT_0e0a = sVar8 << 8;
      uVar6 = bilinear_u16_grid(&UNK_3793,uVar5,uVar5);
    }
    else {
      uVar7 = DAT_0c90;
      DAT_0ba2 = uVar7;
      DAT_0ba4 = 0x1ad0;
      uVar6 = axis_index_u16_ascending(0xd0);
      DAT_0910 = uVar6;
      sVar8 = DAT_0910;
      DAT_0e06 = (char)((ushort)sVar8 >> 8);
      DAT_0e08 = sVar8 << 8;
      sVar8 = DAT_090a;
      uVar5 = (uchar)((ushort)sVar8 >> 8);
      DAT_0e0a = sVar8 << 8;
      uVar6 = bilinear_u16_grid(&UNK_1b51,uVar5,uVar5);
    }
    DAT_0954 = uVar6;
  }
  else {
    bVar12 = DAT_0b80;
    if ((~bVar12 & 1) == 0) {
      uVar7 = DAT_0c90;
      DAT_0ba2 = uVar7;
      DAT_0ba4 = 0x3712;
      uVar6 = axis_index_u16_ascending('\x12');
      DAT_0b8e = uVar6;
      sVar8 = DAT_0b8e;
      DAT_0e06 = (char)((ushort)sVar8 >> 8);
      DAT_0e08 = sVar8 << 8;
      sVar8 = DAT_0b8c;
      uVar5 = (uchar)((ushort)sVar8 >> 8);
      DAT_0e0a = sVar8 << 8;
      uVar6 = bilinear_u16_grid(&UNK_3793,uVar5,uVar5);
    }
    else {
      uVar7 = DAT_0c90;
      DAT_0ba2 = uVar7;
      DAT_0ba4 = 0x1ad0;
      uVar6 = axis_index_u16_ascending(0xd0);
      DAT_0910 = uVar6;
      sVar8 = DAT_0910;
      DAT_0e06 = (char)((ushort)sVar8 >> 8);
      DAT_0e08 = sVar8 << 8;
      sVar8 = DAT_090a;
      uVar5 = (uchar)((ushort)sVar8 >> 8);
      DAT_0e0a = sVar8 << 8;
      uVar6 = bilinear_u16_grid(&UNK_1b51,uVar5,uVar5);
    }
    DAT_0952 = uVar6;
  }
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x262e;
  uVar6 = axis_index_u16_ascending('.');
  DAT_090c = uVar6;
  uVar7 = DAT_08e8;
  bVar12 = DAT_08af;
  if (((((~bVar12 & 8) == 0) || (bVar12 = DAT_08af, uVar10 = uVar7, (~bVar12 & 4) == 0)) &&
      (bVar12 = DAT_08af, uVar10 = DAT_4e62, (~bVar12 & 0x20) != 0)) &&
     (bVar12 = DAT_08af, (~bVar12 & 0x10) != 0)) {
    uVar10 = uVar7;
  }
  DAT_0ba2 = uVar10;
  DAT_0ba4 = 0x25f2;
  uVar6 = axis_index_u16_ascending(0xf2);
  DAT_0912 = uVar6;
  bVar12 = DAT_0a16;
  if ((~bVar12 & 2) == 0) {
    sVar8 = DAT_0912;
    DAT_0e06 = (char)((ushort)sVar8 >> 8);
    DAT_0e08 = sVar8 << 8;
    sVar8 = DAT_090c;
    uVar5 = (uchar)((ushort)sVar8 >> 8);
    DAT_0e0a = sVar8 << 8;
    uVar6 = bilinear_u16_grid(&UNK_2673,uVar5,uVar5);
    DAT_0958 = uVar6;
  }
  else {
    sVar8 = DAT_0912;
    DAT_0e06 = (char)((ushort)sVar8 >> 8);
    DAT_0e08 = sVar8 << 8;
    sVar8 = DAT_090c;
    uVar5 = (uchar)((ushort)sVar8 >> 8);
    DAT_0e0a = sVar8 << 8;
    uVar6 = bilinear_u16_grid(&UNK_2673,uVar5,uVar5);
    DAT_0956 = uVar6;
  }
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x311a;
  uVar6 = axis_index_u16_ascending('\x1a');
  DAT_0cd6 = uVar6;
  uVar7 = DAT_0c90;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x3116;
  uVar6 = axis_index_u16_ascending('\x16');
  DAT_0cd8 = uVar6;
  uVar7 = DAT_0cd6;
  DAT_0dde = uVar7;
  uVar7 = DAT_0cd8;
  DAT_0de0 = uVar7;
  uVar6 = bilinear_u8_grid(&UNK_311b,'\x02');
  DAT_0cd2 = (char)(uVar6 + 0x80 >> 8);
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x3126;
  uVar6 = axis_index_u16_ascending('&');
  DAT_0cda = uVar6;
  uVar7 = DAT_08e8;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x3122;
  uVar6 = axis_index_u16_ascending('\"');
  DAT_0cdc = uVar6;
  uVar7 = DAT_0cda;
  DAT_0dde = uVar7;
  uVar7 = DAT_0cdc;
  DAT_0de0 = uVar7;
  uVar6 = bilinear_u8_grid(&UNK_3127,'\x02');
  DAT_0cd3 = (char)(uVar6 + 0x80 >> 8);
  if (DAT_3114 == -0x80) {
    bVar12 = DAT_0cd2;
  }
  else {
    bVar12 = DAT_0cd3;
  }
  DAT_0cd1 = bVar12;
  bVar2 = DAT_0cd4;
  bVar13 = bVar2 + 0x80;
  if (bVar2 < 0x80) {
    cVar14 = bVar12 + bVar13;
    if (!CARRY1(bVar12,bVar13)) {
      cVar14 = '\0';
    }
  }
  else {
    cVar14 = bVar12 + bVar13;
    if (CARRY1(bVar12,bVar13)) {
      cVar14 = -1;
    }
  }
  DAT_0cd0 = cVar14;
  uVar15 = DAT_0cd0;
  DAT_0ba2._0_1_ = uVar15;
  DAT_0ba4 = 0x321a;
  uVar6 = axis_index_u8_ascending('\x1a');
  DAT_0cde = uVar6;
  uVar7 = DAT_0c90;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x3216;
  uVar6 = axis_index_u16_ascending('\x16');
  DAT_0ce0 = uVar6;
  uVar7 = DAT_0cde;
  DAT_0dde = uVar7;
  uVar7 = DAT_0ce0;
  DAT_0de0 = uVar7;
  uVar6 = bilinear_u8_grid(&UNK_3219,'\x02');
  DAT_0cd5 = (char)(uVar6 + 0x80 >> 8);
  bVar12 = DAT_0cd0;
  if (bVar12 == 0) {
LAB_7fa5:
    uVar9 = 0x100;
  }
  else {
    bVar13 = DAT_0cd5;
    if (bVar13 == 0) goto LAB_7fa5;
    uVar6 = (ushort)bVar13 * 2 * (bVar12 + 0x80);
    uVar9 = (ushort)(0xff7f < uVar6);
    DAT_0dde = uVar9;
    DAT_0de0._0_1_ = (char)(uVar6 + 0x80 >> 8);
    uVar6 = RAM0ddf;
    if ((uVar6 == 0) || (DAT_1ace == 0)) goto LAB_7fa5;
    uVar7 = FUN_c407(DAT_1ace + 0x80,uVar9);
    if ((char)((ushort)uVar7 >> 8) == '\0') {
      DAT_0dde._0_1_ = (char)uVar7;
      bVar12 = DAT_0dde._0_1_;
      uVar9 = CONCAT11(bVar12 + (0xff7f < uVar6),(char)(uVar6 + 0x80 >> 8));
      if (CARRY1(bVar12,0xff7f < uVar6)) goto LAB_7fa0;
    }
    else {
LAB_7fa0:
      uVar9 = 0xffff;
    }
  }
  DAT_0ce2 = uVar9;
  uVar6 = DAT_0952;
  uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
  DAT_0ce4 = uVar6;
  uVar9 = DAT_0ce2;
  uVar6 = DAT_0954;
  uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
  DAT_0ce6 = uVar6;
  uVar9 = DAT_0ce2;
  uVar6 = DAT_0956;
  uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
  DAT_0ce8 = uVar6;
  uVar9 = DAT_0ce2;
  uVar6 = DAT_0958;
  uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
  DAT_0cea = uVar6;
  uVar6 = DAT_0994;
  bVar13 = (byte)(uVar6 >> 1);
  bVar12 = (byte)(uVar6 >> 9);
  sVar8 = CONCAT11(bVar12 - (bVar13 < DAT_3313),bVar13 - DAT_3313);
  if (bVar12 < (bVar13 < DAT_3313)) {
    sVar8 = 0;
  }
  DAT_0994 = sVar8 << 1;
  uVar6 = DAT_0996;
  bVar13 = (byte)(uVar6 >> 1);
  bVar12 = (byte)(uVar6 >> 9);
  sVar8 = CONCAT11(bVar12 - (bVar13 < DAT_3314),bVar13 - DAT_3314);
  if (bVar12 < (bVar13 < DAT_3314)) {
    sVar8 = 0;
  }
  DAT_0996 = sVar8 << 1;
  uVar6 = DAT_0994;
  if ((ushort)(sVar8 << 1) < uVar6) {
    uVar7 = DAT_0994;
  }
  else {
    uVar7 = DAT_0996;
  }
  DAT_0992 = uVar7;
  uVar6 = DAT_0900;
  uVar6 = lookup_u8_uniform_u16_axis(uVar6,&UNK_34b0);
  DAT_09a0 = (char)(uVar6 >> 8);
  bVar12 = DAT_0a16;
  if ((~bVar12 & 2) == 0) {
    uVar15 = DAT_0a00;
    FUN_8623();
    DAT_095d = extraout_A_04;
  }
  else {
    uVar15 = DAT_09fc;
    FUN_8623();
    DAT_095c = extraout_A_03;
  }
  if (DAT_19de != '\x01') {
    bVar12 = DAT_19d6;
    if (8 < DAT_19d6) {
      bVar12 = 8;
    }
    uVar6 = (ushort)(byte)(bVar12 << 1);
    bVar13 = DAT_08e8._0_1_;
    bVar12 = DAT_08af;
    if (((~bVar12 & 0x20) == 0) || (bVar12 = DAT_08af, (~bVar12 & 0x10) == 0)) {
LAB_81d9:
      bVar12 = DAT_0b03;
      uVar15 = 0xff;
      DAT_0b03 = (bVar12 + 1) - (0xfe < bVar12);
    }
    else {
      bVar12 = DAT_08af;
      if (((~bVar12 & 8) == 0) || (bVar12 = DAT_08af, (~bVar12 & 4) == 0)) {
        bVar12 = DAT_08af;
        if (((~bVar12 & 0x20) == 0) || (bVar12 = DAT_08af, (~bVar12 & 0x10) == 0)) goto LAB_81d9;
        uVar15 = 0;
      }
      else {
        bVar12 = DAT_088d;
        if ((~bVar12 & 4) == 0) {
          if (bVar13 < DAT_19d5) {
            bVar13 = DAT_08e8._0_1_;
            bVar12 = bVar13 + BYTE_ARRAY_c255[uVar6];
            if (CARRY1(bVar13,BYTE_ARRAY_c255[uVar6])) {
              DAT_0dde._1_1_ = bVar12;
              DAT_0dde._0_1_ = 1;
              DAT_0de0._0_1_ = 0;
              DAT_0de0._1_1_ = DAT_19d5;
              sVar8 = DAT_0dde;
              sVar11 = DAT_0de0;
              sVar8 = (ushort)BYTE_ARRAY_c255[uVar6 + 1] * (sVar8 - sVar11 & 0xffU);
              if ((char)((ushort)sVar8 >> 8) != '\0') {
                sVar8 = 0xff;
              }
            }
            else if (bVar12 < DAT_19d5) {
              sVar8 = 0;
            }
            else {
              sVar8 = (ushort)(byte)(bVar12 - DAT_19d5) * (ushort)BYTE_ARRAY_c255[uVar6 + 1];
              if ((char)((ushort)sVar8 >> 8) != '\0') {
                sVar8 = 0xff;
              }
            }
            bVar12 = DAT_0b03;
            uVar15 = (undefined1)sVar8;
            if (DAT_19d8 <= bVar12) goto LAB_81e5;
          }
          goto LAB_81d9;
        }
        uVar15 = 0;
      }
    }
LAB_81e5:
    DAT_0998 = uVar15;
    if (DAT_19de == '\x02') {
      sVar8 = (ushort)DAT_19e1 << 1;
      DAT_0960 = sVar8;
      DAT_0962 = sVar8;
      DAT_0964 = sVar8;
      DAT_0966 = sVar8;
    }
    else if (DAT_19de == '\x04') {
      DAT_0960 = (ushort)DAT_19e2 << 1;
      DAT_0964 = (ushort)DAT_19e2 << 1;
      DAT_0962 = (ushort)DAT_19e3 << 1;
      DAT_0966 = (ushort)DAT_19e3 << 1;
    }
    else {
      bVar12 = DAT_0992._0_1_;
      sVar8 = CONCAT11(0xdf < bVar12,bVar12 + 0x20) << 2;
      bVar12 = DAT_097b;
      bVar13 = (byte)sVar8;
      sVar8 = CONCAT11((char)((ushort)sVar8 >> 8) + CARRY1(bVar13,bVar12),bVar13 + bVar12) * 4 +
              -0x80;
      bVar12 = DAT_0980;
      bVar13 = (byte)sVar8;
      sVar11 = CONCAT11((char)((ushort)sVar8 >> 8) + CARRY1(bVar13,bVar12),bVar13 + bVar12) << 2;
      sVar8 = DAT_0982;
      DAT_0dde = CONCAT11((char)((ushort)sVar11 >> 8) + -0x80,(char)sVar11) + sVar8;
      uVar6 = DAT_097e;
      sVar8 = DAT_0dde;
      DAT_096c = ((uVar6 >> 5) + sVar8) - 0x400 >> 1;
      bVar12 = DAT_0992._0_1_;
      sVar8 = CONCAT11(0xdf < bVar12,bVar12 + 0x20) << 2;
      bVar12 = DAT_097c;
      bVar13 = (byte)sVar8;
      sVar8 = CONCAT11((char)((ushort)sVar8 >> 8) + CARRY1(bVar13,bVar12),bVar13 + bVar12) * 4 +
              -0x80;
      bVar12 = DAT_0980;
      bVar13 = (byte)sVar8;
      sVar11 = CONCAT11((char)((ushort)sVar8 >> 8) + CARRY1(bVar13,bVar12),bVar13 + bVar12) << 2;
      sVar8 = DAT_0982;
      DAT_0dde = CONCAT11((char)((ushort)sVar11 >> 8) + -0x80,(char)sVar11) + sVar8;
      uVar6 = DAT_097e;
      sVar8 = DAT_0dde;
      uVar6 = ((uVar6 >> 5) + sVar8) - 0x400 >> 1;
      DAT_096e = uVar6;
      bVar12 = DAT_0979;
      uVar6 = multiply_u16_shift8_saturate(bVar12 + 0x180,uVar6);
      bVar12 = DAT_097a;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6 >> 1);
      DAT_096a = uVar6;
      uVar6 = DAT_096c;
      bVar12 = DAT_0979;
      uVar6 = multiply_u16_shift8_saturate(bVar12 + 0x180,uVar6);
      bVar12 = DAT_097a;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6 >> 1);
      DAT_0968 = uVar6;
      bVar12 = DAT_0978;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6);
      DAT_0964 = uVar6;
      uVar6 = DAT_096a;
      bVar12 = DAT_0978;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6);
      DAT_0966 = uVar6;
      uVar6 = DAT_0968;
      bVar12 = DAT_0970;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6);
      DAT_0960 = uVar6;
      uVar6 = DAT_096a;
      bVar12 = DAT_0970;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6);
      DAT_0962 = uVar6;
      bVar12 = DAT_097a;
      if (bVar12 == 0x80) {
LAB_830d:
        DAT_0a04 = 0;
        bVar13 = 0x80;
      }
      else if (bVar12 < 0x80) {
        bVar2 = DAT_0a04;
        bVar13 = bVar12 + bVar2;
        if ((CARRY1(bVar12,bVar2)) || (0x7f < bVar13)) goto LAB_830d;
      }
      else {
        bVar2 = DAT_0a04;
        bVar13 = bVar12 - bVar2;
        if ((bVar12 < bVar2) || (bVar13 < 0x80)) goto LAB_830d;
      }
      DAT_097a = bVar13;
      FUN_864e();
    }
    bVar12 = DAT_0a16;
    if ((~bVar12 & 2) != 0) {
      bVar12 = DAT_095c;
      if (bVar12 < 0x80) {
        DAT_0dde = (ushort)(byte)(0x80 - bVar12) << 2;
        uVar9 = DAT_0ce4;
        uVar17 = DAT_0dde;
        uVar6 = uVar9 - uVar17;
        if (uVar9 < uVar17) {
          uVar6 = 0;
        }
      }
      else {
        DAT_0dde = (ushort)(byte)(bVar12 + 0x80) << 2;
        uVar9 = DAT_0ce4;
        uVar17 = DAT_0dde;
        uVar6 = uVar9 + uVar17;
        if (CARRY2(uVar9,uVar17)) {
          uVar6 = 0xffff;
        }
      }
      uVar9 = DAT_0960;
      uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
      DAT_0942 = uVar6;
      bVar12 = DAT_095c;
      if (bVar12 < 0x80) {
        DAT_0dde = (ushort)(byte)(0x80 - bVar12) << 2;
        uVar9 = DAT_0ce8;
        uVar17 = DAT_0dde;
        uVar6 = uVar9 - uVar17;
        if (uVar9 < uVar17) {
          uVar6 = 0;
        }
      }
      else {
        DAT_0dde = (ushort)(byte)(bVar12 + 0x80) << 2;
        uVar9 = DAT_0ce8;
        uVar17 = DAT_0dde;
        uVar6 = uVar9 + uVar17;
        if (CARRY2(uVar9,uVar17)) {
          uVar6 = 0xffff;
        }
      }
      uVar9 = DAT_0964;
      uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
      DAT_0944 = uVar6;
      uVar6 = DAT_0944;
      uVar6 = scale_u16_by_u8(uVar6,&DAT_0998);
      RAM0ddf = uVar6;
      bVar12 = DAT_0998;
      DAT_0dde._0_1_ = ~bVar12;
      uVar6 = DAT_0942;
      uVar6 = scale_u16_by_u8(uVar6,(byte *)&DAT_0dde);
      sVar8 = RAM0ddf;
      uVar6 = uVar6 + sVar8;
      sVar8 = DAT_0ad4;
      if (sVar8 != 0) {
        uVar6 = (ushort)((uint)(ushort)(sVar8 * -0x40) * (uint)uVar6 >> 0x10);
      }
      uVar9 = DAT_19dc;
      if ((uVar6 < DAT_19dc) && (uVar9 = uVar6, uVar6 < DAT_19da)) {
        uVar9 = DAT_19da;
      }
      DAT_0940 = uVar9;
      DAT_093c = uVar9;
      bVar12 = DAT_0ca8;
      if ((~bVar12 & 1) != 0) {
        iVar1 = (uint)DAT_19d4 * 4 * (uint)uVar9;
        uVar6 = (ushort)iVar1;
        bVar12 = (byte)((uint)iVar1 >> 0x18);
        cVar14 = bVar12 + (0xff7f < uVar6);
        if (CONCAT11(bVar12 + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
          DAT_0dde._0_1_ = cVar14;
          RAM0ddf = uVar6 + 0x80;
          uVar9 = DAT_0dde;
        }
        else {
          uVar9 = 0xffff;
        }
      }
      DAT_093e = uVar9;
      uVar6 = DAT_095e;
      sVar8 = uVar9 + uVar6;
      if (CARRY2(uVar9,uVar6)) {
        sVar8 = -1;
      }
      DAT_093a = sVar8;
      DAT_092a = sVar8;
      bVar12 = DAT_0881;
      DAT_0881 = bVar12 | 0x80;
      bVar12 = DAT_0a16;
      DAT_0a16 = bVar12 & 0xfe;
      bVar12 = DAT_0a16;
      if ((~bVar12 & 8) != 0) {
        bVar12 = DAT_0881;
        DAT_0881 = bVar12 & 0xbf;
      }
      goto LAB_8578;
    }
    bVar12 = DAT_095d;
    if (bVar12 < 0x80) {
      DAT_0dde = (ushort)(byte)(0x80 - bVar12) << 2;
      uVar9 = DAT_0ce6;
      uVar17 = DAT_0dde;
      uVar6 = uVar9 - uVar17;
      if (uVar9 < uVar17) {
        uVar6 = 0;
      }
    }
    else {
      DAT_0dde = (ushort)(byte)(bVar12 + 0x80) << 2;
      uVar9 = DAT_0ce6;
      uVar17 = DAT_0dde;
      uVar6 = uVar9 + uVar17;
      if (CARRY2(uVar9,uVar17)) {
        uVar6 = 0xffff;
      }
    }
    uVar9 = DAT_0962;
    uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
    DAT_094e = uVar6;
    bVar12 = DAT_095d;
    if (bVar12 < 0x80) {
      DAT_0dde = (ushort)(byte)(0x80 - bVar12) << 2;
      uVar9 = DAT_0cea;
      uVar17 = DAT_0dde;
      uVar6 = uVar9 - uVar17;
      if (uVar9 < uVar17) {
        uVar6 = 0;
      }
    }
    else {
      DAT_0dde = (ushort)(byte)(bVar12 + 0x80) << 2;
      uVar9 = DAT_0cea;
      uVar17 = DAT_0dde;
      uVar6 = uVar9 + uVar17;
      if (CARRY2(uVar9,uVar17)) {
        uVar6 = 0xffff;
      }
    }
    uVar9 = DAT_0966;
    uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
    DAT_0950 = uVar6;
    uVar6 = DAT_0950;
    uVar6 = scale_u16_by_u8(uVar6,&DAT_0998);
    RAM0ddf = uVar6;
    bVar12 = DAT_0998;
    DAT_0dde._0_1_ = ~bVar12;
    uVar6 = DAT_094e;
    uVar6 = scale_u16_by_u8(uVar6,(byte *)&DAT_0dde);
    sVar8 = RAM0ddf;
    uVar6 = uVar6 + sVar8;
    sVar8 = DAT_0ad4;
    if (sVar8 != 0) {
      uVar6 = (ushort)((uint)(ushort)(sVar8 * -0x40) * (uint)uVar6 >> 0x10);
    }
    DAT_094c = uVar6;
    DAT_0948 = uVar6;
    bVar12 = DAT_0cec;
    uVar6 = DAT_094c;
    iVar1 = (uint)uVar6 * (uint)bVar12 * 2;
    uVar6 = (ushort)iVar1;
    bVar12 = (byte)((uint)iVar1 >> 0x18);
    cVar14 = bVar12 + (0xff7f < uVar6);
    if (CONCAT11(bVar12 + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
      DAT_0dde._0_1_ = cVar14;
      RAM0ddf = uVar6 + 0x80;
      uVar6 = DAT_0dde;
      uVar9 = DAT_19dc;
      if ((uVar6 < DAT_19dc) && (uVar9 = uVar6, uVar6 < DAT_19da)) {
        uVar9 = DAT_19da;
      }
      DAT_095a = uVar9;
      bVar12 = DAT_0ca8;
      if ((~bVar12 & 1) != 0) {
        iVar1 = (uint)DAT_19d4 * 4 * (uint)uVar9;
        uVar6 = (ushort)iVar1;
        bVar12 = (byte)((uint)iVar1 >> 0x18);
        cVar14 = bVar12 + (0xff7f < uVar6);
        if (CONCAT11(bVar12 + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
          DAT_0dde._0_1_ = cVar14;
          RAM0ddf = uVar6 + 0x80;
          uVar9 = DAT_0dde;
        }
        else {
          uVar9 = 0xffff;
        }
      }
      DAT_094a = uVar9;
      uVar6 = DAT_095e;
      sVar8 = uVar9 + uVar6;
      if (CARRY2(uVar9,uVar6)) goto LAB_8563;
    }
    else {
LAB_8563:
      sVar8 = -1;
    }
    DAT_092c = sVar8;
    DAT_0946 = sVar8;
    bVar12 = DAT_0881;
    DAT_0881 = bVar12 | 0x40;
    bVar12 = DAT_0a16;
    DAT_0a16 = bVar12 | 8;
    bVar12 = DAT_0a16;
    DAT_0a16 = bVar12 & 0xfd;
    goto LAB_8578;
  }
  DAT_0960 = 0x100;
  DAT_0962 = 0x100;
  DAT_0964 = 0x100;
  DAT_0966 = 0x100;
  uVar9 = (ushort)DAT_19df << 5;
  uVar6 = DAT_19dc;
  if ((uVar9 < DAT_19dc) && (uVar6 = uVar9, uVar9 < DAT_19da)) {
    uVar6 = DAT_19da;
  }
  DAT_0940 = uVar6;
  DAT_093c = uVar6;
  uVar9 = (ushort)DAT_19e0 << 5;
  uVar6 = DAT_19dc;
  if ((uVar9 < DAT_19dc) && (uVar6 = uVar9, uVar9 < DAT_19da)) {
    uVar6 = DAT_19da;
  }
  DAT_094c = uVar6;
  DAT_0948 = uVar6;
  uVar6 = DAT_0940;
  bVar12 = DAT_0ca8;
  if ((~bVar12 & 1) != 0) {
    iVar1 = (uint)DAT_19d4 * 4 * (uint)uVar6;
    uVar6 = (ushort)iVar1;
    bVar12 = (byte)((uint)iVar1 >> 0x18);
    cVar14 = bVar12 + (0xff7f < uVar6);
    if (CONCAT11(bVar12 + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
      DAT_0dde._0_1_ = cVar14;
      RAM0ddf = uVar6 + 0x80;
      uVar6 = DAT_0dde;
    }
    else {
      uVar6 = 0xffff;
    }
  }
  DAT_093e = uVar6;
  uVar9 = DAT_095e;
  sVar8 = uVar6 + uVar9;
  if (CARRY2(uVar6,uVar9)) {
    sVar8 = -1;
  }
  DAT_093a = sVar8;
  DAT_092a = sVar8;
  FUN_864e();
  bVar12 = DAT_0cec;
  uVar6 = DAT_094c;
  iVar1 = (uint)uVar6 * (uint)bVar12 * 2;
  uVar6 = (ushort)iVar1;
  bVar12 = (byte)((uint)iVar1 >> 0x18);
  cVar14 = bVar12 + (0xff7f < uVar6);
  if (CONCAT11(bVar12 + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
    DAT_0dde._0_1_ = cVar14;
    RAM0ddf = uVar6 + 0x80;
    uVar6 = DAT_0dde;
    uVar9 = DAT_19dc;
    if ((uVar6 < DAT_19dc) && (uVar9 = uVar6, uVar6 < DAT_19da)) {
      uVar9 = DAT_19da;
    }
    DAT_095a = uVar9;
    bVar12 = DAT_0ca8;
    if ((~bVar12 & 1) != 0) {
      iVar1 = (uint)DAT_19d4 * 4 * (uint)uVar9;
      uVar6 = (ushort)iVar1;
      bVar12 = (byte)((uint)iVar1 >> 0x18);
      cVar14 = bVar12 + (0xff7f < uVar6);
      if (CONCAT11(bVar12 + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
        DAT_0dde._0_1_ = cVar14;
        RAM0ddf = uVar6 + 0x80;
        uVar9 = DAT_0dde;
      }
      else {
        uVar9 = 0xffff;
      }
    }
    DAT_094a = uVar9;
    uVar6 = DAT_095e;
    sVar8 = uVar9 + uVar6;
    if (CARRY2(uVar9,uVar6)) goto LAB_8136;
  }
  else {
LAB_8136:
    sVar8 = -1;
  }
  DAT_092c = sVar8;
  DAT_0946 = sVar8;
  bVar12 = DAT_0a16;
  DAT_0a16 = bVar12 & 0xfe;
  bVar12 = DAT_0a16;
  DAT_0a16 = bVar12 & 0xfd;
  bVar12 = DAT_0881;
  DAT_0881 = bVar12 | 0x80;
  bVar12 = DAT_0881;
  DAT_0881 = bVar12 | 0x40;
LAB_8578:
  bVar12 = DAT_08bc;
  DAT_08bc = bVar12 & 0xbf;
  return;
}


