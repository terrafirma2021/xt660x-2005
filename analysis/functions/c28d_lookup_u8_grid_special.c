/* Entry c28d */

short lookup_u8_grid_special(ushort param_1,short param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  
  DAT_0de3 = (byte)param_1;
  bVar1 = (byte)(param_1 >> 8);
  sVar4 = param_2;
  for (bVar2 = bVar1; bVar2 <= DAT_0de0._0_1_; bVar2 = bVar2 + bVar1) {
    sVar4 = (ushort)(byte)(bVar1 * DAT_0de3) + sVar4;
  }
  DAT_0de2 = bVar2 - bVar1;
  bVar2 = DAT_0de0._0_1_ - DAT_0de2;
  sVar3 = interp_u8_q8_index(param_2);
  sVar3 = sVar3 + 0x80;
  if ((char)DAT_0de0 != '\0') {
    DAT_0de2 = (char)((ushort)sVar3 >> 8);
    sVar4 = interp_u8_q8_index(DAT_0dde,(ushort)DAT_0de3 +
                                        ((ushort)bVar2 * (param_1 & 0xff) & 0xff) + sVar4);
    DAT_0de3 = (byte)((ushort)(sVar4 + 0x80) >> 8);
    sVar3 = FUN_c1e1(0xddf);
    sVar3 = sVar3 + 0x80;
  }
  return sVar3;
}


