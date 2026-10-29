/* Entry d804 */

void FUN_d804(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0x7f;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 | 0xc0;
  DAT_004e = 0x80;
  return;
}


