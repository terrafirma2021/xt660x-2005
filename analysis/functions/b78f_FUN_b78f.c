/* Entry b78f */

void FUN_b78f(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0be8 = DAT_0be8 & 0xbf;
    DAT_0be9 = DAT_0be9 | 0x40;
    FUN_57e9(DAT_0b9a,&DAT_0a30);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0be9 = DAT_0be9 & 0xbf;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


