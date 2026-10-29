/* Entry aff9 */

void FUN_aff9(void)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  
  bVar1 = DAT_0882;
  DAT_0882 = bVar1 & 0xdf;
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 | 4;
  bVar1 = DAT_0b02;
  DAT_0b02 = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_0884;
  if ((bVar1 & 4) != 0) {
    bVar1 = DAT_0aff;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0aff = bVar1;
    if (DAT_4bf9 <= bVar1) {
      bVar1 = DAT_0884;
      DAT_0884 = bVar1 & 0xfb;
      DAT_0aff = 0;
    }
  }
  bVar1 = DAT_0bf8;
  if ((bVar1 & 0x80) == 0) {
LAB_b046:
    DAT_0bf9 = 0;
  }
  else {
    bVar1 = DAT_0bf9;
    if ((0xfe < bVar1) || (DAT_0bf9 = bVar1 + 1, DAT_4bf9 < (byte)(bVar1 + 1))) {
      bVar1 = DAT_0bf8;
      DAT_0bf8 = bVar1 & 0x7f;
      goto LAB_b046;
    }
  }
  bVar1 = DAT_0b00;
  DAT_0b00 = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_00e1;
  if (((bVar1 & 8) != 0) && (cVar3 = DAT_0b00, cVar3 == '\b')) {
    bVar1 = DAT_0b01;
    DAT_0b01 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_088d;
  if (((~bVar1 & 0x80) == 0) && (bVar1 = DAT_0b01, bVar1 <= DAT_4ba4)) {
    bVar1 = DAT_0b00;
    if (DAT_4ba2 <= bVar1) {
LAB_b091:
      bVar1 = DAT_00e1;
      if ((bVar1 & 8) != 0) {
        DAT_0afd = 0;
      }
      sVar2 = DAT_0044;
      DAT_0056 = sVar2 + 5;
      bVar1 = DAT_004c;
      DAT_004c = bVar1 & 0xf7;
      bVar1 = DAT_0049;
      DAT_0049 = bVar1 & 0xbf | 0x80;
      DAT_004e = 8;
      bVar1 = DAT_0a92;
      DAT_0a92 = bVar1 & 0xf7;
      bVar1 = DAT_0a92;
      DAT_0a92 = bVar1 & 0x7f;
    }
  }
  else {
    bVar1 = DAT_088d;
    DAT_088d = bVar1 | 0x80;
    bVar1 = DAT_0b00;
    if (DAT_4ba3 <= bVar1) goto LAB_b091;
  }
  bVar1 = DAT_0900._0_1_;
  if (((DAT_4ba5 <= bVar1) || (bVar1 = DAT_0b5e, DAT_4ba6 <= bVar1)) ||
     (bVar1 = DAT_0b00, DAT_4ba6 <= bVar1)) {
    DAT_0b01 = 0;
    bVar1 = DAT_088d;
    DAT_088d = bVar1 & 0x7f;
  }
  bVar1 = DAT_0880;
  if ((~bVar1 & 1) == 0) {
    bVar1 = DAT_0b5e;
    DAT_0b5e = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b5e = 0;
  }
  bVar1 = DAT_0b6b;
  DAT_0b6b = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_0b6e;
  DAT_0b6e = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_09ad;
  DAT_09ad = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_0880;
  if ((~bVar1 & 1) == 0) {
    bVar1 = DAT_0b6e;
    bVar4 = DAT_0d75;
    if (bVar1 < bVar4) goto LAB_b161;
  }
  bVar1 = DAT_08d9;
  if ((DAT_4e98 <= bVar1) && (bVar1 < 0xcd)) {
    bVar1 = DAT_0b56;
    if (bVar1 < DAT_4e99) {
      bVar1 = DAT_0b55;
      if (DAT_4e99 <= bVar1) {
        bVar1 = DAT_08b4;
        DAT_08b4 = bVar1 & 0x7f;
      }
    }
    else {
      bVar1 = DAT_08b4;
      DAT_08b4 = bVar1 | 0x80;
    }
    bVar1 = DAT_0b58;
    if (bVar1 < DAT_4e99) {
      bVar1 = DAT_0b57;
      if (DAT_4e99 <= bVar1) {
        bVar1 = DAT_08b4;
        DAT_08b4 = bVar1 & 0xbf;
      }
    }
    else {
      bVar1 = DAT_08b4;
      DAT_08b4 = bVar1 | 0x40;
    }
  }
LAB_b161:
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 & 0xfb;
  return;
}


