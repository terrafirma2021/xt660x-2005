/* Entry 55b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_55b6(void)

{
  ushort uVar1;
  ushort uVar2;
  
  DAT_0dde._0_1_ = 1;
  RAM0x0ddf = DAT_0a96;
  uVar1 = DAT_0a96 + DAT_0a94;
  if (uVar1 < DAT_0a32) {
    RAM0x0de1 = uVar1;
    DAT_0aa2 = DAT_0a32 - uVar1;
    if (DAT_0db0 <= DAT_0aa2) {
      DAT_0925 = 6;
      return;
    }
    DAT_0aa2 = DAT_0aa2 + DAT_0a30;
    DAT_0925 = 5;
    return;
  }
  RAM0x0de1 = uVar1 - DAT_0a32;
  _DAT_0de3 = -DAT_0db0 - (uVar1 - DAT_0a32);
  do {
    uVar1 = _DAT_0de3 + DAT_0a30;
    uVar2 = uVar1;
    if (CARRY2(_DAT_0de3,DAT_0a30)) goto LAB_5628;
    DAT_0dde._0_1_ = DAT_0dde._0_1_ + 1;
    _DAT_0de3 = uVar1;
  } while (DAT_0dde._0_1_ < 9);
  uVar2 = uVar1 + DAT_0a30;
  if (!CARRY2(uVar1,DAT_0a30)) {
    uVar2 = 0;
  }
LAB_5628:
  DAT_0aa2 = uVar2 + DAT_0db0;
  if (DAT_0dde._0_1_ < 7) {
    DAT_0925 = 6 - DAT_0dde._0_1_ & 0x1f;
  }
  else {
    if (DAT_0dde._0_1_ == 7) {
      if (CARRY2(DAT_0aa2,DAT_0a30)) {
        DAT_0aa2 = DAT_0db0;
      }
      DAT_0aa2 = DAT_0aa2 + DAT_0a30;
    }
    DAT_0925 = 10;
  }
  return;
}


