/* Entry c386 */

byte * candidate_unreferenced_c386(undefined2 param_1,byte *param_2)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  
  bVar3 = (byte)((ushort)param_1 >> 8);
  bVar4 = bVar3 - *param_2;
  if (bVar3 < *param_2) {
    bVar4 = 0;
  }
  if (param_2[1] < bVar4) {
    bVar4 = param_2[1];
  }
  bVar3 = (byte)((ushort)bVar4 * (ushort)param_2[2] >> 8);
  bVar4 = (byte)((ushort)bVar4 * (ushort)param_2[2]);
  sVar2 = (ushort)bVar3 + (ushort)bVar3;
  sVar5 = CONCAT11(bVar4,bVar4);
  if (bVar4 != 0) {
    uVar1 = (short)(param_2 + sVar2 + 5) - (short)(param_2 + sVar2 + 3);
    if (param_2 + sVar2 + 5 < param_2 + sVar2 + 3) {
      return param_2 + (short)((uint)(byte)-bVar4 * 0x100 *
                               (uint)CONCAT11((~(byte)(uVar1 >> 8) + 1) -
                                              ((char)-(char)uVar1 != '\0'),-(char)uVar1) >> 0x10) +
                       sVar2 + 5;
    }
    sVar5 = (short)((uint)bVar4 * 0x100 * (uint)uVar1 >> 0x10);
  }
  return param_2 + sVar5 + sVar2 + 3;
}


