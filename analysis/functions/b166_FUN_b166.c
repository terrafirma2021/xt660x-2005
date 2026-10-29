/* Entry b166 */

void FUN_b166(uchar param_1)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  ushort uVar4;
  byte extraout_A;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  short sVar8;
  ushort uVar9;
  
  bVar1 = DAT_0882;
  DAT_0882 = bVar1 & 0xef;
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 | 2;
  uVar7 = lookup_u8_uniform_axis(param_1,&UNK_4234);
  sVar8 = (uVar7 >> 8) << 3;
  DAT_095e = sVar8;
  uVar7 = lookup_u8_uniform_axis((uchar)sVar8,&UNK_3220);
  DAT_0979 = (char)(uVar7 >> 8);
  uVar7 = lookup_u8_uniform_axis((uchar)uVar7,&UNK_3345);
  DAT_098f = (char)(uVar7 >> 8);
  uVar7 = lookup_u8_uniform_axis((uchar)uVar7,&UNK_3357);
  DAT_0990 = (char)(uVar7 >> 8);
  bVar1 = DAT_0881;
  if (((bVar1 & 0x20) == 0) || (bVar1 = DAT_0880, (~bVar1 & 8) == 0)) {
    DAT_0b3d = 0;
LAB_b1d7:
    bVar1 = DAT_089f;
    DAT_089f = bVar1 & 0x7f;
    bVar1 = DAT_089f;
    DAT_089f = bVar1 & 0xbf;
  }
  else {
    bVar1 = DAT_0b3d;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b3d = bVar1;
    if (bVar1 < DAT_18b0) goto LAB_b1d7;
    bVar1 = DAT_089f;
    DAT_089f = bVar1 | 0x80;
    bVar1 = DAT_089f;
    if ((~bVar1 & 0x40) != 0) {
      uVar2 = DAT_0ca2;
      DAT_0ca4 = uVar2;
      bVar1 = DAT_089f;
      DAT_089f = bVar1 | 0x40;
    }
  }
  bVar1 = DAT_089f;
  if ((bVar1 & 0x80) != 0) {
    uVar9 = DAT_0ca2;
    uVar4 = DAT_0ca4;
    uVar7 = uVar9 - uVar4;
    if (uVar9 < uVar4) {
      uVar7 = scale_u16_by_u8(CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),
                                       -(char)uVar7),&UNK_18b1);
      uVar7 = CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7);
    }
    else {
      uVar7 = scale_u16_by_u8(uVar7,&UNK_18b1);
    }
    sVar8 = DAT_0ca4;
    DAT_0ca4 = uVar7 + sVar8;
  }
  bVar1 = DAT_0bfe;
  if ((bVar1 & 0x80) != 0) {
    DAT_0cb2 = (&DAT_0c58)[DAT_1870];
  }
  bVar1 = DAT_08af;
  if (((((((~bVar1 & 0x20) == 0) || (bVar1 = DAT_08af, (~bVar1 & 0x10) == 0)) ||
        (bVar1 = DAT_08af, (~bVar1 & 8) == 0)) ||
       (((bVar1 = DAT_08af, (~bVar1 & 4) == 0 || (bVar1 = DAT_089f, (~bVar1 & 0x80) == 0)) ||
        ((bVar1 = DAT_0881, (~bVar1 & 0x10) == 0 ||
         ((uVar7 = DAT_08e8, uVar7 < DAT_1874 || (DAT_1876 < uVar7)))))))) ||
      (uVar7 = DAT_0900, uVar7 < DAT_1878)) ||
     (((DAT_187a < uVar7 || (uVar7 = DAT_0c90, uVar7 < DAT_187c)) || (DAT_187e < uVar7)))) {
    DAT_0b3a = 0;
  }
  else {
    cVar3 = DAT_0b3a;
    if ((cVar3 == -1) || (DAT_0b3a = cVar3 + 1U, DAT_1871 < (byte)(cVar3 + 1U))) {
      uVar7 = DAT_0900;
      uVar7 = lookup_u8_uniform_u16_axis(uVar7,&UNK_1880);
      extraout_A = (byte)(uVar7 >> 8);
      DAT_0cb0 = extraout_A;
      uVar9 = (ushort)extraout_A * 0x40;
      uVar7 = uVar9 + 0xe000;
      if (uVar9 < 0x2000) {
        uVar9 = DAT_0cb2;
        sVar8 = uVar7 + uVar9;
        if (!CARRY2(uVar7,uVar9)) {
          sVar8 = 0;
        }
      }
      else {
        uVar9 = DAT_0cb2;
        sVar8 = uVar7 + uVar9;
        if (CARRY2(uVar7,uVar9)) {
          sVar8 = -1;
        }
      }
      DAT_0cb4 = sVar8;
    }
  }
  uVar9 = DAT_0cb4;
  uVar4 = DAT_0cb6;
  uVar7 = uVar9 - uVar4;
  if (uVar9 < uVar4) {
    uVar7 = scale_u16_by_u8(CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),
                                     -(char)uVar7),&UNK_1872);
    uVar7 = CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7);
  }
  else {
    uVar7 = scale_u16_by_u8(uVar7,&UNK_1872);
  }
  sVar8 = DAT_0cb6;
  DAT_0cb6 = uVar7 + sVar8;
  bVar1 = DAT_0b1b;
  if ((DAT_1843 < bVar1) || (bVar1 = DAT_0880, (bVar1 & 8) == 0)) {
    bVar1 = DAT_089f;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_089f;
      DAT_089f = bVar1 & 0xef;
      goto LAB_b2f4;
    }
    bVar1 = DAT_08af;
    if (((~bVar1 & 0x20) == 0) || (bVar1 = DAT_08af, (~bVar1 & 0x10) == 0)) goto LAB_b2f4;
  }
  else {
    DAT_0b1b = 0xff;
LAB_b2f4:
    uVar2 = DAT_0da8;
    DAT_0c86 = uVar2;
  }
  bVar1 = DAT_0b1b;
  DAT_0b1b = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_0b3b;
  if ((DAT_1843 < bVar1) || (bVar1 = DAT_0880, (bVar1 & 8) == 0)) {
    bVar1 = DAT_089f;
    if ((bVar1 & 8) != 0) {
      bVar1 = DAT_089f;
      DAT_089f = bVar1 & 0xf7;
      goto LAB_b316;
    }
    bVar1 = DAT_08af;
    if (((((~bVar1 & 0x20) == 0) || (bVar1 = DAT_08af, (~bVar1 & 0x10) == 0)) ||
        (bVar1 = DAT_08af, (~bVar1 & 8) == 0)) || (bVar1 = DAT_08af, (~bVar1 & 4) == 0))
    goto LAB_b316;
    bVar1 = DAT_089f;
    if ((bVar1 & 0x80) == 0) {
      if (DAT_186f == -0x80) {
        uVar7 = DAT_0cc8;
      }
      else {
        uVar7 = DAT_0cb6;
      }
      goto LAB_b362;
    }
    uVar7 = DAT_0ca4;
  }
  else {
    DAT_0b3b = 0xff;
LAB_b316:
    uVar7 = DAT_0da8;
  }
  DAT_0cb4 = uVar7;
  DAT_0cb6 = uVar7;
  DAT_0cc6 = uVar7;
  DAT_0cca = uVar7;
  DAT_0cc8 = uVar7;
LAB_b362:
  uVar9 = DAT_18ac;
  if ((DAT_18ac <= uVar7) && (uVar9 = uVar7, DAT_18ae < uVar7)) {
    uVar9 = DAT_18ae;
  }
  DAT_08f2 = uVar9;
  bVar1 = DAT_0b3b;
  DAT_0b3b = (bVar1 + 1) - (0xfe < bVar1);
  uVar7 = DAT_08f2;
  uVar7 = lookup_u8_uniform_u16_axis(uVar7,&UNK_323c);
  DAT_0971 = (char)(uVar7 >> 8);
  uVar2 = DAT_0c90;
  DAT_0ba2 = uVar2;
  DAT_0ba4 = 0x3258;
  uVar7 = axis_index_u16_ascending('X');
  DAT_0974 = uVar7;
  uVar2 = DAT_0900;
  DAT_0ba2 = uVar2;
  DAT_0ba4 = 0x3270;
  uVar7 = axis_index_u16_ascending('p');
  DAT_0976 = uVar7;
  uVar2 = DAT_0976;
  DAT_0dde = uVar2;
  uVar2 = DAT_0974;
  DAT_0de0 = uVar2;
  uVar7 = bilinear_u8_grid(&UNK_327d,'\f');
  bVar5 = (byte)(uVar7 + 0x80 >> 8);
  DAT_0972 = bVar5;
  bVar1 = DAT_0971;
  sVar8 = (ushort)bVar5 * (ushort)bVar1;
  uVar6 = (undefined1)((ushort)(sVar8 * 2) >> 8);
  if (sVar8 < 0) {
    uVar6 = 0xff;
  }
  DAT_0970 = uVar6;
  uVar7 = DAT_08f2;
  uVar7 = lookup_u8_uniform_u16_axis(uVar7,&UNK_32e0);
  DAT_0978 = (char)(uVar7 >> 8);
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 & 0xfd;
  return;
}


