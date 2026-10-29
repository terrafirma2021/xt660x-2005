/* Entry c199 */

void FUN_c199(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 | 0x10;
  bVar1 = DAT_08b6;
  if (((bVar1 & 2) == 0) ||
     (((cVar2 = DAT_0d87, cVar2 == '\t' && (bVar1 = DAT_0896._0_1_, (bVar1 & 0x10) == 0)) ||
      (cVar2 = DAT_0bca, cVar2 != '\0')))) {
    DAT_0bcc = 0;
  }
  else {
    bVar1 = DAT_0bcc;
    DAT_0bcc = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0887;
  DAT_0887 = bVar1 & 0xbf;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 & 0xef;
  return;
}


