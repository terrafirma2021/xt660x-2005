/* Entry 6496 */

void FUN_6496(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  
  bVar1 = DAT_08a0;
  if ((((bVar1 & 2) == 0) || (bVar1 = DAT_0892, (bVar1 & 0x40) == 0)) ||
     (bVar1 = DAT_0881, (bVar1 & 0x20) == 0)) {
    DAT_0b64 = 0;
  }
  else {
    bVar1 = DAT_0892;
    if (((bVar1 & 0x10) == 0) || (cVar4 = DAT_0b66, cVar4 == '\0')) {
      uVar2 = DAT_08af;
      uVar3 = DAT_08b0;
      RAM0b67 = CONCAT11(uVar2,uVar3);
      uVar2 = DAT_08b1;
      uVar3 = DAT_08b2;
      RAM0b69 = CONCAT11(uVar2,uVar3);
      cVar4 = DAT_0b67;
      cVar5 = DAT_0b68;
      if (cVar4 == '\0' && cVar5 == '\0') {
        cVar4 = DAT_0b69;
        cVar5 = DAT_0b6a;
        if (cVar4 == '\0' && cVar5 == '\0') {
          return;
        }
      }
      FUN_66d6();
      bVar1 = DAT_0b71;
      DAT_0b64 = (&DAT_4ec9)[bVar1];
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 | 0x10;
      DAT_0b66 = DAT_4eea;
    }
    else {
      cVar4 = DAT_0b66;
      DAT_0b66 = cVar4 + -1;
    }
  }
  return;
}


