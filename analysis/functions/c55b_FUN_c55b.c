/* Entry c55b */

void FUN_c55b(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 | 0x10;
  bVar1 = DAT_0a16;
  if ((~bVar1 & 0x80) == 0) {
    DAT_004e = 0x40;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x40) != 0) {
      sVar3 = DAT_0044;
      sVar4 = DAT_005c;
      if (199 < (ushort)(sVar3 - sVar4)) {
        bVar1 = DAT_0000;
        if ((bVar1 & 1) == 0) {
          DAT_0b56 = 0;
          bVar1 = DAT_0b55;
          DAT_0b55 = (bVar1 + 1) - (0xfe < bVar1);
        }
        else {
          DAT_0b55 = 0;
          bVar1 = DAT_0b56;
          DAT_0b56 = (bVar1 + 1) - (0xfe < bVar1);
        }
      }
    }
  }
  bVar1 = DAT_0a17;
  if (((~bVar1 & 0x80) == 0) || (bVar1 = DAT_088b, (bVar1 & 0x80) == 0)) {
LAB_c5c8:
    sVar3 = DAT_0044;
    DAT_005c = sVar3 + 2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xef | 0x20;
    DAT_004e = 0x40;
    uVar7 = DAT_0044;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    sVar4 = DAT_0b72;
    sVar3 = DAT_005c;
    DAT_005c = sVar4 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0x30;
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x40;
  }
  else {
    bVar1 = DAT_0a19;
    if ((bVar1 & 8) != 0) goto LAB_c70d;
    bVar1 = DAT_0a17;
    DAT_0a17 = bVar1 | 8;
    bVar1 = DAT_0a19;
    DAT_0a19 = bVar1 | 8;
    bVar1 = DAT_0a20;
    DAT_0a20 = (bVar1 + 1) - (0xfe < bVar1);
    sVar3 = DAT_0a22;
    if (sVar3 == 0) goto LAB_c5c8;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x40) == 0) {
      sVar4 = DAT_005c;
      sVar3 = DAT_0044;
      uVar2 = sVar4 - sVar3;
      if ((-1 < (short)uVar2) && (7 < uVar2)) {
        sVar3 = DAT_0a22;
        if ((short)(uVar2 - sVar3) < 0) {
          sVar4 = DAT_005c;
          sVar3 = DAT_0044;
          uVar2 = DAT_0a22;
          if ((ushort)((sVar4 - sVar3) + DAT_4f18) < uVar2) {
            bVar1 = DAT_004c;
            DAT_004c = bVar1 | 0x40;
            sVar3 = DAT_0a22;
            sVar4 = DAT_0af0;
            DAT_0a2a = sVar3 + sVar4;
            bVar1 = DAT_0cf2;
            if ((~bVar1 & 1) == 0) {
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
              uVar7 = DAT_0cf6;
              DAT_092a = uVar7;
            }
            else {
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
              uVar7 = DAT_092a;
            }
            DAT_0b72 = uVar7;
            bVar1 = DAT_0a18;
            DAT_0a18 = bVar1 | 0x80;
            goto LAB_c70d;
          }
          bVar1 = DAT_0cf2;
          if ((~bVar1 & 1) == 0) {
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
            uVar7 = DAT_0cf6;
            DAT_092a = uVar7;
          }
          else {
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
            uVar7 = DAT_092a;
          }
          DAT_0b72 = uVar7;
        }
        goto LAB_c5c8;
      }
    }
    sVar4 = DAT_0af0;
    sVar3 = DAT_0a22;
    DAT_005c = sVar4 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xef | 0x20;
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x40;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 | 8;
    bVar1 = DAT_0a17;
    DAT_0a17 = bVar1 | 8;
  }
  bVar1 = DAT_0a16;
  DAT_0a16 = bVar1 | 0x80;
LAB_c70d:
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 & 0xef;
  return;
}


