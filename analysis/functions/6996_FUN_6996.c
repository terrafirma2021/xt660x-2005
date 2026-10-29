/* Entry 6996 */

void FUN_6996(undefined2 param_1)

{
  ushort uVar1;
  byte bVar2;
  
  DAT_0ae9 = (char)((ushort)param_1 >> 8);
  if (DAT_0ae9 == -1) {
    DAT_0ae9 = -2;
  }
  DAT_0bb0 = DAT_08ca >> 6;
  if (((DAT_0d55 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    bVar2 = (byte)(DAT_08ca >> 8);
    if ((bVar2 < 10) || (0xf5 < bVar2)) {
      if ((~DAT_08b5 & 0x80) == 0) {
        DAT_08b5 = DAT_08b5 | 0x80;
        DAT_0bab = DAT_0bab | 8;
      }
      else if (DAT_0d8a < DAT_0b40) {
        bVar2 = DAT_0bd2;
        if ((~DAT_08af & 8) == 0) {
          DAT_08af = DAT_08af | 8;
          bVar2 = DAT_0bd2 | 0x80;
          if ((~DAT_08b8 & 8) == 0) {
            DAT_08b8 = DAT_08b8 | 8;
            bVar2 = DAT_0bd2 | 0x88;
          }
        }
        DAT_0bd2 = bVar2;
        DAT_08b5 = DAT_08b5 | 1;
        DAT_0889 = DAT_0889 & 0xfd;
        DAT_0b92 = 0;
      }
    }
    else if ((DAT_08b5 & 0x80) == 0) {
      if (DAT_0d8a < DAT_0b4d) {
        if ((DAT_08af & 8) != 0) {
          DAT_08af = DAT_08af & 0xf7;
          DAT_0bd2 = DAT_0bd2 | 0x80;
          if (((~DAT_08af & 4) == 0) && ((~DAT_08b1 & 8) == 0)) {
            DAT_0889 = DAT_0889 | 2;
            DAT_0b94 = 0;
            DAT_0b92 = DAT_0a83;
            DAT_0b95 = DAT_0a83;
          }
        }
        DAT_0bab = DAT_0bab & 0xf7;
        if ((DAT_08b5 & 1) == 0) {
          if ((DAT_08b6 & 1) == 0) goto LAB_6a68;
          DAT_08b6 = DAT_08b6 & 0xfe;
        }
        else {
          DAT_08b5 = DAT_08b5 & 0xfe;
        }
        DAT_08e0 = DAT_4e18;
      }
    }
    else {
      DAT_08b5 = DAT_08b5 & 0x7f;
    }
  }
LAB_6a68:
  if (((~DAT_08af & 8) == 0) && ((~DAT_08af & 4) == 0)) {
    DAT_08d0 = DAT_08ca >> 6;
    uVar1 = DAT_08e2;
  }
  else {
    DAT_08d0 = DAT_4e60;
    uVar1 = DAT_4e60;
  }
  DAT_08ce = uVar1 << 6;
  DAT_08c2 = 0x80;
  DAT_08c3 = 0;
  return;
}


