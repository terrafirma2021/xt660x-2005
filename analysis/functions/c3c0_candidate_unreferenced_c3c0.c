/* Entry c3c0 */

short candidate_unreferenced_c3c0(ushort param_1,ushort param_2)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  
  uVar3 = param_1 - param_2;
  if (param_1 < param_2) {
    uVar3 = 0;
  }
  if (param_2 + 2 < uVar3) {
    uVar3 = param_2 + 2;
  }
  uVar2 = (uint)(param_2 + 4) * (uint)uVar3;
  DAT_0e10 = (short)(uVar2 >> 0x10) * 2;
  sVar1 = param_2 + DAT_0e10;
  sVar4 = 0;
  if ((short)uVar2 != 0) {
    uVar3 = (sVar1 + 8U) - (sVar1 + 6U);
    if (sVar1 + 8U < sVar1 + 6U) {
      return (short)((uint)CONCAT11((~(byte)(uVar3 >> 8) + 1) - ((char)-(char)uVar3 != '\0'),
                                    -(char)uVar3) *
                     (uint)CONCAT11((~(byte)(uVar2 >> 8) + 1) - ((char)-(char)uVar2 != '\0'),
                                    -(char)uVar2) >> 0x10) + sVar1 + 8;
    }
    sVar4 = (short)((uVar2 & 0xffff) * (uint)uVar3 >> 0x10);
  }
  return sVar4 + sVar1 + 6;
}


