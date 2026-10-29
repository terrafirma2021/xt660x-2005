/* Entry 592e */

void FUN_592e(void)

{
  byte bVar1;
  char cVar2;
  undefined1 extraout_B;
  undefined1 extraout_B_00;
  char extraout_B_01;
  char cVar3;
  undefined1 extraout_B_02;
  undefined1 extraout_B_03;
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
  DAT_09ff = extraout_B_01;
  cVar2 = DAT_09fd;
  cVar3 = extraout_B_01;
  if (((extraout_B_01 == cVar2) || (cVar2 = DAT_09fe, extraout_B_01 == cVar2)) ||
     (cVar3 = DAT_09fe, cVar2 = DAT_09fd, cVar3 == cVar2)) {
    bVar1 = DAT_08b4;
    DAT_08b4 = bVar1 & 0xfd;
  }
  else {
    bVar1 = DAT_08b4;
    DAT_08b4 = bVar1 | 2;
    cVar3 = -0x80;
  }
  DAT_09fc = cVar3;
  FUN_5fa4();
  FUN_57b4();
  DAT_0a01 = extraout_B_02;
  FUN_57b4();
  DAT_0a02 = extraout_B_03;
  FUN_57b4();
  DAT_0a03 = extraout_B_04;
  cVar2 = DAT_0a01;
  cVar3 = extraout_B_04;
  if (((extraout_B_04 == cVar2) || (cVar2 = DAT_0a02, extraout_B_04 == cVar2)) ||
     (cVar3 = DAT_0a02, cVar2 = DAT_0a01, cVar3 == cVar2)) {
    bVar1 = DAT_08b4;
    DAT_08b4 = bVar1 & 0xfe;
  }
  else {
    bVar1 = DAT_08b4;
    DAT_08b4 = bVar1 | 1;
    cVar3 = -0x80;
  }
  DAT_0a00 = cVar3;
  FUN_5fa4();
  cVar2 = DAT_0d63;
  if ((cVar2 != -0x80) && (bVar1 = DAT_08b2, (~bVar1 & 0x80) == 0)) {
    bVar1 = DAT_08b4;
    if (((~bVar1 & 2) == 0) && (bVar1 = DAT_08b4, (~bVar1 & 1) == 0)) {
      bVar1 = DAT_08b1;
      if ((bVar1 & 2) != 0) {
        bVar1 = DAT_08b1;
        DAT_08b1 = bVar1 & 0xfd;
        bVar1 = DAT_0bd2;
        DAT_0bd2 = bVar1 | 0x20;
      }
    }
    else {
      bVar1 = DAT_08b1;
      if ((~bVar1 & 2) == 0) {
        bVar1 = DAT_08b1;
        DAT_08b1 = bVar1 | 2;
        bVar1 = DAT_0bd2;
        DAT_0bd2 = bVar1 | 0x20;
        bVar1 = DAT_08ba;
        if ((~bVar1 & 2) == 0) {
          bVar1 = DAT_08ba;
          DAT_08ba = bVar1 | 2;
          bVar1 = DAT_0bd2;
          DAT_0bd2 = bVar1 | 2;
        }
      }
    }
  }
  FUN_57b4(&UNK_0c06);
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


