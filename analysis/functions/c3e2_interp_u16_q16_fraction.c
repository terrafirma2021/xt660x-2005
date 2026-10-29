/* Entry c3e2 */

short interp_u16_q16_fraction(ushort param_1,short param_2)

{
  ushort uVar1;
  short sVar2;
  
  sVar2 = 0;
  if (param_1 != 0) {
    uVar1 = (param_2 + 8U) - (param_2 + 6U);
    if (param_2 + 8U < param_2 + 6U) {
      return (short)((uint)CONCAT11((~(byte)(uVar1 >> 8) + 1) - ((char)-(char)uVar1 != '\0'),
                                    -(char)uVar1) *
                     (uint)CONCAT11((~(byte)(param_1 >> 8) + 1) - ((char)-(char)param_1 != '\0'),
                                    -(char)param_1) >> 0x10) + param_2 + 8;
    }
    sVar2 = (short)((uint)param_1 * (uint)uVar1 >> 0x10);
  }
  return sVar2 + param_2 + 6;
}


