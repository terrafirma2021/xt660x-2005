/* Entry d84b */

void FUN_d84b(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xef;
  return;
}


