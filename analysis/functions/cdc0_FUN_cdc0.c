/* Entry cdc0 */

ushort FUN_cdc0(ushort param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  undefined1 uVar5;
  
  sVar4 = DAT_0ae4;
  bVar1 = DAT_0020;
  if (((bVar1 & 1) == 0) || (param_1 = DAT_0024, param_1 != 0xa55a)) {
    uVar3 = DAT_0e1c;
    if ((~DAT_08ae & 0x40) != 0) {
      DAT_0ae6 = DAT_0ae4;
      DAT_0ae4 = DAT_0ab0;
      sVar4 = DAT_0ab0 - sVar4;
      if ((~DAT_08a2 & 1) == 0) {
        sVar4 = 0;
      }
      if ((char)((ushort)sVar4 >> 8) != '\0') {
        sVar4 = 0xff;
      }
      DAT_0ae3 = (undefined1)sVar4;
      DAT_08a2 = DAT_08a2 | 1;
      uVar3 = DAT_00d4;
      DAT_0e1a = DAT_00d2;
      uVar2 = DAT_00d6;
      DAT_0e1c._0_1_ = (undefined1)(uVar3 >> 8);
      param_1 = CONCAT11(DAT_0e1c._0_1_,(char)DAT_0e1a) & 0x20ff;
      if (((uVar3 & 0x2000) != 0) &&
         (param_1 = CONCAT11(DAT_0e1c._0_1_,(char)param_1) & 0xaff, (uVar3 & 0xa00) == 0)) {
        DAT_0d10 = (undefined1)uVar2;
        DAT_0e1c = uVar3;
        DAT_0e1e = DAT_0d10;
        if ((DAT_0dd5 == -0x80) || ((~DAT_0d06 & 0x80) != 0)) {
          uVar5 = FUN_ce51(param_1);
        }
        else {
          uVar5 = FUN_d36c();
        }
        DAT_00d2._1_1_ = 8;
        return CONCAT11(8,uVar5);
      }
    }
    DAT_0e1c = uVar3;
    DAT_08ae = DAT_08ae | 0x40;
    uVar5 = DAT_00d4._0_1_;
    uVar5 = DAT_00d6._1_1_;
    uVar3 = CONCAT11(0x26,(char)param_1);
    DAT_00d2._1_1_ = 0x26;
  }
  else {
    uVar2 = DAT_00d4;
    bVar1 = DAT_00d6._1_1_;
    uVar3 = (ushort)bVar1;
    DAT_00d2._1_1_ = 0;
    DAT_08a0 = 0x80;
    DAT_08ae = 0x40;
  }
  return uVar3;
}


