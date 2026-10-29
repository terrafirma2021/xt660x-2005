/* Entry a314 */

void FUN_a314(void)

{
  byte bVar1;
  
  if ((~DAT_0886 & 0x40) == 0) {
    DAT_0a06 = DAT_0a05 + DAT_34a4;
    if (CARRY1(DAT_0a05,DAT_34a4)) {
      DAT_0a06 = 0xff;
    }
    DAT_0b1a = 0;
  }
  else if (DAT_08ec <= DAT_0a05) {
    if (DAT_08ec == DAT_0a07) {
      DAT_0b1a = (DAT_0b1a + 1) - (0xfe < DAT_0b1a);
    }
    else {
      DAT_0b1a = 0;
    }
    if (DAT_34a5 <= DAT_0b1a) {
      bVar1 = DAT_08ec + DAT_34a4;
      if (CARRY1(DAT_08ec,DAT_34a4)) {
        bVar1 = 0xff;
      }
      if (bVar1 < DAT_0a06) {
        DAT_0a06 = bVar1;
      }
    }
  }
  DAT_0a07 = DAT_08ec;
  return;
}


