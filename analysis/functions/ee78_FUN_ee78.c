/* Entry ee78 */

void FUN_ee78(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  byte bVar4;
  short sVar5;
  
  bVar1 = DAT_08a0;
  if ((~bVar1 & 4) == 0) {
    return;
  }
  bVar1 = DAT_08b2;
  if ((~bVar1 & 0x80) == 0) {
    return;
  }
  bVar1 = DAT_00e1;
  if ((bVar1 & 8) != 0) {
    return;
  }
  bVar1 = DAT_0a92;
  if ((~bVar1 & 8) == 0) {
    return;
  }
  bVar1 = DAT_0884;
  if ((~bVar1 & 4) == 0) {
    return;
  }
  bVar1 = DAT_0d08;
  if ((~bVar1 & 1) == 0) {
    return;
  }
  bVar1 = DAT_0884;
  if ((~bVar1 & 2) == 0) {
    return;
  }
  bVar1 = DAT_088c;
  if ((~bVar1 & 0x80) == 0) {
    return;
  }
  bVar1 = DAT_0885;
  if ((~bVar1 & 0x40) == 0) {
    return;
  }
  bVar1 = DAT_0bf8;
  if ((~bVar1 & 0x80) == 0) {
    return;
  }
  bVar1 = DAT_088c;
  if ((~bVar1 & 2) == 0) {
    return;
  }
  bVar1 = DAT_089a;
  if ((~bVar1 & 2) == 0) {
    return;
  }
  bVar4 = DAT_0c04;
  bVar1 = DAT_0925;
  if (bVar4 == bVar1) {
    bVar1 = DAT_089b;
    if ((bVar1 & 0x20) != 0) {
      bVar1 = DAT_089b;
      if ((bVar1 & 0x10) == 0) {
        bVar1 = DAT_089b;
        if ((bVar1 & 2) == 0) {
          bVar4 = DAT_0b2a;
          bVar1 = DAT_0b28;
          if (bVar1 <= bVar4) {
            bVar1 = DAT_089b;
            DAT_089b = bVar1 | 2;
            DAT_0b2a = 0;
            cVar2 = DAT_0b29;
            DAT_0b29 = cVar2 + '\x01';
            return;
          }
          cVar2 = DAT_0b2a;
          DAT_0b2a = cVar2 + '\x01';
          goto LAB_ef50;
        }
      }
      else {
        bVar1 = DAT_089b;
        DAT_089b = bVar1 & 0xef;
        bVar1 = DAT_089b;
        DAT_089b = bVar1 | 8;
        bVar1 = DAT_089b;
        DAT_089b = bVar1 | 2;
      }
      bVar4 = DAT_0b29;
      bVar1 = DAT_0b27;
      if (bVar4 < bVar1) {
        cVar2 = DAT_0b29;
        DAT_0b29 = cVar2 + '\x01';
        return;
      }
      bVar1 = DAT_089b;
      DAT_089b = bVar1 & 0xfd;
      cVar2 = DAT_0b2a;
      DAT_0b2a = cVar2 + '\x01';
      DAT_0b29 = 0;
    }
LAB_ef50:
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 | 0xc0;
    DAT_004e = 8;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 8;
    sVar5 = DAT_0af0;
    sVar3 = DAT_0aa2;
    sVar5 = sVar5 + sVar3;
    goto LAB_ef63;
  }
  if (bVar4 == 0) {
    cVar2 = DAT_0925;
    if ((cVar2 != '\n') && (cVar2 != '\t')) {
      return;
    }
LAB_eee7:
    bVar1 = DAT_089b;
    if ((bVar1 & 0x20) != 0) {
      return;
    }
  }
  else {
    if (6 < bVar4) {
      if (bVar4 != 10) {
        return;
      }
      cVar2 = DAT_0925;
      if (cVar2 != '\t') {
        return;
      }
      goto LAB_eee7;
    }
    bVar1 = DAT_0925;
    if ((bVar4 < bVar1) || (bVar1 = DAT_089b, (bVar1 & 0x20) != 0)) {
      return;
    }
  }
  bVar1 = DAT_0049;
  DAT_0049 = bVar1 | 0xc0;
  DAT_004e = 8;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 8;
  sVar5 = DAT_0044;
  sVar5 = sVar5 + 10;
LAB_ef63:
  DAT_0b7a = sVar5;
  DAT_0056 = sVar5;
  bVar1 = DAT_0a92;
  DAT_0a92 = bVar1 | 8;
  return;
}


