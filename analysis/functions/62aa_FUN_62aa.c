/* Entry 62aa */

void FUN_62aa(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  
  bVar1 = DAT_08a0;
  if ((bVar1 & 4) == 0) {
    bVar1 = DAT_08af;
    bVar2 = DAT_08b8;
    DAT_08b8 = bVar1 | bVar2;
    bVar1 = DAT_08b0;
    bVar2 = DAT_08b9;
    DAT_08b9 = bVar1 | bVar2;
    bVar1 = DAT_08b1;
    bVar2 = DAT_08ba;
    DAT_08ba = bVar1 | bVar2;
    bVar1 = DAT_08b2;
    bVar2 = DAT_08bb;
    DAT_08bb = bVar1 | bVar2;
    uVar6 = RAM08af;
    if (((((char)((ushort)uVar6 >> 8) == '\0') && ((char)uVar6 == '\0')) &&
        (uVar6 = RAM08b1, (char)((ushort)uVar6 >> 8) == '\0')) && ((char)uVar6 == '\0')) {
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 | 0x80;
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 & 0xbf;
    }
    else {
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 & 0x7f;
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 | 0x40;
    }
    uVar6 = RAM08b8;
    if ((((char)((ushort)uVar6 >> 8) == '\0') && ((char)uVar6 == '\0')) &&
       ((uVar6 = RAM08ba, (char)((ushort)uVar6 >> 8) == '\0' && ((char)uVar6 == '\0')))) {
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 & 0xfd;
    }
    else {
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 | 2;
    }
  }
  uVar7 = DAT_0ae2;
  DAT_08a6 = uVar7;
  uVar7 = DAT_0ae3;
  DAT_08a7 = uVar7;
  bVar1 = DAT_08a1;
  if ((bVar1 & 1) == 0) {
    FUN_6496();
    uVar7 = DAT_0b64;
    uVar7 = DAT_08a0;
    bVar1 = DAT_08a0;
    if (((~bVar1 & 4) == 0) || (bVar1 = DAT_08a0, (bVar1 & 0x20) != 0)) {
      uVar7 = DAT_08a1;
    }
    bVar1 = DAT_08a0;
    if ((bVar1 & 4) == 0) {
      bVar1 = DAT_0884;
      if ((~bVar1 & 0x20) == 0) {
        bVar1 = DAT_0888;
        bVar1 = ~bVar1 & 8;
      }
      else {
        bVar1 = DAT_0892;
        if (((~bVar1 & 0x40) == 0) || (bVar1 = DAT_0880, (~bVar1 & 1) == 0)) goto LAB_63e4;
        bVar1 = DAT_08a1;
        bVar1 = ~bVar1 & 2;
      }
      if (bVar1 == 0) goto LAB_63e4;
    }
    else {
      bVar1 = DAT_0893;
      if ((bVar1 & 4) != 0) {
        cVar3 = DAT_0bdd;
        cVar4 = DAT_0d46;
        if ((((cVar3 == cVar4) || (cVar4 = DAT_0d47, cVar3 == cVar4)) ||
            (cVar4 = DAT_0d48, cVar3 == cVar4)) ||
           ((cVar4 = DAT_0d49, cVar3 == cVar4 || (cVar4 = DAT_0d4a, cVar3 == cVar4)))) {
          bVar1 = DAT_0be6;
          bVar1 = (bVar1 + 1) - (0xfe < bVar1);
          DAT_0be6 = bVar1;
          if (bVar1 <= DAT_4f14) goto LAB_63e4;
          bVar1 = DAT_0893;
          DAT_0893 = bVar1 & 0xfb;
          DAT_0be6 = 0;
        }
        else {
          cVar4 = DAT_0d4b;
          if (((cVar3 == cVar4) || (cVar4 = DAT_0d4c, cVar3 == cVar4)) ||
             (cVar4 = DAT_0d4d, cVar3 == cVar4)) {
LAB_63e4:
            uVar7 = 0x80;
            goto LAB_63e6;
          }
        }
      }
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 0x40;
  }
LAB_63e6:
  DAT_08a8 = uVar7;
  bVar1 = DAT_08a0;
  bVar2 = DAT_08a1;
  if ((bVar2 & 1) != 0) goto LAB_6486;
  if ((bVar1 & 2) == 0) {
    if ((bVar1 & 0x80) == 0) {
      if ((bVar1 & 0x40) != 0) goto LAB_6486;
      if ((bVar1 & 0x20) != 0) {
        if ((bVar1 & 8) == 0) {
          cVar3 = DAT_08a9;
          if (((bVar2 & 8) == 0) && ((bVar2 & 4) == 0)) {
            if ((bVar2 & 0x10) == 0) goto LAB_6486;
            bVar1 = DAT_08a1;
            DAT_08a1 = bVar1 & 0xef;
          }
          else if (cVar3 != -0x3e) {
            DAT_0aee = 0xc2;
            goto LAB_6486;
          }
          DAT_0aee = 0xc1;
        }
        else {
          bVar1 = DAT_08a1;
          if ((bVar1 & 0x20) == 0) {
            uVar7 = DAT_0aed;
          }
          else {
            uVar7 = DAT_0aee;
          }
        }
        goto LAB_6486;
      }
      if ((bVar1 & 4) != 0) {
        FUN_650b();
        goto LAB_6486;
      }
      goto LAB_640a;
    }
    if ((bVar2 & 0x80) != 0) goto LAB_6486;
  }
  else {
LAB_640a:
    cVar3 = DAT_0e1f;
    if (cVar3 != '\x01') goto LAB_6486;
  }
  uVar7 = DAT_0ae8;
LAB_6486:
  DAT_08a9 = 0;
  cVar5 = DAT_08a8;
  cVar4 = DAT_08a7;
  cVar3 = DAT_08a6;
  DAT_08aa = cVar5 + cVar4 + cVar3;
  return;
}


