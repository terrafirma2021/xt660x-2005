/* Entry c372 */

undefined2 interp_u8_q8_fraction(undefined2 param_1,short param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  
  bVar2 = (byte)((ushort)param_1 >> 8);
  sVar3 = CONCAT11(bVar2,bVar2);
  if (bVar2 != 0) {
    bVar1 = *(byte *)(param_2 + 4) - *(byte *)(param_2 + 3);
    if (*(byte *)(param_2 + 4) < *(byte *)(param_2 + 3)) {
      sVar3 = (ushort)(byte)-bVar2 * (ushort)(byte)-bVar1;
      return CONCAT11((char)((ushort)sVar3 >> 8) + *(char *)(param_2 + 4),(char)sVar3);
    }
    sVar3 = (ushort)bVar2 * (ushort)bVar1;
  }
  return CONCAT11((char)((ushort)sVar3 >> 8) + *(char *)(param_2 + 3),(char)sVar3);
}


