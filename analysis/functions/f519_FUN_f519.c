/* Entry f519 */

void FUN_f519(void)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  
  if (((~DAT_088c & 8) == 0) && ((~DAT_089a & 8) == 0)) {
    if ((DAT_08b1 & 0x80) == 0) {
      DAT_088c = DAT_088c & 0xcf;
      if ((DAT_09cf & 1) != 0) {
        DAT_09cf = DAT_09cf | 2;
      }
      DAT_08c1 = DAT_08c1 | 1;
      DAT_004e = 0x40;
      bVar3 = DAT_00e1;
      if ((bVar3 & 0x40) == 0) {
        sVar2 = DAT_005c;
        sVar1 = DAT_0044;
        if ((sVar2 - sVar1 < 0) || (DAT_0e02 = (sVar2 - sVar1) - DAT_0db2, (short)DAT_0e02 < 0)) {
          DAT_0e02 = 0;
        }
        if ((DAT_0e02 <= DAT_0b76) || (DAT_0b76 == 0)) {
          DAT_0b76 = DAT_0e02;
        }
        DAT_0b72 = DAT_0b76 + DAT_092a;
        DAT_0a18 = DAT_0a18 & 0x7f;
      }
      else {
        DAT_0b72 = DAT_092a;
        DAT_0b76 = 0;
      }
      FUN_c55b();
      DAT_08c1 = DAT_08c1 & 0xfe;
      return;
    }
    DAT_088c = DAT_088c & 0xcf;
  }
  return;
}


