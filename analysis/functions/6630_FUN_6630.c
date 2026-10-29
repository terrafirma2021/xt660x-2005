/* Entry 6630 */

void FUN_6630(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_0892;
  if (((bVar1 & 0x10) == 0) || (cVar2 = DAT_0b66, cVar2 == '\0')) {
    bVar1 = DAT_08b4;
    DAT_0b67 = bVar1 & 3;
    DAT_0b68 = 0;
    DAT_0b69 = 0;
    DAT_0b6a = 0;
    cVar2 = DAT_0b67;
    if (cVar2 != '\0') {
      FUN_66d6();
      bVar1 = DAT_0b71;
      DAT_0bdf = (&DAT_4eeb)[bVar1];
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 | 0x10;
      DAT_0b66 = DAT_4ef4;
    }
  }
  else {
    cVar2 = DAT_0b66;
    DAT_0b66 = cVar2 + -1;
  }
  return;
}


