/* Entry c1f2 */

undefined2 lookup_u8_uniform_u16_axis(short param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  
  uVar3 = multiply_u16_shift8_saturate();
  cVar2 = (char)uVar3;
  param_1 = (uVar3 >> 8) + param_1;
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = *(byte *)(param_1 + 7) - *(byte *)(param_1 + 6);
    uVar3 = CONCAT11(cVar2,cVar1);
    if (*(byte *)(param_1 + 7) < *(byte *)(param_1 + 6)) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      param_1 = param_1 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + *(char *)(param_1 + 6),(char)sVar4);
}


