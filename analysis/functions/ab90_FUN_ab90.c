/* Entry ab90 */

void FUN_ab90(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  if ((DAT_09b6 & 0x10) != 0) {
    pbVar3 = (byte *)((short)&DAT_09b7 + (ushort)(byte)(DAT_09cb * '\x04' + DAT_09cc));
    if (DAT_36e8 < DAT_09c7) {
      bVar1 = *pbVar3 + DAT_36ea;
      if (CARRY1(*pbVar3,DAT_36ea)) {
        bVar1 = 0xff;
      }
    }
    else if (DAT_09c7 < DAT_36e9) {
      bVar1 = *pbVar3 - DAT_36ea;
      if (*pbVar3 < DAT_36ea) {
        bVar1 = 0;
      }
    }
    else {
      bVar1 = *pbVar3;
    }
    bVar2 = DAT_36eb;
    if ((DAT_36eb <= bVar1) && (bVar2 = bVar1, DAT_36ec < bVar1)) {
      bVar2 = DAT_36ec;
    }
    *pbVar3 = bVar2;
  }
  return;
}


