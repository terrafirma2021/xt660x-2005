/* Entry ccb0 */

ushort FUN_ccb0(ushort param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  
  bVar1 = DAT_0020;
  if (((((bVar1 & 1) == 0) || (param_1 = DAT_0024, param_1 != 0xa55a)) &&
      (bVar1 = DAT_08ae, (bVar1 & 1) != 0)) && (bVar1 = DAT_08ae, (~bVar1 & 0x20) != 0)) {
    bVar1 = DAT_08ae;
    if ((~bVar1 & 4) == 0) {
      bVar1 = DAT_08ae;
      DAT_08ae = bVar1 | 4;
    }
    else {
      bVar1 = DAT_08a4;
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 8) == 0) {
            if ((bVar1 & 0x10) == 0) {
              if ((bVar1 & 0x20) == 0) {
                uVar2 = DAT_00d4;
                uVar4 = DAT_00d6._1_1_;
                uVar4 = DAT_08a6;
                DAT_00d6._1_1_ = uVar4;
                param_1 = CONCAT11(0x60,uVar4);
                DAT_08a4 = 0x60;
              }
              else {
                uVar3 = DAT_00d4;
                DAT_0e1c = uVar3;
                param_1 = uVar3 & 0x80ff;
                if ((uVar3 & 0x8000) != 0) {
                  bVar1 = DAT_0e1c._0_1_;
                  param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
                  if ((bVar1 & 0x40) != 0) {
                    uVar2 = DAT_00d4;
                    uVar4 = DAT_00d6._1_1_;
                    uVar5 = DAT_08a7;
                    param_1 = CONCAT11(uVar4,uVar5);
                    DAT_00d6._1_1_ = uVar5;
                    bVar1 = DAT_08a4;
                    DAT_08a4 = bVar1 | 0x10;
                  }
                }
              }
            }
            else {
              uVar3 = DAT_00d4;
              DAT_0e1c = uVar3;
              param_1 = uVar3 & 0x80ff;
              if ((uVar3 & 0x8000) != 0) {
                bVar1 = DAT_0e1c._0_1_;
                param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
                if ((bVar1 & 0x40) != 0) {
                  uVar2 = DAT_00d4;
                  uVar4 = DAT_00d6._1_1_;
                  uVar5 = DAT_08a8;
                  param_1 = CONCAT11(uVar4,uVar5);
                  DAT_00d6._1_1_ = uVar5;
                  bVar1 = DAT_08a4;
                  DAT_08a4 = bVar1 | 8;
                }
              }
            }
          }
          else {
            uVar3 = DAT_00d4;
            DAT_0e1c = uVar3;
            param_1 = uVar3 & 0x80ff;
            if ((uVar3 & 0x8000) != 0) {
              bVar1 = DAT_0e1c._0_1_;
              param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
              if ((bVar1 & 0x40) != 0) {
                uVar2 = DAT_00d4;
                uVar4 = DAT_00d6._1_1_;
                uVar5 = DAT_08a9;
                param_1 = CONCAT11(uVar4,uVar5);
                DAT_00d6._1_1_ = uVar5;
                bVar1 = DAT_08a4;
                DAT_08a4 = bVar1 | 4;
              }
            }
          }
        }
        else {
          uVar3 = DAT_00d4;
          DAT_0e1c = uVar3;
          param_1 = uVar3 & 0x80ff;
          if ((uVar3 & 0x8000) != 0) {
            bVar1 = DAT_0e1c._0_1_;
            param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
            if ((bVar1 & 0x40) != 0) {
              uVar2 = DAT_00d4;
              uVar4 = DAT_00d6._1_1_;
              uVar5 = DAT_08aa;
              param_1 = CONCAT11(uVar4,uVar5);
              DAT_00d6._1_1_ = uVar5;
              bVar1 = DAT_08a4;
              DAT_08a4 = bVar1 | 2;
            }
          }
        }
      }
      else {
        uVar3 = DAT_00d4;
        DAT_0e1c = uVar3;
        param_1 = uVar3 & 0x80ff;
        if ((uVar3 & 0x8000) != 0) {
          DAT_08a4 = 0x40;
          bVar1 = DAT_08ae;
          DAT_08ae = bVar1 & 0xdf;
          bVar1 = DAT_08ae;
          DAT_08ae = bVar1 | 0x40;
          bVar1 = DAT_08ae;
          DAT_08ae = bVar1 & 0xfe;
          bVar1 = DAT_08ae;
          DAT_08ae = bVar1 & 0xfb;
          uVar2 = DAT_00d4;
          uVar4 = DAT_00d6._1_1_;
          param_1 = CONCAT11(0x26,uVar4);
          DAT_00d2._1_1_ = 0x26;
        }
      }
    }
  }
  return param_1;
}


