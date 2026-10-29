/* Entry 6259 */

void FUN_6259(void)

{
  if (DAT_0abe < DAT_4be0) {
    if (DAT_0abe < DAT_4bdf) {
      DAT_089a = DAT_089a & 0xf7;
    }
  }
  else {
    DAT_089a = DAT_089a | 8;
  }
  if (DAT_0abe < DAT_4be4) {
    if (DAT_0abe < DAT_4be3) {
      DAT_089a = DAT_089a & 0xfb;
    }
  }
  else {
    DAT_089a = DAT_089a | 4;
  }
  if (DAT_0abe < DAT_4be2) {
    if (DAT_0abe < DAT_4be1) {
      DAT_089a = DAT_089a & 0xfd;
    }
  }
  else {
    DAT_089a = DAT_089a | 2;
  }
  return;
}


