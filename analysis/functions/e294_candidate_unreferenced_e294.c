/* Entry e294 */

void candidate_unreferenced_e294(void)

{
  ushort *puVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  byte bVar5;
  undefined *puVar6;
  char cVar7;
  ushort uVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 extraout_A;
  char cVar12;
  undefined1 uVar17;
  undefined2 uVar13;
  undefined *puVar14;
  ushort uVar15;
  short sVar16;
  undefined2 *puVar18;
  undefined2 *puVar19;
  
  DAT_0bcb = 0x40;
  DAT_0bca = 6;
  cVar12 = DAT_0d61;
  if ((((cVar12 != -0x80) && (cVar12 = DAT_0d87, cVar12 == '\t')) &&
      (bVar11 = DAT_08a0, (~bVar11 & 4) == 0)) && (bVar11 = DAT_08b2, (~bVar11 & 0x80) == 0)) {
    cVar12 = DAT_0d87;
    if (((cVar12 == '\t') && (bVar11 = DAT_0896._0_1_, (bVar11 & 0x10) == 0)) ||
       (bVar11 = DAT_0881, (~bVar11 & 0x10) != 0)) {
      DAT_0bcc = 0;
      DAT_0bcd = 0;
    }
    else {
      cVar12 = DAT_0bca;
      if (cVar12 == '\0') {
        bVar11 = DAT_08b6;
        if ((bVar11 & 2) != 0) {
          bVar11 = DAT_0bcc;
          bVar5 = DAT_0d88;
          if (bVar11 <= bVar5) goto LAB_e34d;
          bVar11 = DAT_08b1;
          if ((~bVar11 & 8) == 0) {
            bVar11 = DAT_08b1;
            DAT_08b1 = bVar11 | 8;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x20;
            bVar11 = DAT_08ba;
            if ((~bVar11 & 8) == 0) {
              bVar11 = DAT_08ba;
              DAT_08ba = bVar11 | 8;
              bVar11 = DAT_0bd2;
              DAT_0bd2 = bVar11 | 2;
            }
          }
          bVar11 = DAT_0889;
          DAT_0889 = bVar11 & 0xfd;
          DAT_0b92 = 0;
        }
        bVar11 = DAT_08b6;
        DAT_08b6 = bVar11 | 2;
      }
      else {
        bVar11 = DAT_08b6;
        if ((bVar11 & 2) == 0) {
          bVar11 = DAT_0bcd;
          bVar5 = DAT_0d8a;
          if ((bVar5 < bVar11) && (bVar11 = DAT_08b1, (bVar11 & 8) != 0)) {
            bVar11 = DAT_08b1;
            DAT_08b1 = bVar11 & 0xf7;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x20;
            bVar11 = DAT_08af;
            if (((~bVar11 & 8) == 0) && (bVar11 = DAT_08af, (~bVar11 & 4) == 0)) {
              bVar11 = DAT_0889;
              DAT_0889 = bVar11 | 2;
              DAT_0b94 = 0;
              uVar17 = DAT_0a83;
              DAT_0b92 = uVar17;
              DAT_0b95 = uVar17;
            }
          }
        }
        else {
          bVar11 = DAT_08b6;
          DAT_08b6 = bVar11 & 0xfd;
        }
      }
    }
  }
LAB_e34d:
  bVar11 = DAT_08b1;
  if ((bVar11 & 8) == 0) {
    uVar10 = DAT_0bcb;
    uVar17 = DAT_0bca;
  }
  else {
    uVar10 = 0x20;
    uVar17 = 5;
  }
  DAT_0899 = uVar10;
  DAT_0898 = uVar17;
  do {
    bVar11 = DAT_008b;
    if ((~bVar11 & 2) != 0) {
      uVar13 = DAT_0092;
      DAT_08cc = uVar13;
      bVar11 = DAT_088d;
      DAT_088d = bVar11 & 0xfd;
      goto LAB_e37e;
    }
    sVar16 = DAT_0044;
    sVar3 = DAT_08c8;
  } while (sVar16 - sVar3 < 0);
  bVar11 = DAT_088d;
  DAT_088d = bVar11 | 2;
LAB_e37e:
  bVar11 = DAT_088d;
  DAT_088d = bVar11 & 0xfe;
  FUN_f39d();
  bVar11 = DAT_088d;
  if ((~bVar11 & 2) == 0) {
    puVar19 = &DAT_0c42;
    puVar18 = &DAT_0c58;
    bVar11 = DAT_0bfe;
    if ((bVar11 & 0x80) != 0) {
      bVar11 = DAT_0c04;
      puVar19 = &DAT_0c42 + bVar11;
      bVar11 = DAT_0922;
      puVar18 = &DAT_0c58 + (bVar11 & 0xff1f);
    }
    uVar13 = DAT_08cc;
    *puVar19 = uVar13;
    *puVar18 = uVar13;
    DAT_0c40 = uVar13;
    DAT_08c2 = 0x40;
    DAT_08c3 = 0;
  }
  cVar12 = DAT_0d53;
  if (((cVar12 != -0x80) && (bVar11 = DAT_08a0, (~bVar11 & 4) == 0)) &&
     (bVar11 = DAT_08b2, (~bVar11 & 0x80) == 0)) {
    uVar13 = DAT_0c40;
    bVar11 = (byte)((ushort)uVar13 >> 8);
    if ((bVar11 < 0x1a) || (0xf5 < bVar11)) {
      bVar11 = DAT_08b5;
      if ((bVar11 & 0x40) == 0) {
        bVar11 = DAT_08b5;
        DAT_08b5 = bVar11 | 0x40;
        bVar11 = DAT_0bab;
        DAT_0bab = bVar11 | 0x20;
      }
      else {
        bVar11 = DAT_0b3e;
        bVar5 = DAT_0d89;
        if ((bVar5 < bVar11) && (bVar11 = DAT_08af, (~bVar11 & 0x20) == 0)) {
          bVar11 = DAT_08af;
          DAT_08af = bVar11 | 0x20;
          bVar11 = DAT_0bd2;
          DAT_0bd2 = bVar11 | 0x80;
          bVar11 = DAT_08b8;
          if ((~bVar11 & 0x20) == 0) {
            bVar11 = DAT_08b8;
            DAT_08b8 = bVar11 | 0x20;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 8;
          }
        }
      }
    }
    else {
      bVar11 = DAT_08b5;
      if ((bVar11 & 0x40) == 0) {
        bVar11 = DAT_0b4b;
        bVar5 = DAT_0d8a;
        if (bVar5 < bVar11) {
          bVar11 = DAT_08af;
          if ((bVar11 & 0x20) != 0) {
            bVar11 = DAT_08af;
            DAT_08af = bVar11 & 0xdf;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x80;
          }
          bVar11 = DAT_0bab;
          DAT_0bab = bVar11 & 0xdf;
        }
      }
      else {
        bVar11 = DAT_08b5;
        DAT_08b5 = bVar11 & 0xbf;
      }
    }
  }
  cVar12 = DAT_0c04;
  cVar7 = DAT_0d8b;
  if (cVar7 == -0x80) {
    if (cVar12 == '\x01') {
      uVar13 = DAT_0c9a;
      DAT_0c9c = uVar13;
      uVar13 = DAT_0c44;
      DAT_0c9a = uVar13;
      goto LAB_e461;
    }
  }
  else if (cVar12 == '\0') {
    uVar13 = DAT_0c9a;
    DAT_0c9c = uVar13;
    uVar13 = DAT_0c42;
    DAT_0c9a = uVar13;
LAB_e461:
    bVar11 = DAT_08af;
    if (((~bVar11 & 0x20) == 0) && (bVar11 = DAT_08af, (bVar11 & 0x10) == 0)) {
      bVar11 = DAT_0ca8;
      if ((~bVar11 & 1) == 0) {
        uVar13 = DAT_0c88;
        DAT_0c8a = uVar13;
        DAT_0c94 = uVar13;
      }
      else {
        cVar12 = DAT_0d8d;
        if (cVar12 == '\x01') {
LAB_e491:
          bVar11 = DAT_0d94;
          DAT_0c8a = (&DAT_0c58)[bVar11];
          DAT_0c94 = (&DAT_0c58)[bVar11];
        }
        else if (cVar12 == '\x02') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar5 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar5];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar5 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 2;
          uVar17 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 2),uVar17) / 2);
          cVar12 = DAT_0dfa._0_1_;
          if (cVar12 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar12 == '\x03') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar5 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar5];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar5 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 3;
          uVar17 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 3),uVar17) / 3);
          cVar12 = DAT_0dfa._0_1_;
          if (cVar12 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar12 == '\x04') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar5 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar5];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar5 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 4;
          uVar17 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 4),uVar17) / 4);
          cVar12 = DAT_0dfa._0_1_;
          if (cVar12 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar12 == '\x05') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar5 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar5];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar5 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d98;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d92;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 5;
          uVar17 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 5),uVar17) / 5);
          cVar12 = DAT_0dfa._0_1_;
          if (cVar12 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else {
          if (cVar12 != '\x06') goto LAB_e491;
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar5 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar5];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar5 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d98;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d92;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d99;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar15,uVar4)),
                              bVar11 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d93;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          bVar11 = (byte)((ushort)uVar13 >> 8);
          DAT_0c9e = CONCAT11(bVar11 + CARRY1(bVar11,CARRY2(uVar4,uVar15)),
                              bVar11 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 6;
          uVar17 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 6),uVar17) / 6);
          cVar12 = DAT_0dfa._0_1_;
          if (cVar12 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
      }
    }
    else {
      uVar13 = DAT_0da8;
      DAT_0c8a = uVar13;
    }
    uVar13 = DAT_08f2;
    FUN_f3b7();
    DAT_0c93 = extraout_A;
    bVar11 = DAT_0c93;
    puVar6 = (undefined *)DAT_0c8a;
    puVar14 = puVar6 + -0x1eb7;
    if (puVar6 < &UNK_1eb7) {
      iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar14 >> 8) + 1) - ((char)-(char)puVar14 != '\0'),
                             -(char)puVar14) * (uint)bVar11 * 2;
      uVar15 = (ushort)iVar2;
      bVar11 = (byte)((uint)iVar2 >> 0x18);
      cVar12 = bVar11 + (0xff7f < uVar15);
      if (CONCAT11(bVar11 + CARRY1(bVar11,0xff7f < uVar15),cVar12) < 0x100) {
        DAT_0e04._0_1_ = cVar12;
        RAM0e05 = uVar15 + 0x80;
        puVar6 = (undefined *)DAT_0e04;
        puVar14 = &UNK_1eb7 + -(short)puVar6;
        if (puVar6 < &UNK_1eb8) goto LAB_ea7c;
      }
      puVar14 = (undefined *)0x0;
    }
    else {
      iVar2 = ZEXT24(puVar14) * (uint)bVar11 * 2;
      uVar15 = (ushort)iVar2;
      bVar11 = (byte)((uint)iVar2 >> 0x18);
      cVar12 = bVar11 + (0xff7f < uVar15);
      if (CONCAT11(bVar11 + CARRY1(bVar11,0xff7f < uVar15),cVar12) < 0x100) {
        DAT_0e04._0_1_ = cVar12;
        RAM0e05 = uVar15 + 0x80;
        uVar15 = DAT_0e04;
        puVar14 = &UNK_1eb7 + uVar15;
        if (uVar15 < 0xe149) goto LAB_ea7c;
      }
      puVar14 = (undefined *)0xffff;
    }
LAB_ea7c:
    DAT_0c8c = puVar14;
    bVar11 = DAT_0ca8;
    if ((~bVar11 & 1) == 0) {
      bVar11 = DAT_0ca8;
      if ((bVar11 & 2) == 0) {
LAB_eaa2:
        bVar11 = DAT_0ca8;
        if ((~bVar11 & 2) == 0) {
          uVar15 = DAT_0c9a;
          uVar4 = DAT_0c9c;
          if ((uVar4 < uVar15) && (uVar8 = DAT_0dac, uVar8 <= uVar15 - uVar4)) {
            bVar11 = DAT_0ca8;
            DAT_0ca8 = bVar11 | 2;
            cVar12 = DAT_0c03;
            DAT_0922 = cVar12 + '\f';
            goto LAB_eac0;
          }
        }
        DAT_0ca9 = 0;
      }
      else {
        uVar4 = DAT_0c9c;
        uVar15 = DAT_0c9a;
        if ((uVar4 <= uVar15) || (uVar8 = DAT_0dac, uVar4 - uVar15 < uVar8)) goto LAB_eaa2;
        bVar11 = DAT_0ca8;
        DAT_0ca8 = bVar11 & 0xfd;
        uVar17 = DAT_0c03;
        DAT_0922 = uVar17;
LAB_eac0:
        bVar11 = DAT_0ca9;
        bVar11 = (bVar11 + 1) - (0xfe < bVar11);
        DAT_0ca9 = bVar11;
        bVar5 = DAT_0d9a;
        if (bVar5 <= bVar11) {
          bVar11 = DAT_0ca8;
          DAT_0ca8 = bVar11 | 1;
        }
      }
    }
  }
  bVar11 = DAT_0bfe;
  if ((bVar11 & 0x80) != 0) {
    uVar15 = DAT_0c9a;
    uVar4 = DAT_0c9c;
    if (uVar15 < uVar4) {
      cVar12 = DAT_0c04;
      cVar7 = DAT_0d8c;
      if (cVar12 == cVar7) {
        uVar13 = DAT_0c40;
        DAT_0c88 = uVar13;
      }
    }
  }
  bVar11 = DAT_0889;
  if ((((~bVar11 & 4) == 0) && (bVar11 = DAT_0885, (~bVar11 & 0x80) == 0)) &&
     (bVar11 = DAT_0889, (bVar11 & 0x10) != 0)) {
    bVar11 = DAT_0889;
    DAT_0889 = bVar11 | 8;
    bVar11 = DAT_0889;
    DAT_0889 = bVar11 | 4;
  }
  bVar11 = DAT_0a53;
  puVar1 = (ushort *)(&DAT_0a54 + (ushort)bVar11 * 2);
  bVar11 = DAT_0a52;
  bVar11 = (bVar11 + 1) - (0xfe < bVar11);
  DAT_0a52 = bVar11;
  if (bVar11 < 0x18) {
    if (1 < bVar11) {
      uVar17 = DAT_0a4f._0_1_;
      DAT_0df6 = uVar17;
      uVar13 = RAM0a50;
      DAT_0df7 = uVar13;
      goto LAB_eb49;
    }
  }
  else {
    uVar15 = RAM0a50;
    DAT_0df7 = uVar15 - *puVar1;
    cVar12 = DAT_0a4f._0_1_;
    DAT_0df6 = cVar12 - (uVar15 < *puVar1);
LAB_eb49:
    cVar12 = DAT_0c07;
    if (cVar12 == '\0') {
      uVar15 = DAT_0c08;
    }
    else {
      uVar15 = 0xffff;
    }
    *puVar1 = uVar15;
    uVar15 = DAT_0df7;
    sVar16 = uVar15 + *puVar1;
    RAM0a50 = sVar16;
    DAT_0df7 = sVar16;
    cVar12 = DAT_0df6;
    cVar12 = cVar12 + CARRY2(uVar15,*puVar1);
    DAT_0a4f._0_1_ = cVar12;
    DAT_0df6 = cVar12;
    bVar11 = DAT_0a52;
    if (bVar11 < 0x17) {
      cVar12 = DAT_0a52;
      bVar11 = cVar12 - 1;
      DAT_0df9 = bVar11;
      uVar15 = DAT_0a4f;
      RAM0df6 = uVar15 / bVar11;
      uVar17 = DAT_0a51;
      bVar5 = DAT_0df9;
      DAT_0df7._1_1_ = (char)(CONCAT11((char)(uVar15 % (ushort)bVar11),uVar17) / (ushort)bVar5);
      uVar15 = DAT_0df7;
      DAT_0df7 = (short)((uint)uVar15 * 0x16);
      DAT_0df6 = (char)((uint)uVar15 * 0x16 >> 0x10);
    }
    uVar17 = DAT_0df6;
    DAT_0a4b._0_1_ = uVar17;
    uVar13 = DAT_0df7;
    RAM0a4c = uVar13;
    cVar12 = DAT_0a53;
    bVar11 = cVar12 + 1;
    if (0x15 < bVar11) {
      bVar11 = 0;
    }
    DAT_0a53 = bVar11;
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar11 = DAT_0d06, (~bVar11 & 0x80) == 0)) {
    bVar11 = DAT_0a2e._0_1_;
    bVar5 = DAT_0dd8;
    if (bVar11 < bVar5) {
      bVar5 = DAT_0dd7;
      if (bVar11 < bVar5) {
        bVar11 = DAT_0d0a;
        bVar5 = DAT_0dd6;
        if ((bVar11 < bVar5) && (bVar11 = DAT_0d08, (~bVar11 & 8) == 0)) {
          bVar11 = DAT_0d08;
          DAT_0d08 = bVar11 & 0xfe;
          DAT_0afc = 0;
          bVar11 = DAT_0d08;
          DAT_0d08 = bVar11 | 8;
        }
      }
    }
    else {
      bVar11 = DAT_0d08;
      DAT_0d08 = bVar11 | 1;
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    cVar12 = DAT_0c04;
    if (cVar12 != '\0') goto LAB_ec8f;
    bVar11 = DAT_0ada;
    if (((~bVar11 & 0x10) != 0) || (bVar11 = DAT_0ada, (bVar11 & 4) != 0)) {
      bVar11 = DAT_0ae1;
      bVar11 = (bVar11 + 1) - (0xfe < bVar11);
      DAT_0ae1 = bVar11;
      bVar5 = DAT_0ddb;
      if (bVar5 <= bVar11) {
        DAT_0ae1 = 0;
        bVar11 = DAT_0ada;
        if ((bVar11 & 0x10) == 0) {
          uVar15 = DAT_0ad6;
          uVar4 = DAT_0db8;
          sVar16 = uVar15 - uVar4;
          if (uVar15 < uVar4) {
            sVar16 = 0;
          }
          DAT_0ad6 = sVar16;
          bVar11 = DAT_0ad9;
          bVar5 = DAT_0dda;
          cVar12 = bVar11 - bVar5;
          if (bVar11 < bVar5) {
            cVar12 = '\0';
          }
          DAT_0ad9 = cVar12;
        }
        else {
          uVar4 = DAT_0ad6;
          uVar8 = DAT_0db8;
          uVar15 = uVar4 + uVar8;
          if ((CARRY2(uVar4,uVar8)) || (0x200 < uVar15)) {
            uVar15 = 0x200;
          }
          DAT_0ad6 = uVar15;
          bVar5 = DAT_0ad9;
          bVar9 = DAT_0dda;
          bVar11 = bVar5 + bVar9;
          if ((CARRY1(bVar5,bVar9)) || (bVar5 = DAT_0ddc, bVar5 < bVar11)) {
            bVar11 = DAT_0ddc;
          }
          DAT_0ad9 = bVar11;
        }
      }
    }
    bVar11 = DAT_0ada;
    if ((bVar11 & 0x20) != 0) {
      uVar13 = DAT_0ad6;
      DAT_0ad4 = uVar13;
      uVar17 = DAT_0ad9;
      DAT_0ad8 = uVar17;
      goto LAB_ec8f;
    }
  }
  DAT_0ad4 = 0;
  DAT_0ad8 = 0;
LAB_ec8f:
  bVar11 = DAT_08be;
  DAT_08be = bVar11 & 0xdf;
  bVar11 = DAT_08be;
  DAT_08be = bVar11 & 0x7f;
  return;
}


