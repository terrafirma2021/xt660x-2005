/* Entry 6c5e */

void FUN_6c5e(undefined2 param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  
  bVar4 = (byte)((ushort)param_1 >> 8);
  DAT_0bce = bVar4;
  uVar6 = ((ushort)bVar4 << 8) / 0xf0;
  if (0xfe < uVar6) {
    uVar6 = 0xfe;
  }
  DAT_0aec = (char)uVar6;
  bVar4 = DAT_08a0;
  if ((bVar4 & 4) != 0) {
    cVar1 = DAT_0bdd;
    cVar2 = DAT_0d4a;
    if ((cVar1 != cVar2) || (bVar4 = DAT_0893, (bVar4 & 0x10) == 0)) goto LAB_6c89;
    goto LAB_6d58;
  }
LAB_6c89:
  bVar4 = DAT_0bce;
  if (bVar4 < 0x26) {
    bVar4 = DAT_0888;
    if ((~bVar4 & 0x80) == 0) {
      bVar4 = DAT_0888;
      DAT_0888 = bVar4 & 0x7f;
    }
    else {
      bVar4 = DAT_0888;
      if ((~bVar4 & 1) == 0) {
        bVar4 = DAT_0888;
        DAT_0888 = bVar4 & 0xfd;
        goto LAB_6d58;
      }
    }
    bVar4 = DAT_0888;
    DAT_0888 = bVar4 | 1;
  }
  else {
    bVar4 = DAT_0888;
    if ((~bVar4 & 0x80) == 0) {
      bVar4 = DAT_0888;
      if ((~bVar4 & 1) == 0) {
        bVar4 = DAT_0888;
        if ((~bVar4 & 2) != 0) {
          bVar4 = DAT_0888;
          DAT_0888 = bVar4 | 2;
          bVar4 = DAT_08a0;
          if (((bVar4 & 4) != 0) && (bVar4 = DAT_0893, (~bVar4 & 0x80) != 0)) {
            cVar1 = DAT_0bdd;
            cVar2 = DAT_0d50;
            if (cVar1 == cVar2) {
              bVar4 = DAT_0893;
              if ((~bVar4 & 0x40) == 0) {
LAB_6d20:
                bVar4 = DAT_0893;
                if ((~bVar4 & 0x40) != 0) {
                  bVar4 = DAT_0893;
                  DAT_0893 = bVar4 | 0x40;
                  bVar4 = DAT_0893;
                  DAT_0893 = bVar4 | 0x20;
                  DAT_0be2 = 0;
                }
              }
              else {
                bVar4 = DAT_0893;
                DAT_0893 = bVar4 | 0x40;
                bVar4 = DAT_0893;
                DAT_0893 = bVar4 | 0x10;
                uVar5 = DAT_08af;
                DAT_08b8 = uVar5;
                uVar5 = DAT_08b0;
                DAT_08b9 = uVar5;
                uVar5 = DAT_08b1;
                DAT_08ba = uVar5;
                uVar5 = DAT_08b2;
                DAT_08bb = uVar5;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 8;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 4;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 2;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 1;
              }
            }
            else {
              cVar2 = DAT_0d46;
              if ((((((cVar1 == cVar2) || (cVar2 = DAT_0d47, cVar1 == cVar2)) ||
                    (cVar2 = DAT_0d48, cVar1 == cVar2)) ||
                   ((cVar2 = DAT_0d49, cVar1 == cVar2 || (cVar2 = DAT_0d4a, cVar1 == cVar2)))) ||
                  (cVar2 = DAT_0d4b, cVar1 == cVar2)) ||
                 ((cVar2 = DAT_0d4c, cVar1 == cVar2 || (cVar2 = DAT_0d4d, cVar1 == cVar2))))
              goto LAB_6d20;
            }
          }
        }
LAB_6d58:
        bVar4 = DAT_0888;
        DAT_0888 = bVar4 & 0xfe;
        goto LAB_6d5c;
      }
    }
    else {
      bVar4 = DAT_0888;
      DAT_0888 = bVar4 | 0x80;
    }
    bVar4 = DAT_0888;
    DAT_0888 = bVar4 | 1;
  }
LAB_6d5c:
  cVar1 = DAT_0d62;
  if (((cVar1 != -0x80) && (bVar4 = DAT_08a0, (~bVar4 & 4) != 0)) &&
     (bVar4 = DAT_08b2, (~bVar4 & 0x80) != 0)) {
    bVar4 = DAT_08b1;
    if ((~bVar4 & 4) == 0) {
      bVar4 = DAT_08b4;
      if ((bVar4 & 0x20) == 0) {
        bVar4 = DAT_08b4;
        if ((bVar4 & 0x10) == 0) {
LAB_6eb4:
          DAT_0b48 = 0;
          DAT_0b49 = 0;
        }
        else {
          bVar4 = DAT_0000;
          if (((~bVar4 & 4) == 0) || (bVar4 = DAT_0888, (bVar4 & 2) != 0)) {
            bVar4 = DAT_08b7;
            DAT_08b7 = bVar4 | 0x40;
            DAT_0b53 = 0;
          }
          else {
            bVar4 = DAT_08b7;
            if ((bVar4 & 0x40) == 0) {
              bVar4 = DAT_0b53;
              bVar3 = DAT_0d8a;
              if (bVar3 < bVar4) {
                bVar4 = DAT_08b4;
                if ((bVar4 & 0x10) != 0) {
                  bVar4 = DAT_08b4;
                  DAT_08b4 = bVar4 & 0xef;
                  bVar4 = DAT_0be8;
                  DAT_0be8 = bVar4 | 0x80;
                }
                bVar4 = DAT_08b1;
                if ((bVar4 & 4) != 0) {
                  bVar4 = DAT_08b1;
                  DAT_08b1 = bVar4 & 0xfb;
                  bVar4 = DAT_0bd2;
                  DAT_0bd2 = bVar4 | 0x20;
                }
                goto LAB_6eb4;
              }
            }
            else {
              bVar4 = DAT_08b7;
              DAT_08b7 = bVar4 & 0xbf;
            }
          }
        }
      }
      else {
        bVar4 = DAT_0000;
        if (((bVar4 & 4) == 0) || (bVar4 = DAT_0888, (~bVar4 & 2) != 0)) {
          bVar4 = DAT_08b7;
          DAT_08b7 = bVar4 | 0x80;
          DAT_0b52 = 0;
        }
        else {
          bVar4 = DAT_08b7;
          if ((bVar4 & 0x80) == 0) {
            bVar4 = DAT_0b52;
            bVar3 = DAT_0d8a;
            if (bVar3 < bVar4) {
              bVar4 = DAT_08b4;
              if ((bVar4 & 0x20) != 0) {
                bVar4 = DAT_08b4;
                DAT_08b4 = bVar4 & 0xdf;
                bVar4 = DAT_0be8;
                DAT_0be8 = bVar4 | 0x80;
              }
              bVar4 = DAT_08b1;
              if ((bVar4 & 4) != 0) {
                bVar4 = DAT_08b1;
                DAT_08b1 = bVar4 & 0xfb;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 0x20;
              }
              goto LAB_6eb4;
            }
          }
          else {
            bVar4 = DAT_08b7;
            DAT_08b7 = bVar4 & 0x7f;
          }
        }
      }
    }
    else {
      bVar4 = DAT_0000;
      if (((bVar4 & 4) == 0) || (bVar4 = DAT_0888, (bVar4 & 2) != 0)) {
        bVar4 = DAT_08b7;
        DAT_08b7 = bVar4 & 0x7f;
        DAT_0b48 = 0;
      }
      else {
        bVar4 = DAT_08b7;
        if ((bVar4 & 0x80) == 0) {
          bVar4 = DAT_08b7;
          DAT_08b7 = bVar4 | 0x80;
        }
        else {
          bVar4 = DAT_0b48;
          if (DAT_4e59 < bVar4) {
            bVar4 = DAT_08b4;
            if ((~bVar4 & 0x20) != 0) {
              bVar4 = DAT_08b4;
              DAT_08b4 = bVar4 | 0x20;
              bVar4 = DAT_0be8;
              DAT_0be8 = bVar4 | 0x80;
            }
            bVar4 = DAT_08b1;
            if ((~bVar4 & 4) != 0) {
              bVar4 = DAT_08b1;
              DAT_08b1 = bVar4 | 4;
              bVar4 = DAT_0bd2;
              DAT_0bd2 = bVar4 | 0x20;
              bVar4 = DAT_08ba;
              if ((~bVar4 & 4) != 0) {
                bVar4 = DAT_08ba;
                DAT_08ba = bVar4 | 4;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 2;
              }
            }
            goto LAB_6ebb;
          }
        }
      }
      bVar4 = DAT_0000;
      if (((~bVar4 & 4) == 0) || (bVar4 = DAT_0888, (~bVar4 & 2) != 0)) {
        bVar4 = DAT_08b7;
        DAT_08b7 = bVar4 & 0xbf;
        DAT_0b49 = 0;
      }
      else {
        bVar4 = DAT_08b7;
        if ((bVar4 & 0x40) == 0) {
          bVar4 = DAT_08b7;
          DAT_08b7 = bVar4 | 0x40;
        }
        else {
          bVar4 = DAT_0b49;
          bVar3 = DAT_0d8a;
          if (bVar3 < bVar4) {
            bVar4 = DAT_08b4;
            if ((~bVar4 & 0x10) != 0) {
              bVar4 = DAT_08b4;
              DAT_08b4 = bVar4 | 0x10;
              bVar4 = DAT_0be8;
              DAT_0be8 = bVar4 | 0x80;
            }
            bVar4 = DAT_08b1;
            if ((~bVar4 & 4) != 0) {
              bVar4 = DAT_08b1;
              DAT_08b1 = bVar4 | 4;
              bVar4 = DAT_0bd2;
              DAT_0bd2 = bVar4 | 0x20;
              bVar4 = DAT_08ba;
              if ((~bVar4 & 4) != 0) {
                bVar4 = DAT_08ba;
                DAT_08ba = bVar4 | 4;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 2;
              }
            }
          }
        }
      }
    }
  }
LAB_6ebb:
  bVar4 = DAT_08b1;
  if ((~bVar4 & 4) == 0) {
    uVar5 = 0x9a;
  }
  else {
    uVar5 = DAT_0bce;
  }
  DAT_08d9 = uVar5;
  bVar4 = DAT_08b4;
  if ((bVar4 & 8) == 0) {
    bVar4 = DAT_0889;
    if ((~bVar4 & 8) == 0) {
      bVar4 = DAT_0888;
      if ((bVar4 & 2) == 0) {
        bVar4 = DAT_08b7;
        if ((bVar4 & 0x20) == 0) {
          bVar4 = DAT_08b7;
          DAT_08b7 = bVar4 | 0x20;
        }
        else {
          bVar4 = DAT_0bcf;
          if (DAT_4e37 < bVar4) {
            bVar4 = DAT_08b4;
            DAT_08b4 = bVar4 | 8;
            bVar4 = DAT_0889;
            DAT_0889 = bVar4 & 0xf7;
          }
        }
      }
      else {
        bVar4 = DAT_08b7;
        DAT_08b7 = bVar4 & 0xdf;
        bVar4 = DAT_0889;
        DAT_0889 = bVar4 & 0xf7;
        DAT_0bcf = 0;
      }
    }
  }
  else {
    bVar4 = DAT_0888;
    if ((~bVar4 & 2) == 0) {
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 & 0xdf;
      bVar4 = DAT_08b4;
      DAT_08b4 = bVar4 & 0xf7;
      DAT_0bcf = 0;
    }
    else {
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 | 0x20;
      DAT_0bd0 = 0;
    }
  }
  cVar1 = DAT_0d64;
  if (((cVar1 == -0x80) || (bVar4 = DAT_08a0, (~bVar4 & 4) == 0)) ||
     (bVar4 = DAT_08b2, (~bVar4 & 0x80) == 0)) goto LAB_6fb8;
  bVar4 = DAT_0881;
  if ((bVar4 & 0x10) == 0) {
    bVar4 = DAT_0bce;
    if ((bVar4 < DAT_4e5b) || (DAT_4e5c < bVar4)) {
      bVar4 = DAT_0888;
      if ((bVar4 & 2) == 0) goto LAB_6f3b;
      bVar4 = DAT_08b7;
      if ((~bVar4 & 0x10) == 0) {
        bVar4 = DAT_0b4a;
        if (DAT_4e5a < bVar4) {
          bVar4 = DAT_08b1;
          if ((~bVar4 & 1) != 0) {
            bVar4 = DAT_08b1;
            DAT_08b1 = bVar4 | 1;
            bVar4 = DAT_0bd2;
            DAT_0bd2 = bVar4 | 0x20;
          }
          bVar4 = DAT_08ba;
          if ((~bVar4 & 1) != 0) {
            bVar4 = DAT_08ba;
            DAT_08ba = bVar4 | 1;
            bVar4 = DAT_0bd2;
            DAT_0bd2 = bVar4 | 2;
          }
        }
        goto LAB_6fb8;
      }
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 | 0x10;
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 & 0xf7;
    }
    else {
      bVar4 = DAT_08b7;
      if ((~bVar4 & 8) == 0) {
        bVar4 = DAT_0b54;
        if ((DAT_4e5a < bVar4) && (bVar4 = DAT_08b1, (bVar4 & 1) != 0)) {
          bVar4 = DAT_08b1;
          DAT_08b1 = bVar4 & 0xfe;
          bVar4 = DAT_0bd2;
          DAT_0bd2 = bVar4 | 0x20;
        }
        goto LAB_6fb8;
      }
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 | 8;
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 & 0xef;
    }
  }
  else {
LAB_6f3b:
    bVar4 = DAT_08b7;
    DAT_08b7 = bVar4 & 0xef;
    bVar4 = DAT_08b7;
    DAT_08b7 = bVar4 & 0xf7;
  }
  DAT_0b4a = 0;
  DAT_0b54 = 0;
LAB_6fb8:
  DAT_08c2 = 8;
  DAT_08c3 = 0;
  return;
}


