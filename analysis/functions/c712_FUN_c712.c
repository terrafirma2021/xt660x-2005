/* Entry c712 */

void FUN_c712(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  byte bVar5;
  short sVar6;
  
  if ((~DAT_0a16 & 0x20) != 0) {
    DAT_004e = 0x80;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x80) != 0) {
      sVar3 = DAT_0044;
      sVar6 = DAT_005e;
      if (199 < (ushort)(sVar3 - sVar6)) {
        bVar1 = DAT_0000;
        if ((bVar1 & 2) == 0) {
          DAT_0b58 = 0;
          DAT_0b57 = (DAT_0b57 + 1) - (0xfe < DAT_0b57);
        }
        else {
          DAT_0b57 = 0;
          DAT_0b58 = (DAT_0b58 + 1) - (0xfe < DAT_0b58);
        }
      }
    }
  }
  bVar1 = DAT_0a17;
  if (((~DAT_0a17 & 0x20) == 0) && ((DAT_088b & 0x80) != 0)) {
    if ((DAT_0a19 & 2) != 0) goto LAB_c8c4;
    bVar1 = DAT_0a17 | 2;
    DAT_0a19 = DAT_0a19 | 2;
    DAT_0a21 = (DAT_0a21 + 1) - (0xfe < DAT_0a21);
    if (DAT_0a24 == 0) goto LAB_c77f;
    bVar5 = DAT_00e1;
    if ((bVar5 & 0x80) == 0) {
      sVar6 = DAT_005e;
      sVar3 = DAT_0044;
      uVar2 = sVar6 - sVar3;
      if ((-1 < (short)uVar2) && (7 < uVar2)) {
        if ((short)(uVar2 - DAT_0a24) < 0) {
          sVar6 = DAT_005e;
          sVar3 = DAT_0044;
          DAT_0b74 = DAT_0cfc;
          if ((ushort)((sVar6 - sVar3) + DAT_4f18) < DAT_0a24) {
            bVar5 = DAT_004c;
            DAT_004c = bVar5 | 0x80;
            DAT_0a2c = DAT_0a24 + DAT_0af0;
            if ((~DAT_0cf2 & 1) == 0) {
              DAT_0b74 = DAT_092c;
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
              DAT_092a = DAT_0cfc;
            }
            DAT_0a18 = DAT_0a18 | 0x20;
            DAT_0a17 = bVar1;
            goto LAB_c8c4;
          }
          if ((~DAT_0cf2 & 1) == 0) {
            DAT_0b74 = DAT_092c;
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
            DAT_092a = DAT_0cfc;
          }
        }
        goto LAB_c77f;
      }
    }
    DAT_005e = DAT_0af0 + DAT_0a24;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xbf | 0x80;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
    DAT_0a18 = DAT_0a18 | 2;
    DAT_0a17 = DAT_0a17 | 2;
  }
  else {
LAB_c77f:
    DAT_0a17 = bVar1;
    sVar3 = DAT_0044;
    DAT_005e = sVar3 + 2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0x7f;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xbf | 0x80;
    DAT_004e = 0x80;
    uVar4 = DAT_0044;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    sVar3 = DAT_005e;
    DAT_005e = DAT_0b74 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0xc0;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
  }
  DAT_0a16 = DAT_0a16 | 0x20;
LAB_c8c4:
  DAT_08c1 = DAT_08c1 & 0xbf;
  return;
}


