/* Entry 55b6 */

void FUN_55b6(void)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  
  DAT_0dde._0_1_ = 1;
  sVar2 = DAT_0a96;
  RAM0ddf = sVar2;
  sVar6 = DAT_0a94;
  uVar1 = sVar2 + sVar6;
  uVar3 = DAT_0a32;
  if (uVar1 < uVar3) {
    RAM0de1 = uVar1;
    sVar6 = DAT_0a32;
    sVar2 = RAM0de1;
    uVar1 = sVar6 - sVar2;
    uVar3 = DAT_0db0;
    if (uVar3 <= uVar1) {
      DAT_0aa2 = uVar1;
      DAT_0925 = 6;
      return;
    }
    sVar6 = DAT_0a30;
    DAT_0aa2 = uVar1 + sVar6;
    DAT_0925 = 5;
    return;
  }
  sVar6 = DAT_0a32;
  RAM0de1 = uVar1 - sVar6;
  sVar2 = RAM0de1;
  sVar6 = DAT_0db0;
  RAM0de3 = -sVar6 - sVar2;
  do {
    uVar3 = RAM0de3;
    uVar1 = DAT_0a30;
    sVar6 = uVar3 + uVar1;
    if (CARRY2(uVar3,uVar1)) goto LAB_5628;
    RAM0de3 = sVar6;
    cVar4 = DAT_0dde._0_1_;
    DAT_0dde._0_1_ = cVar4 + 1U;
  } while ((byte)(cVar4 + 1U) < 9);
  uVar3 = RAM0de3;
  uVar1 = DAT_0a30;
  sVar6 = uVar3 + uVar1;
  if (!CARRY2(uVar3,uVar1)) {
    sVar6 = 0;
  }
LAB_5628:
  sVar2 = DAT_0db0;
  DAT_0aa2 = sVar6 + sVar2;
  bVar5 = DAT_0dde._0_1_;
  if (bVar5 < 7) {
    cVar4 = DAT_0dde._0_1_;
    DAT_0925 = 6U - cVar4 & 0x1f;
  }
  else {
    if (bVar5 == 7) {
      uVar3 = DAT_0aa2;
      uVar1 = DAT_0a30;
      sVar6 = uVar3 + uVar1;
      if (CARRY2(uVar3,uVar1)) {
        sVar6 = DAT_0db0;
        sVar2 = DAT_0a30;
        sVar6 = sVar6 + sVar2;
      }
      DAT_0aa2 = sVar6;
    }
    DAT_0925 = 10;
  }
  return;
}


