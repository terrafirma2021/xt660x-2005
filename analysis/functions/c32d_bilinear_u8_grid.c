/* Entry c32d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short bilinear_u8_grid(byte param_1,short param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = (ushort)DAT_0de0._0_1_ + (ushort)DAT_0dde._0_1_ * (ushort)param_1 + param_2;
  _DAT_0de2 = param_2;
  sVar1 = interp_u8_q8_fraction(sVar3);
  sVar2 = sVar1;
  if ((char)DAT_0dde != '\0') {
    DAT_0de2 = (char)((ushort)(sVar1 + 0x80) >> 8);
    sVar2 = interp_u8_q8_fraction((ushort)param_1 + sVar3);
    _DAT_0de2 = CONCAT11(DAT_0de2,(char)((ushort)(sVar2 + 0x80) >> 8));
    sVar1 = interp_u8_q8_fraction(0xddf);
    sVar2 = RAM0x0de8;
  }
  RAM0x0de8 = sVar2;
  return sVar1;
}


