/* Entry 707c */

void FUN_707c(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  
  bVar1 = DAT_0880;
  if ((~bVar1 & 0x10) != 0) {
    bVar1 = DAT_0880;
    DAT_0880 = bVar1 | 0x10;
    uVar3 = DAT_08ca;
    DAT_08d4 = uVar3;
  }
  uVar3 = DAT_08ca;
  DAT_0bfc = uVar3;
  uVar2 = DAT_08a0;
  DAT_08d2 = uVar3;
  DAT_08c2 = 0;
  DAT_08c3 = 0x40;
  return;
}


