/* Entry 6af6 */

void FUN_6af6(undefined2 param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte extraout_A;
  ushort uVar4;
  
  bVar3 = (byte)((ushort)param_1 >> 8);
  DAT_08dc = bVar3;
  if (bVar3 < 0x17) {
    bVar1 = DAT_09a1;
    DAT_09a1 = bVar1 & 0xfe;
  }
  else {
    bVar1 = DAT_09a1;
    DAT_09a1 = bVar1 | 1;
  }
  if (bVar3 < 0x1c) {
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 | 4;
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xef;
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xf7;
  }
  else {
    bVar3 = DAT_09a1;
    if ((bVar3 & 8) != 0) {
      bVar3 = DAT_09a1;
      DAT_09a1 = bVar3 | 0x10;
    }
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 | 8;
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xfb;
  }
  bVar3 = DAT_09a1;
  if ((~bVar3 & 1) == 0) {
    bVar3 = DAT_09ab;
    if (DAT_18b4 <= bVar3) {
      bVar3 = DAT_09a1;
      DAT_09a1 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_09aa;
    if (DAT_18b3 <= bVar3) {
      bVar3 = DAT_09a1;
      DAT_09a1 = bVar3 | 2;
    }
  }
  bVar3 = DAT_0881;
  if ((~bVar3 & 0x10) == 0) {
    bVar3 = DAT_09a1;
    if ((~bVar3 & 0x10) == 0) {
      if (DAT_18b5 != -0x80) {
        uVar4 = lookup_u8_uniform_axis((uchar)param_1,&UNK_18b6);
        extraout_A = (byte)(uVar4 >> 8);
        DAT_0cae = extraout_A;
        bVar3 = DAT_0caf;
        if (extraout_A <= bVar3) goto LAB_6b6b;
      }
    }
    else {
LAB_6b6b:
      bVar3 = DAT_09a1;
      if ((~bVar3 & 0x40) == 0) {
        bVar3 = DAT_09a1;
        DAT_09a1 = bVar3 | 0x40;
      }
    }
  }
  bVar3 = DAT_09a1;
  if ((((bVar3 & 0x80) == 0) || (bVar3 = DAT_09a1, (bVar3 & 4) == 0)) ||
     (bVar3 = DAT_09a1, (bVar3 & 0x40) == 0)) {
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xdf;
    DAT_09ac = 0;
LAB_6ba3:
    bVar3 = DAT_0881;
    if ((~bVar3 & 0x20) != 0) goto LAB_6b8f;
  }
  else {
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 | 0x20;
    bVar3 = DAT_09ac;
    if (bVar3 < DAT_18c8) goto LAB_6ba3;
LAB_6b8f:
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xbf;
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xdf;
    DAT_09ac = 0;
  }
  cVar2 = DAT_0d5a;
  if (((cVar2 != -0x80) && (cVar2 = DAT_0d87, cVar2 != '\t')) &&
     ((bVar3 = DAT_08a0, (~bVar3 & 4) == 0 && (bVar3 = DAT_08b2, (~bVar3 & 0x80) == 0)))) {
    bVar3 = DAT_08b0;
    if ((~bVar3 & 0x10) == 0) {
      bVar3 = DAT_08f4;
      if ((((((DAT_4e4c <= bVar3) && (uVar4 = DAT_0900, DAT_4e4e <= uVar4)) &&
            (uVar4 = DAT_08e8, DAT_4e50 <= uVar4)) &&
           ((cVar2 = DAT_0d87, cVar2 != '\t' || (bVar3 = DAT_0889, (bVar3 & 0x80) != 0)))) &&
          ((bVar3 = DAT_0bab, (~bVar3 & 8) == 0 &&
           ((bVar3 = DAT_08af, (~bVar3 & 4) == 0 && (bVar3 = DAT_0bac, (~bVar3 & 0x80) == 0)))))) &&
         (bVar3 = DAT_09a1, (~bVar3 & 2) == 0)) {
        bVar3 = DAT_09a1;
        if ((bVar3 & 0x80) == 0) {
          bVar3 = DAT_08b6;
          if ((bVar3 & 0x40) == 0) {
            bVar3 = DAT_08b6;
            DAT_08b6 = bVar3 | 0x40;
          }
          else {
            bVar3 = DAT_0b43;
            if ((DAT_4e4b < bVar3) && (bVar3 = DAT_08b0, (~bVar3 & 0x10) == 0)) {
              bVar3 = DAT_08b0;
              DAT_08b0 = bVar3 | 0x10;
              bVar3 = DAT_0bd2;
              DAT_0bd2 = bVar3 | 0x40;
              bVar3 = DAT_08b9;
              if ((~bVar3 & 0x10) == 0) {
                bVar3 = DAT_08b9;
                DAT_08b9 = bVar3 | 0x10;
                bVar3 = DAT_0bd2;
                DAT_0bd2 = bVar3 | 4;
              }
            }
          }
        }
        goto LAB_6c53;
      }
    }
    else {
      bVar3 = DAT_09a1;
      if (((bVar3 & 2) != 0) && (bVar3 = DAT_08b0, (bVar3 & 0x10) != 0)) {
        bVar3 = DAT_08b0;
        DAT_08b0 = bVar3 & 0xef;
        bVar3 = DAT_0bd2;
        DAT_0bd2 = bVar3 | 0x40;
      }
    }
    DAT_0b43 = 0;
    bVar3 = DAT_08b6;
    DAT_08b6 = bVar3 & 0xbf;
  }
LAB_6c53:
  DAT_08c2 = 0x20;
  DAT_08c3 = 0;
  return;
}


