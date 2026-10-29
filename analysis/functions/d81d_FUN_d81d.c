/* Entry d81d */

void FUN_d81d(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xfd;
  bVar1 = DAT_0889;
  DAT_0889 = bVar1 & 0x7f;
  return;
}


