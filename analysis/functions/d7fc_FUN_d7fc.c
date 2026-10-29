/* Entry d7fc */

void FUN_d7fc(void)

{
  byte bVar1;
  
  bVar1 = DAT_0893;
  DAT_0893 = bVar1 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


