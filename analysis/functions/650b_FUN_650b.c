/* Entry 650b */

void FUN_650b(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  bVar1 = DAT_08a1;
  if ((bVar1 & 0x20) == 0) {
    cVar2 = DAT_0bdd;
    cVar4 = DAT_0d3d;
    if (cVar2 == cVar4) {
      cVar4 = DAT_0ae9;
    }
    else {
      cVar4 = DAT_0d3e;
      if (cVar2 == cVar4) {
        cVar4 = DAT_0aea;
      }
      else {
        cVar4 = DAT_0d3f;
        if (cVar2 == cVar4) {
          cVar4 = DAT_0aeb;
        }
        else {
          cVar4 = DAT_0d40;
          if (cVar2 == cVar4) {
            cVar4 = DAT_0ae8;
          }
          else {
            cVar4 = DAT_0d41;
            if (cVar2 == cVar4) {
              cVar4 = DAT_0ae3;
              if (cVar4 == -1) {
                cVar4 = -2;
              }
            }
            else {
              cVar4 = DAT_0d42;
              if (cVar2 == cVar4) {
                cVar4 = DAT_08dd;
                if (cVar4 == -1) {
                  cVar4 = -2;
                }
              }
              else {
                cVar4 = DAT_0d43;
                if (cVar2 == cVar4) {
                  cVar4 = DAT_0aec;
                }
                else {
                  cVar4 = DAT_0d44;
                  if (cVar2 == cVar4) {
                    bVar1 = DAT_0896._0_1_;
                    if ((~bVar1 & 1) == 0) {
                      cVar4 = '\0';
                    }
                    else {
                      cVar4 = -0x10;
                    }
                  }
                  else {
                    cVar4 = DAT_0d45;
                    if (cVar2 == cVar4) {
                      cVar2 = DAT_0d87;
                      if ((cVar2 == '\t') && (bVar1 = DAT_0896._0_1_, (~bVar1 & 0x10) == 0)) {
                        cVar4 = '\0';
                      }
                      else {
                        cVar4 = -0x10;
                      }
                    }
                    else {
                      cVar4 = DAT_0d46;
                      if (cVar2 == cVar4) {
                        cVar4 = '\0';
                      }
                      else {
                        cVar4 = DAT_0d47;
                        if (cVar2 == cVar4) {
                          cVar4 = '\0';
                        }
                        else {
                          cVar4 = DAT_0d48;
                          if (cVar2 == cVar4) {
                            cVar4 = '\0';
                          }
                          else {
                            cVar4 = DAT_0d49;
                            if (cVar2 == cVar4) {
                              cVar4 = '\0';
                            }
                            else {
                              cVar4 = DAT_0d4a;
                              if (cVar2 == cVar4) {
                                cVar4 = '\0';
                              }
                              else {
                                cVar4 = DAT_0d4b;
                                if (cVar2 == cVar4) {
                                  cVar4 = '\0';
                                }
                                else {
                                  cVar4 = DAT_0d4c;
                                  if (cVar2 == cVar4) {
                                    cVar4 = '\0';
                                  }
                                  else {
                                    cVar4 = DAT_0d4d;
                                    if (cVar2 == cVar4) {
                                      cVar4 = '\0';
                                    }
                                    else {
                                      cVar4 = DAT_0d4e;
                                      if (cVar2 == cVar4) {
                                        FUN_6630();
                                        cVar4 = DAT_0bdf;
                                      }
                                      else {
                                        cVar4 = DAT_0d4f;
                                        if (cVar2 == cVar4) {
                                          FUN_6672();
                                          cVar4 = DAT_0bdf;
                                        }
                                        else {
                                          cVar4 = DAT_0d50;
                                          if (cVar2 == cVar4) {
                                            FUN_6726();
                                            cVar4 = DAT_0bdf;
                                          }
                                          else {
                                            cVar3 = DAT_0d51;
                                            cVar4 = DAT_4e7c;
                                            if (cVar2 != cVar3) {
                                              cVar4 = -1;
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
    }
  }
  else {
    cVar4 = DAT_0bdd;
  }
  DAT_0be1 = cVar4;
  return;
}


