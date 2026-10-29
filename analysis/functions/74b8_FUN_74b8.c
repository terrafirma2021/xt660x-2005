/* Entry 74b8 */

/* WARNING: Removing unreachable block (RAM,0x7fe3) */
/* WARNING: Removing unreachable block (RAM,0x7ff5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_74b8(undefined2 param_1)

{
  int iVar1;
  byte extraout_A;
  undefined1 uVar2;
  byte extraout_A_00;
  byte extraout_A_01;
  byte extraout_A_02;
  undefined1 extraout_A_03;
  byte extraout_A_04;
  byte extraout_A_05;
  byte bVar3;
  undefined1 extraout_A_06;
  byte extraout_A_07;
  byte extraout_A_08;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  byte bVar8;
  ushort uVar9;
  
  DAT_08bc = DAT_08bc | 0x40;
  lookup_u8_uniform_axis();
  DAT_095e = (ushort)extraout_A << 3;
  bVar8 = DAT_0bd2;
  if (((DAT_0d54 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    if ((DAT_0bfe & 0x80) == 0) {
LAB_751f:
      DAT_08b5 = DAT_08b5 & 0xf9;
    }
    else {
      uVar6 = DAT_0c9c - DAT_0c9a;
      if (DAT_0c9c < DAT_0c9a) {
        uVar6 = CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
      }
      if (DAT_4e42 < uVar6) {
        if ((~DAT_08b5 & 2) == 0) {
          DAT_08b5 = DAT_08b5 & 0xfb | 2;
        }
        else if (DAT_0d8a < DAT_0b4c) {
          if ((DAT_08af & 0x10) != 0) {
            DAT_08af = DAT_08af & 0xef;
            DAT_0bd2 = DAT_0bd2 | 0x80;
          }
          DAT_0bab = DAT_0bab & 0xef;
          bVar8 = DAT_0bd2;
        }
      }
      else {
        if (((((~DAT_0881 & 0x10) != 0) || (DAT_4e40 < DAT_0900._0_1_)) ||
            ((DAT_4e41 < DAT_08e8._0_1_ || (((~DAT_0bab & 0x20) != 0 || ((~DAT_0bab & 8) != 0))))))
           || ((~DAT_08af & 4) != 0)) goto LAB_751f;
        if ((DAT_08b5 & 4) == 0) {
          DAT_08b5 = DAT_08b5 & 0xfd | 4;
          DAT_0bab = DAT_0bab | 0x10;
        }
        else if ((DAT_4e3e < DAT_0b3f) && ((~DAT_08af & 0x10) == 0)) {
          DAT_08af = DAT_08af | 0x10;
          bVar8 = DAT_0bd2 | 0x80;
          if ((~DAT_08b8 & 0x10) == 0) {
            DAT_08b8 = DAT_08b8 | 0x10;
            bVar8 = DAT_0bd2 | 0x88;
          }
        }
      }
    }
  }
  DAT_0bd2 = bVar8;
  if (DAT_4bca < DAT_0a44) {
    if (DAT_4bc8 <= DAT_0a44) {
      DAT_088c = DAT_088c & 0xf7;
    }
  }
  else {
    DAT_088c = DAT_088c | 8;
  }
  if (DAT_4bd2 < DAT_0a44) {
    if (DAT_4bd0 <= DAT_0a44) {
      DAT_088c = DAT_088c & 0xfb;
    }
  }
  else {
    DAT_088c = DAT_088c | 4;
  }
  if (DAT_4bce < DAT_0a44) {
    if (DAT_4bcc <= DAT_0a44) {
      DAT_088c = DAT_088c & 0xfd;
    }
  }
  else {
    DAT_088c = DAT_088c | 2;
  }
  if (((~DAT_08af & 8) == 0) && ((~DAT_08af & 4) == 0)) {
    if ((~DAT_0886 & 0x10) == 0) {
      if (DAT_3491 <= DAT_0b18) {
        DAT_0886 = DAT_0886 | 0x10;
      }
    }
    else if (DAT_3492 <= DAT_0b19) {
      if (((DAT_0886 & 0x40) != 0) && ((DAT_0886 & 0x10) != 0)) {
        DAT_088a = DAT_088a | 0x22;
      }
      DAT_0886 = DAT_0886 & 0xef;
    }
  }
  if (((~DAT_08af & 0x20) == 0) && ((~DAT_08af & 0x10) == 0)) {
    if (((~DAT_08af & 8) == 0) && (((~DAT_08af & 4) == 0 && (DAT_0a06 <= DAT_08ec)))) {
      if ((DAT_0886 & 8) != 0) {
        if ((DAT_0886 & 0x40) != 0) {
          DAT_088a = DAT_088a | 0x22;
        }
        goto LAB_7659;
      }
    }
    else if (DAT_3490 < DAT_0c90._0_1_) {
      if ((DAT_348f <= DAT_0c90._0_1_) && ((DAT_0886 & 8) != 0)) {
        if ((DAT_0886 & 0x40) != 0) {
          DAT_088a = DAT_088a | 0x44;
        }
        goto LAB_7659;
      }
    }
    else {
      DAT_0886 = DAT_0886 | 8;
    }
  }
  else {
LAB_7659:
    DAT_0886 = DAT_0886 & 0xf7;
  }
  if (((DAT_348a < DAT_08f4) && (DAT_3489 < DAT_0afa)) && ((DAT_088d & 4) != 0)) {
    if ((~DAT_0886 & 0x40) != 0) {
      if (DAT_348d <= DAT_0900._0_1_) goto LAB_7697;
      if ((DAT_0886 & 0x40) == 0) goto LAB_777d;
      DAT_088a = DAT_088a | 0x88;
LAB_76fd:
      if ((DAT_097a == 0) &&
         ((((bVar8 = DAT_3481, bVar3 = DAT_3484, (~DAT_088a & 0x80) != 0 ||
            ((~DAT_088a & 0x40) != 0)) ||
           (bVar8 = DAT_3482, bVar3 = DAT_3485, (~DAT_088a & 0x20) != 0)) ||
          (bVar8 = DAT_3483, bVar3 = DAT_3486, (~DAT_088a & 0x10) != 0)))) {
        DAT_097a = bVar8;
        DAT_0a04 = bVar3;
      }
      if ((DAT_0a86 == 0x80) &&
         (((bVar8 = DAT_4b09, uVar2 = DAT_4b0c, (~DAT_088a & 8) != 0 ||
           ((DAT_4b08 != '\0' &&
            ((((~DAT_088a & 4) != 0 || (bVar8 = DAT_4b0a, uVar2 = DAT_4b0d, (~DAT_088a & 2) != 0))
             || (bVar8 = DAT_4b0b, uVar2 = DAT_4b0e, (~DAT_088a & 1) != 0)))))) &&
          (DAT_0a86 = bVar8, bVar8 < 0x80)))) {
        DAT_0a87 = uVar2;
      }
      goto LAB_777a;
    }
    if (DAT_0900._0_1_ <= DAT_348e) goto LAB_777d;
LAB_7697:
    if (((((DAT_0886 & 0x10) == 0) || ((~DAT_08af & 8) != 0)) || ((~DAT_08af & 4) != 0)) &&
       ((((~DAT_08af & 0x20) != 0 || ((~DAT_08af & 0x10) != 0)) || ((DAT_0886 & 8) == 0)))) {
      if ((DAT_0886 & 0x40) != 0) goto LAB_76fd;
      goto LAB_777d;
    }
    if (DAT_0b16 <= DAT_34a6) goto LAB_7785;
    if ((DAT_0b17 < DAT_348c) || ((DAT_0d87 == '\t' && ((DAT_0896._0_1_ & 0x10) == 0)))) {
      if ((DAT_0886 & 0x40) != 0) {
        DAT_088a = DAT_088a | 0x11;
        goto LAB_76fd;
      }
      goto LAB_777d;
    }
    DAT_0886 = DAT_0886 | 0x40;
    DAT_097a = 0;
    DAT_0a04 = 0;
  }
  else {
    if ((DAT_0886 & 0x40) == 0) goto LAB_777d;
LAB_777a:
    DAT_0b16 = 0;
LAB_777d:
    DAT_0886 = DAT_0886 & 0xe7;
LAB_7785:
    DAT_0886 = DAT_0886 & 0xbf;
    DAT_088a = 0;
    if (((DAT_0900._0_1_ < DAT_3488) || (DAT_08f4 <= DAT_348a)) || ((~DAT_0896._0_1_ & 0x10) == 0))
    {
      DAT_097a = 0x80;
    }
  }
  if ((DAT_0d7c <= DAT_0a2e._0_1_) || (DAT_0900._0_1_ < DAT_4b11)) {
    DAT_0a86 = 0x80;
  }
  if ((~DAT_08b1 & 8) == 0) {
    DAT_0886 = DAT_0886 & 0xf9;
  }
  else {
    if (DAT_34aa < DAT_0a44) {
      if (DAT_34a8 < DAT_0a44) {
        DAT_0886 = DAT_0886 & 0xfb;
      }
    }
    else {
      DAT_0886 = DAT_0886 | 4;
    }
    if (DAT_34ae < DAT_0a44) {
      if (DAT_34ac < DAT_0a44) {
        DAT_0886 = DAT_0886 & 0xfd;
      }
    }
    else {
      DAT_0886 = DAT_0886 | 2;
    }
  }
  sVar7 = DAT_08ce - DAT_08e8;
  if (DAT_08ce < DAT_08e8) {
    sVar7 = CONCAT11((~(byte)((ushort)sVar7 >> 8) + 1) - ((char)-(char)sVar7 != '\0'),-(char)sVar7);
    uVar4 = scale_u16_by_u8(param_1,sVar7);
    sVar5 = CONCAT11((~(byte)((ushort)uVar4 >> 8) + 1) - ((char)-(char)uVar4 != '\0'),-(char)uVar4);
  }
  else {
    sVar5 = scale_u16_by_u8(param_1,sVar7);
  }
  DAT_08e8 = sVar5 + DAT_08e8;
  if (DAT_0b03 < DAT_19d8) {
    DAT_08e8 = DAT_08ce;
  }
  if (DAT_0afe < 100) {
    DAT_08f0 = DAT_0c8c;
    sVar5 = sVar7;
  }
  else {
    sVar5 = DAT_0c8c - DAT_08f0;
    if (DAT_0c8c < DAT_08f0) {
      sVar5 = CONCAT11((~(byte)((ushort)sVar5 >> 8) + 1) - ((char)-(char)sVar5 != '\0'),-(char)sVar5
                      );
      uVar4 = scale_u16_by_u8(sVar7,sVar5);
      sVar7 = CONCAT11((~(byte)((ushort)uVar4 >> 8) + 1) - ((char)-(char)uVar4 != '\0'),-(char)uVar4
                      );
    }
    else {
      sVar7 = scale_u16_by_u8(sVar7,sVar5);
    }
    DAT_08f0 = sVar7 + DAT_08f0;
  }
  DAT_0dde._1_1_ = DAT_0c8c._0_1_ - DAT_08f0._0_1_;
  if (DAT_0c8c._0_1_ < DAT_08f0._0_1_) {
    DAT_0dde._1_1_ = -(byte)DAT_0dde;
    DAT_0dde._0_1_ = 0x80;
  }
  else {
    DAT_0dde._0_1_ = 0;
  }
  if (0x7f < (byte)DAT_0dde) {
    DAT_0dde._1_1_ = 0x7f;
  }
  bVar8 = (byte)DAT_0dde;
  if (DAT_0dde._0_1_ != 0) {
    bVar8 = -(byte)DAT_0dde;
  }
  DAT_0988 = bVar8 + 0x80;
  DAT_0989 = DAT_0988;
  if ((byte)DAT_0dde <= DAT_3344) {
    DAT_0989 = -0x80;
    DAT_0dde._1_1_ = 0;
  }
  uVar4 = FUN_cc7b();
  _DAT_0de7 = CONCAT12(DAT_0de7._0_1_,uVar4);
  interp_u8_q8_index();
  uVar6 = (ushort)extraout_A_00 * (ushort)(byte)DAT_0dde;
  DAT_0dde._1_1_ = (byte)(uVar6 >> 8);
  DAT_0de0._0_1_ = (undefined1)uVar6;
  if ((DAT_0dde._0_1_ & 0x80) == 0) {
    DAT_098a = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      DAT_098a = -1;
    }
  }
  else {
    DAT_098a = -0x8000 - uVar6;
    if (0x8000 < uVar6) {
      DAT_098a = 0;
    }
  }
  DAT_0de0._1_1_ = DAT_333a;
  if ((DAT_0d87 == '\t') && ((DAT_0896._0_1_ & 0x10) == 0)) {
    DAT_0de0._1_1_ = DAT_3339;
  }
  sVar7 = DAT_08ce - DAT_08ea;
  DAT_098e = extraout_A_00;
  if (DAT_08ce < DAT_08ea) {
    uVar4 = scale_u16_by_u8(sVar5,CONCAT11((~(byte)((ushort)sVar7 >> 8) + 1) -
                                           ((char)-(char)sVar7 != '\0'),-(char)sVar7));
    sVar7 = CONCAT11((~(byte)((ushort)uVar4 >> 8) + 1) - ((char)-(char)uVar4 != '\0'),-(char)uVar4);
  }
  else {
    sVar7 = scale_u16_by_u8(sVar5,sVar7);
  }
  uVar6 = sVar7 + DAT_08ea;
  DAT_08ea._0_1_ = (byte)(uVar6 >> 8);
  bVar8 = DAT_08ea._0_1_;
  if ((byte)(DAT_333f - 1U) < DAT_0b02) {
    DAT_0885 = DAT_0885 & 0xfd;
    if (DAT_08e8._0_1_ <= DAT_333b) {
      if (DAT_333c <= DAT_08ed) {
        DAT_0b02 = 0;
        DAT_0b04 = 0;
        goto LAB_79b5;
      }
      goto LAB_79b9;
    }
  }
  else if ((byte)((DAT_0b04 + 1) - (0xfe < DAT_0b04)) < DAT_333d) {
    DAT_0b04 = (DAT_0b04 + 1) - (0xfe < DAT_0b04);
LAB_79b5:
    DAT_0885 = DAT_0885 | 2;
LAB_79b9:
    if (((DAT_0885 & 2) != 0) && (bVar8 = DAT_08ea._0_1_ - DAT_333e, DAT_08ea._0_1_ < DAT_333e)) {
      bVar8 = 0;
    }
  }
  DAT_0de2 = DAT_08e8._0_1_ - bVar8;
  if (DAT_08e8._0_1_ < bVar8) {
    DAT_0de2 = -DAT_0de2;
    DAT_0de0._1_1_ = 0x80;
  }
  else {
    DAT_0de0._1_1_ = 0;
  }
  if (0x7f < DAT_0de2) {
    DAT_0de2 = 0x7f;
  }
  bVar8 = DAT_0de2;
  if ((byte)DAT_0de0 != 0) {
    bVar8 = -DAT_0de2;
  }
  DAT_0984 = bVar8 + 0x80;
  if ((DAT_3340 <= DAT_08e8._0_1_) || (DAT_0afe < 100)) {
    DAT_0de2 = 0;
    DAT_0984 = -0x80;
  }
  if (DAT_3341 < DAT_0de2) {
    DAT_0985 = DAT_0984;
  }
  else {
    DAT_0985 = -0x80;
    DAT_0de2 = 0;
  }
  DAT_08ea = uVar6;
  uVar4 = FUN_cc7b();
  _DAT_0de7 = CONCAT12(DAT_0de7._0_1_,uVar4);
  interp_u8_q8_index();
  uVar6 = (ushort)extraout_A_01 * (ushort)DAT_0de2;
  DAT_0de2 = (byte)(uVar6 >> 8);
  DAT_0de3 = (undefined1)uVar6;
  if (((byte)DAT_0de0 & 0x80) == 0) {
    DAT_0986 = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      DAT_0986 = -1;
    }
  }
  else {
    DAT_0986 = -0x8000 - uVar6;
    if (0x8000 < uVar6) {
      DAT_0986 = 0;
    }
  }
  DAT_098d = extraout_A_01;
  if (((byte)DAT_0de0 & 0x80) == 0) {
    if ((DAT_0dde._0_1_ & 0x80) == 0) {
      DAT_0de5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_) + uVar6;
      if (0x7f < (byte)((ushort)DAT_0de5 >> 8)) {
        DAT_0de5 = 0x7fff;
      }
    }
    else {
      DAT_0de5 = uVar6 - CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
      if (uVar6 < CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_)) {
        DAT_0de5 = CONCAT11((~(byte)((ushort)DAT_0de5 >> 8) + 1) - ((char)-(char)DAT_0de5 != '\0'),
                            -(char)DAT_0de5);
        goto LAB_7b07;
      }
    }
LAB_7aff:
    DAT_0de4 = 0;
    uVar6 = scale_u16_by_u8();
    DAT_0982 = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      DAT_0982 = -1;
    }
  }
  else {
    if ((DAT_0dde._0_1_ & 0x80) == 0) {
      DAT_0de5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_) - uVar6;
      if (uVar6 <= CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_)) goto LAB_7aff;
      DAT_0de5 = CONCAT11((~(byte)((ushort)DAT_0de5 >> 8) + 1) - ((char)-(char)DAT_0de5 != '\0'),
                          -(char)DAT_0de5);
    }
    else {
      DAT_0de5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_) + uVar6;
      if (0x7f < (byte)((ushort)DAT_0de5 >> 8)) {
        DAT_0de5 = -0x8000;
      }
    }
LAB_7b07:
    DAT_0de4 = 0x80;
    sVar7 = scale_u16_by_u8();
    if (7 < (byte)((ushort)sVar7 >> 8)) {
      sVar7 = 0x800;
    }
    _DAT_0de7 = CONCAT21(sVar7,DAT_0de7_2);
    DAT_0982 = -0x8000 - sVar7;
  }
  if ((DAT_0de4 & 0x80) == 0) {
    DAT_098c = (undefined1)((ushort)(DAT_0de5 + -0x8000) >> 8);
  }
  else {
    DAT_098c = (undefined1)((ushort)(-0x8000 - DAT_0de5) >> 8);
  }
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_18fa;
  DAT_0908 = axis_index_u16_ascending();
  DAT_0ba2 = DAT_08e8;
  DAT_0ba4 = &axis_raw_18e6;
  DAT_090e = axis_index_u16_ascending();
  DAT_0de0._0_1_ = (undefined1)((ushort)DAT_0908 >> 8);
  DAT_0de0._1_1_ = (byte)DAT_0908;
  DAT_0dde._0_1_ = (byte)((ushort)DAT_090e >> 8);
  DAT_0dde._1_1_ = (byte)DAT_090e;
  bilinear_modulo24_grid();
  if (extraout_A_02 < 0x17) {
    DAT_0a1b = extraout_A_02;
    if (extraout_A_02 == 0xb) {
      DAT_0a1b = 10;
    }
  }
  else {
    DAT_0a1b = 0x16;
  }
  if ((~DAT_0881 & 0x10) != 0) {
    lookup_u8_uniform_u16_axis();
    DAT_0938 = extraout_A_03;
    DAT_0934 = lookup_u8_uniform_axis();
    lookup_u8_uniform_u16_axis();
    DAT_0937 = extraout_A_04;
    lookup_u8_uniform_u16_axis();
    DAT_0936 = extraout_A_05;
    uVar4 = multiply_u16_shift8_saturate(DAT_0979 + 0x180,(ushort)extraout_A_05 * (ushort)DAT_0937);
    uVar6 = multiply_u16_shift8_saturate(uVar4);
    uVar9 = (ushort)((uint)uVar6 * (uint)DAT_0934 >> 0x10);
    if (uVar9 < 0x4000) {
      DAT_0932 = (ushort)(byte)((byte)((uint)uVar6 * (uint)DAT_0934 >> 8) >> 6) + uVar9 * 4;
    }
    else {
      DAT_0932 = 0xffff;
    }
    DAT_08e8 = DAT_08ce;
    DAT_08ea = DAT_08ce;
    DAT_092a = DAT_095e + DAT_0932;
    if (CARRY2(DAT_095e,DAT_0932)) {
      DAT_092a = -1;
    }
    DAT_092e = DAT_092a;
    FUN_864e();
    iVar1 = (uint)DAT_0932 * (uint)DAT_0cec * 2;
    uVar6 = (ushort)iVar1;
    sVar7 = uVar6 + 0x80;
    bVar3 = (byte)((uint)iVar1 >> 0x18);
    bVar8 = bVar3 + (0xff7f < uVar6);
    sVar5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
    if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),bVar8) < 0x100) {
      DAT_0dde._1_1_ = (byte)((ushort)sVar7 >> 8);
      DAT_092c = CONCAT11(bVar8,(byte)DAT_0dde) + DAT_095e;
      DAT_0dde._0_1_ = bVar8;
      sVar5 = sVar7;
      if (CARRY2(CONCAT11(bVar8,(byte)DAT_0dde),DAT_095e)) goto LAB_7c69;
    }
    else {
LAB_7c69:
      sVar7 = sVar5;
      DAT_092c = -1;
    }
    if ((~DAT_0a16 & 2) == 0) {
      DAT_0881 = DAT_0881 | 0x80;
      DAT_0a16 = DAT_0a16 & 0xfe;
    }
    else {
      DAT_0881 = DAT_0881 | 0x40;
      DAT_0a16 = DAT_0a16 & 0xfd;
    }
    if ((~DAT_088b & 0x80) == 0) {
      DAT_0a26 = 0;
      DAT_0a1e = DAT_18e0;
      if (0x16 < DAT_18e0) {
        DAT_0a1e = 0x16;
      }
      if (DAT_0a1e < 0xc) {
        if (DAT_0a1e == 0xb) {
          DAT_0a1e = 10;
        }
      }
      else {
        DAT_0a1e = DAT_0a1e - 0xc;
      }
      DAT_0a28 = 0;
      DAT_0a1f = DAT_0a1e;
    }
    DAT_0a16 = DAT_0a16 & 0xf7;
    DAT_0930 = DAT_092c;
    goto LAB_8578;
  }
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_1b0c;
  DAT_090a = axis_index_u16_ascending();
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_374e;
  DAT_0b8c = axis_index_u16_ascending();
  if ((~DAT_0a16 & 2) == 0) {
    if ((~DAT_0b80 & 1) == 0) {
      DAT_0ba2 = DAT_0c90;
      DAT_0ba4 = &axis_raw_1ad0;
      DAT_0910 = axis_index_u16_ascending();
      DAT_0e06 = (undefined1)((ushort)DAT_0910 >> 8);
      DAT_0e08 = DAT_0910 << 8;
      DAT_0e0a = DAT_090a << 8;
      DAT_0952 = bilinear_u16_grid();
    }
    else {
      DAT_0ba2 = DAT_0c90;
      DAT_0ba4 = &axis_raw_3712;
      DAT_0b8e = axis_index_u16_ascending();
      DAT_0e06 = (undefined1)((ushort)DAT_0b8e >> 8);
      DAT_0e08 = DAT_0b8e << 8;
      DAT_0e0a = DAT_0b8c << 8;
      DAT_0952 = bilinear_u16_grid();
    }
  }
  else if ((~DAT_0b80 & 1) == 0) {
    DAT_0ba2 = DAT_0c90;
    DAT_0ba4 = &axis_raw_1ad0;
    DAT_0910 = axis_index_u16_ascending();
    DAT_0e06 = (undefined1)((ushort)DAT_0910 >> 8);
    DAT_0e08 = DAT_0910 << 8;
    DAT_0e0a = DAT_090a << 8;
    DAT_0954 = bilinear_u16_grid();
  }
  else {
    DAT_0ba2 = DAT_0c90;
    DAT_0ba4 = &axis_raw_3712;
    DAT_0b8e = axis_index_u16_ascending();
    DAT_0e06 = (undefined1)((ushort)DAT_0b8e >> 8);
    DAT_0e08 = DAT_0b8e << 8;
    DAT_0e0a = DAT_0b8c << 8;
    DAT_0954 = bilinear_u16_grid();
  }
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_262e;
  DAT_090c = axis_index_u16_ascending();
  if (((((~DAT_08af & 8) != 0) || (DAT_0ba2 = DAT_08e8, (~DAT_08af & 4) != 0)) &&
      (DAT_0ba2 = DAT_4e62, (~DAT_08af & 0x20) == 0)) &&
     (DAT_0ba2 = DAT_4e62, (~DAT_08af & 0x10) == 0)) {
    DAT_0ba2 = DAT_08e8;
  }
  DAT_0ba4 = &axis_raw_25f2;
  DAT_0912 = axis_index_u16_ascending();
  DAT_0e06 = (undefined1)((ushort)DAT_0912 >> 8);
  if ((~DAT_0a16 & 2) == 0) {
    DAT_0e08 = DAT_0912 << 8;
    DAT_0e0a = DAT_090c << 8;
    DAT_0956 = bilinear_u16_grid();
  }
  else {
    DAT_0e08 = DAT_0912 << 8;
    DAT_0e0a = DAT_090c << 8;
    DAT_0958 = bilinear_u16_grid();
  }
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_311a;
  DAT_0cd6 = axis_index_u16_ascending();
  DAT_0ba2 = DAT_0c90;
  DAT_0ba4 = &axis_raw_3116;
  DAT_0cd8 = axis_index_u16_ascending();
  DAT_0dde._0_1_ = (byte)((ushort)DAT_0cd6 >> 8);
  DAT_0dde._1_1_ = (byte)DAT_0cd6;
  DAT_0de0._0_1_ = (undefined1)((ushort)DAT_0cd8 >> 8);
  DAT_0de0._1_1_ = (byte)DAT_0cd8;
  sVar7 = bilinear_u8_grid();
  DAT_0cd2 = (byte)((ushort)(sVar7 + 0x80) >> 8);
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_3126;
  DAT_0cda = axis_index_u16_ascending();
  DAT_0ba2 = DAT_08e8;
  DAT_0ba4 = &axis_raw_3122;
  DAT_0cdc = axis_index_u16_ascending();
  DAT_0dde._0_1_ = (byte)((ushort)DAT_0cda >> 8);
  DAT_0dde._1_1_ = (byte)DAT_0cda;
  DAT_0de0._0_1_ = (undefined1)((ushort)DAT_0cdc >> 8);
  DAT_0de0._1_1_ = (byte)DAT_0cdc;
  sVar7 = bilinear_u8_grid();
  DAT_0cd3 = (byte)((ushort)(sVar7 + 0x80) >> 8);
  DAT_0cd1 = DAT_0cd3;
  if (DAT_3114 == -0x80) {
    DAT_0cd1 = DAT_0cd2;
  }
  bVar8 = DAT_0cd4 + 0x80;
  if (DAT_0cd4 < 0x80) {
    DAT_0cd0 = DAT_0cd1 + bVar8;
    if (!CARRY1(DAT_0cd1,bVar8)) {
      DAT_0cd0 = 0;
    }
  }
  else {
    DAT_0cd0 = DAT_0cd1 + bVar8;
    if (CARRY1(DAT_0cd1,bVar8)) {
      DAT_0cd0 = 0xff;
    }
  }
  DAT_0ba2 = CONCAT11(DAT_0cd0,(undefined1)DAT_0ba2);
  DAT_0ba4 = &axis_raw_321a;
  DAT_0cde = axis_index_u8_ascending();
  DAT_0ba2 = DAT_0c90;
  DAT_0ba4 = &axis_raw_3216;
  DAT_0ce0 = axis_index_u16_ascending();
  DAT_0dde._0_1_ = (byte)((ushort)DAT_0cde >> 8);
  DAT_0dde._1_1_ = (byte)DAT_0cde;
  DAT_0de0._0_1_ = (undefined1)((ushort)DAT_0ce0 >> 8);
  DAT_0de0._1_1_ = (byte)DAT_0ce0;
  sVar7 = bilinear_u8_grid();
  DAT_0cd5 = (byte)((ushort)(sVar7 + 0x80) >> 8);
  if ((DAT_0cd0 == 0) || (DAT_0cd5 == 0)) {
LAB_7fa5:
    DAT_0ce2 = 0x100;
  }
  else {
    uVar6 = (ushort)DAT_0cd5 * 2 * (DAT_0cd0 + 0x80);
    DAT_0dde._1_1_ = 0xff7f < uVar6;
    DAT_0dde._0_1_ = 0;
    DAT_0de0._0_1_ = (undefined1)(uVar6 + 0x80 >> 8);
    uVar6 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
    if ((uVar6 == 0) || (DAT_1ace == 0)) goto LAB_7fa5;
    uVar4 = FUN_c407(DAT_1ace + 0x80,(byte)DAT_0dde);
    if ((char)((ushort)uVar4 >> 8) == '\0') {
      DAT_0dde._0_1_ = (byte)uVar4;
      DAT_0ce2 = CONCAT11(DAT_0dde._0_1_ + (0xff7f < uVar6),(char)(uVar6 + 0x80 >> 8));
      if (CARRY1(DAT_0dde._0_1_,0xff7f < uVar6)) goto LAB_7fa0;
    }
    else {
LAB_7fa0:
      DAT_0ce2 = 0xffff;
    }
  }
  DAT_0ce4 = multiply_u16_shift8_saturate();
  DAT_0ce6 = multiply_u16_shift8_saturate();
  DAT_0ce8 = multiply_u16_shift8_saturate();
  DAT_0cea = multiply_u16_shift8_saturate();
  bVar8 = (byte)(DAT_0994 >> 1);
  DAT_0994 = CONCAT11((byte)(DAT_0994 >> 9) - (bVar8 < DAT_3313),bVar8 - DAT_3313) << 1;
  bVar8 = (byte)(DAT_0996 >> 1);
  DAT_0996 = CONCAT11((byte)(DAT_0996 >> 9) - (bVar8 < DAT_3314),bVar8 - DAT_3314) << 1;
  DAT_0992 = DAT_0996;
  if (DAT_0996 < DAT_0994) {
    DAT_0992 = DAT_0994;
  }
  lookup_u8_uniform_u16_axis();
  DAT_09a0 = extraout_A_06;
  if ((~DAT_0a16 & 2) == 0) {
    FUN_8623();
    DAT_095c = extraout_A_07;
  }
  else {
    FUN_8623();
    DAT_095d = extraout_A_08;
  }
  if (DAT_19de != '\x01') {
    bVar8 = DAT_19d6;
    if (8 < DAT_19d6) {
      bVar8 = 8;
    }
    bVar8 = bVar8 << 1;
    if (((~DAT_08af & 0x20) == 0) && ((~DAT_08af & 0x10) == 0)) {
      if (((~DAT_08af & 8) == 0) && ((~DAT_08af & 4) == 0)) {
        if ((~DAT_088d & 4) != 0) {
          if (DAT_08e8._0_1_ < DAT_19d5) {
            bVar3 = DAT_08e8._0_1_ + (&UNK_c255)[bVar8];
            if (CARRY1(DAT_08e8._0_1_,(&UNK_c255)[bVar8])) {
              DAT_0de0._0_1_ = 0;
              DAT_0de0._1_1_ = DAT_19d5;
              sVar7 = (ushort)(byte)(&UNK_c256)[bVar8] * ((ushort)bVar3 - (ushort)DAT_19d5 & 0xff);
              if ((char)((ushort)sVar7 >> 8) != '\0') {
                sVar7 = 0xff;
              }
            }
            else if (bVar3 < DAT_19d5) {
              sVar7 = 0;
            }
            else {
              sVar7 = (ushort)(byte)(bVar3 - DAT_19d5) * (ushort)(byte)(&UNK_c256)[bVar8];
              if ((char)((ushort)sVar7 >> 8) != '\0') {
                sVar7 = 0xff;
              }
            }
            DAT_0998 = (byte)sVar7;
            if (DAT_19d8 <= DAT_0b03) goto LAB_81e5;
          }
          goto LAB_81d9;
        }
        DAT_0998 = 0;
      }
      else {
        if (((~DAT_08af & 0x20) != 0) || ((~DAT_08af & 0x10) != 0)) goto LAB_81d9;
        DAT_0998 = 0;
      }
    }
    else {
LAB_81d9:
      DAT_0b03 = (DAT_0b03 + 1) - (0xfe < DAT_0b03);
      DAT_0998 = 0xff;
    }
LAB_81e5:
    if (DAT_19de == '\x02') {
      DAT_0960 = (ushort)DAT_19e1 << 1;
      DAT_0962 = DAT_0960;
      DAT_0964 = DAT_0960;
      DAT_0966 = DAT_0960;
    }
    else if (DAT_19de == '\x04') {
      DAT_0960 = (ushort)DAT_19e2 << 1;
      DAT_0962 = (ushort)DAT_19e3 << 1;
      DAT_0964 = DAT_0960;
      DAT_0966 = DAT_0962;
    }
    else {
      sVar7 = CONCAT11(0xdf < DAT_0992._0_1_,DAT_0992._0_1_ + 0x20) << 2;
      bVar8 = (byte)sVar7;
      sVar7 = CONCAT11((char)((ushort)sVar7 >> 8) + CARRY1(bVar8,DAT_097b),bVar8 + DAT_097b) * 4 +
              -0x80;
      bVar8 = (byte)sVar7;
      sVar7 = CONCAT11((char)((ushort)sVar7 >> 8) + CARRY1(bVar8,DAT_0980),bVar8 + DAT_0980) << 2;
      DAT_096c = ((DAT_097e >> 5) +
                 CONCAT11((char)((ushort)sVar7 >> 8) + -0x80,(char)sVar7) + DAT_0982) - 0x400 >> 1;
      sVar7 = CONCAT11(0xdf < DAT_0992._0_1_,DAT_0992._0_1_ + 0x20) << 2;
      bVar8 = (byte)sVar7;
      sVar7 = CONCAT11((char)((ushort)sVar7 >> 8) + CARRY1(bVar8,DAT_097c),bVar8 + DAT_097c) * 4 +
              -0x80;
      bVar8 = (byte)sVar7;
      sVar7 = CONCAT11((char)((ushort)sVar7 >> 8) + CARRY1(bVar8,DAT_0980),bVar8 + DAT_0980) << 2;
      DAT_0dde = CONCAT11((char)((ushort)sVar7 >> 8) + -0x80,(char)sVar7) + DAT_0982;
      DAT_096e = ((DAT_097e >> 5) + DAT_0dde) - 0x400 >> 1;
      uVar6 = multiply_u16_shift8_saturate(DAT_0979 + 0x180,DAT_096e);
      DAT_096a = multiply_u16_shift8_saturate(uVar6 >> 1);
      uVar6 = multiply_u16_shift8_saturate(DAT_0979 + 0x180);
      DAT_0968 = multiply_u16_shift8_saturate(uVar6 >> 1);
      DAT_0964 = multiply_u16_shift8_saturate(DAT_0968);
      DAT_0966 = multiply_u16_shift8_saturate();
      DAT_0960 = multiply_u16_shift8_saturate();
      DAT_0962 = multiply_u16_shift8_saturate();
      if (DAT_097a == 0x80) {
LAB_830d:
        DAT_0a04 = 0;
        DAT_097a = 0x80;
      }
      else if (DAT_097a < 0x80) {
        bVar8 = DAT_097a + DAT_0a04;
        if ((CARRY1(DAT_097a,DAT_0a04)) || (DAT_097a = bVar8, 0x7f < bVar8)) goto LAB_830d;
      }
      else {
        bVar8 = DAT_097a - DAT_0a04;
        if ((DAT_097a < DAT_0a04) || (DAT_097a = bVar8, bVar8 < 0x80)) goto LAB_830d;
      }
      FUN_864e();
    }
    if ((~DAT_0a16 & 2) == 0) {
      if (DAT_095c < 0x80) {
        DAT_0dde = (ushort)(byte)(0x80 - DAT_095c) * 4;
        sVar7 = DAT_0ce4 + (ushort)(byte)(0x80 - DAT_095c) * -4;
        if (DAT_0ce4 < DAT_0dde) {
          sVar7 = 0;
        }
      }
      else {
        DAT_0dde = (ushort)(byte)(DAT_095c + 0x80) * 4;
        sVar7 = DAT_0ce4 + DAT_0dde;
        if (CARRY2(DAT_0ce4,DAT_0dde)) {
          sVar7 = -1;
        }
      }
      DAT_0942 = multiply_u16_shift8_saturate(sVar7);
      if (DAT_095c < 0x80) {
        DAT_0dde = (ushort)(byte)(0x80 - DAT_095c) * 4;
        sVar7 = DAT_0ce8 + (ushort)(byte)(0x80 - DAT_095c) * -4;
        if (DAT_0ce8 < DAT_0dde) {
          sVar7 = 0;
        }
      }
      else {
        DAT_0dde = (ushort)(byte)(DAT_095c + 0x80) * 4;
        sVar7 = DAT_0ce8 + DAT_0dde;
        if (CARRY2(DAT_0ce8,DAT_0dde)) {
          sVar7 = -1;
        }
      }
      DAT_0944 = multiply_u16_shift8_saturate(sVar7);
      uVar4 = scale_u16_by_u8();
      DAT_0dde._1_1_ = (byte)((ushort)uVar4 >> 8);
      DAT_0de0._0_1_ = (undefined1)uVar4;
      DAT_0dde._0_1_ = ~DAT_0998;
      sVar5 = scale_u16_by_u8();
      sVar7 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
      uVar6 = sVar5 + sVar7;
      if (DAT_0ad4 != 0) {
        uVar6 = (ushort)((uint)(ushort)(DAT_0ad4 * -0x40) * (uint)uVar6 >> 0x10);
      }
      DAT_093c = DAT_19dc;
      if ((uVar6 < DAT_19dc) && (DAT_093c = uVar6, uVar6 < DAT_19da)) {
        DAT_093c = DAT_19da;
      }
      DAT_093e = DAT_093c;
      if ((~DAT_0ca8 & 1) == 0) {
        iVar1 = (uint)DAT_19d4 * 4 * (uint)DAT_093c;
        uVar6 = (ushort)iVar1;
        bVar3 = (byte)((uint)iVar1 >> 0x18);
        bVar8 = bVar3 + (0xff7f < uVar6);
        if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),bVar8) < 0x100) {
          DAT_0dde._1_1_ = (byte)(uVar6 + 0x80 >> 8);
          DAT_093e = CONCAT11(bVar8,(byte)DAT_0dde);
          DAT_0dde._0_1_ = bVar8;
          sVar7 = uVar6 + 0x80;
        }
        else {
          DAT_093e = 0xffff;
        }
      }
      DAT_092a = DAT_093e + DAT_095e;
      if (CARRY2(DAT_093e,DAT_095e)) {
        DAT_092a = -1;
      }
      DAT_0a16 = DAT_0a16 & 0xfe;
      if ((~DAT_0a16 & 8) == 0) {
        DAT_0881 = DAT_0881 & 0xbf;
      }
      DAT_0881 = DAT_0881 | 0x80;
      DAT_093a = DAT_092a;
      DAT_0940 = DAT_093c;
      goto LAB_8578;
    }
    if (DAT_095d < 0x80) {
      DAT_0dde = (ushort)(byte)(0x80 - DAT_095d) * 4;
      sVar7 = DAT_0ce6 + (ushort)(byte)(0x80 - DAT_095d) * -4;
      if (DAT_0ce6 < DAT_0dde) {
        sVar7 = 0;
      }
    }
    else {
      DAT_0dde = (ushort)(byte)(DAT_095d + 0x80) * 4;
      sVar7 = DAT_0ce6 + DAT_0dde;
      if (CARRY2(DAT_0ce6,DAT_0dde)) {
        sVar7 = -1;
      }
    }
    DAT_094e = multiply_u16_shift8_saturate(sVar7);
    if (DAT_095d < 0x80) {
      DAT_0dde = (ushort)(byte)(0x80 - DAT_095d) * 4;
      sVar7 = DAT_0cea + (ushort)(byte)(0x80 - DAT_095d) * -4;
      if (DAT_0cea < DAT_0dde) {
        sVar7 = 0;
      }
    }
    else {
      DAT_0dde = (ushort)(byte)(DAT_095d + 0x80) * 4;
      sVar7 = DAT_0cea + DAT_0dde;
      if (CARRY2(DAT_0cea,DAT_0dde)) {
        sVar7 = -1;
      }
    }
    DAT_0950 = multiply_u16_shift8_saturate(sVar7);
    uVar4 = scale_u16_by_u8();
    DAT_0dde._1_1_ = (byte)((ushort)uVar4 >> 8);
    DAT_0de0._0_1_ = (undefined1)uVar4;
    DAT_0dde._0_1_ = ~DAT_0998;
    sVar7 = scale_u16_by_u8();
    DAT_0948 = sVar7 + CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
    if (DAT_0ad4 != 0) {
      DAT_0948 = (ushort)((uint)(ushort)(DAT_0ad4 * -0x40) * (uint)DAT_0948 >> 0x10);
    }
    iVar1 = (uint)DAT_0948 * (uint)DAT_0cec * 2;
    uVar6 = (ushort)iVar1;
    sVar7 = uVar6 + 0x80;
    bVar3 = (byte)((uint)iVar1 >> 0x18);
    bVar8 = bVar3 + (0xff7f < uVar6);
    sVar5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
    if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),bVar8) < 0x100) {
      DAT_0dde._1_1_ = (byte)((ushort)sVar7 >> 8);
      uVar6 = CONCAT11(bVar8,(byte)DAT_0dde);
      DAT_095a = DAT_19dc;
      if ((uVar6 < DAT_19dc) && (DAT_095a = uVar6, uVar6 < DAT_19da)) {
        DAT_095a = DAT_19da;
      }
      DAT_094a = DAT_095a;
      DAT_0dde._0_1_ = bVar8;
      if ((~DAT_0ca8 & 1) == 0) {
        iVar1 = (uint)DAT_19d4 * 4 * (uint)DAT_095a;
        uVar6 = (ushort)iVar1;
        bVar3 = (byte)((uint)iVar1 >> 0x18);
        DAT_0dde._0_1_ = bVar3 + (0xff7f < uVar6);
        if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),DAT_0dde._0_1_) < 0x100) {
          DAT_0dde._1_1_ = (byte)(uVar6 + 0x80 >> 8);
          DAT_094a = CONCAT11(DAT_0dde._0_1_,(byte)DAT_0dde);
          sVar7 = uVar6 + 0x80;
        }
        else {
          DAT_094a = 0xffff;
          DAT_0dde._0_1_ = bVar8;
        }
      }
      DAT_092c = DAT_094a + DAT_095e;
      sVar5 = sVar7;
      if (CARRY2(DAT_094a,DAT_095e)) goto LAB_8563;
    }
    else {
LAB_8563:
      sVar7 = sVar5;
      DAT_092c = -1;
    }
    DAT_0881 = DAT_0881 | 0x40;
    DAT_0a16 = DAT_0a16 & 0xfd | 8;
    DAT_0946 = DAT_092c;
    DAT_094c = DAT_0948;
    goto LAB_8578;
  }
  DAT_0960 = 0x100;
  DAT_0962 = 0x100;
  DAT_0964 = 0x100;
  DAT_0966 = 0x100;
  uVar6 = (ushort)DAT_19df << 5;
  DAT_093c = DAT_19dc;
  if ((uVar6 < DAT_19dc) && (DAT_093c = uVar6, uVar6 < DAT_19da)) {
    DAT_093c = DAT_19da;
  }
  uVar6 = (ushort)DAT_19e0 << 5;
  DAT_0948 = DAT_19dc;
  if ((uVar6 < DAT_19dc) && (DAT_0948 = uVar6, uVar6 < DAT_19da)) {
    DAT_0948 = DAT_19da;
  }
  DAT_093e = DAT_093c;
  sVar7 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
  if ((~DAT_0ca8 & 1) == 0) {
    iVar1 = (uint)DAT_19d4 * 4 * (uint)DAT_093c;
    uVar6 = (ushort)iVar1;
    bVar3 = (byte)((uint)iVar1 >> 0x18);
    bVar8 = bVar3 + (0xff7f < uVar6);
    if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),bVar8) < 0x100) {
      DAT_0dde._1_1_ = (byte)(uVar6 + 0x80 >> 8);
      DAT_093e = CONCAT11(bVar8,(byte)DAT_0dde);
      DAT_0dde._0_1_ = bVar8;
      sVar7 = uVar6 + 0x80;
    }
    else {
      DAT_093e = 0xffff;
      sVar7 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
    }
  }
  DAT_0dde._1_1_ = (byte)((ushort)sVar7 >> 8);
  DAT_0de0._0_1_ = (undefined1)sVar7;
  DAT_092a = DAT_093e + DAT_095e;
  if (CARRY2(DAT_093e,DAT_095e)) {
    DAT_092a = -1;
  }
  DAT_093a = DAT_092a;
  DAT_0940 = DAT_093c;
  DAT_094c = DAT_0948;
  FUN_864e();
  iVar1 = (uint)DAT_094c * (uint)DAT_0cec * 2;
  uVar6 = (ushort)iVar1;
  sVar7 = uVar6 + 0x80;
  bVar3 = (byte)((uint)iVar1 >> 0x18);
  bVar8 = bVar3 + (0xff7f < uVar6);
  sVar5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
  if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),bVar8) < 0x100) {
    DAT_0dde._1_1_ = (byte)((ushort)sVar7 >> 8);
    uVar6 = CONCAT11(bVar8,(byte)DAT_0dde);
    DAT_095a = DAT_19dc;
    if ((uVar6 < DAT_19dc) && (DAT_095a = uVar6, uVar6 < DAT_19da)) {
      DAT_095a = DAT_19da;
    }
    DAT_094a = DAT_095a;
    DAT_0dde._0_1_ = bVar8;
    if ((~DAT_0ca8 & 1) == 0) {
      iVar1 = (uint)DAT_19d4 * 4 * (uint)DAT_095a;
      uVar6 = (ushort)iVar1;
      bVar3 = (byte)((uint)iVar1 >> 0x18);
      DAT_0dde._0_1_ = bVar3 + (0xff7f < uVar6);
      if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),DAT_0dde._0_1_) < 0x100) {
        DAT_0dde._1_1_ = (byte)(uVar6 + 0x80 >> 8);
        DAT_094a = CONCAT11(DAT_0dde._0_1_,(byte)DAT_0dde);
        sVar7 = uVar6 + 0x80;
      }
      else {
        DAT_094a = 0xffff;
        DAT_0dde._0_1_ = bVar8;
      }
    }
    DAT_092c = DAT_094a + DAT_095e;
    sVar5 = sVar7;
    if (CARRY2(DAT_094a,DAT_095e)) goto LAB_8136;
  }
  else {
LAB_8136:
    sVar7 = sVar5;
    DAT_092c = -1;
  }
  DAT_0a16 = DAT_0a16 & 0xfc;
  DAT_0881 = DAT_0881 | 0xc0;
  DAT_0946 = DAT_092c;
LAB_8578:
  DAT_0dde._1_1_ = (byte)((ushort)sVar7 >> 8);
  DAT_0de0._0_1_ = (undefined1)sVar7;
  DAT_08bc = DAT_08bc & 0xbf;
  return;
}


