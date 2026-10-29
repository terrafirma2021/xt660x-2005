/* Entry 6299 */

void FUN_6299(void)

{
  byte bVar1;
  
  bVar1 = DAT_08ae;
  if ((bVar1 & 2) != 0) {
    FUN_62aa();
    bVar1 = DAT_08ae;
    DAT_08ae = bVar1 & 0xfd;
    bVar1 = DAT_08ae;
    DAT_08ae = bVar1 | 1;
  }
  return;
}


