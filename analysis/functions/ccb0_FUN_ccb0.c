/* Entry ccb0 */

ushort FUN_ccb0(ushort param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined1 uVar4;
  
  bVar1 = DAT_0020;
  if (((((bVar1 & 1) == 0) || (param_1 = DAT_0024, param_1 != 0xa55a)) && ((DAT_08ae & 1) != 0)) &&
     ((~DAT_08ae & 0x20) != 0)) {
    if ((~DAT_08ae & 4) == 0) {
      DAT_08ae = DAT_08ae | 4;
    }
    else if ((DAT_08a4 & 2) == 0) {
      if ((DAT_08a4 & 4) == 0) {
        if ((DAT_08a4 & 8) == 0) {
          if ((DAT_08a4 & 0x10) == 0) {
            if ((DAT_08a4 & 0x20) == 0) {
              uVar2 = DAT_00d4;
              uVar4 = DAT_00d6._1_1_;
              DAT_00d6._1_1_ = DAT_08a6;
              param_1 = CONCAT11(0x60,DAT_08a6);
              DAT_08a4 = 0x60;
            }
            else {
              uVar3 = DAT_00d4;
              param_1 = uVar3 & 0x80ff;
              DAT_0e1c = uVar3;
              if ((uVar3 & 0x8000) != 0) {
                DAT_0e1c._0_1_ = (undefined1)(uVar3 >> 8);
                param_1 = CONCAT11(DAT_0e1c._0_1_,(char)param_1) & 0x40ff;
                if ((uVar3 & 0x4000) != 0) {
                  uVar2 = DAT_00d4;
                  uVar4 = DAT_00d6._1_1_;
                  param_1 = CONCAT11(uVar4,DAT_08a7);
                  DAT_00d6._1_1_ = DAT_08a7;
                  DAT_08a4 = DAT_08a4 | 0x10;
                }
              }
            }
          }
          else {
            uVar3 = DAT_00d4;
            param_1 = uVar3 & 0x80ff;
            DAT_0e1c = uVar3;
            if ((uVar3 & 0x8000) != 0) {
              DAT_0e1c._0_1_ = (undefined1)(uVar3 >> 8);
              param_1 = CONCAT11(DAT_0e1c._0_1_,(char)param_1) & 0x40ff;
              if ((uVar3 & 0x4000) != 0) {
                uVar2 = DAT_00d4;
                uVar4 = DAT_00d6._1_1_;
                param_1 = CONCAT11(uVar4,DAT_08a8);
                DAT_00d6._1_1_ = DAT_08a8;
                DAT_08a4 = DAT_08a4 | 8;
              }
            }
          }
        }
        else {
          uVar3 = DAT_00d4;
          param_1 = uVar3 & 0x80ff;
          DAT_0e1c = uVar3;
          if ((uVar3 & 0x8000) != 0) {
            DAT_0e1c._0_1_ = (undefined1)(uVar3 >> 8);
            param_1 = CONCAT11(DAT_0e1c._0_1_,(char)param_1) & 0x40ff;
            if ((uVar3 & 0x4000) != 0) {
              uVar2 = DAT_00d4;
              uVar4 = DAT_00d6._1_1_;
              param_1 = CONCAT11(uVar4,DAT_08a9);
              DAT_00d6._1_1_ = DAT_08a9;
              DAT_08a4 = DAT_08a4 | 4;
            }
          }
        }
      }
      else {
        uVar3 = DAT_00d4;
        param_1 = uVar3 & 0x80ff;
        DAT_0e1c = uVar3;
        if ((uVar3 & 0x8000) != 0) {
          DAT_0e1c._0_1_ = (undefined1)(uVar3 >> 8);
          param_1 = CONCAT11(DAT_0e1c._0_1_,(char)param_1) & 0x40ff;
          if ((uVar3 & 0x4000) != 0) {
            uVar2 = DAT_00d4;
            uVar4 = DAT_00d6._1_1_;
            param_1 = CONCAT11(uVar4,DAT_08aa);
            DAT_00d6._1_1_ = DAT_08aa;
            DAT_08a4 = DAT_08a4 | 2;
          }
        }
      }
    }
    else {
      DAT_0e1c = DAT_00d4;
      param_1 = DAT_0e1c & 0x80ff;
      if ((DAT_0e1c & 0x8000) != 0) {
        DAT_08a4 = 0x40;
        DAT_08ae = DAT_08ae & 0xda | 0x40;
        uVar2 = DAT_00d4;
        uVar4 = DAT_00d6._1_1_;
        param_1 = CONCAT11(0x26,uVar4);
        DAT_00d2._1_1_ = 0x26;
      }
    }
  }
  return param_1;
}


