/* Entry 54f0 */

void FUN_54f0(undefined2 param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  DAT_0dde._0_1_ = (undefined1)((ushort)param_1 >> 8);
  DAT_0dde._1_1_ = DAT_0dde._0_1_;
  DAT_0de0 = scale_u16_by_u8();
  uVar1 = DAT_0a8b + DAT_0de0;
  if (CARRY2((ushort)DAT_0a8b,DAT_0de0)) {
    uVar1 = 0xffff;
  }
  DAT_0de5 = uVar1 - DAT_4f9e;
  if (uVar1 < DAT_4f9e) {
    DAT_0de5 = 0;
  }
  DAT_0de7 = DAT_0a32 - DAT_0de5;
  if ((DAT_0a32 < DAT_0de5) || (DAT_0de7 < DAT_0db4)) {
    uVar1 = DAT_0a32 + DAT_0a30;
    if (CARRY2(DAT_0a32,DAT_0a30)) {
      uVar1 = 0xffff;
    }
    DAT_0de7 = uVar1 - DAT_0de5;
    if (uVar1 < DAT_0de5) {
      uVar1 = DAT_0a32 + DAT_0a30;
      if (CARRY2(DAT_0a32,DAT_0a30)) {
        uVar1 = 0xffff;
      }
      uVar2 = uVar1 + DAT_0a30;
      if (CARRY2(uVar1,DAT_0a30)) {
        uVar2 = 0xffff;
      }
      DAT_0de7 = uVar2 - DAT_0de5;
      if (uVar2 < DAT_0de5) {
        uVar1 = DAT_0a32 + DAT_0a36;
        if (CARRY2(DAT_0a32,DAT_0a36)) {
          uVar1 = 0xffff;
        }
        if ((uVar1 < DAT_0de5) || (DAT_0de7 = uVar1 - DAT_0de5, uVar1 - DAT_0de5 < DAT_0db4)) {
          DAT_0de7 = DAT_0db4;
        }
        DAT_0de3 = 3;
      }
      else if (DAT_0de7 < DAT_0db4) {
        DAT_0de7 = DAT_0de7 + DAT_0a30;
        DAT_0de3 = 3;
      }
      else {
        DAT_0de3 = 4;
      }
    }
    else if (DAT_0de7 < DAT_0db4) {
      DAT_0de7 = DAT_0de7 + DAT_0a30;
      DAT_0de3 = 4;
    }
    else {
      DAT_0de3 = 5;
    }
  }
  else {
    DAT_0de3 = 6;
  }
  return;
}


