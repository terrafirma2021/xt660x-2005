/* Entry 8b34 */

/* WARNING: Removing unreachable block (RAM,0x9c19) */
/* WARNING: Removing unreachable block (RAM,0x9b8d) */
/* WARNING: Removing unreachable block (RAM,0x9b50) */
/* WARNING: Removing unreachable block (RAM,0x9b57) */
/* WARNING: Removing unreachable block (RAM,0x9b59) */
/* WARNING: Removing unreachable block (RAM,0x9b6c) */
/* WARNING: Removing unreachable block (RAM,0x9b6f) */
/* WARNING: Removing unreachable block (RAM,0x9b80) */
/* WARNING: Removing unreachable block (RAM,0x9b74) */
/* WARNING: Removing unreachable block (RAM,0x9b7b) */
/* WARNING: Removing unreachable block (RAM,0x9b87) */
/* WARNING: Removing unreachable block (RAM,0x9b95) */
/* WARNING: Removing unreachable block (RAM,0x9bb8) */
/* WARNING: Removing unreachable block (RAM,0x9c36) */
/* WARNING: Removing unreachable block (RAM,0x9bdb) */
/* WARNING: Removing unreachable block (RAM,0x9be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8b34(undefined2 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  byte extraout_A;
  byte extraout_A_00;
  byte extraout_A_01;
  byte extraout_A_02;
  byte extraout_A_03;
  byte extraout_A_04;
  byte extraout_A_05;
  byte extraout_A_06;
  byte extraout_A_07;
  byte extraout_A_08;
  undefined2 uVar8;
  char cVar13;
  ushort uVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  byte bVar14;
  byte bVar15;
  undefined2 *puVar16;
  ushort uVar17;
  
  DAT_0882 = DAT_0882 & 0xbf;
  DAT_08bc = DAT_08bc | 8;
  FUN_5fa4();
  _DAT_0dde = CONCAT13(DAT_0896._0_1_,RAM0x0ddf);
  bVar6 = DAT_0001;
  bVar15 = ((bVar6 ^ (byte)DAT_0896) & DAT_0896._0_1_) +
           (~(bVar6 ^ (byte)DAT_0896) & (byte)DAT_0896);
  DAT_0896 = CONCAT11(bVar15,bVar6);
  bVar6 = DAT_0000;
  DAT_0894 = CONCAT11(((bVar6 ^ (byte)DAT_0894) & DAT_0894._0_1_) +
                      (~(bVar6 ^ (byte)DAT_0894) & (byte)DAT_0894),bVar6);
  if (((DAT_0d57 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    if ((bVar15 & 1) == 0) {
      if ((DAT_08b6 & 4) == 0) {
        if ((DAT_0d8a < DAT_0bc7) && ((DAT_08af & 2) != 0)) {
          DAT_08af = DAT_08af & 0xfd;
          DAT_0bd2 = DAT_0bd2 | 0x80;
        }
      }
      else {
        DAT_08b6 = DAT_08b6 & 0xfb;
      }
    }
    else if ((DAT_0900._0_1_ < DAT_4e4a) || ((~DAT_0880 & 1) == 0)) {
      DAT_08b6 = DAT_08b6 & 0xfb;
      DAT_0bc6 = 0;
      DAT_0bc7 = 0;
    }
    else {
      bVar15 = DAT_0bd2;
      if ((DAT_08b6 & 4) != 0) {
        if (DAT_0bc6 <= DAT_0d8a) goto LAB_8bec;
        if ((~DAT_08af & 2) == 0) {
          DAT_08af = DAT_08af | 2;
          bVar15 = DAT_0bd2 | 0x80;
          if ((~DAT_08b8 & 2) == 0) {
            DAT_08b8 = DAT_08b8 | 2;
            bVar15 = DAT_0bd2 | 0x88;
          }
        }
      }
      DAT_0bd2 = bVar15;
      DAT_08b6 = DAT_08b6 | 4;
    }
  }
LAB_8bec:
  if ((DAT_0889 & 0x20) == 0) {
LAB_8c00:
    DAT_0baf = 0;
  }
  else {
    DAT_0baf = (DAT_0baf + 1) - (0xfe < DAT_0baf);
    if (0x32 < DAT_0baf) {
      DAT_0889 = DAT_0889 & 0xdf;
      goto LAB_8c00;
    }
  }
  if (DAT_0bb0 < DAT_0bb4) {
    DAT_0bba = (DAT_0bba + 1) - (0xfe < DAT_0bba);
  }
  else {
    DAT_0bba = 0;
  }
  if (3 < DAT_0bba) {
    bVar15 = (byte)(DAT_0bb4 - 1 >> 8);
    DAT_0bb4 = CONCAT11(bVar15 + CARRY1(bVar15,DAT_0bb4 == 0),bVar15 + (DAT_0bb4 == 0));
    DAT_0bba = 0;
  }
  DAT_0bb6 = DAT_0bb0 - DAT_0bb4;
  if (DAT_0bb0 < DAT_0bb4) {
    DAT_0bb6 = 0;
  }
  if (DAT_08d0 < DAT_08e0) {
    DAT_08ef = (DAT_08ef + 1) - (0xfe < DAT_08ef);
  }
  else {
    DAT_08ef = 0;
  }
  if (3 < DAT_08ef) {
    bVar15 = (byte)(DAT_08e0 - 1 >> 8);
    DAT_08e0 = CONCAT11(bVar15 + CARRY1(bVar15,DAT_08e0 == 0),bVar15 + (DAT_08e0 == 0));
    DAT_08ef = 0;
  }
  DAT_08e2 = DAT_08d0 - DAT_08e0;
  if (DAT_08d0 < DAT_08e0) {
    DAT_08e2 = 0;
  }
  uVar17 = DAT_08e4 - DAT_08e2;
  if (DAT_08e4 < DAT_08e2) {
    uVar17 = CONCAT11((~(byte)(uVar17 >> 8) + 1) - ((char)-(char)uVar17 != '\0'),-(char)uVar17);
  }
  if (uVar17 < 8) {
    DAT_088d = DAT_088d & 0xf7;
  }
  else {
    DAT_088d = DAT_088d | 0xc;
    DAT_08e4 = DAT_08e2;
  }
  sVar11 = DAT_08e2 - DAT_08e6;
  if (DAT_08e2 < DAT_08e6) {
    sVar11 = CONCAT11((~(byte)((ushort)sVar11 >> 8) + 1) - ((char)-(char)sVar11 != '\0'),
                      -(char)sVar11);
    uVar8 = scale_u16_by_u8(param_1,sVar11);
    sVar12 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8)
    ;
  }
  else {
    sVar12 = scale_u16_by_u8(param_1,sVar11);
  }
  DAT_08e6 = sVar12 + DAT_08e6;
  sVar12 = DAT_0bb6 - DAT_0bb8;
  if (DAT_0bb6 < DAT_0bb8) {
    sVar12 = CONCAT11((~(byte)((ushort)sVar12 >> 8) + 1) - ((char)-(char)sVar12 != '\0'),
                      -(char)sVar12);
    uVar8 = scale_u16_by_u8(sVar11,sVar12);
    sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8)
    ;
  }
  else {
    sVar11 = scale_u16_by_u8(sVar11,sVar12);
  }
  DAT_0bb8 = sVar11 + DAT_0bb8;
  uVar17 = DAT_08e2 - (short)DAT_09d0;
  if (DAT_08e2 < DAT_09d0) {
    uVar17 = CONCAT11((~(byte)(uVar17 >> 8) + 1) - ((char)-(char)uVar17 != '\0'),-(char)uVar17);
    uVar8 = scale_u16_by_u8(sVar12);
    sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8)
    ;
  }
  else {
    sVar11 = scale_u16_by_u8(sVar12);
  }
  DAT_09d0 = (undefined2 *)(sVar11 + (short)DAT_09d0);
  DAT_09df = DAT_09df + 1;
  bVar15 = DAT_312f;
  if (9 < DAT_312f) {
    bVar15 = 10;
  }
  _DAT_0de2 = CONCAT12(bVar15,_DAT_0de3);
  if (bVar15 <= DAT_09df) {
    DAT_09e0 = DAT_09e0 | 1;
    DAT_09df = 0;
  }
  puVar16 = DAT_09d0;
  if ((~DAT_09e0 & 1) != 0) {
    DAT_09da = DAT_09d2;
    _DAT_0dde = 0;
    puVar16 = &DAT_09e2;
    do {
      sVar11 = (short)puVar16 + RAM0x0ddf;
      bVar1 = CARRY2((ushort)puVar16,RAM0x0ddf);
      RAM0x0ddf = CONCAT21(sVar11,(char)DAT_0de0);
      _DAT_0dde = CONCAT13(DAT_0dde._0_1_ + bVar1,RAM0x0ddf);
      uVar5 = _DAT_0dde;
      puVar16 = puVar16 + 1;
      bVar6 = (char)DAT_0de0 + 1;
      _DAT_0dde = CONCAT31(_DAT_0dde,bVar6);
    } while (bVar6 < bVar15);
    if (bVar15 == 0) {
      _DAT_0de2 = (uint3)DAT_09e2;
      DAT_09d2 = DAT_09e2;
    }
    else {
      DAT_0dde = SUB42(uVar5,2);
      DAT_0de0._0_1_ = (undefined1)sVar11;
      uVar10 = CONCAT11((char)((ushort)DAT_0dde % (ushort)bVar6),DAT_0de0._0_1_);
      _DAT_0de2 = CONCAT21((ushort)DAT_0dde / (ushort)bVar6,(char)(uVar10 / bVar6));
      puVar16 = (undefined2 *)(uVar10 % (ushort)bVar6);
      DAT_09d2 = _DAT_0de3;
    }
  }
  FUN_a405(puVar16);
  FUN_a448();
  FUN_a462();
  if ((~DAT_09cf & 0x40) == 0) {
    if ((~DAT_09cf & 0x80) == 0) {
      if (((DAT_09da <= DAT_09d2) && (DAT_3132 <= DAT_09d2 - DAT_09da)) &&
         (DAT_09d2 - DAT_09da <= DAT_3134)) {
        DAT_09d4 = DAT_09da;
        DAT_09cf = DAT_09cf | 0x80;
        goto LAB_8dd1;
      }
    }
    else {
LAB_8dd1:
      if (DAT_09da <= DAT_09d2) {
        DAT_09dc = (DAT_09dc + 1) - (0xfe < DAT_09dc);
        if (DAT_09dc < DAT_3136) goto LAB_8e47;
        if ((DAT_09d4 < DAT_09d2) && (DAT_09d2 - DAT_09d4 <= DAT_3138)) {
          DAT_09cf = DAT_09cf | 0x40;
          goto LAB_8df9;
        }
      }
    }
LAB_8e37:
    DAT_09cf = DAT_09cf & 0x3e;
    DAT_09dc = 0;
  }
  else {
LAB_8df9:
    if ((((DAT_3130 != -0x80) || ((~DAT_08af & 8) != 0)) ||
        (((~DAT_08af & 4) != 0 || ((~DAT_0881 & 0x10) != 0)))) ||
       (((DAT_0d87 == '\t' && ((DAT_0896 & 0x1000) == 0)) || ((~DAT_09cf & 0x10) != 0))))
    goto LAB_8e37;
    if ((~DAT_09cf & 1) == 0) {
      DAT_09cf = DAT_09cf | 1;
      DAT_09d6 = DAT_09d8;
      DAT_09d7 = DAT_09d9;
    }
  }
LAB_8e47:
  if ((DAT_09cf & 1) == 0) {
LAB_8e8d:
    DAT_09cf = DAT_09cf & 0xf0;
    DAT_0cd4 = 0x80;
  }
  else {
    if ((~DAT_09cf & 8) == 0) {
      DAT_0cd4 = DAT_09d6;
      if (DAT_09da <= DAT_09d2) goto LAB_8e9f;
LAB_8e81:
      DAT_09cf = DAT_09cf & 0x3f;
      DAT_09dc = 0;
      goto LAB_8e8d;
    }
    if (DAT_0cd4 < 0x80) {
      bVar15 = DAT_0cd4 + DAT_3213;
      if (((CARRY1(DAT_0cd4,DAT_3213)) || (bVar15 == 0x80)) || (DAT_0cd4 = bVar15, 0x7f < bVar15)) {
LAB_8e7d:
        DAT_09cf = DAT_09cf | 0x10;
        goto LAB_8e81;
      }
    }
    else {
      bVar15 = DAT_0cd4 - DAT_3213;
      if (((DAT_0cd4 < DAT_3213) || (bVar15 == 0x80)) || (DAT_0cd4 = bVar15, bVar15 < 0x80))
      goto LAB_8e7d;
    }
  }
LAB_8e9f:
  uVar10 = DAT_08e6 - ((short)&DAT_0b0e + (ushort)DAT_0b0d);
  cVar13 = (char)uVar10;
  cVar7 = (char)(uVar10 >> 8);
  if (DAT_08e6 < (short)&DAT_0b0e + (ushort)DAT_0b0d) {
    bVar15 = cVar7 + 0x80;
    if ((bVar15 < 0x80) && (0x7f7f < CONCAT11(bVar15,cVar13))) {
      DAT_08ed = cVar13 + 0x80;
    }
    else {
      DAT_08ed = 0;
    }
  }
  else if ((uVar10 < 0x8000) && (CONCAT11(cVar7 + -0x80,cVar13) < 0x8080)) {
    DAT_08ed = cVar13 + 0x80;
  }
  else {
    DAT_08ed = 0xff;
  }
  if ((DAT_0881 & 0x10) == 0) {
    if (DAT_19d7 <= DAT_08ed) {
      DAT_0b03 = 0;
    }
  }
  else {
    DAT_0b03 = 0xff;
  }
  if (DAT_348b < DAT_08ed) {
    DAT_0b17 = '\0';
  }
  else {
    DAT_0b17 = (DAT_0b17 + 1) - (0xfe < DAT_0b17);
  }
  DAT_0b0d = DAT_0b0d + 2 & DAT_1842;
  if (DAT_0a86 < 0x80) {
    if (DAT_4b0f <= DAT_08ed) {
      DAT_0888 = DAT_0888 | 0x40;
    }
  }
  else {
    DAT_0888 = DAT_0888 & 0xbf;
  }
  uVar10 = DAT_0bb8 - ((short)&DAT_0bbe + (ushort)DAT_0bbc);
  cVar13 = (char)uVar10;
  cVar7 = (char)(uVar10 >> 8);
  if (DAT_0bb8 < (short)&DAT_0bbe + (ushort)DAT_0bbc) {
    bVar15 = cVar7 + 0x80;
    if ((bVar15 < 0x80) && (0x7f7f < CONCAT11(bVar15,cVar13))) {
      DAT_0bbb = cVar13 + -0x80;
    }
    else {
      DAT_0bbb = '\0';
    }
  }
  else if ((uVar10 < 0x8000) && (CONCAT11(cVar7 + -0x80,cVar13) < 0x8080)) {
    DAT_0bbb = cVar13 + -0x80;
  }
  else {
    DAT_0bbb = -1;
  }
  DAT_0bbc = DAT_0bbc + 2 & DAT_1842;
  if (DAT_08e6._0_1_ == '\0') {
    DAT_08ec = (byte)DAT_08e6;
  }
  else {
    DAT_08ec = 0xff;
  }
  lookup_u8_uniform_u16_axis();
  DAT_0a05 = extraout_A;
  FUN_a314();
  if (((~DAT_08af & 8) == 0) && ((~DAT_08af & 4) == 0)) {
    if (DAT_0a05 < DAT_08ec) {
      DAT_0b18 = 0;
    }
    else {
      DAT_0b18 = (DAT_0b18 + 1) - (0xfe < DAT_0b18);
    }
    if (((DAT_0886 & 0x10) == 0) || (DAT_08ec < DAT_0a06)) {
      DAT_0b19 = 0;
    }
    else {
      DAT_0b19 = (DAT_0b19 + 1) - (0xfe < DAT_0b19);
    }
  }
  DAT_0b16 = (DAT_0b16 + 1) - (0xfe < DAT_0b16);
  DAT_0e20 = (DAT_0e20 + 1) - (0xfe < DAT_0e20);
  if (DAT_4e8c <= DAT_0e20) {
    FUN_cbef();
    if ((~DAT_0883 & 2) == 0) {
      if ((DAT_0880 & 1) != 0) {
        DAT_0883 = DAT_0883 | 2;
        DAT_0889 = DAT_0889 | 0x10;
        DAT_0bf8 = DAT_0bf8 & 0xdf;
      }
    }
    else if ((~DAT_0880 & 1) == 0) {
      DAT_0b6e = 0;
      DAT_0883 = DAT_0883 & 0xfd;
      DAT_0bf8 = DAT_0bf8 | 0x40;
    }
  }
  if ((~DAT_0880 & 1) == 0) {
    DAT_0b5c = 0;
  }
  else {
    if (DAT_0d7d <= DAT_0a2e._0_1_) {
      DAT_0880 = DAT_0880 | 0x44;
    }
    if ((((((((~DAT_0d08 & 1) == 0) && ((~DAT_0884 & 2) == 0)) && ((~DAT_0884 & 1) == 0)) &&
          (((~DAT_088c & 0x80) == 0 && ((DAT_0883 & 0x10) != 0)))) &&
         (((~DAT_0881 & 8) == 0 && ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))))) &&
        ((~DAT_08b1 & 0x10) == 0)) && (((~DAT_08a0 & 4) == 0 && (DAT_18df != -0x80)))) {
      if (0xbf < DAT_091b) {
        DAT_091b = 0xc0;
      }
      if (0xbf < DAT_091c) {
        DAT_091c = 0xc0;
      }
      if (0xbf < DAT_091d) {
        DAT_091d = 0xc0;
      }
      if (0xbf < DAT_091e) {
        DAT_091e = 0xc0;
      }
      bVar15 = (byte)(DAT_095e >> 8);
      DAT_0926 = CONCAT11(bVar15 + DAT_0a08,(char)DAT_095e);
      if (CARRY1(bVar15,DAT_0a08)) {
        DAT_0926 = -1;
      }
      FUN_864e();
      iVar3 = (uint)DAT_0a08 * 0x100 * (uint)DAT_0cec * 2;
      uVar10 = (ushort)iVar3;
      bVar15 = (byte)((uint)iVar3 >> 0x18);
      cVar7 = bVar15 + (0xff7f < uVar10);
      uVar9 = CONCAT11(bVar15 + CARRY1(bVar15,0xff7f < uVar10),cVar7);
      uVar17 = uVar10 + 0x80;
      if (uVar9 < 0x100) {
        RAM0x0ddf = CONCAT12((char)(uVar10 + 0x80 >> 8),DAT_0de0);
        _DAT_0dde = CONCAT13(cVar7,RAM0x0ddf);
        DAT_0928 = (short)DAT_0dde + DAT_095e;
        uVar17 = uVar9;
        if (CARRY2((ushort)DAT_0dde,DAT_095e)) goto LAB_90dd;
      }
      else {
LAB_90dd:
        DAT_0928 = -1;
      }
      DAT_0a17 = DAT_0a17 | 0x80;
      FUN_c8c9();
      DAT_0a17 = DAT_0a17 & 0x7f;
      if (DAT_0d87 != '\t') {
        DAT_0a17 = DAT_0a17 | 0x20;
        FUN_c939();
        DAT_0a17 = DAT_0a17 & 0xdf;
      }
      DAT_0881 = DAT_0881 | 8;
    }
  }
  if ((((DAT_0886 & 0x40) == 0) || (DAT_08ed < DAT_34ce)) || (DAT_0b1e < DAT_3553)) {
    DAT_0a12 = 0;
  }
  else {
    DAT_0881 = DAT_0881 | 1;
    DAT_0b1e = 0;
    if (((DAT_4b08 != '\0') && (DAT_0a86 == 0x80)) && (DAT_0a86 = DAT_4b0b, DAT_4b0b < 0x80)) {
      DAT_0a87 = DAT_4b0e;
    }
    if ((DAT_097a == '\0') && (DAT_097a = DAT_3483, DAT_3483 != -0x80)) {
      DAT_0a04 = DAT_3486;
    }
    bVar15 = DAT_354e;
    if (((((DAT_0d87 == '\t') && (bVar15 = DAT_3548, (~DAT_0896._0_1_ & 0x10) != 0)) &&
         (bVar15 = DAT_3549, (DAT_0899 & 2) == 0)) &&
        ((bVar15 = DAT_354a, (DAT_0899 & 4) == 0 && (bVar15 = DAT_354b, (DAT_0899 & 8) == 0)))) &&
       ((bVar15 = DAT_354c, (DAT_0899 & 0x10) == 0 && (bVar15 = DAT_354e, (DAT_0899 & 0x20) != 0))))
    {
      bVar15 = DAT_354d;
    }
    DAT_0a12 = (ushort)bVar15 << 5;
  }
  if (DAT_0b21 == 1) {
    if ((((~DAT_0886 & 0x40) != 0) || ((~DAT_0881 & 0x10) != 0)) ||
       ((DAT_0900._0_1_ < DAT_34c5 ||
        (((DAT_34c6 < DAT_0900._0_1_ || (bVar15 = (byte)((DAT_08e6 << 6) >> 8), bVar15 < DAT_34c7))
         || (DAT_34c8 < bVar15)))))) goto LAB_931f;
    if ((DAT_0d87 == '\t') && ((DAT_0896 & 0x1000) == 0)) {
      if (DAT_34c9 <= DAT_08ed) goto LAB_9217;
      goto LAB_931f;
    }
    if (DAT_08ed < DAT_34ca) goto LAB_931f;
LAB_9217:
    lookup_u8_uniform_u16_axis();
    DAT_0a0d = extraout_A_00;
    lookup_u8_uniform_axis((ushort)extraout_A_00 * (ushort)DAT_0a0f);
    DAT_0a10 = extraout_A_01;
    uVar8 = multiply_u16_shift8_saturate(extraout_A_01 + 0x180);
    _DAT_0dde = CONCAT22(uVar8,DAT_0de0);
    lookup_u8_uniform_axis();
    DAT_0a0c = extraout_A_02;
    lookup_u8_uniform_u16_axis();
    uVar2 = (uint)((ushort)extraout_A_03 * (ushort)DAT_0a0c) * (_DAT_0dde >> 0x10);
    DAT_0a0e = extraout_A_03;
    if (uVar2 < 0x40000000) {
      bVar15 = (byte)(uVar2 >> 0x10);
      uVar17 = CONCAT11(((char)(uVar2 >> 0x18) << 1 | bVar15 >> 7) << 1 | (bVar15 & 0x7f) >> 6,
                        (bVar15 << 1 | (byte)(uVar2 >> 8) >> 7) << 1 |
                        (byte)((ushort)((short)uVar2 << 1) >> 0xf));
      DAT_0a0a = uVar17;
      if (uVar17 <= DAT_34cc) goto LAB_931f;
    }
    else {
      DAT_0a0a = 0xffff;
    }
    do {
      uVar17 = (ushort)((uint)DAT_0b21 * 0x9c4 >> 0x10);
      uVar9 = (ushort)((uint)DAT_0b21 * 0x9c4);
      _DAT_0dde = CONCAT22(uVar9,DAT_0de0);
      uVar10 = DAT_0a0a + DAT_095e;
      if (CARRY2(DAT_0a0a,DAT_095e)) {
        uVar10 = 0xffff;
      }
    } while ((uVar9 <= uVar10) && (DAT_0b21 = (DAT_0b21 + 1) - (0xfe < DAT_0b21), DAT_0b21 < 0x1b));
    if ((DAT_0d87 == '\t') && ((DAT_0896 & 0x1000) == 0)) {
      bVar15 = DAT_3551;
      if (DAT_0b20 < DAT_354f) {
LAB_92fe:
        if (bVar15 <= DAT_0b1c) goto LAB_931f;
        DAT_0b1c = (DAT_0b1c + 1) - (0xfe < DAT_0b1c);
      }
      else {
        DAT_0b20 = 0;
        DAT_0b1c = 0;
      }
    }
    else {
      bVar15 = DAT_3552;
      if (DAT_0b20 < DAT_3550) goto LAB_92fe;
      DAT_0b20 = 0;
      DAT_0b1c = 0;
    }
    DAT_0881 = DAT_0881 | 1;
    if (DAT_3487 == -0x80) {
      DAT_097a = -0x80;
    }
  }
  else {
    DAT_0b21 = DAT_0b21 - 1;
LAB_931f:
    DAT_0a0a = 0;
  }
  if (((((((DAT_0881 & 1) != 0) && ((~DAT_0d08 & 1) == 0)) && ((~DAT_0884 & 2) == 0)) &&
       (((~DAT_0884 & 1) == 0 && ((~DAT_088c & 0x80) == 0)))) && ((~DAT_08a0 & 4) == 0)) &&
     (((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)) && ((DAT_08b1 & 0x10) == 0)))) {
    DAT_0a14 = DAT_0a0a + DAT_0a12;
    if ((CARRY2(DAT_0a0a,DAT_0a12)) || (24999 < DAT_0a14)) {
      DAT_0a14 = 25000;
    }
    DAT_0926 = DAT_0a14 + DAT_095e;
    if (CARRY2(DAT_0a14,DAT_095e)) {
      DAT_0926 = -1;
    }
    FUN_864e(uVar17,DAT_0926);
    iVar3 = (uint)DAT_0a14 * (uint)DAT_0cec * 2;
    uVar17 = (ushort)iVar3;
    bVar15 = (byte)((uint)iVar3 >> 0x18);
    cVar7 = bVar15 + (0xff7f < uVar17);
    if ((0xff < CONCAT11(bVar15 + CARRY1(bVar15,0xff7f < uVar17),cVar7)) ||
       (uVar17 = CONCAT11(cVar7,(char)(uVar17 + 0x80 >> 8)), DAT_0928 = uVar17 + DAT_095e,
       CARRY2(uVar17,DAT_095e))) {
      DAT_0928 = -1;
    }
    if ((~DAT_08b1 & 0x80) == 0) {
      DAT_0a17 = DAT_0a17 | 0x80;
      FUN_c8c9();
      DAT_0a17 = DAT_0a17 & 0x7f;
    }
    if ((DAT_0d87 != '\t') && ((~DAT_08b1 & 0x80) == 0)) {
      DAT_0a17 = DAT_0a17 | 0x20;
      FUN_c939();
      DAT_0a17 = DAT_0a17 & 0xdf;
    }
  }
  DAT_0881 = DAT_0881 & 0xfe;
  DAT_08c0 = DAT_08c0 | 0x40;
  if (((((~DAT_0886 & 0x40) == 0) && ((~DAT_0881 & 0x10) == 0)) && (DAT_3554 <= DAT_0900._0_1_)) &&
     (((DAT_0900._0_1_ <= DAT_3555 && (bVar15 = (byte)((DAT_08e6 << 6) >> 8), DAT_3556 <= bVar15))
      && (bVar15 <= DAT_3557)))) {
    bVar15 = DAT_3559;
    if ((DAT_0d87 == '\t') && ((DAT_0896 & 0x1000) == 0)) {
      bVar15 = DAT_3558;
    }
    if (DAT_08ed < bVar15) goto LAB_9429;
    DAT_0cf2 = DAT_0cf2 | 2;
LAB_9438:
    lookup_u8_uniform_u16_axis();
    DAT_0a0d = extraout_A_04;
    lookup_u8_uniform_axis((ushort)extraout_A_04 * (ushort)DAT_0a0f);
    DAT_0a10 = extraout_A_05;
    uVar8 = multiply_u16_shift8_saturate(extraout_A_05 + 0x180);
    _DAT_0dde = CONCAT22(uVar8,DAT_0de0);
    lookup_u8_uniform_axis();
    DAT_0d04 = extraout_A_06;
    lookup_u8_uniform_u16_axis();
    uVar2 = (uint)((ushort)extraout_A_07 * (ushort)DAT_0d04) * (_DAT_0dde >> 0x10);
    DAT_0a0e = extraout_A_07;
    if (uVar2 < 0x40000000) {
      bVar15 = (byte)(uVar2 >> 0x10);
      DAT_0cfa = CONCAT11(((char)(uVar2 >> 0x18) << 1 | bVar15 >> 7) << 1 | (bVar15 & 0x7f) >> 6,
                          (bVar15 << 1 | (byte)(uVar2 >> 8) >> 7) << 1 |
                          (byte)((ushort)((short)uVar2 << 1) >> 0xf));
    }
    else {
      DAT_0cfa = 0xffff;
    }
  }
  else {
LAB_9429:
    DAT_0cf2 = DAT_0cf2 & 0xfd;
    if ((~DAT_0cf2 & 1) != 0) goto LAB_9438;
    DAT_0cfa = 0;
  }
  uVar17 = DAT_0cfa + DAT_0940;
  DAT_0cf8 = DAT_19dc;
  if (((!CARRY2(DAT_0cfa,DAT_0940)) && (uVar17 < DAT_19dc)) &&
     (DAT_0cf8 = uVar17, uVar17 < DAT_19da)) {
    DAT_0cf8 = DAT_19da;
  }
  DAT_0cf6 = DAT_0cf8 + DAT_095e;
  if (CARRY2(DAT_0cf8,DAT_095e)) {
    DAT_0cf6 = -1;
  }
  DAT_0d02 = DAT_0cfa;
  FUN_864e();
  iVar3 = (uint)DAT_0d02 * (uint)DAT_0cec * 2;
  uVar17 = (ushort)iVar3;
  sVar11 = uVar17 + 0x80;
  bVar15 = (byte)((uint)iVar3 >> 0x18);
  cVar7 = bVar15 + (0xff7f < uVar17);
  if (CONCAT11(bVar15 + CARRY1(bVar15,0xff7f < uVar17),cVar7) < 0x100) {
    RAM0x0ddf = CONCAT21(sVar11,(char)DAT_0de0);
    _DAT_0dde = CONCAT13(cVar7,RAM0x0ddf);
    DAT_0d00 = (ushort)DAT_0dde;
  }
  else {
    DAT_0d00 = 0xffff;
  }
  uVar17 = DAT_0d00 + DAT_095a;
  DAT_0cfe = DAT_19dc;
  if (((!CARRY2(DAT_0d00,DAT_095a)) && (uVar17 < DAT_19dc)) &&
     (DAT_0cfe = uVar17, uVar17 < DAT_19da)) {
    DAT_0cfe = DAT_19da;
  }
  DAT_0cfc = DAT_0cfe + DAT_095e;
  if (CARRY2(DAT_0cfe,DAT_095e)) {
    DAT_0cfc = -1;
  }
  if ((((~DAT_0d08 & 1) == 0) && ((~DAT_0884 & 2) == 0)) &&
     (((~DAT_0884 & 1) == 0 && ((~DAT_088c & 0x80) == 0)))) {
    if ((DAT_0d87 == '\t') && ((DAT_0896 & 0x1000) == 0)) {
      if (DAT_355a <= DAT_08ed) goto LAB_9566;
      goto LAB_9581;
    }
    if (DAT_08ed < DAT_355b) goto LAB_9581;
LAB_9566:
    if ((((DAT_0dd9 != -0x80) && ((~DAT_08b0 & 8) != 0)) || ((~DAT_08b1 & 0x10) != 0)) ||
       (((DAT_0ca8 & 1) == 0 || ((DAT_08b1 & 0x80) != 0)))) goto LAB_9581;
    if ((((~DAT_0cf2 & 1) == 0) && ((DAT_0cf2 & 2) != 0)) &&
       (((~DAT_0cf2 & 4) == 0 && (DAT_0da4 != '\0')))) {
      DAT_0cf3 = 0;
      DAT_0cf2 = DAT_0cf2 | 1;
    }
  }
  else {
LAB_9581:
    DAT_0cf2 = DAT_0cf2 & 0xfe;
  }
  DAT_08c0 = DAT_08c0 & 0xbf;
  sVar12 = DAT_0c8a - (short)DAT_0c8e;
  if (DAT_0c8a < DAT_0c8e) {
    sVar12 = CONCAT11((~(byte)((ushort)sVar12 >> 8) + 1) - ((char)-(char)sVar12 != '\0'),
                      -(char)sVar12);
    uVar8 = scale_u16_by_u8(sVar11,sVar12);
    sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8)
    ;
  }
  else {
    sVar11 = scale_u16_by_u8(sVar11,sVar12);
  }
  DAT_0c8e = (undefined *)(sVar11 + (short)DAT_0c8e);
  if ((DAT_0ca8 & 1) == 0) {
    DAT_0c96 = DAT_0c98;
  }
  else {
    sVar11 = DAT_0c94 - DAT_0c96;
    if (DAT_0c94 < DAT_0c96) {
      uVar8 = scale_u16_by_u8(sVar12,CONCAT11((~(byte)((ushort)sVar11 >> 8) + 1) -
                                              ((char)-(char)sVar11 != '\0'),-(char)sVar11));
      sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),
                        -(char)uVar8);
    }
    else {
      sVar11 = scale_u16_by_u8(sVar12,sVar11);
    }
    DAT_0c96 = sVar11 + DAT_0c96;
  }
  lookup_u8_uniform_u16_axis();
  puVar4 = DAT_0c8e + -0x1eb7;
  if (DAT_0c8e < &UNK_1eb7) {
    iVar3 = (uint)CONCAT11((~(byte)((ushort)puVar4 >> 8) + 1) - ((char)-(char)puVar4 != '\0'),
                           -(char)puVar4) * (uint)extraout_A_08 * 2;
    uVar17 = (ushort)iVar3;
    sVar11 = uVar17 + 0x80;
    bVar15 = (byte)((uint)iVar3 >> 0x18);
    cVar7 = bVar15 + (0xff7f < uVar17);
    if (CONCAT11(bVar15 + CARRY1(bVar15,0xff7f < uVar17),cVar7) < 0x100) {
      RAM0x0ddf = CONCAT21(sVar11,(char)DAT_0de0);
      _DAT_0dde = CONCAT13(cVar7,RAM0x0ddf);
      DAT_0c90 = &UNK_1eb7 + -(short)DAT_0dde;
      if (DAT_0dde < &UNK_1eb8) goto LAB_965e;
    }
    DAT_0c90 = (undefined *)0x0;
  }
  else {
    iVar3 = ZEXT24(puVar4) * (uint)extraout_A_08 * 2;
    uVar17 = (ushort)iVar3;
    sVar11 = uVar17 + 0x80;
    bVar15 = (byte)((uint)iVar3 >> 0x18);
    cVar7 = bVar15 + (0xff7f < uVar17);
    if (CONCAT11(bVar15 + CARRY1(bVar15,0xff7f < uVar17),cVar7) < 0x100) {
      RAM0x0ddf = CONCAT21(sVar11,(char)DAT_0de0);
      _DAT_0dde = CONCAT13(cVar7,RAM0x0ddf);
      DAT_0c90 = &UNK_1eb7 + (short)DAT_0dde;
      if (DAT_0dde < 0xe149) goto LAB_965e;
    }
    DAT_0c90 = (undefined *)0xffff;
  }
LAB_965e:
  DAT_0c92 = extraout_A_08;
  FUN_cc30();
  if (DAT_4a31 < DAT_08f4) {
    if (DAT_4a32 <= DAT_08f4) {
      DAT_0885 = DAT_0885 & 0xfb;
    }
  }
  else {
    DAT_0885 = DAT_0885 | 4;
  }
  if (DAT_0a2e._0_1_ < DAT_0d7c) {
    if ((DAT_0a2e._0_1_ < DAT_4240) || (DAT_0a82 != '@')) {
      DAT_088d = DAT_088d & 0xdf;
    }
    else {
      DAT_088d = DAT_088d | 0x20;
    }
    if (DAT_0a2e._0_1_ < DAT_4a30) {
      DAT_0880 = DAT_0880 & 0xfb;
      goto LAB_96f1;
    }
    if (DAT_4a2e < DAT_08ed) {
      DAT_0a8a = 0;
      goto LAB_96f1;
    }
    DAT_0a8a = (DAT_0a8a + 1) - (0xfe < DAT_0a8a);
    if (((((DAT_0a8a <= DAT_4a2f) || (DAT_0a89 < DAT_08ec)) || ((~DAT_08af & 8) != 0)) ||
        (((~DAT_08af & 4) != 0 || ((DAT_0d87 == '\t' && ((~DAT_0896._0_1_ & 0x10) != 0)))))) ||
       ((DAT_0885 & 4) == 0)) goto LAB_96f1;
    DAT_0885 = DAT_0885 | 0x20;
  }
  else {
    DAT_0880 = DAT_0880 | 4;
    DAT_088d = DAT_088d & 0xdf;
LAB_96f1:
    DAT_0885 = DAT_0885 & 0xdf;
  }
  DAT_0b20 = (DAT_0b20 + 1) - (0xfe < DAT_0b20);
  DAT_0b1e = (DAT_0b1e + 1) - (0xfe < DAT_0b1e);
  DAT_0b1f = (DAT_0b1f + 1) - (0xfe < DAT_0b1f);
  DAT_0b1d = (DAT_0b1d + 1) - (0xfe < DAT_0b1d);
  DAT_0afd = (DAT_0afd + 1) - (0xfe < DAT_0afd);
  if ((~DAT_0881 & 0x10) == 0) {
    DAT_0afe = (DAT_0afe + 1) - (0xfe < DAT_0afe);
  }
  else {
    DAT_0afe = '\0';
  }
  if (((~DAT_0880 & 1) == 0) && ((~DAT_0885 & 0x40) == 0)) {
    DAT_0b5d = '\0';
  }
  else {
    DAT_0b5d = (DAT_0b5d + 1) - (0xfe < DAT_0b5d);
  }
  if ((~DAT_09a1 & 1) == 0) {
    DAT_09ab = (DAT_09ab + 1) - (0xfe < DAT_09ab);
    DAT_09aa = '\0';
  }
  else {
    DAT_09aa = (DAT_09aa + 1) - (0xfe < DAT_09aa);
    DAT_09ab = '\0';
  }
  DAT_091b = (DAT_091b + 1) - (0xfe < DAT_091b);
  DAT_091c = (DAT_091c + 1) - (0xfe < DAT_091c);
  DAT_091d = (DAT_091d + 1) - (0xfe < DAT_091d);
  DAT_091e = (DAT_091e + 1) - (0xfe < DAT_091e);
  DAT_091f = (DAT_091f + 1) - (0xfe < DAT_091f);
  DAT_0920 = (DAT_0920 + 1) - (0xfe < DAT_0920);
  DAT_0b09 = (DAT_0b09 + 1) - (0xfe < DAT_0b09);
  if ((DAT_0893 & 0x80) == 0) {
LAB_9802:
    DAT_0be7 = 0;
  }
  else {
    DAT_0be7 = (DAT_0be7 + 1) - (0xfe < DAT_0be7);
    if (DAT_4f15 < DAT_0be7) {
      DAT_0893 = DAT_0893 & 0x7f;
      goto LAB_9802;
    }
  }
  DAT_0a9f = DAT_4b9e;
  if (DAT_0900._0_1_ < DAT_4b9c) {
    DAT_0a9f = DAT_4b9d;
  }
  if ((DAT_08ce._0_1_ < DAT_0a9e) || ((byte)(DAT_08ce._0_1_ - DAT_0a9e) < DAT_4b99)) {
    DAT_0a9d = 0;
LAB_984d:
    if ((DAT_0aa0 == '\0') || (DAT_0aa0 = DAT_0aa0 + -1, DAT_0aa0 == '\0')) {
      DAT_0aa0 = DAT_4b9a;
      bVar1 = DAT_0a9c < DAT_4b9b;
      DAT_0a9c = DAT_0a9c - DAT_4b9b;
      if (bVar1) {
        DAT_0a9c = 0;
      }
    }
  }
  else {
    sVar12 = (ushort)(byte)((DAT_08ce._0_1_ - DAT_0a9e) - DAT_4b99) * (ushort)DAT_0a9f;
    if ((char)((ushort)sVar12 >> 8) != '\0') {
      sVar12 = 0xff;
    }
    DAT_0a9d = (byte)sVar12;
    if ((DAT_0a9d < DAT_0a9c) || (DAT_0a9d == DAT_0a9c)) goto LAB_984d;
    DAT_0a9c = DAT_0a9d;
    if (DAT_4b9f <= DAT_0a9d) {
      DAT_0a9c = DAT_4b9f;
    }
  }
  DAT_0a9e = DAT_08ce._0_1_;
  sVar12 = DAT_0900 - DAT_0aa8;
  if (DAT_0900 < DAT_0aa8) {
    uVar8 = scale_u16_by_u8_rounded
                      (sVar11,CONCAT11((~(byte)((ushort)sVar12 >> 8) + 1) -
                                       ((char)-(char)sVar12 != '\0'),-(char)sVar12));
    sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8)
    ;
  }
  else {
    sVar11 = scale_u16_by_u8_rounded(sVar11,sVar12);
  }
  sVar12 = DAT_0ab4;
  sVar11 = sVar11 + DAT_0aa8;
  if ((DAT_0af7 & 1) == 0) {
    DAT_0aaa = (DAT_0aaa + 1) - (0xfe < DAT_0aaa);
    DAT_0aab = (DAT_0aab + 1) - (0xfe < DAT_0aab);
  }
  if ((DAT_4af7 < DAT_0abe) && (DAT_0abe < DAT_4af8)) {
    bVar15 = DAT_0aa6 | 0x80;
  }
  else {
    bVar15 = DAT_0aa6 & 0x7f;
    if ((DAT_0aa6 & 0x40) != 0) {
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar15 = DAT_0aa6 & 0xf;
    }
  }
  DAT_0aa6 = bVar15;
  DAT_0aa8 = sVar11;
  if ((((~DAT_0aa6 & 8) == 0) && ((~DAT_0aa6 & 4) == 0)) && ((~DAT_0aa6 & 2) == 0)) {
    DAT_0aa8._0_1_ = (byte)((ushort)sVar11 >> 8);
    if (DAT_0d87 == '\t') {
      if (DAT_0898 == DAT_4af9) {
        if (DAT_4afd <= DAT_0aaa) {
          DAT_0aa6 = DAT_0aa6 | 0x20;
          DAT_0aa7 = DAT_0aa7 | 8;
          FUN_997a();
          return;
        }
      }
      else {
        DAT_0aaa = 0;
        if ((DAT_0aa6 & 0x20) != 0) {
          DAT_0aa7 = DAT_0aa7 & 0xf7;
          DAT_0aa6 = DAT_0aa6 & 0x9f | 2;
          goto LAB_9a25;
        }
      }
    }
    else if ((DAT_0aa8._0_1_ < DAT_4afb) || (DAT_4afc <= DAT_0aa8._0_1_)) {
      DAT_0aaa = 0;
      if ((DAT_0aa6 & 0x20) != 0) {
        DAT_0aa7 = DAT_0aa7 & 0xf7;
        DAT_0aa6 = DAT_0aa6 & 0x9f | 2;
        goto LAB_9a25;
      }
    }
    else if (DAT_4afd <= DAT_0aaa) {
      DAT_0aa6 = DAT_0aa6 | 0x20;
      DAT_0aa7 = DAT_0aa7 | 8;
      FUN_997a();
      return;
    }
    if (DAT_0d87 == '\t') {
      if (DAT_0898 == DAT_4afa) {
        if (DAT_4afd <= DAT_0aab) {
          DAT_0aa6 = DAT_0aa6 | 0x10;
          DAT_0aa7 = DAT_0aa7 | 4;
        }
LAB_99b5:
        DAT_0aa6 = DAT_0aa6 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      if ((DAT_0aa6 & 0x10) == 0) goto LAB_99b5;
      DAT_0aa7 = DAT_0aa7 & 0xfb;
      DAT_0aa6 = DAT_0aa6 & 0xaf | 2;
    }
    else {
      if ((DAT_4afe <= DAT_0aa8._0_1_) && (DAT_0aa8._0_1_ < DAT_4aff)) {
        if (DAT_4afd <= DAT_0aab) {
          DAT_0aa6 = DAT_0aa6 | 0x10;
          DAT_0aa7 = DAT_0aa7 | 4;
        }
LAB_99f2:
        DAT_0aa6 = DAT_0aa6 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      if ((DAT_0aa6 & 0x10) == 0) goto LAB_99f2;
      DAT_0aa7 = DAT_0aa7 & 0xfb;
      DAT_0aa6 = DAT_0aa6 & 0xaf | 2;
    }
  }
LAB_9a25:
  if ((DAT_0aa6 & 8) != 0) {
    if (DAT_0aaa < DAT_4b01) {
      if (DAT_4b02 <= DAT_08e8._0_1_) {
        DAT_0aaa = 0;
        DAT_0aa6 = DAT_0aa6 & 0xf7 | 4;
      }
    }
    else {
      DAT_0aaa = 0;
      DAT_0aab = 0;
      DAT_0aa6 = DAT_0aa6 & 0x87 | 2;
    }
  }
  if ((DAT_0aa6 & 4) != 0) {
    DAT_0aac = DAT_4b05;
    if ((DAT_0aa7 & 8) != 0) {
      DAT_0aac = DAT_4b04;
    }
    if ((DAT_08e8._0_1_ < DAT_4b02) || (DAT_4b06 <= DAT_0aaa)) {
      DAT_0aa7 = DAT_0aa7 | 2;
      DAT_0aa6 = DAT_0aa6 & 0xfb | 3;
    }
  }
  if ((~DAT_0aa6 & 2) != 0) {
    if (((DAT_0aa6 & 1) != 0) &&
       (DAT_0aae = (DAT_0aae + 1) - (0xfe < DAT_0aae), DAT_4b07 <= DAT_0aae)) {
      DAT_0aae = 0;
      DAT_0aad = (DAT_0aad + 1) - (0xfe < DAT_0aad);
      bVar15 = DAT_0aac;
      if ((DAT_0aa7 & 2) != 0) {
        bVar6 = DAT_4b05;
        if ((DAT_0aa7 & 8) != 0) {
          bVar6 = DAT_4b04;
        }
        bVar15 = bVar6 + DAT_0aad;
        if (CARRY1(bVar6,DAT_0aad)) {
          bVar15 = 0xff;
        }
        if (DAT_0a83 <= bVar15) {
          DAT_0aa7 = DAT_0aa7 & 0xfd;
          bVar15 = DAT_0aac;
        }
      }
      DAT_0aac = bVar15;
      if ((~DAT_0aa7 & 2) == 0) {
        DAT_0aa6 = DAT_0aa6 & 0xfe;
        DAT_0aad = 0;
        DAT_0aa7 = DAT_0aa7 & 0xf3;
      }
    }
    if ((~DAT_0aa6 & 1) == 0) {
      DAT_0aa6 = DAT_0aa6 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  DAT_0ab6 = DAT_0ab4;
  DAT_0ab4 = DAT_0ab0;
  sVar12 = DAT_0ab0 - sVar12;
  if ((~DAT_0ab2 & 4) == 0) {
    sVar12 = 0;
  }
  if ((char)((ushort)sVar12 >> 8) != '\0') {
    sVar12 = 0xff;
  }
  DAT_0ab3 = (byte)sVar12;
  iVar3 = (uint)DAT_4bd4 * (uint)DAT_0ab3;
  DAT_0de0 = CONCAT11((char)((uint)iVar3 >> 8) - ((byte)iVar3 < DAT_0aba),(byte)iVar3 - DAT_0aba);
  if ((char)((uint)iVar3 >> 0x10) != '\0') {
    DAT_0de0 = 0xffff;
  }
  _DAT_0dde = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_0de0);
  sVar11 = (short)((uint)DAT_4bd6 * (uint)DAT_0de0 >> 0x10);
  uVar8 = (undefined2)((uint)DAT_4bd6 * (uint)DAT_0de0);
  if (sVar11 != 0) {
    uVar8 = 0xffff;
  }
  bVar15 = (byte)((ushort)uVar8 >> 8);
  bVar6 = (byte)uVar8;
  if ((DAT_0ab2 & 1) == 0) {
    cVar7 = bVar6 + (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar15 + CARRY1(bVar6,(byte)DAT_0ab8);
    if (CARRY1(bVar15,CARRY1(bVar6,(byte)DAT_0ab8))) {
      cVar7 = -1;
      DAT_0ab8._0_1_ = 0xff;
    }
  }
  else {
    cVar7 = bVar6 - (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar15 - (bVar6 < (byte)DAT_0ab8);
  }
  bVar15 = DAT_0aba + DAT_0ab8._0_1_;
  if (CARRY1(DAT_0aba,DAT_0ab8._0_1_)) {
    bVar15 = 0xff;
  }
  if (bVar15 < DAT_0abe) {
    sVar12 = (ushort)(byte)-(bVar15 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar6 = (byte)((ushort)sVar12 >> 8);
    bVar14 = (byte)sVar12;
    if ((DAT_0ab2 & 2) == 0) {
      _DAT_0abc = CONCAT11(bVar6 - (bVar14 < DAT_0abd),bVar14 - DAT_0abd);
    }
    else {
      bVar1 = CARRY1(bVar14,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar6 + bVar1,bVar14 + DAT_0abd);
      if (CARRY1(bVar6,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    DAT_0ab2 = DAT_0ab2 & 0xfe | 6;
  }
  else {
    sVar12 = (ushort)(byte)(bVar15 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar6 = (byte)((ushort)sVar12 >> 8);
    bVar14 = (byte)sVar12;
    if ((DAT_0ab2 & 2) == 0) {
      bVar1 = CARRY1(bVar14,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar6 + bVar1,bVar14 + DAT_0abd);
      if (CARRY1(bVar6,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    else {
      _DAT_0abc = CONCAT11(bVar6 - (bVar14 < DAT_0abd),bVar14 - DAT_0abd);
    }
    DAT_0ab2 = DAT_0ab2 & 0xfc | 4;
  }
  if ((DAT_0ab2 & 2) == 0) {
    bVar6 = DAT_0abe + DAT_0abc;
    if (CARRY1(DAT_0abe,DAT_0abc)) {
      bVar6 = 0xff;
    }
  }
  else {
    bVar6 = DAT_0abe - DAT_0abc;
    if (DAT_0abe < DAT_0abc) {
      bVar6 = 0;
    }
  }
  if ((DAT_4ba7 != -0x80) ||
     ((((DAT_0d87 == '\t' && ((~DAT_0896._0_1_ & 0x10) != 0)) || (DAT_4ba8 <= DAT_0900._0_1_)) ||
      (DAT_4ba9 <= DAT_08ce._0_1_)))) {
    DAT_0aaf = 0;
    DAT_088d = DAT_088d & 0xbf;
  }
  if ((DAT_0af7 == 0) && (DAT_0aaf = (DAT_0aaf + 1) - (0xfe < DAT_0aaf), DAT_4baa <= DAT_0aaf)) {
    DAT_088d = DAT_088d | 0x40;
  }
  DAT_0aba = bVar15;
  DAT_0abe = bVar6;
  DAT_0ab8._1_1_ = cVar7;
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d49)) {
    if (DAT_0d87 == '\t') {
      if ((((DAT_08f4 < DAT_4c03) || ((ushort)DAT_4c04 << 8 < DAT_0992)) || (DAT_4c06 < DAT_0982))
         || ((~DAT_0881 & 0x20) != 0)) {
LAB_9d2a:
        DAT_0acf = 0;
LAB_9d2b:
        if (((((~DAT_09a1 & 0x80) == 0) && ((~DAT_08a0 & 0x20) == 0)) &&
            (((~DAT_08b0 & 0x10) == 0 &&
             ((((~DAT_08b0 & 4) == 0 && ((~DAT_08b0 & 2) == 0)) && ((~DAT_08b1 & 0x80) == 0)))))) &&
           ((~DAT_08b1 & 0x40) == 0)) goto LAB_9d51;
      }
      else {
        if ((~DAT_0896._0_1_ & 0x10) != 0) {
          if ((&DAT_4e11)[DAT_0898] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        if ((DAT_0acd == '\0') || (FUN_a3b4(), DAT_0ace == '\0')) goto LAB_9d2a;
        if (DAT_0acf < DAT_4c02) {
          DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
          goto LAB_9d2b;
        }
        DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
      }
      bVar15 = DAT_00f0;
      DAT_00f0 = bVar15 | 2;
      DAT_0889 = DAT_0889 | 0x80;
    }
    else {
LAB_9d51:
      bVar15 = DAT_00f0;
      DAT_00f0 = bVar15 & 0xfd;
      DAT_0889 = DAT_0889 & 0x7f;
    }
  }
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d4c)) {
    if ((DAT_4e1b == 0xff) || ((ushort)DAT_4e1b << 8 < DAT_0a2e)) {
      DAT_0b91 = 0;
    }
    else {
      if (DAT_4e95 <= DAT_0b91) {
        DAT_0b90 = DAT_0b90 | 0x80;
      }
      DAT_0b91 = (DAT_0b91 + 1) - (0xfe < DAT_0b91);
    }
    if (((ushort)DAT_4e1a << 8 < DAT_0a2e) && (DAT_4e1a != 0xff)) {
      if ((DAT_0b90 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        if ((DAT_0d87 != '\t') && ((DAT_088c & 0x80) != 0)) {
          DAT_0b90 = DAT_0b90 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        if ((~DAT_0880 & 1) == 0) goto LAB_9dc5;
      }
      bVar15 = DAT_00f0;
      DAT_00f0 = bVar15 & 0xef;
    }
    else {
LAB_9dc5:
      bVar15 = DAT_00f0;
      DAT_00f0 = bVar15 | 0x10;
    }
  }
  if (((DAT_0880 & 1) == 0) ||
     (((((~DAT_08af & 0x40) == 0 && ((~DAT_08af & 2) == 0)) &&
       ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))) &&
      ((((~DAT_08b1 & 0x10) == 0 && ((~DAT_08b2 & 0x80) == 0)) && ((~DAT_08b4 & 8) == 0)))))) {
    DAT_0884 = DAT_0884 & 0xdf;
  }
  else {
    DAT_0884 = DAT_0884 | 0x20;
  }
  if ((DAT_0884 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    DAT_0b6f = (DAT_0b6f + 1) - (0xfe < DAT_0b6f);
    if (DAT_4e38 <= DAT_0b6f) {
      if ((~DAT_0888 & 8) == 0) {
        DAT_0888 = DAT_0888 | 8;
      }
      else {
        DAT_0888 = DAT_0888 & 0xf7;
      }
      goto LAB_9e24;
    }
  }
  if (((~DAT_0889 & 2) != 0) &&
     (DAT_0bd1 = (DAT_0bd1 + 1) - (0xfe < DAT_0bd1), DAT_4e66 <= DAT_0bd1)) {
    DAT_0bd1 = 0;
    DAT_0b94 = (DAT_0b94 + 1) - (0xfe < DAT_0b94);
  }
  if ((DAT_0b9a != 0xff) && (DAT_4e3a <= DAT_0b98)) {
    DAT_0b98 = 0;
    DAT_0b9a = (DAT_0b9a + 1) - (0xfe < DAT_0b9a);
    if (4 < DAT_0b9a) {
      DAT_08b8 = DAT_08af;
      DAT_08b9 = DAT_08b0;
      DAT_08ba = DAT_08b1;
      DAT_08bb = DAT_08b2;
      DAT_0bd2 = DAT_0bd2 | 0xf;
      DAT_0b9a = 0xff;
    }
    DAT_0be8 = DAT_0be8 | 0x40;
  }
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    DAT_0d0a = (DAT_0d0a + 1) - (0xfe < DAT_0d0a);
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) &&
     (DAT_0d0b = (DAT_0d0b + 1) - (0xfe < DAT_0d0b), DAT_0d0b <= DAT_4f16)) {
    bVar15 = DAT_0d09 + DAT_0ab3;
    if (CARRY1(DAT_0d09,DAT_0ab3)) {
      bVar15 = 0xff;
    }
    DAT_0d09 = bVar15;
    if ((DAT_4f16 <= DAT_0d0b) && (bVar15 <= DAT_4e84)) {
      DAT_0d08 = DAT_0d08 | 9;
    }
  }
  uVar17 = (ushort)DAT_08d9 * 0x100;
  if ((~DAT_0881 & 0x10) == 0) {
    sVar12 = uVar17 - DAT_08da;
    if (uVar17 < DAT_08da) {
      uVar8 = scale_u16_by_u8(sVar11,CONCAT11((~(byte)((ushort)sVar12 >> 8) + 1) -
                                              ((char)-(char)sVar12 != '\0'),-(char)sVar12));
      sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),
                        -(char)uVar8);
    }
    else {
      sVar11 = scale_u16_by_u8(sVar11,sVar12);
    }
    uVar17 = sVar11 + DAT_08da;
  }
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       ((DAT_4e28 < DAT_08ec ||
        ((((DAT_4e29 < DAT_0abe || (DAT_0900 < DAT_4e1e)) || ((~DAT_08af & 8) != 0)) ||
         ((~DAT_08af & 4) != 0)))))) {
      DAT_0adb = DAT_0adb & 0x7f;
      DAT_0adc = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x80;
      if (DAT_4e2a <= DAT_0adc) {
        DAT_0ada = DAT_0ada | 0x80;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    if ((DAT_4e28 < DAT_08ec) || (DAT_4e2b < DAT_0abe)) {
      DAT_0ada = DAT_0ada & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      if ((DAT_0ada & 0x40) != 0) {
        DAT_0ada = DAT_0ada | 0x20;
      }
      if ((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) ||
         ((DAT_0900 < DAT_4e20 || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))))) {
        if ((DAT_0ada & 0x10) != 0) {
          DAT_0ada = DAT_0ada & 0xef;
          DAT_0ae1 = 0;
        }
        if ((DAT_0ada & 0x40) != 0) {
          if ((~DAT_0ada & 8) == 0) {
            if (((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) || (DAT_4e22 < DAT_0900))
               || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))) goto LAB_a04f;
            DAT_0ada = DAT_0ada | 8;
          }
          if ((((~DAT_0ada & 0x80) != 0) || ((DAT_08b1 & 0x20) != 0)) &&
             ((DAT_0900 < DAT_4e20 && (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))))) {
            DAT_0ada = DAT_0ada & 0xef | 100;
            goto LAB_a04f;
          }
        }
        if ((DAT_0ada & 4) != 0) {
          DAT_0ada = DAT_0ada & 0xfb;
          DAT_0ae1 = 0;
        }
      }
      else {
        DAT_0ada = DAT_0ada & 0xf3 | 0x70;
      }
    }
  }
LAB_a04f:
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       (((DAT_4e28 < DAT_08ec ||
         (((DAT_4e29 < DAT_0abe || (DAT_4e24 <= DAT_0900)) || ((~DAT_08af & 8) != 0)))) ||
        ((((~DAT_08af & 4) != 0 || (DAT_0ad6 != 0)) || (DAT_0ad9 != '\0')))))) {
      DAT_0adb = DAT_0adb & 0xbf;
      DAT_0add = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x40;
      if (DAT_4e31 <= DAT_0add) {
        DAT_0ada = DAT_0ada & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = '\0';
        DAT_0ae1 = 0;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    bVar15 = DAT_0bd2;
    if (DAT_0d5f != -0x80) {
      if ((DAT_0ada & 0x40) == 0) {
        DAT_0adb = DAT_0adb & 0xdf;
        DAT_0ade = 0;
      }
      else {
        DAT_0adb = DAT_0adb | 0x20;
        if ((DAT_4e57 <= DAT_0ade) && ((~DAT_08b1 & 0x20) == 0)) {
          DAT_08b1 = DAT_08b1 | 0x20;
          bVar15 = DAT_0bd2 | 0x20;
          if ((~DAT_08ba & 0x20) == 0) {
            DAT_08ba = DAT_08ba | 0x20;
            bVar15 = DAT_0bd2 | 0x22;
          }
        }
      }
    }
    DAT_0bd2 = bVar15;
    if ((DAT_0881 & 0x10) == 0) {
      bVar15 = DAT_0adb | 0x10;
      if (((DAT_4e57 <= DAT_0adf) &&
          ((((~DAT_088d & 0x20) != 0 || ((~DAT_0885 & 0x20) != 0)) ||
           (((~DAT_0889 & 2) == 0 && (((~DAT_0880 & 4) == 0 && ((~DAT_0aa6 & 4) == 0)))))))) &&
         ((((~DAT_0ada & 0x80) != 0 || ((DAT_08b1 & 0x20) != 0)) &&
          ((((((DAT_08ec <= DAT_4e28 && (DAT_0abe <= DAT_4e29)) && (DAT_0900 < DAT_4e24)) &&
             (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))) && (DAT_0ad6 == 0)) &&
           (DAT_0ad9 == '\0')))))) {
        DAT_0adb = DAT_0adb | 0x18;
        if (((DAT_4e31 <= DAT_0ae0) && (DAT_0ada = DAT_0ada & 0x7f, DAT_0d5f != -0x80)) &&
           ((DAT_08b1 & 0x20) != 0)) {
          DAT_08b1 = DAT_08b1 & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
        goto LAB_a1ae;
      }
    }
    else {
      DAT_0adf = 0;
      bVar15 = DAT_0adb & 0xef;
    }
    DAT_0adb = bVar15;
    DAT_0adb = DAT_0adb & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  DAT_08da = uVar17;
  FUN_5fc8();
  if ((~DAT_0891 & 2) == 0) {
    if ((DAT_0891 & 0x80) == 0) {
LAB_a24a:
      if (DAT_0bd2 == 0) {
LAB_a26f:
        if (DAT_0be8 != 0) {
          if ((DAT_0be8 & 0x80) == 0) {
            if ((DAT_0be8 & 0x40) == 0) {
              if ((DAT_0be8 & 4) != 0) goto LAB_a2b4;
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
      else if ((DAT_0bd2 & 0x80) == 0) {
        if ((DAT_0bd2 & 0x40) == 0) {
          if ((DAT_0bd2 & 0x20) == 0) {
            if ((DAT_0bd2 & 0x10) == 0) {
              if ((DAT_0bd2 & 8) == 0) {
                if ((DAT_0bd2 & 4) == 0) {
                  if ((DAT_0bd2 & 2) == 0) {
                    if ((DAT_0bd2 & 1) != 0) goto LAB_a2aa;
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
    else if ((~DAT_088f & 0x80) == 0) {
      if ((~DAT_088f & 0x40) == 0) goto LAB_a24a;
      FUN_b4c6();
    }
    else {
      FUN_b3ec();
    }
  }
  else if ((DAT_0891 & 0x80) == 0) {
LAB_a1d9:
    if (DAT_0bd3 == 0) {
LAB_a20e:
      if (DAT_0be9 != 0) {
        if ((DAT_0be9 & 0x80) != 0) goto LAB_a296;
        if ((DAT_0be9 & 0x40) != 0) goto LAB_a2af;
        if ((DAT_0be9 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
        FUN_b7b9();
      }
    }
    else {
      if ((DAT_0bd3 & 0x80) != 0) goto LAB_a282;
      if ((DAT_0bd3 & 0x40) != 0) goto LAB_a287;
      if ((DAT_0bd3 & 0x20) != 0) goto LAB_a28c;
      if ((DAT_0bd3 & 0x10) != 0) goto LAB_a291;
      if ((DAT_0bd3 & 8) != 0) goto LAB_a29b;
      if ((DAT_0bd3 & 4) != 0) goto LAB_a2a0;
      if ((DAT_0bd3 & 2) != 0) goto LAB_a2a5;
      if ((DAT_0bd3 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
      FUN_b721();
    }
  }
  else if ((~DAT_0890 & 0x80) == 0) {
    if ((~DAT_0890 & 0x40) == 0) goto LAB_a1d9;
    FUN_b4c6();
  }
  else {
    FUN_b3ec();
  }
LAB_a2b9:
  bVar15 = DAT_0000;
  bVar15 = bVar15 & 0xe0;
  if (bVar15 == 0x80) {
    if (((DAT_08b1 & 0x80) != 0x80) || (bVar15 = DAT_0000, (bVar15 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar15 != 0) {
    if (((bVar15 == 0x40) && ((DAT_08b1 & 0x80) == 0x80)) &&
       (bVar15 = DAT_0000, (bVar15 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  if (((DAT_08b1 & 0x80) == 0x80) && (bVar15 = DAT_0000, (bVar15 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  DAT_08bc = DAT_08bc & 0xf7;
  return;
}


