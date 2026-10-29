/* Entry 6672 */

void FUN_6672(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  
  bVar1 = DAT_0892;
  if (((bVar1 & 0x10) == 0) || (cVar3 = DAT_0b66, cVar3 == '\0')) {
    bVar1 = DAT_08af;
    bVar2 = DAT_08b8;
    DAT_0b67 = ~bVar1 & bVar2;
    bVar1 = DAT_08b0;
    bVar2 = DAT_08b9;
    DAT_0b68 = ~bVar1 & bVar2;
    bVar1 = DAT_08b1;
    bVar2 = DAT_08ba;
    DAT_0b69 = ~bVar1 & bVar2;
    bVar1 = DAT_08b2;
    bVar2 = DAT_08bb;
    DAT_0b6a = ~bVar1 & bVar2;
    cVar3 = DAT_0b67;
    cVar4 = DAT_0b68;
    if (cVar3 == '\0' && cVar4 == '\0') {
      cVar3 = DAT_0b69;
      cVar4 = DAT_0b6a;
      if (cVar3 == '\0' && cVar4 == '\0') {
        return;
      }
    }
    FUN_66d6();
    bVar1 = DAT_0b71;
    DAT_0bdf = (&DAT_4ec9)[bVar1];
    bVar1 = DAT_0892;
    DAT_0892 = bVar1 | 0x10;
    DAT_0b66 = DAT_4eeb;
  }
  else {
    cVar3 = DAT_0b66;
    DAT_0b66 = cVar3 + -1;
  }
  return;
}


