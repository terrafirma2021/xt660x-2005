/* Entry ac7f */

void FUN_ac7f(void)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  
  bVar4 = DAT_088e;
  DAT_088e = bVar4 & 0x7f;
  bVar4 = DAT_08bf;
  DAT_08bf = bVar4 | 2;
  bVar4 = DAT_08a0;
  if ((~bVar4 & 4) == 0) {
    bVar4 = DAT_08b2;
    if ((~bVar4 & 0x80) == 0) {
      bVar4 = DAT_0d08;
      if (((((~bVar4 & 1) != 0) || (bVar4 = DAT_0884, (~bVar4 & 2) != 0)) ||
          (bVar4 = DAT_0884, (~bVar4 & 1) != 0)) ||
         (((cVar1 = DAT_0dd9, cVar1 != -0x80 && (bVar4 = DAT_08b0, (~bVar4 & 8) != 0)) ||
          (bVar4 = DAT_08b1, (~bVar4 & 0x10) != 0)))) {
        DAT_0afb = 0xff;
        DAT_0afc = 0xff;
        goto LAB_ace6;
      }
      bVar4 = DAT_0afb;
      if (bVar4 < DAT_4e8f) {
        bVar4 = DAT_0afb;
        DAT_0afb = (bVar4 + 1) - (0xfe < bVar4);
      }
      else {
        bVar4 = DAT_0afc;
        if (DAT_4e8e <= bVar4) goto LAB_ace6;
      }
      bVar4 = DAT_0000;
      DAT_0000 = bVar4 | 4;
    }
    else {
LAB_ace6:
      bVar4 = DAT_0000;
      DAT_0000 = bVar4 & 0xfb;
    }
    bVar4 = DAT_0afc;
    DAT_0afc = (bVar4 + 1) - (0xfe < bVar4);
  }
  bVar4 = DAT_08a0;
  if ((bVar4 & 4) == 0) {
LAB_ad00:
    cVar1 = DAT_0d87;
    if ((cVar1 == '\t') || (bVar4 = DAT_0900._0_1_, bVar4 <= DAT_4e1c)) {
      bVar4 = DAT_00f0;
      DAT_00f0 = bVar4 & 0xfe;
    }
    else if (DAT_4e1d <= bVar4) {
      bVar4 = DAT_00f0;
      DAT_00f0 = bVar4 | 1;
    }
  }
  else {
    cVar1 = DAT_0bdd;
    cVar2 = DAT_0d4d;
    if (cVar1 != cVar2) goto LAB_ad00;
  }
  bVar4 = DAT_08af;
  if ((((((~bVar4 & 8) != 0) || (bVar4 = DAT_08af, (~bVar4 & 4) != 0)) ||
       (bVar4 = DAT_08af, (~bVar4 & 0x20) != 0)) ||
      ((bVar4 = DAT_08af, (~bVar4 & 0x10) != 0 || (bVar4 = DAT_08b1, (bVar4 & 8) != 0)))) ||
     (bVar4 = DAT_08e8._0_1_, DAT_370e < bVar4)) goto LAB_ada9;
  bVar4 = DAT_0b80;
  if ((~bVar4 & 1) == 0) {
    bVar4 = DAT_0b80;
    if ((bVar4 & 4) == 0) {
      bVar4 = DAT_0b80;
      if ((bVar4 & 0x10) == 0) {
        bVar4 = DAT_0b80;
        if ((~bVar4 & 0x40) == 0) {
          DAT_0b8a = 0;
          cVar1 = DAT_0898;
          if (cVar1 == DAT_4e8d) {
            bVar4 = DAT_0abe;
            if ((bVar4 < DAT_36ef) || (DAT_36f0 < bVar4)) {
              bVar4 = DAT_0b81;
              if ((bVar4 & 8) != 0) {
                uVar3 = DAT_0b82;
                if ((uVar3 < DAT_36f2) || (DAT_36f4 < uVar3)) goto LAB_ada9;
                bVar4 = DAT_0b80;
                DAT_0b80 = bVar4 | 0x40;
                DAT_0b84 = 0;
              }
            }
            else {
              bVar4 = DAT_0b81;
              DAT_0b81 = bVar4 | 8;
              uVar3 = DAT_0b82;
              bVar4 = (byte)(uVar3 + 1);
              DAT_0b82 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                                  bVar4 - (0xfffe < uVar3));
            }
          }
          else {
LAB_ada9:
            DAT_0b80 = 0;
            DAT_0b81 = 0;
            DAT_0b82 = 0;
            DAT_0b84 = 0;
            DAT_0b86 = 0;
            DAT_0b88 = 0;
            DAT_0b8a = 0;
          }
        }
        else {
          uVar3 = DAT_0b8a;
          bVar4 = (byte)(uVar3 + 1);
          uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                           bVar4 - (0xfffe < uVar3));
          DAT_0b8a = uVar3;
          if (DAT_3710 < uVar3) goto LAB_ada9;
          bVar4 = DAT_0b80;
          if ((~bVar4 & 0x20) == 0) {
            uVar3 = DAT_0b84;
            bVar4 = (byte)(uVar3 + 1);
            uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                             bVar4 - (0xfffe < uVar3));
            DAT_0b84 = uVar3;
            if (uVar3 < DAT_36f6) goto LAB_af24;
            bVar4 = DAT_0b80;
            DAT_0b80 = bVar4 | 0x20;
            DAT_0b84 = 0;
          }
          bVar4 = DAT_0abe;
          if ((bVar4 < DAT_36f8) || (DAT_36f9 < bVar4)) {
            bVar4 = DAT_0b81;
            if ((bVar4 & 4) != 0) {
              uVar3 = DAT_0b84;
              if ((uVar3 < DAT_36fa) || (DAT_36fc < uVar3)) goto LAB_ada9;
              bVar4 = DAT_0b80;
              DAT_0b80 = bVar4 | 0x10;
              DAT_0b86 = 0;
            }
          }
          else {
            bVar4 = DAT_0b81;
            DAT_0b81 = bVar4 | 4;
            uVar3 = DAT_0b84;
            bVar4 = (byte)(uVar3 + 1);
            DAT_0b84 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                                bVar4 - (0xfffe < uVar3));
          }
        }
      }
      else {
        uVar3 = DAT_0b8a;
        bVar4 = (byte)(uVar3 + 1);
        uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                         bVar4 - (0xfffe < uVar3));
        DAT_0b8a = uVar3;
        if (DAT_3710 < uVar3) goto LAB_ada9;
        bVar4 = DAT_0b80;
        if ((~bVar4 & 8) == 0) {
          uVar3 = DAT_0b86;
          bVar4 = (byte)(uVar3 + 1);
          uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                           bVar4 - (0xfffe < uVar3));
          DAT_0b86 = uVar3;
          if (uVar3 < DAT_36fe) goto LAB_af24;
          bVar4 = DAT_0b80;
          DAT_0b80 = bVar4 | 8;
          DAT_0b86 = 0;
        }
        bVar4 = DAT_0abe;
        if ((bVar4 < DAT_3700) || (DAT_3701 < bVar4)) {
          bVar4 = DAT_0b81;
          if ((bVar4 & 2) != 0) {
            uVar3 = DAT_0b86;
            if ((uVar3 < DAT_3702) || (DAT_3704 < uVar3)) goto LAB_ada9;
            bVar4 = DAT_0b80;
            DAT_0b80 = bVar4 | 4;
            DAT_0b88 = 0;
          }
        }
        else {
          bVar4 = DAT_0b81;
          DAT_0b81 = bVar4 | 2;
          uVar3 = DAT_0b86;
          bVar4 = (byte)(uVar3 + 1);
          DAT_0b86 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                              bVar4 - (0xfffe < uVar3));
        }
      }
    }
    else {
      uVar3 = DAT_0b8a;
      bVar4 = (byte)(uVar3 + 1);
      uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),bVar4 - (0xfffe < uVar3))
      ;
      DAT_0b8a = uVar3;
      if (DAT_3710 < uVar3) goto LAB_ada9;
      bVar4 = DAT_0b80;
      if ((~bVar4 & 2) == 0) {
        uVar3 = DAT_0b88;
        bVar4 = (byte)(uVar3 + 1);
        uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                         bVar4 - (0xfffe < uVar3));
        DAT_0b88 = uVar3;
        if (uVar3 < DAT_3706) goto LAB_af24;
        bVar4 = DAT_0b80;
        DAT_0b80 = bVar4 | 2;
        DAT_0b88 = 0;
      }
      bVar4 = DAT_0abe;
      if ((bVar4 < DAT_3708) || (DAT_3709 < bVar4)) {
        bVar4 = DAT_0b81;
        if ((bVar4 & 1) != 0) {
          uVar3 = DAT_0b88;
          if ((uVar3 < DAT_370a) || (DAT_370c < uVar3)) goto LAB_ada9;
          bVar4 = DAT_0b80;
          DAT_0b80 = bVar4 | 1;
        }
      }
      else {
        bVar4 = DAT_0b81;
        DAT_0b81 = bVar4 | 1;
        uVar3 = DAT_0b88;
        bVar4 = (byte)(uVar3 + 1);
        DAT_0b88 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                            bVar4 - (0xfffe < uVar3));
      }
    }
  }
LAB_af24:
  bVar4 = DAT_0893;
  if ((bVar4 & 0x20) == 0) goto LAB_af92;
  cVar1 = DAT_0bdd;
  cVar2 = DAT_0d46;
  if ((((cVar1 != cVar2) && (cVar2 = DAT_0d47, cVar1 != cVar2)) &&
      (cVar2 = DAT_0d48, cVar1 != cVar2)) &&
     ((cVar2 = DAT_0d49, cVar1 != cVar2 && (cVar2 = DAT_0d4a, cVar1 != cVar2)))) {
    cVar2 = DAT_0d4b;
    if ((cVar1 == cVar2) || (cVar2 = DAT_0d4c, cVar1 == cVar2)) {
      bVar4 = DAT_0be2;
      bVar4 = (bVar4 + 1) - (0xfe < bVar4);
      DAT_0be2 = bVar4;
      if (DAT_4f0c < bVar4) {
        bVar4 = DAT_0893;
        DAT_0893 = bVar4 & 0xdf;
        bVar4 = DAT_0893;
        DAT_0893 = bVar4 | 0x10;
        DAT_0be4 = DAT_4f0e;
      }
      goto LAB_af92;
    }
    cVar2 = DAT_0d4d;
    if (cVar1 != cVar2) goto LAB_af92;
  }
  bVar4 = DAT_0be2;
  bVar4 = (bVar4 + 1) - (0xfe < bVar4);
  DAT_0be2 = bVar4;
  if (DAT_4f0c < bVar4) {
    bVar4 = DAT_0893;
    DAT_0893 = bVar4 & 0xdf;
    bVar4 = DAT_0893;
    DAT_0893 = bVar4 | 0x10;
    DAT_0be4 = DAT_4f0d;
  }
LAB_af92:
  bVar4 = DAT_0893;
  if ((bVar4 & 0x10) != 0) {
    cVar1 = DAT_0bdd;
    cVar2 = DAT_0d46;
    if (cVar1 == cVar2) {
      FUN_b900();
    }
    else {
      cVar2 = DAT_0d47;
      if (cVar1 == cVar2) {
        FUN_b97f();
      }
      else {
        cVar2 = DAT_0d48;
        if (cVar1 == cVar2) {
          FUN_ba06();
        }
        else {
          cVar2 = DAT_0d49;
          if (cVar1 == cVar2) {
            FUN_ba8d();
          }
          else {
            cVar2 = DAT_0d4a;
            if (cVar1 == cVar2) {
              FUN_baed();
            }
            else {
              cVar2 = DAT_0d4b;
              if (cVar1 == cVar2) {
                FUN_bb45();
              }
              else {
                cVar2 = DAT_0d4c;
                if (cVar1 == cVar2) {
                  FUN_bba1();
                }
                else {
                  cVar2 = DAT_0d4d;
                  if (cVar1 == cVar2) {
                    FUN_bbfd();
                  }
                  else {
                    cVar2 = DAT_0d50;
                    if (cVar1 == cVar2) {
                      FUN_bc1b();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar4 = DAT_08bf;
  DAT_08bf = bVar4 & 0xfd;
  return;
}


