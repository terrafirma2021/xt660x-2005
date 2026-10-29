/* Entry 650b */

void FUN_650b(void)

{
  char cVar1;
  
  cVar1 = DAT_0bdd;
  if (((((DAT_08a1 & 0x20) == 0) && (cVar1 = DAT_0ae9, DAT_0bdd != DAT_0d3d)) &&
      (cVar1 = DAT_0aea, DAT_0bdd != DAT_0d3e)) &&
     ((cVar1 = DAT_0aeb, DAT_0bdd != DAT_0d3f && (cVar1 = DAT_0ae8, DAT_0bdd != DAT_0d40)))) {
    if (DAT_0bdd == DAT_0d41) {
      cVar1 = DAT_0ae3;
      if (DAT_0ae3 == -1) {
        cVar1 = -2;
      }
    }
    else if (DAT_0bdd == DAT_0d42) {
      cVar1 = DAT_08dd;
      if (DAT_08dd == -1) {
        cVar1 = -2;
      }
    }
    else {
      cVar1 = DAT_0aec;
      if (DAT_0bdd != DAT_0d43) {
        if (DAT_0bdd == DAT_0d44) {
          if ((~DAT_0896._0_1_ & 1) == 0) {
            cVar1 = '\0';
          }
          else {
            cVar1 = -0x10;
          }
        }
        else if (DAT_0bdd == DAT_0d45) {
          if ((DAT_0d87 == '\t') && ((~DAT_0896._0_1_ & 0x10) == 0)) {
            cVar1 = '\0';
          }
          else {
            cVar1 = -0x10;
          }
        }
        else if (DAT_0bdd == DAT_0d46) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d47) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d48) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d49) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d4a) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d4b) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d4c) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d4d) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d4e) {
          FUN_6630();
          cVar1 = DAT_0bdf;
        }
        else if (DAT_0bdd == DAT_0d4f) {
          FUN_6672();
          cVar1 = DAT_0bdf;
        }
        else if (DAT_0bdd == DAT_0d50) {
          FUN_6726();
          cVar1 = DAT_0bdf;
        }
        else {
          cVar1 = DAT_4e7c;
          if (DAT_0bdd != DAT_0d51) {
            cVar1 = -1;
          }
        }
      }
    }
  }
  DAT_0be1 = cVar1;
  return;
}


