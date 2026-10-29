/* Entry 6996 */

void FUN_6996(undefined2 param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  
  cVar6 = (char)((ushort)param_1 >> 8);
  if (cVar6 == -1) {
    cVar6 = -2;
  }
  DAT_0ae9 = cVar6;
  uVar1 = DAT_08ca;
  DAT_0bb0 = uVar1 >> 6;
  cVar6 = DAT_0d55;
  if (cVar6 != -0x80) {
    uVar2 = DAT_08ca;
    bVar7 = DAT_08a0;
    if (((~bVar7 & 4) != 0) && (bVar7 = DAT_08b2, (~bVar7 & 0x80) != 0)) {
      bVar7 = (byte)((ushort)uVar2 >> 8);
      if ((bVar7 < 10) || (0xf5 < bVar7)) {
        bVar7 = DAT_08b5;
        if ((~bVar7 & 0x80) == 0) {
          bVar7 = DAT_0b40;
          bVar5 = DAT_0d8a;
          if (bVar5 < bVar7) {
            bVar7 = DAT_08af;
            if ((~bVar7 & 8) != 0) {
              bVar7 = DAT_08af;
              DAT_08af = bVar7 | 8;
              bVar7 = DAT_0bd2;
              DAT_0bd2 = bVar7 | 0x80;
              bVar7 = DAT_08b8;
              if ((~bVar7 & 8) != 0) {
                bVar7 = DAT_08b8;
                DAT_08b8 = bVar7 | 8;
                bVar7 = DAT_0bd2;
                DAT_0bd2 = bVar7 | 8;
              }
            }
            bVar7 = DAT_08b5;
            DAT_08b5 = bVar7 | 1;
            bVar7 = DAT_0889;
            DAT_0889 = bVar7 & 0xfd;
            DAT_0b92 = 0;
          }
        }
        else {
          bVar7 = DAT_08b5;
          DAT_08b5 = bVar7 | 0x80;
          bVar7 = DAT_0bab;
          DAT_0bab = bVar7 | 8;
        }
      }
      else {
        bVar7 = DAT_08b5;
        if ((bVar7 & 0x80) == 0) {
          bVar7 = DAT_0b4d;
          bVar5 = DAT_0d8a;
          if (bVar5 < bVar7) {
            bVar7 = DAT_08af;
            if ((bVar7 & 8) != 0) {
              bVar7 = DAT_08af;
              DAT_08af = bVar7 & 0xf7;
              bVar7 = DAT_0bd2;
              DAT_0bd2 = bVar7 | 0x80;
              bVar7 = DAT_08af;
              if (((~bVar7 & 4) != 0) && (bVar7 = DAT_08b1, (~bVar7 & 8) != 0)) {
                bVar7 = DAT_0889;
                DAT_0889 = bVar7 | 2;
                DAT_0b94 = 0;
                uVar4 = DAT_0a83;
                DAT_0b92 = uVar4;
                DAT_0b95 = uVar4;
              }
            }
            bVar7 = DAT_0bab;
            DAT_0bab = bVar7 & 0xf7;
            bVar7 = DAT_08b5;
            if ((bVar7 & 1) == 0) {
              bVar7 = DAT_08b6;
              if ((bVar7 & 1) == 0) goto LAB_6a68;
              bVar7 = DAT_08b6;
              DAT_08b6 = bVar7 & 0xfe;
            }
            else {
              bVar7 = DAT_08b5;
              DAT_08b5 = bVar7 & 0xfe;
            }
            DAT_08e0 = DAT_4e18;
          }
        }
        else {
          bVar7 = DAT_08b5;
          DAT_08b5 = bVar7 & 0x7f;
        }
      }
    }
  }
LAB_6a68:
  bVar7 = DAT_08af;
  if (((~bVar7 & 8) == 0) || (bVar7 = DAT_08af, (~bVar7 & 4) == 0)) {
    DAT_08d0 = DAT_4e60;
    DAT_08ce = DAT_4e60 << 6;
  }
  else {
    uVar1 = DAT_08ca;
    DAT_08d0 = uVar1 >> 6;
    sVar3 = DAT_08e2;
    DAT_08ce = sVar3 << 6;
  }
  DAT_08c2 = 0x80;
  DAT_08c3 = 0;
  return;
}


