/* Entry d36c */

void FUN_d36c(char param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  
  if (param_1 == '>') {
    bVar3 = DAT_0020;
    DAT_0020 = bVar3 | 4;
    DAT_00cb = 0;
    DAT_0d0f = 0;
    DAT_0d3b = 0;
    DAT_0d0c = 0;
    DAT_0d0e = 0;
    DAT_0d11 = 1;
    DAT_0d07 = 0;
    DAT_0d13 = 0;
    DAT_0d12 = 0;
    DAT_0d14 = 0;
    DAT_0d08 = DAT_0d08 & 0x89;
    DAT_0d3a = DAT_0044._1_1_;
    DAT_08a6 = DAT_0d3a * '\x13' + '\x13';
    DAT_08a7 = DAT_08a6 * '\x13' + '\x13';
    DAT_08a9 = DAT_08a7 * '\x13' + '\x13';
    DAT_08a8 = 'C';
    DAT_08aa = DAT_08a7 * '\x13' + 'V' + DAT_08a6 + DAT_08a7;
    DAT_0d06 = 0x60;
    DAT_0d17 = DAT_08a6;
    DAT_0d18 = DAT_08a7;
    DAT_0d19 = DAT_08a9;
    goto LAB_d696;
  }
  if (param_1 == '=') {
    DAT_0d0f = 0;
    if ((~DAT_0d06 & 0x40) != 0) {
      DAT_0d07 = DAT_0d07 & 0xf7;
      DAT_0d0e = 0;
      if (DAT_0d11 == 1) {
        DAT_0d0c = 0;
        DAT_0d11 = 2;
        if ((DAT_0d08 & 0x80) == 0) {
          DAT_08a6 = 'J';
          DAT_08a7 = 'J';
          DAT_08a8 = 'J';
          DAT_08a9 = 'J';
          DAT_08aa = '(';
          DAT_0d06 = DAT_0d06 | 0x10;
        }
        else {
          DAT_08a6 = (char)((ushort)DAT_0d37 >> 8);
          DAT_08a7 = (char)DAT_0d37;
          DAT_08a9 = DAT_0d39;
          DAT_08a8 = 'K';
          DAT_08aa = DAT_08a6 + DAT_08a7 + DAT_0d39 + 'K';
          DAT_0d06 = DAT_0d06 | 0x10;
        }
        goto LAB_d696;
      }
LAB_d430:
      DAT_0d07 = DAT_0d07 & 0xf7;
      DAT_0d0e = 0;
      DAT_0d0c = (DAT_0d0c + 1) - (0xfe < DAT_0d0c);
      if (DAT_4e80 <= DAT_0d0c) {
        DAT_0d08 = DAT_0d08 | 1;
      }
      DAT_0d06 = DAT_0d06 & 0x7f;
      DAT_0d11 = 0;
      DAT_0d12 = 0;
      DAT_0d13 = 0;
      DAT_08a6 = '\0';
      DAT_08a7 = '\0';
      DAT_08a8 = '8';
      DAT_08a9 = '\0';
      DAT_08aa = '8';
      goto LAB_d696;
    }
  }
  else {
    uVar1 = CONCAT11(param_1,param_1) & 0xc0ff;
    if ((char)(uVar1 >> 8) == -0x80) {
      DAT_0d0f = 0;
      if ((~DAT_0d06 & 0x40) != 0) {
        DAT_0d07 = DAT_0d07 & 0xf7;
        DAT_0d0e = 0;
        if (DAT_0d13 == 0) {
          DAT_0d11 = DAT_0d11 + 1;
        }
        if ((DAT_0d11 == 3) && (DAT_0d13 < 3)) {
          if (DAT_0d13 == 2) {
            DAT_0d06 = DAT_0d06 | 2;
          }
          DAT_0d0c = 0;
          (&DAT_0d25)[DAT_0d13] = DAT_0d10;
          DAT_0d13 = DAT_0d13 + 1;
          DAT_08a6 = 'G';
          DAT_08a7 = 'G';
          DAT_08a8 = 'G';
          DAT_08a9 = 'G';
          DAT_08aa = '\x1c';
          goto LAB_d696;
        }
        DAT_0d3b = 0x30;
        goto LAB_d430;
      }
    }
    else {
      uVar2 = (undefined1)uVar1;
      uVar1 = CONCAT11(uVar2,uVar2) & 0xc0ff;
      if ((char)(uVar1 >> 8) == '@') {
        DAT_0d0f = 0;
        if ((~DAT_0d06 & 0x40) != 0) {
          DAT_0d07 = DAT_0d07 & 0xf7;
          DAT_0d0e = 0;
          if ((~DAT_0d08 & 0x80) == 0) {
            if (DAT_0d12 == 0) {
              DAT_0d11 = DAT_0d11 + 1;
            }
            if ((DAT_0d11 == 4) && (DAT_0d12 < 9)) {
              if (DAT_0d12 == 8) {
                DAT_0d06 = DAT_0d06 | 0xc;
              }
              DAT_0d0c = 0;
              *(undefined1 *)((short)&DAT_0d28 + (ushort)DAT_0d12) = DAT_0d10;
              DAT_0d12 = DAT_0d12 + 1;
              DAT_08a6 = 'I';
              DAT_08a7 = 'I';
              DAT_08a8 = 'I';
              DAT_08a9 = 'I';
              DAT_08aa = '$';
              goto LAB_d696;
            }
          }
          DAT_0d3b = 0x40;
          goto LAB_d430;
        }
      }
      else {
        bVar3 = (byte)uVar1;
        if (bVar3 == 0x3f) {
          DAT_0d0f = 0;
          if ((~DAT_0d06 & 0x40) != 0) {
            DAT_0d07 = DAT_0d07 & 0xf7;
            DAT_0d0e = 0;
            if ((2 < DAT_0d11) && (DAT_0d11 < 5)) {
              if ((~DAT_0d07 & 0x10) != 0) goto LAB_d430;
              DAT_0d0c = 0;
              if ((((DAT_0d06 & 8) != 0) && ((DAT_0d08 & 0x40) == 0)) || ((DAT_0d08 & 0x20) == 0)) {
                DAT_08a6 = 'I';
                DAT_08a7 = 'I';
                DAT_08a8 = 'I';
                DAT_08a9 = 'I';
                DAT_08aa = '$';
                goto LAB_d696;
              }
              if ((DAT_0d08 & 0x10) == 0) {
                DAT_0d08 = DAT_0d08 | 1;
                DAT_08a6 = 'F';
                DAT_08a7 = 'F';
                DAT_08a8 = 'F';
                DAT_08a9 = 'F';
                DAT_08aa = '\x18';
                goto LAB_d696;
              }
              DAT_0d14 = (DAT_0d14 + 1) - (0xfe < DAT_0d14);
              if (DAT_0d14 < 5) {
                if ((3 < DAT_0d14) && (DAT_0d06 = DAT_0d06 | 0x80, (DAT_0d08 & 1) != 0)) {
                  DAT_0d08 = DAT_0d08 & 0xfe;
                  DAT_0afc = 0;
                  if ((~DAT_0881 & 0x20) == 0) {
                    DAT_0d08 = DAT_0d08 | 2;
                  }
                }
                DAT_08a6 = 'E';
                DAT_08a7 = 'E';
                DAT_08a8 = 'E';
                DAT_08a9 = 'E';
                DAT_08aa = '\x14';
                goto LAB_d696;
              }
            }
            DAT_08a6 = 'D';
            DAT_08a7 = 'D';
            DAT_08a8 = 'D';
            DAT_08a9 = 'D';
            DAT_08aa = '\x10';
            goto LAB_d696;
          }
        }
        else if ((bVar3 < 0x33) || (0x37 < bVar3)) {
          if ((bVar3 != 0xfe) &&
             ((((bVar3 != 1 && (bVar3 != 2)) && (bVar3 != 5)) && ((DAT_0d06 & 0x40) != 0)))) {
            DAT_0d07 = DAT_0d07 | 0x40;
            DAT_0d3b = 0xff;
            goto LAB_d430;
          }
        }
        else {
          DAT_0d3b = 0xe0;
          DAT_0d0f = 0;
          if ((bVar3 == 0x37) || ((DAT_0d06 & 0x40) != 0)) {
            DAT_0d0e = 0;
            DAT_0d0c = (DAT_0d0c + 1) - (0xfe < DAT_0d0c);
            if (DAT_4e80 <= DAT_0d0c) {
              DAT_0d08 = DAT_0d08 | 1;
            }
            DAT_0d07 = DAT_0d07 & 0xf7 | 0x80;
            DAT_0d06 = DAT_0d06 & 0x7f;
            DAT_0d11 = 0;
            DAT_0d12 = 0;
            DAT_0d13 = 0;
            DAT_08a6 = '\0';
            DAT_08a7 = '\0';
            DAT_08a9 = '\0';
            DAT_08a8 = param_1;
            DAT_08aa = param_1;
            goto LAB_d696;
          }
        }
      }
    }
  }
  bVar3 = DAT_0020;
  DAT_0020 = bVar3 | 4;
  DAT_00cb = 0;
  DAT_0d07 = DAT_0d07 & 0xfb | 8;
  DAT_0d0d = 0;
  DAT_08a6 = '\0';
  DAT_08a7 = '\0';
  DAT_08a8 = 'H';
  DAT_08a9 = '\0';
  DAT_08aa = 'H';
LAB_d696:
  DAT_08ae = DAT_08ae & 0xbf | 0x21;
  return;
}


