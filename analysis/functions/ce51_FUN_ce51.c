/* Entry ce51 */

void FUN_ce51(char param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  
  bVar5 = DAT_08a0;
  if ((bVar5 & 2) != 0) {
    if ((((param_1 == '\0') || (param_1 == '\x01')) || (param_1 == '\x02')) || (param_1 == -2)) {
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0xfe;
      bVar5 = DAT_0020;
      DAT_0020 = bVar5 | 4;
      DAT_00cb = 0;
      DAT_0e1f = param_1;
    }
    else {
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 | 1;
    }
  }
  bVar5 = DAT_08a0;
  if ((bVar5 & 0x80) != 0) {
    bVar5 = DAT_08a3;
    if ((~bVar5 & 0x80) == 0) {
      bVar5 = DAT_08a0;
      DAT_08a0 = bVar5 & 0x7f;
      bVar5 = DAT_08a0;
      DAT_08a0 = bVar5 | 0x40;
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0x7f;
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0xbf;
    }
    else {
      bVar5 = DAT_08a1;
      if ((~bVar5 & 0x80) == 0) {
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 & 0xfe;
        if (param_1 != '\x01') {
          if (param_1 == -0x33) {
            bVar5 = DAT_08a2;
            DAT_08a2 = bVar5 | 0x80;
            goto LAB_d355;
          }
          if (((param_1 != -0x34) && (param_1 != -0x35)) && (param_1 != -0x36)) {
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 | 1;
            DAT_0b34 = 0;
          }
        }
      }
      else if (param_1 == -2) {
        bVar5 = DAT_0020;
        DAT_0020 = bVar5 | 4;
        DAT_00cb = 0;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 0x80;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 & 0xfe;
        goto LAB_d355;
      }
      bVar5 = DAT_08a0;
      DAT_08a0 = bVar5 & 0x7f;
      bVar5 = DAT_08a0;
      DAT_08a0 = bVar5 | 2;
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0x7f;
    }
    goto LAB_d355;
  }
  bVar5 = DAT_08a0;
  if ((~bVar5 & 0x40) == 0) {
    bVar5 = DAT_08a2;
    if ((~bVar5 & 0x40) == 0) {
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0xfe;
      if ((param_1 == -0x35) || (param_1 == -0x34)) {
        DAT_0b38 = 0;
      }
      else if (param_1 == -0x36) {
        DAT_0b38 = 0;
        cVar1 = DAT_0e1f;
        if (cVar1 == -0x35) {
          bVar5 = DAT_08a1;
          if ((bVar5 & 0x40) == 0) {
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 | 0x40;
          }
          else {
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 & 0xbf;
          }
        }
      }
      else if (param_1 == -0x33) {
        bVar5 = DAT_0b38;
        bVar5 = (bVar5 + 1) - (0xfe < bVar5);
        DAT_0b38 = bVar5;
        if (0x7f < bVar5) {
          bVar5 = DAT_08a1;
          if ((bVar5 & 0x40) == 0) {
            bVar5 = DAT_0000;
            DAT_0000 = bVar5 & 0xfb;
            DAT_0bdd = 1;
            bVar5 = DAT_08a0;
            DAT_08a0 = bVar5 & 0xbf;
            bVar5 = DAT_08a0;
            DAT_08a0 = bVar5 | 4;
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 | 0x20;
          }
          else {
            bVar5 = DAT_08a0;
            DAT_08a0 = bVar5 & 0xbf;
            bVar5 = DAT_08a0;
            DAT_08a0 = bVar5 | 0x20;
            bVar5 = DAT_08a0;
            DAT_08a0 = bVar5 | 0x10;
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 | 0x20;
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 | 0x10;
          }
          DAT_0b38 = 0;
        }
      }
      else {
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 1;
      }
    }
    else if (param_1 == -0x36) {
      bVar5 = DAT_08a2;
      DAT_08a2 = bVar5 | 0x40;
    }
    goto LAB_d355;
  }
  bVar5 = DAT_08a0;
  if ((bVar5 & 4) != 0) {
    uVar3 = DAT_0bdd;
    DAT_0bde = uVar3;
    bVar5 = DAT_08a1;
    DAT_08a1 = bVar5 & 0xfe;
    if (param_1 == -0x36) {
      DAT_0b35 = 0;
      DAT_0b36 = 0;
      DAT_0b37 = 0;
      DAT_0b38 = 0;
      bVar5 = DAT_08a2;
      DAT_08a2 = bVar5 | 8;
    }
    else if (param_1 == -0x35) {
      DAT_0b35 = 0;
      DAT_0b37 = 0;
      DAT_0b38 = 0;
      cVar1 = DAT_0e1f;
      if (cVar1 == -0x36) {
        cVar1 = DAT_0bdc;
        bVar5 = cVar1 + 1;
        bVar4 = DAT_0d3c;
        if (bVar4 <= bVar5) {
          bVar5 = 0;
        }
        cVar1 = DAT_0d87;
        if (cVar1 == '\t') {
          if ((bVar5 == 0xb) || (bVar5 == 0x10)) {
LAB_d23a:
            bVar5 = bVar5 + 1;
          }
        }
        else if ((bVar5 == 0xc) || (bVar5 == 8)) goto LAB_d23a;
        DAT_0bdc = bVar5;
        bVar5 = DAT_0bdc;
        DAT_0bdd = (&DAT_0d3d)[bVar5];
        bVar5 = DAT_0b36;
        DAT_0b36 = (bVar5 + 1) - (0xfe < bVar5);
      }
      else {
        bVar5 = DAT_08a2;
        if ((~bVar5 & 8) != 0) goto LAB_d34e;
        bVar5 = DAT_0b36;
        bVar5 = (bVar5 + 1) - (0xfe < bVar5);
        if (0x3f < bVar5) {
          cVar1 = DAT_0bdc;
          bVar5 = cVar1 + 1;
          bVar4 = DAT_0d3c;
          if (bVar4 <= bVar5) {
            bVar5 = 0;
          }
          cVar1 = DAT_0d87;
          if (cVar1 == '\t') {
            if ((bVar5 == 0xb) || (bVar5 == 0x10)) {
LAB_d293:
              bVar5 = bVar5 + 1;
            }
          }
          else if ((bVar5 == 0xc) || (bVar5 == 8)) goto LAB_d293;
          DAT_0bdc = bVar5;
          bVar5 = DAT_0bdc;
          DAT_0bdd = (&DAT_0d3d)[bVar5];
          bVar5 = cVar1 - 0x10;
        }
        DAT_0b36 = bVar5;
      }
    }
    else if (param_1 == -0x34) {
      DAT_0b35 = 0;
      DAT_0b36 = 0;
      DAT_0b38 = 0;
      cVar1 = DAT_0e1f;
      if (cVar1 == -0x36) {
        cVar1 = DAT_0bdc;
        if (cVar1 == '\0') {
          cVar1 = DAT_0d3c;
        }
        cVar6 = cVar1 + -1;
        cVar2 = DAT_0d87;
        if (cVar2 == '\t') {
          if ((cVar6 == '\v') || (cVar6 == '\x10')) {
LAB_d2e4:
            cVar6 = cVar1 + -2;
          }
        }
        else if ((cVar6 == '\f') || (cVar6 == '\b')) goto LAB_d2e4;
        DAT_0bdc = cVar6;
        bVar5 = DAT_0bdc;
        DAT_0bdd = (&DAT_0d3d)[bVar5];
        bVar5 = DAT_0b37;
        DAT_0b37 = (bVar5 + 1) - (0xfe < bVar5);
      }
      else {
        bVar5 = DAT_08a2;
        if ((bVar5 & 8) != 0) {
          bVar5 = DAT_0b37;
          bVar5 = (bVar5 + 1) - (0xfe < bVar5);
          if (0x3f < bVar5) {
            cVar1 = DAT_0bdc;
            if (cVar1 == '\0') {
              cVar1 = DAT_0d3c;
            }
            cVar6 = cVar1 + -1;
            cVar2 = DAT_0d87;
            if (cVar2 == '\t') {
              if ((cVar6 == '\v') || (cVar6 == '\x10')) {
LAB_d337:
                cVar6 = cVar1 + -2;
              }
            }
            else if ((cVar6 == '\f') || (cVar6 == '\b')) goto LAB_d337;
            DAT_0bdc = cVar6;
            bVar5 = DAT_0bdc;
            DAT_0bdd = (&DAT_0d3d)[bVar5];
            bVar5 = cVar2 - 0x10;
          }
          DAT_0b37 = bVar5;
        }
      }
    }
    else {
      if (param_1 != -0x33) {
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 1;
        goto LAB_d355;
      }
      DAT_0b35 = 0;
      DAT_0b36 = 0;
      DAT_0b37 = 0;
      DAT_0b38 = 0;
    }
LAB_d34e:
    FUN_d6a3();
    goto LAB_d15f;
  }
  bVar5 = DAT_08a0;
  if ((~bVar5 & 0x10) == 0) {
    bVar5 = DAT_08a2;
    if ((~bVar5 & 0x20) == 0) {
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0xfe;
      if (param_1 == -0x36) {
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        cVar1 = DAT_0e1f;
        if (cVar1 == -0x35) {
          bVar5 = DAT_08a1;
          DAT_08a1 = bVar5 | 8;
        }
        else if (cVar1 == -0x34) {
          bVar5 = DAT_08a1;
          DAT_08a1 = bVar5 | 4;
        }
        else {
          bVar5 = DAT_08a1;
          DAT_08a1 = bVar5 & 0xf7;
          bVar5 = DAT_08a1;
          DAT_08a1 = bVar5 & 0xfb;
        }
      }
      else if (param_1 == -0x35) {
        DAT_0b35 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        bVar4 = DAT_0b36;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 & 0xf7;
        DAT_0b36 = (bVar4 + 1) - (0xfe < bVar4);
      }
      else if (param_1 == -0x34) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b38 = 0;
        bVar4 = DAT_0b37;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 & 0xfb;
        DAT_0b37 = (bVar4 + 1) - (0xfe < bVar4);
      }
      else if (param_1 == -0x33) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        bVar5 = DAT_0b38;
        bVar5 = (bVar5 + 1) - (0xfe < bVar5);
        DAT_0b38 = bVar5;
        if (0x7f < bVar5) {
          bVar5 = DAT_08a0;
          DAT_08a0 = bVar5 & 0xef;
          bVar5 = DAT_08a0;
          DAT_08a0 = bVar5 | 8;
          bVar5 = DAT_08a1;
          DAT_08a1 = bVar5 & 0xdf;
          bVar5 = DAT_08a2;
          DAT_08a2 = bVar5 & 0xef;
          DAT_0b38 = 0;
          DAT_0b39 = 0;
          cVar1 = DAT_0aee;
          if (cVar1 == -0x3f) {
            uVar3 = DAT_09fc;
          }
          else {
            uVar3 = DAT_0a00;
          }
          DAT_0aed = uVar3;
        }
      }
      else {
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 1;
      }
    }
    else if (param_1 == -0x36) {
      bVar5 = DAT_08a2;
      DAT_08a2 = bVar5 | 0x20;
    }
    goto LAB_d355;
  }
  bVar5 = DAT_08a2;
  if ((~bVar5 & 0x10) != 0) {
    if (param_1 == -0x36) {
      bVar5 = DAT_08a2;
      DAT_08a2 = bVar5 | 0x10;
    }
    goto LAB_d355;
  }
  bVar5 = DAT_08a1;
  DAT_08a1 = bVar5 & 0xfe;
  if (param_1 == -0x36) {
    DAT_0b36 = 0;
    DAT_0b37 = 0;
    DAT_0b38 = 0;
    cVar1 = DAT_0e1f;
    if (cVar1 == -0x35) {
      cVar1 = DAT_0aed;
      bVar5 = cVar1 + 1;
      if (0xfd < bVar5) {
        bVar5 = 0xfe;
      }
      DAT_0aed = bVar5;
    }
    else {
      if (cVar1 != -0x34) goto LAB_d15f;
      cVar1 = DAT_0aed;
      DAT_0aed = (cVar1 == '\0') + -0x34;
    }
    cVar1 = DAT_0aee;
    if (cVar1 == -0x3f) {
      uVar3 = DAT_0aed;
      DAT_09fc = uVar3;
      bVar5 = DAT_088f;
      DAT_088f = bVar5 | 0x80;
    }
    else {
      uVar3 = DAT_0aed;
      DAT_0a00 = uVar3;
      bVar5 = DAT_088f;
      DAT_088f = bVar5 | 0x40;
    }
    bVar5 = DAT_0891;
    DAT_0891 = bVar5 | 0x80;
  }
  else if (param_1 == -0x35) {
    DAT_0b35 = 0;
    DAT_0b37 = 0;
    DAT_0b38 = 0;
    bVar5 = DAT_0b36;
    bVar5 = (bVar5 + 1) - (0xfe < bVar5);
    if (0x1f < bVar5) {
      cVar1 = DAT_0aed;
      bVar4 = cVar1 + 1;
      if (0xfd < bVar4) {
        bVar4 = 0xfe;
      }
      DAT_0aed = bVar4;
      bVar5 = bVar5 - 8;
    }
    DAT_0b36 = bVar5;
  }
  else {
    if (param_1 != -0x34) {
      if (param_1 == -0x33) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        DAT_0b39 = 0;
        bVar5 = DAT_08a0;
        DAT_08a0 = bVar5 | 0x10;
        bVar5 = DAT_08a0;
        DAT_08a0 = bVar5 & 0xf7;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 0x20;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 0x10;
        bVar5 = DAT_08a2;
        DAT_08a2 = bVar5 & 0xdf;
      }
      else {
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 1;
      }
      goto LAB_d355;
    }
    DAT_0b35 = 0;
    DAT_0b36 = 0;
    DAT_0b38 = 0;
    bVar5 = DAT_0b37;
    bVar5 = (bVar5 + 1) - (0xfe < bVar5);
    if (0x1f < bVar5) {
      cVar1 = DAT_0aed;
      DAT_0aed = bVar5 + (cVar1 == '\0');
      bVar5 = bVar5 - 8;
    }
    DAT_0b37 = bVar5;
  }
LAB_d15f:
  bVar5 = DAT_0b39;
  bVar5 = (bVar5 + 1) - (0xfe < bVar5);
  DAT_0b39 = bVar5;
  bVar4 = DAT_08a1;
  if ((~bVar4 & 0x20) == 0) {
    if (bVar5 != 0) {
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0xdf;
      DAT_0b39 = 0;
    }
  }
  else if (6 < bVar5) {
    bVar5 = DAT_08a1;
    DAT_08a1 = bVar5 | 0x20;
    DAT_0b39 = 0;
  }
LAB_d355:
  bVar5 = DAT_08ae;
  DAT_08ae = bVar5 | 0x80;
  bVar5 = DAT_08ae;
  DAT_08ae = bVar5 & 0xbf;
  bVar5 = DAT_08ae;
  DAT_08ae = bVar5 | 0x20;
  bVar5 = DAT_08ae;
  DAT_08ae = bVar5 | 2;
  uVar3 = DAT_0e1e;
  DAT_0e1f = uVar3;
  return;
}


