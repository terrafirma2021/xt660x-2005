/* Entry f49f */

void FUN_f49f(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = DAT_088c;
  if ((((((((~bVar1 & 0x20) != 0) && (bVar1 = DAT_08a0, (~bVar1 & 4) != 0)) &&
         (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)) &&
        ((bVar1 = DAT_088c, (~bVar1 & 0x80) != 0 && (bVar1 = DAT_0d08, (~bVar1 & 1) != 0)))) &&
       ((bVar1 = DAT_0884, (bVar1 & 7) == 0 &&
        ((bVar1 = DAT_0885, (~bVar1 & 0x40) != 0 && (bVar1 = DAT_0bf8, (~bVar1 & 0x80) != 0)))))) &&
      ((cVar3 = DAT_0dd9, cVar3 == -0x80 || (bVar1 = DAT_08b0, (~bVar1 & 8) != 0)))) &&
     ((bVar1 = DAT_08b1, (~bVar1 & 0x10) != 0 && (bVar1 = DAT_0886, (bVar1 & 0xc1) == 0)))) {
    bVar1 = DAT_0886;
    if ((~bVar1 & 4) != 0) {
      bVar1 = DAT_088b;
      if ((~bVar1 & 0x80) == 0) {
        cVar3 = DAT_0923;
      }
      else {
        cVar3 = DAT_0c04;
      }
      cVar2 = DAT_0a1c;
      if (cVar3 == cVar2) {
        FUN_f519();
      }
    }
    bVar1 = DAT_0886;
    if ((~bVar1 & 2) != 0) {
      bVar1 = DAT_088b;
      if ((~bVar1 & 0x80) == 0) {
        cVar3 = DAT_0923;
      }
      else {
        cVar3 = DAT_0c04;
      }
      cVar2 = DAT_0a1d;
      if (cVar3 == cVar2) {
        FUN_f592();
      }
    }
    return;
  }
  return;
}


