/* Entry e294 */

/* WARNING: Removing unreachable block (RAM,0xe2dc) */
/* WARNING: Removing unreachable block (RAM,0xe2e1) */
/* WARNING: Removing unreachable block (RAM,0xe2e9) */
/* WARNING: Removing unreachable block (RAM,0xe2ee) */
/* WARNING: Removing unreachable block (RAM,0xe2fb) */
/* WARNING: Removing unreachable block (RAM,0xe303) */
/* WARNING: Removing unreachable block (RAM,0xe30c) */
/* WARNING: Removing unreachable block (RAM,0xe611) */
/* WARNING: Removing unreachable block (RAM,0xe87d) */
/* WARNING: Removing unreachable block (RAM,0xe729) */
/* WARNING: Removing unreachable block (RAM,0xe535) */
/* WARNING: Removing unreachable block (RAM,0xea0d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_unreferenced_e294(void)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  undefined *puVar9;
  uint3 uVar10;
  uint uVar11;
  undefined3 uVar12;
  byte bVar13;
  byte extraout_A;
  byte bVar14;
  ushort uVar15;
  
  DAT_0bcb = 0x40;
  DAT_0bca = 6;
  if ((((DAT_0d61 != -0x80) && (DAT_0d87 == '\t')) && ((~DAT_08a0 & 4) == 0)) &&
     ((~DAT_08b2 & 0x80) == 0)) {
    if (((DAT_0896._0_1_ & 0x10) == 0) || ((~DAT_0881 & 0x10) != 0)) {
      DAT_0bcc = 0;
      DAT_0bcd = 0;
    }
    else if ((DAT_08b6 & 2) == 0) {
      if ((DAT_0d8a < DAT_0bcd) && ((DAT_08b1 & 8) != 0)) {
        DAT_08b1 = DAT_08b1 & 0xf7;
        DAT_0bd2 = DAT_0bd2 | 0x20;
        if (((~DAT_08af & 8) == 0) && ((~DAT_08af & 4) == 0)) {
          DAT_0889 = DAT_0889 | 2;
          DAT_0b94 = 0;
          DAT_0b92 = DAT_0a83;
          DAT_0b95 = DAT_0a83;
        }
      }
    }
    else {
      DAT_08b6 = DAT_08b6 & 0xfd;
    }
  }
  if ((DAT_08b1 & 8) == 0) {
    DAT_0899 = 0x40;
    DAT_0898 = 6;
  }
  else {
    DAT_0899 = 0x20;
    DAT_0898 = 5;
  }
  do {
    bVar14 = DAT_008b;
    if ((~bVar14 & 2) != 0) {
      DAT_08cc = (undefined *)DAT_0092;
      DAT_088d = DAT_088d & 0xfd;
      goto LAB_e37e;
    }
    sVar7 = DAT_0044;
  } while (sVar7 - DAT_08c8 < 0);
  DAT_088d = DAT_088d | 2;
LAB_e37e:
  DAT_088d = DAT_088d & 0xfe;
  FUN_f39d();
  uVar15 = DAT_0c9a;
  if ((~DAT_088d & 2) == 0) {
    DAT_0c40 = DAT_08cc;
    DAT_08c2 = 0x40;
    DAT_08c3 = 0;
  }
  bVar14 = DAT_0bd2;
  if (((DAT_0d53 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    bVar13 = (byte)((ushort)DAT_0c40 >> 8);
    if ((bVar13 < 0x1a) || (0xf5 < bVar13)) {
      if ((DAT_08b5 & 0x40) == 0) {
        DAT_08b5 = DAT_08b5 | 0x40;
        DAT_0bab = DAT_0bab | 0x20;
      }
      else if ((DAT_0d89 < DAT_0b3e) && ((~DAT_08af & 0x20) == 0)) {
        DAT_08af = DAT_08af | 0x20;
        bVar14 = DAT_0bd2 | 0x80;
        if ((~DAT_08b8 & 0x20) == 0) {
          DAT_08b8 = DAT_08b8 | 0x20;
          bVar14 = DAT_0bd2 | 0x88;
        }
      }
    }
    else if ((DAT_08b5 & 0x40) == 0) {
      if (DAT_0d8a < DAT_0b4b) {
        if ((DAT_08af & 0x20) != 0) {
          DAT_08af = DAT_08af & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x80;
        }
        DAT_0bab = DAT_0bab & 0xdf;
        bVar14 = DAT_0bd2;
      }
    }
    else {
      DAT_08b5 = DAT_08b5 & 0xbf;
    }
  }
  DAT_0bd2 = bVar14;
  if (DAT_0d8b == -0x80) {
    if (DAT_0c04 == '\x01') {
      DAT_0c9a = DAT_0c44;
      goto LAB_e461;
    }
  }
  else if (DAT_0c04 == '\0') {
    DAT_0c9a = DAT_0c42;
LAB_e461:
    DAT_0c9c = uVar15;
    if (((~DAT_08af & 0x20) == 0) && ((DAT_08af & 0x10) == 0)) {
      if ((~DAT_0ca8 & 1) == 0) {
        DAT_0c8a = DAT_0c88;
        DAT_0c94 = DAT_0c88;
      }
      else if (DAT_0d8d == '\x01') {
LAB_e491:
        DAT_0c8a = (undefined *)((ushort)DAT_0d94 * 2 + 0xc58);
        DAT_0c94 = DAT_0c8a;
      }
      else if (DAT_0d8d == '\x02') {
        uVar15 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar6 = uVar15 + (short)((uint)DAT_0d8e * (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8);
        iVar8 = (uint)DAT_0d8f * (uint)uVar15;
        DAT_0df7 = (ushort)((uint)iVar8 >> 8);
        sVar7 = DAT_0df7 + uVar6;
        uVar10 = CONCAT12(CARRY2(DAT_0df7,uVar6),sVar7);
        _DAT_0c9e = (uint)uVar10;
        uVar11 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar10 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar7;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 2,
                             (char)(CONCAT11((char)(RAM0x0c9f % 2),(undefined1)DAT_0ca0) / 2));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar11;
        _DAT_0df6 = iVar8;
      }
      else if (DAT_0d8d == '\x03') {
        uVar15 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar6 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar15 = uVar6 + (short)((uint)DAT_0d8f * (uint)uVar15 >> 8) +
                         uVar15 + (short)((uint)DAT_0d8e * (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8
                                         );
        iVar8 = (uint)DAT_0d90 * (uint)uVar6;
        DAT_0df7 = (ushort)((uint)iVar8 >> 8);
        sVar7 = DAT_0df7 + uVar15;
        uVar10 = CONCAT12(CARRY2(DAT_0df7,uVar15),sVar7);
        _DAT_0c9e = (uint)uVar10;
        uVar11 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar10 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar7;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 3,
                             (char)(CONCAT11((char)(RAM0x0c9f % 3),(undefined1)DAT_0ca0) / 3));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar11;
        _DAT_0df6 = iVar8;
      }
      else if (DAT_0d8d == '\x04') {
        uVar15 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar6 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar15 = uVar3 + (short)((uint)DAT_0d90 * (uint)uVar6 >> 8) +
                         uVar6 + (short)((uint)DAT_0d8f * (uint)uVar15 >> 8) +
                                 uVar15 + (short)((uint)DAT_0d8e *
                                                  (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8);
        iVar8 = (uint)DAT_0d91 * (uint)uVar3;
        DAT_0df7 = (ushort)((uint)iVar8 >> 8);
        sVar7 = DAT_0df7 + uVar15;
        uVar10 = CONCAT12(CARRY2(DAT_0df7,uVar15),sVar7);
        _DAT_0c9e = (uint)uVar10;
        uVar11 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar10 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar7;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 4,
                             (char)(CONCAT11((char)(RAM0x0c9f % 4),(undefined1)DAT_0ca0) / 4));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar11;
        _DAT_0df6 = iVar8;
      }
      else if (DAT_0d8d == '\x05') {
        uVar15 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar6 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar4 = (ushort)DAT_0d98 * 2 + 0xc58;
        uVar15 = uVar4 + (short)((uint)DAT_0d91 * (uint)uVar3 >> 8) +
                         uVar3 + (short)((uint)DAT_0d90 * (uint)uVar6 >> 8) +
                                 uVar6 + (short)((uint)DAT_0d8f * (uint)uVar15 >> 8) +
                                         uVar15 + (short)((uint)DAT_0d8e *
                                                          (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8)
        ;
        iVar8 = (uint)DAT_0d92 * (uint)uVar4;
        DAT_0df7 = (ushort)((uint)iVar8 >> 8);
        sVar7 = DAT_0df7 + uVar15;
        uVar10 = CONCAT12(CARRY2(DAT_0df7,uVar15),sVar7);
        _DAT_0c9e = (uint)uVar10;
        uVar11 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar10 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar7;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 5,
                             (char)(CONCAT11((char)(RAM0x0c9f % 5),(undefined1)DAT_0ca0) / 5));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar11;
        _DAT_0df6 = iVar8;
      }
      else {
        if (DAT_0d8d != '\x06') goto LAB_e491;
        uVar15 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar6 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar4 = (ushort)DAT_0d98 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d99 * 2 + 0xc58;
        uVar15 = uVar5 + (short)((uint)DAT_0d92 * (uint)uVar4 >> 8) +
                         uVar4 + (short)((uint)DAT_0d91 * (uint)uVar3 >> 8) +
                                 uVar3 + (short)((uint)DAT_0d90 * (uint)uVar6 >> 8) +
                                         uVar6 + (short)((uint)DAT_0d8f * (uint)uVar15 >> 8) +
                                                 uVar15 + (short)((uint)DAT_0d8e *
                                                                  (uint)((ushort)DAT_0d94 * 2 +
                                                                        0xc58) >> 8);
        iVar8 = (uint)DAT_0d93 * (uint)uVar5;
        DAT_0df7 = (ushort)((uint)iVar8 >> 8);
        sVar7 = DAT_0df7 + uVar15;
        uVar10 = CONCAT12(CARRY2(DAT_0df7,uVar15),sVar7);
        _DAT_0c9e = (uint)uVar10;
        uVar11 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar10 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar7;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 6,
                             (char)(CONCAT11((char)(RAM0x0c9f % 6),(undefined1)DAT_0ca0) / 6));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar11;
        _DAT_0df6 = iVar8;
      }
    }
    else {
      DAT_0c8a = DAT_0da8;
    }
    FUN_f3b7();
    puVar9 = DAT_0c8a + -0x1eb7;
    if (DAT_0c8a < &UNK_1eb7) {
      iVar8 = (uint)CONCAT11((~(byte)((ushort)puVar9 >> 8) + 1) - ((char)-(char)puVar9 != '\0'),
                             -(char)puVar9) * (uint)extraout_A * 2;
      uVar15 = (ushort)iVar8;
      bVar14 = (byte)((uint)iVar8 >> 0x18);
      cVar2 = bVar14 + (0xff7f < uVar15);
      if (CONCAT11(bVar14 + CARRY1(bVar14,0xff7f < uVar15),cVar2) < 0x100) {
        _DAT_0e04 = CONCAT12(cVar2,uVar15 + 0x80);
        DAT_0c8c = &UNK_1eb7 + -(short)DAT_0e04;
        if (DAT_0e04 < &UNK_1eb8) goto LAB_ea7c;
      }
      DAT_0c8c = (undefined *)0x0;
    }
    else {
      iVar8 = ZEXT24(puVar9) * (uint)extraout_A * 2;
      uVar15 = (ushort)iVar8;
      bVar14 = (byte)((uint)iVar8 >> 0x18);
      cVar2 = bVar14 + (0xff7f < uVar15);
      if (CONCAT11(bVar14 + CARRY1(bVar14,0xff7f < uVar15),cVar2) < 0x100) {
        _DAT_0e04 = CONCAT12(cVar2,uVar15 + 0x80);
        DAT_0c8c = &UNK_1eb7 + (short)DAT_0e04;
        if (DAT_0e04 < 0xe149) goto LAB_ea7c;
      }
      DAT_0c8c = (undefined *)0xffff;
    }
LAB_ea7c:
    DAT_0c93 = extraout_A;
    if ((~DAT_0ca8 & 1) == 0) {
      if ((((DAT_0ca8 & 2) == 0) || (DAT_0c9c <= DAT_0c9a)) || (DAT_0c9c - DAT_0c9a < DAT_0dac)) {
        if ((((~DAT_0ca8 & 2) != 0) || (DAT_0c9a <= DAT_0c9c)) || (DAT_0c9a - DAT_0c9c < DAT_0dac))
        {
          DAT_0ca9 = 0;
          goto LAB_ead9;
        }
        DAT_0ca8 = DAT_0ca8 | 2;
        DAT_0922 = DAT_0c03 + '\f';
      }
      else {
        DAT_0ca8 = DAT_0ca8 & 0xfd;
        DAT_0922 = DAT_0c03;
      }
      DAT_0ca9 = (DAT_0ca9 + 1) - (0xfe < DAT_0ca9);
      if (DAT_0d9a <= DAT_0ca9) {
        DAT_0ca8 = DAT_0ca8 | 1;
      }
    }
  }
LAB_ead9:
  if ((((DAT_0bfe & 0x80) != 0) && (DAT_0c9a < DAT_0c9c)) && (DAT_0c04 == DAT_0d8c)) {
    DAT_0c88 = DAT_0c40;
  }
  if ((((~DAT_0889 & 4) == 0) && ((~DAT_0885 & 0x80) == 0)) && ((DAT_0889 & 0x10) != 0)) {
    DAT_0889 = DAT_0889 | 0xc;
  }
  uVar15 = (ushort)DAT_0a53 * 2 + 0xa54;
  DAT_0a52 = (DAT_0a52 + 1) - (0xfe < DAT_0a52);
  if (DAT_0a52 < 0x18) {
    uVar12 = _DAT_0a4f;
    if (1 < DAT_0a52) {
      _DAT_0df7 = CONCAT21(RAM0x0a50,DAT_0df9);
      _DAT_0df6 = CONCAT13(DAT_0a4f._0_1_,_DAT_0df7);
      goto LAB_eb49;
    }
  }
  else {
    _DAT_0df7 = CONCAT21(RAM0x0a50 - uVar15,DAT_0df9);
    _DAT_0df6 = CONCAT13(DAT_0a4f._0_1_ - (RAM0x0a50 < uVar15),_DAT_0df7);
LAB_eb49:
    uVar15 = DAT_0c08;
    if (DAT_0c07 != '\0') {
      uVar15 = 0xffff;
    }
    sVar7 = DAT_0df7 + uVar15;
    bVar1 = CARRY2(DAT_0df7,uVar15);
    _DAT_0df7 = CONCAT21(sVar7,DAT_0df9);
    cVar2 = DAT_0df6 + bVar1;
    _DAT_0a4f = CONCAT12(cVar2,sVar7);
    uVar12 = _DAT_0a4f;
    _DAT_0df6 = CONCAT13(cVar2,_DAT_0df7);
    if (DAT_0a52 < 0x17) {
      bVar14 = DAT_0a52 - 1;
      RAM0x0df8 = (ushort)bVar14;
      DAT_0a51 = (undefined1)sVar7;
      RAM0x0df8 = CONCAT11((char)(CONCAT11((char)(DAT_0a4f % (ushort)bVar14),DAT_0a51) / RAM0x0df8),
                           bVar14);
      _DAT_0df6 = CONCAT22(DAT_0a4f / bVar14,RAM0x0df8);
      iVar8 = (_DAT_0df6 >> 8 & 0xffff) * 0x16;
      _DAT_0df7 = CONCAT21((short)iVar8,bVar14);
      _DAT_0df6 = CONCAT13((char)((uint)iVar8 >> 0x10),_DAT_0df7);
    }
    DAT_0a4b._0_1_ = DAT_0df6;
    RAM0x0a4c = DAT_0df7;
    DAT_0a53 = DAT_0a53 + 1;
    if (0x15 < DAT_0a53) {
      DAT_0a53 = 0;
    }
  }
  _DAT_0a4f = uVar12;
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    if (DAT_0a2e._0_1_ < DAT_0dd8) {
      if (((DAT_0a2e._0_1_ < DAT_0dd7) && (DAT_0d0a < DAT_0dd6)) && ((~DAT_0d08 & 8) == 0)) {
        DAT_0afc = 0;
        DAT_0d08 = DAT_0d08 & 0xfe | 8;
      }
    }
    else {
      DAT_0d08 = DAT_0d08 | 1;
    }
  }
  if (DAT_0d87 != '\t') {
    if (DAT_0c04 != '\0') goto LAB_ec8f;
    if ((((~DAT_0ada & 0x10) != 0) || ((DAT_0ada & 4) != 0)) &&
       (DAT_0ae1 = (DAT_0ae1 + 1) - (0xfe < DAT_0ae1), DAT_0ddb <= DAT_0ae1)) {
      DAT_0ae1 = 0;
      if ((DAT_0ada & 0x10) == 0) {
        uVar15 = DAT_0ad6 - DAT_0db8;
        if (DAT_0ad6 < DAT_0db8) {
          uVar15 = 0;
        }
        bVar1 = DAT_0ad9 < DAT_0dda;
        DAT_0ad6 = uVar15;
        DAT_0ad9 = DAT_0ad9 - DAT_0dda;
        if (bVar1) {
          DAT_0ad9 = 0;
        }
      }
      else {
        uVar15 = DAT_0ad6 + DAT_0db8;
        if ((CARRY2(DAT_0ad6,DAT_0db8)) || (0x200 < uVar15)) {
          uVar15 = 0x200;
        }
        bVar14 = DAT_0ad9 + DAT_0dda;
        DAT_0ad6 = uVar15;
        if ((CARRY1(DAT_0ad9,DAT_0dda)) || (DAT_0ad9 = bVar14, DAT_0ddc < bVar14)) {
          DAT_0ad9 = DAT_0ddc;
        }
      }
    }
    if ((DAT_0ada & 0x20) != 0) {
      DAT_0ad4 = DAT_0ad6;
      DAT_0ad8 = DAT_0ad9;
      goto LAB_ec8f;
    }
  }
  DAT_0ad4 = 0;
  DAT_0ad8 = 0;
LAB_ec8f:
  DAT_08be = DAT_08be & 0x5f;
  return;
}


