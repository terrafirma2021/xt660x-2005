/* Entry c2e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short candidate_unreferenced_c2e8(byte param_1,short param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = (ushort)DAT_0dec + (ushort)DAT_0dea * (ushort)param_1 + param_2;
  _DAT_0dee = param_2;
  sVar1 = interp_u8_q8_fraction(sVar3);
  sVar2 = sVar1;
  if (DAT_0deb != '\0') {
    DAT_0dee = (char)((ushort)(sVar1 + 0x80) >> 8);
    sVar2 = interp_u8_q8_fraction((ushort)param_1 + sVar3);
    _DAT_0dee = CONCAT11(DAT_0dee,(char)((ushort)(sVar2 + 0x80) >> 8));
    sVar1 = interp_u8_q8_fraction(&DAT_0deb);
    sVar2 = DAT_0df4;
  }
  DAT_0df4 = sVar2;
  return sVar1;
}


