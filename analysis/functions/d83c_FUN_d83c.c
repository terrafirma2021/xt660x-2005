/* Entry d83c */

void FUN_d83c(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xfb;
  return;
}


