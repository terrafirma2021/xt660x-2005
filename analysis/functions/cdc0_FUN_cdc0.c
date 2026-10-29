/* Entry cdc0 */

ushort FUN_cdc0(ushort param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  undefined1 uVar8;
  
  bVar1 = DAT_0020;
  if (((bVar1 & 1) == 0) || (param_1 = DAT_0024, param_1 != 0xa55a)) {
    bVar1 = DAT_08ae;
    if ((~bVar1 & 0x40) != 0) {
      uVar2 = DAT_0ae4;
      DAT_0ae6 = uVar2;
      sVar7 = DAT_0ab0;
      DAT_0ae4 = sVar7;
      sVar4 = DAT_0ae6;
      sVar7 = sVar7 - sVar4;
      bVar1 = DAT_08a2;
      if ((~bVar1 & 1) == 0) {
        sVar7 = 0;
      }
      if ((char)((ushort)sVar7 >> 8) != '\0') {
        sVar7 = 0xff;
      }
      DAT_0ae3 = (char)sVar7;
      bVar1 = DAT_08a2;
      DAT_08a2 = bVar1 | 1;
      uVar2 = DAT_00d4;
      DAT_0e1c = uVar2;
      uVar2 = DAT_00d2;
      DAT_0e1a = uVar2;
      uVar3 = DAT_00d6;
      bVar1 = DAT_0e1c._0_1_;
      param_1 = CONCAT11(bVar1,(char)uVar2) & 0x20ff;
      if ((bVar1 & 0x20) != 0) {
        bVar1 = DAT_0e1c._0_1_;
        param_1 = CONCAT11(bVar1,(char)param_1) & 0xaff;
        if ((bVar1 & 10) == 0) {
          DAT_0e1e = (char)uVar3;
          DAT_0d10 = (char)uVar3;
          cVar5 = DAT_0dd5;
          if ((cVar5 == -0x80) || (bVar1 = DAT_0d06, (~bVar1 & 0x80) != 0)) {
            uVar8 = FUN_ce51(param_1);
          }
          else {
            uVar8 = FUN_d36c();
          }
          DAT_00d2._1_1_ = 8;
          return CONCAT11(8,uVar8);
        }
      }
    }
    bVar1 = DAT_08ae;
    DAT_08ae = bVar1 | 0x40;
    uVar8 = DAT_00d4._0_1_;
    uVar8 = DAT_00d6._1_1_;
    uVar6 = CONCAT11(0x26,(char)param_1);
    DAT_00d2._1_1_ = 0x26;
  }
  else {
    uVar2 = DAT_00d4;
    bVar1 = DAT_00d6._1_1_;
    uVar6 = (ushort)bVar1;
    DAT_00d2._1_1_ = 0;
    DAT_08a0 = 0x80;
    DAT_08ae = 0x40;
  }
  return uVar6;
}


