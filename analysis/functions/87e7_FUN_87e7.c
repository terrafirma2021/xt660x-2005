/* Entry 87e7 */

void FUN_87e7(undefined2 param_1)

{
  ushort uVar1;
  undefined1 extraout_A;
  byte bVar2;
  char cVar3;
  byte extraout_A_00;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  
  DAT_08bc = DAT_08bc | 0x20;
  uVar6 = DAT_08fa + DAT_08f8;
  if (CARRY2(DAT_08fa,DAT_08f8)) {
    DAT_08fc = CONCAT11((byte)(uVar6 >> 9),(char)(uVar6 >> 1)) | 0x8000;
  }
  else {
    DAT_08fc = uVar6 >> 1;
  }
  DAT_08fa = DAT_08f8;
  sVar7 = DAT_08fc - DAT_08fe;
  if (DAT_08fc < DAT_08fe) {
    sVar7 = CONCAT11((~(byte)((ushort)sVar7 >> 8) + 1) - ((char)-(char)sVar7 != '\0'),-(char)sVar7);
    uVar4 = scale_u16_by_u8(param_1,sVar7);
    sVar5 = CONCAT11((~(byte)((ushort)uVar4 >> 8) + 1) - ((char)-(char)uVar4 != '\0'),-(char)uVar4);
  }
  else {
    sVar5 = scale_u16_by_u8(param_1,sVar7);
  }
  DAT_08fe = sVar5 + DAT_08fe;
  DAT_0ba2 = DAT_0902;
  DAT_0ba4 = &axis_raw_426e;
  DAT_0914 = axis_index_u16_ascending();
  DAT_0918 = FUN_cc63();
  if ((~DAT_0880 & 0x40) != 0) {
    DAT_0a82 = 0x40;
    DAT_0a86 = 0x80;
    DAT_0887 = DAT_0887 & 0xfd;
    goto LAB_8a89;
  }
  DAT_0ba2 = DAT_08e8;
  if ((~DAT_088d & 4) == 0) {
    DAT_0ba2 = 0xd000;
  }
  DAT_0ba4 = &axis_raw_4246;
  DAT_0916 = axis_index_u16_ascending();
  DAT_0dde = DAT_0914;
  DAT_0de0 = DAT_0916;
  sVar5 = bilinear_u8_grid();
  DAT_0a83 = (byte)((ushort)(sVar5 + 0x80) >> 8);
  bVar2 = DAT_0b95;
  if (((DAT_0889 & 2) != 0) &&
     ((CARRY1(DAT_0b92,DAT_0b94) ||
      (bVar2 = DAT_0b92 + DAT_0b94, DAT_0a83 < (byte)(DAT_0b92 + DAT_0b94))))) {
    DAT_0889 = DAT_0889 & 0xfd;
    DAT_0b92 = 0;
    bVar2 = DAT_0b95;
  }
  DAT_0b95 = bVar2;
  DAT_0dde = DAT_0918;
  DAT_0de0 = 0;
  lookup_u8_grid_special();
  DAT_0a8b = extraout_A;
  if ((DAT_0880 & 4) != 0) {
    DAT_0a82 = 0x40;
    DAT_0887 = DAT_0887 & 0xfd;
    goto LAB_8a89;
  }
  if (DAT_4243 == '\x01') {
    DAT_0a82 = DAT_4244;
    if (DAT_4242 <= DAT_4244) {
      DAT_0a82 = DAT_4242;
    }
    DAT_0887 = DAT_0887 & 0xfd;
    goto LAB_8a89;
  }
  if ((~DAT_0889 & 2) != 0) {
    if (DAT_0a86 < 0x80) {
      if ((DAT_0888 & 0x40) != 0) {
        DAT_0a87 = DAT_4b10;
      }
      DAT_0a86 = DAT_0a86 + DAT_0a87;
      if (0x7f < DAT_0a86) {
        DAT_0a86 = 0x80;
      }
    }
    DAT_0dde = (ushort)DAT_0a86 * (ushort)DAT_0b95 >> 7;
    if (((short)((ushort)DAT_0a86 * (ushort)DAT_0b95) < 0) ||
       (uVar6 = DAT_0dde, DAT_4242 <= (byte)DAT_0dde)) {
      uVar6 = (ushort)DAT_4242;
    }
    DAT_0a82 = (byte)uVar6;
    DAT_0887 = DAT_0887 & 0xfd;
    if ((DAT_0880 & 4) != 0) {
      DAT_0a86 = 0x80;
    }
    goto LAB_8a89;
  }
  if ((DAT_0885 & 0x20) != 0) {
    if (DAT_0a86 < 0x80) {
      if ((DAT_0888 & 0x40) != 0) {
        DAT_0a87 = DAT_4b10;
      }
      DAT_0a86 = DAT_0a86 + DAT_0a87;
      if (0x7f < DAT_0a86) {
        DAT_0a86 = 0x80;
      }
    }
    DAT_0dde = 0;
    uVar6 = DAT_0dde;
    if ((DAT_0ada & 0x40) != 0) {
      bVar2 = -DAT_0ad8;
      if ((-(DAT_0ad8 != 0) == '\0') && (bVar2 <= DAT_4e30)) {
        uVar6 = CONCAT11(-(DAT_0ad8 != 0),bVar2);
        if (bVar2 < DAT_4e2f) {
          uVar6 = (ushort)DAT_4e2f;
        }
      }
      else {
        uVar6 = (ushort)DAT_4e30;
      }
    }
    DAT_0a82 = (byte)uVar6;
    if (DAT_4242 <= (byte)uVar6) {
      DAT_0a82 = DAT_4242;
    }
    DAT_0887 = DAT_0887 & 0xfd;
    goto LAB_8a89;
  }
  if (DAT_0a86 < 0x80) {
    if ((DAT_0888 & 0x40) != 0) {
      DAT_0a87 = DAT_4b10;
    }
    DAT_0a86 = DAT_0a86 + DAT_0a87;
    if (0x7f < DAT_0a86) {
      DAT_0a86 = 0x80;
    }
  }
  if ((DAT_4b03 != -0x80) || ((DAT_0a82 = DAT_0aac, (~DAT_0aa6 & 4) == 0 && ((DAT_0aa7 & 2) == 0))))
  {
    bVar2 = DAT_0a83;
    if (DAT_0a83 < DAT_0d05) {
      bVar2 = DAT_0d05;
    }
    DAT_0dde = (ushort)bVar2 * (ushort)DAT_0a86 >> 7;
    cVar3 = -(char)((short)((ushort)bVar2 * (ushort)DAT_0a86) >> 0xf);
    if ((DAT_0ada & 0x40) == 0) {
      uVar6 = DAT_0dde;
      if (cVar3 == '\0') goto LAB_8a70;
    }
    else {
      bVar2 = (byte)DAT_0dde - DAT_0ad8;
      cVar3 = cVar3 - ((byte)DAT_0dde < DAT_0ad8);
      if ((cVar3 == '\0') && (bVar2 <= DAT_4e30)) {
        uVar6 = CONCAT11(cVar3,bVar2);
        if (bVar2 < DAT_4e2f) {
          uVar6 = (ushort)DAT_4e2f;
        }
      }
      else {
        uVar6 = (ushort)DAT_4e30;
      }
LAB_8a70:
      DAT_0a82 = (byte)uVar6;
      if ((byte)uVar6 < DAT_4242) goto LAB_8a78;
    }
    DAT_0a82 = DAT_4242;
  }
LAB_8a78:
  DAT_0887 = DAT_0887 & 0xfd;
  if ((DAT_0880 & 4) != 0) {
    DAT_0a86 = 0x80;
  }
LAB_8a89:
  uVar6 = DAT_0a2e;
  if ((DAT_0880 & 0x40) == 0) {
    bVar2 = DAT_08d9;
    if (DAT_08d9 < 0x1a) {
      bVar2 = 0xb3;
    }
    if (bVar2 < 0x53) {
      DAT_0dde = 0;
    }
    else if ((byte)(bVar2 + 0xad) < 0x80) {
      DAT_0dde = (ushort)(byte)(bVar2 + 0xad) << 4;
    }
    else {
      DAT_0dde = 0x800;
    }
    if (DAT_0900 < 0x1000) {
      DAT_0de0 = 0;
    }
    else if (DAT_0900 - 0x1000 < 0xe000) {
      DAT_0de0 = DAT_0900 - 0x1000 >> 4;
    }
    else {
      DAT_0de0 = 0xe00;
    }
    lookup_u8_grid_special();
    bVar2 = extraout_A_00;
    if ((DAT_088d & 0x40) != 0) {
      bVar2 = DAT_4bab;
    }
    DAT_0a98 = (ushort)bVar2 * 0x20;
    uVar1 = (ushort)DAT_0a9c * 0x20 + DAT_0a98;
    if ((~DAT_0880 & 0x40) == 0) {
      uVar6 = uVar1;
      if (DAT_0a48 <= uVar1) {
        uVar6 = DAT_0a48;
      }
    }
    else {
      DAT_0aa0 = DAT_4b9a;
      uVar6 = DAT_0a2e;
      DAT_0dde = uVar1;
      if (uVar1 <= DAT_0a2e) {
        uVar6 = uVar1;
      }
    }
  }
  DAT_0a96 = uVar6;
  sVar7 = scale_u16_by_u8(sVar7,uVar6,&UNK_4ba1);
  DAT_0a9a = sVar7 << 1;
  DAT_08bc = DAT_08bc & 0xdf;
  return;
}


