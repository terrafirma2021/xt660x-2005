/* Entry c3c0 */

short candidate_unreferenced_c3c0(ushort param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  
  uVar5 = param_1 - *param_2;
  if (param_1 < *param_2) {
    uVar5 = 0;
  }
  if (param_2[1] < uVar5) {
    uVar5 = param_2[1];
  }
  uVar2 = (uint)param_2[2] * (uint)uVar5;
  DAT_0e10 = (short)(uVar2 >> 0x10) << 1;
  sVar4 = DAT_0e10;
  sVar6 = 0;
  if ((short)uVar2 != 0) {
    uVar5 = *(ushort *)((short)param_2 + sVar4 + 8);
    uVar1 = *(ushort *)((short)param_2 + sVar4 + 6);
    uVar3 = uVar5 - uVar1;
    if (uVar5 < uVar1) {
      return (short)((uint)CONCAT11((~(byte)(uVar3 >> 8) + 1) - ((char)-(char)uVar3 != '\0'),
                                    -(char)uVar3) *
                     (uint)CONCAT11((~(byte)(uVar2 >> 8) + 1) - ((char)-(char)uVar2 != '\0'),
                                    -(char)uVar2) >> 0x10) + *(short *)((short)param_2 + sVar4 + 8);
    }
    sVar6 = (short)((uVar2 & 0xffff) * (uint)uVar3 >> 0x10);
  }
  return sVar6 + *(short *)((short)param_2 + sVar4 + 6);
}


