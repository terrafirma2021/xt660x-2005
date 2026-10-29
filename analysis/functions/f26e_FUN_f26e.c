/* Entry f26e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_f26e(ushort param_1)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  
  uVar7 = (param_1 >> 8) * (param_1 & 0xff);
  uVar8 = (ushort)(byte)DAT_0df7 * (ushort)(byte)DAT_0df7;
  uVar2 = DAT_0dfa;
  if (uVar7 <= uVar8) {
    uVar2 = uVar8 / uVar7;
    DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
    DAT_0dfa._1_1_ = (byte)uVar2;
    uVar1 = ((uint)(uVar8 % uVar7) << 0x10) / (uint)uVar7;
    DAT_0dfc = (undefined1)(uVar1 >> 8);
    DAT_0dfd = (undefined1)uVar1;
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
      bVar3 = DAT_0df6;
      DAT_0df9 = (byte)_DAT_0c1f;
      DAT_0dfa._1_1_ = DAT_0df9;
      DAT_0df7._1_1_ = (byte)((uint3)_DAT_0c1f >> 8);
      DAT_0dfa._0_1_ = (byte)DAT_0df7;
      if ((DAT_0c17 | DAT_0c1f) != 0) {
        if (((DAT_0c17 | DAT_0c1f) & 0xf0) == 0) {
          DAT_0df6 = DAT_0c17;
          DAT_0df9 = DAT_0c1f;
          bVar5 = DAT_0df6;
          bVar4 = DAT_0df7._0_1_;
          bVar6 = DAT_0df9;
          do {
            DAT_0df9 = bVar6;
            DAT_0df7._1_1_ = bVar4;
            DAT_0df7._0_1_ = bVar3;
            DAT_0df6 = bVar5;
            bVar5 = DAT_0df6 >> 1;
            DAT_0df6 = DAT_0df7._0_1_ >> 1 | DAT_0df6 << 7;
            DAT_0df7._0_1_ = (byte)DAT_0df7 >> 1 | DAT_0df7._0_1_ << 7;
            bVar6 = DAT_0df9 >> 1;
            DAT_0df7._1_1_ = DAT_0dfa._0_1_ >> 1 | DAT_0df9 << 7;
            DAT_0dfa._1_1_ = (byte)DAT_0dfa >> 1 | DAT_0dfa._0_1_ << 7;
            bVar3 = DAT_0df6;
            bVar4 = DAT_0df7._0_1_;
            DAT_0df9 = (byte)DAT_0dfa;
            DAT_0dfa._0_1_ = (byte)DAT_0df7;
          } while (bVar5 != 0 || bVar6 != 0);
        }
        else {
          DAT_0df7._1_1_ = DAT_0df7._0_1_;
          bVar3 = DAT_0c17;
          DAT_0df7._0_1_ = DAT_0df6;
          bVar5 = (byte)DAT_0df7;
          bVar4 = DAT_0c1f;
          do {
            DAT_0df9 = bVar4;
            DAT_0df7._1_1_ = bVar5;
            DAT_0df6 = bVar3;
            bVar5 = (byte)DAT_0df7 << 1;
            bVar3 = DAT_0df7._0_1_ >> 7;
            DAT_0df7._0_1_ = DAT_0df7._0_1_ << 1 | (byte)DAT_0df7 >> 7;
            DAT_0df6 = DAT_0df6 << 1 | bVar3;
            bVar3 = (byte)DAT_0dfa >> 7;
            DAT_0dfa._1_1_ = (byte)DAT_0dfa << 1;
            bVar4 = DAT_0dfa._0_1_ >> 7;
            DAT_0dfa._0_1_ = DAT_0dfa._0_1_ << 1 | bVar3;
            DAT_0df7._1_1_ = DAT_0df9 << 1 | bVar4;
            bVar3 = DAT_0df6;
            DAT_0df9 = DAT_0dfa._0_1_;
            bVar4 = (byte)DAT_0df7;
          } while (((byte)DAT_0df7 | DAT_0df6) < 0x80);
        }
      }
      uVar7 = CONCAT11(DAT_0df6,DAT_0df7._0_1_);
      uVar2 = uVar7 / CONCAT11((byte)DAT_0df7,DAT_0df9);
      DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
      DAT_0dfa._1_1_ = (byte)uVar2;
      uVar1 = ((uint)(uVar7 % CONCAT11((byte)DAT_0df7,DAT_0df9)) << 0x10) /
              (uint)CONCAT11((byte)DAT_0df7,DAT_0df9);
      DAT_0dfc = (undefined1)(uVar1 >> 8);
      DAT_0dfd = (undefined1)uVar1;
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
  DAT_0df6 = (byte)(uVar7 >> 8);
  DAT_0df7._0_1_ = (byte)uVar7;
  DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
  DAT_0dfa._1_1_ = (byte)uVar2;
  return;
}


