/* Entry c1cd */

ushort lookup_u8_uniform_axis(uchar input_raw,byte *table)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  byte *pbVar6;
  
  bVar3 = input_raw - *table;
  if (input_raw < *table) {
    bVar3 = 0;
  }
  if (table[1] < bVar3) {
    bVar3 = table[1];
  }
  cVar2 = (char)((ushort)bVar3 * (ushort)table[2]);
  pbVar6 = table + ((ushort)bVar3 * (ushort)table[2] >> 8);
  sVar5 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = pbVar6[4] - pbVar6[3];
    uVar4 = CONCAT11(cVar2,cVar1);
    if (pbVar6[4] < pbVar6[3]) {
      uVar4 = CONCAT11(-cVar2,-cVar1);
      pbVar6 = pbVar6 + 1;
    }
    sVar5 = (uVar4 >> 8) * (uVar4 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar5 >> 8) + pbVar6[3],(char)sVar5);
}


