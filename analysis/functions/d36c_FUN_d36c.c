/* Entry d36c */

void FUN_d36c(byte param_1)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  
  if (param_1 == 0x3e) {
    bVar6 = DAT_0020;
    DAT_0020 = bVar6 | 4;
    DAT_00cb = 0;
    DAT_0d0f = 0;
    DAT_0d3b = 0;
    DAT_0d0c = 0;
    DAT_0d0e = 0;
    DAT_0d06 = 0x40;
    DAT_0d11 = 1;
    DAT_0d07 = 0;
    DAT_0d13 = 0;
    DAT_0d12 = 0;
    DAT_0d14 = 0;
    bVar6 = DAT_0d08;
    DAT_0d08 = bVar6 & 0x89;
    cVar7 = DAT_0044._1_1_;
    DAT_0d3a = cVar7;
    cVar7 = cVar7 * '\x13' + '\x13';
    DAT_0d17 = cVar7;
    DAT_08a6 = cVar7;
    cVar7 = cVar7 * '\x13' + '\x13';
    DAT_0d18 = cVar7;
    DAT_08a7 = cVar7;
    cVar8 = cVar7 * '\x13' + '\x13';
    DAT_0d19 = cVar8;
    DAT_08a9 = cVar8;
    DAT_08a8 = 0x43;
    cVar8 = DAT_08a6;
    cVar1 = DAT_08a7;
    DAT_08aa = cVar7 * '\x13' + 'V' + cVar8 + cVar1;
    bVar6 = DAT_0d06;
    DAT_0d06 = bVar6 | 0x20;
    goto LAB_d696;
  }
  if (param_1 == 0x3d) {
    DAT_0d0f = 0;
    bVar6 = DAT_0d06;
    if ((~bVar6 & 0x40) != 0) {
      bVar6 = DAT_0d07;
      DAT_0d07 = bVar6 & 0xf7;
      DAT_0d0e = 0;
      cVar7 = DAT_0d11;
      if (cVar7 == '\x01') {
        DAT_0d11 = 2;
        DAT_0d0c = 0;
        bVar6 = DAT_0d08;
        if ((bVar6 & 0x80) == 0) {
          RAM08a6 = 0x4a4a;
          RAM08a8 = 0x4a4a;
          DAT_08aa = 0x28;
          bVar6 = DAT_0d06;
          DAT_0d06 = bVar6 | 0x10;
        }
        else {
          uVar3 = DAT_0d37;
          RAM08a6 = uVar3;
          cVar7 = DAT_0d39;
          DAT_08a9 = cVar7;
          DAT_08a8 = 0x4b;
          DAT_08aa = (char)((ushort)uVar3 >> 8) + (char)uVar3 + cVar7 + 'K';
          bVar6 = DAT_0d06;
          DAT_0d06 = bVar6 | 0x10;
        }
        goto LAB_d696;
      }
LAB_d430:
      bVar6 = DAT_0d07;
      DAT_0d07 = bVar6 & 0xf7;
      DAT_0d0e = 0;
      bVar6 = DAT_0d0c;
      bVar6 = (bVar6 + 1) - (0xfe < bVar6);
      DAT_0d0c = bVar6;
      if (DAT_4e80 <= bVar6) {
        bVar6 = DAT_0d08;
        DAT_0d08 = bVar6 | 1;
      }
      bVar6 = DAT_0d06;
      DAT_0d06 = bVar6 & 0x7f;
      DAT_0d11 = 0;
      DAT_0d12 = 0;
      DAT_0d13 = 0;
      DAT_08a6 = 0;
      RAM08a7 = 0x38;
      RAM08a9 = 0x38;
      goto LAB_d696;
    }
  }
  else {
    uVar4 = CONCAT11(param_1,param_1) & 0xc0ff;
    if ((char)(uVar4 >> 8) == -0x80) {
      DAT_0d0f = 0;
      bVar6 = DAT_0d06;
      if ((~bVar6 & 0x40) != 0) {
        bVar6 = DAT_0d07;
        DAT_0d07 = bVar6 & 0xf7;
        DAT_0d0e = 0;
        cVar7 = DAT_0d11;
        bVar6 = DAT_0d13;
        if (bVar6 == 0) {
          cVar7 = cVar7 + '\x01';
          DAT_0d11 = cVar7;
        }
        if ((cVar7 == '\x03') && (bVar6 < 3)) {
          if (bVar6 == 2) {
            bVar2 = DAT_0d06;
            DAT_0d06 = bVar2 | 2;
          }
          DAT_0d0c = 0;
          bVar2 = DAT_0d13;
          uVar5 = DAT_0d10;
          (&DAT_0d25)[bVar2] = uVar5;
          DAT_0d13 = bVar6 + 1;
          RAM08a6 = 0x4747;
          RAM08a8 = 0x4747;
          DAT_08aa = 0x1c;
          goto LAB_d696;
        }
        DAT_0d3b = 0x30;
        goto LAB_d430;
      }
    }
    else {
      uVar5 = (undefined1)uVar4;
      uVar4 = CONCAT11(uVar5,uVar5) & 0xc0ff;
      if ((char)(uVar4 >> 8) == '@') {
        DAT_0d0f = 0;
        bVar6 = DAT_0d06;
        if ((~bVar6 & 0x40) != 0) {
          bVar6 = DAT_0d07;
          DAT_0d07 = bVar6 & 0xf7;
          DAT_0d0e = 0;
          bVar6 = DAT_0d08;
          if ((~bVar6 & 0x80) == 0) {
            cVar7 = DAT_0d11;
            bVar6 = DAT_0d12;
            if (bVar6 == 0) {
              cVar7 = cVar7 + '\x01';
              DAT_0d11 = cVar7;
            }
            if ((cVar7 == '\x04') && (bVar6 < 9)) {
              if (bVar6 == 8) {
                bVar2 = DAT_0d06;
                DAT_0d06 = bVar2 | 8;
                bVar2 = DAT_0d06;
                DAT_0d06 = bVar2 | 4;
              }
              DAT_0d0c = 0;
              bVar2 = DAT_0d12;
              uVar5 = DAT_0d10;
              *(undefined1 *)((short)&DAT_0d28 + (ushort)bVar2) = uVar5;
              DAT_0d12 = bVar6 + 1;
              RAM08a6 = 0x4949;
              RAM08a8 = 0x4949;
              DAT_08aa = 0x24;
              goto LAB_d696;
            }
          }
          DAT_0d3b = 0x40;
          goto LAB_d430;
        }
      }
      else {
        bVar6 = (byte)uVar4;
        if (bVar6 == 0x3f) {
          DAT_0d0f = 0;
          bVar6 = DAT_0d06;
          if ((~bVar6 & 0x40) != 0) {
            bVar6 = DAT_0d07;
            DAT_0d07 = bVar6 & 0xf7;
            DAT_0d0e = 0;
            bVar6 = DAT_0d11;
            if ((2 < bVar6) && (bVar6 < 5)) {
              bVar6 = DAT_0d07;
              if ((~bVar6 & 0x10) != 0) goto LAB_d430;
              DAT_0d0c = 0;
              bVar6 = DAT_0d06;
              if ((((bVar6 & 8) != 0) && (bVar6 = DAT_0d08, (bVar6 & 0x40) == 0)) ||
                 (bVar6 = DAT_0d08, (bVar6 & 0x20) == 0)) {
                RAM08a6 = 0x4949;
                RAM08a8 = 0x4949;
                DAT_08aa = 0x24;
                goto LAB_d696;
              }
              bVar6 = DAT_0d08;
              if ((bVar6 & 0x10) == 0) {
                bVar6 = DAT_0d08;
                DAT_0d08 = bVar6 | 1;
                RAM08a6 = 0x4646;
                RAM08a8 = 0x4646;
                DAT_08aa = 0x18;
                goto LAB_d696;
              }
              bVar6 = DAT_0d14;
              bVar6 = (bVar6 + 1) - (0xfe < bVar6);
              DAT_0d14 = bVar6;
              if (bVar6 < 5) {
                if (3 < bVar6) {
                  bVar6 = DAT_0d06;
                  DAT_0d06 = bVar6 | 0x80;
                  bVar6 = DAT_0d08;
                  if ((bVar6 & 1) != 0) {
                    bVar6 = DAT_0d08;
                    DAT_0d08 = bVar6 & 0xfe;
                    DAT_0afc = 0;
                    bVar6 = DAT_0881;
                    if ((~bVar6 & 0x20) == 0) {
                      bVar6 = DAT_0d08;
                      DAT_0d08 = bVar6 | 2;
                    }
                  }
                }
                RAM08a6 = 0x4545;
                RAM08a8 = 0x4545;
                DAT_08aa = 0x14;
                goto LAB_d696;
              }
            }
            RAM08a6 = 0x4444;
            RAM08a8 = 0x4444;
            DAT_08aa = 0x10;
            goto LAB_d696;
          }
        }
        else if ((bVar6 < 0x33) || (0x37 < bVar6)) {
          if ((bVar6 != 0xfe) &&
             ((((bVar6 != 1 && (bVar6 != 2)) && (bVar6 != 5)) &&
              (bVar6 = DAT_0d06, (bVar6 & 0x40) != 0)))) {
            bVar6 = DAT_0d07;
            DAT_0d07 = bVar6 | 0x40;
            DAT_0d3b = 0xff;
            goto LAB_d430;
          }
        }
        else {
          DAT_0d3b = 0xe0;
          DAT_0d0f = 0;
          if ((bVar6 == 0x37) || (bVar6 = DAT_0d06, (bVar6 & 0x40) != 0)) {
            bVar6 = DAT_0d07;
            DAT_0d07 = bVar6 & 0xf7;
            DAT_0d0e = 0;
            bVar6 = DAT_0d0c;
            bVar6 = (bVar6 + 1) - (0xfe < bVar6);
            DAT_0d0c = bVar6;
            if (DAT_4e80 <= bVar6) {
              bVar6 = DAT_0d08;
              DAT_0d08 = bVar6 | 1;
            }
            bVar6 = DAT_0d07;
            DAT_0d07 = bVar6 | 0x80;
            bVar6 = DAT_0d06;
            DAT_0d06 = bVar6 & 0x7f;
            DAT_0d11 = 0;
            DAT_0d12 = 0;
            DAT_0d13 = 0;
            DAT_08a6 = 0;
            RAM08a7 = (ushort)param_1;
            RAM08a9 = (ushort)param_1;
            goto LAB_d696;
          }
        }
      }
    }
  }
  bVar6 = DAT_0020;
  DAT_0020 = bVar6 | 4;
  DAT_00cb = 0;
  bVar6 = DAT_0d07;
  DAT_0d07 = bVar6 | 8;
  bVar6 = DAT_0d07;
  DAT_0d07 = bVar6 & 0xfb;
  DAT_0d0d = 0;
  DAT_08a6 = 0;
  RAM08a7 = 0x48;
  RAM08a9 = 0x48;
LAB_d696:
  bVar6 = DAT_08ae;
  DAT_08ae = bVar6 & 0xbf;
  bVar6 = DAT_08ae;
  DAT_08ae = bVar6 | 0x20;
  bVar6 = DAT_08ae;
  DAT_08ae = bVar6 | 1;
  return;
}


