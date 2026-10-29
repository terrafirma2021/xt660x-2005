/* Entry c712 */

void FUN_c712(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 | 0x40;
  bVar1 = DAT_0a16;
  if ((~bVar1 & 0x20) != 0) {
    DAT_004e = 0x80;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x80) != 0) {
      sVar3 = DAT_0044;
      sVar4 = DAT_005e;
      if (199 < (ushort)(sVar3 - sVar4)) {
        bVar1 = DAT_0000;
        if ((bVar1 & 2) == 0) {
          DAT_0b58 = 0;
          bVar1 = DAT_0b57;
          DAT_0b57 = (bVar1 + 1) - (0xfe < bVar1);
        }
        else {
          DAT_0b57 = 0;
          bVar1 = DAT_0b58;
          DAT_0b58 = (bVar1 + 1) - (0xfe < bVar1);
        }
      }
    }
  }
  bVar1 = DAT_0a17;
  if (((~bVar1 & 0x20) == 0) && (bVar1 = DAT_088b, (bVar1 & 0x80) != 0)) {
    bVar1 = DAT_0a19;
    if ((bVar1 & 2) != 0) goto LAB_c8c4;
    bVar1 = DAT_0a17;
    DAT_0a17 = bVar1 | 2;
    bVar1 = DAT_0a19;
    DAT_0a19 = bVar1 | 2;
    bVar1 = DAT_0a21;
    DAT_0a21 = (bVar1 + 1) - (0xfe < bVar1);
    sVar3 = DAT_0a24;
    if (sVar3 == 0) goto LAB_c77f;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x80) == 0) {
      sVar4 = DAT_005e;
      sVar3 = DAT_0044;
      uVar2 = sVar4 - sVar3;
      if ((-1 < (short)uVar2) && (7 < uVar2)) {
        sVar3 = DAT_0a24;
        if ((short)(uVar2 - sVar3) < 0) {
          sVar4 = DAT_005e;
          sVar3 = DAT_0044;
          uVar2 = DAT_0a24;
          if ((ushort)((sVar4 - sVar3) + DAT_4f18) < uVar2) {
            bVar1 = DAT_004c;
            DAT_004c = bVar1 | 0x80;
            sVar3 = DAT_0a24;
            sVar4 = DAT_0af0;
            DAT_0a2c = sVar3 + sVar4;
            bVar1 = DAT_0cf2;
            if ((~bVar1 & 1) == 0) {
              bVar1 = DAT_0cf2;
              if ((bVar1 & 4) != 0) {
                bVar1 = DAT_0cf4;
                bVar1 = (bVar1 + 1) - (0xfe < bVar1);
                DAT_0cf4 = bVar1;
                bVar5 = DAT_0da5;
                if (bVar5 <= bVar1) {
                  bVar1 = DAT_0cf2;
                  DAT_0cf2 = bVar1 & 0xfb;
                }
              }
              uVar7 = DAT_092c;
            }
            else {
              bVar1 = DAT_0cf3;
              bVar1 = (bVar1 + 1) - (0xfe < bVar1);
              DAT_0cf3 = bVar1;
              bVar5 = DAT_0da4;
              if (bVar5 <= bVar1) {
                bVar1 = DAT_0cf2;
                DAT_0cf2 = bVar1 & 0xfe;
                cVar6 = DAT_0da5;
                if (cVar6 != '\0') {
                  DAT_0cf4 = 0;
                  bVar1 = DAT_0cf2;
                  DAT_0cf2 = bVar1 | 4;
                }
              }
              uVar7 = DAT_0cfc;
              DAT_092a = uVar7;
            }
            DAT_0b74 = uVar7;
            bVar1 = DAT_0a18;
            DAT_0a18 = bVar1 | 0x20;
            goto LAB_c8c4;
          }
          bVar1 = DAT_0cf2;
          if ((~bVar1 & 1) == 0) {
            bVar1 = DAT_0cf2;
            if ((bVar1 & 4) != 0) {
              bVar1 = DAT_0cf4;
              bVar1 = (bVar1 + 1) - (0xfe < bVar1);
              DAT_0cf4 = bVar1;
              bVar5 = DAT_0da5;
              if (bVar5 <= bVar1) {
                bVar1 = DAT_0cf2;
                DAT_0cf2 = bVar1 & 0xfb;
              }
            }
            uVar7 = DAT_092c;
          }
          else {
            bVar1 = DAT_0cf3;
            bVar1 = (bVar1 + 1) - (0xfe < bVar1);
            DAT_0cf3 = bVar1;
            bVar5 = DAT_0da4;
            if (bVar5 <= bVar1) {
              bVar1 = DAT_0cf2;
              DAT_0cf2 = bVar1 & 0xfe;
              cVar6 = DAT_0da5;
              if (cVar6 != '\0') {
                DAT_0cf4 = 0;
                bVar1 = DAT_0cf2;
                DAT_0cf2 = bVar1 | 4;
              }
            }
            uVar7 = DAT_0cfc;
            DAT_092a = uVar7;
          }
          DAT_0b74 = uVar7;
        }
        goto LAB_c77f;
      }
    }
    sVar4 = DAT_0af0;
    sVar3 = DAT_0a24;
    DAT_005e = sVar4 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xbf | 0x80;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 | 2;
    bVar1 = DAT_0a17;
    DAT_0a17 = bVar1 | 2;
  }
  else {
LAB_c77f:
    sVar3 = DAT_0044;
    DAT_005e = sVar3 + 2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0x7f;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xbf | 0x80;
    DAT_004e = 0x80;
    uVar7 = DAT_0044;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    sVar4 = DAT_0b74;
    sVar3 = DAT_005e;
    DAT_005e = sVar4 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0xc0;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
  }
  bVar1 = DAT_0a16;
  DAT_0a16 = bVar1 | 0x20;
LAB_c8c4:
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 & 0xbf;
  return;
}


