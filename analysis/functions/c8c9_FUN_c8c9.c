/* Entry c8c9 */

void FUN_c8c9(void)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  
  DAT_004e = 0x40;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x40) == 0) {
    sVar3 = DAT_005c;
    sVar1 = DAT_0044;
    if ((sVar3 - sVar1 < 0) || (DAT_0e02 = (sVar3 - sVar1) - DAT_4f18, DAT_0e02 < 0)) {
      DAT_0e02 = 0;
    }
    DAT_0b72 = (DAT_0e02 + DAT_0926) - DAT_0b76;
  }
  else if ((DAT_0a18 & 8) == 0) {
    DAT_0b72 = DAT_0926;
  }
  else {
    sVar3 = DAT_005c;
    sVar1 = DAT_0044;
    if (((-1 < sVar3 - sVar1) && (sVar1 = (sVar3 - sVar1) - DAT_0926, -1 < sVar1)) &&
       (-1 < sVar1 - DAT_4f18)) {
      DAT_0a2a = DAT_005c;
      DAT_0b72 = DAT_0926;
      FUN_c55b();
      bVar2 = DAT_004c;
      DAT_004c = bVar2 | 0x40;
      DAT_0b76 = 0;
      DAT_0a18 = DAT_0a18 | 0x80;
      return;
    }
    DAT_0b72 = DAT_0926 + DAT_0b72;
  }
  FUN_c55b();
  DAT_0b76 = 0;
  return;
}


