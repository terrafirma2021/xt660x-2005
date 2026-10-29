/* Entry ce51 */

void FUN_ce51(char param_1)

{
  byte bVar1;
  byte bVar2;
  
  if ((DAT_08a0 & 2) != 0) {
    if ((((param_1 == '\0') || (param_1 == '\x01')) || (param_1 == '\x02')) || (param_1 == -2)) {
      DAT_08a1 = DAT_08a1 & 0xfe;
      bVar2 = DAT_0020;
      DAT_0020 = bVar2 | 4;
      DAT_00cb = 0;
      DAT_0e1f = param_1;
    }
    else {
      DAT_08a1 = DAT_08a1 | 1;
    }
  }
  if ((DAT_08a0 & 0x80) != 0) {
    if ((~DAT_08a3 & 0x80) == 0) {
      if ((~DAT_08a1 & 0x80) == 0) {
        if (param_1 == -2) {
          bVar2 = DAT_0020;
          DAT_0020 = bVar2 | 4;
          DAT_00cb = 0;
          bVar2 = DAT_08a1 & 0xfe | 0x80;
          goto LAB_d355;
        }
      }
      else {
        DAT_08a1 = DAT_08a1 & 0xfe;
        if (param_1 != '\x01') {
          if (param_1 == -0x33) {
            DAT_08a2 = DAT_08a2 | 0x80;
            bVar2 = DAT_08a1;
            goto LAB_d355;
          }
          if (((param_1 != -0x34) && (param_1 != -0x35)) && (param_1 != -0x36)) {
            DAT_08a1 = DAT_08a1 | 1;
            DAT_0b34 = 0;
          }
        }
      }
      DAT_08a0 = DAT_08a0 & 0x7f | 2;
      bVar2 = DAT_08a1 & 0x7f;
    }
    else {
      DAT_08a0 = DAT_08a0 & 0x7f | 0x40;
      bVar2 = DAT_08a1 & 0x3f;
    }
    goto LAB_d355;
  }
  bVar2 = DAT_08a1;
  if ((~DAT_08a0 & 0x40) != 0) {
    if ((~DAT_08a2 & 0x40) == 0) {
      if (param_1 == -0x36) {
        DAT_08a2 = DAT_08a2 | 0x40;
      }
    }
    else {
      bVar2 = DAT_08a1 & 0xfe;
      if ((param_1 == -0x35) || (param_1 == -0x34)) {
        DAT_0b38 = 0;
      }
      else if (param_1 == -0x36) {
        DAT_0b38 = 0;
        if (DAT_0e1f == -0x35) {
          if ((DAT_08a1 & 0x40) == 0) {
            bVar2 = bVar2 | 0x40;
          }
          else {
            bVar2 = DAT_08a1 & 0xbe;
          }
        }
      }
      else if (param_1 == -0x33) {
        DAT_0b38 = (DAT_0b38 + 1) - (0xfe < DAT_0b38);
        if (0x7f < DAT_0b38) {
          if ((DAT_08a1 & 0x40) == 0) {
            bVar1 = DAT_0000;
            DAT_0000 = bVar1 & 0xfb;
            DAT_0bdd = 1;
            DAT_08a0 = DAT_08a0 & 0xbf | 4;
            DAT_08a1 = bVar2 | 0x20;
          }
          else {
            DAT_08a0 = DAT_08a0 & 0xbf | 0x30;
            DAT_08a1 = bVar2 | 0x30;
          }
          DAT_0b38 = 0;
          bVar2 = DAT_08a1;
        }
      }
      else {
        bVar2 = bVar2 | 1;
      }
    }
    goto LAB_d355;
  }
  if ((DAT_08a0 & 4) != 0) {
    DAT_0bde = DAT_0bdd;
    DAT_08a1 = DAT_08a1 & 0xfe;
    if (param_1 == -0x36) {
      DAT_0b36 = 0;
      DAT_0b37 = 0;
      DAT_08a2 = DAT_08a2 | 8;
    }
    else if (param_1 == -0x35) {
      DAT_0b37 = 0;
      if (DAT_0e1f == -0x36) {
        DAT_0bdc = DAT_0bdc + 1;
        if (DAT_0d3c <= DAT_0bdc) {
          DAT_0bdc = 0;
        }
        if (DAT_0d87 == '\t') {
          if ((DAT_0bdc == 0xb) || (DAT_0bdc == 0x10)) {
LAB_d23a:
            DAT_0bdc = DAT_0bdc + 1;
          }
        }
        else if ((DAT_0bdc == 0xc) || (DAT_0bdc == 8)) goto LAB_d23a;
        DAT_0bdd = (&DAT_0d3d)[DAT_0bdc];
        DAT_0b36 = (DAT_0b36 + 1) - (0xfe < DAT_0b36);
      }
      else {
        if (((~DAT_08a2 & 8) == 0) ||
           (DAT_0b36 = (DAT_0b36 + 1) - (0xfe < DAT_0b36), DAT_0b36 < 0x40)) goto LAB_d34e;
        DAT_0bdc = DAT_0bdc + 1;
        if (DAT_0d3c <= DAT_0bdc) {
          DAT_0bdc = 0;
        }
        if (DAT_0d87 == '\t') {
          if ((DAT_0bdc == 0xb) || (DAT_0bdc == 0x10)) {
LAB_d293:
            DAT_0bdc = DAT_0bdc + 1;
          }
        }
        else if ((DAT_0bdc == 0xc) || (DAT_0bdc == 8)) goto LAB_d293;
        DAT_0bdd = (&DAT_0d3d)[DAT_0bdc];
        DAT_0b36 = DAT_0d87 - 0x10;
      }
    }
    else if (param_1 == -0x34) {
      DAT_0b36 = 0;
      if (DAT_0e1f == -0x36) {
        if (DAT_0bdc == 0) {
          DAT_0bdc = DAT_0d3c;
        }
        bVar2 = DAT_0bdc - 1;
        if (DAT_0d87 == '\t') {
          if ((bVar2 == 0xb) || (bVar2 == 0x10)) {
LAB_d2e4:
            bVar2 = DAT_0bdc - 2;
          }
        }
        else if ((bVar2 == 0xc) || (bVar2 == 8)) goto LAB_d2e4;
        DAT_0bdd = (&DAT_0d3d)[bVar2];
        DAT_0b37 = (DAT_0b37 + 1) - (0xfe < DAT_0b37);
        DAT_0bdc = bVar2;
      }
      else if (((DAT_08a2 & 8) != 0) &&
              (DAT_0b37 = (DAT_0b37 + 1) - (0xfe < DAT_0b37), 0x3f < DAT_0b37)) {
        if (DAT_0bdc == 0) {
          DAT_0bdc = DAT_0d3c;
        }
        bVar2 = DAT_0bdc - 1;
        if (DAT_0d87 == '\t') {
          if ((bVar2 == 0xb) || (bVar2 == 0x10)) {
LAB_d337:
            bVar2 = DAT_0bdc - 2;
          }
        }
        else if ((bVar2 == 0xc) || (bVar2 == 8)) goto LAB_d337;
        DAT_0bdd = (&DAT_0d3d)[bVar2];
        DAT_0b37 = DAT_0d87 - 0x10;
        DAT_0bdc = bVar2;
      }
    }
    else {
      if (param_1 != -0x33) {
        bVar2 = DAT_08a1 | 1;
        goto LAB_d355;
      }
      DAT_0b36 = 0;
      DAT_0b37 = 0;
    }
LAB_d34e:
    DAT_0b38 = 0;
    DAT_0b35 = 0;
    FUN_d6a3();
    goto LAB_d15f;
  }
  if ((~DAT_08a0 & 0x10) != 0) {
    if ((~DAT_08a2 & 0x20) == 0) {
      if (param_1 == -0x36) {
        DAT_08a2 = DAT_08a2 | 0x20;
      }
    }
    else {
      bVar2 = DAT_08a1 & 0xfe;
      if (param_1 == -0x36) {
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        if (DAT_0e1f == -0x35) {
          bVar2 = bVar2 | 8;
        }
        else if (DAT_0e1f == -0x34) {
          bVar2 = bVar2 | 4;
        }
        else {
          bVar2 = DAT_08a1 & 0xf2;
        }
      }
      else if (param_1 == -0x35) {
        DAT_0b35 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        DAT_0b36 = (DAT_0b36 + 1) - (0xfe < DAT_0b36);
        bVar2 = DAT_08a1 & 0xf6;
      }
      else if (param_1 == -0x34) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b38 = 0;
        DAT_0b37 = (DAT_0b37 + 1) - (0xfe < DAT_0b37);
        bVar2 = DAT_08a1 & 0xfa;
      }
      else if (param_1 == -0x33) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = (DAT_0b38 + 1) - (0xfe < DAT_0b38);
        if (0x7f < DAT_0b38) {
          DAT_08a0 = DAT_08a0 & 0xef | 8;
          DAT_08a2 = DAT_08a2 & 0xef;
          DAT_0b38 = 0;
          DAT_0b39 = 0;
          bVar2 = DAT_08a1 & 0xde;
          DAT_0aed = DAT_0a00;
          if (DAT_0aee == -0x3f) {
            DAT_0aed = DAT_09fc;
          }
        }
      }
      else {
        bVar2 = bVar2 | 1;
      }
    }
    goto LAB_d355;
  }
  if ((~DAT_08a2 & 0x10) == 0) {
    if (param_1 == -0x36) {
      DAT_08a2 = DAT_08a2 | 0x10;
    }
    goto LAB_d355;
  }
  DAT_08a1 = DAT_08a1 & 0xfe;
  if (param_1 == -0x36) {
    DAT_0b36 = 0;
    DAT_0b37 = 0;
    DAT_0b38 = 0;
    if (DAT_0e1f == -0x35) {
      DAT_0aed = DAT_0aed + 1;
      if (0xfd < DAT_0aed) {
        DAT_0aed = 0xfe;
      }
    }
    else {
      if (DAT_0e1f != -0x34) goto LAB_d15f;
      DAT_0aed = (DAT_0aed == 0) - 0x34;
    }
    if (DAT_0aee == -0x3f) {
      DAT_09fc = DAT_0aed;
      DAT_088f = DAT_088f | 0x80;
    }
    else {
      DAT_0a00 = DAT_0aed;
      DAT_088f = DAT_088f | 0x40;
    }
    DAT_0891 = DAT_0891 | 0x80;
  }
  else if (param_1 == -0x35) {
    DAT_0b35 = 0;
    DAT_0b37 = 0;
    DAT_0b38 = 0;
    DAT_0b36 = (DAT_0b36 + 1) - (0xfe < DAT_0b36);
    if (0x1f < DAT_0b36) {
      DAT_0aed = DAT_0aed + 1;
      if (0xfd < DAT_0aed) {
        DAT_0aed = 0xfe;
      }
      DAT_0b36 = DAT_0b36 - 8;
    }
  }
  else {
    if (param_1 != -0x34) {
      if (param_1 == -0x33) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        DAT_0b39 = 0;
        DAT_08a0 = DAT_08a0 & 0xf7 | 0x10;
        DAT_08a2 = DAT_08a2 & 0xdf;
        bVar2 = DAT_08a1 | 0x30;
      }
      else {
        bVar2 = DAT_08a1 | 1;
      }
      goto LAB_d355;
    }
    DAT_0b35 = 0;
    DAT_0b36 = 0;
    DAT_0b38 = 0;
    DAT_0b37 = (DAT_0b37 + 1) - (0xfe < DAT_0b37);
    if (0x1f < DAT_0b37) {
      DAT_0aed = DAT_0b37 + (DAT_0aed == 0);
      DAT_0b37 = DAT_0b37 - 8;
    }
  }
LAB_d15f:
  DAT_0b39 = (DAT_0b39 + 1) - (0xfe < DAT_0b39);
  bVar2 = DAT_08a1;
  if ((~DAT_08a1 & 0x20) == 0) {
    if (6 < DAT_0b39) {
      DAT_0b39 = 0;
      bVar2 = DAT_08a1 | 0x20;
    }
  }
  else if (DAT_0b39 != 0) {
    DAT_0b39 = 0;
    bVar2 = DAT_08a1 & 0xdf;
  }
LAB_d355:
  DAT_08a1 = bVar2;
  DAT_08ae = DAT_08ae & 0xbf | 0xa2;
  DAT_0e1f = DAT_0e1e;
  return;
}


