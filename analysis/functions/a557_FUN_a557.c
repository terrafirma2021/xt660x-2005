/* Entry a557 */

void FUN_a557(void)

{
  byte bVar1;
  
  bVar1 = DAT_0887;
  DAT_0887 = bVar1 & 0xdf;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 | 8;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 & 0xf7;
  return;
}


