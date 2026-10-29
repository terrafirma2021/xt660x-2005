/* Entry bbfd */

void FUN_bbfd(void)

{
  byte bVar1;
  
  if ((~DAT_0888 & 2) == 0) {
    DAT_0893 = DAT_0893 & 0xab;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfe;
  }
  else {
    DAT_0893 = DAT_0893 | 4;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 | 1;
  }
  return;
}


