/* Entry 6259 */

void FUN_6259(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = DAT_0abe;
  if (bVar2 < DAT_4be0) {
    if (bVar2 < DAT_4bdf) {
      bVar1 = DAT_089a;
      DAT_089a = bVar1 & 0xf7;
    }
  }
  else {
    bVar1 = DAT_089a;
    DAT_089a = bVar1 | 8;
  }
  if (bVar2 < DAT_4be4) {
    if (bVar2 < DAT_4be3) {
      bVar1 = DAT_089a;
      DAT_089a = bVar1 & 0xfb;
    }
  }
  else {
    bVar1 = DAT_089a;
    DAT_089a = bVar1 | 4;
  }
  if (bVar2 < DAT_4be2) {
    if (bVar2 < DAT_4be1) {
      bVar2 = DAT_089a;
      DAT_089a = bVar2 & 0xfd;
    }
  }
  else {
    bVar2 = DAT_089a;
    DAT_089a = bVar2 | 2;
  }
  return;
}


