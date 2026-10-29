/* Entry 56d0 */

void FUN_56d0(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  
  cVar3 = DAT_0e3b;
  DAT_0e3b = cVar3 + '\x01';
  bVar2 = DAT_0e3b;
  if ((BYTE_ARRAY_56cb[bVar2 & 3] & 1) == 0) {
    bVar1 = DAT_0e28;
    DAT_0e28 = bVar1 & 0x7f;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 & 0xfb;
  }
  else {
    bVar1 = DAT_0e28;
    DAT_0e28 = bVar1 | 0x80;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 | 4;
  }
  if ((BYTE_ARRAY_56cb[bVar2 & 3] & 2) == 0) {
    bVar2 = DAT_0e28;
    DAT_0e28 = bVar2 & 0xbf;
    bVar2 = DAT_0008;
    DAT_0008 = bVar2 & 0xf7;
  }
  else {
    bVar2 = DAT_0e28;
    DAT_0e28 = bVar2 | 0x40;
    bVar2 = DAT_0008;
    DAT_0008 = bVar2 | 8;
  }
  DAT_0083 = 0x40;
  DAT_0084 = 99;
  DAT_0085 = 0x10;
  return;
}


