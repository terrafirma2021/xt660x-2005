/* Entry b166 */

void FUN_b166(short param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  byte extraout_A;
  undefined1 extraout_A_00;
  undefined1 extraout_A_01;
  undefined1 extraout_A_02;
  byte extraout_A_03;
  byte extraout_A_04;
  undefined1 extraout_A_05;
  undefined2 uVar7;
  short sVar8;
  ushort uVar9;
  short sVar10;
  
  DAT_0882 = DAT_0882 & 0xef;
  DAT_08bc = DAT_08bc | 2;
  lookup_u8_uniform_axis();
  DAT_095e = (ushort)extraout_A << 3;
  lookup_u8_uniform_axis();
  DAT_0979 = extraout_A_00;
  lookup_u8_uniform_axis();
  DAT_098f = extraout_A_01;
  lookup_u8_uniform_axis();
  if (((DAT_0881 & 0x20) == 0) || ((~DAT_0880 & 8) != 0)) {
    DAT_0b3d = 0;
LAB_b1d7:
    bVar1 = DAT_089f & 0x3f;
  }
  else {
    DAT_0b3d = (DAT_0b3d + 1) - (0xfe < DAT_0b3d);
    if (DAT_0b3d < DAT_18b0) goto LAB_b1d7;
    bVar1 = DAT_089f | 0x80;
    if ((~(DAT_089f | 0x80) & 0x40) == 0) {
      DAT_0ca4 = DAT_0ca2;
      bVar1 = DAT_089f | 0xc0;
    }
  }
  DAT_089f = bVar1;
  sVar10 = param_1;
  DAT_0990 = extraout_A_02;
  if ((DAT_089f & 0x80) != 0) {
    sVar10 = DAT_0ca2 - DAT_0ca4;
    if (DAT_0ca2 < DAT_0ca4) {
      sVar10 = CONCAT11((~(byte)((ushort)sVar10 >> 8) + 1) - ((char)-(char)sVar10 != '\0'),
                        -(char)sVar10);
      uVar7 = scale_u16_by_u8(param_1,sVar10);
      sVar8 = CONCAT11((~(byte)((ushort)uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7
                      );
    }
    else {
      sVar8 = scale_u16_by_u8(param_1,sVar10);
    }
    DAT_0ca4 = sVar8 + DAT_0ca4;
  }
  if ((DAT_0bfe & 0x80) != 0) {
    DAT_0cb2 = (ushort)DAT_1870 * 2 + 0xc58;
  }
  if (((((((~DAT_08af & 0x20) == 0) && ((~DAT_08af & 0x10) == 0)) && ((~DAT_08af & 8) == 0)) &&
       (((~DAT_08af & 4) == 0 && ((~DAT_089f & 0x80) == 0)))) && ((~DAT_0881 & 0x10) == 0)) &&
     (((DAT_1874 <= DAT_08e8 && (DAT_08e8 <= DAT_1876)) &&
      ((DAT_1878 <= DAT_0900 &&
       (((DAT_0900 <= DAT_187a && (DAT_187c <= DAT_0c90)) && (DAT_0c90 <= DAT_187e)))))))) {
    bVar1 = DAT_0b3a + 1;
    if ((DAT_0b3a == 0xff) || (DAT_0b3a = bVar1, DAT_1871 < bVar1)) {
      lookup_u8_uniform_u16_axis();
      uVar2 = (ushort)extraout_A_03 * 0x40 + 0xe000;
      DAT_0cb0 = extraout_A_03;
      if ((ushort)extraout_A_03 * 0x40 < 0x2000) {
        DAT_0cb4 = uVar2 + DAT_0cb2;
        if (!CARRY2(uVar2,DAT_0cb2)) {
          DAT_0cb4 = 0;
        }
      }
      else {
        DAT_0cb4 = uVar2 + DAT_0cb2;
        if (CARRY2(uVar2,DAT_0cb2)) {
          DAT_0cb4 = 0xffff;
        }
      }
    }
  }
  else {
    DAT_0b3a = 0;
  }
  sVar8 = DAT_0cb4 - DAT_0cb6;
  if (DAT_0cb4 < DAT_0cb6) {
    uVar7 = scale_u16_by_u8(sVar10,CONCAT11((~(byte)((ushort)sVar8 >> 8) + 1) -
                                            ((char)-(char)sVar8 != '\0'),-(char)sVar8));
    sVar10 = CONCAT11((~(byte)((ushort)uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7)
    ;
  }
  else {
    sVar10 = scale_u16_by_u8(sVar10,sVar8);
  }
  uVar2 = sVar10 + DAT_0cb6;
  if ((DAT_1843 < DAT_0b1b) || ((DAT_0880 & 8) == 0)) {
    if ((DAT_089f & 0x10) == 0) {
      if (((~DAT_08af & 0x20) == 0) && ((~DAT_08af & 0x10) == 0)) goto LAB_b2fa;
    }
    else {
      DAT_089f = DAT_089f & 0xef;
    }
  }
  else {
    DAT_0b1b = 0xff;
  }
  DAT_0c86 = DAT_0da8;
LAB_b2fa:
  DAT_0b1b = (DAT_0b1b + 1) - (0xfe < DAT_0b1b);
  uVar9 = DAT_0da8;
  DAT_0cb6 = DAT_0da8;
  if ((DAT_1843 < DAT_0b3b) || ((DAT_0880 & 8) == 0)) {
    if ((DAT_089f & 8) == 0) {
      uVar3 = DAT_0da8;
      uVar4 = DAT_0da8;
      uVar5 = DAT_0da8;
      uVar6 = DAT_0da8;
      if (((((~DAT_08af & 0x20) == 0) &&
           (uVar3 = DAT_0da8, uVar4 = DAT_0da8, uVar5 = DAT_0da8, uVar6 = DAT_0da8,
           (~DAT_08af & 0x10) == 0)) &&
          (uVar3 = DAT_0da8, uVar4 = DAT_0da8, uVar5 = DAT_0da8, uVar6 = DAT_0da8,
          (~DAT_08af & 8) == 0)) &&
         (((uVar3 = DAT_0da8, uVar4 = DAT_0da8, uVar5 = DAT_0da8, uVar6 = DAT_0da8,
           (~DAT_08af & 4) == 0 &&
           (uVar9 = DAT_0ca4, uVar3 = DAT_0ca4, DAT_0cb6 = DAT_0ca4, uVar4 = DAT_0ca4,
           uVar5 = DAT_0ca4, uVar6 = DAT_0ca4, (DAT_089f & 0x80) == 0)) &&
          (uVar9 = DAT_0cc8, uVar3 = DAT_0cb4, DAT_0cb6 = uVar2, uVar4 = DAT_0cc6, uVar5 = DAT_0cc8,
          uVar6 = DAT_0cca, DAT_186f != -0x80)))) {
        uVar9 = uVar2;
      }
    }
    else {
      DAT_089f = DAT_089f & 0xf7;
      uVar3 = DAT_0da8;
      uVar4 = DAT_0da8;
      uVar5 = DAT_0da8;
      uVar6 = DAT_0da8;
    }
  }
  else {
    DAT_0b3b = 0xff;
    uVar3 = DAT_0da8;
    uVar4 = DAT_0da8;
    uVar5 = DAT_0da8;
    uVar6 = DAT_0da8;
  }
  DAT_0cca = uVar6;
  DAT_0cc8 = uVar5;
  DAT_0cc6 = uVar4;
  DAT_0cb4 = uVar3;
  DAT_08f2 = DAT_18ac;
  if ((DAT_18ac <= uVar9) && (DAT_08f2 = uVar9, DAT_18ae < uVar9)) {
    DAT_08f2 = DAT_18ae;
  }
  DAT_0b3b = (DAT_0b3b + 1) - (0xfe < DAT_0b3b);
  lookup_u8_uniform_u16_axis();
  DAT_0ba2 = DAT_0c90;
  DAT_0ba4 = &axis_raw_3258;
  DAT_0971 = extraout_A_04;
  DAT_0974 = axis_index_u16_ascending();
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_3270;
  DAT_0976 = axis_index_u16_ascending();
  DAT_0de0 = DAT_0974;
  DAT_0dde = DAT_0976;
  sVar10 = bilinear_u8_grid();
  DAT_0972 = (byte)((ushort)(sVar10 + 0x80) >> 8);
  DAT_0970 = (undefined1)((ushort)DAT_0972 * (ushort)DAT_0971 * 2 >> 8);
  if ((short)((ushort)DAT_0972 * (ushort)DAT_0971) < 0) {
    DAT_0970 = 0xff;
  }
  lookup_u8_uniform_u16_axis(DAT_08f2,&UNK_32e0);
  DAT_0978 = extraout_A_05;
  DAT_08bc = DAT_08bc & 0xfd;
  return;
}


