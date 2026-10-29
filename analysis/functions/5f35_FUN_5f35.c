/* Entry 5f35 */

void FUN_5f35(void)

{
  DAT_0d37._0_1_ = DAT_0d1a;
  if (((DAT_0d1a == DAT_0d1d) || (DAT_0d1a == DAT_0d20)) ||
     (DAT_0d37._0_1_ = DAT_0d1d, DAT_0d1d == DAT_0d20)) {
    if (((DAT_0d1b == DAT_0d1e) || (DAT_0d1b == DAT_0d21)) || (DAT_0d1e == DAT_0d21)) {
      do {
        if ((DAT_0d1c == DAT_0d1f) || (DAT_0d1c == DAT_0d22)) {
          DAT_0d39 = DAT_0d1c;
          goto LAB_5f9e;
        }
      } while (DAT_0d1f == DAT_0d22);
      DAT_0d37._0_1_ = -1;
      DAT_0d39 = -1;
    }
    else {
      DAT_0d37._0_1_ = -1;
      DAT_0d39 = -1;
    }
  }
  else {
    DAT_0d37._0_1_ = -1;
    DAT_0d39 = -1;
  }
LAB_5f9e:
  DAT_0d08 = DAT_0d08 | 0x80;
  DAT_0d37._1_1_ = 0;
  return;
}


