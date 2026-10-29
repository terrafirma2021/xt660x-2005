/* Entry f1ce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_f1ce(void)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  
  DAT_0df9 = (byte)(DAT_0c1c >> 8);
  DAT_0dfa._0_1_ = (byte)DAT_0c1c;
  DAT_0dfa._1_1_ = (byte)((uint3)_DAT_0c1f >> 8);
  bVar3 = (byte)DAT_0dfa;
  DAT_0dfc = (byte)_DAT_0c1f;
  bVar4 = DAT_0dfc;
  DAT_0dfd = (byte)(DAT_0c08 >> 8);
  DAT_0dfe = (undefined1)DAT_0c08;
  bVar6 = DAT_0dfd | (byte)DAT_0dfa | DAT_0df9;
  if ((bVar6 & 0xf8) == 0) {
    DAT_0df9 = DAT_0df9 >> 3;
    DAT_0dfa._0_1_ = (byte)(DAT_0c1c >> 3);
    DAT_0dfa._1_1_ = (byte)DAT_0dfa >> 3;
    DAT_0dfc = (byte)(DAT_0c20 >> 3);
    DAT_0dfd = DAT_0dfd >> 3;
    DAT_0dfe = (undefined1)(DAT_0c08 >> 3);
    DAT_0df7._1_1_ = DAT_0dfa._0_1_;
    FUN_f26e(CONCAT11(DAT_0dfc,DAT_0dfe));
    return;
  }
  if (bVar6 < 0x10) {
    DAT_0c34 = '\x04';
  }
  else if (bVar6 < 0x20) {
    DAT_0c34 = '\x03';
  }
  else if (bVar6 < 0x40) {
    DAT_0c34 = '\x02';
  }
  else if (bVar6 < 0x80) {
    DAT_0c34 = '\x01';
  }
  else {
    DAT_0c34 = '\0';
  }
  for (; uVar2 = CONCAT11(DAT_0dfa._0_1_,(byte)DAT_0dfa), DAT_0c34 != '\0'; DAT_0c34 = DAT_0c34 + -1
      ) {
    sVar9 = CONCAT11(DAT_0df9,DAT_0dfa._0_1_) << 1;
    DAT_0df9 = (byte)((ushort)sVar9 >> 8);
    DAT_0dfa._0_1_ = (byte)sVar9;
    sVar9 = CONCAT11((byte)DAT_0dfa,DAT_0dfc) << 1;
    DAT_0dfa._1_1_ = (byte)((ushort)sVar9 >> 8);
    DAT_0dfc = (byte)sVar9;
    sVar9 = CONCAT11(DAT_0dfd,DAT_0dfe) << 1;
    DAT_0dfd = (byte)((ushort)sVar9 >> 8);
    DAT_0dfe = (undefined1)sVar9;
  }
  DAT_0df7._1_1_ = DAT_0df9;
  uVar10 = (ushort)(byte)DAT_0dfa * (ushort)DAT_0dfd;
  uVar11 = (ushort)DAT_0df9 * (ushort)DAT_0df9;
  if (uVar10 <= uVar11) {
    uVar2 = uVar11 / uVar10;
    DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
    DAT_0dfa._1_1_ = (byte)uVar2;
    uVar1 = ((uint)(uVar11 % uVar10) << 0x10) / (uint)uVar10;
    DAT_0dfc = (byte)(uVar1 >> 8);
    DAT_0dfd = (byte)uVar1;
    if (DAT_0dfa._0_1_ != '\0') {
LAB_f392:
      DAT_0bfe = DAT_0bfe | 0x40;
      goto LAB_f39c;
    }
    DAT_0c3c = CONCAT11((byte)DAT_0dfa,DAT_0dfc);
    if (DAT_0c36 <= DAT_0c3c) {
      if ((DAT_0bfe & 0x80) != 0) goto LAB_f392;
      DAT_0df7._0_1_ = (byte)_DAT_0c17;
      DAT_0df6 = (byte)((uint3)_DAT_0c17 >> 8);
      bVar6 = DAT_0df6;
      DAT_0df7._1_1_ = bVar3;
      DAT_0df9 = bVar4;
      if ((DAT_0c17 | DAT_0c1f) != 0) {
        if (((DAT_0c17 | DAT_0c1f) & 0xf0) == 0) {
          DAT_0df6 = DAT_0c17;
          DAT_0df9 = DAT_0c1f;
          bVar7 = DAT_0df6;
          bVar5 = DAT_0df7._0_1_;
          bVar8 = DAT_0df9;
          DAT_0dfa._0_1_ = bVar3;
          DAT_0dfa._1_1_ = bVar4;
          do {
            DAT_0df9 = bVar8;
            DAT_0df7._1_1_ = bVar5;
            DAT_0df7._0_1_ = bVar6;
            DAT_0df6 = bVar7;
            bVar7 = DAT_0df6 >> 1;
            DAT_0df6 = DAT_0df7._0_1_ >> 1 | DAT_0df6 << 7;
            DAT_0df7._0_1_ = (byte)DAT_0df7 >> 1 | DAT_0df7._0_1_ << 7;
            bVar8 = DAT_0df9 >> 1;
            DAT_0df7._1_1_ = DAT_0dfa._0_1_ >> 1 | DAT_0df9 << 7;
            DAT_0dfa._1_1_ = (byte)DAT_0dfa >> 1 | DAT_0dfa._0_1_ << 7;
            bVar6 = DAT_0df6;
            bVar5 = DAT_0df7._0_1_;
            DAT_0df9 = (byte)DAT_0dfa;
            DAT_0dfa._0_1_ = (byte)DAT_0df7;
          } while (bVar7 != 0 || bVar8 != 0);
        }
        else {
          DAT_0df7._1_1_ = DAT_0df7._0_1_;
          DAT_0dfa._1_1_ = bVar4;
          bVar4 = DAT_0c17;
          DAT_0df7._0_1_ = DAT_0df6;
          bVar6 = (byte)DAT_0df7;
          DAT_0df7._1_1_ = DAT_0c1f;
          DAT_0dfa._0_1_ = bVar3;
          do {
            DAT_0df9 = (byte)DAT_0df7;
            DAT_0df7._1_1_ = bVar6;
            DAT_0df6 = bVar4;
            bVar6 = (byte)DAT_0df7 << 1;
            bVar3 = DAT_0df7._0_1_ >> 7;
            DAT_0df7._0_1_ = DAT_0df7._0_1_ << 1 | (byte)DAT_0df7 >> 7;
            DAT_0df6 = DAT_0df6 << 1 | bVar3;
            bVar3 = (byte)DAT_0dfa >> 7;
            DAT_0dfa._1_1_ = (byte)DAT_0dfa << 1;
            bVar4 = DAT_0dfa._0_1_ >> 7;
            DAT_0dfa._0_1_ = DAT_0dfa._0_1_ << 1 | bVar3;
            DAT_0df7._1_1_ = DAT_0df9 << 1 | bVar4;
            bVar4 = DAT_0df6;
            DAT_0df9 = DAT_0dfa._0_1_;
          } while (((byte)DAT_0df7 | DAT_0df6) < 0x80);
        }
      }
      uVar10 = CONCAT11(DAT_0df6,DAT_0df7._0_1_);
      uVar2 = uVar10 / CONCAT11((byte)DAT_0df7,DAT_0df9);
      DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
      DAT_0dfa._1_1_ = (byte)uVar2;
      uVar1 = ((uint)(uVar10 % CONCAT11((byte)DAT_0df7,DAT_0df9)) << 0x10) /
              (uint)CONCAT11((byte)DAT_0df7,DAT_0df9);
      DAT_0dfc = (byte)(uVar1 >> 8);
      DAT_0dfd = (byte)uVar1;
      if (DAT_0dfa._0_1_ == '\0') {
        DAT_0c3e = CONCAT11((byte)DAT_0dfa,DAT_0dfc);
        DAT_0c38 = (ushort)DAT_0da0 << 2;
        if ((DAT_0c38 < DAT_0c3e) &&
           (DAT_0c3a = (ushort)DAT_0da1 * 4, DAT_0c3e <= DAT_0c3a && DAT_0c3a - DAT_0c3e != 0))
        goto LAB_f392;
      }
    }
  }
  DAT_0bfe = DAT_0bfe & 0xbf;
LAB_f39c:
  DAT_0df6 = (byte)(uVar10 >> 8);
  DAT_0df7._0_1_ = (byte)uVar10;
  DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
  DAT_0dfa._1_1_ = (byte)uVar2;
  return;
}


