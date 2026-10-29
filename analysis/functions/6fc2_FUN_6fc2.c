/* Entry 6fc2 */

void FUN_6fc2(undefined2 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  byte extraout_A;
  byte bVar4;
  ushort uVar5;
  
  cVar3 = DAT_0d59;
  bVar4 = (byte)((ushort)param_1 >> 8);
  if (((cVar3 != -0x80) && (bVar1 = DAT_08a0, (~bVar1 & 4) == 0)) &&
     (bVar1 = DAT_08b2, (~bVar1 & 0x80) == 0)) {
    if ((bVar4 < 7) || (0xf7 < bVar4)) {
      bVar4 = DAT_08b5;
      if ((bVar4 & 0x20) == 0) {
        bVar4 = DAT_08b5;
        DAT_08b5 = bVar4 | 0x20;
      }
      else {
        bVar4 = DAT_0b42;
        bVar1 = DAT_0d8a;
        if ((bVar1 < bVar4) && (bVar4 = DAT_08b0, (~bVar4 & 0x40) == 0)) {
          bVar4 = DAT_08b0;
          DAT_08b0 = bVar4 | 0x40;
          bVar4 = DAT_0bd2;
          DAT_0bd2 = bVar4 | 0x40;
          bVar4 = DAT_08b9;
          if ((~bVar4 & 0x40) == 0) {
            bVar4 = DAT_08b9;
            DAT_08b9 = bVar4 | 0x40;
            bVar4 = DAT_0bd2;
            DAT_0bd2 = bVar4 | 4;
          }
        }
      }
    }
    else {
      bVar4 = DAT_08b5;
      if ((bVar4 & 0x20) == 0) {
        bVar4 = DAT_0b4f;
        bVar1 = DAT_0d8a;
        if ((bVar1 < bVar4) && (bVar4 = DAT_08b0, (bVar4 & 0x40) != 0)) {
          bVar4 = DAT_08b0;
          DAT_08b0 = bVar4 & 0xbf;
          bVar4 = DAT_0bd2;
          DAT_0bd2 = bVar4 | 0x40;
        }
      }
      else {
        bVar4 = DAT_08b5;
        DAT_08b5 = bVar4 & 0xdf;
      }
    }
  }
  bVar4 = DAT_08a0;
  if (((~bVar4 & 4) == 0) && (bVar4 = DAT_08b0, (~bVar4 & 0x40) != 0)) {
    uVar2 = DAT_08ca._0_1_;
    DAT_08d8 = uVar2;
    DAT_08f5 = DAT_4e65;
    bVar4 = (byte)((ushort)DAT_4e65 * 0xa0 >> 8);
    if (0x95 < bVar4) {
      bVar4 = 0x95;
    }
    DAT_0aeb = bVar4;
  }
  else {
    bVar4 = DAT_08ca._0_1_;
    DAT_08d8 = bVar4;
    uVar5 = (ushort)bVar4;
    if (false) {
      uVar5 = 0;
    }
    uVar5 = interp_u8_q8_index(uVar5 * 0x20,(byte *)((short)&DAT_4f22 + 1));
    extraout_A = (byte)(uVar5 >> 8);
    DAT_08f5 = extraout_A;
    bVar4 = (byte)((ushort)extraout_A * 0xa0 >> 8);
    if (0x95 < bVar4) {
      bVar4 = 0x95;
    }
    DAT_0aeb = bVar4;
  }
  DAT_08c2 = 0x10;
  DAT_08c3 = 0;
  return;
}


