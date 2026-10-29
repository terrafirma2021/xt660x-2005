/* Entry c55b */

void FUN_c55b(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  byte bVar5;
  short sVar6;
  
  if ((~DAT_0a16 & 0x80) != 0) {
    DAT_004e = 0x40;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x40) != 0) {
      sVar3 = DAT_0044;
      sVar6 = DAT_005c;
      if (199 < (ushort)(sVar3 - sVar6)) {
        bVar1 = DAT_0000;
        if ((bVar1 & 1) == 0) {
          DAT_0b56 = 0;
          DAT_0b55 = (DAT_0b55 + 1) - (0xfe < DAT_0b55);
        }
        else {
          DAT_0b55 = 0;
          DAT_0b56 = (DAT_0b56 + 1) - (0xfe < DAT_0b56);
        }
      }
    }
  }
  bVar1 = DAT_0a17;
  if (((~DAT_0a17 & 0x80) == 0) && ((DAT_088b & 0x80) != 0)) {
    if ((DAT_0a19 & 8) != 0) goto LAB_c70d;
    bVar1 = DAT_0a17 | 8;
    DAT_0a19 = DAT_0a19 | 8;
    DAT_0a20 = (DAT_0a20 + 1) - (0xfe < DAT_0a20);
    if (DAT_0a22 == 0) goto LAB_c5c8;
    bVar5 = DAT_00e1;
    if ((bVar5 & 0x40) == 0) {
      sVar6 = DAT_005c;
      sVar3 = DAT_0044;
      uVar2 = sVar6 - sVar3;
      if ((-1 < (short)uVar2) && (7 < uVar2)) {
        if ((short)(uVar2 - DAT_0a22) < 0) {
          sVar6 = DAT_005c;
          sVar3 = DAT_0044;
          if ((ushort)((sVar6 - sVar3) + DAT_4f18) < DAT_0a22) {
            bVar5 = DAT_004c;
            DAT_004c = bVar5 | 0x40;
            DAT_0a2a = DAT_0a22 + DAT_0af0;
            if ((~DAT_0cf2 & 1) == 0) {
              if (((DAT_0cf2 & 4) != 0) &&
                 (DAT_0cf4 = (DAT_0cf4 + 1) - (0xfe < DAT_0cf4), DAT_0da5 <= DAT_0cf4)) {
                DAT_0cf2 = DAT_0cf2 & 0xfb;
              }
            }
            else {
              DAT_0cf3 = (DAT_0cf3 + 1) - (0xfe < DAT_0cf3);
              if ((DAT_0da4 <= DAT_0cf3) && (DAT_0cf2 = DAT_0cf2 & 0xfe, DAT_0da5 != 0)) {
                DAT_0cf4 = 0;
                DAT_0cf2 = DAT_0cf2 | 4;
              }
              DAT_092a = DAT_0cf6;
            }
            DAT_0a18 = DAT_0a18 | 0x80;
            DAT_0a17 = bVar1;
            DAT_0b72 = DAT_092a;
            goto LAB_c70d;
          }
          if ((~DAT_0cf2 & 1) == 0) {
            DAT_0b72 = DAT_092a;
            if (((DAT_0cf2 & 4) != 0) &&
               (DAT_0cf4 = (DAT_0cf4 + 1) - (0xfe < DAT_0cf4), DAT_0da5 <= DAT_0cf4)) {
              DAT_0cf2 = DAT_0cf2 & 0xfb;
            }
          }
          else {
            DAT_0cf3 = (DAT_0cf3 + 1) - (0xfe < DAT_0cf3);
            if ((DAT_0da4 <= DAT_0cf3) && (DAT_0cf2 = DAT_0cf2 & 0xfe, DAT_0da5 != 0)) {
              DAT_0cf4 = 0;
              DAT_0cf2 = DAT_0cf2 | 4;
            }
            DAT_092a = DAT_0cf6;
            DAT_0b72 = DAT_092a;
          }
        }
        goto LAB_c5c8;
      }
    }
    DAT_005c = DAT_0af0 + DAT_0a22;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xef | 0x20;
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x40;
    DAT_0a18 = DAT_0a18 | 8;
    DAT_0a17 = DAT_0a17 | 8;
  }
  else {
LAB_c5c8:
    DAT_0a17 = bVar1;
    sVar3 = DAT_0044;
    DAT_005c = sVar3 + 2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xef | 0x20;
    DAT_004e = 0x40;
    uVar4 = DAT_0044;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    sVar3 = DAT_005c;
    DAT_005c = DAT_0b72 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0x30;
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x40;
  }
  DAT_0a16 = DAT_0a16 | 0x80;
LAB_c70d:
  DAT_08c1 = DAT_08c1 & 0xef;
  return;
}


