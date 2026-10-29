/* Entry f26e */

void FUN_f26e(ushort param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  char cVar5;
  ushort uVar6;
  char cVar7;
  byte bVar8;
  ushort uVar9;
  
  RAM0df6 = (param_1 >> 8) * (param_1 & 0xff);
  bVar1 = DAT_0df7._1_1_;
  bVar8 = DAT_0df7._1_1_;
  uVar9 = (ushort)bVar1 * (ushort)bVar8;
  uVar4 = RAM0df6;
  if (uVar4 <= uVar9) {
    uVar4 = RAM0df6;
    DAT_0dfa = uVar9 / uVar4;
    uVar6 = RAM0df6;
    RAM0dfc = (short)(((uint)(uVar9 % uVar4) << 0x10) / (uint)uVar6);
    cVar5 = DAT_0dfa._0_1_;
    if (cVar5 != '\0') {
LAB_f392:
      bVar1 = DAT_0bfe;
      DAT_0bfe = bVar1 | 0x40;
      return;
    }
    uVar9 = RAM0dfb;
    DAT_0c3c = uVar9;
    uVar4 = DAT_0c36;
    if (uVar4 <= uVar9) {
      bVar1 = DAT_0bfe;
      if ((bVar1 & 0x80) != 0) goto LAB_f392;
      bVar1 = DAT_0c17;
      bVar8 = DAT_0c1f;
      if ((bVar1 | bVar8) == 0) {
        uVar3 = DAT_0c18;
        RAM0df6 = uVar3;
        uVar3 = DAT_0c20;
        RAM0df8 = uVar3;
      }
      else if (((bVar1 | bVar8) & 0xf0) == 0) {
        uVar2 = DAT_0c17;
        DAT_0df6 = uVar2;
        uVar3 = DAT_0c18;
        DAT_0df7 = uVar3;
        uVar2 = DAT_0c1f;
        DAT_0df9 = uVar2;
        uVar3 = DAT_0c20;
        DAT_0dfa = uVar3;
        do {
          bVar1 = DAT_0df6;
          DAT_0df6 = bVar1 >> 1;
          uVar3 = DAT_0df7;
          bVar8 = (byte)((ushort)uVar3 >> 8);
          DAT_0df7 = CONCAT11(bVar8 >> 1 | bVar1 << 7,(byte)uVar3 >> 1 | bVar8 << 7);
          bVar1 = DAT_0df9;
          DAT_0df9 = bVar1 >> 1;
          uVar3 = DAT_0dfa;
          bVar8 = (byte)((ushort)uVar3 >> 8);
          DAT_0dfa = CONCAT11(bVar8 >> 1 | bVar1 << 7,(byte)uVar3 >> 1 | bVar8 << 7);
          cVar5 = DAT_0df6;
          cVar7 = DAT_0df9;
        } while (cVar5 != '\0' || cVar7 != '\0');
        uVar3 = DAT_0df7;
        RAM0df6 = uVar3;
        uVar3 = DAT_0dfa;
        RAM0df8 = uVar3;
      }
      else {
        uVar3 = RAM0c17;
        RAM0df6 = uVar3;
        uVar2 = DAT_0c18._1_1_;
        DAT_0df7._1_1_ = uVar2;
        uVar3 = RAM0c1f;
        RAM0df9 = uVar3;
        uVar2 = DAT_0c20._1_1_;
        DAT_0dfa._1_1_ = uVar2;
        do {
          bVar1 = DAT_0df7._1_1_;
          DAT_0df7._1_1_ = bVar1 << 1;
          uVar3 = RAM0df6;
          RAM0df6 = CONCAT11((char)((ushort)uVar3 >> 8) << 1 | (byte)uVar3 >> 7,
                             (byte)uVar3 << 1 | bVar1 >> 7);
          bVar1 = DAT_0dfa._1_1_;
          DAT_0dfa._1_1_ = bVar1 << 1;
          uVar3 = RAM0df9;
          bVar8 = (char)((ushort)uVar3 >> 8) << 1 | (byte)uVar3 >> 7;
          RAM0df9 = CONCAT11(bVar8,(byte)uVar3 << 1 | bVar1 >> 7);
          bVar1 = DAT_0df6;
        } while ((bVar8 | bVar1) < 0x80);
        uVar3 = RAM0df9;
        RAM0df8 = uVar3;
      }
      uVar4 = RAM0df6;
      uVar9 = RAM0df8;
      DAT_0dfa = uVar4 / uVar9;
      uVar6 = RAM0df8;
      RAM0dfc = (short)(((uint)(uVar4 % uVar9) << 0x10) / (uint)uVar6);
      cVar5 = DAT_0dfa._0_1_;
      if (cVar5 == '\0') {
        uVar3 = RAM0dfb;
        DAT_0c3e = uVar3;
        bVar1 = DAT_0da0;
        DAT_0c38 = (ushort)bVar1 << 2;
        uVar4 = DAT_0c3e;
        if ((ushort)bVar1 << 2 < uVar4) {
          bVar1 = DAT_0da1;
          uVar9 = (ushort)bVar1 * 4;
          DAT_0c3a = uVar9;
          uVar4 = DAT_0c3e;
          if (uVar4 <= uVar9 && uVar9 - uVar4 != 0) goto LAB_f392;
        }
      }
    }
  }
  bVar1 = DAT_0bfe;
  DAT_0bfe = bVar1 & 0xbf;
  return;
}


