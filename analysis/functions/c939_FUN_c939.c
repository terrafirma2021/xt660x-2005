/* Entry c939 */

void FUN_c939(void)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  
  DAT_004e = 0x80;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x80) == 0) {
    sVar3 = DAT_005e;
    sVar1 = DAT_0044;
    if ((sVar3 - sVar1 < 0) || (DAT_0e02 = (sVar3 - sVar1) - DAT_4f18, DAT_0e02 < 0)) {
      DAT_0e02 = 0;
    }
    DAT_0b74 = (DAT_0e02 + DAT_0928) - DAT_0b78;
  }
  else if ((DAT_0a18 & 2) == 0) {
    DAT_0b74 = DAT_0928;
  }
  else {
    sVar3 = DAT_005e;
    sVar1 = DAT_0044;
    if (((-1 < sVar3 - sVar1) && (sVar1 = (sVar3 - sVar1) - DAT_0928, -1 < sVar1)) &&
       (-1 < sVar1 - DAT_4f18)) {
      DAT_0a2c = DAT_005e;
      DAT_0b74 = DAT_0928;
      FUN_c712();
      bVar2 = DAT_004c;
      DAT_004c = bVar2 | 0x80;
      DAT_0b78 = 0;
      DAT_0a18 = DAT_0a18 | 0x20;
      return;
    }
    DAT_0b74 = DAT_0928 + DAT_0b74;
  }
  FUN_c712();
  DAT_0b78 = 0;
  return;
}


