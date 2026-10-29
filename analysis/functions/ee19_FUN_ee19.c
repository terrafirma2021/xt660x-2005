/* Entry ee19 */

void FUN_ee19(void)

{
  short sVar1;
  byte bVar2;
  char cVar3;
  
  bVar2 = DAT_08a0;
  if ((((((~bVar2 & 4) != 0) && (bVar2 = DAT_08b2, (~bVar2 & 0x80) != 0)) &&
       (bVar2 = DAT_0880, (~bVar2 & 0x80) != 0)) &&
      ((bVar2 = DAT_0884, (~bVar2 & 4) != 0 && (bVar2 = DAT_0d08, (~bVar2 & 1) != 0)))) &&
     (((bVar2 = DAT_0884, (~bVar2 & 2) != 0 &&
       ((bVar2 = DAT_088c, (~bVar2 & 0x80) != 0 && (bVar2 = DAT_0885, (~bVar2 & 0x40) != 0)))) &&
      (bVar2 = DAT_0bf8, (~bVar2 & 0x80) != 0)))) {
    cVar3 = DAT_0c04;
    bVar2 = DAT_088c;
    if ((((~bVar2 & 2) == 0) || (bVar2 = DAT_089a, (~bVar2 & 2) == 0)) ||
       ((cVar3 != '\x04' && (cVar3 != '\x05')))) {
      return;
    }
    sVar1 = DAT_0044;
    DAT_0b7a = sVar1 + 10;
    DAT_0056 = sVar1 + 10;
    bVar2 = DAT_004c;
    DAT_004c = bVar2 & 0xf7;
    bVar2 = DAT_0049;
    DAT_0049 = bVar2 | 0xc0;
    DAT_004e = 8;
    bVar2 = DAT_0a92;
    DAT_0a92 = bVar2 | 8;
  }
  return;
}


