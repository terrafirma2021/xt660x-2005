/* Entry 70a3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_70a3(undefined2 param_1)

{
  byte bVar1;
  byte bVar2;
  byte extraout_A;
  undefined1 extraout_A_00;
  ushort uVar3;
  
  bVar2 = (byte)((ushort)param_1 >> 8);
  bVar1 = DAT_0bd2;
  if (((DAT_0d58 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    if ((bVar2 < 7) || (0xf7 < bVar2)) {
      if ((DAT_08b5 & 0x10) == 0) {
        DAT_08b5 = DAT_08b5 | 0x10;
        DAT_0bac = DAT_0bac | 0x80;
      }
      else if ((DAT_0d8a < DAT_0b41) && ((~DAT_08b0 & 0x80) == 0)) {
        DAT_08b0 = DAT_08b0 | 0x80;
        bVar1 = DAT_0bd2 | 0x40;
        if ((~DAT_08b9 & 0x80) == 0) {
          DAT_08b9 = DAT_08b9 | 0x80;
          bVar1 = DAT_0bd2 | 0x44;
        }
      }
    }
    else if ((DAT_08b5 & 0x10) == 0) {
      if (DAT_0d8a < DAT_0b4e) {
        if ((DAT_08b0 & 0x80) != 0) {
          DAT_08b0 = DAT_08b0 & 0x7f;
          DAT_0bd2 = DAT_0bd2 | 0x40;
        }
        DAT_0bac = DAT_0bac & 0x7f;
        bVar1 = DAT_0bd2;
      }
    }
    else {
      DAT_08b5 = DAT_08b5 & 0xef;
    }
  }
  DAT_0bd2 = bVar1;
  _DAT_08d6 = DAT_08ca;
  FUN_c276();
  uVar3 = (ushort)extraout_A * 0xa0;
  if (0x95ff < uVar3) {
    uVar3 = 0x9500;
  }
  DAT_0ae8 = (undefined1)(uVar3 >> 8);
  DAT_08f4 = extraout_A;
  if (((~DAT_08a0 & 4) == 0) && ((DAT_08b0 & 0x80) != 0)) {
    DAT_08f4 = DAT_4e64;
  }
  DAT_08f6 = extraout_A;
  if ((~DAT_0883 & 0x20) == 0) {
    DAT_0883 = DAT_0883 | 0x20;
    lookup_u8_uniform_axis();
    DAT_0a08 = extraout_A_00;
    if ((~DAT_0884 & 8) == 0) {
      DAT_0884 = DAT_0884 | 8;
      DAT_0994 = lookup_u8_uniform_axis();
      DAT_0996 = lookup_u8_uniform_axis();
    }
  }
  if (((DAT_08a0 & 4) != 0) && (DAT_0bdd == DAT_0d4b)) {
    DAT_08c2 = 1;
    DAT_08c3 = 0;
    return;
  }
  if (((DAT_08b0 & 0x80) == 0) || ((~DAT_0881 & 0x10) != 0)) {
    if (DAT_4bfe <= DAT_08f4) {
      if (DAT_08f4 == DAT_4bff) {
        DAT_08c2 = 1;
        DAT_08c3 = 0;
        return;
      }
      if (DAT_08f4 < DAT_4bff) {
        DAT_08c2 = 1;
        DAT_08c3 = 0;
        return;
      }
      goto LAB_71c5;
    }
  }
  else {
    if (DAT_0abe < DAT_4c00) {
LAB_71c5:
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 4;
      DAT_08c2 = 1;
      DAT_08c3 = 0;
      return;
    }
    if (DAT_0abe <= DAT_4c01) {
      DAT_08c2 = 1;
      DAT_08c3 = 0;
      return;
    }
  }
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xfb;
  DAT_08c2 = 1;
  DAT_08c3 = 0;
  return;
}


