/* Entry aff9 */

void FUN_aff9(void)

{
  byte bVar1;
  short sVar2;
  
  DAT_0882 = DAT_0882 & 0xdf;
  DAT_0b02 = (DAT_0b02 + 1) - (0xfe < DAT_0b02);
  if (((DAT_0884 & 4) != 0) && (DAT_0aff = (DAT_0aff + 1) - (0xfe < DAT_0aff), DAT_4bf9 <= DAT_0aff)
     ) {
    DAT_0884 = DAT_0884 & 0xfb;
    DAT_0aff = 0;
  }
  if ((DAT_0bf8 & 0x80) != 0) {
    bVar1 = DAT_0bf9 + 1;
    if ((DAT_0bf9 != -1) && (DAT_0bf9 = bVar1, bVar1 <= DAT_4bf9)) goto LAB_b049;
    DAT_0bf8 = DAT_0bf8 & 0x7f;
  }
  DAT_0bf9 = 0;
LAB_b049:
  DAT_0b00 = (DAT_0b00 + 1) - (0xfe < DAT_0b00);
  bVar1 = DAT_00e1;
  if (((bVar1 & 8) != 0) && (DAT_0b00 == 8)) {
    DAT_0b01 = (DAT_0b01 + 1) - (0xfe < DAT_0b01);
  }
  if (((~DAT_088d & 0x80) != 0) || (bVar1 = DAT_4ba2, DAT_4ba4 < DAT_0b01)) {
    DAT_088d = DAT_088d | 0x80;
    bVar1 = DAT_4ba3;
  }
  if (bVar1 <= DAT_0b00) {
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
    DAT_0a92 = DAT_0a92 & 0x77;
  }
  if (((DAT_4ba5 <= DAT_0900._0_1_) || (DAT_4ba6 <= DAT_0b5e)) || (DAT_4ba6 <= DAT_0b00)) {
    DAT_0b01 = 0;
    DAT_088d = DAT_088d & 0x7f;
  }
  if ((~DAT_0880 & 1) == 0) {
    DAT_0b5e = (DAT_0b5e + 1) - (0xfe < DAT_0b5e);
  }
  else {
    DAT_0b5e = '\0';
  }
  DAT_0b6b = (DAT_0b6b + 1) - (0xfe < DAT_0b6b);
  DAT_0b6e = (DAT_0b6e + 1) - (0xfe < DAT_0b6e);
  DAT_09ad = (DAT_09ad + 1) - (0xfe < DAT_09ad);
  if ((((~DAT_0880 & 1) != 0) || (DAT_0d75 <= DAT_0b6e)) &&
     ((DAT_4e98 <= DAT_08d9 && (DAT_08d9 < 0xcd)))) {
    if (DAT_0b56 < DAT_4e99) {
      if (DAT_4e99 <= DAT_0b55) {
        DAT_08b4 = DAT_08b4 & 0x7f;
      }
    }
    else {
      DAT_08b4 = DAT_08b4 | 0x80;
    }
    if (DAT_0b58 < DAT_4e99) {
      if (DAT_4e99 <= DAT_0b57) {
        DAT_08b4 = DAT_08b4 & 0xbf;
      }
    }
    else {
      DAT_08b4 = DAT_08b4 | 0x40;
    }
  }
  DAT_08bc = DAT_08bc & 0xfb;
  return;
}


