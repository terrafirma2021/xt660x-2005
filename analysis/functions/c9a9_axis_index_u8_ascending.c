/* Entry c9a9 */

ushort axis_index_u8_ascending(uchar count)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  byte *pbVar8;
  short sVar9;
  ushort uVar10;
  
  DAT_0b9f = count + 0xff;
  DAT_0ba0 = 0;
  pbVar8 = (byte *)DAT_0ba4;
  bVar1 = DAT_0ba2._0_1_;
  if (*pbVar8 < bVar1) {
    bVar1 = DAT_0b9f;
    sVar9 = DAT_0ba4;
    bVar7 = DAT_0ba2._0_1_;
    if (bVar7 < *(byte *)((ushort)bVar1 + sVar9)) {
      while( true ) {
        cVar3 = DAT_0b9f;
        cVar4 = DAT_0ba0;
        if ((byte)(cVar3 - cVar4) == 1) break;
        cVar5 = DAT_0ba0;
        bVar1 = ((byte)(cVar3 - cVar4) >> 1) + cVar5;
        DAT_0ba1 = bVar1;
        sVar9 = DAT_0ba4;
        bVar7 = DAT_0ba2._0_1_;
        if (bVar7 < *(byte *)((ushort)bVar1 + sVar9)) {
          uVar6 = DAT_0ba1;
          DAT_0b9f = uVar6;
        }
        else {
          uVar6 = DAT_0ba1;
          DAT_0ba0 = uVar6;
        }
      }
      uVar6 = DAT_0ba0;
      DAT_0ba6._0_1_ = uVar6;
      bVar1 = DAT_0ba6._0_1_;
      sVar9 = DAT_0ba4;
      pcVar2 = (char *)((ushort)bVar1 + sVar9);
      DAT_0dde._0_1_ = *pcVar2;
      cVar3 = DAT_0dde._0_1_;
      DAT_0dde._0_1_ = pcVar2[1] - cVar3;
      cVar3 = DAT_0ba2._0_1_;
      uVar10 = DAT_0dde;
      uVar10 = (ushort)(((uint)(byte)(cVar3 - *pcVar2) << 0x18) / (uint)uVar10);
      if (0xff7f < uVar10) {
        cVar3 = DAT_0ba6._0_1_;
        DAT_0ba6._0_1_ = cVar3 + '\x01';
      }
      DAT_0ba6._1_1_ = (char)(uVar10 + 0x80 >> 8);
      uVar10 = DAT_0ba6;
    }
    else {
      bVar1 = DAT_0b9f;
      uVar10 = (ushort)bVar1 << 8;
    }
  }
  else {
    uVar10 = 0;
  }
  DAT_0ba6 = uVar10;
  return uVar10;
}


