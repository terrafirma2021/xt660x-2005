/* Entry 8691 */

void FUN_8691(void)

{
  byte bVar1;
  
  bVar1 = DAT_0881;
  DAT_0881 = bVar1 & 0xfb;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 | 0x80;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 & 0x7f;
  return;
}


