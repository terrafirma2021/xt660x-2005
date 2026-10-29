/* Entry 6fc2 */

/* WARNING: Removing unreachable block (RAM,0x703e) */

void FUN_6fc2(undefined2 param_1)

{
  byte bVar1;
  byte bVar2;
  byte extraout_A;
  
  bVar2 = (byte)((ushort)param_1 >> 8);
  bVar1 = DAT_0bd2;
  if (((DAT_0d59 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    if ((bVar2 < 7) || (0xf7 < bVar2)) {
      if ((DAT_08b5 & 0x20) == 0) {
        DAT_08b5 = DAT_08b5 | 0x20;
      }
      else if ((DAT_0d8a < DAT_0b42) && ((~DAT_08b0 & 0x40) == 0)) {
        DAT_08b0 = DAT_08b0 | 0x40;
        bVar1 = DAT_0bd2 | 0x40;
        if ((~DAT_08b9 & 0x40) == 0) {
          DAT_08b9 = DAT_08b9 | 0x40;
          bVar1 = DAT_0bd2 | 0x44;
        }
      }
    }
    else if ((DAT_08b5 & 0x20) == 0) {
      if ((DAT_0d8a < DAT_0b4f) && ((DAT_08b0 & 0x40) != 0)) {
        DAT_08b0 = DAT_08b0 & 0xbf;
        bVar1 = DAT_0bd2 | 0x40;
      }
    }
    else {
      DAT_08b5 = DAT_08b5 & 0xdf;
    }
  }
  DAT_0bd2 = bVar1;
  if (((~DAT_08a0 & 4) == 0) && ((~DAT_08b0 & 0x40) != 0)) {
    DAT_08d8 = DAT_08ca._0_1_;
    DAT_08f5 = DAT_4e65;
    DAT_0aeb = (byte)((ushort)DAT_4e65 * 0xa0 >> 8);
    if (0x95 < DAT_0aeb) {
      DAT_0aeb = 0x95;
    }
  }
  else {
    DAT_08d8 = DAT_08ca._0_1_;
    interp_u8_q8_index();
    DAT_0aeb = (byte)((ushort)extraout_A * 0xa0 >> 8);
    DAT_08f5 = extraout_A;
    if (0x95 < DAT_0aeb) {
      DAT_0aeb = 0x95;
    }
  }
  DAT_08c2 = 0x10;
  DAT_08c3 = 0;
  return;
}


