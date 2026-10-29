/* Entry caea */

void candidate_unreferenced_caea(undefined2 param_1)

{
  char cVar1;
  short *psVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  ushort *puVar8;
  short sVar9;
  
  DAT_0b9f = (char)((ushort)param_1 >> 8) + -1;
  DAT_0ba0 = 0;
  puVar8 = (ushort *)DAT_0ba4;
  uVar3 = DAT_0ba2;
  if (uVar3 < *puVar8) {
    cVar4 = DAT_0b9f;
    sVar9 = DAT_0ba4;
    uVar3 = DAT_0ba2;
    if (*(ushort *)((ushort)(byte)(cVar4 << 1) + sVar9) < uVar3) {
      while( true ) {
        cVar4 = DAT_0b9f;
        cVar6 = DAT_0ba0;
        if ((byte)(cVar4 - cVar6) == 1) break;
        cVar1 = DAT_0ba0;
        cVar1 = ((byte)(cVar4 - cVar6) >> 1) + cVar1;
        DAT_0ba1 = cVar1;
        sVar9 = DAT_0ba4;
        uVar3 = DAT_0ba2;
        if (uVar3 < *(ushort *)((ushort)(byte)(cVar1 * '\x02') + sVar9)) {
          uVar7 = DAT_0ba1;
          DAT_0ba0 = uVar7;
        }
        else {
          uVar7 = DAT_0ba1;
          DAT_0b9f = uVar7;
        }
      }
      uVar7 = DAT_0ba0;
      DAT_0ba6._0_1_ = uVar7;
      cVar4 = DAT_0ba6._0_1_;
      sVar9 = DAT_0ba4;
      psVar2 = (short *)((ushort)(byte)(cVar4 << 1) + sVar9);
      DAT_0dde = psVar2[1];
      sVar9 = DAT_0dde;
      DAT_0dde = *psVar2 - sVar9;
      sVar9 = DAT_0ba2;
      uVar3 = DAT_0dde;
      uVar3 = (ushort)(((uint)(ushort)(*psVar2 - sVar9) << 0x10) / (uint)uVar3);
      if (0xff7f < uVar3) {
        cVar4 = DAT_0ba6._0_1_;
        DAT_0ba6._0_1_ = cVar4 + '\x01';
      }
      DAT_0ba6._1_1_ = (char)(uVar3 + 0x80 >> 8);
      sVar9 = DAT_0ba6;
    }
    else {
      bVar5 = DAT_0b9f;
      sVar9 = (ushort)bVar5 << 8;
    }
  }
  else {
    sVar9 = 0;
  }
  DAT_0ba6 = sVar9;
  return;
}


