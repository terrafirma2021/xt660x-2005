/* Entry bc1b */

void FUN_bc1b(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_0891;
  if (((~bVar1 & 2) == 0) && (cVar2 = DAT_0bd2, cVar2 == '\0')) {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xef;
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xbf;
  }
  return;
}


