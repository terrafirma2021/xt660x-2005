/* Entry c499 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bilinear_u16_grid(ushort param_1,short param_2)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  
  bVar1 = (byte)(param_1 >> 8);
  DAT_0e0e = (ushort)bVar1 * (param_1 & 0xff);
  sVar3 = (ushort)DAT_0e06 + (ushort)DAT_0e06 + param_2 + DAT_0e0e * 2 + 0xf;
  uVar2 = interp_u16_q16_fraction(sVar3);
  if (DAT_0e0a == 0) {
    return;
  }
  _DAT_0e06 = uVar2;
  DAT_0e08 = interp_u16_q16_fraction(DAT_0e08,(ushort)bVar1 + (ushort)bVar1 + sVar3);
  interp_u16_q16_fraction(DAT_0e0a,0xe00);
  return;
}


