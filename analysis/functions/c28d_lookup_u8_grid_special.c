/* Entry c28d */

short lookup_u8_grid_special(undefined2 param_1,short param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  byte *table;
  
  DAT_0de3 = (char)param_1;
  cVar4 = (char)((ushort)param_1 >> 8);
  DAT_0de2 = cVar4;
  bVar5 = DAT_0de2;
  sVar7 = param_2;
  for (; bVar1 = DAT_0de0._0_1_, bVar5 <= bVar1; bVar5 = bVar5 + cVar3) {
    sVar7 = (ushort)(byte)(cVar4 * (char)param_1) + sVar7;
    cVar3 = DAT_0de2;
  }
  cVar4 = DAT_0de2;
  DAT_0de2 = bVar5 - cVar4;
  cVar4 = DAT_0de0._0_1_;
  cVar3 = DAT_0de2;
  bVar5 = DAT_0de3;
  table = (byte *)(((ushort)(byte)(cVar4 - cVar3) * (ushort)bVar5 & 0xff) + sVar7);
  uVar6 = DAT_0dde;
  uVar6 = interp_u8_q8_index(uVar6,table);
  sVar7 = uVar6 + 0x80;
  cVar4 = DAT_0de0._1_1_;
  if (cVar4 != '\0') {
    DAT_0de2 = (char)((ushort)sVar7 >> 8);
    bVar5 = DAT_0de3;
    uVar6 = DAT_0dde;
    uVar6 = interp_u8_q8_index(uVar6,table + bVar5);
    DAT_0de3 = (char)(uVar6 + 0x80 >> 8);
    uVar2 = DAT_0de0._1_1_;
    sVar7 = FUN_c1e1(0xddf,param_2);
    sVar7 = sVar7 + 0x80;
  }
  return sVar7;
}


