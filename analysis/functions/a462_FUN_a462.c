/* Entry a462 */

void FUN_a462(void)

{
  if ((DAT_09cf & 0x10) != 0) {
    if (DAT_09da <= DAT_09d2) {
      if (DAT_09d2 != DAT_09da) {
        DAT_09de = 0;
        return;
      }
      DAT_09de = (DAT_09de + 1) - (0xfe < DAT_09de);
      if (DAT_09de < DAT_3214) {
        return;
      }
    }
    DAT_09cf = DAT_09cf & 0xef;
  }
  DAT_09de = 0;
  return;
}


