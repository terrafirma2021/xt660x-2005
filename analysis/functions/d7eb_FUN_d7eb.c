/* Entry d7eb */

void FUN_d7eb(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0xbf;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 | 0x30;
  DAT_004e = 0x40;
  return;
}


