/* Entry 62aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_62aa(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if ((DAT_08a0 & 4) == 0) {
    bVar1 = DAT_08af | DAT_08b8;
    bVar3 = DAT_08b0 | DAT_08b9;
    _DAT_08b8 = CONCAT11(bVar1,bVar3);
    bVar2 = DAT_08b1 | DAT_08ba;
    bVar4 = DAT_08b2 | DAT_08bb;
    _DAT_08ba = CONCAT11(bVar2,bVar4);
    if ((((DAT_08af == 0) && (DAT_08b0 == 0)) && (DAT_08b1 == 0)) && (DAT_08b2 == 0)) {
      DAT_0892 = DAT_0892 & 0xbf | 0x80;
    }
    else {
      DAT_0892 = DAT_0892 & 0x7f | 0x40;
    }
    if (((bVar1 == 0) && (bVar3 == 0)) && ((bVar2 == 0 && (bVar4 == 0)))) {
      DAT_0892 = DAT_0892 & 0xfd;
    }
    else {
      DAT_0892 = DAT_0892 | 2;
    }
  }
  DAT_08a6 = DAT_0ae2;
  DAT_08a7 = DAT_0ae3;
  if ((DAT_08a1 & 1) == 0) {
    FUN_6496();
    if ((DAT_08a0 & 4) == 0) {
      if ((~DAT_0884 & 0x20) == 0) {
        if (((~DAT_0892 & 0x40) != 0) || ((~DAT_0880 & 1) != 0)) goto LAB_63e4;
        bVar1 = ~DAT_08a1 & 2;
      }
      else {
        bVar1 = ~DAT_0888 & 8;
      }
      if (bVar1 != 0) goto LAB_63e4;
    }
    else if ((DAT_0893 & 4) != 0) {
      if ((((DAT_0bdd == DAT_0d46) || (DAT_0bdd == DAT_0d47)) || (DAT_0bdd == DAT_0d48)) ||
         ((DAT_0bdd == DAT_0d49 || (DAT_0bdd == DAT_0d4a)))) {
        DAT_0be6 = (DAT_0be6 + 1) - (0xfe < DAT_0be6);
        if (DAT_0be6 <= DAT_4f14) goto LAB_63e4;
        DAT_0893 = DAT_0893 & 0xfb;
        DAT_0be6 = 0;
      }
      else if (((DAT_0bdd == DAT_0d4b) || (DAT_0bdd == DAT_0d4c)) || (DAT_0bdd == DAT_0d4d)) {
LAB_63e4:
        DAT_08a8 = -0x80;
        goto LAB_63e6;
      }
    }
    DAT_08a8 = '\0';
  }
  else {
    DAT_08a8 = '@';
  }
LAB_63e6:
  if (((((DAT_08a1 & 1) == 0) && ((DAT_08a0 & 2) == 0)) && ((DAT_08a0 & 0x80) == 0)) &&
     ((DAT_08a0 & 0x40) == 0)) {
    if ((DAT_08a0 & 0x20) == 0) {
      if ((DAT_08a0 & 4) != 0) {
        FUN_650b();
      }
    }
    else if ((DAT_08a0 & 8) == 0) {
      if (((DAT_08a1 & 8) == 0) && ((DAT_08a1 & 4) == 0)) {
        if ((DAT_08a1 & 0x10) == 0) goto LAB_6486;
        DAT_08a1 = DAT_08a1 & 0xef;
      }
      else if (DAT_08a9 != -0x3e) {
        DAT_0aee = 0xc2;
        goto LAB_6486;
      }
      DAT_0aee = 0xc1;
    }
  }
LAB_6486:
  DAT_08a9 = 0;
  DAT_08aa = DAT_08a8 + DAT_08a7 + DAT_08a6;
  return;
}


