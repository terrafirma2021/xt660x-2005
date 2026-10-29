/* Entry dc39 */

/* WARNING: Removing unreachable block (RAM,0xe1fa) */
/* WARNING: Removing unreachable block (RAM,0xe140) */
/* WARNING: Removing unreachable block (RAM,0xe150) */
/* WARNING: Removing unreachable block (RAM,0xe153) */
/* WARNING: Removing unreachable block (RAM,0xe164) */
/* WARNING: Removing unreachable block (RAM,0xe158) */
/* WARNING: Removing unreachable block (RAM,0xe15f) */
/* WARNING: Removing unreachable block (RAM,0xe16b) */
/* WARNING: Removing unreachable block (RAM,0xe199) */
/* WARNING: Removing unreachable block (RAM,0xe171) */
/* WARNING: Removing unreachable block (RAM,0xe179) */
/* WARNING: Removing unreachable block (RAM,0xe217) */
/* WARNING: Removing unreachable block (RAM,0xe1bc) */
/* WARNING: Removing unreachable block (RAM,0xe1c1) */
/* WARNING: Removing unreachable block (RAM,0xe611) */
/* WARNING: Removing unreachable block (RAM,0xe87d) */
/* WARNING: Removing unreachable block (RAM,0xe729) */
/* WARNING: Removing unreachable block (RAM,0xe535) */
/* WARNING: Removing unreachable block (RAM,0xea0d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_unreferenced_dc39(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint3 uVar7;
  uint uVar8;
  undefined3 uVar9;
  char cVar10;
  byte bVar11;
  byte extraout_A;
  byte bVar12;
  short sVar13;
  undefined2 uVar14;
  byte bVar17;
  undefined *puVar15;
  ushort uVar16;
  
  DAT_0b60 = 0;
  if (0xbf < DAT_0922) {
    DAT_0880 = DAT_0880 | 0x80;
    DAT_088c = DAT_088c | 0x30;
  }
  DAT_0922 = 0;
  DAT_0923 = 0;
  DAT_08c4 = DAT_0085;
  DAT_088d = DAT_088d | 1;
  DAT_0085 = 1;
  sVar13 = DAT_0044;
  DAT_08c8 = sVar13 + 0x4b;
  if ((~DAT_0bfe & 0x80) != 0) {
    if (0x33 < DAT_0921) {
      DAT_0a2e = 0xffff;
    }
    if ((~DAT_0880 & 1) == 0) {
      if (((DAT_0880 & 2) != 0) && ((byte)(&DAT_0d68)[DAT_0c04] <= DAT_0a2e._0_1_)) {
        DAT_0884 = DAT_0884 | 4;
        DAT_0aff = 0;
        FUN_721f();
        if ((DAT_088d & 1) != 0) {
          DAT_088d = DAT_088d & 0xfe;
          FUN_f39d();
        }
        goto LAB_dc06;
      }
      if (DAT_0d74 <= DAT_0b5d) {
        DAT_0885 = DAT_0885 & 0xbf;
      }
    }
    else if ((DAT_0a2e._0_1_ < DAT_0d73) || (DAT_0d74 <= DAT_0b5d)) {
      DAT_0885 = DAT_0885 & 0xbf;
      DAT_0884 = DAT_0884 & 0xfb;
    }
    else {
      DAT_0885 = DAT_0885 | 0x40;
    }
    if (((((~DAT_0bf8 & 0x80) == 0) && ((DAT_0bf8 & 0x40) != 0)) &&
        ((byte)(&DAT_0d68)[DAT_0c04] <= DAT_0a2e._0_1_)) && ((~DAT_0bf8 & 0x20) == 0)) {
      DAT_0bf8 = DAT_0bf8 | 0x80;
      DAT_0bf9 = 0;
      FUN_721f();
      if ((DAT_088d & 1) != 0) {
        DAT_088d = DAT_088d & 0xfe;
        FUN_f39d();
      }
LAB_dc06:
      DAT_0b00 = 0;
      DAT_004e = 2;
      DAT_08be = DAT_08be & 0x1f;
      return;
    }
    DAT_0882 = DAT_0882 | 0x80;
  }
  DAT_0b00 = 0;
  if ((~DAT_0bfe & 0x80) != 0) {
    bVar12 = DAT_0bd2;
    if (((((DAT_0d5e != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) &&
        ((((~DAT_0880 & 1) != 0 || ((DAT_0d75 <= DAT_0b6e && (DAT_0d77 <= DAT_0bce)))) &&
         (DAT_0d5e != -0x80)))) &&
       ((((((~DAT_0880 & 0x80) == 0 && ((~DAT_0d08 & 1) == 0)) && ((~DAT_0884 & 2) == 0)) &&
         (((~DAT_0884 & 4) == 0 && ((~DAT_088c & 0x80) == 0)))) &&
        (((~DAT_0885 & 0x40) == 0 && (((~DAT_0bf8 & 0x80) == 0 && ((~DAT_089b & 0x80) == 0)))))))) {
      if (((~DAT_088c & 2) != 0) || (((~DAT_089a & 2) != 0 || (DAT_0c04 != 8)))) goto LAB_de0b;
      if ((DAT_0a92 & 8) != 0) {
        bVar11 = DAT_004e;
        if ((bVar11 & 0x20) == 0) {
          DAT_0b50 = 0;
          DAT_0b46 = (DAT_0b46 + 1) - (0xfe < DAT_0b46);
          if ((DAT_0d78 <= DAT_0b46) && ((~DAT_08b1 & 0x80) == 0)) {
            DAT_08b1 = DAT_08b1 | 0x80;
            bVar12 = DAT_0bd2 | 0x20;
            if ((~DAT_08ba & 0x80) == 0) {
              DAT_08ba = DAT_08ba | 0x80;
              bVar12 = DAT_0bd2 | 0x22;
            }
          }
        }
        else {
          DAT_0b46 = 0;
          DAT_0b50 = (DAT_0b50 + 1) - (0xfe < DAT_0b50);
          if ((DAT_0d76 <= DAT_0b50) && ((DAT_08b1 & 0x80) != 0)) {
            DAT_08b1 = DAT_08b1 & 0x7f;
            bVar12 = DAT_0bd2 | 0x20;
          }
        }
      }
    }
    DAT_0bd2 = bVar12;
    DAT_004e = 0x20;
  }
LAB_de0b:
  if (((~DAT_0bfe & 0x80) != 0) && (DAT_0c04 == 10)) {
    DAT_0a92 = DAT_0a92 & 0x77;
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if (DAT_0a2e._0_1_ < DAT_0d79) {
      if (DAT_0a2e._0_1_ < DAT_0d7a) {
        DAT_0881 = DAT_0881 & 0xef;
      }
    }
    else {
      DAT_0881 = DAT_0881 | 0x10;
      DAT_0a1a = DAT_0d7b;
    }
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if (((DAT_0a2e._0_1_ < DAT_0d7d) || ((~DAT_0880 & 1) == 0)) && (DAT_0a2e._0_1_ < DAT_0d7c)) {
      if (DAT_0c04 == 0) {
        DAT_0880 = DAT_0880 & 0xbf;
      }
      if (DAT_0d7c <= DAT_0a2e._0_1_) goto LAB_de81;
      if (DAT_0c04 == 0) {
        DAT_0880 = DAT_0880 & 0xfb;
      }
    }
    else {
      DAT_0880 = DAT_0880 | 0x40;
LAB_de81:
      DAT_0880 = DAT_0880 | 4;
      DAT_0a86 = 0x80;
    }
    DAT_0881 = DAT_0881 & 0xdf;
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    FUN_ed29();
    FUN_ed6d();
  }
  if (((~DAT_0bfe & 0x80) != 0) && (DAT_0c04 == 0)) {
    DAT_0887 = DAT_0887 | 2;
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if (((DAT_0923 == 0) || (DAT_0923 == 6)) || ((DAT_0923 == 0xc || (DAT_0923 == 0x12)))) {
      DAT_0881 = DAT_0881 | 4;
      DAT_0887 = DAT_0887 | 1;
    }
    if (((DAT_0ca8 & 1) != 0) && (DAT_0923 == (byte)(DAT_0da6 + 4U))) {
      DAT_0881 = DAT_0881 | 2;
    }
    if ((DAT_088b & 0x80) == 0) {
      bVar12 = DAT_0d7e & 0x1f;
      if (0xb < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        DAT_0a17 = DAT_0a17 & 0xf7;
        DAT_0a19 = DAT_0a19 & 0xf7;
        DAT_088b = DAT_088b | 0x40;
        DAT_0a22._0_1_ = DAT_0a26._0_1_;
        DAT_0a22._1_1_ = (undefined1)DAT_0a26;
        DAT_0a1c = DAT_0a1e;
      }
      bVar12 = DAT_0cab & 0x1f;
      if (0xb < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        DAT_0a17 = DAT_0a17 & 0xfd;
        DAT_0a19 = DAT_0a19 & 0xfd;
        DAT_0a24._0_1_ = DAT_0a28._0_1_;
        DAT_0a24._1_1_ = (undefined1)DAT_0a28;
        DAT_0a1d = DAT_0a1f;
      }
    }
    else {
      if (DAT_0923 == (DAT_0d7e & 0x1f)) {
        DAT_0a17 = DAT_0a17 & 0xf7;
        DAT_0a19 = DAT_0a19 & 0xf7;
        DAT_088b = DAT_088b | 0x40;
        DAT_0a22._0_1_ = DAT_0a26._0_1_;
        DAT_0a22._1_1_ = (undefined1)DAT_0a26;
        DAT_0a1c = DAT_0a1e;
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0cab) & 0xff1f;
      if ((char)(uVar16 >> 8) == (char)uVar16) {
        DAT_0a17 = DAT_0a17 & 0xfd;
        DAT_0a19 = DAT_0a19 & 0xfd;
        DAT_0a24._0_1_ = DAT_0a28._0_1_;
        DAT_0a24._1_1_ = (undefined1)DAT_0a28;
        DAT_0a1d = DAT_0a1f;
      }
    }
    FUN_f49f();
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if ((~DAT_0ca8 & 1) == 0) {
      bVar12 = DAT_0d7e & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a20 = '\0';
        }
        else {
          DAT_0a20 = DAT_0c04 + (DAT_0a20 == '\0');
        }
      }
      bVar12 = DAT_0cab & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a21 = '\0';
        }
        else {
          DAT_0a21 = DAT_0c04 + (DAT_0a21 == '\0');
        }
      }
      bVar12 = DAT_0a1c & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if ((DAT_0c04 == bVar12) && ((DAT_0a19 & 8) != 0)) {
        FUN_ec98();
      }
      bVar12 = DAT_0a1d & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if ((DAT_0c04 == bVar12) && ((DAT_0a19 & 2) != 0)) {
        FUN_ed11();
      }
      bVar12 = DAT_0d7e & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        DAT_0881 = DAT_0881 & 0x7f;
      }
      bVar12 = DAT_0cab & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        DAT_0881 = DAT_0881 & 0xbf;
      }
    }
    else {
      if (DAT_0923 == (DAT_0d7e & 0x1f)) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a20 = '\0';
        }
        else {
          DAT_0a20 = DAT_0923 + (DAT_0a20 == '\0');
        }
      }
      if (DAT_0923 == (DAT_0cab & 0x1f)) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a21 = '\0';
        }
        else {
          DAT_0a21 = DAT_0923 + (DAT_0a21 == '\0');
        }
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0a1c) & 0xff1f;
      if (((char)(uVar16 >> 8) == (char)uVar16) && ((DAT_0a19 & 8) != 0)) {
        FUN_ec98();
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0a1d) & 0xff1f;
      if (((char)(uVar16 >> 8) == (char)uVar16) && ((DAT_0a19 & 2) != 0)) {
        FUN_ed11();
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0d7e) & 0xff1f;
      cVar10 = (char)(uVar16 >> 8);
      if (cVar10 == (char)uVar16) {
        DAT_0881 = DAT_0881 & 0x7f;
      }
      uVar16 = CONCAT11(cVar10,DAT_0cab) & 0xff1f;
      if ((char)(uVar16 >> 8) == (char)uVar16) {
        DAT_0881 = DAT_0881 & 0xbf;
      }
    }
  }
  sVar13 = DAT_0ac2;
  if (((~DAT_0bfe & 0x80) != 0) && (((DAT_0922 & 0x1f) == 0 || ((DAT_0922 & 0x1f) == 0xc)))) {
    DAT_0ac4 = DAT_0ac2;
    DAT_0ac2 = DAT_0ab0;
    uVar16 = DAT_0ab0 - sVar13;
    if ((~DAT_0abf & 4) == 0) {
      uVar16 = 0;
    }
    if ((char)(uVar16 >> 8) != '\0') {
      uVar16 = 0xff;
    }
    DAT_0ac0 = (undefined1)uVar16;
    sVar13 = (uVar16 & 0xff) * (ushort)DAT_0d7f;
    bVar12 = (byte)sVar13;
    iVar6 = (uint)DAT_0d80 *
            (uint)CONCAT11((char)((ushort)sVar13 >> 8) - (bVar12 < DAT_0ac8),bVar12 - DAT_0ac8);
    uVar14 = (undefined2)iVar6;
    if ((short)((uint)iVar6 >> 0x10) != 0) {
      uVar14 = 0xffff;
    }
    bVar12 = (byte)((ushort)uVar14 >> 8);
    bVar11 = (byte)uVar14;
    if ((DAT_0abf & 1) == 0) {
      uVar14 = CONCAT11(bVar12 + CARRY1(bVar11,(byte)DAT_0ac6),bVar11 + (byte)DAT_0ac6);
      if (CARRY1(bVar12,CARRY1(bVar11,(byte)DAT_0ac6))) {
        uVar14 = 0xffff;
      }
    }
    else {
      uVar14 = CONCAT11(bVar12 - (bVar11 < (byte)DAT_0ac6),bVar11 - (byte)DAT_0ac6);
    }
    DAT_0ac6._0_1_ = (byte)((ushort)uVar14 >> 8);
    bVar12 = DAT_0ac8 + DAT_0ac6._0_1_;
    if (CARRY1(DAT_0ac8,DAT_0ac6._0_1_)) {
      bVar12 = 0xff;
    }
    if (bVar12 < DAT_0acc) {
      sVar13 = (ushort)(byte)-(bVar12 - DAT_0acc) * (ushort)DAT_0d80;
      bVar11 = (byte)((ushort)sVar13 >> 8);
      bVar17 = (byte)sVar13;
      if ((DAT_0abf & 2) == 0) {
        DAT_0aca = CONCAT11(bVar11 - (bVar17 < (byte)DAT_0aca),bVar17 - (byte)DAT_0aca);
      }
      else {
        bVar1 = CARRY1(bVar17,(byte)DAT_0aca);
        DAT_0aca = CONCAT11(bVar11 + bVar1,bVar17 + (byte)DAT_0aca);
        if (CARRY1(bVar11,bVar1)) {
          DAT_0aca = 0xffff;
        }
      }
      DAT_0abf = DAT_0abf & 0xfe | 6;
    }
    else {
      sVar13 = (ushort)(byte)(bVar12 - DAT_0acc) * (ushort)DAT_0d80;
      bVar11 = (byte)((ushort)sVar13 >> 8);
      bVar17 = (byte)sVar13;
      if ((DAT_0abf & 2) == 0) {
        bVar1 = CARRY1(bVar17,(byte)DAT_0aca);
        DAT_0aca = CONCAT11(bVar11 + bVar1,bVar17 + (byte)DAT_0aca);
        if (CARRY1(bVar11,bVar1)) {
          DAT_0aca = 0xffff;
        }
      }
      else {
        DAT_0aca = CONCAT11(bVar11 - (bVar17 < (byte)DAT_0aca),bVar17 - (byte)DAT_0aca);
      }
      DAT_0abf = DAT_0abf & 0xfc | 4;
    }
    if ((DAT_0abf & 2) == 0) {
      bVar11 = DAT_0acc + DAT_0aca._0_1_;
      if (CARRY1(DAT_0acc,DAT_0aca._0_1_)) {
        bVar11 = 0xff;
      }
    }
    else {
      bVar11 = DAT_0acc - DAT_0aca._0_1_;
      if (DAT_0acc < DAT_0aca._0_1_) {
        bVar11 = 0;
      }
    }
    if (DAT_0d87 == '\t') {
      if (bVar11 < DAT_0d81) {
        puVar15 = (undefined *)0x100;
      }
      else if (bVar11 < DAT_0d82) {
        puVar15 = &UNK_0201;
      }
      else if (bVar11 < DAT_0d83) {
        puVar15 = &UNK_0402;
      }
      else if (bVar11 < DAT_0d84) {
        puVar15 = (undefined *)0x803;
      }
      else {
        if (DAT_0d85 <= bVar11) goto LAB_e28e;
        puVar15 = (undefined *)0x1004;
      }
    }
    else {
LAB_e28e:
      puVar15 = &UNK_2005;
    }
    DAT_0bcb = (undefined1)((ushort)puVar15 >> 8);
    DAT_0bca = (char)puVar15;
    if ((((DAT_0d61 != -0x80) && (DAT_0d87 == '\t')) && ((~DAT_08a0 & 4) == 0)) &&
       ((~DAT_08b2 & 0x80) == 0)) {
      if (((DAT_0896._0_1_ & 0x10) == 0) || ((~DAT_0881 & 0x10) != 0)) {
        DAT_0bcc = 0;
        DAT_0bcd = 0;
      }
      else if (DAT_0bca == '\0') {
        if ((DAT_08b6 & 2) != 0) {
          if (DAT_0bcc <= DAT_0d88) goto LAB_e34d;
          bVar17 = DAT_0bd2;
          if ((~DAT_08b1 & 8) == 0) {
            DAT_08b1 = DAT_08b1 | 8;
            bVar17 = DAT_0bd2 | 0x20;
            if ((~DAT_08ba & 8) == 0) {
              DAT_08ba = DAT_08ba | 8;
              bVar17 = DAT_0bd2 | 0x22;
            }
          }
          DAT_0bd2 = bVar17;
          DAT_0889 = DAT_0889 & 0xfd;
          DAT_0b92 = 0;
        }
        DAT_08b6 = DAT_08b6 | 2;
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
LAB_e34d:
    DAT_0898 = DAT_0bca;
    DAT_0899 = DAT_0bcb;
    DAT_0ac6 = uVar14;
    DAT_0ac8 = bVar12;
    DAT_0acc = bVar11;
    if ((DAT_08b1 & 8) != 0) {
      DAT_0898 = '\x05';
      DAT_0899 = 0x20;
    }
  }
  do {
    bVar12 = DAT_008b;
    if ((~bVar12 & 2) != 0) {
      DAT_08cc = (undefined *)DAT_0092;
      DAT_088d = DAT_088d & 0xfd;
      goto LAB_e37e;
    }
    sVar13 = DAT_0044;
  } while (sVar13 - DAT_08c8 < 0);
  DAT_088d = DAT_088d | 2;
LAB_e37e:
  DAT_088d = DAT_088d & 0xfe;
  FUN_f39d();
  uVar16 = DAT_0c9a;
  if ((~DAT_088d & 2) == 0) {
    DAT_0c40 = DAT_08cc;
    DAT_08c2 = 0x40;
    DAT_08c3 = 0;
  }
  bVar12 = DAT_0bd2;
  if (((DAT_0d53 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    bVar11 = (byte)((ushort)DAT_0c40 >> 8);
    if ((bVar11 < 0x1a) || (0xf5 < bVar11)) {
      if ((DAT_08b5 & 0x40) == 0) {
        DAT_08b5 = DAT_08b5 | 0x40;
        DAT_0bab = DAT_0bab | 0x20;
      }
      else if ((DAT_0d89 < DAT_0b3e) && ((~DAT_08af & 0x20) == 0)) {
        DAT_08af = DAT_08af | 0x20;
        bVar12 = DAT_0bd2 | 0x80;
        if ((~DAT_08b8 & 0x20) == 0) {
          DAT_08b8 = DAT_08b8 | 0x20;
          bVar12 = DAT_0bd2 | 0x88;
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
        bVar12 = DAT_0bd2;
      }
    }
    else {
      DAT_08b5 = DAT_08b5 & 0xbf;
    }
  }
  DAT_0bd2 = bVar12;
  if (DAT_0d8b == -0x80) {
    if (DAT_0c04 == 1) {
      DAT_0c9a = DAT_0c44;
      goto LAB_e461;
    }
  }
  else if (DAT_0c04 == 0) {
    DAT_0c9a = DAT_0c42;
LAB_e461:
    DAT_0c9c = uVar16;
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
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = uVar16 + (short)((uint)DAT_0d8e * (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8);
        iVar6 = (uint)DAT_0d8f * (uint)uVar16;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar5;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar5),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 2,
                             (char)(CONCAT11((char)(RAM0x0c9f % 2),(undefined1)DAT_0ca0) / 2));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else if (DAT_0d8d == '\x03') {
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar16 = uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                         uVar16 + (short)((uint)DAT_0d8e * (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8
                                         );
        iVar6 = (uint)DAT_0d90 * (uint)uVar5;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 3,
                             (char)(CONCAT11((char)(RAM0x0c9f % 3),(undefined1)DAT_0ca0) / 3));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else if (DAT_0d8d == '\x04') {
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar2 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar16 = uVar2 + (short)((uint)DAT_0d90 * (uint)uVar5 >> 8) +
                         uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                                 uVar16 + (short)((uint)DAT_0d8e *
                                                  (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8);
        iVar6 = (uint)DAT_0d91 * (uint)uVar2;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 4,
                             (char)(CONCAT11((char)(RAM0x0c9f % 4),(undefined1)DAT_0ca0) / 4));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else if (DAT_0d8d == '\x05') {
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar2 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d98 * 2 + 0xc58;
        uVar16 = uVar3 + (short)((uint)DAT_0d91 * (uint)uVar2 >> 8) +
                         uVar2 + (short)((uint)DAT_0d90 * (uint)uVar5 >> 8) +
                                 uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                                         uVar16 + (short)((uint)DAT_0d8e *
                                                          (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8)
        ;
        iVar6 = (uint)DAT_0d92 * (uint)uVar3;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 5,
                             (char)(CONCAT11((char)(RAM0x0c9f % 5),(undefined1)DAT_0ca0) / 5));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else {
        if (DAT_0d8d != '\x06') goto LAB_e491;
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar2 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d98 * 2 + 0xc58;
        uVar4 = (ushort)DAT_0d99 * 2 + 0xc58;
        uVar16 = uVar4 + (short)((uint)DAT_0d92 * (uint)uVar3 >> 8) +
                         uVar3 + (short)((uint)DAT_0d91 * (uint)uVar2 >> 8) +
                                 uVar2 + (short)((uint)DAT_0d90 * (uint)uVar5 >> 8) +
                                         uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                                                 uVar16 + (short)((uint)DAT_0d8e *
                                                                  (uint)((ushort)DAT_0d94 * 2 +
                                                                        0xc58) >> 8);
        iVar6 = (uint)DAT_0d93 * (uint)uVar4;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 6,
                             (char)(CONCAT11((char)(RAM0x0c9f % 6),(undefined1)DAT_0ca0) / 6));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
    }
    else {
      DAT_0c8a = DAT_0da8;
    }
    FUN_f3b7();
    puVar15 = DAT_0c8a + -0x1eb7;
    if (DAT_0c8a < &UNK_1eb7) {
      iVar6 = (uint)CONCAT11((~(byte)((ushort)puVar15 >> 8) + 1) - ((char)-(char)puVar15 != '\0'),
                             -(char)puVar15) * (uint)extraout_A * 2;
      uVar16 = (ushort)iVar6;
      bVar12 = (byte)((uint)iVar6 >> 0x18);
      cVar10 = bVar12 + (0xff7f < uVar16);
      if (CONCAT11(bVar12 + CARRY1(bVar12,0xff7f < uVar16),cVar10) < 0x100) {
        _DAT_0e04 = CONCAT12(cVar10,uVar16 + 0x80);
        DAT_0c8c = &UNK_1eb7 + -(short)DAT_0e04;
        if (DAT_0e04 < &UNK_1eb8) goto LAB_ea7c;
      }
      DAT_0c8c = (undefined *)0x0;
    }
    else {
      iVar6 = ZEXT24(puVar15) * (uint)extraout_A * 2;
      uVar16 = (ushort)iVar6;
      bVar12 = (byte)((uint)iVar6 >> 0x18);
      cVar10 = bVar12 + (0xff7f < uVar16);
      if (CONCAT11(bVar12 + CARRY1(bVar12,0xff7f < uVar16),cVar10) < 0x100) {
        _DAT_0e04 = CONCAT12(cVar10,uVar16 + 0x80);
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
        DAT_0922 = DAT_0c03 + 0xc;
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
  uVar16 = (ushort)DAT_0a53 * 2 + 0xa54;
  DAT_0a52 = (DAT_0a52 + 1) - (0xfe < DAT_0a52);
  if (DAT_0a52 < 0x18) {
    uVar9 = _DAT_0a4f;
    if (1 < DAT_0a52) {
      _DAT_0df7 = CONCAT21(RAM0x0a50,DAT_0df9);
      _DAT_0df6 = CONCAT13(DAT_0a4f._0_1_,_DAT_0df7);
      goto LAB_eb49;
    }
  }
  else {
    _DAT_0df7 = CONCAT21(RAM0x0a50 - uVar16,DAT_0df9);
    _DAT_0df6 = CONCAT13(DAT_0a4f._0_1_ - (RAM0x0a50 < uVar16),_DAT_0df7);
LAB_eb49:
    uVar16 = DAT_0c08;
    if (DAT_0c07 != '\0') {
      uVar16 = 0xffff;
    }
    sVar13 = DAT_0df7 + uVar16;
    bVar1 = CARRY2(DAT_0df7,uVar16);
    _DAT_0df7 = CONCAT21(sVar13,DAT_0df9);
    cVar10 = DAT_0df6 + bVar1;
    _DAT_0a4f = CONCAT12(cVar10,sVar13);
    uVar9 = _DAT_0a4f;
    _DAT_0df6 = CONCAT13(cVar10,_DAT_0df7);
    if (DAT_0a52 < 0x17) {
      bVar12 = DAT_0a52 - 1;
      RAM0x0df8 = (ushort)bVar12;
      DAT_0a51 = (undefined1)sVar13;
      RAM0x0df8 = CONCAT11((char)(CONCAT11((char)(DAT_0a4f % (ushort)bVar12),DAT_0a51) / RAM0x0df8),
                           bVar12);
      _DAT_0df6 = CONCAT22(DAT_0a4f / bVar12,RAM0x0df8);
      iVar6 = (_DAT_0df6 >> 8 & 0xffff) * 0x16;
      _DAT_0df7 = CONCAT21((short)iVar6,bVar12);
      _DAT_0df6 = CONCAT13((char)((uint)iVar6 >> 0x10),_DAT_0df7);
    }
    DAT_0a4b._0_1_ = DAT_0df6;
    RAM0x0a4c = DAT_0df7;
    DAT_0a53 = DAT_0a53 + 1;
    if (0x15 < DAT_0a53) {
      DAT_0a53 = 0;
    }
  }
  _DAT_0a4f = uVar9;
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
    if (DAT_0c04 != 0) goto LAB_ec8f;
    if ((((~DAT_0ada & 0x10) != 0) || ((DAT_0ada & 4) != 0)) &&
       (DAT_0ae1 = (DAT_0ae1 + 1) - (0xfe < DAT_0ae1), DAT_0ddb <= DAT_0ae1)) {
      DAT_0ae1 = 0;
      if ((DAT_0ada & 0x10) == 0) {
        uVar16 = DAT_0ad6 - DAT_0db8;
        if (DAT_0ad6 < DAT_0db8) {
          uVar16 = 0;
        }
        bVar1 = DAT_0ad9 < DAT_0dda;
        DAT_0ad6 = uVar16;
        DAT_0ad9 = DAT_0ad9 - DAT_0dda;
        if (bVar1) {
          DAT_0ad9 = 0;
        }
      }
      else {
        uVar16 = DAT_0ad6 + DAT_0db8;
        if ((CARRY2(DAT_0ad6,DAT_0db8)) || (0x200 < uVar16)) {
          uVar16 = 0x200;
        }
        bVar12 = DAT_0ad9 + DAT_0dda;
        DAT_0ad6 = uVar16;
        if ((CARRY1(DAT_0ad9,DAT_0dda)) || (DAT_0ad9 = bVar12, DAT_0ddc < bVar12)) {
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


