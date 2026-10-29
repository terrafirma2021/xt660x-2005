/* Entry 96fd */

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

void candidate_unreferenced_96fd(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  char cVar8;
  short sVar6;
  byte bVar9;
  byte bVar10;
  ushort uVar7;
  undefined2 uVar11;
  
  DAT_0880 = DAT_0880 & 0xfb;
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
    sVar4 = (ushort)(byte)((DAT_08ce._0_1_ - DAT_0a9e) - DAT_4b99) * (ushort)DAT_0a9f;
    if ((char)((ushort)sVar4 >> 8) != '\0') {
      sVar4 = 0xff;
    }
    DAT_0a9d = (byte)sVar4;
    if ((DAT_0a9d < DAT_0a9c) || (DAT_0a9d == DAT_0a9c)) goto LAB_984d;
    DAT_0a9c = DAT_0a9d;
    if (DAT_4b9f <= DAT_0a9d) {
      DAT_0a9c = DAT_4b9f;
    }
  }
  DAT_0a9e = DAT_08ce._0_1_;
  sVar4 = DAT_0900 - DAT_0aa8;
  if (DAT_0900 < DAT_0aa8) {
    uVar11 = scale_u16_by_u8_rounded
                       (param_1,CONCAT11((~(byte)((ushort)sVar4 >> 8) + 1) -
                                         ((char)-(char)sVar4 != '\0'),-(char)sVar4));
    sVar4 = CONCAT11((~(byte)((ushort)uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                     -(char)uVar11);
  }
  else {
    sVar4 = scale_u16_by_u8_rounded(param_1,sVar4);
  }
  sVar6 = DAT_0ab4;
  sVar4 = sVar4 + DAT_0aa8;
  if ((DAT_0af7 & 1) == 0) {
    DAT_0aaa = (DAT_0aaa + 1) - (0xfe < DAT_0aaa);
    DAT_0aab = (DAT_0aab + 1) - (0xfe < DAT_0aab);
  }
  if ((DAT_4af7 < DAT_0abe) && (DAT_0abe < DAT_4af8)) {
    bVar10 = DAT_0aa6 | 0x80;
  }
  else {
    bVar10 = DAT_0aa6 & 0x7f;
    if ((DAT_0aa6 & 0x40) != 0) {
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar10 = DAT_0aa6 & 0xf;
    }
  }
  DAT_0aa6 = bVar10;
  DAT_0aa8 = sVar4;
  if ((((~DAT_0aa6 & 8) == 0) && ((~DAT_0aa6 & 4) == 0)) && ((~DAT_0aa6 & 2) == 0)) {
    DAT_0aa8._0_1_ = (byte)((ushort)sVar4 >> 8);
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
      bVar10 = DAT_0aac;
      if ((DAT_0aa7 & 2) != 0) {
        bVar3 = DAT_4b05;
        if ((DAT_0aa7 & 8) != 0) {
          bVar3 = DAT_4b04;
        }
        bVar10 = bVar3 + DAT_0aad;
        if (CARRY1(bVar3,DAT_0aad)) {
          bVar10 = 0xff;
        }
        if (DAT_0a83 <= bVar10) {
          DAT_0aa7 = DAT_0aa7 & 0xfd;
          bVar10 = DAT_0aac;
        }
      }
      DAT_0aac = bVar10;
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
  sVar6 = DAT_0ab0 - sVar6;
  if ((~DAT_0ab2 & 4) == 0) {
    sVar6 = 0;
  }
  if ((char)((ushort)sVar6 >> 8) != '\0') {
    sVar6 = 0xff;
  }
  DAT_0ab3 = (byte)sVar6;
  iVar2 = (uint)DAT_4bd4 * (uint)DAT_0ab3;
  uVar11 = (undefined2)((uint)iVar2 >> 0x10);
  DAT_0de0 = CONCAT11((char)((uint)iVar2 >> 8) - ((byte)iVar2 < DAT_0aba),(byte)iVar2 - DAT_0aba);
  DAT_0dde._1_1_ = (char)((uint)iVar2 >> 0x10);
  if ((char)DAT_0dde != '\0') {
    DAT_0de0 = 0xffff;
  }
  sVar4 = (short)((uint)DAT_4bd6 * (uint)DAT_0de0 >> 0x10);
  uVar5 = (undefined2)((uint)DAT_4bd6 * (uint)DAT_0de0);
  if (sVar4 != 0) {
    uVar5 = 0xffff;
  }
  bVar10 = (byte)((ushort)uVar5 >> 8);
  bVar3 = (byte)uVar5;
  if ((DAT_0ab2 & 1) == 0) {
    cVar8 = bVar3 + (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar10 + CARRY1(bVar3,(byte)DAT_0ab8);
    if (CARRY1(bVar10,CARRY1(bVar3,(byte)DAT_0ab8))) {
      cVar8 = -1;
      DAT_0ab8._0_1_ = 0xff;
    }
  }
  else {
    cVar8 = bVar3 - (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar10 - (bVar3 < (byte)DAT_0ab8);
  }
  bVar10 = DAT_0aba + DAT_0ab8._0_1_;
  if (CARRY1(DAT_0aba,DAT_0ab8._0_1_)) {
    bVar10 = 0xff;
  }
  if (bVar10 < DAT_0abe) {
    sVar6 = (ushort)(byte)-(bVar10 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar6 >> 8);
    bVar9 = (byte)sVar6;
    if ((DAT_0ab2 & 2) == 0) {
      _DAT_0abc = CONCAT11(bVar3 - (bVar9 < DAT_0abd),bVar9 - DAT_0abd);
    }
    else {
      bVar1 = CARRY1(bVar9,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar9 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    DAT_0ab2 = DAT_0ab2 & 0xfe | 6;
  }
  else {
    sVar6 = (ushort)(byte)(bVar10 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar6 >> 8);
    bVar9 = (byte)sVar6;
    if ((DAT_0ab2 & 2) == 0) {
      bVar1 = CARRY1(bVar9,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar9 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    else {
      _DAT_0abc = CONCAT11(bVar3 - (bVar9 < DAT_0abd),bVar9 - DAT_0abd);
    }
    DAT_0ab2 = DAT_0ab2 & 0xfc | 4;
  }
  if ((DAT_0ab2 & 2) == 0) {
    bVar3 = DAT_0abe + DAT_0abc;
    if (CARRY1(DAT_0abe,DAT_0abc)) {
      bVar3 = 0xff;
    }
  }
  else {
    bVar3 = DAT_0abe - DAT_0abc;
    if (DAT_0abe < DAT_0abc) {
      bVar3 = 0;
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
  DAT_0aba = bVar10;
  DAT_0abe = bVar3;
  DAT_0dde = uVar11;
  DAT_0ab8._1_1_ = cVar8;
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
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 | 2;
      DAT_0889 = DAT_0889 | 0x80;
    }
    else {
LAB_9d51:
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 & 0xfd;
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
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 & 0xef;
    }
    else {
LAB_9dc5:
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 | 0x10;
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
    bVar10 = DAT_0d09 + DAT_0ab3;
    if (CARRY1(DAT_0d09,DAT_0ab3)) {
      bVar10 = 0xff;
    }
    DAT_0d09 = bVar10;
    if ((DAT_4f16 <= DAT_0d0b) && (bVar10 <= DAT_4e84)) {
      DAT_0d08 = DAT_0d08 | 9;
    }
  }
  uVar7 = (ushort)DAT_08d9 * 0x100;
  if ((~DAT_0881 & 0x10) == 0) {
    sVar6 = uVar7 - DAT_08da;
    if (uVar7 < DAT_08da) {
      uVar11 = scale_u16_by_u8(sVar4,CONCAT11((~(byte)((ushort)sVar6 >> 8) + 1) -
                                              ((char)-(char)sVar6 != '\0'),-(char)sVar6));
      sVar4 = CONCAT11((~(byte)((ushort)uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                       -(char)uVar11);
    }
    else {
      sVar4 = scale_u16_by_u8(sVar4,sVar6);
    }
    uVar7 = sVar4 + DAT_08da;
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
    bVar10 = DAT_0bd2;
    if (DAT_0d5f != -0x80) {
      if ((DAT_0ada & 0x40) == 0) {
        DAT_0adb = DAT_0adb & 0xdf;
        DAT_0ade = 0;
      }
      else {
        DAT_0adb = DAT_0adb | 0x20;
        if ((DAT_4e57 <= DAT_0ade) && ((~DAT_08b1 & 0x20) == 0)) {
          DAT_08b1 = DAT_08b1 | 0x20;
          bVar10 = DAT_0bd2 | 0x20;
          if ((~DAT_08ba & 0x20) == 0) {
            DAT_08ba = DAT_08ba | 0x20;
            bVar10 = DAT_0bd2 | 0x22;
          }
        }
      }
    }
    DAT_0bd2 = bVar10;
    if ((DAT_0881 & 0x10) == 0) {
      bVar10 = DAT_0adb | 0x10;
      if ((DAT_4e57 <= DAT_0adf) &&
         ((((((~DAT_088d & 0x20) != 0 || ((~DAT_0885 & 0x20) != 0)) ||
            (((~DAT_0889 & 2) == 0 && (((~DAT_0880 & 4) == 0 && ((~DAT_0aa6 & 4) == 0)))))) &&
           (((~DAT_0ada & 0x80) != 0 || ((DAT_08b1 & 0x20) != 0)))) &&
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
      bVar10 = DAT_0adb & 0xef;
    }
    DAT_0adb = bVar10;
    DAT_0adb = DAT_0adb & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  DAT_08da = uVar7;
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
  bVar10 = DAT_0000;
  bVar10 = bVar10 & 0xe0;
  if (bVar10 == 0x80) {
    if (((DAT_08b1 & 0x80) != 0x80) || (bVar10 = DAT_0000, (bVar10 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar10 != 0) {
    if (((bVar10 == 0x40) && ((DAT_08b1 & 0x80) == 0x80)) &&
       (bVar10 = DAT_0000, (bVar10 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  if (((DAT_08b1 & 0x80) == 0x80) && (bVar10 = DAT_0000, (bVar10 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  DAT_08bc = DAT_08bc & 0xf7;
  return;
}


