/* Entry c268 */

undefined2 candidate_unreferenced_c268(undefined2 param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  
  bVar3 = (byte)((ushort)param_1 >> 8);
  bVar4 = bVar3 - *param_2;
  if (bVar3 < *param_2) {
    bVar4 = 0;
  }
  if (param_2[1] < bVar4) {
    bVar4 = param_2[1];
  }
  cVar2 = (char)((ushort)bVar4 * (ushort)param_2[2]);
  param_2 = param_2 + ((ushort)bVar4 * (ushort)param_2[2] >> 8);
  sVar6 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = param_2[4] - param_2[3];
    uVar5 = CONCAT11(cVar2,cVar1);
    if (param_2[4] < param_2[3]) {
      uVar5 = CONCAT11(-cVar2,-cVar1);
      param_2 = param_2 + 1;
    }
    sVar6 = (uVar5 >> 8) * (uVar5 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar6 >> 8) + param_2[3],(char)sVar6);
}


