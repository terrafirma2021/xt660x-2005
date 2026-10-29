/* Entry c276 */

ushort FUN_c276(ushort index_q8,byte *table_bias)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  byte *pbVar5;
  
  cVar2 = (char)index_q8;
  pbVar5 = table_bias + (index_q8 >> 8);
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = pbVar5[4] - pbVar5[3];
    uVar3 = CONCAT11(cVar2,cVar1);
    if (pbVar5[4] < pbVar5[3]) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      pbVar5 = pbVar5 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + pbVar5[3],(char)sVar4);
}


