/* Entry c276 */

undefined2 FUN_c276(ushort param_1,short param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  
  cVar2 = (char)param_1;
  param_2 = (param_1 >> 8) + param_2;
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = *(byte *)(param_2 + 4) - *(byte *)(param_2 + 3);
    uVar3 = CONCAT11(cVar2,cVar1);
    if (*(byte *)(param_2 + 4) < *(byte *)(param_2 + 3)) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      param_2 = param_2 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + *(char *)(param_2 + 3),(char)sVar4);
}


