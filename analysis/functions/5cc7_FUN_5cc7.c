/* Entry 5cc7 */

void FUN_5cc7(void)

{
  undefined1 extraout_B;
  undefined1 extraout_B_00;
  byte extraout_B_01;
  undefined1 extraout_B_02;
  byte extraout_B_03;
  undefined1 extraout_B_04;
  undefined1 extraout_B_05;
  undefined1 extraout_B_06;
  undefined1 extraout_B_07;
  
  FUN_57b4();
  DAT_08af = extraout_B;
  DAT_0bd4 = extraout_B;
  FUN_57b4();
  DAT_08b1 = extraout_B_00;
  DAT_0bd6 = extraout_B_00;
  FUN_57b4();
  DAT_08b0 = extraout_B_01;
  if ((DAT_0d5b != -0x80) && ((~DAT_08b2 & 0x80) == 0)) {
    DAT_08b0 = extraout_B_01 & 0xf7;
  }
  DAT_0bd5 = extraout_B_01;
  FUN_57b4(&DAT_0c23);
  DAT_08b2 = extraout_B_02;
  DAT_0bd7 = extraout_B_02;
  FUN_5fa4();
  FUN_57b4(&DAT_0c28);
  DAT_08b4 = extraout_B_03 & 0x30;
  DAT_0bea = extraout_B_03;
  FUN_5fa4();
  FUN_57b4(&DAT_0c24);
  DAT_08b8 = extraout_B_04;
  DAT_0bd8 = extraout_B_04;
  FUN_57b4(0xc25);
  DAT_08b9 = extraout_B_05;
  DAT_0bd9 = extraout_B_05;
  FUN_57b4(0xc26);
  DAT_08ba = extraout_B_06;
  DAT_0bda = extraout_B_06;
  FUN_57b4(&DAT_0c27);
  DAT_08bb = extraout_B_07;
  DAT_0bdb = extraout_B_07;
  FUN_5fa4();
  return;
}


