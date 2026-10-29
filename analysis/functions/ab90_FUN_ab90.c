/* Entry ab90 */

void FUN_ab90(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  
  bVar3 = DAT_09b6;
  if ((bVar3 & 0x10) != 0) {
    cVar1 = DAT_09cb;
    cVar2 = DAT_09cc;
    pbVar5 = (byte *)((short)&DAT_09b7 + (ushort)(byte)(cVar1 * '\x04' + cVar2));
    bVar3 = DAT_09c7;
    if (DAT_36e8 < bVar3) {
      bVar3 = *pbVar5 + DAT_36ea;
      if (CARRY1(*pbVar5,DAT_36ea)) {
        bVar3 = 0xff;
      }
    }
    else if (bVar3 < DAT_36e9) {
      bVar3 = *pbVar5 - DAT_36ea;
      if (*pbVar5 < DAT_36ea) {
        bVar3 = 0;
      }
    }
    else {
      bVar3 = *pbVar5;
    }
    bVar4 = DAT_36eb;
    if ((DAT_36eb <= bVar3) && (bVar4 = bVar3, DAT_36ec < bVar3)) {
      bVar4 = DAT_36ec;
    }
    *pbVar5 = bVar4;
  }
  return;
}


