/* Entry f1ce */

void FUN_f1ce(void)

{
  undefined2 uVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  short sVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  
  uVar1 = DAT_0c1c;
  RAM0df9 = uVar1;
  uVar1 = DAT_0c20;
  RAM0dfb = uVar1;
  uVar1 = DAT_0c08;
  RAM0dfd = uVar1;
  bVar10 = DAT_0c20._0_1_;
  bVar9 = DAT_0c1c._0_1_;
  bVar9 = (byte)((ushort)uVar1 >> 8) | bVar10 | bVar9;
  if ((bVar9 & 0xf8) == 0) {
    uVar4 = RAM0df9;
    RAM0df9 = uVar4 >> 3;
    uVar4 = RAM0dfb;
    RAM0dfb = uVar4 >> 3;
    uVar4 = RAM0dfd;
    RAM0dfd = uVar4 >> 3;
    uVar2 = DAT_0dfa._0_1_;
    DAT_0df7._1_1_ = uVar2;
    uVar2 = DAT_0dfc;
    uVar8 = DAT_0dfe;
    FUN_f26e(CONCAT11(uVar2,uVar8));
    return;
  }
  if (bVar9 < 0x10) {
    DAT_0c34 = 4;
  }
  else if (bVar9 < 0x20) {
    DAT_0c34 = 3;
  }
  else if (bVar9 < 0x40) {
    DAT_0c34 = 2;
  }
  else if (bVar9 < 0x80) {
    DAT_0c34 = 1;
  }
  else {
    DAT_0c34 = 0;
  }
  while (cVar3 = DAT_0c34, cVar3 != '\0') {
    cVar3 = DAT_0c34;
    DAT_0c34 = cVar3 + -1;
    sVar7 = RAM0df9;
    RAM0df9 = sVar7 << 1;
    sVar7 = RAM0dfb;
    RAM0dfb = sVar7 << 1;
    sVar7 = RAM0dfd;
    RAM0dfd = sVar7 << 1;
  }
  uVar2 = DAT_0df9;
  DAT_0df7._1_1_ = uVar2;
  bVar9 = DAT_0dfa._1_1_;
  bVar10 = DAT_0dfd;
  RAM0df6 = (ushort)bVar9 * (ushort)bVar10;
  bVar9 = DAT_0df7._1_1_;
  bVar10 = DAT_0df7._1_1_;
  uVar11 = (ushort)bVar9 * (ushort)bVar10;
  uVar4 = RAM0df6;
  if (uVar4 <= uVar11) {
    uVar4 = RAM0df6;
    DAT_0dfa = uVar11 / uVar4;
    uVar5 = RAM0df6;
    RAM0dfc = (short)(((uint)(uVar11 % uVar4) << 0x10) / (uint)uVar5);
    cVar3 = DAT_0dfa._0_1_;
    if (cVar3 != '\0') {
LAB_f392:
      bVar9 = DAT_0bfe;
      DAT_0bfe = bVar9 | 0x40;
      return;
    }
    uVar11 = RAM0dfb;
    DAT_0c3c = uVar11;
    uVar4 = DAT_0c36;
    if (uVar4 <= uVar11) {
      bVar9 = DAT_0bfe;
      if ((bVar9 & 0x80) != 0) goto LAB_f392;
      bVar9 = DAT_0c17;
      bVar10 = DAT_0c1f;
      if ((bVar9 | bVar10) == 0) {
        uVar1 = DAT_0c18;
        RAM0df6 = uVar1;
        uVar1 = DAT_0c20;
        RAM0df8 = uVar1;
      }
      else if (((bVar9 | bVar10) & 0xf0) == 0) {
        uVar2 = DAT_0c17;
        DAT_0df6 = uVar2;
        uVar1 = DAT_0c18;
        DAT_0df7 = uVar1;
        uVar2 = DAT_0c1f;
        DAT_0df9 = uVar2;
        uVar1 = DAT_0c20;
        DAT_0dfa = uVar1;
        do {
          bVar9 = DAT_0df6;
          DAT_0df6 = bVar9 >> 1;
          uVar1 = DAT_0df7;
          bVar10 = (byte)((ushort)uVar1 >> 8);
          DAT_0df7 = CONCAT11(bVar10 >> 1 | bVar9 << 7,(byte)uVar1 >> 1 | bVar10 << 7);
          bVar9 = DAT_0df9;
          DAT_0df9 = bVar9 >> 1;
          uVar1 = DAT_0dfa;
          bVar10 = (byte)((ushort)uVar1 >> 8);
          DAT_0dfa = CONCAT11(bVar10 >> 1 | bVar9 << 7,(byte)uVar1 >> 1 | bVar10 << 7);
          cVar3 = DAT_0df6;
          cVar6 = DAT_0df9;
        } while (cVar3 != '\0' || cVar6 != '\0');
        uVar1 = DAT_0df7;
        RAM0df6 = uVar1;
        uVar1 = DAT_0dfa;
        RAM0df8 = uVar1;
      }
      else {
        uVar1 = RAM0c17;
        RAM0df6 = uVar1;
        uVar2 = DAT_0c18._1_1_;
        DAT_0df7._1_1_ = uVar2;
        uVar1 = RAM0c1f;
        RAM0df9 = uVar1;
        uVar2 = DAT_0c20._1_1_;
        DAT_0dfa._1_1_ = uVar2;
        do {
          bVar9 = DAT_0df7._1_1_;
          DAT_0df7._1_1_ = bVar9 << 1;
          uVar1 = RAM0df6;
          RAM0df6 = CONCAT11((char)((ushort)uVar1 >> 8) << 1 | (byte)uVar1 >> 7,
                             (byte)uVar1 << 1 | bVar9 >> 7);
          bVar9 = DAT_0dfa._1_1_;
          DAT_0dfa._1_1_ = bVar9 << 1;
          uVar1 = RAM0df9;
          bVar10 = (char)((ushort)uVar1 >> 8) << 1 | (byte)uVar1 >> 7;
          RAM0df9 = CONCAT11(bVar10,(byte)uVar1 << 1 | bVar9 >> 7);
          bVar9 = DAT_0df6;
        } while ((bVar10 | bVar9) < 0x80);
        uVar1 = RAM0df9;
        RAM0df8 = uVar1;
      }
      uVar4 = RAM0df6;
      uVar11 = RAM0df8;
      DAT_0dfa = uVar4 / uVar11;
      uVar5 = RAM0df8;
      RAM0dfc = (short)(((uint)(uVar4 % uVar11) << 0x10) / (uint)uVar5);
      cVar3 = DAT_0dfa._0_1_;
      if (cVar3 == '\0') {
        uVar1 = RAM0dfb;
        DAT_0c3e = uVar1;
        bVar9 = DAT_0da0;
        DAT_0c38 = (ushort)bVar9 << 2;
        uVar4 = DAT_0c3e;
        if ((ushort)bVar9 << 2 < uVar4) {
          bVar9 = DAT_0da1;
          uVar11 = (ushort)bVar9 * 4;
          DAT_0c3a = uVar11;
          uVar4 = DAT_0c3e;
          if (uVar4 <= uVar11 && uVar11 - uVar4 != 0) goto LAB_f392;
        }
      }
    }
  }
  bVar9 = DAT_0bfe;
  DAT_0bfe = bVar9 & 0xbf;
  return;
}


