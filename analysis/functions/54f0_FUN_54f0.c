/* Entry 54f0 */

void FUN_54f0(undefined2 param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  
  uVar3 = (undefined1)((ushort)param_1 >> 8);
  DAT_0dde._0_1_ = uVar3;
  DAT_0dde._1_1_ = uVar3;
  uVar4 = DAT_0a36;
  uVar4 = scale_u16_by_u8(uVar4,(byte *)((short)&DAT_0dde + 1));
  DAT_0de0 = uVar4;
  bVar2 = DAT_0a8b;
  uVar6 = DAT_0de0;
  uVar4 = bVar2 + uVar6;
  if (CARRY2((ushort)bVar2,uVar6)) {
    uVar4 = 0xffff;
  }
  sVar5 = uVar4 - DAT_4f9e;
  if (uVar4 < DAT_4f9e) {
    sVar5 = 0;
  }
  DAT_0de5 = sVar5;
  uVar4 = DAT_0a32;
  uVar6 = DAT_0de5;
  if ((uVar4 < uVar6) || (uVar1 = DAT_0db4, uVar4 - uVar6 < uVar1)) {
    uVar1 = DAT_0a32;
    uVar6 = DAT_0a30;
    uVar4 = uVar1 + uVar6;
    if (CARRY2(uVar1,uVar6)) {
      uVar4 = 0xffff;
    }
    uVar1 = DAT_0de5;
    uVar6 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      uVar1 = DAT_0a32;
      uVar6 = DAT_0a30;
      uVar4 = uVar1 + uVar6;
      if (CARRY2(uVar1,uVar6)) {
        uVar4 = 0xffff;
      }
      uVar1 = DAT_0a30;
      uVar6 = uVar4 + uVar1;
      if (CARRY2(uVar4,uVar1)) {
        uVar6 = 0xffff;
      }
      uVar1 = DAT_0de5;
      uVar4 = uVar6 - uVar1;
      if (uVar6 < uVar1) {
        uVar6 = DAT_0a32;
        uVar1 = DAT_0a36;
        uVar4 = uVar6 + uVar1;
        if (CARRY2(uVar6,uVar1)) {
          uVar4 = 0xffff;
        }
        uVar1 = DAT_0de5;
        uVar6 = uVar4 - uVar1;
        if ((uVar4 < uVar1) || (uVar4 = DAT_0db4, uVar6 < uVar4)) {
          uVar6 = DAT_0db4;
        }
        DAT_0de7 = uVar6;
        DAT_0de3 = 3;
      }
      else {
        uVar6 = DAT_0db4;
        if (uVar4 < uVar6) {
          sVar5 = DAT_0a30;
          DAT_0de7 = uVar4 + sVar5;
          DAT_0de3 = 3;
        }
        else {
          DAT_0de7 = uVar4;
          DAT_0de3 = 4;
        }
      }
    }
    else {
      uVar4 = DAT_0db4;
      if (uVar6 < uVar4) {
        sVar5 = DAT_0a30;
        DAT_0de7 = uVar6 + sVar5;
        DAT_0de3 = 4;
      }
      else {
        DAT_0de7 = uVar6;
        DAT_0de3 = 5;
      }
    }
  }
  else {
    DAT_0de7 = uVar4 - uVar6;
    DAT_0de3 = 6;
  }
  return;
}


