/* Entry cbef */

void FUN_cbef(void)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = DAT_0d87;
  if (cVar2 == '\t') {
    bVar1 = DAT_0896._0_1_;
    bVar1 = ~bVar1;
  }
  else {
    bVar1 = DAT_0896._0_1_;
  }
  if ((bVar1 & 2) == 0) {
    DAT_0b05 = 0;
    bVar1 = DAT_0b06;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b06 = bVar1;
    if (DAT_18d5 <= bVar1) {
      bVar1 = DAT_0880;
      DAT_0880 = bVar1 & 0xfe;
    }
  }
  else {
    DAT_0b06 = 0;
    bVar1 = DAT_0b05;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b05 = bVar1;
    if (DAT_18d4 <= bVar1) {
      bVar1 = DAT_0880;
      DAT_0880 = bVar1 | 1;
      return;
    }
  }
  return;
}


