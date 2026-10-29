/* Entry 592e */

void FUN_592e(void)

{
  byte bVar1;
  char extraout_B;
  char extraout_B_00;
  char extraout_B_01;
  char extraout_B_02;
  char extraout_B_03;
  char extraout_B_04;
  undefined1 extraout_B_05;
  undefined1 extraout_B_06;
  undefined1 extraout_B_07;
  undefined1 extraout_B_08;
  
  FUN_57b4();
  DAT_09fd = extraout_B;
  FUN_57b4();
  DAT_09fe = extraout_B_00;
  FUN_57b4();
  DAT_09fc = extraout_B_01;
  if (((extraout_B_01 == DAT_09fd) || (DAT_09fc = extraout_B_01, extraout_B_01 == DAT_09fe)) ||
     (DAT_09fc = DAT_09fe, DAT_09fe == DAT_09fd)) {
    DAT_08b4 = DAT_08b4 & 0xfd;
  }
  else {
    DAT_08b4 = DAT_08b4 | 2;
    DAT_09fc = -0x80;
  }
  DAT_09ff = extraout_B_01;
  FUN_5fa4();
  FUN_57b4();
  DAT_0a01 = extraout_B_02;
  FUN_57b4();
  DAT_0a02 = extraout_B_03;
  FUN_57b4();
  DAT_0a00 = extraout_B_04;
  if (((extraout_B_04 == DAT_0a01) || (DAT_0a00 = extraout_B_04, extraout_B_04 == DAT_0a02)) ||
     (DAT_0a00 = DAT_0a02, DAT_0a02 == DAT_0a01)) {
    DAT_08b4 = DAT_08b4 & 0xfe;
  }
  else {
    DAT_08b4 = DAT_08b4 | 1;
    DAT_0a00 = -0x80;
  }
  DAT_0a03 = extraout_B_04;
  FUN_5fa4();
  bVar1 = DAT_0bd2;
  if ((DAT_0d63 != -0x80) && ((~DAT_08b2 & 0x80) == 0)) {
    if (((~DAT_08b4 & 2) == 0) && ((~DAT_08b4 & 1) == 0)) {
      if ((DAT_08b1 & 2) != 0) {
        DAT_08b1 = DAT_08b1 & 0xfd;
        bVar1 = DAT_0bd2 | 0x20;
      }
    }
    else if ((~DAT_08b1 & 2) == 0) {
      DAT_08b1 = DAT_08b1 | 2;
      bVar1 = DAT_0bd2 | 0x20;
      if ((~DAT_08ba & 2) == 0) {
        DAT_08ba = DAT_08ba | 2;
        bVar1 = DAT_0bd2 | 0x22;
      }
    }
  }
  DAT_0bd2 = bVar1;
  FUN_57b4(0xc06);
  DAT_0b30._0_1_ = extraout_B_05;
  FUN_57b4(&DAT_0c07);
  DAT_0b30._1_1_ = extraout_B_06;
  FUN_57b4(&DAT_0c08);
  DAT_0b32 = extraout_B_07;
  FUN_57b4(0xc09);
  DAT_0b33 = extraout_B_08;
  FUN_5fa4();
  return;
}


