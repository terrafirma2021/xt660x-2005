/* Entry ee19 */

void FUN_ee19(void)

{
  short sVar1;
  byte bVar2;
  
  if ((((((~DAT_08a0 & 4) == 0) && ((~DAT_08b2 & 0x80) == 0)) && ((~DAT_0880 & 0x80) == 0)) &&
      (((~DAT_0884 & 4) == 0 && ((~DAT_0d08 & 1) == 0)))) &&
     ((((~DAT_0884 & 2) == 0 && (((~DAT_088c & 0x80) == 0 && ((~DAT_0885 & 0x40) == 0)))) &&
      ((~DAT_0bf8 & 0x80) == 0)))) {
    if ((((~DAT_088c & 2) != 0) || ((~DAT_089a & 2) != 0)) ||
       ((DAT_0c04 != '\x04' && (DAT_0c04 != '\x05')))) {
      return;
    }
    sVar1 = DAT_0044;
    DAT_0b7a = sVar1 + 10;
    DAT_0056 = DAT_0b7a;
    bVar2 = DAT_004c;
    DAT_004c = bVar2 & 0xf7;
    bVar2 = DAT_0049;
    DAT_0049 = bVar2 | 0xc0;
    DAT_004e = 8;
    DAT_0a92 = DAT_0a92 | 8;
  }
  return;
}


