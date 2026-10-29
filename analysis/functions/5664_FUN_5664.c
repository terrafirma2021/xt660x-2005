/* Entry 5664 */

void FUN_5664(void)

{
  short sVar1;
  byte bVar2;
  
  if (((((~DAT_088c & 2) == 0) && ((~DAT_089a & 2) == 0)) && (bVar2 = DAT_00e1, (bVar2 & 8) == 0))
     && ((DAT_0c03 & 0x1f) == DAT_0925)) {
    sVar1 = DAT_0044;
    DAT_0dde = sVar1 + DAT_4f20;
    sVar1 = (DAT_0af0 + DAT_0aa2) - DAT_0dde;
    DAT_0b7a = DAT_0dde;
    if (-1 < sVar1) {
      DAT_0b7a = sVar1 + DAT_0dde;
    }
    DAT_0056 = DAT_0b7a;
    bVar2 = DAT_0049;
    DAT_0049 = bVar2 | 0xc0;
    DAT_004e = 8;
    bVar2 = DAT_004c;
    DAT_004c = bVar2 | 8;
    DAT_0a92 = DAT_0a92 | 8;
  }
  return;
}


