/* Entry 6c5e */

void FUN_6c5e(undefined2 param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  
  DAT_0bce = (byte)((ushort)param_1 >> 8);
  uVar3 = ((ushort)DAT_0bce << 8) / 0xf0;
  if (0xfe < uVar3) {
    uVar3 = 0xfe;
  }
  DAT_0aec = (undefined1)uVar3;
  if ((((DAT_08a0 & 4) != 0) && (DAT_0bdd == DAT_0d4a)) && ((DAT_0893 & 0x10) != 0)) goto LAB_6d58;
  if (DAT_0bce < 0x26) {
    if ((~DAT_0888 & 0x80) == 0) {
      if ((~DAT_0888 & 1) != 0) {
        DAT_0888 = DAT_0888 & 0xfd;
        goto LAB_6d58;
      }
    }
    else {
      DAT_0888 = DAT_0888 & 0x7f;
    }
    DAT_0888 = DAT_0888 | 1;
  }
  else {
    if ((~DAT_0888 & 0x80) == 0) {
      DAT_0888 = DAT_0888 | 0x80;
    }
    else if ((~DAT_0888 & 1) != 0) {
      if ((((~DAT_0888 & 2) == 0) && (DAT_0888 = DAT_0888 | 2, (DAT_08a0 & 4) != 0)) &&
         ((~DAT_0893 & 0x80) == 0)) {
        if (DAT_0bdd == DAT_0d50) {
          if ((~DAT_0893 & 0x40) == 0) {
            DAT_0893 = DAT_0893 | 0x50;
            DAT_08b8 = DAT_08af;
            DAT_08b9 = DAT_08b0;
            DAT_08ba = DAT_08b1;
            DAT_08bb = DAT_08b2;
            DAT_0bd2 = DAT_0bd2 | 0xf;
          }
          else {
LAB_6d20:
            if ((~DAT_0893 & 0x40) == 0) {
              DAT_0893 = DAT_0893 | 0x60;
              DAT_0be2 = 0;
            }
          }
        }
        else if (((DAT_0bdd == DAT_0d46) || (DAT_0bdd == DAT_0d47)) ||
                ((DAT_0bdd == DAT_0d48 ||
                 ((((DAT_0bdd == DAT_0d49 || (DAT_0bdd == DAT_0d4a)) || (DAT_0bdd == DAT_0d4b)) ||
                  ((DAT_0bdd == DAT_0d4c || (DAT_0bdd == DAT_0d4d)))))))) goto LAB_6d20;
      }
LAB_6d58:
      DAT_0888 = DAT_0888 & 0xfe;
      goto LAB_6d5c;
    }
    DAT_0888 = DAT_0888 | 1;
  }
LAB_6d5c:
  bVar2 = DAT_0bd2;
  if (((DAT_0d62 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    if ((~DAT_08b1 & 4) == 0) {
      bVar1 = DAT_0000;
      if (((bVar1 & 4) == 0) || ((DAT_0888 & 2) != 0)) {
        DAT_08b7 = DAT_08b7 & 0x7f;
        DAT_0b48 = 0;
      }
      else if ((DAT_08b7 & 0x80) == 0) {
        DAT_08b7 = DAT_08b7 | 0x80;
      }
      else if (DAT_4e59 < DAT_0b48) {
        if ((~DAT_08b4 & 0x20) == 0) {
          DAT_08b4 = DAT_08b4 | 0x20;
          DAT_0be8 = DAT_0be8 | 0x80;
        }
        if ((~DAT_08b1 & 4) == 0) {
          DAT_08b1 = DAT_08b1 | 4;
          bVar2 = DAT_0bd2 | 0x20;
          if ((~DAT_08ba & 4) == 0) {
            DAT_08ba = DAT_08ba | 4;
            bVar2 = DAT_0bd2 | 0x22;
          }
        }
        goto LAB_6ebb;
      }
      bVar1 = DAT_0000;
      if (((~bVar1 & 4) == 0) && ((~DAT_0888 & 2) != 0)) {
        if ((DAT_08b7 & 0x40) == 0) {
          DAT_08b7 = DAT_08b7 | 0x40;
        }
        else if (DAT_0d8a < DAT_0b49) {
          if ((~DAT_08b4 & 0x10) == 0) {
            DAT_08b4 = DAT_08b4 | 0x10;
            DAT_0be8 = DAT_0be8 | 0x80;
          }
          if ((~DAT_08b1 & 4) == 0) {
            DAT_08b1 = DAT_08b1 | 4;
            bVar2 = DAT_0bd2 | 0x20;
            if ((~DAT_08ba & 4) == 0) {
              DAT_08ba = DAT_08ba | 4;
              bVar2 = DAT_0bd2 | 0x22;
            }
          }
        }
      }
      else {
        DAT_08b7 = DAT_08b7 & 0xbf;
        DAT_0b49 = 0;
      }
    }
    else {
      if ((DAT_08b4 & 0x20) == 0) {
        if ((DAT_08b4 & 0x10) != 0) {
          bVar1 = DAT_0000;
          if (((~bVar1 & 4) != 0) || ((DAT_0888 & 2) != 0)) {
            DAT_08b7 = DAT_08b7 | 0x40;
            DAT_0b53 = 0;
            goto LAB_6ebb;
          }
          if ((DAT_08b7 & 0x40) != 0) {
            DAT_08b7 = DAT_08b7 & 0xbf;
            goto LAB_6ebb;
          }
          if (DAT_0b53 <= DAT_0d8a) goto LAB_6ebb;
          if ((DAT_08b4 & 0x10) != 0) {
            DAT_08b4 = DAT_08b4 & 0xef;
            DAT_0be8 = DAT_0be8 | 0x80;
          }
          if ((DAT_08b1 & 4) != 0) {
            DAT_08b1 = DAT_08b1 & 0xfb;
            DAT_0bd2 = DAT_0bd2 | 0x20;
          }
        }
      }
      else {
        bVar1 = DAT_0000;
        if (((bVar1 & 4) == 0) || ((~DAT_0888 & 2) == 0)) {
          DAT_08b7 = DAT_08b7 | 0x80;
          DAT_0b52 = 0;
          goto LAB_6ebb;
        }
        if ((DAT_08b7 & 0x80) != 0) {
          DAT_08b7 = DAT_08b7 & 0x7f;
          goto LAB_6ebb;
        }
        if (DAT_0b52 <= DAT_0d8a) goto LAB_6ebb;
        if ((DAT_08b4 & 0x20) != 0) {
          DAT_08b4 = DAT_08b4 & 0xdf;
          DAT_0be8 = DAT_0be8 | 0x80;
        }
        if ((DAT_08b1 & 4) != 0) {
          DAT_08b1 = DAT_08b1 & 0xfb;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
      }
      DAT_0b48 = 0;
      DAT_0b49 = 0;
      bVar2 = DAT_0bd2;
    }
  }
LAB_6ebb:
  DAT_0bd2 = bVar2;
  DAT_08d9 = DAT_0bce;
  if ((~DAT_08b1 & 4) != 0) {
    DAT_08d9 = 0x9a;
  }
  if ((DAT_08b4 & 8) == 0) {
    if ((~DAT_0889 & 8) != 0) {
      if ((DAT_0888 & 2) == 0) {
        if ((DAT_08b7 & 0x20) == 0) {
          DAT_08b7 = DAT_08b7 | 0x20;
        }
        else if (DAT_4e37 < DAT_0bcf) {
          DAT_08b4 = DAT_08b4 | 8;
          DAT_0889 = DAT_0889 & 0xf7;
        }
      }
      else {
        DAT_08b7 = DAT_08b7 & 0xdf;
        DAT_0889 = DAT_0889 & 0xf7;
        DAT_0bcf = 0;
      }
    }
  }
  else if ((~DAT_0888 & 2) == 0) {
    DAT_08b7 = DAT_08b7 | 0x20;
    DAT_0bd0 = 0;
  }
  else {
    DAT_08b7 = DAT_08b7 & 0xdf;
    DAT_08b4 = DAT_08b4 & 0xf7;
    DAT_0bcf = 0;
  }
  if (DAT_0d64 == -0x80) {
    DAT_08c2 = 8;
    DAT_08c3 = 0;
    return;
  }
  if ((~DAT_08a0 & 4) != 0) {
    DAT_08c2 = 8;
    DAT_08c3 = 0;
    return;
  }
  if ((~DAT_08b2 & 0x80) != 0) {
    DAT_08c2 = 8;
    DAT_08c3 = 0;
    return;
  }
  if ((DAT_0881 & 0x10) == 0) {
    if ((DAT_4e5b <= DAT_0bce) && (DAT_0bce <= DAT_4e5c)) {
      if ((~DAT_08b7 & 8) == 0) {
        DAT_08b7 = DAT_08b7 & 0xef | 8;
        DAT_08c2 = 8;
        DAT_08c3 = 0;
        DAT_0b4a = 0;
        DAT_0b54 = 0;
        return;
      }
      if (DAT_4e5a < DAT_0b54) {
        if ((DAT_08b1 & 1) != 0) {
          DAT_08b1 = DAT_08b1 & 0xfe;
          DAT_08c2 = 8;
          DAT_08c3 = 0;
          DAT_0bd2 = DAT_0bd2 | 0x20;
          return;
        }
        DAT_08c2 = 8;
        DAT_08c3 = 0;
        return;
      }
      DAT_08c2 = 8;
      DAT_08c3 = 0;
      return;
    }
    if ((DAT_0888 & 2) != 0) {
      if ((~DAT_08b7 & 0x10) == 0) {
        DAT_08b7 = DAT_08b7 & 0xf7 | 0x10;
        DAT_08c2 = 8;
        DAT_08c3 = 0;
        DAT_0b4a = 0;
        DAT_0b54 = 0;
        return;
      }
      if (DAT_4e5a < DAT_0b4a) {
        if ((~DAT_08b1 & 1) == 0) {
          DAT_08b1 = DAT_08b1 | 1;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
        if ((~DAT_08ba & 1) == 0) {
          DAT_08ba = DAT_08ba | 1;
          DAT_08c2 = 8;
          DAT_08c3 = 0;
          DAT_0bd2 = DAT_0bd2 | 2;
          return;
        }
        DAT_08c2 = 8;
        DAT_08c3 = 0;
        return;
      }
      DAT_08c2 = 8;
      DAT_08c3 = 0;
      return;
    }
  }
  DAT_0b54 = 0;
  DAT_0b4a = 0;
  DAT_08b7 = DAT_08b7 & 0xe7;
  DAT_08c2 = 8;
  DAT_08c3 = 0;
  return;
}


