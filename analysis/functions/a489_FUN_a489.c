/* Entry a489 */

void FUN_a489(void)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0x7f;
  DAT_0dde = FUN_5fa4();
  uVar4 = 0x1800;
  sVar2 = 0;
  do {
    sVar2 = sVar2 + uVar4;
    if ((uVar4 & 0x1fff) == 0x1000) {
      sVar2 = FUN_5fa4(0x1000);
    }
    uVar4 = uVar4 + 2;
  } while ((uVar4 != 0) && (uVar4 <= DAT_0dde));
  cVar3 = '\0';
  if (sVar2 != -0x55ab) {
    cVar3 = -1;
  }
  DAT_0e66 = sVar2;
  if (cVar3 == '\0') {
    FUN_5fa4();
    if ((DAT_0d65 != -0x80) && ((DAT_08b2 & 0x80) != 0)) {
      DAT_08b2 = DAT_08b2 & 0x7f;
      DAT_0bd2 = DAT_0bd2 | 0x10;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 | 0x80;
    bVar1 = DAT_0bd2;
  }
  else {
    bVar1 = DAT_0bd2;
    if ((DAT_0d65 != -0x80) && ((~DAT_08b2 & 0x80) == 0)) {
      DAT_08b2 = DAT_08b2 | 0x80;
      bVar1 = DAT_0bd2 | 0x10;
      if ((~DAT_08bb & 0x80) == 0) {
        DAT_08bb = DAT_08bb | 0x80;
        bVar1 = DAT_0bd2 | 0x11;
      }
    }
  }
  DAT_0bd2 = bVar1;
  FUN_5fa4();
  return;
}


