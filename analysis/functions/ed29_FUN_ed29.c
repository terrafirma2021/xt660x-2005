/* Entry ed29 */

void FUN_ed29(void)

{
  if ((DAT_0880 & 0x44) == 0) {
    FUN_ee78();
    if ((DAT_0c04 == 6) &&
       (((~DAT_088d & 0x20) != 0 || ((0x40 < DAT_0a82 && ((DAT_0a92 & 8) != 0)))))) {
      FUN_edc3();
    }
    else if ((2 < DAT_0c04) && (DAT_0c04 < 7)) {
      FUN_ef6d();
    }
    return;
  }
  if ((~DAT_0880 & 0x40) == 0) {
    FUN_ee78();
    FUN_edc3();
    return;
  }
  FUN_ee19();
  FUN_edc3();
  return;
}


