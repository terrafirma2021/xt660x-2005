/* Entry a489 */

void FUN_a489(void)

{
  byte bVar1;
  short *psVar2;
  undefined2 uVar3;
  short sVar4;
  char cVar5;
  short *psVar6;
  
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0x7f;
  uVar3 = FUN_5fa4();
  DAT_0dde = uVar3;
  psVar6 = &DAT_1800;
  sVar4 = 0;
  do {
    sVar4 = sVar4 + *psVar6;
    if (((ushort)psVar6 & 0x1fff) == 0x1000) {
      sVar4 = FUN_5fa4(0x1000);
    }
    psVar6 = psVar6 + 1;
  } while ((psVar6 != (short *)0x0) && (psVar2 = (short *)DAT_0dde, psVar6 <= psVar2));
  cVar5 = '\0';
  if (sVar4 != -0x55ab) {
    cVar5 = -1;
  }
  DAT_0e66 = sVar4;
  if (cVar5 == '\0') {
    FUN_5fa4();
    cVar5 = DAT_0d65;
    if ((cVar5 != -0x80) && (bVar1 = DAT_08b2, (bVar1 & 0x80) != 0)) {
      bVar1 = DAT_08b2;
      DAT_08b2 = bVar1 & 0x7f;
      bVar1 = DAT_0bd2;
      DAT_0bd2 = bVar1 | 0x10;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 | 0x80;
  }
  else {
    cVar5 = DAT_0d65;
    if ((cVar5 != -0x80) && (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)) {
      bVar1 = DAT_08b2;
      DAT_08b2 = bVar1 | 0x80;
      bVar1 = DAT_0bd2;
      DAT_0bd2 = bVar1 | 0x10;
      bVar1 = DAT_08bb;
      if ((~bVar1 & 0x80) != 0) {
        bVar1 = DAT_08bb;
        DAT_08bb = bVar1 | 0x80;
        bVar1 = DAT_0bd2;
        DAT_0bd2 = bVar1 | 1;
      }
    }
  }
  FUN_5fa4();
  return;
}


