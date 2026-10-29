/* Entry b78f */

void FUN_b78f(void)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = DAT_0891;
  if ((~bVar1 & 2) == 0) {
    bVar1 = DAT_0be8;
    DAT_0be8 = bVar1 & 0xbf;
    bVar1 = DAT_0be9;
    DAT_0be9 = bVar1 | 0x40;
    uVar2 = DAT_0b9a;
    FUN_57e9(uVar2,&DAT_0a30);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      bVar1 = DAT_0be9;
      DAT_0be9 = bVar1 & 0xbf;
      bVar1 = DAT_0891;
      DAT_0891 = bVar1 & 0xfd;
    }
  }
  return;
}


