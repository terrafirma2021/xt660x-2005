/* Entry 6299 */

void FUN_6299(void)

{
  if ((DAT_08ae & 2) != 0) {
    FUN_62aa();
    DAT_08ae = DAT_08ae & 0xfd | 1;
  }
  return;
}


