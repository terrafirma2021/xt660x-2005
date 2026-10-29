/* Entry 87e7 */

void FUN_87e7(void)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 extraout_A;
  byte bVar6;
  byte extraout_A_00;
  ushort uVar7;
  undefined2 uVar8;
  byte bVar10;
  byte bVar11;
  short sVar9;
  byte *table_bias;
  
  bVar6 = DAT_08bc;
  DAT_08bc = bVar6 | 0x20;
  uVar3 = DAT_08fa;
  uVar2 = DAT_08f8;
  uVar7 = uVar3 + uVar2;
  if (CARRY2(uVar3,uVar2)) {
    uVar7 = CONCAT11((byte)(uVar7 >> 9),(char)(uVar7 >> 1)) | 0x8000;
  }
  else {
    uVar7 = uVar7 >> 1;
  }
  DAT_08fc = uVar7;
  uVar8 = DAT_08f8;
  DAT_08fa = uVar8;
  uVar2 = DAT_08fc;
  uVar3 = DAT_08fe;
  uVar7 = uVar2 - uVar3;
  if (uVar2 < uVar3) {
    uVar7 = scale_u16_by_u8(CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),
                                     -(char)uVar7),&UNK_18d6);
    uVar7 = CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7);
  }
  else {
    uVar7 = scale_u16_by_u8(uVar7,&UNK_18d6);
  }
  sVar9 = DAT_08fe;
  DAT_08fe = uVar7 + sVar9;
  uVar8 = DAT_0902;
  DAT_0ba2 = uVar8;
  DAT_0ba4 = 0x426e;
  uVar7 = axis_index_u16_ascending('n');
  DAT_0914 = uVar7;
  uVar8 = DAT_08f8;
  uVar8 = FUN_cc63();
  DAT_0918 = uVar8;
  bVar6 = DAT_0880;
  if ((~bVar6 & 0x40) == 0) {
    DAT_0a82 = 0x40;
    DAT_0a86 = 0x80;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 & 0xfd;
    goto LAB_8a89;
  }
  uVar8 = DAT_08e8;
  bVar6 = DAT_088d;
  if ((~bVar6 & 4) != 0) {
    uVar8 = 0xd000;
  }
  DAT_0ba2 = uVar8;
  DAT_0ba4 = 0x4246;
  uVar7 = axis_index_u16_ascending('F');
  DAT_0916 = uVar7;
  uVar8 = DAT_0914;
  DAT_0dde = uVar8;
  uVar8 = DAT_0916;
  DAT_0de0 = uVar8;
  cVar1 = DAT_0d87;
  if ((cVar1 == '\t') && (bVar6 = DAT_0896._0_1_, (~bVar6 & 0x10) != 0)) {
    table_bias = &UNK_42ab;
  }
  else {
    bVar6 = DAT_0898;
    if (DAT_4245 < bVar6) {
      table_bias = &UNK_47ab;
    }
    else {
      table_bias = &UNK_452b;
    }
  }
  uVar7 = bilinear_u8_grid(table_bias,'\x14');
  DAT_0a83 = (char)(uVar7 + 0x80 >> 8);
  bVar6 = DAT_0889;
  if ((bVar6 & 2) != 0) {
    bVar6 = DAT_0b92;
    bVar10 = DAT_0b94;
    if ((CARRY1(bVar6,bVar10)) || (bVar4 = DAT_0a83, bVar4 < (byte)(bVar6 + bVar10))) {
      bVar6 = DAT_0889;
      DAT_0889 = bVar6 & 0xfd;
      DAT_0b92 = 0;
    }
    else {
      DAT_0b95 = bVar6 + bVar10;
    }
  }
  uVar5 = DAT_0d87;
  uVar8 = DAT_0918;
  DAT_0dde = uVar8;
  DAT_0de0 = 0;
  lookup_u8_grid_special();
  DAT_0a8b = extraout_A;
  bVar6 = DAT_0880;
  if ((bVar6 & 4) != 0) {
    DAT_0a82 = 0x40;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 & 0xfd;
    goto LAB_8a89;
  }
  if (DAT_4243 == '\x01') {
    bVar6 = DAT_4244;
    if (DAT_4242 <= DAT_4244) {
      bVar6 = DAT_4242;
    }
    DAT_0a82 = bVar6;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 & 0xfd;
    goto LAB_8a89;
  }
  bVar6 = DAT_0889;
  if ((~bVar6 & 2) == 0) {
    bVar6 = DAT_0a86;
    if (bVar6 < 0x80) {
      bVar10 = DAT_0888;
      if ((bVar10 & 0x40) != 0) {
        DAT_0a87 = DAT_4b10;
      }
      cVar1 = DAT_0a87;
      bVar6 = bVar6 + cVar1;
      if (0x7f < bVar6) {
        bVar6 = 0x80;
      }
      DAT_0a86 = bVar6;
    }
    bVar6 = DAT_0a86;
    bVar10 = DAT_0b95;
    uVar7 = (ushort)bVar6 * (ushort)bVar10 >> 7;
    DAT_0dde = uVar7;
    if (((short)((ushort)bVar6 * (ushort)bVar10) < 0) || (DAT_4242 <= (byte)uVar7)) {
      uVar7 = (ushort)DAT_4242;
    }
    DAT_0a82 = (char)uVar7;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 & 0xfd;
    bVar6 = DAT_0880;
    if ((bVar6 & 4) != 0) {
      DAT_0a86 = 0x80;
    }
    goto LAB_8a89;
  }
  bVar6 = DAT_0885;
  if ((bVar6 & 0x20) == 0) {
    bVar6 = DAT_0a86;
    if (bVar6 < 0x80) {
      bVar10 = DAT_0888;
      if ((bVar10 & 0x40) != 0) {
        DAT_0a87 = DAT_4b10;
      }
      cVar1 = DAT_0a87;
      bVar6 = bVar6 + cVar1;
      if (0x7f < bVar6) {
        bVar6 = 0x80;
      }
      DAT_0a86 = bVar6;
    }
    if ((DAT_4b03 == -0x80) &&
       ((bVar6 = DAT_0aa6, (~bVar6 & 4) == 0 || (bVar6 = DAT_0aa7, (bVar6 & 2) != 0)))) {
      bVar6 = DAT_0aac;
    }
    else {
      bVar6 = DAT_0a83;
      bVar10 = DAT_0d05;
      if (bVar6 < bVar10) {
        bVar6 = DAT_0d05;
      }
      bVar10 = DAT_0a86;
      uVar7 = (ushort)bVar6 * (ushort)bVar10 >> 7;
      DAT_0dde = uVar7;
      bVar4 = DAT_0ada;
      bVar6 = -(char)((short)((ushort)bVar6 * (ushort)bVar10) >> 0xf);
      if ((bVar4 & 0x40) == 0) {
        if (bVar6 == 0) goto LAB_8a70;
      }
      else {
        bVar4 = DAT_0ad8;
        bVar11 = (byte)uVar7;
        bVar10 = bVar11 - bVar4;
        cVar1 = bVar6 - (bVar11 < bVar4);
        uVar7 = CONCAT11(cVar1,bVar10);
        if (bVar6 < (bVar11 < bVar4)) {
LAB_8a62:
          uVar7 = (ushort)DAT_4e2f;
        }
        else if ((cVar1 == '\0') && (bVar10 <= DAT_4e30)) {
          if (bVar10 < DAT_4e2f) goto LAB_8a62;
        }
        else {
          uVar7 = (ushort)DAT_4e30;
        }
LAB_8a70:
        bVar6 = (byte)uVar7;
        if ((byte)uVar7 < DAT_4242) goto LAB_8a78;
      }
      bVar6 = DAT_4242;
    }
LAB_8a78:
    DAT_0a82 = bVar6;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 & 0xfd;
    bVar6 = DAT_0880;
    if ((bVar6 & 4) != 0) {
      DAT_0a86 = 0x80;
    }
    goto LAB_8a89;
  }
  bVar6 = DAT_0a86;
  if (bVar6 < 0x80) {
    bVar10 = DAT_0888;
    if ((bVar10 & 0x40) != 0) {
      DAT_0a87 = DAT_4b10;
    }
    cVar1 = DAT_0a87;
    bVar6 = bVar6 + cVar1;
    if (0x7f < bVar6) {
      bVar6 = 0x80;
    }
    DAT_0a86 = bVar6;
  }
  bVar10 = DAT_0a88;
  bVar6 = DAT_0900._0_1_;
  if ((bVar6 <= DAT_4241) && (bVar6 = DAT_0d05, bVar10 < bVar6)) {
    uVar5 = DAT_0d05;
  }
  uVar5 = DAT_0a86;
  bVar10 = 0;
  DAT_0dde = 0;
  bVar6 = DAT_0ada;
  if ((bVar6 & 0x40) == 0) {
    if (true) goto LAB_89e7;
LAB_89ec:
    bVar10 = DAT_4242;
  }
  else {
    cVar1 = DAT_0ad8;
    if ((cVar1 != '\0') || (((bVar10 = DAT_4e30, true && (true)) && (bVar10 = 0, DAT_4e2f != 0)))) {
      bVar10 = DAT_4e2f;
    }
LAB_89e7:
    if (DAT_4242 <= bVar10) goto LAB_89ec;
  }
  DAT_0a82 = bVar10;
  bVar6 = DAT_0887;
  DAT_0887 = bVar6 & 0xfd;
LAB_8a89:
  bVar6 = DAT_0880;
  if ((bVar6 & 0x40) == 0) {
    bVar6 = DAT_08d9;
    if (bVar6 < 0x1a) {
      bVar6 = 0xb3;
    }
    if (bVar6 < 0x53) {
      sVar9 = 0;
    }
    else if ((byte)(bVar6 + 0xad) < 0x80) {
      sVar9 = (ushort)(byte)(bVar6 + 0xad) << 4;
    }
    else {
      sVar9 = 0x800;
    }
    DAT_0dde = sVar9;
    uVar7 = DAT_0900;
    if (uVar7 < 0x1000) {
      uVar7 = 0;
    }
    else if (uVar7 - 0x1000 < 0xe000) {
      uVar7 = uVar7 - 0x1000 >> 4;
    }
    else {
      uVar7 = 0xe00;
    }
    DAT_0de0 = uVar7;
    lookup_u8_grid_special();
    bVar6 = DAT_088d;
    bVar10 = extraout_A_00;
    if ((bVar6 & 0x40) != 0) {
      bVar10 = DAT_4bab;
    }
    DAT_0a98 = (ushort)bVar10 << 5;
    bVar6 = DAT_0a9c;
    sVar9 = DAT_0a98;
    uVar7 = (ushort)bVar6 * 0x20 + sVar9;
    bVar6 = DAT_0880;
    if ((~bVar6 & 0x40) == 0) {
      DAT_0dde = uVar7;
      DAT_0aa0 = DAT_4b9a;
      uVar8 = DAT_0dde;
      DAT_0dde = uVar8;
      uVar7 = DAT_0a2e;
      uVar2 = DAT_0dde;
      if (uVar2 <= uVar7) {
        uVar7 = DAT_0dde;
      }
    }
    else {
      uVar2 = DAT_0a48;
      if (uVar2 <= uVar7) {
        uVar7 = DAT_0a48;
      }
    }
  }
  else {
    uVar7 = DAT_0a2e;
  }
  DAT_0a96 = uVar7;
  uVar7 = scale_u16_by_u8(uVar7,&UNK_4ba1);
  DAT_0a9a = uVar7 << 1;
  bVar6 = DAT_08bc;
  DAT_08bc = bVar6 & 0xdf;
  return;
}


