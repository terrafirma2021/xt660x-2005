/* Entry ed29 */

void FUN_ed29(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_0880;
  if ((bVar1 & 0x44) == 0) {
    FUN_ee78();
    bVar1 = DAT_0c04;
    if ((bVar1 == 6) &&
       ((bVar2 = DAT_088d, (~bVar2 & 0x20) != 0 ||
        ((bVar2 = DAT_0a82, 0x40 < bVar2 && (bVar2 = DAT_0a92, (bVar2 & 8) != 0)))))) {
      FUN_edc3();
    }
    else if ((2 < bVar1) && (bVar1 < 7)) {
      FUN_ef6d();
    }
    return;
  }
  bVar1 = DAT_0880;
  if ((~bVar1 & 0x40) == 0) {
    FUN_ee78();
    FUN_edc3();
    return;
  }
  FUN_ee19();
  FUN_edc3();
  return;
}


