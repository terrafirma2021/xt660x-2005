/* Entry 56d0 */

void FUN_56d0(void)

{
  byte bVar1;
  
  DAT_0e3b = DAT_0e3b + 1;
  if (((&DAT_56cb)[DAT_0e3b & 3] & 1) == 0) {
    DAT_0e28 = DAT_0e28 & 0x7f;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 & 0xfb;
  }
  else {
    DAT_0e28 = DAT_0e28 | 0x80;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 | 4;
  }
  if (((&DAT_56cb)[DAT_0e3b & 3] & 2) == 0) {
    DAT_0e28 = DAT_0e28 & 0xbf;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 & 0xf7;
  }
  else {
    DAT_0e28 = DAT_0e28 | 0x40;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 | 8;
  }
  DAT_0083 = 0x40;
  DAT_0084 = 99;
  DAT_0085 = 0x10;
  return;
}


