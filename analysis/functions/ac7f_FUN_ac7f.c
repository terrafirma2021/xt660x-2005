/* Entry ac7f */

void FUN_ac7f(void)

{
  byte bVar1;
  
  DAT_088e = DAT_088e & 0x7f;
  DAT_08bf = DAT_08bf | 2;
  if ((~DAT_08a0 & 4) == 0) {
    if ((~DAT_08b2 & 0x80) == 0) {
      if (((((~DAT_0d08 & 1) != 0) || ((~DAT_0884 & 2) != 0)) || ((~DAT_0884 & 1) != 0)) ||
         (((DAT_0dd9 != -0x80 && ((~DAT_08b0 & 8) != 0)) || ((~DAT_08b1 & 0x10) != 0)))) {
        DAT_0afb = 0xff;
        DAT_0afc = 0xff;
        goto LAB_ace6;
      }
      if (DAT_0afb < DAT_4e8f) {
        DAT_0afb = (DAT_0afb + 1) - (0xfe < DAT_0afb);
      }
      else if (DAT_4e8e <= DAT_0afc) goto LAB_ace6;
      bVar1 = DAT_0000;
      DAT_0000 = bVar1 | 4;
    }
    else {
LAB_ace6:
      bVar1 = DAT_0000;
      DAT_0000 = bVar1 & 0xfb;
    }
    DAT_0afc = (DAT_0afc + 1) - (0xfe < DAT_0afc);
  }
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d4d)) {
    if ((DAT_0d87 == '\t') || (DAT_0900._0_1_ <= DAT_4e1c)) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xfe;
    }
    else if (DAT_4e1d <= DAT_0900._0_1_) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 1;
    }
  }
  if ((((((~DAT_08af & 8) != 0) || ((~DAT_08af & 4) != 0)) || ((~DAT_08af & 0x20) != 0)) ||
      (((~DAT_08af & 0x10) != 0 || ((DAT_08b1 & 8) != 0)))) || (DAT_370e < DAT_08e8._0_1_))
  goto LAB_ada9;
  if ((~DAT_0b80 & 1) == 0) {
    if ((DAT_0b80 & 4) == 0) {
      if ((DAT_0b80 & 0x10) == 0) {
        if ((~DAT_0b80 & 0x40) == 0) {
          DAT_0b8a = 0;
          if (DAT_0898 == DAT_4e8d) {
            if ((DAT_0abe < DAT_36ef) || (DAT_36f0 < DAT_0abe)) {
              if ((DAT_0b81 & 8) != 0) {
                if ((DAT_0b82 < DAT_36f2) || (DAT_36f4 < DAT_0b82)) goto LAB_ada9;
                DAT_0b80 = DAT_0b80 | 0x40;
                DAT_0b84 = 0;
              }
            }
            else {
              DAT_0b81 = DAT_0b81 | 8;
              DAT_0b82 = CONCAT11((char)(DAT_0b82 + 1 >> 8),
                                  (char)(DAT_0b82 + 1) - (0xfffe < DAT_0b82));
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
          DAT_0b8a = CONCAT11((char)(DAT_0b8a + 1 >> 8),(char)(DAT_0b8a + 1) - (0xfffe < DAT_0b8a));
          if (DAT_3710 < DAT_0b8a) goto LAB_ada9;
          if ((~DAT_0b80 & 0x20) == 0) {
            DAT_0b84 = CONCAT11((char)(DAT_0b84 + 1 >> 8),(char)(DAT_0b84 + 1) - (0xfffe < DAT_0b84)
                               );
            if (DAT_0b84 < DAT_36f6) goto LAB_af24;
            DAT_0b80 = DAT_0b80 | 0x20;
            DAT_0b84 = 0;
          }
          if ((DAT_0abe < DAT_36f8) || (DAT_36f9 < DAT_0abe)) {
            if ((DAT_0b81 & 4) != 0) {
              if ((DAT_0b84 < DAT_36fa) || (DAT_36fc < DAT_0b84)) goto LAB_ada9;
              DAT_0b80 = DAT_0b80 | 0x10;
              DAT_0b86 = 0;
            }
          }
          else {
            DAT_0b81 = DAT_0b81 | 4;
            DAT_0b84 = CONCAT11((char)(DAT_0b84 + 1 >> 8),(char)(DAT_0b84 + 1) - (0xfffe < DAT_0b84)
                               );
          }
        }
      }
      else {
        DAT_0b8a = CONCAT11((char)(DAT_0b8a + 1 >> 8),(char)(DAT_0b8a + 1) - (0xfffe < DAT_0b8a));
        if (DAT_3710 < DAT_0b8a) goto LAB_ada9;
        if ((~DAT_0b80 & 8) == 0) {
          DAT_0b86 = CONCAT11((char)(DAT_0b86 + 1 >> 8),(char)(DAT_0b86 + 1) - (0xfffe < DAT_0b86));
          if (DAT_0b86 < DAT_36fe) goto LAB_af24;
          DAT_0b80 = DAT_0b80 | 8;
          DAT_0b86 = 0;
        }
        if ((DAT_0abe < DAT_3700) || (DAT_3701 < DAT_0abe)) {
          if ((DAT_0b81 & 2) != 0) {
            if ((DAT_0b86 < DAT_3702) || (DAT_3704 < DAT_0b86)) goto LAB_ada9;
            DAT_0b80 = DAT_0b80 | 4;
            DAT_0b88 = 0;
          }
        }
        else {
          DAT_0b81 = DAT_0b81 | 2;
          DAT_0b86 = CONCAT11((char)(DAT_0b86 + 1 >> 8),(char)(DAT_0b86 + 1) - (0xfffe < DAT_0b86));
        }
      }
    }
    else {
      DAT_0b8a = CONCAT11((char)(DAT_0b8a + 1 >> 8),(char)(DAT_0b8a + 1) - (0xfffe < DAT_0b8a));
      if (DAT_3710 < DAT_0b8a) goto LAB_ada9;
      if ((~DAT_0b80 & 2) == 0) {
        DAT_0b88 = CONCAT11((char)(DAT_0b88 + 1 >> 8),(char)(DAT_0b88 + 1) - (0xfffe < DAT_0b88));
        if (DAT_0b88 < DAT_3706) goto LAB_af24;
        DAT_0b80 = DAT_0b80 | 2;
        DAT_0b88 = 0;
      }
      if ((DAT_0abe < DAT_3708) || (DAT_3709 < DAT_0abe)) {
        if ((DAT_0b81 & 1) != 0) {
          if ((DAT_0b88 < DAT_370a) || (DAT_370c < DAT_0b88)) goto LAB_ada9;
          DAT_0b80 = DAT_0b80 | 1;
        }
      }
      else {
        DAT_0b81 = DAT_0b81 | 1;
        DAT_0b88 = CONCAT11((char)(DAT_0b88 + 1 >> 8),(char)(DAT_0b88 + 1) - (0xfffe < DAT_0b88));
      }
    }
  }
LAB_af24:
  if ((DAT_0893 & 0x20) == 0) goto LAB_af92;
  if ((((DAT_0bdd != DAT_0d46) && (DAT_0bdd != DAT_0d47)) && (DAT_0bdd != DAT_0d48)) &&
     ((DAT_0bdd != DAT_0d49 && (DAT_0bdd != DAT_0d4a)))) {
    if ((DAT_0bdd == DAT_0d4b) || (DAT_0bdd == DAT_0d4c)) {
      DAT_0be2 = (DAT_0be2 + 1) - (0xfe < DAT_0be2);
      if (DAT_4f0c < DAT_0be2) {
        DAT_0893 = DAT_0893 & 0xdf | 0x10;
        DAT_0be4 = DAT_4f0e;
      }
      goto LAB_af92;
    }
    if (DAT_0bdd != DAT_0d4d) goto LAB_af92;
  }
  DAT_0be2 = (DAT_0be2 + 1) - (0xfe < DAT_0be2);
  if (DAT_4f0c < DAT_0be2) {
    DAT_0893 = DAT_0893 & 0xdf | 0x10;
    DAT_0be4 = DAT_4f0d;
  }
LAB_af92:
  if ((DAT_0893 & 0x10) != 0) {
    if (DAT_0bdd == DAT_0d46) {
      FUN_b900();
    }
    else if (DAT_0bdd == DAT_0d47) {
      FUN_b97f();
    }
    else if (DAT_0bdd == DAT_0d48) {
      FUN_ba06();
    }
    else if (DAT_0bdd == DAT_0d49) {
      FUN_ba8d();
    }
    else if (DAT_0bdd == DAT_0d4a) {
      FUN_baed();
    }
    else if (DAT_0bdd == DAT_0d4b) {
      FUN_bb45();
    }
    else if (DAT_0bdd == DAT_0d4c) {
      FUN_bba1();
    }
    else if (DAT_0bdd == DAT_0d4d) {
      FUN_bbfd();
    }
    else if (DAT_0bdd == DAT_0d50) {
      FUN_bc1b();
    }
  }
  DAT_08bf = DAT_08bf & 0xfd;
  return;
}


