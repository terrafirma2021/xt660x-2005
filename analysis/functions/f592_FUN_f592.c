/* Entry f592 */

void FUN_f592(void)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  
  if ((((DAT_0d87 != '\t') && ((~DAT_088c & 0x10) == 0)) && ((~DAT_088c & 4) == 0)) &&
     (((~DAT_089a & 4) == 0 && ((DAT_08b1 & 0x80) == 0)))) {
    if ((DAT_09cf & 1) != 0) {
      DAT_09cf = DAT_09cf | 2;
    }
    DAT_08c1 = DAT_08c1 | 4;
    DAT_004e = 0x80;
    bVar3 = DAT_00e1;
    if ((bVar3 & 0x80) == 0) {
      sVar2 = DAT_005e;
      sVar1 = DAT_0044;
      if ((sVar2 - sVar1 < 0) || (DAT_0e02 = (sVar2 - sVar1) - DAT_0db2, (short)DAT_0e02 < 0)) {
        DAT_0e02 = 0;
      }
      if ((DAT_0e02 <= DAT_0b78) || (DAT_0b78 == 0)) {
        DAT_0b78 = DAT_0e02;
      }
      DAT_0b74 = DAT_0b78 + DAT_092c;
      DAT_0a18 = DAT_0a18 & 0xdf;
    }
    else {
      DAT_0b74 = DAT_092c;
      DAT_0b78 = 0;
    }
    FUN_c712();
    DAT_08c1 = DAT_08c1 & 0xfb;
    return;
  }
  return;
}


