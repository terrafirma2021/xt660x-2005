/* Entry a314 */

void FUN_a314(void)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  
  bVar4 = DAT_0886;
  if ((~bVar4 & 0x40) == 0) {
    bVar4 = DAT_08ec;
    bVar1 = DAT_0a05;
    if (bVar4 <= bVar1) {
      bVar1 = DAT_0a07;
      if (bVar4 == bVar1) {
        bVar4 = DAT_0b1a;
        bVar4 = (bVar4 + 1) - (0xfe < bVar4);
      }
      else {
        bVar4 = 0;
      }
      DAT_0b1a = bVar4;
      if (DAT_34a5 <= bVar4) {
        bVar1 = DAT_08ec;
        bVar4 = bVar1 + DAT_34a4;
        if (CARRY1(bVar1,DAT_34a4)) {
          bVar4 = 0xff;
        }
        bVar1 = DAT_0a06;
        if (bVar4 < bVar1) {
          DAT_0a06 = bVar4;
        }
      }
    }
  }
  else {
    bVar4 = DAT_0a05;
    cVar3 = bVar4 + DAT_34a4;
    if (CARRY1(bVar4,DAT_34a4)) {
      cVar3 = -1;
    }
    DAT_0a06 = cVar3;
    DAT_0b1a = 0;
  }
  uVar2 = DAT_08ec;
  DAT_0a07 = uVar2;
  return;
}


