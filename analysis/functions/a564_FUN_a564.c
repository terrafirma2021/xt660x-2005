/* Entry a564 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_a564(undefined2 param_1)

{
  bool bVar1;
  byte bVar2;
  byte extraout_A;
  byte extraout_A_00;
  byte extraout_A_01;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar8;
  undefined2 uVar6;
  short sVar7;
  
  DAT_0882 = DAT_0882 & 0xfb;
  DAT_08bf = DAT_08bf | 4;
  if (DAT_08f2 < DAT_3586) {
    if (DAT_08f2 <= DAT_3584) {
      DAT_09a2 = DAT_09a2 & 0x7f;
    }
  }
  else {
    DAT_09a2 = DAT_09a2 | 0x80;
  }
  if ((((((DAT_0881 & 0x10) == 0) &&
        (lookup_u8_uniform_axis(), DAT_09b4 = extraout_A, extraout_A <= DAT_09b5)) &&
       (DAT_357e <= DAT_08f4)) &&
      (((FUN_abdd(), DAT_09ae != '\0' && (FUN_ac2e(), DAT_09af != '\0')) &&
       (((~DAT_0886 & 0x40) == 0 && (((DAT_09a1 & 0x40) != 0 && (DAT_0992 == 0)))))))) &&
     (((DAT_097a == -0x80 &&
       (((DAT_0d87 != '\t' || ((DAT_0896._0_1_ & 0x10) != 0)) && ((~DAT_08af & 0x20) == 0)))) &&
      ((((~DAT_08af & 0x10) == 0 && ((~DAT_08af & 8) == 0)) &&
       (((((~DAT_08af & 4) == 0 && (((~DAT_08b0 & 0x80) == 0 && ((~DAT_08b0 & 0x40) == 0)))) &&
         ((~DAT_08b1 & 0x80) == 0)) &&
        (((((~DAT_08b1 & 0x40) == 0 && (DAT_3580 <= DAT_0982)) && (DAT_0982 <= DAT_3582)) &&
         (((DAT_09a2 & 0x80) != 0 && ((~DAT_08a0 & 0x20) == 0)))))))))))) {
    if (DAT_09ad < DAT_357d) {
      DAT_09a1 = DAT_09a1 & 0x7f;
    }
    else {
      DAT_09a1 = DAT_09a1 | 0x80;
    }
  }
  else {
    DAT_09a1 = DAT_09a1 & 0x7f;
    DAT_09ad = 0;
  }
  FUN_aab6();
  bVar2 = DAT_09b6;
  if (((((DAT_09b6 & 4) == 0) || ((DAT_09a1 & 0x80) == 0)) ||
      ((DAT_08f4 < DAT_36e0 ||
       (((DAT_36e1 <= DAT_08f4 || (DAT_08f5 < DAT_36e2)) || (DAT_36e3 <= DAT_08f5)))))) ||
     ((DAT_08ed < DAT_36e4 || (DAT_36e5 < DAT_08ed)))) {
LAB_a6a8:
    DAT_09b6 = bVar2;
    DAT_09ca = 0;
    bVar2 = DAT_09b6 & 0xf7;
LAB_a6af:
    DAT_09b6 = bVar2;
    DAT_09b6 = DAT_09b6 & 0xef;
  }
  else {
    bVar2 = DAT_09b6 | 8;
    if ((DAT_09ca < DAT_36e6) || (DAT_36e7 != -0x80)) goto LAB_a6af;
    if ((((~DAT_08b0 & 0x10) != 0) || ((~DAT_08b0 & 4) != 0)) ||
       (((~DAT_08b0 & 2) != 0 ||
        ((((~DAT_08b1 & 8) != 0 || ((~DAT_08b1 & 4) != 0)) || ((~DAT_08b1 & 2) != 0))))))
    goto LAB_a6a8;
    DAT_09b6 = DAT_09b6 | 0x18;
  }
  DAT_0ba8 = DAT_097e;
  if ((~DAT_09a1 & 0x80) == 0) {
    uVar4 = 0x8000;
  }
  else if ((DAT_09a1 & 2) == 0) {
    uVar5 = DAT_36a2;
    if ((DAT_09a2 & 1) != 0) {
      FUN_ab66();
      FUN_ab90();
      lookup_u8_uniform_u16_axis();
      DAT_09a8 = (ushort)extraout_A_01 << 8;
      DAT_09a2 = DAT_09a2 & 0xfe;
      uVar5 = DAT_09a8;
    }
    uVar4 = DAT_097e + uVar5;
    DAT_0dde = uVar5;
    if (CARRY2(DAT_097e,uVar5)) {
      uVar4 = 0xffff;
    }
  }
  else {
    uVar5 = DAT_36a0;
    if ((~DAT_09a2 & 1) == 0) {
      FUN_ab66();
      FUN_ab90();
      lookup_u8_uniform_u16_axis();
      DAT_09a6 = (ushort)extraout_A_00 << 8;
      DAT_09a2 = DAT_09a2 | 1;
      uVar5 = DAT_09a6;
    }
    uVar4 = DAT_097e - uVar5;
    DAT_0dde = uVar5;
    if (DAT_097e < uVar5) {
      uVar4 = 0;
    }
  }
  DAT_097e = DAT_36c0;
  if ((DAT_36c0 <= uVar4) && (DAT_097e = uVar4, DAT_36c2 < uVar4)) {
    DAT_097e = DAT_36c2;
  }
  bVar2 = DAT_0bd2;
  if (((DAT_0d5c != -0x80) && (DAT_0d87 != '\t')) &&
     (((~DAT_08a0 & 4) == 0 && ((~DAT_08b2 & 0x80) == 0)))) {
    if ((DAT_09a1 & 0x80) != 0) {
      if (DAT_36c2 <= DAT_097e) {
        if ((DAT_08b6 & 0x20) == 0) {
          DAT_08b6 = DAT_08b6 | 0x20;
        }
        else if ((DAT_4e52 < DAT_0b44) && ((~DAT_08b0 & 4) == 0)) {
          DAT_08b0 = DAT_08b0 | 4;
          bVar2 = DAT_0bd2 | 0x40;
          if ((~DAT_08b9 & 4) == 0) {
            DAT_08b9 = DAT_08b9 | 4;
            bVar2 = DAT_0bd2 | 0x44;
          }
        }
        goto LAB_a7b0;
      }
      if ((DAT_097e < DAT_0ba8) && ((DAT_08b0 & 4) != 0)) {
        DAT_08b0 = DAT_08b0 & 0xfb;
        DAT_0bd2 = DAT_0bd2 | 0x40;
      }
    }
    DAT_0b44 = 0;
    DAT_08b6 = DAT_08b6 & 0xdf;
    bVar2 = DAT_0bd2;
  }
LAB_a7b0:
  DAT_0bd2 = bVar2;
  bVar2 = DAT_0bd2;
  if ((((DAT_0d5d != -0x80) && (DAT_0d87 != '\t')) && ((~DAT_08a0 & 4) == 0)) &&
     ((~DAT_08b2 & 0x80) == 0)) {
    if ((DAT_09a1 & 0x80) != 0) {
      if (DAT_097e <= DAT_36c0) {
        if ((DAT_08b6 & 0x10) == 0) {
          DAT_08b6 = DAT_08b6 | 0x10;
        }
        else if ((DAT_4e52 < DAT_0b45) && ((~DAT_08b0 & 2) == 0)) {
          DAT_08b0 = DAT_08b0 | 2;
          bVar2 = DAT_0bd2 | 0x40;
          if ((~DAT_08b9 & 2) == 0) {
            DAT_08b9 = DAT_08b9 | 2;
            bVar2 = DAT_0bd2 | 0x44;
          }
        }
        goto LAB_a823;
      }
      if ((DAT_0ba8 < DAT_097e) && ((DAT_08b0 & 2) != 0)) {
        DAT_08b0 = DAT_08b0 & 0xfd;
        DAT_0bd2 = DAT_0bd2 | 0x40;
      }
    }
    DAT_0b45 = 0;
    DAT_08b6 = DAT_08b6 & 0xef;
    bVar2 = DAT_0bd2;
  }
LAB_a823:
  DAT_0bd2 = bVar2;
  uVar5 = (ushort)*(byte *)((short)&DAT_09b7 + (ushort)(byte)(DAT_09cb * '\x04' + DAT_09cc)) * 0x100
  ;
  sVar7 = uVar5 - DAT_09c8;
  if (uVar5 < DAT_09c8) {
    cVar8 = -(char)sVar7;
    uVar6 = scale_u16_by_u8(param_1,CONCAT11((~(byte)((ushort)sVar7 >> 8) + 1) - (cVar8 != '\0'),
                                             cVar8));
    sVar7 = CONCAT11((~(byte)((ushort)uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
  }
  else {
    sVar7 = scale_u16_by_u8();
  }
  DAT_09c8 = sVar7 + DAT_09c8;
  bVar1 = 0x7f < (byte)DAT_09c8;
  bVar2 = (byte)(DAT_09c8 >> 8);
  DAT_0980 = (bVar2 + bVar1) - CARRY1(bVar2,bVar1);
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
  if ((DAT_09cf & 1) != 0) {
    if ((~DAT_09cf & 4) == 0) {
      if (((~DAT_09cf & 8) == 0) && ((DAT_09cf & 2) != 0)) {
        DAT_09cf = DAT_09cf | 4;
        DAT_09dd = 0;
LAB_a8d3:
        if (DAT_09d7 <= DAT_09dd) {
          DAT_09cf = DAT_09cf & 0xfb | 8;
        }
      }
    }
    else {
      if (DAT_09da <= DAT_09d2) {
        DAT_09dd = (DAT_09dd + 1) - (0xfe < DAT_09dd);
        goto LAB_a8d3;
      }
      DAT_09cf = DAT_09cf & 0x3a;
      DAT_09dd = 0;
    }
  }
  DAT_0bc8 = (DAT_0bc8 + 1) - (0xfe < DAT_0bc8);
  bVar2 = DAT_0bd2;
  if (DAT_4e91 == -0x80) {
    DAT_0884 = DAT_0884 & 0xfd;
LAB_a983:
    DAT_0885 = DAT_0885 & 0x7f;
    if ((~DAT_0881 & 0x20) == 0) {
      DAT_0884 = DAT_0884 & 0xfe;
    }
  }
  else if ((DAT_08dd <= DAT_4e92) && (DAT_4e94 < DAT_08dd)) {
    if (DAT_08dd < DAT_4e93) {
      bVar1 = DAT_0b0a < DAT_4be8;
      DAT_0b0a = DAT_0b0a - DAT_4be8;
      if (bVar1) {
        DAT_0b0a = 0;
      }
    }
    else {
      DAT_0b0a = CONCAT11((char)(DAT_0b0a + 1 >> 8),(char)(DAT_0b0a + 1) - (0xfffe < DAT_0b0a));
      if (DAT_4be6 <= DAT_0b0a) {
        DAT_0b0a = DAT_4be6;
      }
    }
    if (DAT_0b0a < DAT_4bea) goto LAB_a983;
    DAT_0885 = DAT_0885 | 0x80;
    if (DAT_0dd9 == -0x80) {
      DAT_08a1 = DAT_08a1 | 2;
    }
    else {
      DAT_0884 = DAT_0884 | 1;
    }
    if ((((DAT_0d5b != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) &&
       (((DAT_0dd9 == -0x80 || (0x1e < DAT_0bc8)) && ((~DAT_08b0 & 8) == 0)))) {
      DAT_08b0 = DAT_08b0 | 8;
      bVar2 = DAT_0bd2 | 0x40;
      if ((~DAT_08b9 & 8) == 0) {
        DAT_08b9 = DAT_08b9 | 8;
        bVar2 = DAT_0bd2 | 0x44;
      }
    }
  }
  DAT_0bd2 = bVar2;
  if ((DAT_0bf8 & 0x40) == 0) {
LAB_a9ac:
    DAT_0bfa = 0;
  }
  else {
    bVar2 = DAT_0bfa + 1;
    if ((0xfe < DAT_0bfa) || (DAT_0bfa = bVar2, DAT_4bfc < bVar2)) {
      DAT_0bf8 = DAT_0bf8 & 0xbf;
      goto LAB_a9ac;
    }
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 2) != 0)) && ((~DAT_0d08 & 0x20) == 0)) {
    DAT_0dde._0_1_ = DAT_0d25 & 0x3f;
    bVar2 = DAT_0dde._0_1_;
    DAT_0de0._0_1_ = DAT_0d27 & 0x3f;
    sVar7 = (DAT_0d26 & 0x3f) << 6;
    bVar3 = (byte)((ushort)sVar7 >> 8);
    DAT_0dde = CONCAT11(DAT_0d25,bVar3) & 0x3fff;
    DAT_0d34 = (char)(((ushort)bVar2 << 4) >> 8);
    DAT_0d35 = CONCAT11((byte)((ushort)bVar2 << 4) | bVar3,(byte)sVar7 | DAT_0de0._0_1_);
    _DAT_0de2 = (ushort)DAT_0d18 * (ushort)DAT_0d19 + (ushort)DAT_0d17 * (ushort)DAT_0d18;
    DAT_0de0._1_1_ = CARRY2((ushort)DAT_0d18 * (ushort)DAT_0d19,(ushort)DAT_0d17 * (ushort)DAT_0d18)
    ;
    DAT_0d32 = (ushort)DAT_0d19 * (ushort)DAT_0d17 + _DAT_0de2;
    DAT_0d31 = (undefined1)DAT_0de0 + CARRY2((ushort)DAT_0d19 * (ushort)DAT_0d17,_DAT_0de2);
    if ((DAT_0d32 == DAT_0d35) && (DAT_0d31 == DAT_0d34)) {
      DAT_0d08 = DAT_0d08 | 0x10;
    }
    else {
      DAT_0d08 = DAT_0d08 & 0xef;
    }
    DAT_0d08 = DAT_0d08 | 0x20;
  }
  if (((DAT_0dd5 != -0x80) && ((DAT_0d06 & 4) != 0)) && ((~DAT_0be8 & 4) == 0)) {
    if ((((DAT_0d28 == DAT_0d2b) && (DAT_0d28 == DAT_0d2e)) && (DAT_0d2a == DAT_0d2d)) &&
       (DAT_0d2a == DAT_0d30)) {
      DAT_0d07 = DAT_0d07 & 0xef;
      if ((DAT_0d08 & 0x10) == 0) {
        DAT_0be8 = DAT_0be8 & 0xfb;
        DAT_0d08 = DAT_0d08 & 0xbf;
        DAT_0d06 = DAT_0d06 & 0xfb;
        DAT_0d37 = 0xffff;
        DAT_0d39 = 0xff;
        goto LAB_aab1;
      }
      DAT_0be8 = DAT_0be8 | 4;
      DAT_0d15 = 0;
    }
    else {
      DAT_0d07 = DAT_0d07 | 0x10;
      DAT_0be8 = DAT_0be8 & 0xfb;
    }
    DAT_0d06 = DAT_0d06 & 0xfb;
  }
LAB_aab1:
  DAT_08bf = DAT_08bf & 0xfb;
  return;
}


