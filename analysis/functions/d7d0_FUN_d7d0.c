/* Entry d7d0 */

void FUN_d7d0(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0xf7;
  bVar1 = DAT_0049;
  DAT_0049 = bVar1 & 0xbf | 0x80;
  DAT_004e = 8;
  return;
}


