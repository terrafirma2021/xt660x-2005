/* Entry ca49 */

ushort axis_index_u16_ascending(uchar count)

{
  char cVar1;
  short *psVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  short sVar7;
  ushort *puVar8;
  ushort uVar9;
  
  DAT_0b9f = count + 0xff;
  DAT_0ba0 = 0;
  puVar8 = (ushort *)DAT_0ba4;
  uVar9 = DAT_0ba2;
  if (*puVar8 < uVar9) {
    cVar3 = DAT_0b9f;
    sVar7 = DAT_0ba4;
    uVar9 = DAT_0ba2;
    if (uVar9 < *(ushort *)((ushort)(byte)(cVar3 << 1) + sVar7)) {
      while( true ) {
        cVar3 = DAT_0b9f;
        cVar5 = DAT_0ba0;
        if ((byte)(cVar3 - cVar5) == 1) break;
        cVar1 = DAT_0ba0;
        cVar1 = ((byte)(cVar3 - cVar5) >> 1) + cVar1;
        DAT_0ba1 = cVar1;
        sVar7 = DAT_0ba4;
        uVar9 = DAT_0ba2;
        if (uVar9 < *(ushort *)((ushort)(byte)(cVar1 * '\x02') + sVar7)) {
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
      cVar3 = DAT_0ba6._0_1_;
      sVar7 = DAT_0ba4;
      psVar2 = (short *)((ushort)(byte)(cVar3 << 1) + sVar7);
      DAT_0dde = *psVar2;
      sVar7 = DAT_0dde;
      DAT_0dde = psVar2[1] - sVar7;
      sVar7 = DAT_0ba2;
      uVar9 = DAT_0dde;
      uVar9 = (ushort)(((uint)(ushort)(sVar7 - *psVar2) << 0x10) / (uint)uVar9);
      if (0xff7f < uVar9) {
        cVar3 = DAT_0ba6._0_1_;
        DAT_0ba6._0_1_ = cVar3 + '\x01';
      }
      DAT_0ba6._1_1_ = (char)(uVar9 + 0x80 >> 8);
      uVar9 = DAT_0ba6;
    }
    else {
      bVar4 = DAT_0b9f;
      uVar9 = (ushort)bVar4 << 8;
    }
  }
  else {
    uVar9 = 0;
  }
  DAT_0ba6 = uVar9;
  return uVar9;
}


