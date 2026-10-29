/* Entry a564 */

void FUN_a564(void)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  undefined2 uVar4;
  char cVar5;
  short sVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  
  bVar11 = DAT_0882;
  DAT_0882 = bVar11 & 0xfb;
  bVar11 = DAT_08bf;
  DAT_08bf = bVar11 | 4;
  uVar8 = DAT_08f2;
  if (uVar8 < DAT_3586) {
    if (uVar8 <= DAT_3584) {
      bVar11 = DAT_09a2;
      DAT_09a2 = bVar11 & 0x7f;
    }
  }
  else {
    bVar11 = DAT_09a2;
    DAT_09a2 = bVar11 | 0x80;
  }
  bVar11 = DAT_0881;
  if ((bVar11 & 0x10) == 0) {
    uVar8 = lookup_u8_uniform_axis((uchar)uVar8,&UNK_36c4);
    bVar7 = (byte)(uVar8 >> 8);
    DAT_09b4 = bVar7;
    bVar11 = DAT_09b5;
    if ((bVar11 < bVar7) || (bVar11 = DAT_08f4, bVar11 < DAT_357e)) goto LAB_a632;
    FUN_abdd();
    cVar3 = DAT_09ae;
    if (cVar3 == '\0') goto LAB_a632;
    FUN_ac2e();
    cVar3 = DAT_09af;
    if ((((((((cVar3 == '\0') || (bVar11 = DAT_0886, (~bVar11 & 0x40) == 0)) ||
            (bVar11 = DAT_09a1, (bVar11 & 0x40) == 0)) ||
           ((sVar2 = DAT_0992, sVar2 != 0 || (cVar3 = DAT_097a, cVar3 != -0x80)))) ||
          ((cVar3 = DAT_0d87, cVar3 == '\t' && (bVar11 = DAT_0896._0_1_, (bVar11 & 0x10) == 0)))) ||
         ((((bVar11 = DAT_08af, (~bVar11 & 0x20) == 0 || (bVar11 = DAT_08af, (~bVar11 & 0x10) == 0))
           || (bVar11 = DAT_08af, (~bVar11 & 8) == 0)) ||
          (((bVar11 = DAT_08af, (~bVar11 & 4) == 0 || (bVar11 = DAT_08b0, (~bVar11 & 0x80) == 0)) ||
           (bVar11 = DAT_08b0, (~bVar11 & 0x40) == 0)))))) ||
        ((bVar11 = DAT_08b1, (~bVar11 & 0x80) == 0 || (bVar11 = DAT_08b1, (~bVar11 & 0x40) == 0))))
       || (((uVar8 = DAT_0982, uVar8 < DAT_3580 ||
            ((DAT_3582 < uVar8 || (bVar11 = DAT_09a2, (bVar11 & 0x80) == 0)))) ||
           (bVar11 = DAT_08a0, (~bVar11 & 0x20) == 0)))) goto LAB_a632;
    bVar11 = DAT_09ad;
    if (bVar11 < DAT_357d) {
      bVar11 = DAT_09a1;
      DAT_09a1 = bVar11 & 0x7f;
    }
    else {
      bVar11 = DAT_09a1;
      DAT_09a1 = bVar11 | 0x80;
    }
  }
  else {
LAB_a632:
    bVar11 = DAT_09a1;
    DAT_09a1 = bVar11 & 0x7f;
    DAT_09ad = 0;
  }
  FUN_aab6();
  bVar11 = DAT_09b6;
  if ((((((bVar11 & 4) == 0) || (bVar11 = DAT_09a1, (bVar11 & 0x80) == 0)) ||
       (bVar11 = DAT_08f4, bVar11 < DAT_36e0)) ||
      ((DAT_36e1 <= bVar11 || (bVar11 = DAT_08f5, bVar11 < DAT_36e2)))) ||
     ((DAT_36e3 <= bVar11 ||
      ((bVar11 = DAT_08ed, bVar11 < DAT_36e4 || (bVar11 = DAT_08ed, DAT_36e5 < bVar11)))))) {
LAB_a6a8:
    DAT_09ca = 0;
    bVar11 = DAT_09b6;
    DAT_09b6 = bVar11 & 0xf7;
LAB_a6af:
    bVar11 = DAT_09b6;
    DAT_09b6 = bVar11 & 0xef;
  }
  else {
    bVar11 = DAT_09b6;
    DAT_09b6 = bVar11 | 8;
    bVar11 = DAT_09ca;
    if ((bVar11 < DAT_36e6) || (DAT_36e7 != -0x80)) goto LAB_a6af;
    bVar11 = DAT_08b0;
    if ((((((~bVar11 & 0x10) == 0) || (bVar11 = DAT_08b0, (~bVar11 & 4) == 0)) ||
         (bVar11 = DAT_08b0, (~bVar11 & 2) == 0)) ||
        ((bVar11 = DAT_08b1, (~bVar11 & 8) == 0 || (bVar11 = DAT_08b1, (~bVar11 & 4) == 0)))) ||
       (bVar11 = DAT_08b1, (~bVar11 & 2) == 0)) goto LAB_a6a8;
    bVar11 = DAT_09b6;
    DAT_09b6 = bVar11 | 0x10;
  }
  uVar4 = DAT_097e;
  DAT_0ba8 = uVar4;
  bVar11 = DAT_09a1;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_09a1;
    if ((bVar11 & 2) == 0) {
      bVar11 = DAT_09a2;
      uVar8 = DAT_36a2;
      if ((bVar11 & 1) != 0) {
        FUN_ab66();
        FUN_ab90();
        uVar8 = DAT_0900;
        uVar8 = lookup_u8_uniform_u16_axis(uVar8,&UNK_36b2);
        DAT_09a8 = uVar8 & 0xff00;
        bVar11 = DAT_09a2;
        DAT_09a2 = bVar11 & 0xfe;
        uVar8 = uVar8 & 0xff00;
      }
      DAT_0dde = uVar8;
      uVar9 = DAT_097e;
      uVar10 = DAT_0dde;
      uVar8 = uVar9 + uVar10;
      if (CARRY2(uVar9,uVar10)) {
        uVar8 = 0xffff;
      }
    }
    else {
      bVar11 = DAT_09a2;
      uVar8 = DAT_36a0;
      if ((~bVar11 & 1) != 0) {
        FUN_ab66();
        FUN_ab90();
        uVar8 = DAT_0900;
        uVar8 = lookup_u8_uniform_u16_axis(uVar8,&UNK_36a4);
        DAT_09a6 = uVar8 & 0xff00;
        bVar11 = DAT_09a2;
        DAT_09a2 = bVar11 | 1;
        uVar8 = uVar8 & 0xff00;
      }
      DAT_0dde = uVar8;
      uVar9 = DAT_097e;
      uVar10 = DAT_0dde;
      uVar8 = uVar9 - uVar10;
      if (uVar9 < uVar10) {
        uVar8 = 0;
      }
    }
  }
  else {
    uVar8 = 0x8000;
  }
  uVar9 = DAT_36c0;
  if ((DAT_36c0 <= uVar8) && (uVar9 = uVar8, DAT_36c2 < uVar8)) {
    uVar9 = DAT_36c2;
  }
  DAT_097e = uVar9;
  cVar3 = DAT_0d5c;
  if ((((cVar3 != -0x80) && (cVar3 = DAT_0d87, cVar3 != '\t')) &&
      (bVar11 = DAT_08a0, (~bVar11 & 4) != 0)) && (bVar11 = DAT_08b2, (~bVar11 & 0x80) != 0)) {
    bVar11 = DAT_09a1;
    if ((bVar11 & 0x80) != 0) {
      uVar8 = DAT_097e;
      if (DAT_36c2 <= uVar8) {
        bVar11 = DAT_08b6;
        if ((bVar11 & 0x20) == 0) {
          bVar11 = DAT_08b6;
          DAT_08b6 = bVar11 | 0x20;
        }
        else {
          bVar11 = DAT_0b44;
          if ((DAT_4e52 < bVar11) && (bVar11 = DAT_08b0, (~bVar11 & 4) != 0)) {
            bVar11 = DAT_08b0;
            DAT_08b0 = bVar11 | 4;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x40;
            bVar11 = DAT_08b9;
            if ((~bVar11 & 4) != 0) {
              bVar11 = DAT_08b9;
              DAT_08b9 = bVar11 | 4;
              bVar11 = DAT_0bd2;
              DAT_0bd2 = bVar11 | 4;
            }
          }
        }
        goto LAB_a7b0;
      }
      uVar8 = DAT_097e;
      uVar9 = DAT_0ba8;
      if ((uVar8 < uVar9) && (bVar11 = DAT_08b0, (bVar11 & 4) != 0)) {
        bVar11 = DAT_08b0;
        DAT_08b0 = bVar11 & 0xfb;
        bVar11 = DAT_0bd2;
        DAT_0bd2 = bVar11 | 0x40;
      }
    }
    DAT_0b44 = 0;
    bVar11 = DAT_08b6;
    DAT_08b6 = bVar11 & 0xdf;
  }
LAB_a7b0:
  cVar3 = DAT_0d5d;
  if ((((cVar3 != -0x80) && (cVar3 = DAT_0d87, cVar3 != '\t')) &&
      (bVar11 = DAT_08a0, (~bVar11 & 4) != 0)) && (bVar11 = DAT_08b2, (~bVar11 & 0x80) != 0)) {
    bVar11 = DAT_09a1;
    if ((bVar11 & 0x80) != 0) {
      uVar8 = DAT_097e;
      if (uVar8 <= DAT_36c0) {
        bVar11 = DAT_08b6;
        if ((bVar11 & 0x10) == 0) {
          bVar11 = DAT_08b6;
          DAT_08b6 = bVar11 | 0x10;
        }
        else {
          bVar11 = DAT_0b45;
          if ((DAT_4e52 < bVar11) && (bVar11 = DAT_08b0, (~bVar11 & 2) != 0)) {
            bVar11 = DAT_08b0;
            DAT_08b0 = bVar11 | 2;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x40;
            bVar11 = DAT_08b9;
            if ((~bVar11 & 2) != 0) {
              bVar11 = DAT_08b9;
              DAT_08b9 = bVar11 | 2;
              bVar11 = DAT_0bd2;
              DAT_0bd2 = bVar11 | 4;
            }
          }
        }
        goto LAB_a823;
      }
      uVar9 = DAT_0ba8;
      uVar8 = DAT_097e;
      if ((uVar9 < uVar8) && (bVar11 = DAT_08b0, (bVar11 & 2) != 0)) {
        bVar11 = DAT_08b0;
        DAT_08b0 = bVar11 & 0xfd;
        bVar11 = DAT_0bd2;
        DAT_0bd2 = bVar11 | 0x40;
      }
    }
    DAT_0b45 = 0;
    bVar11 = DAT_08b6;
    DAT_08b6 = bVar11 & 0xef;
  }
LAB_a823:
  cVar3 = DAT_09cb;
  cVar5 = DAT_09cc;
  uVar10 = (ushort)*(byte *)((short)&DAT_09b7 + (ushort)(byte)(cVar3 * '\x04' + cVar5)) * 0x100;
  uVar9 = DAT_09c8;
  uVar8 = uVar10 - uVar9;
  if (uVar10 < uVar9) {
    uVar8 = scale_u16_by_u8(CONCAT11((~(byte)(uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),
                                     -(char)uVar8),&UNK_36ed);
    uVar8 = CONCAT11((~(byte)(uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8);
  }
  else {
    uVar8 = scale_u16_by_u8(uVar8,&UNK_36ed);
  }
  sVar2 = DAT_09c8;
  sVar2 = uVar8 + sVar2;
  DAT_09c8 = sVar2;
  bVar1 = 0x7f < (byte)sVar2;
  bVar11 = (byte)((ushort)sVar2 >> 8);
  DAT_0980 = (bVar11 + bVar1) - CARRY1(bVar11,bVar1);
  if ((DAT_36e7 != -0x80) && (DAT_36ee == -0x80)) {
    DAT_09b7 = 0x8080;
    DAT_09b9 = 0x8080;
    DAT_09bb = 0x8080;
    DAT_09bd = 0x8080;
    DAT_09bf = 0x8080;
    DAT_09c1 = 0x8080;
    DAT_09c3 = 0x8080;
    DAT_09c5 = 0x8080;
  }
  bVar11 = DAT_09cf;
  if ((bVar11 & 1) != 0) {
    bVar11 = DAT_09cf;
    if ((~bVar11 & 4) == 0) {
      uVar8 = DAT_09d2;
      uVar9 = DAT_09da;
      if (uVar9 <= uVar8) {
        bVar11 = DAT_09dd;
        bVar11 = (bVar11 + 1) - (0xfe < bVar11);
        DAT_09dd = bVar11;
        goto LAB_a8d3;
      }
      bVar11 = DAT_09cf;
      DAT_09cf = bVar11 & 0xfe;
      bVar11 = DAT_09cf;
      DAT_09cf = bVar11 & 0x7f;
      bVar11 = DAT_09cf;
      DAT_09cf = bVar11 & 0xbf;
      bVar11 = DAT_09cf;
      DAT_09cf = bVar11 & 0xfb;
      DAT_09dd = 0;
    }
    else {
      bVar11 = DAT_09cf;
      if (((~bVar11 & 8) != 0) && (bVar11 = DAT_09cf, (bVar11 & 2) != 0)) {
        bVar11 = DAT_09cf;
        DAT_09cf = bVar11 | 4;
        bVar11 = 0;
        DAT_09dd = 0;
LAB_a8d3:
        bVar7 = DAT_09d7;
        if (bVar7 <= bVar11) {
          bVar11 = DAT_09cf;
          DAT_09cf = bVar11 | 8;
          bVar11 = DAT_09cf;
          DAT_09cf = bVar11 & 0xfb;
        }
      }
    }
  }
  bVar11 = DAT_0bc8;
  DAT_0bc8 = (bVar11 + 1) - (0xfe < bVar11);
  if (DAT_4e91 == -0x80) {
    bVar11 = DAT_0884;
    DAT_0884 = bVar11 & 0xfd;
LAB_a983:
    bVar11 = DAT_0885;
    DAT_0885 = bVar11 & 0x7f;
    bVar11 = DAT_0881;
    if ((~bVar11 & 0x20) != 0) {
      bVar11 = DAT_0884;
      DAT_0884 = bVar11 & 0xfe;
    }
  }
  else {
    bVar11 = DAT_08dd;
    if ((bVar11 <= DAT_4e92) && (DAT_4e94 < bVar11)) {
      if (bVar11 < DAT_4e93) {
        uVar9 = DAT_0b0a;
        uVar8 = uVar9 - DAT_4be8;
        if (uVar9 < DAT_4be8) {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = DAT_0b0a;
        bVar11 = (byte)(uVar8 + 1);
        uVar8 = CONCAT11((char)(uVar8 + 1 >> 8) - (bVar11 < (0xfffe < uVar8)),
                         bVar11 - (0xfffe < uVar8));
        if (DAT_4be6 <= uVar8) {
          uVar8 = DAT_4be6;
        }
      }
      DAT_0b0a = uVar8;
      if (uVar8 < DAT_4bea) goto LAB_a983;
      bVar11 = DAT_0885;
      DAT_0885 = bVar11 | 0x80;
      cVar3 = DAT_0dd9;
      if (cVar3 == -0x80) {
        bVar11 = DAT_08a1;
        DAT_08a1 = bVar11 | 2;
      }
      else {
        bVar11 = DAT_0884;
        DAT_0884 = bVar11 | 1;
      }
      cVar3 = DAT_0d5b;
      if (((((cVar3 != -0x80) && (bVar11 = DAT_08a0, (~bVar11 & 4) != 0)) &&
           (bVar11 = DAT_08b2, (~bVar11 & 0x80) != 0)) &&
          ((cVar3 = DAT_0dd9, cVar3 == -0x80 || (bVar11 = DAT_0bc8, 0x1e < bVar11)))) &&
         (bVar11 = DAT_08b0, (~bVar11 & 8) != 0)) {
        bVar11 = DAT_08b0;
        DAT_08b0 = bVar11 | 8;
        bVar11 = DAT_0bd2;
        DAT_0bd2 = bVar11 | 0x40;
        bVar11 = DAT_08b9;
        if ((~bVar11 & 8) != 0) {
          bVar11 = DAT_08b9;
          DAT_08b9 = bVar11 | 8;
          bVar11 = DAT_0bd2;
          DAT_0bd2 = bVar11 | 4;
        }
      }
    }
  }
  bVar11 = DAT_0bf8;
  if ((bVar11 & 0x40) == 0) {
LAB_a9ac:
    DAT_0bfa = 0;
  }
  else {
    bVar11 = DAT_0bfa;
    if ((0xfe < bVar11) || (DAT_0bfa = bVar11 + 1, DAT_4bfc < (byte)(bVar11 + 1))) {
      bVar11 = DAT_0bf8;
      DAT_0bf8 = bVar11 & 0xbf;
      goto LAB_a9ac;
    }
  }
  cVar3 = DAT_0dd5;
  if (((cVar3 != -0x80) && (bVar11 = DAT_0d06, (~bVar11 & 2) == 0)) &&
     (bVar11 = DAT_0d08, (~bVar11 & 0x20) != 0)) {
    bVar11 = DAT_0d25;
    DAT_0dde._0_1_ = bVar11 & 0x3f;
    bVar11 = DAT_0d26;
    DAT_0dde._1_1_ = bVar11 & 0x3f;
    bVar11 = DAT_0d27;
    DAT_0de0._0_1_ = bVar11 & 0x3f;
    bVar11 = DAT_0dde._1_1_;
    bVar7 = DAT_0de0._0_1_;
    DAT_0d35._1_1_ = (byte)((ushort)bVar11 << 6) | bVar7;
    DAT_0dde._1_1_ = (char)(((ushort)bVar11 << 6) >> 8);
    bVar11 = DAT_0dde._0_1_;
    DAT_0d34 = (char)(((ushort)bVar11 << 4) >> 8);
    bVar7 = DAT_0dde._1_1_;
    DAT_0d35._0_1_ = (byte)((ushort)bVar11 << 4) | bVar7;
    DAT_0de0._1_1_ = 0;
    bVar11 = DAT_0d17;
    bVar7 = DAT_0d18;
    RAM0de2 = (ushort)bVar11 * (ushort)bVar7;
    bVar11 = DAT_0d18;
    bVar7 = DAT_0d19;
    uVar8 = RAM0de2;
    RAM0de2 = (ushort)bVar11 * (ushort)bVar7 + uVar8;
    cVar3 = DAT_0de0._1_1_;
    DAT_0de0._1_1_ = cVar3 + CARRY2((ushort)bVar11 * (ushort)bVar7,uVar8);
    bVar7 = DAT_0d19;
    bVar11 = DAT_0d17;
    uVar8 = RAM0de2;
    DAT_0d32 = (ushort)bVar7 * (ushort)bVar11 + uVar8;
    cVar3 = DAT_0de0._1_1_;
    DAT_0d31 = cVar3 + CARRY2((ushort)bVar7 * (ushort)bVar11,uVar8);
    sVar2 = DAT_0d32;
    sVar6 = DAT_0d35;
    if (sVar2 == sVar6) {
      cVar3 = DAT_0d31;
      cVar5 = DAT_0d34;
      if (cVar3 != cVar5) goto LAB_aa49;
      bVar11 = DAT_0d08;
      DAT_0d08 = bVar11 | 0x10;
    }
    else {
LAB_aa49:
      bVar11 = DAT_0d08;
      DAT_0d08 = bVar11 & 0xef;
    }
    bVar11 = DAT_0d08;
    DAT_0d08 = bVar11 | 0x20;
  }
  cVar3 = DAT_0dd5;
  if (((cVar3 == -0x80) || (bVar11 = DAT_0d06, (bVar11 & 4) == 0)) ||
     (bVar11 = DAT_0be8, (~bVar11 & 4) == 0)) goto LAB_aab1;
  sVar2 = DAT_0d28;
  sVar6 = DAT_0d2b;
  if ((sVar2 == sVar6) && (sVar6 = DAT_0d2e, sVar2 == sVar6)) {
    cVar3 = DAT_0d2a;
    cVar5 = DAT_0d2d;
    if ((cVar3 != cVar5) || (cVar5 = DAT_0d30, cVar3 != cVar5)) goto LAB_aaa5;
    bVar11 = DAT_0d07;
    DAT_0d07 = bVar11 & 0xef;
    bVar11 = DAT_0d08;
    if ((bVar11 & 0x10) == 0) {
      bVar11 = DAT_0be8;
      DAT_0be8 = bVar11 & 0xfb;
      bVar11 = DAT_0d08;
      DAT_0d08 = bVar11 & 0xbf;
      bVar11 = DAT_0d06;
      DAT_0d06 = bVar11 & 0xfb;
      DAT_0d37 = 0xffff;
      DAT_0d39 = 0xff;
      goto LAB_aab1;
    }
    bVar11 = DAT_0be8;
    DAT_0be8 = bVar11 | 4;
    DAT_0d15 = 0;
  }
  else {
LAB_aaa5:
    bVar11 = DAT_0d07;
    DAT_0d07 = bVar11 | 0x10;
    bVar11 = DAT_0be8;
    DAT_0be8 = bVar11 & 0xfb;
  }
  bVar11 = DAT_0d06;
  DAT_0d06 = bVar11 & 0xfb;
LAB_aab1:
  bVar11 = DAT_08bf;
  DAT_08bf = bVar11 & 0xfb;
  return;
}


