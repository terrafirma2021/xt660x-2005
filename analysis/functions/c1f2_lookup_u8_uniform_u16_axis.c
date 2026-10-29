/* Entry c1f2 */

ushort lookup_u8_uniform_u16_axis(ushort input_raw,byte *table)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  byte *pbVar5;
  
  uVar3 = input_raw - *(ushort *)table;
  if (input_raw < *(ushort *)table) {
    uVar3 = 0;
  }
  if (*(ushort *)(table + 2) < uVar3) {
    uVar3 = *(ushort *)(table + 2);
  }
  uVar3 = multiply_u16_shift8_saturate(uVar3,*(ushort *)(table + 4));
  cVar2 = (char)uVar3;
  pbVar5 = table + (uVar3 >> 8);
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = pbVar5[7] - pbVar5[6];
    uVar3 = CONCAT11(cVar2,cVar1);
    if (pbVar5[7] < pbVar5[6]) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      pbVar5 = pbVar5 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + pbVar5[6],(char)sVar4);
}


