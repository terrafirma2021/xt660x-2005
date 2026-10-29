/* Entry f49f */

void FUN_f49f(void)

{
  char cVar1;
  
  if ((((((((~DAT_088c & 0x20) == 0) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) &&
        (((~DAT_088c & 0x80) == 0 && ((~DAT_0d08 & 1) == 0)))) &&
       (((DAT_0884 & 7) == 0 && (((~DAT_0885 & 0x40) == 0 && ((~DAT_0bf8 & 0x80) == 0)))))) &&
      ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))) &&
     (((~DAT_08b1 & 0x10) == 0 && ((DAT_0886 & 0xc1) == 0)))) {
    if ((~DAT_0886 & 4) == 0) {
      cVar1 = DAT_0923;
      if ((~DAT_088b & 0x80) == 0) {
        cVar1 = DAT_0c04;
      }
      if (cVar1 == DAT_0a1c) {
        FUN_f519();
      }
    }
    if ((~DAT_0886 & 2) == 0) {
      cVar1 = DAT_0923;
      if ((~DAT_088b & 0x80) == 0) {
        cVar1 = DAT_0c04;
      }
      if (cVar1 == DAT_0a1d) {
        FUN_f592();
      }
    }
    return;
  }
  return;
}


