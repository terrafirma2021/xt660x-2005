/* Entry 707c */

void FUN_707c(void)

{
  if ((~DAT_0880 & 0x10) == 0) {
    DAT_0880 = DAT_0880 | 0x10;
    DAT_08d4 = DAT_08ca;
  }
  DAT_0bfc = DAT_08ca;
  DAT_08d2 = DAT_08ca;
  DAT_08c2 = 0;
  DAT_08c3 = 0x40;
  return;
}


