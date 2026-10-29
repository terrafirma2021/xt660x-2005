/* Ghidra approximate pseudocode, not original or buildable source. HC12 flat CPU12 model. */
/* Entry 5000 */

/* WARNING: This function may have set the stack pointer */

void application_init(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  byte extraout_A;
  byte extraout_A_00;
  ushort uVar5;
  ushort uVar6;
  
  DAT_00f8 = 0xc0;
  DAT_0082 = 0;
  DAT_0082 = 0x80;
  DAT_0083 = 0x40;
  DAT_0084 = 99;
  DAT_0085 = 0x10;
  DAT_0000 = 0xf8;
  DAT_0002 = 0x1f;
  if (DAT_18d3 == '\t') {
    uVar4 = 0xff;
  }
  else {
    uVar4 = 0xfd;
  }
  DAT_0001 = uVar4;
  DAT_0003 = 0xec;
  DAT_00f0 = 0xe0;
  DAT_00f2 = 0xff;
  DAT_00e0 = 0xfe;
  DAT_00e2 = 0xd9;
  DAT_00e8 = 0xff;
  DAT_00ea = 0xea;
  DAT_0009 = 0x9f;
  DAT_0033 = 0x80;
  DAT_0046 = 0x80;
  DAT_004d = 5;
  DAT_0040 = 0xd8;
  DAT_0048 = 0xf0;
  DAT_0049 = 0x80;
  DAT_0041 = 200;
  bVar1 = DAT_00ee;
  DAT_00ee = bVar1 | 10;
  RAM00d0 = 0x40;
  DAT_00d2._1_1_ = 0x24;
  DAT_00d8 = 0x50;
  DAT_00da = 3;
  uVar4 = DAT_00db;
  uVar4 = DAT_00dd;
  FUN_5fa4();
  bVar1 = DAT_0008;
  DAT_0008 = bVar1 & 0xf3;
  uVar4 = DAT_0001;
  DAT_0896 = CONCAT11(uVar4,uVar4);
  uVar4 = DAT_0000;
  DAT_0894 = CONCAT11(uVar4,uVar4);
  DAT_0880 = 0x44;
  DAT_0881 = 0xf0;
  DAT_0a16 = DAT_0a16 & 0xf7;
  DAT_0888 = 0x10;
  FUN_5fc8();
  DAT_0921 = 0xff;
  DAT_091b = 0xff;
  DAT_091c = 0xff;
  DAT_091d = 0xff;
  DAT_091e = 0xff;
  DAT_091f = 0xff;
  DAT_0920 = 0xff;
  DAT_0b09 = 0xff;
  DAT_0afd = 0xff;
  DAT_0b20 = 0xff;
  DAT_0b05 = 0xff;
  DAT_0b06 = 0xff;
  DAT_0b6e = 0xff;
  DAT_0b02 = 0xff;
  DAT_0b03 = 0xff;
  DAT_0a06 = 0xff;
  DAT_0b6c = 0xff;
  DAT_0a38 = 0xffff;
  DAT_0a3a = 0xffff;
  DAT_0a3c = 0xffff;
  DAT_0a3e = 0xffff;
  DAT_0a40 = 0xffff;
  DAT_0a42 = 0xffff;
  DAT_0a2e = 0xffff;
  DAT_0a34 = 0xffff;
  DAT_0a32 = 0xffff;
  DAT_0a30 = 0xffff;
  DAT_0a36 = 0xffff;
  DAT_0a46 = 0xffff;
  DAT_0a48 = 0xffff;
  DAT_0a44 = 0xffff;
  DAT_0a4b = 0xffff;
  DAT_0a4d = 0xff;
  DAT_0a80 = 0xffff;
  DAT_0982 = 0x8000;
  DAT_09b7 = 0x8080;
  DAT_09b9 = 0x8080;
  DAT_09bb = 0x8080;
  DAT_09bd = 0x8080;
  DAT_09bf = 0x8080;
  DAT_09c1 = 0x8080;
  DAT_09c3 = 0x8080;
  DAT_09c5 = 0x8080;
  DAT_095c = 0x80;
  DAT_095d = 0x80;
  DAT_0979 = 0x80;
  DAT_097a = 0x80;
  DAT_0938 = 0x80;
  DAT_0970 = 0x80;
  DAT_0978 = 0x80;
  DAT_0a86 = 0x80;
  DAT_08ed = 0x80;
  DAT_0bbb = 0x80;
  DAT_0922 = 0xc0;
  DAT_0c03 = 0xc0;
  DAT_08e0 = DAT_4e18;
  DAT_0bb4 = DAT_4e18;
  DAT_0889 = DAT_0889 | 0x20;
  DAT_08e4 = DAT_08e2;
  DAT_08c5 = 0x7f;
  DAT_0af7 = 0x7b;
  DAT_0b21 = 1;
  DAT_0924 = 6;
  DAT_095e = 0x1e0;
  DAT_092a = 0x9c4;
  DAT_092c = 0x9c4;
  DAT_0a22 = 0;
  DAT_0a24 = 0;
  DAT_0a26 = 0;
  DAT_0a28 = 0;
  DAT_0cab = DAT_0d7e + DAT_0d9d;
  if (DAT_0cab == 0x17) {
    DAT_0cab = 0x16;
  }
  else if (0x16 < DAT_0cab) {
    DAT_0cab = DAT_0cab - 0x18;
  }
  DAT_0a1c = DAT_18e0;
  if (0x16 < DAT_18e0) {
    DAT_0a1c = 0x16;
  }
  if (DAT_0a1c < 0xc) {
    if (DAT_0a1c == 0xb) {
      DAT_0a1c = 10;
    }
  }
  else {
    DAT_0a1c = DAT_0a1c - 0xc;
  }
  if (DAT_0d7b < 0x17) {
    DAT_0a1a = DAT_0d7b;
    if (DAT_0d7b == 0xb) {
      DAT_0a1a = 10;
    }
  }
  else {
    DAT_0a1a = 0x16;
  }
  if (DAT_4243 == '\x02') {
    DAT_0884 = DAT_0884 | 0x40;
  }
  DAT_0892 = DAT_0892 | 4;
  DAT_08a0 = DAT_08a0 | 0x80;
  DAT_08ae = DAT_08ae | 0x40;
  DAT_0880 = DAT_0880 | 0x80;
  DAT_088c = DAT_088c | 0x30;
  DAT_089e = DAT_089e | 0xc0;
  DAT_0a1d = DAT_0a1c;
  DAT_0a1e = DAT_0a1c;
  DAT_0a1f = DAT_0a1c;
  FUN_56b4();
  DAT_08e8 = DAT_0e3e;
  DAT_08ea = DAT_0e3e;
  uVar5 = DAT_0e3e;
  if ((char)(DAT_0e3e >> 8) == -1) {
    uVar5 = 0xfe00;
  }
  DAT_0ae9 = (undefined1)(uVar5 >> 8);
  DAT_08d0 = DAT_0e3e >> 6;
  DAT_0c86 = DAT_0e40;
  DAT_08f2 = DAT_0e40;
  DAT_0cb4 = DAT_0e40;
  DAT_0cb6 = DAT_0e40;
  DAT_0cc8 = DAT_0e40;
  DAT_0cca = DAT_0e40;
  DAT_0cc6 = DAT_0e40;
  DAT_08d8 = DAT_0e44;
  DAT_08d9 = DAT_0e46;
  DAT_0bce = DAT_0e46;
  DAT_08da = (ushort)DAT_0e46 << 8;
  uVar6 = (ushort)DAT_0e46 << 8;
  uVar5 = uVar6 / 0xf0;
  if (0xfe < uVar5) {
    uVar5 = 0xfe;
  }
  DAT_0aec = (undefined1)uVar5;
  DAT_08dd = DAT_0e48;
  DAT_08d2 = CONCAT11(DAT_0e4a,DAT_0aec);
  DAT_08d6 = DAT_0e4a;
  DAT_0880 = DAT_0880 | 0x30;
  DAT_0085 = 0;
  DAT_08d4 = DAT_08d2;
  DAT_08e6 = DAT_08d0;
  DAT_09d0 = DAT_08d0;
  DAT_0b0e = DAT_08d0;
  DAT_0b10 = DAT_08d0;
  DAT_0b12 = DAT_08d0;
  DAT_0b14 = DAT_08d0;
  DAT_0bb0 = DAT_08d0;
  DAT_0bb2 = DAT_08d0;
  DAT_0bbe = DAT_08d0;
  DAT_0bc0 = DAT_08d0;
  DAT_0bc2 = DAT_08d0;
  DAT_0bc4 = DAT_08d0;
  DAT_0bfc = DAT_08d2;
  FUN_5fa4(uVar6 % 0xf0);
  interp_u8_q8_index();
  DAT_0ae8 = (byte)((ushort)extraout_A * 0xa0 >> 8);
  if (0x95 < DAT_0ae8) {
    DAT_0ae8 = 0x95;
  }
  DAT_08f4 = extraout_A;
  DAT_08f6 = extraout_A;
  interp_u8_q8_index();
  DAT_0aeb = (byte)((ushort)extraout_A_00 * 0xa0 >> 8);
  if (0x95 < DAT_0aeb) {
    DAT_0aeb = 0x95;
  }
  DAT_0888 = DAT_0888 & 0xef;
  bVar1 = DAT_0008;
  DAT_0008 = bVar1 & 0xf3;
  DAT_0e26 = DAT_4fa0;
  DAT_08f5 = extraout_A_00;
  if (DAT_4e86 == 0x55aa) {
    FUN_5857();
  }
  if (DAT_4e88 == -0x55ab) {
    FUN_5c05();
    FUN_5d4d();
  }
  FUN_5d67();
  FUN_5cc7();
  FUN_592e();
  if ((DAT_0bd5 & 8) != 0) {
    DAT_0bd2 = DAT_0bd2 | 0x40;
  }
  if (DAT_0dd5 != -0x80) {
    DAT_0d08 = DAT_0d08 | 1;
    FUN_5ef1();
  }
  FUN_a489();
  FUN_5fbf();
  FUN_5fba();
  bVar1 = DAT_004a;
  DAT_004a = bVar1 & 0xfb | 8;
  bVar1 = DAT_004b;
  DAT_004b = bVar1 & 0xeb | 0x28;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 6;
  DAT_0af2 = DAT_0044;
  uVar4 = DAT_0001;
  DAT_0896 = CONCAT11(uVar4,uVar4);
  DAT_0af4 = DAT_0af2;
  DAT_0c00 = DAT_0af2;
  do {
    DAT_08bc = DAT_08bc ^ 0x80;
    DAT_0ffc = (undefined1 *)0x539b;
    FUN_5fa3();
    bVar1 = DAT_0020;
    if (((bVar1 & 1) != 0) && (sVar2 = DAT_0024, sVar2 == -0x5aa6)) {
      uVar3 = DAT_00d4;
      uVar4 = DAT_00d6._1_1_;
      DAT_00d2._1_1_ = 0;
      DAT_08a0 = 0x80;
      DAT_08ae = 0x40;
    }
    bVar1 = DAT_0020;
    if ((bVar1 & 4) != 0) {
      DAT_00cb = 0;
    }
    DAT_0ffc = (undefined1 *)0x53c5;
    FUN_6259();
    DAT_0ffc = (undefined1 *)0x53c8;
    FUN_6772();
    DAT_0ffc = (undefined1 *)0x53cb;
    FUN_f8a0();
    DAT_0ffc = (undefined1 *)0x53ce;
    FUN_6299();
    if ((DAT_0881 & 4) != 0) {
      DAT_0ffc = &LAB_53d6;
      FUN_8691();
    }
    if ((DAT_0881 & 2) != 0) {
      DAT_0ffc = &LAB_53de;
      FUN_869e();
    }
    if ((DAT_0887 & 2) != 0) {
      DAT_0ffc = &LAB_53e6;
      FUN_87e7();
    }
    if ((~DAT_0882 & 0x80) != 0) {
      DAT_0ffc = (undefined1 *)0x53f2;
      FUN_73a5();
      DAT_0a30 = DAT_0a2e;
      DAT_0a36 = DAT_0a34;
      DAT_0a32 = DAT_0a34 >> 2;
      if (((DAT_0c03 & 0x1f) < 2) || (5 < (DAT_0c03 & 0x1f))) {
        DAT_0ffc = (undefined1 *)0x541c;
        FUN_54f0();
        DAT_0924 = DAT_0de3;
        DAT_0a94 = DAT_0de5;
        DAT_0aa4 = DAT_0de7;
        DAT_0ffc = &LAB_5435;
        FUN_55b6();
      }
      if ((((((~DAT_08a0 & 4) == 0) && ((~DAT_08b2 & 0x80) == 0)) && (DAT_08f8 < &UNK_2800)) &&
          (((((~DAT_0884 & 4) == 0 && ((~DAT_0d08 & 1) == 0)) &&
            (((~DAT_0884 & 2) == 0 && (((~DAT_088c & 0x80) == 0 && ((~DAT_0885 & 0x40) == 0)))))) &&
           ((~DAT_0bf8 & 0x80) == 0)))) &&
         ((((~DAT_089b & 0x80) == 0 && ((~DAT_089b & 8) == 0)) && ((~DAT_0880 & 0x40) == 0)))) {
        DAT_0ffc = &LAB_5477;
        FUN_5664();
      }
      DAT_0882 = DAT_0882 & 0x7f;
    }
    DAT_0ffc = (undefined1 *)0x547e;
    FUN_857d();
    if ((DAT_0881 & 0x80) == 0) {
      DAT_0a16 = DAT_0a16 | 1;
LAB_5494:
      DAT_0ffc = &LAB_5497;
      FUN_74b8();
    }
    else if ((DAT_0881 & 0x40) == 0) {
      DAT_0a16 = DAT_0a16 | 2;
      goto LAB_5494;
    }
    DAT_0ffc = (undefined1 *)0x549a;
    FUN_6772();
    DAT_0ffc = (undefined1 *)0x549d;
    FUN_6299();
    if ((DAT_0882 & 0x40) != 0) {
      DAT_0ffc = &LAB_54a5;
      FUN_8b34();
    }
    if ((DAT_0887 & 0x20) != 0) {
      DAT_0ffc = &LAB_54ad;
      FUN_a557();
    }
    if ((DAT_0882 & 4) != 0) {
      DAT_0ffc = &LAB_54b5;
      FUN_a564();
    }
    if ((DAT_088e & 0x80) != 0) {
      DAT_0ffc = &LAB_54bd;
      FUN_ac7f();
    }
    if ((DAT_0882 & 0x20) != 0) {
      DAT_0ffc = &LAB_54c5;
      FUN_aff9();
    }
    if ((DAT_0882 & 0x10) != 0) {
      DAT_0ffc = &LAB_54cd;
      FUN_b166();
    }
    if ((DAT_0882 & 8) != 0) {
      DAT_0ffc = &LAB_54d5;
      FUN_b817();
    }
    if ((DAT_0882 & 2) != 0) {
      DAT_0ffc = &LAB_54dd;
      FUN_bc2e();
    }
    if ((DAT_0887 & 0x80) != 0) {
      DAT_0ffc = &LAB_54e5;
      FUN_c063();
    }
    if ((DAT_0887 & 0x40) != 0) {
      DAT_0ffc = &LAB_54ed;
      FUN_c199();
    }
  } while( true );
}


/* Entry 54f0 */

void FUN_54f0(undefined2 param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  DAT_0dde._0_1_ = (undefined1)((ushort)param_1 >> 8);
  DAT_0dde._1_1_ = DAT_0dde._0_1_;
  DAT_0de0 = scale_u16_by_u8();
  uVar1 = DAT_0a8b + DAT_0de0;
  if (CARRY2((ushort)DAT_0a8b,DAT_0de0)) {
    uVar1 = 0xffff;
  }
  DAT_0de5 = uVar1 - DAT_4f9e;
  if (uVar1 < DAT_4f9e) {
    DAT_0de5 = 0;
  }
  DAT_0de7 = DAT_0a32 - DAT_0de5;
  if ((DAT_0a32 < DAT_0de5) || (DAT_0de7 < DAT_0db4)) {
    uVar1 = DAT_0a32 + DAT_0a30;
    if (CARRY2(DAT_0a32,DAT_0a30)) {
      uVar1 = 0xffff;
    }
    DAT_0de7 = uVar1 - DAT_0de5;
    if (uVar1 < DAT_0de5) {
      uVar1 = DAT_0a32 + DAT_0a30;
      if (CARRY2(DAT_0a32,DAT_0a30)) {
        uVar1 = 0xffff;
      }
      uVar2 = uVar1 + DAT_0a30;
      if (CARRY2(uVar1,DAT_0a30)) {
        uVar2 = 0xffff;
      }
      DAT_0de7 = uVar2 - DAT_0de5;
      if (uVar2 < DAT_0de5) {
        uVar1 = DAT_0a32 + DAT_0a36;
        if (CARRY2(DAT_0a32,DAT_0a36)) {
          uVar1 = 0xffff;
        }
        if ((uVar1 < DAT_0de5) || (DAT_0de7 = uVar1 - DAT_0de5, uVar1 - DAT_0de5 < DAT_0db4)) {
          DAT_0de7 = DAT_0db4;
        }
        DAT_0de3 = 3;
      }
      else if (DAT_0de7 < DAT_0db4) {
        DAT_0de7 = DAT_0de7 + DAT_0a30;
        DAT_0de3 = 3;
      }
      else {
        DAT_0de3 = 4;
      }
    }
    else if (DAT_0de7 < DAT_0db4) {
      DAT_0de7 = DAT_0de7 + DAT_0a30;
      DAT_0de3 = 4;
    }
    else {
      DAT_0de3 = 5;
    }
  }
  else {
    DAT_0de3 = 6;
  }
  return;
}


/* Entry 55b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_55b6(void)

{
  ushort uVar1;
  ushort uVar2;
  
  DAT_0dde._0_1_ = 1;
  RAM0x0ddf = DAT_0a96;
  uVar1 = DAT_0a96 + DAT_0a94;
  if (uVar1 < DAT_0a32) {
    RAM0x0de1 = uVar1;
    DAT_0aa2 = DAT_0a32 - uVar1;
    if (DAT_0db0 <= DAT_0aa2) {
      DAT_0925 = 6;
      return;
    }
    DAT_0aa2 = DAT_0aa2 + DAT_0a30;
    DAT_0925 = 5;
    return;
  }
  RAM0x0de1 = uVar1 - DAT_0a32;
  _DAT_0de3 = -DAT_0db0 - (uVar1 - DAT_0a32);
  do {
    uVar1 = _DAT_0de3 + DAT_0a30;
    uVar2 = uVar1;
    if (CARRY2(_DAT_0de3,DAT_0a30)) goto LAB_5628;
    DAT_0dde._0_1_ = DAT_0dde._0_1_ + 1;
    _DAT_0de3 = uVar1;
  } while (DAT_0dde._0_1_ < 9);
  uVar2 = uVar1 + DAT_0a30;
  if (!CARRY2(uVar1,DAT_0a30)) {
    uVar2 = 0;
  }
LAB_5628:
  DAT_0aa2 = uVar2 + DAT_0db0;
  if (DAT_0dde._0_1_ < 7) {
    DAT_0925 = 6 - DAT_0dde._0_1_ & 0x1f;
  }
  else {
    if (DAT_0dde._0_1_ == 7) {
      if (CARRY2(DAT_0aa2,DAT_0a30)) {
        DAT_0aa2 = DAT_0db0;
      }
      DAT_0aa2 = DAT_0aa2 + DAT_0a30;
    }
    DAT_0925 = 10;
  }
  return;
}


/* Entry 5664 */

void FUN_5664(void)

{
  short sVar1;
  byte bVar2;
  
  if (((((~DAT_088c & 2) == 0) && ((~DAT_089a & 2) == 0)) && (bVar2 = DAT_00e1, (bVar2 & 8) == 0))
     && ((DAT_0c03 & 0x1f) == DAT_0925)) {
    sVar1 = DAT_0044;
    DAT_0dde = sVar1 + DAT_4f20;
    sVar1 = (DAT_0af0 + DAT_0aa2) - DAT_0dde;
    DAT_0b7a = DAT_0dde;
    if (-1 < sVar1) {
      DAT_0b7a = sVar1 + DAT_0dde;
    }
    DAT_0056 = DAT_0b7a;
    bVar2 = DAT_0049;
    DAT_0049 = bVar2 | 0xc0;
    DAT_004e = 8;
    bVar2 = DAT_004c;
    DAT_004c = bVar2 | 8;
    DAT_0a92 = DAT_0a92 | 8;
  }
  return;
}


/* Entry 56b4 */

void FUN_56b4(void)

{
  FUN_56d0();
  FUN_5728();
  FUN_56d0();
  FUN_5728();
  FUN_56d0();
  FUN_5728();
  FUN_56d0();
  FUN_5728();
  FUN_56d0();
  return;
}


/* Entry 56d0 */

void FUN_56d0(void)

{
  byte bVar1;
  
  DAT_0e3b = DAT_0e3b + 1;
  if (((&DAT_56cb)[DAT_0e3b & 3] & 1) == 0) {
    DAT_0e28 = DAT_0e28 & 0x7f;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 & 0xfb;
  }
  else {
    DAT_0e28 = DAT_0e28 | 0x80;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 | 4;
  }
  if (((&DAT_56cb)[DAT_0e3b & 3] & 2) == 0) {
    DAT_0e28 = DAT_0e28 & 0xbf;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 & 0xf7;
  }
  else {
    DAT_0e28 = DAT_0e28 | 0x40;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 | 8;
  }
  DAT_0083 = 0x40;
  DAT_0084 = 99;
  DAT_0085 = 0x10;
  return;
}


/* Entry 5728 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5728(void)

{
  byte bVar1;
  
  while (bVar1 = DAT_0086, (~bVar1 & 0x80) == 0) {
    DAT_0e3c = DAT_0e3c + 1;
  }
  DAT_0e3e = DAT_0090;
  DAT_0e40 = DAT_0092;
  DAT_0e42 = DAT_0094;
  _DAT_0e44 = DAT_0096;
  _DAT_0e46 = DAT_0098;
  _DAT_0e48 = DAT_009a;
  bVar1 = DAT_0e3b & 3;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      DAT_0e4c = DAT_009c;
      goto LAB_5784;
    }
    if (bVar1 == 2) {
      DAT_0e4e = DAT_009c;
      goto LAB_5784;
    }
    if (bVar1 == 3) {
      DAT_0e50 = DAT_009c;
      goto LAB_5784;
    }
  }
  _DAT_0e4a = DAT_009c;
LAB_5784:
  bVar1 = DAT_0e3b & 3;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      DAT_0e54 = DAT_009e;
      return;
    }
    if (bVar1 == 2) {
      DAT_0e56 = DAT_009e;
      return;
    }
    if (bVar1 == 3) {
      DAT_0e58 = DAT_009e;
      return;
    }
  }
  DAT_0e52 = DAT_009e;
  return;
}


/* Entry 57b4 */

undefined2 FUN_57b4(undefined2 param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 | 8;
  DAT_00d8 = 0x50;
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = (char)((ushort)param_1 >> 8);
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = (char)param_1;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  DAT_00d8 = 0x54;
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = 0xff;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 & 0xf7;
  uVar3 = DAT_00dd;
  return CONCAT11(uVar1,uVar3);
}


/* Entry 57e9 */

undefined2 FUN_57e9(undefined2 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  
  DAT_0dde._0_1_ = (undefined1)((ushort)param_1 >> 8);
  DAT_00d8 = 0x50;
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 | 8;
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = 9;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = 0x80;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 & 0xf7;
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 | 8;
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = (char)((ushort)param_2 >> 8);
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = (char)param_2;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = DAT_0dde._0_1_;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 & 0xf7;
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 | 8;
  DAT_0891 = DAT_0891 | 2;
  return CONCAT11(uVar1,DAT_0dde._0_1_);
}


/* Entry 5843 */

void FUN_5843(void)

{
  FUN_5857();
  FUN_5a13();
  FUN_5c05();
  FUN_5d4d();
  FUN_5d77();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Entry 5857 */

void FUN_5857(void)

{
  byte bVar1;
  
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  DAT_0891 = DAT_0891 & 0xfd;
  return;
}


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


/* Entry 5a13 */

void FUN_5a13(void)

{
  byte bVar1;
  
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  DAT_0891 = DAT_0891 & 0xfd;
  return;
}


/* Entry 5b68 */

void candidate_unreferenced_5b68(void)

{
  DAT_09b7._0_1_ = FUN_57b4(&DAT_0c10);
  DAT_09b7._1_1_ = FUN_57b4(0xc11);
  DAT_09b9._0_1_ = FUN_57b4(0xc12);
  DAT_09b9._1_1_ = FUN_57b4(&DAT_0c13);
  FUN_5fa4();
  DAT_09bb._0_1_ = FUN_57b4(&DAT_0c14);
  DAT_09bb._1_1_ = FUN_57b4(0xc15);
  DAT_09bd._0_1_ = FUN_57b4(0xc16);
  DAT_09bd._1_1_ = FUN_57b4(&DAT_0c17);
  FUN_5fa4();
  DAT_09bf._0_1_ = FUN_57b4(&DAT_0c18);
  DAT_09bf._1_1_ = FUN_57b4(0xc19);
  DAT_09c1._0_1_ = FUN_57b4(0xc1a);
  DAT_09c1._1_1_ = FUN_57b4(&DAT_0c1b);
  FUN_5fa4();
  DAT_09c3._0_1_ = FUN_57b4(&DAT_0c1c);
  DAT_09c3._1_1_ = FUN_57b4(0xc1d);
  DAT_09c5._0_1_ = FUN_57b4(0xc1e);
  DAT_09c5._1_1_ = FUN_57b4(&DAT_0c1f);
  FUN_5fa4();
  return;
}


/* Entry 5c05 */

void FUN_5c05(void)

{
  byte bVar1;
  
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  DAT_0891 = DAT_0891 & 0xfd;
  return;
}


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


/* Entry 5d4d */

void FUN_5d4d(void)

{
  byte bVar1;
  
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  DAT_0891 = DAT_0891 & 0xfd;
  return;
}


/* Entry 5d67 */

void FUN_5d67(void)

{
  DAT_0b9a = FUN_57b4(&DAT_0c30);
  DAT_0beb = DAT_0b9a;
  FUN_5fa4();
  return;
}


/* Entry 5d77 */

void FUN_5d77(void)

{
  byte bVar1;
  
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  FUN_57e9();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_5fa4();
  DAT_0891 = DAT_0891 & 0xfd;
  return;
}


/* Entry 5e63 */

void FUN_5e63(void)

{
  DAT_0bec = FUN_57b4(0xc50);
  DAT_0d1a = DAT_0bec;
  DAT_0bed = FUN_57b4(0xc51);
  DAT_0d1b = DAT_0bed;
  DAT_0bee = FUN_57b4(0xc52);
  DAT_0d1c = DAT_0bee;
  DAT_0bef = FUN_57b4(0xc53);
  DAT_0d1d = DAT_0bef;
  FUN_5fa4();
  DAT_0bf0 = FUN_57b4(0xc54);
  DAT_0d1e = DAT_0bf0;
  DAT_0bf1 = FUN_57b4(0xc55);
  DAT_0d1f = DAT_0bf1;
  DAT_0bf2 = FUN_57b4(0xc56);
  DAT_0d20 = DAT_0bf2;
  DAT_0bf3 = FUN_57b4(0xc57);
  DAT_0d21 = DAT_0bf3;
  FUN_5fa4();
  DAT_0bf4 = FUN_57b4(0xc58);
  DAT_0d22 = DAT_0bf4;
  DAT_0bf5 = FUN_57b4(0xc59);
  DAT_0d23 = DAT_0bf5;
  DAT_0bf6 = FUN_57b4(0xc5a);
  DAT_0d24 = DAT_0bf6;
  FUN_5fa4();
  return;
}


/* Entry 5ef1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ef1(undefined1 param_1)

{
  short sVar1;
  
  sVar1 = CONCAT11(DAT_0dd5,param_1);
  if ((DAT_0dd5 != -0x40) && (FUN_5e63(), sVar1 = _DAT_0d23, _DAT_0d23 == 0x5aa5)) {
    FUN_5f35();
    return;
  }
  DAT_0d08 = DAT_0d08 & 0x7f;
  if ((sVar1 == -1) && (_DAT_0d1a == -1)) {
    DAT_0d37 = 0xff;
    DAT_0d39 = 0;
  }
  else {
    FUN_5d77();
    FUN_5e63();
    DAT_0d37 = 0xff0;
    DAT_0d39 = 0xf;
  }
  return;
}


/* Entry 5f35 */

void FUN_5f35(void)

{
  DAT_0d37._0_1_ = DAT_0d1a;
  if (((DAT_0d1a == DAT_0d1d) || (DAT_0d1a == DAT_0d20)) ||
     (DAT_0d37._0_1_ = DAT_0d1d, DAT_0d1d == DAT_0d20)) {
    if (((DAT_0d1b == DAT_0d1e) || (DAT_0d1b == DAT_0d21)) || (DAT_0d1e == DAT_0d21)) {
      do {
        if ((DAT_0d1c == DAT_0d1f) || (DAT_0d1c == DAT_0d22)) {
          DAT_0d39 = DAT_0d1c;
          goto LAB_5f9e;
        }
      } while (DAT_0d1f == DAT_0d22);
      DAT_0d37._0_1_ = -1;
      DAT_0d39 = -1;
    }
    else {
      DAT_0d37._0_1_ = -1;
      DAT_0d39 = -1;
    }
  }
  else {
    DAT_0d37._0_1_ = -1;
    DAT_0d39 = -1;
  }
LAB_5f9e:
  DAT_0d08 = DAT_0d08 | 0x80;
  DAT_0d37._1_1_ = 0;
  return;
}


/* Entry 5fa3 */

void FUN_5fa3(void)

{
  return;
}


/* Entry 5fa4 */

undefined2 FUN_5fa4(undefined2 param_1)

{
  byte bVar1;
  
  DAT_003f = 0x55;
  DAT_003f = 0xaa;
  bVar1 = DAT_0000;
  if ((~bVar1 & 0x10) == 0) {
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 | 0x10;
  }
  else {
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 & 0xef;
  }
  return param_1;
}


/* Entry 5fba */

void FUN_5fba(void)

{
  DAT_004e = 0xff;
  return;
}


/* Entry 5fbf */

undefined1 FUN_5fbf(void)

{
  DAT_003b = 0x14;
  DAT_0038 = 0x80;
  return 0x80;
}


/* Entry 5fc8 */

void FUN_5fc8(void)

{
  bool bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  DAT_0d3c = DAT_4ef5;
  puVar3 = &DAT_4ef6;
  puVar4 = &DAT_0d3d;
  cVar2 = DAT_4ef5;
  do {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    bVar1 = cVar2 != '\0';
    if ((char)(cVar2 + -1) == '\0') break;
    cVar2 = cVar2 + -1;
  } while (bVar1);
  DAT_0d52 = DAT_4e67;
  DAT_0d53 = DAT_4e68;
  DAT_0d54 = DAT_4e69;
  DAT_0d55 = DAT_4e6a;
  DAT_0d56 = DAT_4e6b;
  DAT_0d57 = DAT_4e6c;
  DAT_0d58 = DAT_4e6d;
  DAT_0d59 = DAT_4e6e;
  DAT_0d5a = DAT_4e6f;
  DAT_0d5b = DAT_4e70;
  DAT_0d5c = DAT_4e71;
  DAT_0d5d = DAT_4e72;
  DAT_0d5e = DAT_4e73;
  DAT_0d5f = DAT_4e74;
  DAT_0d60 = DAT_4e75;
  DAT_0d61 = DAT_4e76;
  DAT_0d62 = DAT_4e77;
  DAT_0d63 = DAT_4e78;
  DAT_0d64 = DAT_4e79;
  DAT_0d65 = DAT_4e7a;
  DAT_0d66 = DAT_4e90;
  DAT_0d67 = DAT_18de;
  DAT_0d68 = DAT_4bee;
  DAT_0d69 = DAT_4bef;
  DAT_0d6a = DAT_4bf0;
  DAT_0d6b = DAT_4bf1;
  DAT_0d6c = DAT_4bf2;
  DAT_0d6d = DAT_4bf3;
  DAT_0d6e = DAT_4bf4;
  DAT_0d6f = DAT_4bf5;
  DAT_0d70 = DAT_4bf6;
  DAT_0d71 = DAT_4bf7;
  DAT_0d72 = DAT_4bf8;
  DAT_0d73 = DAT_4bfa;
  DAT_0d74 = DAT_4bfb;
  DAT_0d75 = DAT_4e55;
  DAT_0d76 = DAT_4e54;
  DAT_0d77 = DAT_4e56;
  DAT_0d78 = DAT_4e53;
  DAT_0d79 = DAT_18dc;
  DAT_0d7a = DAT_18dd;
  DAT_0d7b = DAT_18e4;
  DAT_0d7c = DAT_423e;
  DAT_0d7d = DAT_423f;
  DAT_0d7e = DAT_18e2;
  DAT_0d7f = DAT_4bd7;
  DAT_0d80 = DAT_4bd8;
  DAT_0d81 = DAT_4bd9;
  DAT_0d82 = DAT_4bda;
  DAT_0d83 = DAT_4bdb;
  DAT_0d84 = DAT_4bdc;
  DAT_0d85 = DAT_4bdd;
  DAT_0d86 = DAT_4bde;
  DAT_0d87 = DAT_18d3;
  DAT_0d88 = DAT_4e58;
  DAT_0d8a = DAT_4e3f;
  DAT_0d89 = DAT_4e3d;
  DAT_0d8b = DAT_18ce;
  DAT_0d8c = DAT_1844;
  DAT_0d8d = DAT_1845;
  DAT_0d8e = DAT_1846;
  DAT_0d8f = DAT_1847;
  DAT_0d90 = DAT_1848;
  DAT_0d91 = DAT_1849;
  DAT_0d92 = DAT_184a;
  DAT_0d93 = DAT_184b;
  DAT_0d94 = DAT_184c;
  DAT_0d95 = DAT_184d;
  DAT_0d96 = DAT_184e;
  DAT_0d97 = DAT_184f;
  DAT_0d98 = DAT_1850;
  DAT_0d99 = DAT_1851;
  DAT_0d9a = DAT_18d2;
  DAT_0d9b = DAT_18e3;
  DAT_0d9c = DAT_18e5;
  DAT_0d9e = DAT_4ba0;
  DAT_0d9f = DAT_18c9;
  DAT_0da0 = DAT_18ca;
  DAT_0da1 = DAT_18cb;
  DAT_0da2 = DAT_18cc;
  DAT_0da3 = DAT_18cd;
  DAT_0d9d = DAT_18e1;
  DAT_0da4 = DAT_357b;
  DAT_0da5 = DAT_357c;
  DAT_0da6 = DAT_189a;
  DAT_0dd5 = DAT_4e7d;
  DAT_0dd6 = DAT_4e7e;
  DAT_0dd7 = DAT_4e7f;
  DAT_0dd8 = DAT_4e85;
  DAT_0dd9 = DAT_4be5;
  DAT_0dda = DAT_4e2c;
  DAT_0ddb = DAT_4e2d;
  DAT_0ddc = DAT_4e2e;
  DAT_0daa = DAT_18da;
  DAT_0da8 = DAT_4e5e;
  DAT_0dac = DAT_18d0;
  DAT_0dae = DAT_4f1c;
  DAT_0db0 = DAT_4f1e;
  DAT_0db2 = DAT_4f1a;
  DAT_0db4 = DAT_4f22;
  DAT_0db6 = DAT_4e8a;
  DAT_0db8 = DAT_4e26;
  puVar3 = &DAT_1854;
  puVar4 = &DAT_0dba;
  cVar2 = '\x1b';
  do {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    bVar1 = cVar2 != '\0';
    if ((char)(cVar2 + -1) == '\0') {
      return;
    }
    cVar2 = cVar2 + -1;
  } while (bVar1);
  return;
}


/* Entry 6259 */

void FUN_6259(void)

{
  if (DAT_0abe < DAT_4be0) {
    if (DAT_0abe < DAT_4bdf) {
      DAT_089a = DAT_089a & 0xf7;
    }
  }
  else {
    DAT_089a = DAT_089a | 8;
  }
  if (DAT_0abe < DAT_4be4) {
    if (DAT_0abe < DAT_4be3) {
      DAT_089a = DAT_089a & 0xfb;
    }
  }
  else {
    DAT_089a = DAT_089a | 4;
  }
  if (DAT_0abe < DAT_4be2) {
    if (DAT_0abe < DAT_4be1) {
      DAT_089a = DAT_089a & 0xfd;
    }
  }
  else {
    DAT_089a = DAT_089a | 2;
  }
  return;
}


/* Entry 6299 */

void FUN_6299(void)

{
  if ((DAT_08ae & 2) != 0) {
    FUN_62aa();
    DAT_08ae = DAT_08ae & 0xfd | 1;
  }
  return;
}


/* Entry 62aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_62aa(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if ((DAT_08a0 & 4) == 0) {
    bVar1 = DAT_08af | DAT_08b8;
    bVar3 = DAT_08b0 | DAT_08b9;
    _DAT_08b8 = CONCAT11(bVar1,bVar3);
    bVar2 = DAT_08b1 | DAT_08ba;
    bVar4 = DAT_08b2 | DAT_08bb;
    _DAT_08ba = CONCAT11(bVar2,bVar4);
    if ((((DAT_08af == 0) && (DAT_08b0 == 0)) && (DAT_08b1 == 0)) && (DAT_08b2 == 0)) {
      DAT_0892 = DAT_0892 & 0xbf | 0x80;
    }
    else {
      DAT_0892 = DAT_0892 & 0x7f | 0x40;
    }
    if (((bVar1 == 0) && (bVar3 == 0)) && ((bVar2 == 0 && (bVar4 == 0)))) {
      DAT_0892 = DAT_0892 & 0xfd;
    }
    else {
      DAT_0892 = DAT_0892 | 2;
    }
  }
  DAT_08a6 = DAT_0ae2;
  DAT_08a7 = DAT_0ae3;
  if ((DAT_08a1 & 1) == 0) {
    FUN_6496();
    if ((DAT_08a0 & 4) == 0) {
      if ((~DAT_0884 & 0x20) == 0) {
        if (((~DAT_0892 & 0x40) != 0) || ((~DAT_0880 & 1) != 0)) goto LAB_63e4;
        bVar1 = ~DAT_08a1 & 2;
      }
      else {
        bVar1 = ~DAT_0888 & 8;
      }
      if (bVar1 != 0) goto LAB_63e4;
    }
    else if ((DAT_0893 & 4) != 0) {
      if ((((DAT_0bdd == DAT_0d46) || (DAT_0bdd == DAT_0d47)) || (DAT_0bdd == DAT_0d48)) ||
         ((DAT_0bdd == DAT_0d49 || (DAT_0bdd == DAT_0d4a)))) {
        DAT_0be6 = (DAT_0be6 + 1) - (0xfe < DAT_0be6);
        if (DAT_0be6 <= DAT_4f14) goto LAB_63e4;
        DAT_0893 = DAT_0893 & 0xfb;
        DAT_0be6 = 0;
      }
      else if (((DAT_0bdd == DAT_0d4b) || (DAT_0bdd == DAT_0d4c)) || (DAT_0bdd == DAT_0d4d)) {
LAB_63e4:
        DAT_08a8 = -0x80;
        goto LAB_63e6;
      }
    }
    DAT_08a8 = '\0';
  }
  else {
    DAT_08a8 = '@';
  }
LAB_63e6:
  if (((((DAT_08a1 & 1) == 0) && ((DAT_08a0 & 2) == 0)) && ((DAT_08a0 & 0x80) == 0)) &&
     ((DAT_08a0 & 0x40) == 0)) {
    if ((DAT_08a0 & 0x20) == 0) {
      if ((DAT_08a0 & 4) != 0) {
        FUN_650b();
      }
    }
    else if ((DAT_08a0 & 8) == 0) {
      if (((DAT_08a1 & 8) == 0) && ((DAT_08a1 & 4) == 0)) {
        if ((DAT_08a1 & 0x10) == 0) goto LAB_6486;
        DAT_08a1 = DAT_08a1 & 0xef;
      }
      else if (DAT_08a9 != -0x3e) {
        DAT_0aee = 0xc2;
        goto LAB_6486;
      }
      DAT_0aee = 0xc1;
    }
  }
LAB_6486:
  DAT_08a9 = 0;
  DAT_08aa = DAT_08a8 + DAT_08a7 + DAT_08a6;
  return;
}


/* Entry 6496 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_6496(void)

{
  if ((((DAT_08a0 & 2) == 0) || ((DAT_0892 & 0x40) == 0)) || ((DAT_0881 & 0x20) == 0)) {
    DAT_0b64 = 0;
  }
  else if (((DAT_0892 & 0x10) == 0) || (DAT_0b66 == '\0')) {
    _DAT_0b67 = CONCAT11(DAT_08af,DAT_08b0);
    _DAT_0b69 = CONCAT11(DAT_08b1,DAT_08b2);
    if ((DAT_08af != '\0' || DAT_08b0 != '\0') || (DAT_08b1 != '\0' || DAT_08b2 != '\0')) {
      FUN_66d6();
      DAT_0b64 = (&DAT_4ec9)[DAT_0b71];
      DAT_0892 = DAT_0892 | 0x10;
      DAT_0b66 = DAT_4eea;
    }
  }
  else {
    DAT_0b66 = DAT_0b66 + -1;
  }
  return;
}


/* Entry 650b */

void FUN_650b(void)

{
  char cVar1;
  
  cVar1 = DAT_0bdd;
  if (((((DAT_08a1 & 0x20) == 0) && (cVar1 = DAT_0ae9, DAT_0bdd != DAT_0d3d)) &&
      (cVar1 = DAT_0aea, DAT_0bdd != DAT_0d3e)) &&
     ((cVar1 = DAT_0aeb, DAT_0bdd != DAT_0d3f && (cVar1 = DAT_0ae8, DAT_0bdd != DAT_0d40)))) {
    if (DAT_0bdd == DAT_0d41) {
      cVar1 = DAT_0ae3;
      if (DAT_0ae3 == -1) {
        cVar1 = -2;
      }
    }
    else if (DAT_0bdd == DAT_0d42) {
      cVar1 = DAT_08dd;
      if (DAT_08dd == -1) {
        cVar1 = -2;
      }
    }
    else {
      cVar1 = DAT_0aec;
      if (DAT_0bdd != DAT_0d43) {
        if (DAT_0bdd == DAT_0d44) {
          if ((~DAT_0896._0_1_ & 1) == 0) {
            cVar1 = '\0';
          }
          else {
            cVar1 = -0x10;
          }
        }
        else if (DAT_0bdd == DAT_0d45) {
          if ((DAT_0d87 == '\t') && ((~DAT_0896._0_1_ & 0x10) == 0)) {
            cVar1 = '\0';
          }
          else {
            cVar1 = -0x10;
          }
        }
        else if (DAT_0bdd == DAT_0d46) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d47) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d48) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d49) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d4a) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d4b) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d4c) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d4d) {
          cVar1 = '\0';
        }
        else if (DAT_0bdd == DAT_0d4e) {
          FUN_6630();
          cVar1 = DAT_0bdf;
        }
        else if (DAT_0bdd == DAT_0d4f) {
          FUN_6672();
          cVar1 = DAT_0bdf;
        }
        else if (DAT_0bdd == DAT_0d50) {
          FUN_6726();
          cVar1 = DAT_0bdf;
        }
        else {
          cVar1 = DAT_4e7c;
          if (DAT_0bdd != DAT_0d51) {
            cVar1 = -1;
          }
        }
      }
    }
  }
  DAT_0be1 = cVar1;
  return;
}


/* Entry 6630 */

void FUN_6630(void)

{
  if (((DAT_0892 & 0x10) == 0) || (DAT_0b66 == '\0')) {
    DAT_0b67 = DAT_08b4 & 3;
    DAT_0b68 = 0;
    DAT_0b69 = 0;
    DAT_0b6a = 0;
    if (DAT_0b67 != 0) {
      FUN_66d6();
      DAT_0bdf = (&DAT_4eeb)[DAT_0b71];
      DAT_0892 = DAT_0892 | 0x10;
      DAT_0b66 = DAT_4ef4;
    }
  }
  else {
    DAT_0b66 = DAT_0b66 + -1;
  }
  return;
}


/* Entry 6672 */

void FUN_6672(void)

{
  if (((DAT_0892 & 0x10) == 0) || (DAT_0b66 == '\0')) {
    DAT_0b67 = ~DAT_08af & DAT_08b8;
    DAT_0b68 = ~DAT_08b0 & DAT_08b9;
    DAT_0b69 = ~DAT_08b1 & DAT_08ba;
    DAT_0b6a = ~DAT_08b2 & DAT_08bb;
    if ((DAT_0b67 != 0 || DAT_0b68 != 0) || (DAT_0b69 != 0 || DAT_0b6a != 0)) {
      FUN_66d6();
      DAT_0bdf = (&DAT_4ec9)[DAT_0b71];
      DAT_0892 = DAT_0892 | 0x10;
      DAT_0b66 = DAT_4eeb;
    }
  }
  else {
    DAT_0b66 = DAT_0b66 + -1;
  }
  return;
}


/* Entry 66d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_66d6(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  
  do {
    uVar6 = (ushort)(byte)(DAT_0b71 + 1);
    sVar5 = _DAT_0b67;
    sVar4 = _DAT_0b69;
    while (uVar6 = uVar6 - 1, uVar6 != 0) {
      bVar3 = -(char)(sVar4 >> 0xf);
      sVar4 = sVar4 << 1;
      bVar2 = (byte)((ushort)(sVar5 << 1) >> 8);
      sVar5 = CONCAT11(bVar2 + CARRY1(bVar2,bVar3),bVar2 + bVar3);
    }
    do {
      DAT_0b71 = DAT_0b71 + '\x01';
      bVar3 = (byte)((ushort)(sVar5 << 1) >> 8);
      cVar1 = (char)(sVar4 >> 0xf);
      if (sVar5 < 0) {
        bVar2 = -cVar1;
        return CONCAT11(bVar3 + CARRY1(bVar3,bVar2),bVar3 + bVar2);
      }
      bVar2 = -cVar1;
      sVar4 = sVar4 * 2;
      sVar5 = CONCAT11(bVar3 + CARRY1(bVar3,bVar2),bVar3 + bVar2);
    } while ((sVar5 != 0) || (sVar4 != 0));
    DAT_0b71 = '\0';
  } while( true );
}


/* Entry 6726 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_6726(void)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  _DAT_0b67 = _DAT_08b8;
  sVar2 = _DAT_0b67;
  _DAT_0b69 = _DAT_08ba;
  sVar3 = _DAT_0b69;
  DAT_0b67 = (char)((ushort)_DAT_08b8 >> 8);
  DAT_0b68 = (char)_DAT_08b8;
  if (DAT_0b67 == '\0' && DAT_0b68 == '\0') {
    DAT_0b69 = (char)((ushort)_DAT_08ba >> 8);
    DAT_0b6a = (char)_DAT_08ba;
    if (DAT_0b69 == '\0' && DAT_0b6a == '\0') {
      _DAT_0b67 = _DAT_08b8;
      _DAT_0b69 = _DAT_08ba;
      DAT_0bdf = 0;
      return;
    }
  }
  sVar5 = 0x20;
  DAT_0b71 = '\0';
  sVar4 = _DAT_08b8;
  sVar6 = _DAT_08ba;
  do {
    uVar1 = (ushort)sVar4 >> 0xf;
    sVar4 = sVar4 << 1;
    if (sVar6 < 0) {
      DAT_0b71 = DAT_0b71 + '\x01';
    }
    sVar5 = sVar5 + -1;
    sVar6 = CONCAT11((char)((ushort)sVar6 >> 8) << 1 | (byte)sVar6 >> 7,
                     (byte)sVar6 << 1 | (byte)uVar1);
  } while (sVar5 != 0);
  DAT_0bdf = DAT_0b71;
  _DAT_0b67 = sVar2;
  _DAT_0b69 = sVar3;
  return;
}


/* Entry 6772 */

undefined * FUN_6772(void)

{
  short sVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined *puVar6;
  
  sVar1 = DAT_0044;
  cVar4 = DAT_0c02;
  if (3999 < (ushort)(sVar1 - DAT_0c00)) {
    DAT_0c00 = DAT_0c00 + 4000;
    DAT_0887 = DAT_0887 | 0x20;
    cVar4 = DAT_0c02 + '\x01';
    if (-1 < (char)(DAT_0c02 + -0x3f)) {
      cVar4 = DAT_0c02;
    }
  }
  DAT_0c02 = cVar4;
  sVar1 = DAT_0044;
  bVar5 = DAT_0880;
  if (0x9c3 < (ushort)(sVar1 - DAT_0af4)) {
    DAT_0af4 = DAT_0af4 + 0x9c4;
    DAT_0af7 = DAT_0af7 + 1;
    bVar3 = DAT_0882 | 0x40;
    if ((DAT_0af7 & 1) == 0) {
      bVar3 = DAT_0882 | 0x44;
    }
    DAT_0882 = bVar3;
    if ((DAT_0af7 & 3) == 0) {
      DAT_088e = DAT_088e | 0x80;
    }
    DAT_0b25 = DAT_0b25 + 1;
    if (0x13 < DAT_0b25) {
      DAT_0882 = DAT_0882 | 2;
      DAT_0b25 = 0;
    }
    DAT_0b26 = DAT_0b26 + 1;
    if (199 < DAT_0b26) {
      DAT_0bc9 = DAT_0bc9 + 1;
      bVar3 = DAT_0887 | 0x80;
      if ((DAT_0bc9 & 1) == 0) {
        bVar3 = DAT_0887 | 0xc0;
      }
      DAT_0887 = bVar3;
      DAT_0b26 = 0;
    }
    if ((DAT_0af7 & 7) == 2) {
      DAT_0882 = DAT_0882 | 0x20;
    }
    if ((DAT_0af7 & 7) == 6) {
      DAT_0882 = DAT_0882 | 0x10;
    }
    if ((DAT_0af7 & 0xf) == 8) {
      DAT_0882 = DAT_0882 | 8;
    }
    if ((DAT_0af7 & 0x1f) == 0) {
      DAT_0882 = DAT_0882 | 1;
    }
    if ((DAT_0ca8 & 1) == 0) {
      if (DAT_0b09 < 0xc) goto LAB_6884;
      bVar5 = DAT_004c;
      DAT_004c = bVar5 & 0xf7;
      bVar3 = DAT_0b09;
    }
    else {
      if (DAT_0920 < 0xc) goto LAB_6884;
      bVar5 = DAT_004c;
      DAT_004c = bVar5 & 0xf7;
      bVar3 = DAT_0920;
    }
    bVar5 = DAT_0880 | 0x44;
    if (DAT_18d8 <= bVar3) {
      DAT_0880 = DAT_0880 | 0x44;
      DAT_0881 = DAT_0881 | 0x20;
      FUN_721f();
      DAT_088c = DAT_088c | 0x30;
      bVar5 = DAT_0880 | 0x80;
    }
  }
LAB_6884:
  DAT_0880 = bVar5;
  sVar1 = DAT_0044;
  if ((undefined *)(sVar1 - (short)DAT_0af2) <= &UNK_01f3) {
    return (undefined *)(sVar1 - (short)DAT_0af2);
  }
  DAT_0af2 = &UNK_01f4 + (short)DAT_0af2;
  bVar5 = DAT_008b;
  if ((~bVar5 & 8) == 0) {
    DAT_08c6 = DAT_08c6 + '\x01';
    puVar6 = DAT_0af2;
    if (DAT_08c6 < '\0') {
      DAT_08c6 = '\0';
      DAT_0083 = 0x20;
      DAT_0084 = 99;
      puVar6 = (undefined *)((ushort)DAT_0af2 & 0xff);
      DAT_0085 = 0;
    }
  }
  else {
    DAT_08c6 = '\0';
    DAT_08ca = DAT_0096;
    uVar2 = DAT_008b;
    bVar5 = DAT_0085;
    (*(code *)(&UNK_6968 + (byte)((bVar5 & 7) << 1)))();
    DAT_08c5 = DAT_08c5 + 1;
    puVar6 = (undefined *)CONCAT11(DAT_08c5 & 3,4);
    if (((DAT_08c5 & 3) != 0) &&
       (puVar6 = (undefined *)((ushort)(DAT_08c5 & 3) << 8), (DAT_08c5 & 3) != 1)) {
      bVar5 = DAT_08c5 & 7;
      puVar6 = (undefined *)CONCAT11(bVar5,2);
      if ((bVar5 != 2) &&
         ((puVar6 = (undefined *)(CONCAT11(DAT_08c5,5) & 0x7ff), bVar5 != 6 &&
          (puVar6 = (undefined *)(CONCAT11(DAT_08c5,6) & 0x7ff), bVar5 != 7)))) {
        bVar5 = DAT_08c5 & 0xf;
        puVar6 = (undefined *)CONCAT11(bVar5,1);
        if ((bVar5 != 3) && (puVar6 = (undefined *)(CONCAT11(DAT_08c5,3) & 0xfff), bVar5 != 0xb)) {
          puVar6 = (undefined *)((DAT_08c5 & 0xf) << 8);
        }
      }
    }
    DAT_0085 = (char)puVar6;
  }
  return puVar6;
}


/* Entry 6927 */

void candidate_unreferenced_6927(undefined1 param_1)

{
  char cVar1;
  
  cVar1 = 'd';
  do {
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  DAT_0085 = param_1;
  return;
}


/* Entry 6978 */

void FUN_6978(void)

{
  byte bVar1;
  char in_CCR;
  
  bVar1 = DAT_0008;
  (*(code *)(&UNK_6958 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7)))
            (&UNK_6958 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7));
  return;
}


/* Entry 6987 */

void FUN_6987(void)

{
  byte bVar1;
  char in_CCR;
  
  bVar1 = DAT_0008;
  (*(code *)(&UNK_6960 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7)))
            (&UNK_6960 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7));
  return;
}


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


/* Entry 6aa5 */

void FUN_6aa5(undefined *param_1)

{
  char cVar1;
  undefined *puVar2;
  short sVar3;
  ushort uVar4;
  
  puVar2 = param_1 + -0x1ec0;
  if (param_1 < &UNK_1ec0) {
    puVar2 = (undefined *)0x0;
  }
  cVar1 = -0x3e;
  DAT_0ca2 = param_1;
  sVar3 = FUN_c407(puVar2);
  if ((sVar3 != 0) || (cVar1 == -1)) {
    cVar1 = -2;
  }
  DAT_0aea = cVar1;
  if ((~DAT_089f & 0x20) == 0) {
    DAT_0ca6 = DAT_0ca2;
    uVar4 = (short)DAT_0ca2 - (short)DAT_0c86;
    if (DAT_0ca2 < DAT_0c86) {
      uVar4 = CONCAT11((~(byte)(uVar4 >> 8) + 1) - ((char)-(char)uVar4 != '\0'),-(char)uVar4);
    }
    if (0xc0 < uVar4) {
      DAT_089f = DAT_089f | 0x18;
    }
    DAT_089f = DAT_089f | 0x20;
  }
  DAT_08c2 = 0x40;
  DAT_08c3 = 0;
  return;
}


/* Entry 6af4 */

void FUN_6af4(void)

{
  return;
}


/* Entry 6af5 */

void FUN_6af5(void)

{
  return;
}


/* Entry 6af6 */

void FUN_6af6(undefined2 param_1)

{
  byte extraout_A;
  
  DAT_08dc = (byte)((ushort)param_1 >> 8);
  if (DAT_08dc < 0x17) {
    DAT_09a1 = DAT_09a1 & 0xfe;
  }
  else {
    DAT_09a1 = DAT_09a1 | 1;
  }
  if (DAT_08dc < 0x1c) {
    DAT_09a1 = DAT_09a1 & 0xe7 | 4;
  }
  else {
    if ((DAT_09a1 & 8) != 0) {
      DAT_09a1 = DAT_09a1 | 0x10;
    }
    DAT_09a1 = DAT_09a1 & 0xfb | 8;
  }
  if ((~DAT_09a1 & 1) == 0) {
    if (DAT_18b4 <= DAT_09ab) {
      DAT_09a1 = DAT_09a1 & 0xfd;
    }
  }
  else if (DAT_18b3 <= DAT_09aa) {
    DAT_09a1 = DAT_09a1 | 2;
  }
  if ((((~DAT_0881 & 0x10) == 0) &&
      (((~DAT_09a1 & 0x10) != 0 ||
       ((DAT_18b5 != -0x80 &&
        (lookup_u8_uniform_axis(), DAT_0cae = extraout_A, extraout_A <= DAT_0caf)))))) &&
     ((~DAT_09a1 & 0x40) == 0)) {
    DAT_09a1 = DAT_09a1 | 0x40;
  }
  if ((((DAT_09a1 & 0x80) == 0) || ((DAT_09a1 & 4) == 0)) || ((DAT_09a1 & 0x40) == 0)) {
    DAT_09a1 = DAT_09a1 & 0xdf;
    DAT_09ac = 0;
LAB_6ba3:
    if ((~DAT_0881 & 0x20) == 0) goto LAB_6ba8;
  }
  else {
    DAT_09a1 = DAT_09a1 | 0x20;
    if (DAT_09ac < DAT_18c8) goto LAB_6ba3;
  }
  DAT_09a1 = DAT_09a1 & 0x9f;
  DAT_09ac = 0;
LAB_6ba8:
  if (((DAT_0d5a != -0x80) && (DAT_0d87 != '\t')) &&
     (((~DAT_08a0 & 4) == 0 && ((~DAT_08b2 & 0x80) == 0)))) {
    if ((~DAT_08b0 & 0x10) == 0) {
      if ((((((DAT_4e4c <= DAT_08f4) && (DAT_4e4e <= DAT_0900)) && (DAT_4e50 <= DAT_08e8)) &&
           ((DAT_0d87 != '\t' || ((DAT_0889 & 0x80) != 0)))) &&
          (((~DAT_0bab & 8) == 0 && (((~DAT_08af & 4) == 0 && ((~DAT_0bac & 0x80) == 0)))))) &&
         ((~DAT_09a1 & 2) == 0)) {
        if ((DAT_09a1 & 0x80) != 0) {
          DAT_08c2 = 0x20;
          DAT_08c3 = 0;
          return;
        }
        if ((DAT_08b6 & 0x40) == 0) {
          DAT_08b6 = DAT_08b6 | 0x40;
          DAT_08c2 = 0x20;
          DAT_08c3 = 0;
          return;
        }
        if (DAT_0b43 <= DAT_4e4b) {
          DAT_08c2 = 0x20;
          DAT_08c3 = 0;
          return;
        }
        if ((~DAT_08b0 & 0x10) != 0) {
          DAT_08c2 = 0x20;
          DAT_08c3 = 0;
          return;
        }
        if ((~DAT_08b9 & 0x10) != 0) {
          DAT_08b0 = DAT_08b0 | 0x10;
          DAT_08c2 = 0x20;
          DAT_08c3 = 0;
          DAT_0bd2 = DAT_0bd2 | 0x40;
          return;
        }
        DAT_08b0 = DAT_08b0 | 0x10;
        DAT_08b9 = DAT_08b9 | 0x10;
        DAT_08c2 = 0x20;
        DAT_08c3 = 0;
        DAT_0bd2 = DAT_0bd2 | 0x44;
        return;
      }
    }
    else if (((DAT_09a1 & 2) != 0) && ((DAT_08b0 & 0x10) != 0)) {
      DAT_08b0 = DAT_08b0 & 0xef;
      DAT_0bd2 = DAT_0bd2 | 0x40;
    }
    DAT_0b43 = 0;
    DAT_08b6 = DAT_08b6 & 0xbf;
  }
  DAT_08c2 = 0x20;
  DAT_08c3 = 0;
  return;
}


/* Entry 6c5d */

void FUN_6c5d(void)

{
  return;
}


/* Entry 6c5e */

void FUN_6c5e(undefined2 param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  
  DAT_0bce = (byte)((ushort)param_1 >> 8);
  uVar3 = ((ushort)DAT_0bce << 8) / 0xf0;
  if (0xfe < uVar3) {
    uVar3 = 0xfe;
  }
  DAT_0aec = (undefined1)uVar3;
  if ((((DAT_08a0 & 4) != 0) && (DAT_0bdd == DAT_0d4a)) && ((DAT_0893 & 0x10) != 0)) goto LAB_6d58;
  if (DAT_0bce < 0x26) {
    if ((~DAT_0888 & 0x80) == 0) {
      if ((~DAT_0888 & 1) != 0) {
        DAT_0888 = DAT_0888 & 0xfd;
        goto LAB_6d58;
      }
    }
    else {
      DAT_0888 = DAT_0888 & 0x7f;
    }
    DAT_0888 = DAT_0888 | 1;
  }
  else {
    if ((~DAT_0888 & 0x80) == 0) {
      DAT_0888 = DAT_0888 | 0x80;
    }
    else if ((~DAT_0888 & 1) != 0) {
      if ((((~DAT_0888 & 2) == 0) && (DAT_0888 = DAT_0888 | 2, (DAT_08a0 & 4) != 0)) &&
         ((~DAT_0893 & 0x80) == 0)) {
        if (DAT_0bdd == DAT_0d50) {
          if ((~DAT_0893 & 0x40) == 0) {
            DAT_0893 = DAT_0893 | 0x50;
            DAT_08b8 = DAT_08af;
            DAT_08b9 = DAT_08b0;
            DAT_08ba = DAT_08b1;
            DAT_08bb = DAT_08b2;
            DAT_0bd2 = DAT_0bd2 | 0xf;
          }
          else {
LAB_6d20:
            if ((~DAT_0893 & 0x40) == 0) {
              DAT_0893 = DAT_0893 | 0x60;
              DAT_0be2 = 0;
            }
          }
        }
        else if (((DAT_0bdd == DAT_0d46) || (DAT_0bdd == DAT_0d47)) ||
                ((DAT_0bdd == DAT_0d48 ||
                 ((((DAT_0bdd == DAT_0d49 || (DAT_0bdd == DAT_0d4a)) || (DAT_0bdd == DAT_0d4b)) ||
                  ((DAT_0bdd == DAT_0d4c || (DAT_0bdd == DAT_0d4d)))))))) goto LAB_6d20;
      }
LAB_6d58:
      DAT_0888 = DAT_0888 & 0xfe;
      goto LAB_6d5c;
    }
    DAT_0888 = DAT_0888 | 1;
  }
LAB_6d5c:
  bVar2 = DAT_0bd2;
  if (((DAT_0d62 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    if ((~DAT_08b1 & 4) == 0) {
      bVar1 = DAT_0000;
      if (((bVar1 & 4) == 0) || ((DAT_0888 & 2) != 0)) {
        DAT_08b7 = DAT_08b7 & 0x7f;
        DAT_0b48 = 0;
      }
      else if ((DAT_08b7 & 0x80) == 0) {
        DAT_08b7 = DAT_08b7 | 0x80;
      }
      else if (DAT_4e59 < DAT_0b48) {
        if ((~DAT_08b4 & 0x20) == 0) {
          DAT_08b4 = DAT_08b4 | 0x20;
          DAT_0be8 = DAT_0be8 | 0x80;
        }
        if ((~DAT_08b1 & 4) == 0) {
          DAT_08b1 = DAT_08b1 | 4;
          bVar2 = DAT_0bd2 | 0x20;
          if ((~DAT_08ba & 4) == 0) {
            DAT_08ba = DAT_08ba | 4;
            bVar2 = DAT_0bd2 | 0x22;
          }
        }
        goto LAB_6ebb;
      }
      bVar1 = DAT_0000;
      if (((~bVar1 & 4) == 0) && ((~DAT_0888 & 2) != 0)) {
        if ((DAT_08b7 & 0x40) == 0) {
          DAT_08b7 = DAT_08b7 | 0x40;
        }
        else if (DAT_0d8a < DAT_0b49) {
          if ((~DAT_08b4 & 0x10) == 0) {
            DAT_08b4 = DAT_08b4 | 0x10;
            DAT_0be8 = DAT_0be8 | 0x80;
          }
          if ((~DAT_08b1 & 4) == 0) {
            DAT_08b1 = DAT_08b1 | 4;
            bVar2 = DAT_0bd2 | 0x20;
            if ((~DAT_08ba & 4) == 0) {
              DAT_08ba = DAT_08ba | 4;
              bVar2 = DAT_0bd2 | 0x22;
            }
          }
        }
      }
      else {
        DAT_08b7 = DAT_08b7 & 0xbf;
        DAT_0b49 = 0;
      }
    }
    else {
      if ((DAT_08b4 & 0x20) == 0) {
        if ((DAT_08b4 & 0x10) != 0) {
          bVar1 = DAT_0000;
          if (((~bVar1 & 4) != 0) || ((DAT_0888 & 2) != 0)) {
            DAT_08b7 = DAT_08b7 | 0x40;
            DAT_0b53 = 0;
            goto LAB_6ebb;
          }
          if ((DAT_08b7 & 0x40) != 0) {
            DAT_08b7 = DAT_08b7 & 0xbf;
            goto LAB_6ebb;
          }
          if (DAT_0b53 <= DAT_0d8a) goto LAB_6ebb;
          if ((DAT_08b4 & 0x10) != 0) {
            DAT_08b4 = DAT_08b4 & 0xef;
            DAT_0be8 = DAT_0be8 | 0x80;
          }
          if ((DAT_08b1 & 4) != 0) {
            DAT_08b1 = DAT_08b1 & 0xfb;
            DAT_0bd2 = DAT_0bd2 | 0x20;
          }
        }
      }
      else {
        bVar1 = DAT_0000;
        if (((bVar1 & 4) == 0) || ((~DAT_0888 & 2) == 0)) {
          DAT_08b7 = DAT_08b7 | 0x80;
          DAT_0b52 = 0;
          goto LAB_6ebb;
        }
        if ((DAT_08b7 & 0x80) != 0) {
          DAT_08b7 = DAT_08b7 & 0x7f;
          goto LAB_6ebb;
        }
        if (DAT_0b52 <= DAT_0d8a) goto LAB_6ebb;
        if ((DAT_08b4 & 0x20) != 0) {
          DAT_08b4 = DAT_08b4 & 0xdf;
          DAT_0be8 = DAT_0be8 | 0x80;
        }
        if ((DAT_08b1 & 4) != 0) {
          DAT_08b1 = DAT_08b1 & 0xfb;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
      }
      DAT_0b48 = 0;
      DAT_0b49 = 0;
      bVar2 = DAT_0bd2;
    }
  }
LAB_6ebb:
  DAT_0bd2 = bVar2;
  DAT_08d9 = DAT_0bce;
  if ((~DAT_08b1 & 4) != 0) {
    DAT_08d9 = 0x9a;
  }
  if ((DAT_08b4 & 8) == 0) {
    if ((~DAT_0889 & 8) != 0) {
      if ((DAT_0888 & 2) == 0) {
        if ((DAT_08b7 & 0x20) == 0) {
          DAT_08b7 = DAT_08b7 | 0x20;
        }
        else if (DAT_4e37 < DAT_0bcf) {
          DAT_08b4 = DAT_08b4 | 8;
          DAT_0889 = DAT_0889 & 0xf7;
        }
      }
      else {
        DAT_08b7 = DAT_08b7 & 0xdf;
        DAT_0889 = DAT_0889 & 0xf7;
        DAT_0bcf = 0;
      }
    }
  }
  else if ((~DAT_0888 & 2) == 0) {
    DAT_08b7 = DAT_08b7 | 0x20;
    DAT_0bd0 = 0;
  }
  else {
    DAT_08b7 = DAT_08b7 & 0xdf;
    DAT_08b4 = DAT_08b4 & 0xf7;
    DAT_0bcf = 0;
  }
  if (DAT_0d64 == -0x80) {
    DAT_08c2 = 8;
    DAT_08c3 = 0;
    return;
  }
  if ((~DAT_08a0 & 4) != 0) {
    DAT_08c2 = 8;
    DAT_08c3 = 0;
    return;
  }
  if ((~DAT_08b2 & 0x80) != 0) {
    DAT_08c2 = 8;
    DAT_08c3 = 0;
    return;
  }
  if ((DAT_0881 & 0x10) == 0) {
    if ((DAT_4e5b <= DAT_0bce) && (DAT_0bce <= DAT_4e5c)) {
      if ((~DAT_08b7 & 8) == 0) {
        DAT_08b7 = DAT_08b7 & 0xef | 8;
        DAT_08c2 = 8;
        DAT_08c3 = 0;
        DAT_0b4a = 0;
        DAT_0b54 = 0;
        return;
      }
      if (DAT_4e5a < DAT_0b54) {
        if ((DAT_08b1 & 1) != 0) {
          DAT_08b1 = DAT_08b1 & 0xfe;
          DAT_08c2 = 8;
          DAT_08c3 = 0;
          DAT_0bd2 = DAT_0bd2 | 0x20;
          return;
        }
        DAT_08c2 = 8;
        DAT_08c3 = 0;
        return;
      }
      DAT_08c2 = 8;
      DAT_08c3 = 0;
      return;
    }
    if ((DAT_0888 & 2) != 0) {
      if ((~DAT_08b7 & 0x10) == 0) {
        DAT_08b7 = DAT_08b7 & 0xf7 | 0x10;
        DAT_08c2 = 8;
        DAT_08c3 = 0;
        DAT_0b4a = 0;
        DAT_0b54 = 0;
        return;
      }
      if (DAT_4e5a < DAT_0b4a) {
        if ((~DAT_08b1 & 1) == 0) {
          DAT_08b1 = DAT_08b1 | 1;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
        if ((~DAT_08ba & 1) == 0) {
          DAT_08ba = DAT_08ba | 1;
          DAT_08c2 = 8;
          DAT_08c3 = 0;
          DAT_0bd2 = DAT_0bd2 | 2;
          return;
        }
        DAT_08c2 = 8;
        DAT_08c3 = 0;
        return;
      }
      DAT_08c2 = 8;
      DAT_08c3 = 0;
      return;
    }
  }
  DAT_0b54 = 0;
  DAT_0b4a = 0;
  DAT_08b7 = DAT_08b7 & 0xe7;
  DAT_08c2 = 8;
  DAT_08c3 = 0;
  return;
}


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


/* Entry 707c */

void FUN_707c(void)

{
  if ((~DAT_0880 & 0x10) == 0) {
    DAT_0880 = DAT_0880 | 0x10;
    DAT_08d4 = DAT_08ca;
  }
  DAT_0bfc = DAT_08ca;
  DAT_08d2 = DAT_08ca;
  DAT_08c2 = 0;
  DAT_08c3 = 0x40;
  return;
}


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


/* Entry 71d7 */

void FUN_71d7(void)

{
  DAT_08c2 = 0;
  DAT_08c3 = 8;
  return;
}


/* Entry 71e1 */

void FUN_71e1(void)

{
  DAT_08c2 = 0;
  DAT_08c3 = 4;
  return;
}


/* Entry 71eb */

void FUN_71eb(undefined2 param_1)

{
  DAT_08dd = (char)((ushort)param_1 >> 8);
  DAT_08c2 = 2;
  DAT_08c3 = 0;
  return;
}


/* Entry 71f8 */

void FUN_71f8(void)

{
  DAT_08de = DAT_08ca._0_1_;
  DAT_08c2 = 4;
  DAT_08c3 = 0;
  return;
}


/* Entry 7208 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_unreferenced_7208(void)

{
  RAM0x0de1 = CONCAT11(((DAT_0885 ^ DAT_0de0._0_1_) & (byte)DAT_0de0) +
                       (~(DAT_0885 ^ DAT_0de0._0_1_) & DAT_0de0._0_1_),DAT_0885);
  return;
}


/* Entry 721f */

void FUN_721f(void)

{
  DAT_0bfe = DAT_0bfe & 0x3f;
  DAT_0ca8 = DAT_0ca8 & 0xf8;
  DAT_091b = 0xe;
  DAT_091c = 0xe;
  DAT_091d = 0xe;
  DAT_091e = 0xe;
  DAT_091f = 0xe;
  DAT_0920 = 0xe;
  DAT_0b09 = 0xe;
  DAT_0880 = DAT_0880 & 0xf5 | 0x44;
  DAT_0881 = DAT_0881 & 0xf7 | 0xd0;
  DAT_0883 = DAT_0883 & 0xcf;
  DAT_088b = 0;
  DAT_0a16 = DAT_0a16 & 0xf7;
  DAT_0a92 = DAT_0a92 & 0x55;
  DAT_0cf2 = DAT_0cf2 & 0xf8;
  DAT_08f8 = 0;
  DAT_08fa = 0;
  DAT_08fe = 0;
  DAT_08fc = 0;
  DAT_0906 = 0;
  DAT_0900 = 0;
  DAT_0902 = 0;
  DAT_0a22 = 0;
  DAT_0a24 = 0;
  DAT_0a26 = 0;
  DAT_0a28 = 0;
  DAT_0a4f = 0;
  DAT_0a51 = 0;
  DAT_0c8a = 0;
  DAT_0c8e = 0;
  DAT_0c90 = 0;
  DAT_0c9a = 0;
  DAT_0c9c = 0;
  DAT_0c88 = 0;
  DAT_0a20 = 0;
  DAT_0a21 = 0;
  DAT_0afe = 0;
  DAT_0afa = 0;
  DAT_0ae2 = 0;
  DAT_0c05 = 0;
  DAT_0c33 = 0;
  DAT_0caa = 0;
  DAT_0ca9 = 0;
  DAT_0c35 = 0;
  DAT_0cf3 = 0;
  DAT_0cf4 = 0;
  DAT_0a52 = 0;
  DAT_0a53 = 0;
  DAT_0a38 = 0xffff;
  DAT_0a3a = 0xffff;
  DAT_0a3c = 0xffff;
  DAT_0a3e = 0xffff;
  DAT_0a40 = 0xffff;
  DAT_0a42 = 0xffff;
  DAT_0a34 = 0xffff;
  DAT_0a2e = 0xffff;
  DAT_0a44 = 0xffff;
  DAT_0a46 = 0xffff;
  DAT_0a48 = 0xffff;
  DAT_0a4b = 0xffff;
  DAT_0a4d = 0xff;
  DAT_0a80 = 0xffff;
  DAT_0921 = 0xff;
  DAT_0922 = 0xc0;
  DAT_0c03 = 0xc0;
  DAT_0924 = 6;
  DAT_0a1c = DAT_18e0;
  if (0x16 < DAT_18e0) {
    DAT_0a1c = 0x16;
  }
  if (DAT_0a1c < 0xc) {
    if (DAT_0a1c == 0xb) {
      DAT_0a1c = 10;
    }
  }
  else {
    DAT_0a1c = DAT_0a1c - 0xc;
  }
  if (DAT_0d7b < 0x17) {
    DAT_0a1a = DAT_0d7b;
    if (DAT_0d7b == 0xb) {
      DAT_0a1a = 10;
    }
  }
  else {
    DAT_0a1a = 0x16;
  }
  DAT_0abf = DAT_0abf & 0xf8;
  DAT_0ac2 = 0;
  DAT_0ac4 = 0;
  DAT_0ac6 = 0;
  DAT_0aca = 0;
  DAT_0ac0 = 0;
  DAT_0ac8 = 0;
  DAT_0acc = 0;
  DAT_0d08 = DAT_0d08 & 0xfd;
  DAT_0a1d = DAT_0a1c;
  DAT_0a1e = DAT_0a1c;
  DAT_0a1f = DAT_0a1c;
  if (DAT_32ee != -0x80) {
    DAT_0994 = lookup_u8_uniform_axis(&UNK_32ef);
    DAT_0996 = lookup_u8_uniform_axis(&UNK_3301);
  }
  DAT_0e21 = DAT_0e21 & 0x7f;
  return;
}


/* Entry 73a5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_73a5(void)

{
  ushort uVar1;
  undefined3 uVar2;
  byte bVar3;
  ushort uVar5;
  byte bVar4;
  
  if (DAT_0921 < 0x40) {
    if ((((CARRY2(DAT_0a38,DAT_0a3a)) ||
         (uVar5 = DAT_0a38 + DAT_0a3a + DAT_0a3c, CARRY2(DAT_0a38 + DAT_0a3a,DAT_0a3c))) ||
        (uVar1 = uVar5 + DAT_0a3e, CARRY2(uVar5,DAT_0a3e))) ||
       ((uVar5 = uVar1 + DAT_0a40, CARRY2(uVar1,DAT_0a40) ||
        (DAT_0a44 = uVar5 + DAT_0a42, CARRY2(uVar5,DAT_0a42))))) {
      DAT_0a44 = 0xffff;
    }
    DAT_0a46 = DAT_0a44 << 1;
    if ((short)DAT_0a44 < 0) {
      DAT_0a46 = -1;
    }
    DAT_0a48 = DAT_0a44 + DAT_0a34;
    if (CARRY2(DAT_0a44,DAT_0a34)) {
      DAT_0a48 = -1;
    }
    DAT_0dde._1_1_ = (byte)(0x927c / DAT_0a44);
    DAT_08f8 = CONCAT11((byte)DAT_0dde,
                        (char)(((uint)(0x927c % DAT_0a44) << 0x10) / (uint)DAT_0a44 >> 8)) << 3;
    if (((byte)DAT_0dde & 0x3f) >> 5 != 0) {
      DAT_08f8 = 0xffff;
    }
  }
  else {
    DAT_0a44 = 0xffff;
    DAT_08f8 = 0x1e0;
  }
  if (0xfdff < DAT_08f8) {
    DAT_08f8 = 0xfe00;
  }
  if (DAT_4bec <= DAT_08f8) {
    DAT_0880 = DAT_0880 | 2;
    DAT_0bf8 = DAT_0bf8 | 0x20;
  }
  if (DAT_0a4b._0_1_ < 4) {
    bVar4 = (byte)((ushort)RAM0x0a4c >> 8);
    bVar3 = bVar4 >> 1;
    DAT_0de0._0_1_ = (byte)((byte)RAM0x0a4c >> 1 | bVar4 << 7) >> 1 | bVar3 << 7;
    DAT_0a80 = CONCAT11((byte)(bVar3 | DAT_0a4b._0_1_ << 7) >> 1 | (DAT_0a4b._0_1_ >> 1) << 7,
                        DAT_0de0._0_1_);
  }
  else {
    DAT_0a80 = 0xffff;
  }
  _DAT_0dde = CONCAT21(0x927c / DAT_0a80,DAT_0de0._0_1_);
  uVar2 = _DAT_0dde;
  DAT_0dde._1_1_ = (byte)(0x927c / DAT_0a80);
  DAT_0900 = CONCAT11((byte)DAT_0dde,
                      (char)(((uint)(0x927c % DAT_0a80) << 0x10) / (uint)DAT_0a80 >> 8)) << 3;
  if (((byte)DAT_0dde & 0x3f) >> 5 != 0) {
    DAT_0900 = 0xffff;
  }
  if (0xfdff < DAT_0900) {
    DAT_0900 = 0xfe00;
  }
  DAT_0906 = DAT_0900;
  DAT_0902 = DAT_0900;
  if (DAT_18d7 == '\0') {
    DAT_0902 = DAT_08fe;
    DAT_0900 = DAT_08f8;
  }
  uVar5 = DAT_4e34;
  if (DAT_4e34 == 0) {
    uVar5 = 1;
  }
  uVar5 = DAT_0900 / uVar5;
  if ((char)(uVar5 >> 8) != '\0') {
    uVar5 = 0xff;
  }
  DAT_0ae2 = (char)uVar5;
  DAT_08bc = DAT_08bc & 0xef;
  _DAT_0dde = uVar2;
  return;
}


/* Entry 74b8 */

/* WARNING: Removing unreachable block (RAM,0x7fe3) */
/* WARNING: Removing unreachable block (RAM,0x7ff5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_74b8(undefined2 param_1)

{
  int iVar1;
  byte extraout_A;
  undefined1 uVar2;
  byte extraout_A_00;
  byte extraout_A_01;
  byte extraout_A_02;
  undefined1 extraout_A_03;
  byte extraout_A_04;
  byte extraout_A_05;
  byte bVar3;
  undefined1 extraout_A_06;
  byte extraout_A_07;
  byte extraout_A_08;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  byte bVar8;
  ushort uVar9;
  
  DAT_08bc = DAT_08bc | 0x40;
  lookup_u8_uniform_axis();
  DAT_095e = (ushort)extraout_A << 3;
  bVar8 = DAT_0bd2;
  if (((DAT_0d54 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    if ((DAT_0bfe & 0x80) == 0) {
LAB_751f:
      DAT_08b5 = DAT_08b5 & 0xf9;
    }
    else {
      uVar6 = DAT_0c9c - DAT_0c9a;
      if (DAT_0c9c < DAT_0c9a) {
        uVar6 = CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
      }
      if (DAT_4e42 < uVar6) {
        if ((~DAT_08b5 & 2) == 0) {
          DAT_08b5 = DAT_08b5 & 0xfb | 2;
        }
        else if (DAT_0d8a < DAT_0b4c) {
          if ((DAT_08af & 0x10) != 0) {
            DAT_08af = DAT_08af & 0xef;
            DAT_0bd2 = DAT_0bd2 | 0x80;
          }
          DAT_0bab = DAT_0bab & 0xef;
          bVar8 = DAT_0bd2;
        }
      }
      else {
        if (((((~DAT_0881 & 0x10) != 0) || (DAT_4e40 < DAT_0900._0_1_)) ||
            ((DAT_4e41 < DAT_08e8._0_1_ || (((~DAT_0bab & 0x20) != 0 || ((~DAT_0bab & 8) != 0))))))
           || ((~DAT_08af & 4) != 0)) goto LAB_751f;
        if ((DAT_08b5 & 4) == 0) {
          DAT_08b5 = DAT_08b5 & 0xfd | 4;
          DAT_0bab = DAT_0bab | 0x10;
        }
        else if ((DAT_4e3e < DAT_0b3f) && ((~DAT_08af & 0x10) == 0)) {
          DAT_08af = DAT_08af | 0x10;
          bVar8 = DAT_0bd2 | 0x80;
          if ((~DAT_08b8 & 0x10) == 0) {
            DAT_08b8 = DAT_08b8 | 0x10;
            bVar8 = DAT_0bd2 | 0x88;
          }
        }
      }
    }
  }
  DAT_0bd2 = bVar8;
  if (DAT_4bca < DAT_0a44) {
    if (DAT_4bc8 <= DAT_0a44) {
      DAT_088c = DAT_088c & 0xf7;
    }
  }
  else {
    DAT_088c = DAT_088c | 8;
  }
  if (DAT_4bd2 < DAT_0a44) {
    if (DAT_4bd0 <= DAT_0a44) {
      DAT_088c = DAT_088c & 0xfb;
    }
  }
  else {
    DAT_088c = DAT_088c | 4;
  }
  if (DAT_4bce < DAT_0a44) {
    if (DAT_4bcc <= DAT_0a44) {
      DAT_088c = DAT_088c & 0xfd;
    }
  }
  else {
    DAT_088c = DAT_088c | 2;
  }
  if (((~DAT_08af & 8) == 0) && ((~DAT_08af & 4) == 0)) {
    if ((~DAT_0886 & 0x10) == 0) {
      if (DAT_3491 <= DAT_0b18) {
        DAT_0886 = DAT_0886 | 0x10;
      }
    }
    else if (DAT_3492 <= DAT_0b19) {
      if (((DAT_0886 & 0x40) != 0) && ((DAT_0886 & 0x10) != 0)) {
        DAT_088a = DAT_088a | 0x22;
      }
      DAT_0886 = DAT_0886 & 0xef;
    }
  }
  if (((~DAT_08af & 0x20) == 0) && ((~DAT_08af & 0x10) == 0)) {
    if (((~DAT_08af & 8) == 0) && (((~DAT_08af & 4) == 0 && (DAT_0a06 <= DAT_08ec)))) {
      if ((DAT_0886 & 8) != 0) {
        if ((DAT_0886 & 0x40) != 0) {
          DAT_088a = DAT_088a | 0x22;
        }
        goto LAB_7659;
      }
    }
    else if (DAT_3490 < DAT_0c90._0_1_) {
      if ((DAT_348f <= DAT_0c90._0_1_) && ((DAT_0886 & 8) != 0)) {
        if ((DAT_0886 & 0x40) != 0) {
          DAT_088a = DAT_088a | 0x44;
        }
        goto LAB_7659;
      }
    }
    else {
      DAT_0886 = DAT_0886 | 8;
    }
  }
  else {
LAB_7659:
    DAT_0886 = DAT_0886 & 0xf7;
  }
  if (((DAT_348a < DAT_08f4) && (DAT_3489 < DAT_0afa)) && ((DAT_088d & 4) != 0)) {
    if ((~DAT_0886 & 0x40) != 0) {
      if (DAT_348d <= DAT_0900._0_1_) goto LAB_7697;
      if ((DAT_0886 & 0x40) == 0) goto LAB_777d;
      DAT_088a = DAT_088a | 0x88;
LAB_76fd:
      if ((DAT_097a == 0) &&
         ((((bVar8 = DAT_3481, bVar3 = DAT_3484, (~DAT_088a & 0x80) != 0 ||
            ((~DAT_088a & 0x40) != 0)) ||
           (bVar8 = DAT_3482, bVar3 = DAT_3485, (~DAT_088a & 0x20) != 0)) ||
          (bVar8 = DAT_3483, bVar3 = DAT_3486, (~DAT_088a & 0x10) != 0)))) {
        DAT_097a = bVar8;
        DAT_0a04 = bVar3;
      }
      if ((DAT_0a86 == 0x80) &&
         (((bVar8 = DAT_4b09, uVar2 = DAT_4b0c, (~DAT_088a & 8) != 0 ||
           ((DAT_4b08 != '\0' &&
            ((((~DAT_088a & 4) != 0 || (bVar8 = DAT_4b0a, uVar2 = DAT_4b0d, (~DAT_088a & 2) != 0))
             || (bVar8 = DAT_4b0b, uVar2 = DAT_4b0e, (~DAT_088a & 1) != 0)))))) &&
          (DAT_0a86 = bVar8, bVar8 < 0x80)))) {
        DAT_0a87 = uVar2;
      }
      goto LAB_777a;
    }
    if (DAT_0900._0_1_ <= DAT_348e) goto LAB_777d;
LAB_7697:
    if (((((DAT_0886 & 0x10) == 0) || ((~DAT_08af & 8) != 0)) || ((~DAT_08af & 4) != 0)) &&
       ((((~DAT_08af & 0x20) != 0 || ((~DAT_08af & 0x10) != 0)) || ((DAT_0886 & 8) == 0)))) {
      if ((DAT_0886 & 0x40) != 0) goto LAB_76fd;
      goto LAB_777d;
    }
    if (DAT_0b16 <= DAT_34a6) goto LAB_7785;
    if ((DAT_0b17 < DAT_348c) || ((DAT_0d87 == '\t' && ((DAT_0896._0_1_ & 0x10) == 0)))) {
      if ((DAT_0886 & 0x40) != 0) {
        DAT_088a = DAT_088a | 0x11;
        goto LAB_76fd;
      }
      goto LAB_777d;
    }
    DAT_0886 = DAT_0886 | 0x40;
    DAT_097a = 0;
    DAT_0a04 = 0;
  }
  else {
    if ((DAT_0886 & 0x40) == 0) goto LAB_777d;
LAB_777a:
    DAT_0b16 = 0;
LAB_777d:
    DAT_0886 = DAT_0886 & 0xe7;
LAB_7785:
    DAT_0886 = DAT_0886 & 0xbf;
    DAT_088a = 0;
    if (((DAT_0900._0_1_ < DAT_3488) || (DAT_08f4 <= DAT_348a)) || ((~DAT_0896._0_1_ & 0x10) == 0))
    {
      DAT_097a = 0x80;
    }
  }
  if ((DAT_0d7c <= DAT_0a2e._0_1_) || (DAT_0900._0_1_ < DAT_4b11)) {
    DAT_0a86 = 0x80;
  }
  if ((~DAT_08b1 & 8) == 0) {
    DAT_0886 = DAT_0886 & 0xf9;
  }
  else {
    if (DAT_34aa < DAT_0a44) {
      if (DAT_34a8 < DAT_0a44) {
        DAT_0886 = DAT_0886 & 0xfb;
      }
    }
    else {
      DAT_0886 = DAT_0886 | 4;
    }
    if (DAT_34ae < DAT_0a44) {
      if (DAT_34ac < DAT_0a44) {
        DAT_0886 = DAT_0886 & 0xfd;
      }
    }
    else {
      DAT_0886 = DAT_0886 | 2;
    }
  }
  sVar7 = DAT_08ce - DAT_08e8;
  if (DAT_08ce < DAT_08e8) {
    sVar7 = CONCAT11((~(byte)((ushort)sVar7 >> 8) + 1) - ((char)-(char)sVar7 != '\0'),-(char)sVar7);
    uVar4 = scale_u16_by_u8(param_1,sVar7);
    sVar5 = CONCAT11((~(byte)((ushort)uVar4 >> 8) + 1) - ((char)-(char)uVar4 != '\0'),-(char)uVar4);
  }
  else {
    sVar5 = scale_u16_by_u8(param_1,sVar7);
  }
  DAT_08e8 = sVar5 + DAT_08e8;
  if (DAT_0b03 < DAT_19d8) {
    DAT_08e8 = DAT_08ce;
  }
  if (DAT_0afe < 100) {
    DAT_08f0 = DAT_0c8c;
    sVar5 = sVar7;
  }
  else {
    sVar5 = DAT_0c8c - DAT_08f0;
    if (DAT_0c8c < DAT_08f0) {
      sVar5 = CONCAT11((~(byte)((ushort)sVar5 >> 8) + 1) - ((char)-(char)sVar5 != '\0'),-(char)sVar5
                      );
      uVar4 = scale_u16_by_u8(sVar7,sVar5);
      sVar7 = CONCAT11((~(byte)((ushort)uVar4 >> 8) + 1) - ((char)-(char)uVar4 != '\0'),-(char)uVar4
                      );
    }
    else {
      sVar7 = scale_u16_by_u8(sVar7,sVar5);
    }
    DAT_08f0 = sVar7 + DAT_08f0;
  }
  DAT_0dde._1_1_ = DAT_0c8c._0_1_ - DAT_08f0._0_1_;
  if (DAT_0c8c._0_1_ < DAT_08f0._0_1_) {
    DAT_0dde._1_1_ = -(byte)DAT_0dde;
    DAT_0dde._0_1_ = 0x80;
  }
  else {
    DAT_0dde._0_1_ = 0;
  }
  if (0x7f < (byte)DAT_0dde) {
    DAT_0dde._1_1_ = 0x7f;
  }
  bVar8 = (byte)DAT_0dde;
  if (DAT_0dde._0_1_ != 0) {
    bVar8 = -(byte)DAT_0dde;
  }
  DAT_0988 = bVar8 + 0x80;
  DAT_0989 = DAT_0988;
  if ((byte)DAT_0dde <= DAT_3344) {
    DAT_0989 = -0x80;
    DAT_0dde._1_1_ = 0;
  }
  uVar4 = FUN_cc7b();
  _DAT_0de7 = CONCAT12(DAT_0de7._0_1_,uVar4);
  interp_u8_q8_index();
  uVar6 = (ushort)extraout_A_00 * (ushort)(byte)DAT_0dde;
  DAT_0dde._1_1_ = (byte)(uVar6 >> 8);
  DAT_0de0._0_1_ = (undefined1)uVar6;
  if ((DAT_0dde._0_1_ & 0x80) == 0) {
    DAT_098a = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      DAT_098a = -1;
    }
  }
  else {
    DAT_098a = -0x8000 - uVar6;
    if (0x8000 < uVar6) {
      DAT_098a = 0;
    }
  }
  DAT_0de0._1_1_ = DAT_333a;
  if ((DAT_0d87 == '\t') && ((DAT_0896._0_1_ & 0x10) == 0)) {
    DAT_0de0._1_1_ = DAT_3339;
  }
  sVar7 = DAT_08ce - DAT_08ea;
  DAT_098e = extraout_A_00;
  if (DAT_08ce < DAT_08ea) {
    uVar4 = scale_u16_by_u8(sVar5,CONCAT11((~(byte)((ushort)sVar7 >> 8) + 1) -
                                           ((char)-(char)sVar7 != '\0'),-(char)sVar7));
    sVar7 = CONCAT11((~(byte)((ushort)uVar4 >> 8) + 1) - ((char)-(char)uVar4 != '\0'),-(char)uVar4);
  }
  else {
    sVar7 = scale_u16_by_u8(sVar5,sVar7);
  }
  uVar6 = sVar7 + DAT_08ea;
  DAT_08ea._0_1_ = (byte)(uVar6 >> 8);
  bVar8 = DAT_08ea._0_1_;
  if ((byte)(DAT_333f - 1U) < DAT_0b02) {
    DAT_0885 = DAT_0885 & 0xfd;
    if (DAT_08e8._0_1_ <= DAT_333b) {
      if (DAT_333c <= DAT_08ed) {
        DAT_0b02 = 0;
        DAT_0b04 = 0;
        goto LAB_79b5;
      }
      goto LAB_79b9;
    }
  }
  else if ((byte)((DAT_0b04 + 1) - (0xfe < DAT_0b04)) < DAT_333d) {
    DAT_0b04 = (DAT_0b04 + 1) - (0xfe < DAT_0b04);
LAB_79b5:
    DAT_0885 = DAT_0885 | 2;
LAB_79b9:
    if (((DAT_0885 & 2) != 0) && (bVar8 = DAT_08ea._0_1_ - DAT_333e, DAT_08ea._0_1_ < DAT_333e)) {
      bVar8 = 0;
    }
  }
  DAT_0de2 = DAT_08e8._0_1_ - bVar8;
  if (DAT_08e8._0_1_ < bVar8) {
    DAT_0de2 = -DAT_0de2;
    DAT_0de0._1_1_ = 0x80;
  }
  else {
    DAT_0de0._1_1_ = 0;
  }
  if (0x7f < DAT_0de2) {
    DAT_0de2 = 0x7f;
  }
  bVar8 = DAT_0de2;
  if ((byte)DAT_0de0 != 0) {
    bVar8 = -DAT_0de2;
  }
  DAT_0984 = bVar8 + 0x80;
  if ((DAT_3340 <= DAT_08e8._0_1_) || (DAT_0afe < 100)) {
    DAT_0de2 = 0;
    DAT_0984 = -0x80;
  }
  if (DAT_3341 < DAT_0de2) {
    DAT_0985 = DAT_0984;
  }
  else {
    DAT_0985 = -0x80;
    DAT_0de2 = 0;
  }
  DAT_08ea = uVar6;
  uVar4 = FUN_cc7b();
  _DAT_0de7 = CONCAT12(DAT_0de7._0_1_,uVar4);
  interp_u8_q8_index();
  uVar6 = (ushort)extraout_A_01 * (ushort)DAT_0de2;
  DAT_0de2 = (byte)(uVar6 >> 8);
  DAT_0de3 = (undefined1)uVar6;
  if (((byte)DAT_0de0 & 0x80) == 0) {
    DAT_0986 = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      DAT_0986 = -1;
    }
  }
  else {
    DAT_0986 = -0x8000 - uVar6;
    if (0x8000 < uVar6) {
      DAT_0986 = 0;
    }
  }
  DAT_098d = extraout_A_01;
  if (((byte)DAT_0de0 & 0x80) == 0) {
    if ((DAT_0dde._0_1_ & 0x80) == 0) {
      DAT_0de5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_) + uVar6;
      if (0x7f < (byte)((ushort)DAT_0de5 >> 8)) {
        DAT_0de5 = 0x7fff;
      }
    }
    else {
      DAT_0de5 = uVar6 - CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
      if (uVar6 < CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_)) {
        DAT_0de5 = CONCAT11((~(byte)((ushort)DAT_0de5 >> 8) + 1) - ((char)-(char)DAT_0de5 != '\0'),
                            -(char)DAT_0de5);
        goto LAB_7b07;
      }
    }
LAB_7aff:
    DAT_0de4 = 0;
    uVar6 = scale_u16_by_u8();
    DAT_0982 = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      DAT_0982 = -1;
    }
  }
  else {
    if ((DAT_0dde._0_1_ & 0x80) == 0) {
      DAT_0de5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_) - uVar6;
      if (uVar6 <= CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_)) goto LAB_7aff;
      DAT_0de5 = CONCAT11((~(byte)((ushort)DAT_0de5 >> 8) + 1) - ((char)-(char)DAT_0de5 != '\0'),
                          -(char)DAT_0de5);
    }
    else {
      DAT_0de5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_) + uVar6;
      if (0x7f < (byte)((ushort)DAT_0de5 >> 8)) {
        DAT_0de5 = -0x8000;
      }
    }
LAB_7b07:
    DAT_0de4 = 0x80;
    sVar7 = scale_u16_by_u8();
    if (7 < (byte)((ushort)sVar7 >> 8)) {
      sVar7 = 0x800;
    }
    _DAT_0de7 = CONCAT21(sVar7,DAT_0de7_2);
    DAT_0982 = -0x8000 - sVar7;
  }
  if ((DAT_0de4 & 0x80) == 0) {
    DAT_098c = (undefined1)((ushort)(DAT_0de5 + -0x8000) >> 8);
  }
  else {
    DAT_098c = (undefined1)((ushort)(-0x8000 - DAT_0de5) >> 8);
  }
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_18fa;
  DAT_0908 = axis_index_u16_ascending();
  DAT_0ba2 = DAT_08e8;
  DAT_0ba4 = &axis_raw_18e6;
  DAT_090e = axis_index_u16_ascending();
  DAT_0de0._0_1_ = (undefined1)((ushort)DAT_0908 >> 8);
  DAT_0de0._1_1_ = (byte)DAT_0908;
  DAT_0dde._0_1_ = (byte)((ushort)DAT_090e >> 8);
  DAT_0dde._1_1_ = (byte)DAT_090e;
  bilinear_modulo24_grid();
  if (extraout_A_02 < 0x17) {
    DAT_0a1b = extraout_A_02;
    if (extraout_A_02 == 0xb) {
      DAT_0a1b = 10;
    }
  }
  else {
    DAT_0a1b = 0x16;
  }
  if ((~DAT_0881 & 0x10) != 0) {
    lookup_u8_uniform_u16_axis();
    DAT_0938 = extraout_A_03;
    DAT_0934 = lookup_u8_uniform_axis();
    lookup_u8_uniform_u16_axis();
    DAT_0937 = extraout_A_04;
    lookup_u8_uniform_u16_axis();
    DAT_0936 = extraout_A_05;
    uVar4 = multiply_u16_shift8_saturate(DAT_0979 + 0x180,(ushort)extraout_A_05 * (ushort)DAT_0937);
    uVar6 = multiply_u16_shift8_saturate(uVar4);
    uVar9 = (ushort)((uint)uVar6 * (uint)DAT_0934 >> 0x10);
    if (uVar9 < 0x4000) {
      DAT_0932 = (ushort)(byte)((byte)((uint)uVar6 * (uint)DAT_0934 >> 8) >> 6) + uVar9 * 4;
    }
    else {
      DAT_0932 = 0xffff;
    }
    DAT_08e8 = DAT_08ce;
    DAT_08ea = DAT_08ce;
    DAT_092a = DAT_095e + DAT_0932;
    if (CARRY2(DAT_095e,DAT_0932)) {
      DAT_092a = -1;
    }
    DAT_092e = DAT_092a;
    FUN_864e();
    iVar1 = (uint)DAT_0932 * (uint)DAT_0cec * 2;
    uVar6 = (ushort)iVar1;
    sVar7 = uVar6 + 0x80;
    bVar3 = (byte)((uint)iVar1 >> 0x18);
    bVar8 = bVar3 + (0xff7f < uVar6);
    sVar5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
    if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),bVar8) < 0x100) {
      DAT_0dde._1_1_ = (byte)((ushort)sVar7 >> 8);
      DAT_092c = CONCAT11(bVar8,(byte)DAT_0dde) + DAT_095e;
      DAT_0dde._0_1_ = bVar8;
      sVar5 = sVar7;
      if (CARRY2(CONCAT11(bVar8,(byte)DAT_0dde),DAT_095e)) goto LAB_7c69;
    }
    else {
LAB_7c69:
      sVar7 = sVar5;
      DAT_092c = -1;
    }
    if ((~DAT_0a16 & 2) == 0) {
      DAT_0881 = DAT_0881 | 0x80;
      DAT_0a16 = DAT_0a16 & 0xfe;
    }
    else {
      DAT_0881 = DAT_0881 | 0x40;
      DAT_0a16 = DAT_0a16 & 0xfd;
    }
    if ((~DAT_088b & 0x80) == 0) {
      DAT_0a26 = 0;
      DAT_0a1e = DAT_18e0;
      if (0x16 < DAT_18e0) {
        DAT_0a1e = 0x16;
      }
      if (DAT_0a1e < 0xc) {
        if (DAT_0a1e == 0xb) {
          DAT_0a1e = 10;
        }
      }
      else {
        DAT_0a1e = DAT_0a1e - 0xc;
      }
      DAT_0a28 = 0;
      DAT_0a1f = DAT_0a1e;
    }
    DAT_0a16 = DAT_0a16 & 0xf7;
    DAT_0930 = DAT_092c;
    goto LAB_8578;
  }
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_1b0c;
  DAT_090a = axis_index_u16_ascending();
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_374e;
  DAT_0b8c = axis_index_u16_ascending();
  if ((~DAT_0a16 & 2) == 0) {
    if ((~DAT_0b80 & 1) == 0) {
      DAT_0ba2 = DAT_0c90;
      DAT_0ba4 = &axis_raw_1ad0;
      DAT_0910 = axis_index_u16_ascending();
      DAT_0e06 = (undefined1)((ushort)DAT_0910 >> 8);
      DAT_0e08 = DAT_0910 << 8;
      DAT_0e0a = DAT_090a << 8;
      DAT_0952 = bilinear_u16_grid();
    }
    else {
      DAT_0ba2 = DAT_0c90;
      DAT_0ba4 = &axis_raw_3712;
      DAT_0b8e = axis_index_u16_ascending();
      DAT_0e06 = (undefined1)((ushort)DAT_0b8e >> 8);
      DAT_0e08 = DAT_0b8e << 8;
      DAT_0e0a = DAT_0b8c << 8;
      DAT_0952 = bilinear_u16_grid();
    }
  }
  else if ((~DAT_0b80 & 1) == 0) {
    DAT_0ba2 = DAT_0c90;
    DAT_0ba4 = &axis_raw_1ad0;
    DAT_0910 = axis_index_u16_ascending();
    DAT_0e06 = (undefined1)((ushort)DAT_0910 >> 8);
    DAT_0e08 = DAT_0910 << 8;
    DAT_0e0a = DAT_090a << 8;
    DAT_0954 = bilinear_u16_grid();
  }
  else {
    DAT_0ba2 = DAT_0c90;
    DAT_0ba4 = &axis_raw_3712;
    DAT_0b8e = axis_index_u16_ascending();
    DAT_0e06 = (undefined1)((ushort)DAT_0b8e >> 8);
    DAT_0e08 = DAT_0b8e << 8;
    DAT_0e0a = DAT_0b8c << 8;
    DAT_0954 = bilinear_u16_grid();
  }
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_262e;
  DAT_090c = axis_index_u16_ascending();
  if (((((~DAT_08af & 8) != 0) || (DAT_0ba2 = DAT_08e8, (~DAT_08af & 4) != 0)) &&
      (DAT_0ba2 = DAT_4e62, (~DAT_08af & 0x20) == 0)) &&
     (DAT_0ba2 = DAT_4e62, (~DAT_08af & 0x10) == 0)) {
    DAT_0ba2 = DAT_08e8;
  }
  DAT_0ba4 = &axis_raw_25f2;
  DAT_0912 = axis_index_u16_ascending();
  DAT_0e06 = (undefined1)((ushort)DAT_0912 >> 8);
  if ((~DAT_0a16 & 2) == 0) {
    DAT_0e08 = DAT_0912 << 8;
    DAT_0e0a = DAT_090c << 8;
    DAT_0956 = bilinear_u16_grid();
  }
  else {
    DAT_0e08 = DAT_0912 << 8;
    DAT_0e0a = DAT_090c << 8;
    DAT_0958 = bilinear_u16_grid();
  }
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_311a;
  DAT_0cd6 = axis_index_u16_ascending();
  DAT_0ba2 = DAT_0c90;
  DAT_0ba4 = &axis_raw_3116;
  DAT_0cd8 = axis_index_u16_ascending();
  DAT_0dde._0_1_ = (byte)((ushort)DAT_0cd6 >> 8);
  DAT_0dde._1_1_ = (byte)DAT_0cd6;
  DAT_0de0._0_1_ = (undefined1)((ushort)DAT_0cd8 >> 8);
  DAT_0de0._1_1_ = (byte)DAT_0cd8;
  sVar7 = bilinear_u8_grid();
  DAT_0cd2 = (byte)((ushort)(sVar7 + 0x80) >> 8);
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_3126;
  DAT_0cda = axis_index_u16_ascending();
  DAT_0ba2 = DAT_08e8;
  DAT_0ba4 = &axis_raw_3122;
  DAT_0cdc = axis_index_u16_ascending();
  DAT_0dde._0_1_ = (byte)((ushort)DAT_0cda >> 8);
  DAT_0dde._1_1_ = (byte)DAT_0cda;
  DAT_0de0._0_1_ = (undefined1)((ushort)DAT_0cdc >> 8);
  DAT_0de0._1_1_ = (byte)DAT_0cdc;
  sVar7 = bilinear_u8_grid();
  DAT_0cd3 = (byte)((ushort)(sVar7 + 0x80) >> 8);
  DAT_0cd1 = DAT_0cd3;
  if (DAT_3114 == -0x80) {
    DAT_0cd1 = DAT_0cd2;
  }
  bVar8 = DAT_0cd4 + 0x80;
  if (DAT_0cd4 < 0x80) {
    DAT_0cd0 = DAT_0cd1 + bVar8;
    if (!CARRY1(DAT_0cd1,bVar8)) {
      DAT_0cd0 = 0;
    }
  }
  else {
    DAT_0cd0 = DAT_0cd1 + bVar8;
    if (CARRY1(DAT_0cd1,bVar8)) {
      DAT_0cd0 = 0xff;
    }
  }
  DAT_0ba2 = CONCAT11(DAT_0cd0,(undefined1)DAT_0ba2);
  DAT_0ba4 = &axis_raw_321a;
  DAT_0cde = axis_index_u8_ascending();
  DAT_0ba2 = DAT_0c90;
  DAT_0ba4 = &axis_raw_3216;
  DAT_0ce0 = axis_index_u16_ascending();
  DAT_0dde._0_1_ = (byte)((ushort)DAT_0cde >> 8);
  DAT_0dde._1_1_ = (byte)DAT_0cde;
  DAT_0de0._0_1_ = (undefined1)((ushort)DAT_0ce0 >> 8);
  DAT_0de0._1_1_ = (byte)DAT_0ce0;
  sVar7 = bilinear_u8_grid();
  DAT_0cd5 = (byte)((ushort)(sVar7 + 0x80) >> 8);
  if ((DAT_0cd0 == 0) || (DAT_0cd5 == 0)) {
LAB_7fa5:
    DAT_0ce2 = 0x100;
  }
  else {
    uVar6 = (ushort)DAT_0cd5 * 2 * (DAT_0cd0 + 0x80);
    DAT_0dde._1_1_ = 0xff7f < uVar6;
    DAT_0dde._0_1_ = 0;
    DAT_0de0._0_1_ = (undefined1)(uVar6 + 0x80 >> 8);
    uVar6 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
    if ((uVar6 == 0) || (DAT_1ace == 0)) goto LAB_7fa5;
    uVar4 = FUN_c407(DAT_1ace + 0x80,(byte)DAT_0dde);
    if ((char)((ushort)uVar4 >> 8) == '\0') {
      DAT_0dde._0_1_ = (byte)uVar4;
      DAT_0ce2 = CONCAT11(DAT_0dde._0_1_ + (0xff7f < uVar6),(char)(uVar6 + 0x80 >> 8));
      if (CARRY1(DAT_0dde._0_1_,0xff7f < uVar6)) goto LAB_7fa0;
    }
    else {
LAB_7fa0:
      DAT_0ce2 = 0xffff;
    }
  }
  DAT_0ce4 = multiply_u16_shift8_saturate();
  DAT_0ce6 = multiply_u16_shift8_saturate();
  DAT_0ce8 = multiply_u16_shift8_saturate();
  DAT_0cea = multiply_u16_shift8_saturate();
  bVar8 = (byte)(DAT_0994 >> 1);
  DAT_0994 = CONCAT11((byte)(DAT_0994 >> 9) - (bVar8 < DAT_3313),bVar8 - DAT_3313) << 1;
  bVar8 = (byte)(DAT_0996 >> 1);
  DAT_0996 = CONCAT11((byte)(DAT_0996 >> 9) - (bVar8 < DAT_3314),bVar8 - DAT_3314) << 1;
  DAT_0992 = DAT_0996;
  if (DAT_0996 < DAT_0994) {
    DAT_0992 = DAT_0994;
  }
  lookup_u8_uniform_u16_axis();
  DAT_09a0 = extraout_A_06;
  if ((~DAT_0a16 & 2) == 0) {
    FUN_8623();
    DAT_095c = extraout_A_07;
  }
  else {
    FUN_8623();
    DAT_095d = extraout_A_08;
  }
  if (DAT_19de != '\x01') {
    bVar8 = DAT_19d6;
    if (8 < DAT_19d6) {
      bVar8 = 8;
    }
    bVar8 = bVar8 << 1;
    if (((~DAT_08af & 0x20) == 0) && ((~DAT_08af & 0x10) == 0)) {
      if (((~DAT_08af & 8) == 0) && ((~DAT_08af & 4) == 0)) {
        if ((~DAT_088d & 4) != 0) {
          if (DAT_08e8._0_1_ < DAT_19d5) {
            bVar3 = DAT_08e8._0_1_ + (&UNK_c255)[bVar8];
            if (CARRY1(DAT_08e8._0_1_,(&UNK_c255)[bVar8])) {
              DAT_0de0._0_1_ = 0;
              DAT_0de0._1_1_ = DAT_19d5;
              sVar7 = (ushort)(byte)(&UNK_c256)[bVar8] * ((ushort)bVar3 - (ushort)DAT_19d5 & 0xff);
              if ((char)((ushort)sVar7 >> 8) != '\0') {
                sVar7 = 0xff;
              }
            }
            else if (bVar3 < DAT_19d5) {
              sVar7 = 0;
            }
            else {
              sVar7 = (ushort)(byte)(bVar3 - DAT_19d5) * (ushort)(byte)(&UNK_c256)[bVar8];
              if ((char)((ushort)sVar7 >> 8) != '\0') {
                sVar7 = 0xff;
              }
            }
            DAT_0998 = (byte)sVar7;
            if (DAT_19d8 <= DAT_0b03) goto LAB_81e5;
          }
          goto LAB_81d9;
        }
        DAT_0998 = 0;
      }
      else {
        if (((~DAT_08af & 0x20) != 0) || ((~DAT_08af & 0x10) != 0)) goto LAB_81d9;
        DAT_0998 = 0;
      }
    }
    else {
LAB_81d9:
      DAT_0b03 = (DAT_0b03 + 1) - (0xfe < DAT_0b03);
      DAT_0998 = 0xff;
    }
LAB_81e5:
    if (DAT_19de == '\x02') {
      DAT_0960 = (ushort)DAT_19e1 << 1;
      DAT_0962 = DAT_0960;
      DAT_0964 = DAT_0960;
      DAT_0966 = DAT_0960;
    }
    else if (DAT_19de == '\x04') {
      DAT_0960 = (ushort)DAT_19e2 << 1;
      DAT_0962 = (ushort)DAT_19e3 << 1;
      DAT_0964 = DAT_0960;
      DAT_0966 = DAT_0962;
    }
    else {
      sVar7 = CONCAT11(0xdf < DAT_0992._0_1_,DAT_0992._0_1_ + 0x20) << 2;
      bVar8 = (byte)sVar7;
      sVar7 = CONCAT11((char)((ushort)sVar7 >> 8) + CARRY1(bVar8,DAT_097b),bVar8 + DAT_097b) * 4 +
              -0x80;
      bVar8 = (byte)sVar7;
      sVar7 = CONCAT11((char)((ushort)sVar7 >> 8) + CARRY1(bVar8,DAT_0980),bVar8 + DAT_0980) << 2;
      DAT_096c = ((DAT_097e >> 5) +
                 CONCAT11((char)((ushort)sVar7 >> 8) + -0x80,(char)sVar7) + DAT_0982) - 0x400 >> 1;
      sVar7 = CONCAT11(0xdf < DAT_0992._0_1_,DAT_0992._0_1_ + 0x20) << 2;
      bVar8 = (byte)sVar7;
      sVar7 = CONCAT11((char)((ushort)sVar7 >> 8) + CARRY1(bVar8,DAT_097c),bVar8 + DAT_097c) * 4 +
              -0x80;
      bVar8 = (byte)sVar7;
      sVar7 = CONCAT11((char)((ushort)sVar7 >> 8) + CARRY1(bVar8,DAT_0980),bVar8 + DAT_0980) << 2;
      DAT_0dde = CONCAT11((char)((ushort)sVar7 >> 8) + -0x80,(char)sVar7) + DAT_0982;
      DAT_096e = ((DAT_097e >> 5) + DAT_0dde) - 0x400 >> 1;
      uVar6 = multiply_u16_shift8_saturate(DAT_0979 + 0x180,DAT_096e);
      DAT_096a = multiply_u16_shift8_saturate(uVar6 >> 1);
      uVar6 = multiply_u16_shift8_saturate(DAT_0979 + 0x180);
      DAT_0968 = multiply_u16_shift8_saturate(uVar6 >> 1);
      DAT_0964 = multiply_u16_shift8_saturate(DAT_0968);
      DAT_0966 = multiply_u16_shift8_saturate();
      DAT_0960 = multiply_u16_shift8_saturate();
      DAT_0962 = multiply_u16_shift8_saturate();
      if (DAT_097a == 0x80) {
LAB_830d:
        DAT_0a04 = 0;
        DAT_097a = 0x80;
      }
      else if (DAT_097a < 0x80) {
        bVar8 = DAT_097a + DAT_0a04;
        if ((CARRY1(DAT_097a,DAT_0a04)) || (DAT_097a = bVar8, 0x7f < bVar8)) goto LAB_830d;
      }
      else {
        bVar8 = DAT_097a - DAT_0a04;
        if ((DAT_097a < DAT_0a04) || (DAT_097a = bVar8, bVar8 < 0x80)) goto LAB_830d;
      }
      FUN_864e();
    }
    if ((~DAT_0a16 & 2) == 0) {
      if (DAT_095c < 0x80) {
        DAT_0dde = (ushort)(byte)(0x80 - DAT_095c) * 4;
        sVar7 = DAT_0ce4 + (ushort)(byte)(0x80 - DAT_095c) * -4;
        if (DAT_0ce4 < DAT_0dde) {
          sVar7 = 0;
        }
      }
      else {
        DAT_0dde = (ushort)(byte)(DAT_095c + 0x80) * 4;
        sVar7 = DAT_0ce4 + DAT_0dde;
        if (CARRY2(DAT_0ce4,DAT_0dde)) {
          sVar7 = -1;
        }
      }
      DAT_0942 = multiply_u16_shift8_saturate(sVar7);
      if (DAT_095c < 0x80) {
        DAT_0dde = (ushort)(byte)(0x80 - DAT_095c) * 4;
        sVar7 = DAT_0ce8 + (ushort)(byte)(0x80 - DAT_095c) * -4;
        if (DAT_0ce8 < DAT_0dde) {
          sVar7 = 0;
        }
      }
      else {
        DAT_0dde = (ushort)(byte)(DAT_095c + 0x80) * 4;
        sVar7 = DAT_0ce8 + DAT_0dde;
        if (CARRY2(DAT_0ce8,DAT_0dde)) {
          sVar7 = -1;
        }
      }
      DAT_0944 = multiply_u16_shift8_saturate(sVar7);
      uVar4 = scale_u16_by_u8();
      DAT_0dde._1_1_ = (byte)((ushort)uVar4 >> 8);
      DAT_0de0._0_1_ = (undefined1)uVar4;
      DAT_0dde._0_1_ = ~DAT_0998;
      sVar5 = scale_u16_by_u8();
      sVar7 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
      uVar6 = sVar5 + sVar7;
      if (DAT_0ad4 != 0) {
        uVar6 = (ushort)((uint)(ushort)(DAT_0ad4 * -0x40) * (uint)uVar6 >> 0x10);
      }
      DAT_093c = DAT_19dc;
      if ((uVar6 < DAT_19dc) && (DAT_093c = uVar6, uVar6 < DAT_19da)) {
        DAT_093c = DAT_19da;
      }
      DAT_093e = DAT_093c;
      if ((~DAT_0ca8 & 1) == 0) {
        iVar1 = (uint)DAT_19d4 * 4 * (uint)DAT_093c;
        uVar6 = (ushort)iVar1;
        bVar3 = (byte)((uint)iVar1 >> 0x18);
        bVar8 = bVar3 + (0xff7f < uVar6);
        if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),bVar8) < 0x100) {
          DAT_0dde._1_1_ = (byte)(uVar6 + 0x80 >> 8);
          DAT_093e = CONCAT11(bVar8,(byte)DAT_0dde);
          DAT_0dde._0_1_ = bVar8;
          sVar7 = uVar6 + 0x80;
        }
        else {
          DAT_093e = 0xffff;
        }
      }
      DAT_092a = DAT_093e + DAT_095e;
      if (CARRY2(DAT_093e,DAT_095e)) {
        DAT_092a = -1;
      }
      DAT_0a16 = DAT_0a16 & 0xfe;
      if ((~DAT_0a16 & 8) == 0) {
        DAT_0881 = DAT_0881 & 0xbf;
      }
      DAT_0881 = DAT_0881 | 0x80;
      DAT_093a = DAT_092a;
      DAT_0940 = DAT_093c;
      goto LAB_8578;
    }
    if (DAT_095d < 0x80) {
      DAT_0dde = (ushort)(byte)(0x80 - DAT_095d) * 4;
      sVar7 = DAT_0ce6 + (ushort)(byte)(0x80 - DAT_095d) * -4;
      if (DAT_0ce6 < DAT_0dde) {
        sVar7 = 0;
      }
    }
    else {
      DAT_0dde = (ushort)(byte)(DAT_095d + 0x80) * 4;
      sVar7 = DAT_0ce6 + DAT_0dde;
      if (CARRY2(DAT_0ce6,DAT_0dde)) {
        sVar7 = -1;
      }
    }
    DAT_094e = multiply_u16_shift8_saturate(sVar7);
    if (DAT_095d < 0x80) {
      DAT_0dde = (ushort)(byte)(0x80 - DAT_095d) * 4;
      sVar7 = DAT_0cea + (ushort)(byte)(0x80 - DAT_095d) * -4;
      if (DAT_0cea < DAT_0dde) {
        sVar7 = 0;
      }
    }
    else {
      DAT_0dde = (ushort)(byte)(DAT_095d + 0x80) * 4;
      sVar7 = DAT_0cea + DAT_0dde;
      if (CARRY2(DAT_0cea,DAT_0dde)) {
        sVar7 = -1;
      }
    }
    DAT_0950 = multiply_u16_shift8_saturate(sVar7);
    uVar4 = scale_u16_by_u8();
    DAT_0dde._1_1_ = (byte)((ushort)uVar4 >> 8);
    DAT_0de0._0_1_ = (undefined1)uVar4;
    DAT_0dde._0_1_ = ~DAT_0998;
    sVar7 = scale_u16_by_u8();
    DAT_0948 = sVar7 + CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
    if (DAT_0ad4 != 0) {
      DAT_0948 = (ushort)((uint)(ushort)(DAT_0ad4 * -0x40) * (uint)DAT_0948 >> 0x10);
    }
    iVar1 = (uint)DAT_0948 * (uint)DAT_0cec * 2;
    uVar6 = (ushort)iVar1;
    sVar7 = uVar6 + 0x80;
    bVar3 = (byte)((uint)iVar1 >> 0x18);
    bVar8 = bVar3 + (0xff7f < uVar6);
    sVar5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
    if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),bVar8) < 0x100) {
      DAT_0dde._1_1_ = (byte)((ushort)sVar7 >> 8);
      uVar6 = CONCAT11(bVar8,(byte)DAT_0dde);
      DAT_095a = DAT_19dc;
      if ((uVar6 < DAT_19dc) && (DAT_095a = uVar6, uVar6 < DAT_19da)) {
        DAT_095a = DAT_19da;
      }
      DAT_094a = DAT_095a;
      DAT_0dde._0_1_ = bVar8;
      if ((~DAT_0ca8 & 1) == 0) {
        iVar1 = (uint)DAT_19d4 * 4 * (uint)DAT_095a;
        uVar6 = (ushort)iVar1;
        bVar3 = (byte)((uint)iVar1 >> 0x18);
        DAT_0dde._0_1_ = bVar3 + (0xff7f < uVar6);
        if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),DAT_0dde._0_1_) < 0x100) {
          DAT_0dde._1_1_ = (byte)(uVar6 + 0x80 >> 8);
          DAT_094a = CONCAT11(DAT_0dde._0_1_,(byte)DAT_0dde);
          sVar7 = uVar6 + 0x80;
        }
        else {
          DAT_094a = 0xffff;
          DAT_0dde._0_1_ = bVar8;
        }
      }
      DAT_092c = DAT_094a + DAT_095e;
      sVar5 = sVar7;
      if (CARRY2(DAT_094a,DAT_095e)) goto LAB_8563;
    }
    else {
LAB_8563:
      sVar7 = sVar5;
      DAT_092c = -1;
    }
    DAT_0881 = DAT_0881 | 0x40;
    DAT_0a16 = DAT_0a16 & 0xfd | 8;
    DAT_0946 = DAT_092c;
    DAT_094c = DAT_0948;
    goto LAB_8578;
  }
  DAT_0960 = 0x100;
  DAT_0962 = 0x100;
  DAT_0964 = 0x100;
  DAT_0966 = 0x100;
  uVar6 = (ushort)DAT_19df << 5;
  DAT_093c = DAT_19dc;
  if ((uVar6 < DAT_19dc) && (DAT_093c = uVar6, uVar6 < DAT_19da)) {
    DAT_093c = DAT_19da;
  }
  uVar6 = (ushort)DAT_19e0 << 5;
  DAT_0948 = DAT_19dc;
  if ((uVar6 < DAT_19dc) && (DAT_0948 = uVar6, uVar6 < DAT_19da)) {
    DAT_0948 = DAT_19da;
  }
  DAT_093e = DAT_093c;
  sVar7 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
  if ((~DAT_0ca8 & 1) == 0) {
    iVar1 = (uint)DAT_19d4 * 4 * (uint)DAT_093c;
    uVar6 = (ushort)iVar1;
    bVar3 = (byte)((uint)iVar1 >> 0x18);
    bVar8 = bVar3 + (0xff7f < uVar6);
    if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),bVar8) < 0x100) {
      DAT_0dde._1_1_ = (byte)(uVar6 + 0x80 >> 8);
      DAT_093e = CONCAT11(bVar8,(byte)DAT_0dde);
      DAT_0dde._0_1_ = bVar8;
      sVar7 = uVar6 + 0x80;
    }
    else {
      DAT_093e = 0xffff;
      sVar7 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
    }
  }
  DAT_0dde._1_1_ = (byte)((ushort)sVar7 >> 8);
  DAT_0de0._0_1_ = (undefined1)sVar7;
  DAT_092a = DAT_093e + DAT_095e;
  if (CARRY2(DAT_093e,DAT_095e)) {
    DAT_092a = -1;
  }
  DAT_093a = DAT_092a;
  DAT_0940 = DAT_093c;
  DAT_094c = DAT_0948;
  FUN_864e();
  iVar1 = (uint)DAT_094c * (uint)DAT_0cec * 2;
  uVar6 = (ushort)iVar1;
  sVar7 = uVar6 + 0x80;
  bVar3 = (byte)((uint)iVar1 >> 0x18);
  bVar8 = bVar3 + (0xff7f < uVar6);
  sVar5 = CONCAT11((byte)DAT_0dde,DAT_0de0._0_1_);
  if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),bVar8) < 0x100) {
    DAT_0dde._1_1_ = (byte)((ushort)sVar7 >> 8);
    uVar6 = CONCAT11(bVar8,(byte)DAT_0dde);
    DAT_095a = DAT_19dc;
    if ((uVar6 < DAT_19dc) && (DAT_095a = uVar6, uVar6 < DAT_19da)) {
      DAT_095a = DAT_19da;
    }
    DAT_094a = DAT_095a;
    DAT_0dde._0_1_ = bVar8;
    if ((~DAT_0ca8 & 1) == 0) {
      iVar1 = (uint)DAT_19d4 * 4 * (uint)DAT_095a;
      uVar6 = (ushort)iVar1;
      bVar3 = (byte)((uint)iVar1 >> 0x18);
      DAT_0dde._0_1_ = bVar3 + (0xff7f < uVar6);
      if (CONCAT11(bVar3 + CARRY1(bVar3,0xff7f < uVar6),DAT_0dde._0_1_) < 0x100) {
        DAT_0dde._1_1_ = (byte)(uVar6 + 0x80 >> 8);
        DAT_094a = CONCAT11(DAT_0dde._0_1_,(byte)DAT_0dde);
        sVar7 = uVar6 + 0x80;
      }
      else {
        DAT_094a = 0xffff;
        DAT_0dde._0_1_ = bVar8;
      }
    }
    DAT_092c = DAT_094a + DAT_095e;
    sVar5 = sVar7;
    if (CARRY2(DAT_094a,DAT_095e)) goto LAB_8136;
  }
  else {
LAB_8136:
    sVar7 = sVar5;
    DAT_092c = -1;
  }
  DAT_0a16 = DAT_0a16 & 0xfc;
  DAT_0881 = DAT_0881 | 0xc0;
  DAT_0946 = DAT_092c;
LAB_8578:
  DAT_0dde._1_1_ = (byte)((ushort)sVar7 >> 8);
  DAT_0de0._0_1_ = (undefined1)sVar7;
  DAT_08bc = DAT_08bc & 0xbf;
  return;
}


/* Entry 857d */

void FUN_857d(void)

{
  byte bVar1;
  
  if ((~DAT_088b & 0x40) == 0) {
    bVar1 = DAT_088b;
    if ((DAT_088b & 0x80) != 0) {
      return;
    }
  }
  else {
    bVar1 = DAT_088b & 0xbf;
    if (((DAT_0ca8 & 1) != 0) && ((~DAT_0881 & 0x10) == 0)) {
      if ((~bVar1 & 0x80) != 0) {
        DAT_088b = bVar1;
        return;
      }
      DAT_088b = bVar1 | 0x80;
      FUN_ec98();
      DAT_0a22 = DAT_0a26;
      DAT_0a1c = DAT_0a1e;
      FUN_ed11();
      DAT_0a1d = DAT_0a1f;
      DAT_0a24 = DAT_0a28;
      return;
    }
    if ((DAT_088b & 0x80) != 0) {
      bVar1 = DAT_088b & 0x3f;
      DAT_0a22 = 0;
      DAT_0a24 = 0;
      DAT_0a1c = DAT_18e0;
      if (0x16 < DAT_18e0) {
        DAT_0a1c = 0x16;
      }
      if (DAT_0a1c < 0xc) {
        DAT_0a1d = DAT_0a1c;
        if (DAT_0a1c == 0xb) {
          DAT_0a1c = 10;
          DAT_0a1d = DAT_0a1c;
        }
      }
      else {
        DAT_0a1c = DAT_0a1c - 0xc;
        DAT_0a1d = DAT_0a1c;
      }
    }
  }
  DAT_088b = bVar1;
  DAT_0a1f = DAT_18e0;
  if (0x16 < DAT_18e0) {
    DAT_0a1f = 0x16;
  }
  if (DAT_0a1f < 0xc) {
    if (DAT_0a1f == 0xb) {
      DAT_0a1f = 10;
    }
  }
  else {
    DAT_0a1f = DAT_0a1f - 0xc;
  }
  DAT_0a28 = 0;
  DAT_0a26 = 0;
  DAT_0a1e = DAT_0a1f;
  return;
}


/* Entry 8623 */

void FUN_8623(void)

{
  return;
}


/* Entry 864e */

void FUN_864e(void)

{
  short sVar1;
  
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_1a02;
  DAT_0cee = axis_index_u16_ascending();
  DAT_0ba2 = DAT_08e8;
  DAT_0ba4 = &axis_raw_19e4;
  DAT_0cf0 = axis_index_u16_ascending();
  DAT_0dde = DAT_0cee;
  DAT_0de0 = DAT_0cf0;
  sVar1 = bilinear_u8_grid(0xf,&UNK_1a17);
  DAT_0cec = (char)((ushort)(sVar1 + 0x80) >> 8);
  return;
}


/* Entry 8691 */

void FUN_8691(void)

{
  DAT_0881 = DAT_0881 & 0xfb;
  DAT_08bf = DAT_08bf & 0x7f;
  return;
}


/* Entry 869e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_869e(void)

{
  short sVar1;
  undefined3 uVar2;
  undefined2 uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  
  DAT_0881 = DAT_0881 & 0xfd;
  DAT_08c0 = DAT_08c0 | 0x20;
  sVar4 = (ushort)DAT_189a * 2 + 0xc58;
  DAT_0b3c = 0;
  while (DAT_0b3c = (DAT_0b3c + 1) - (0xfe < DAT_0b3c), DAT_0b3c < 5) {
    sVar4 = sVar4 + 2;
  }
  uVar5 = 0xcb8;
  DAT_0ccc = 0xcb8;
  DAT_0cce = 0xcb8;
  DAT_0b3c = 0;
  uVar6 = DAT_0ccc;
  while (DAT_0ccc = uVar6, DAT_0b3c = (DAT_0b3c + 1) - (0xfe < DAT_0b3c), DAT_0b3c < 5) {
    uVar5 = uVar5 + 2;
    uVar6 = uVar5;
    if ((uVar5 < DAT_0ccc) && (uVar6 = DAT_0ccc, uVar5 < DAT_0cce)) {
      DAT_0cce = uVar5;
    }
  }
  DAT_0cc2 = DAT_0ccc;
  DAT_0cc4 = DAT_0cce;
  if ((((((~DAT_08af & 0x20) == 0) && ((~DAT_08af & 0x10) == 0)) && ((~DAT_08af & 8) == 0)) &&
      ((((~DAT_08af & 4) == 0 && ((~DAT_089f & 0x80) == 0)) &&
       ((DAT_0ccc - DAT_0cce <= DAT_189c && (((~DAT_0881 & 0x10) == 0 && (DAT_18a0 <= DAT_08e8))))))
      )) && ((DAT_08e8 <= DAT_18a2 &&
             ((((DAT_18a4 <= DAT_0900 && (DAT_0900 <= DAT_18a6)) && (DAT_18a8 <= DAT_0c90)) &&
              (DAT_0c90 <= DAT_18aa)))))) {
    uVar6 = 0xcb8;
    DAT_0b3c = 0;
    _DAT_0dde = 0;
    while( true ) {
      sVar1 = uVar6 + RAM0x0ddf;
      _DAT_0dde = CONCAT12(DAT_0dde._0_1_ + CARRY2(uVar6,RAM0x0ddf),sVar1);
      uVar2 = _DAT_0dde;
      DAT_0b3c = (DAT_0b3c + 1) - (0xfe < DAT_0b3c);
      if (4 < DAT_0b3c) break;
      uVar6 = uVar6 + 2;
    }
    DAT_0de0._0_1_ = (undefined1)sVar1;
    RAM0x0de1 = CONCAT21(DAT_0dde / 5,(char)(CONCAT11((char)(DAT_0dde % 5),DAT_0de0._0_1_) / 5));
    DAT_0cc6 = _DAT_0de2;
    sVar1 = _DAT_0de2 - DAT_0cca;
    _DAT_0dde = uVar2;
    if (_DAT_0de2 < DAT_0cca) {
      uVar3 = scale_u16_by_u8(sVar4,CONCAT11((~(byte)((ushort)sVar1 >> 8) + 1) -
                                             ((char)-(char)sVar1 != '\0'),-(char)sVar1));
      sVar4 = CONCAT11((~(byte)((ushort)uVar3 >> 8) + 1) - ((char)-(char)uVar3 != '\0'),-(char)uVar3
                      );
    }
    else {
      sVar4 = scale_u16_by_u8(sVar4,sVar1);
    }
    DAT_0cc8 = sVar4 + DAT_0cca;
    DAT_0cca = DAT_0cc8;
  }
  DAT_08c0 = DAT_08c0 & 0xdf;
  return;
}


/* Entry 87e7 */

void FUN_87e7(undefined2 param_1)

{
  ushort uVar1;
  undefined1 extraout_A;
  byte bVar2;
  char cVar3;
  byte extraout_A_00;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  
  DAT_08bc = DAT_08bc | 0x20;
  uVar6 = DAT_08fa + DAT_08f8;
  if (CARRY2(DAT_08fa,DAT_08f8)) {
    DAT_08fc = CONCAT11((byte)(uVar6 >> 9),(char)(uVar6 >> 1)) | 0x8000;
  }
  else {
    DAT_08fc = uVar6 >> 1;
  }
  DAT_08fa = DAT_08f8;
  sVar7 = DAT_08fc - DAT_08fe;
  if (DAT_08fc < DAT_08fe) {
    sVar7 = CONCAT11((~(byte)((ushort)sVar7 >> 8) + 1) - ((char)-(char)sVar7 != '\0'),-(char)sVar7);
    uVar4 = scale_u16_by_u8(param_1,sVar7);
    sVar5 = CONCAT11((~(byte)((ushort)uVar4 >> 8) + 1) - ((char)-(char)uVar4 != '\0'),-(char)uVar4);
  }
  else {
    sVar5 = scale_u16_by_u8(param_1,sVar7);
  }
  DAT_08fe = sVar5 + DAT_08fe;
  DAT_0ba2 = DAT_0902;
  DAT_0ba4 = &axis_raw_426e;
  DAT_0914 = axis_index_u16_ascending();
  DAT_0918 = FUN_cc63();
  if ((~DAT_0880 & 0x40) != 0) {
    DAT_0a82 = 0x40;
    DAT_0a86 = 0x80;
    DAT_0887 = DAT_0887 & 0xfd;
    goto LAB_8a89;
  }
  DAT_0ba2 = DAT_08e8;
  if ((~DAT_088d & 4) == 0) {
    DAT_0ba2 = 0xd000;
  }
  DAT_0ba4 = &axis_raw_4246;
  DAT_0916 = axis_index_u16_ascending();
  DAT_0dde = DAT_0914;
  DAT_0de0 = DAT_0916;
  sVar5 = bilinear_u8_grid();
  DAT_0a83 = (byte)((ushort)(sVar5 + 0x80) >> 8);
  bVar2 = DAT_0b95;
  if (((DAT_0889 & 2) != 0) &&
     ((CARRY1(DAT_0b92,DAT_0b94) ||
      (bVar2 = DAT_0b92 + DAT_0b94, DAT_0a83 < (byte)(DAT_0b92 + DAT_0b94))))) {
    DAT_0889 = DAT_0889 & 0xfd;
    DAT_0b92 = 0;
    bVar2 = DAT_0b95;
  }
  DAT_0b95 = bVar2;
  DAT_0dde = DAT_0918;
  DAT_0de0 = 0;
  lookup_u8_grid_special();
  DAT_0a8b = extraout_A;
  if ((DAT_0880 & 4) != 0) {
    DAT_0a82 = 0x40;
    DAT_0887 = DAT_0887 & 0xfd;
    goto LAB_8a89;
  }
  if (DAT_4243 == '\x01') {
    DAT_0a82 = DAT_4244;
    if (DAT_4242 <= DAT_4244) {
      DAT_0a82 = DAT_4242;
    }
    DAT_0887 = DAT_0887 & 0xfd;
    goto LAB_8a89;
  }
  if ((~DAT_0889 & 2) != 0) {
    if (DAT_0a86 < 0x80) {
      if ((DAT_0888 & 0x40) != 0) {
        DAT_0a87 = DAT_4b10;
      }
      DAT_0a86 = DAT_0a86 + DAT_0a87;
      if (0x7f < DAT_0a86) {
        DAT_0a86 = 0x80;
      }
    }
    DAT_0dde = (ushort)DAT_0a86 * (ushort)DAT_0b95 >> 7;
    if (((short)((ushort)DAT_0a86 * (ushort)DAT_0b95) < 0) ||
       (uVar6 = DAT_0dde, DAT_4242 <= (byte)DAT_0dde)) {
      uVar6 = (ushort)DAT_4242;
    }
    DAT_0a82 = (byte)uVar6;
    DAT_0887 = DAT_0887 & 0xfd;
    if ((DAT_0880 & 4) != 0) {
      DAT_0a86 = 0x80;
    }
    goto LAB_8a89;
  }
  if ((DAT_0885 & 0x20) != 0) {
    if (DAT_0a86 < 0x80) {
      if ((DAT_0888 & 0x40) != 0) {
        DAT_0a87 = DAT_4b10;
      }
      DAT_0a86 = DAT_0a86 + DAT_0a87;
      if (0x7f < DAT_0a86) {
        DAT_0a86 = 0x80;
      }
    }
    DAT_0dde = 0;
    uVar6 = DAT_0dde;
    if ((DAT_0ada & 0x40) != 0) {
      bVar2 = -DAT_0ad8;
      if ((-(DAT_0ad8 != 0) == '\0') && (bVar2 <= DAT_4e30)) {
        uVar6 = CONCAT11(-(DAT_0ad8 != 0),bVar2);
        if (bVar2 < DAT_4e2f) {
          uVar6 = (ushort)DAT_4e2f;
        }
      }
      else {
        uVar6 = (ushort)DAT_4e30;
      }
    }
    DAT_0a82 = (byte)uVar6;
    if (DAT_4242 <= (byte)uVar6) {
      DAT_0a82 = DAT_4242;
    }
    DAT_0887 = DAT_0887 & 0xfd;
    goto LAB_8a89;
  }
  if (DAT_0a86 < 0x80) {
    if ((DAT_0888 & 0x40) != 0) {
      DAT_0a87 = DAT_4b10;
    }
    DAT_0a86 = DAT_0a86 + DAT_0a87;
    if (0x7f < DAT_0a86) {
      DAT_0a86 = 0x80;
    }
  }
  if ((DAT_4b03 != -0x80) || ((DAT_0a82 = DAT_0aac, (~DAT_0aa6 & 4) == 0 && ((DAT_0aa7 & 2) == 0))))
  {
    bVar2 = DAT_0a83;
    if (DAT_0a83 < DAT_0d05) {
      bVar2 = DAT_0d05;
    }
    DAT_0dde = (ushort)bVar2 * (ushort)DAT_0a86 >> 7;
    cVar3 = -(char)((short)((ushort)bVar2 * (ushort)DAT_0a86) >> 0xf);
    if ((DAT_0ada & 0x40) == 0) {
      uVar6 = DAT_0dde;
      if (cVar3 == '\0') goto LAB_8a70;
    }
    else {
      bVar2 = (byte)DAT_0dde - DAT_0ad8;
      cVar3 = cVar3 - ((byte)DAT_0dde < DAT_0ad8);
      if ((cVar3 == '\0') && (bVar2 <= DAT_4e30)) {
        uVar6 = CONCAT11(cVar3,bVar2);
        if (bVar2 < DAT_4e2f) {
          uVar6 = (ushort)DAT_4e2f;
        }
      }
      else {
        uVar6 = (ushort)DAT_4e30;
      }
LAB_8a70:
      DAT_0a82 = (byte)uVar6;
      if ((byte)uVar6 < DAT_4242) goto LAB_8a78;
    }
    DAT_0a82 = DAT_4242;
  }
LAB_8a78:
  DAT_0887 = DAT_0887 & 0xfd;
  if ((DAT_0880 & 4) != 0) {
    DAT_0a86 = 0x80;
  }
LAB_8a89:
  uVar6 = DAT_0a2e;
  if ((DAT_0880 & 0x40) == 0) {
    bVar2 = DAT_08d9;
    if (DAT_08d9 < 0x1a) {
      bVar2 = 0xb3;
    }
    if (bVar2 < 0x53) {
      DAT_0dde = 0;
    }
    else if ((byte)(bVar2 + 0xad) < 0x80) {
      DAT_0dde = (ushort)(byte)(bVar2 + 0xad) << 4;
    }
    else {
      DAT_0dde = 0x800;
    }
    if (DAT_0900 < 0x1000) {
      DAT_0de0 = 0;
    }
    else if (DAT_0900 - 0x1000 < 0xe000) {
      DAT_0de0 = DAT_0900 - 0x1000 >> 4;
    }
    else {
      DAT_0de0 = 0xe00;
    }
    lookup_u8_grid_special();
    bVar2 = extraout_A_00;
    if ((DAT_088d & 0x40) != 0) {
      bVar2 = DAT_4bab;
    }
    DAT_0a98 = (ushort)bVar2 * 0x20;
    uVar1 = (ushort)DAT_0a9c * 0x20 + DAT_0a98;
    if ((~DAT_0880 & 0x40) == 0) {
      uVar6 = uVar1;
      if (DAT_0a48 <= uVar1) {
        uVar6 = DAT_0a48;
      }
    }
    else {
      DAT_0aa0 = DAT_4b9a;
      uVar6 = DAT_0a2e;
      DAT_0dde = uVar1;
      if (uVar1 <= DAT_0a2e) {
        uVar6 = uVar1;
      }
    }
  }
  DAT_0a96 = uVar6;
  sVar7 = scale_u16_by_u8(sVar7,uVar6,&UNK_4ba1);
  DAT_0a9a = sVar7 << 1;
  DAT_08bc = DAT_08bc & 0xdf;
  return;
}


/* Entry 8b34 */

/* WARNING: Removing unreachable block (RAM,0x9c19) */
/* WARNING: Removing unreachable block (RAM,0x9b8d) */
/* WARNING: Removing unreachable block (RAM,0x9b50) */
/* WARNING: Removing unreachable block (RAM,0x9b57) */
/* WARNING: Removing unreachable block (RAM,0x9b59) */
/* WARNING: Removing unreachable block (RAM,0x9b6c) */
/* WARNING: Removing unreachable block (RAM,0x9b6f) */
/* WARNING: Removing unreachable block (RAM,0x9b80) */
/* WARNING: Removing unreachable block (RAM,0x9b74) */
/* WARNING: Removing unreachable block (RAM,0x9b7b) */
/* WARNING: Removing unreachable block (RAM,0x9b87) */
/* WARNING: Removing unreachable block (RAM,0x9b95) */
/* WARNING: Removing unreachable block (RAM,0x9bb8) */
/* WARNING: Removing unreachable block (RAM,0x9c36) */
/* WARNING: Removing unreachable block (RAM,0x9bdb) */
/* WARNING: Removing unreachable block (RAM,0x9be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8b34(undefined2 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  byte extraout_A;
  byte extraout_A_00;
  byte extraout_A_01;
  byte extraout_A_02;
  byte extraout_A_03;
  byte extraout_A_04;
  byte extraout_A_05;
  byte extraout_A_06;
  byte extraout_A_07;
  byte extraout_A_08;
  undefined2 uVar8;
  char cVar13;
  ushort uVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  byte bVar14;
  byte bVar15;
  undefined2 *puVar16;
  ushort uVar17;
  
  DAT_0882 = DAT_0882 & 0xbf;
  DAT_08bc = DAT_08bc | 8;
  FUN_5fa4();
  _DAT_0dde = CONCAT13(DAT_0896._0_1_,RAM0x0ddf);
  bVar6 = DAT_0001;
  bVar15 = ((bVar6 ^ (byte)DAT_0896) & DAT_0896._0_1_) +
           (~(bVar6 ^ (byte)DAT_0896) & (byte)DAT_0896);
  DAT_0896 = CONCAT11(bVar15,bVar6);
  bVar6 = DAT_0000;
  DAT_0894 = CONCAT11(((bVar6 ^ (byte)DAT_0894) & DAT_0894._0_1_) +
                      (~(bVar6 ^ (byte)DAT_0894) & (byte)DAT_0894),bVar6);
  if (((DAT_0d57 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    if ((bVar15 & 1) == 0) {
      if ((DAT_08b6 & 4) == 0) {
        if ((DAT_0d8a < DAT_0bc7) && ((DAT_08af & 2) != 0)) {
          DAT_08af = DAT_08af & 0xfd;
          DAT_0bd2 = DAT_0bd2 | 0x80;
        }
      }
      else {
        DAT_08b6 = DAT_08b6 & 0xfb;
      }
    }
    else if ((DAT_0900._0_1_ < DAT_4e4a) || ((~DAT_0880 & 1) == 0)) {
      DAT_08b6 = DAT_08b6 & 0xfb;
      DAT_0bc6 = 0;
      DAT_0bc7 = 0;
    }
    else {
      bVar15 = DAT_0bd2;
      if ((DAT_08b6 & 4) != 0) {
        if (DAT_0bc6 <= DAT_0d8a) goto LAB_8bec;
        if ((~DAT_08af & 2) == 0) {
          DAT_08af = DAT_08af | 2;
          bVar15 = DAT_0bd2 | 0x80;
          if ((~DAT_08b8 & 2) == 0) {
            DAT_08b8 = DAT_08b8 | 2;
            bVar15 = DAT_0bd2 | 0x88;
          }
        }
      }
      DAT_0bd2 = bVar15;
      DAT_08b6 = DAT_08b6 | 4;
    }
  }
LAB_8bec:
  if ((DAT_0889 & 0x20) == 0) {
LAB_8c00:
    DAT_0baf = 0;
  }
  else {
    DAT_0baf = (DAT_0baf + 1) - (0xfe < DAT_0baf);
    if (0x32 < DAT_0baf) {
      DAT_0889 = DAT_0889 & 0xdf;
      goto LAB_8c00;
    }
  }
  if (DAT_0bb0 < DAT_0bb4) {
    DAT_0bba = (DAT_0bba + 1) - (0xfe < DAT_0bba);
  }
  else {
    DAT_0bba = 0;
  }
  if (3 < DAT_0bba) {
    bVar15 = (byte)(DAT_0bb4 - 1 >> 8);
    DAT_0bb4 = CONCAT11(bVar15 + CARRY1(bVar15,DAT_0bb4 == 0),bVar15 + (DAT_0bb4 == 0));
    DAT_0bba = 0;
  }
  DAT_0bb6 = DAT_0bb0 - DAT_0bb4;
  if (DAT_0bb0 < DAT_0bb4) {
    DAT_0bb6 = 0;
  }
  if (DAT_08d0 < DAT_08e0) {
    DAT_08ef = (DAT_08ef + 1) - (0xfe < DAT_08ef);
  }
  else {
    DAT_08ef = 0;
  }
  if (3 < DAT_08ef) {
    bVar15 = (byte)(DAT_08e0 - 1 >> 8);
    DAT_08e0 = CONCAT11(bVar15 + CARRY1(bVar15,DAT_08e0 == 0),bVar15 + (DAT_08e0 == 0));
    DAT_08ef = 0;
  }
  DAT_08e2 = DAT_08d0 - DAT_08e0;
  if (DAT_08d0 < DAT_08e0) {
    DAT_08e2 = 0;
  }
  uVar17 = DAT_08e4 - DAT_08e2;
  if (DAT_08e4 < DAT_08e2) {
    uVar17 = CONCAT11((~(byte)(uVar17 >> 8) + 1) - ((char)-(char)uVar17 != '\0'),-(char)uVar17);
  }
  if (uVar17 < 8) {
    DAT_088d = DAT_088d & 0xf7;
  }
  else {
    DAT_088d = DAT_088d | 0xc;
    DAT_08e4 = DAT_08e2;
  }
  sVar11 = DAT_08e2 - DAT_08e6;
  if (DAT_08e2 < DAT_08e6) {
    sVar11 = CONCAT11((~(byte)((ushort)sVar11 >> 8) + 1) - ((char)-(char)sVar11 != '\0'),
                      -(char)sVar11);
    uVar8 = scale_u16_by_u8(param_1,sVar11);
    sVar12 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8)
    ;
  }
  else {
    sVar12 = scale_u16_by_u8(param_1,sVar11);
  }
  DAT_08e6 = sVar12 + DAT_08e6;
  sVar12 = DAT_0bb6 - DAT_0bb8;
  if (DAT_0bb6 < DAT_0bb8) {
    sVar12 = CONCAT11((~(byte)((ushort)sVar12 >> 8) + 1) - ((char)-(char)sVar12 != '\0'),
                      -(char)sVar12);
    uVar8 = scale_u16_by_u8(sVar11,sVar12);
    sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8)
    ;
  }
  else {
    sVar11 = scale_u16_by_u8(sVar11,sVar12);
  }
  DAT_0bb8 = sVar11 + DAT_0bb8;
  uVar17 = DAT_08e2 - (short)DAT_09d0;
  if (DAT_08e2 < DAT_09d0) {
    uVar17 = CONCAT11((~(byte)(uVar17 >> 8) + 1) - ((char)-(char)uVar17 != '\0'),-(char)uVar17);
    uVar8 = scale_u16_by_u8(sVar12);
    sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8)
    ;
  }
  else {
    sVar11 = scale_u16_by_u8(sVar12);
  }
  DAT_09d0 = (undefined2 *)(sVar11 + (short)DAT_09d0);
  DAT_09df = DAT_09df + 1;
  bVar15 = DAT_312f;
  if (9 < DAT_312f) {
    bVar15 = 10;
  }
  _DAT_0de2 = CONCAT12(bVar15,_DAT_0de3);
  if (bVar15 <= DAT_09df) {
    DAT_09e0 = DAT_09e0 | 1;
    DAT_09df = 0;
  }
  puVar16 = DAT_09d0;
  if ((~DAT_09e0 & 1) != 0) {
    DAT_09da = DAT_09d2;
    _DAT_0dde = 0;
    puVar16 = &DAT_09e2;
    do {
      sVar11 = (short)puVar16 + RAM0x0ddf;
      bVar1 = CARRY2((ushort)puVar16,RAM0x0ddf);
      RAM0x0ddf = CONCAT21(sVar11,(char)DAT_0de0);
      _DAT_0dde = CONCAT13(DAT_0dde._0_1_ + bVar1,RAM0x0ddf);
      uVar5 = _DAT_0dde;
      puVar16 = puVar16 + 1;
      bVar6 = (char)DAT_0de0 + 1;
      _DAT_0dde = CONCAT31(_DAT_0dde,bVar6);
    } while (bVar6 < bVar15);
    if (bVar15 == 0) {
      _DAT_0de2 = (uint3)DAT_09e2;
      DAT_09d2 = DAT_09e2;
    }
    else {
      DAT_0dde = SUB42(uVar5,2);
      DAT_0de0._0_1_ = (undefined1)sVar11;
      uVar10 = CONCAT11((char)((ushort)DAT_0dde % (ushort)bVar6),DAT_0de0._0_1_);
      _DAT_0de2 = CONCAT21((ushort)DAT_0dde / (ushort)bVar6,(char)(uVar10 / bVar6));
      puVar16 = (undefined2 *)(uVar10 % (ushort)bVar6);
      DAT_09d2 = _DAT_0de3;
    }
  }
  FUN_a405(puVar16);
  FUN_a448();
  FUN_a462();
  if ((~DAT_09cf & 0x40) == 0) {
    if ((~DAT_09cf & 0x80) == 0) {
      if (((DAT_09da <= DAT_09d2) && (DAT_3132 <= DAT_09d2 - DAT_09da)) &&
         (DAT_09d2 - DAT_09da <= DAT_3134)) {
        DAT_09d4 = DAT_09da;
        DAT_09cf = DAT_09cf | 0x80;
        goto LAB_8dd1;
      }
    }
    else {
LAB_8dd1:
      if (DAT_09da <= DAT_09d2) {
        DAT_09dc = (DAT_09dc + 1) - (0xfe < DAT_09dc);
        if (DAT_09dc < DAT_3136) goto LAB_8e47;
        if ((DAT_09d4 < DAT_09d2) && (DAT_09d2 - DAT_09d4 <= DAT_3138)) {
          DAT_09cf = DAT_09cf | 0x40;
          goto LAB_8df9;
        }
      }
    }
LAB_8e37:
    DAT_09cf = DAT_09cf & 0x3e;
    DAT_09dc = 0;
  }
  else {
LAB_8df9:
    if ((((DAT_3130 != -0x80) || ((~DAT_08af & 8) != 0)) ||
        (((~DAT_08af & 4) != 0 || ((~DAT_0881 & 0x10) != 0)))) ||
       (((DAT_0d87 == '\t' && ((DAT_0896 & 0x1000) == 0)) || ((~DAT_09cf & 0x10) != 0))))
    goto LAB_8e37;
    if ((~DAT_09cf & 1) == 0) {
      DAT_09cf = DAT_09cf | 1;
      DAT_09d6 = DAT_09d8;
      DAT_09d7 = DAT_09d9;
    }
  }
LAB_8e47:
  if ((DAT_09cf & 1) == 0) {
LAB_8e8d:
    DAT_09cf = DAT_09cf & 0xf0;
    DAT_0cd4 = 0x80;
  }
  else {
    if ((~DAT_09cf & 8) == 0) {
      DAT_0cd4 = DAT_09d6;
      if (DAT_09da <= DAT_09d2) goto LAB_8e9f;
LAB_8e81:
      DAT_09cf = DAT_09cf & 0x3f;
      DAT_09dc = 0;
      goto LAB_8e8d;
    }
    if (DAT_0cd4 < 0x80) {
      bVar15 = DAT_0cd4 + DAT_3213;
      if (((CARRY1(DAT_0cd4,DAT_3213)) || (bVar15 == 0x80)) || (DAT_0cd4 = bVar15, 0x7f < bVar15)) {
LAB_8e7d:
        DAT_09cf = DAT_09cf | 0x10;
        goto LAB_8e81;
      }
    }
    else {
      bVar15 = DAT_0cd4 - DAT_3213;
      if (((DAT_0cd4 < DAT_3213) || (bVar15 == 0x80)) || (DAT_0cd4 = bVar15, bVar15 < 0x80))
      goto LAB_8e7d;
    }
  }
LAB_8e9f:
  uVar10 = DAT_08e6 - ((short)&DAT_0b0e + (ushort)DAT_0b0d);
  cVar13 = (char)uVar10;
  cVar7 = (char)(uVar10 >> 8);
  if (DAT_08e6 < (short)&DAT_0b0e + (ushort)DAT_0b0d) {
    bVar15 = cVar7 + 0x80;
    if ((bVar15 < 0x80) && (0x7f7f < CONCAT11(bVar15,cVar13))) {
      DAT_08ed = cVar13 + 0x80;
    }
    else {
      DAT_08ed = 0;
    }
  }
  else if ((uVar10 < 0x8000) && (CONCAT11(cVar7 + -0x80,cVar13) < 0x8080)) {
    DAT_08ed = cVar13 + 0x80;
  }
  else {
    DAT_08ed = 0xff;
  }
  if ((DAT_0881 & 0x10) == 0) {
    if (DAT_19d7 <= DAT_08ed) {
      DAT_0b03 = 0;
    }
  }
  else {
    DAT_0b03 = 0xff;
  }
  if (DAT_348b < DAT_08ed) {
    DAT_0b17 = '\0';
  }
  else {
    DAT_0b17 = (DAT_0b17 + 1) - (0xfe < DAT_0b17);
  }
  DAT_0b0d = DAT_0b0d + 2 & DAT_1842;
  if (DAT_0a86 < 0x80) {
    if (DAT_4b0f <= DAT_08ed) {
      DAT_0888 = DAT_0888 | 0x40;
    }
  }
  else {
    DAT_0888 = DAT_0888 & 0xbf;
  }
  uVar10 = DAT_0bb8 - ((short)&DAT_0bbe + (ushort)DAT_0bbc);
  cVar13 = (char)uVar10;
  cVar7 = (char)(uVar10 >> 8);
  if (DAT_0bb8 < (short)&DAT_0bbe + (ushort)DAT_0bbc) {
    bVar15 = cVar7 + 0x80;
    if ((bVar15 < 0x80) && (0x7f7f < CONCAT11(bVar15,cVar13))) {
      DAT_0bbb = cVar13 + -0x80;
    }
    else {
      DAT_0bbb = '\0';
    }
  }
  else if ((uVar10 < 0x8000) && (CONCAT11(cVar7 + -0x80,cVar13) < 0x8080)) {
    DAT_0bbb = cVar13 + -0x80;
  }
  else {
    DAT_0bbb = -1;
  }
  DAT_0bbc = DAT_0bbc + 2 & DAT_1842;
  if (DAT_08e6._0_1_ == '\0') {
    DAT_08ec = (byte)DAT_08e6;
  }
  else {
    DAT_08ec = 0xff;
  }
  lookup_u8_uniform_u16_axis();
  DAT_0a05 = extraout_A;
  FUN_a314();
  if (((~DAT_08af & 8) == 0) && ((~DAT_08af & 4) == 0)) {
    if (DAT_0a05 < DAT_08ec) {
      DAT_0b18 = 0;
    }
    else {
      DAT_0b18 = (DAT_0b18 + 1) - (0xfe < DAT_0b18);
    }
    if (((DAT_0886 & 0x10) == 0) || (DAT_08ec < DAT_0a06)) {
      DAT_0b19 = 0;
    }
    else {
      DAT_0b19 = (DAT_0b19 + 1) - (0xfe < DAT_0b19);
    }
  }
  DAT_0b16 = (DAT_0b16 + 1) - (0xfe < DAT_0b16);
  DAT_0e20 = (DAT_0e20 + 1) - (0xfe < DAT_0e20);
  if (DAT_4e8c <= DAT_0e20) {
    FUN_cbef();
    if ((~DAT_0883 & 2) == 0) {
      if ((DAT_0880 & 1) != 0) {
        DAT_0883 = DAT_0883 | 2;
        DAT_0889 = DAT_0889 | 0x10;
        DAT_0bf8 = DAT_0bf8 & 0xdf;
      }
    }
    else if ((~DAT_0880 & 1) == 0) {
      DAT_0b6e = 0;
      DAT_0883 = DAT_0883 & 0xfd;
      DAT_0bf8 = DAT_0bf8 | 0x40;
    }
  }
  if ((~DAT_0880 & 1) == 0) {
    DAT_0b5c = 0;
  }
  else {
    if (DAT_0d7d <= DAT_0a2e._0_1_) {
      DAT_0880 = DAT_0880 | 0x44;
    }
    if ((((((((~DAT_0d08 & 1) == 0) && ((~DAT_0884 & 2) == 0)) && ((~DAT_0884 & 1) == 0)) &&
          (((~DAT_088c & 0x80) == 0 && ((DAT_0883 & 0x10) != 0)))) &&
         (((~DAT_0881 & 8) == 0 && ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))))) &&
        ((~DAT_08b1 & 0x10) == 0)) && (((~DAT_08a0 & 4) == 0 && (DAT_18df != -0x80)))) {
      if (0xbf < DAT_091b) {
        DAT_091b = 0xc0;
      }
      if (0xbf < DAT_091c) {
        DAT_091c = 0xc0;
      }
      if (0xbf < DAT_091d) {
        DAT_091d = 0xc0;
      }
      if (0xbf < DAT_091e) {
        DAT_091e = 0xc0;
      }
      bVar15 = (byte)(DAT_095e >> 8);
      DAT_0926 = CONCAT11(bVar15 + DAT_0a08,(char)DAT_095e);
      if (CARRY1(bVar15,DAT_0a08)) {
        DAT_0926 = -1;
      }
      FUN_864e();
      iVar3 = (uint)DAT_0a08 * 0x100 * (uint)DAT_0cec * 2;
      uVar10 = (ushort)iVar3;
      bVar15 = (byte)((uint)iVar3 >> 0x18);
      cVar7 = bVar15 + (0xff7f < uVar10);
      uVar9 = CONCAT11(bVar15 + CARRY1(bVar15,0xff7f < uVar10),cVar7);
      uVar17 = uVar10 + 0x80;
      if (uVar9 < 0x100) {
        RAM0x0ddf = CONCAT12((char)(uVar10 + 0x80 >> 8),DAT_0de0);
        _DAT_0dde = CONCAT13(cVar7,RAM0x0ddf);
        DAT_0928 = (short)DAT_0dde + DAT_095e;
        uVar17 = uVar9;
        if (CARRY2((ushort)DAT_0dde,DAT_095e)) goto LAB_90dd;
      }
      else {
LAB_90dd:
        DAT_0928 = -1;
      }
      DAT_0a17 = DAT_0a17 | 0x80;
      FUN_c8c9();
      DAT_0a17 = DAT_0a17 & 0x7f;
      if (DAT_0d87 != '\t') {
        DAT_0a17 = DAT_0a17 | 0x20;
        FUN_c939();
        DAT_0a17 = DAT_0a17 & 0xdf;
      }
      DAT_0881 = DAT_0881 | 8;
    }
  }
  if ((((DAT_0886 & 0x40) == 0) || (DAT_08ed < DAT_34ce)) || (DAT_0b1e < DAT_3553)) {
    DAT_0a12 = 0;
  }
  else {
    DAT_0881 = DAT_0881 | 1;
    DAT_0b1e = 0;
    if (((DAT_4b08 != '\0') && (DAT_0a86 == 0x80)) && (DAT_0a86 = DAT_4b0b, DAT_4b0b < 0x80)) {
      DAT_0a87 = DAT_4b0e;
    }
    if ((DAT_097a == '\0') && (DAT_097a = DAT_3483, DAT_3483 != -0x80)) {
      DAT_0a04 = DAT_3486;
    }
    bVar15 = DAT_354e;
    if (((((DAT_0d87 == '\t') && (bVar15 = DAT_3548, (~DAT_0896._0_1_ & 0x10) != 0)) &&
         (bVar15 = DAT_3549, (DAT_0899 & 2) == 0)) &&
        ((bVar15 = DAT_354a, (DAT_0899 & 4) == 0 && (bVar15 = DAT_354b, (DAT_0899 & 8) == 0)))) &&
       ((bVar15 = DAT_354c, (DAT_0899 & 0x10) == 0 && (bVar15 = DAT_354e, (DAT_0899 & 0x20) != 0))))
    {
      bVar15 = DAT_354d;
    }
    DAT_0a12 = (ushort)bVar15 << 5;
  }
  if (DAT_0b21 == 1) {
    if ((((~DAT_0886 & 0x40) != 0) || ((~DAT_0881 & 0x10) != 0)) ||
       ((DAT_0900._0_1_ < DAT_34c5 ||
        (((DAT_34c6 < DAT_0900._0_1_ || (bVar15 = (byte)((DAT_08e6 << 6) >> 8), bVar15 < DAT_34c7))
         || (DAT_34c8 < bVar15)))))) goto LAB_931f;
    if ((DAT_0d87 == '\t') && ((DAT_0896 & 0x1000) == 0)) {
      if (DAT_34c9 <= DAT_08ed) goto LAB_9217;
      goto LAB_931f;
    }
    if (DAT_08ed < DAT_34ca) goto LAB_931f;
LAB_9217:
    lookup_u8_uniform_u16_axis();
    DAT_0a0d = extraout_A_00;
    lookup_u8_uniform_axis((ushort)extraout_A_00 * (ushort)DAT_0a0f);
    DAT_0a10 = extraout_A_01;
    uVar8 = multiply_u16_shift8_saturate(extraout_A_01 + 0x180);
    _DAT_0dde = CONCAT22(uVar8,DAT_0de0);
    lookup_u8_uniform_axis();
    DAT_0a0c = extraout_A_02;
    lookup_u8_uniform_u16_axis();
    uVar2 = (uint)((ushort)extraout_A_03 * (ushort)DAT_0a0c) * (_DAT_0dde >> 0x10);
    DAT_0a0e = extraout_A_03;
    if (uVar2 < 0x40000000) {
      bVar15 = (byte)(uVar2 >> 0x10);
      uVar17 = CONCAT11(((char)(uVar2 >> 0x18) << 1 | bVar15 >> 7) << 1 | (bVar15 & 0x7f) >> 6,
                        (bVar15 << 1 | (byte)(uVar2 >> 8) >> 7) << 1 |
                        (byte)((ushort)((short)uVar2 << 1) >> 0xf));
      DAT_0a0a = uVar17;
      if (uVar17 <= DAT_34cc) goto LAB_931f;
    }
    else {
      DAT_0a0a = 0xffff;
    }
    do {
      uVar17 = (ushort)((uint)DAT_0b21 * 0x9c4 >> 0x10);
      uVar9 = (ushort)((uint)DAT_0b21 * 0x9c4);
      _DAT_0dde = CONCAT22(uVar9,DAT_0de0);
      uVar10 = DAT_0a0a + DAT_095e;
      if (CARRY2(DAT_0a0a,DAT_095e)) {
        uVar10 = 0xffff;
      }
    } while ((uVar9 <= uVar10) && (DAT_0b21 = (DAT_0b21 + 1) - (0xfe < DAT_0b21), DAT_0b21 < 0x1b));
    if ((DAT_0d87 == '\t') && ((DAT_0896 & 0x1000) == 0)) {
      bVar15 = DAT_3551;
      if (DAT_0b20 < DAT_354f) {
LAB_92fe:
        if (bVar15 <= DAT_0b1c) goto LAB_931f;
        DAT_0b1c = (DAT_0b1c + 1) - (0xfe < DAT_0b1c);
      }
      else {
        DAT_0b20 = 0;
        DAT_0b1c = 0;
      }
    }
    else {
      bVar15 = DAT_3552;
      if (DAT_0b20 < DAT_3550) goto LAB_92fe;
      DAT_0b20 = 0;
      DAT_0b1c = 0;
    }
    DAT_0881 = DAT_0881 | 1;
    if (DAT_3487 == -0x80) {
      DAT_097a = -0x80;
    }
  }
  else {
    DAT_0b21 = DAT_0b21 - 1;
LAB_931f:
    DAT_0a0a = 0;
  }
  if (((((((DAT_0881 & 1) != 0) && ((~DAT_0d08 & 1) == 0)) && ((~DAT_0884 & 2) == 0)) &&
       (((~DAT_0884 & 1) == 0 && ((~DAT_088c & 0x80) == 0)))) && ((~DAT_08a0 & 4) == 0)) &&
     (((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)) && ((DAT_08b1 & 0x10) == 0)))) {
    DAT_0a14 = DAT_0a0a + DAT_0a12;
    if ((CARRY2(DAT_0a0a,DAT_0a12)) || (24999 < DAT_0a14)) {
      DAT_0a14 = 25000;
    }
    DAT_0926 = DAT_0a14 + DAT_095e;
    if (CARRY2(DAT_0a14,DAT_095e)) {
      DAT_0926 = -1;
    }
    FUN_864e(uVar17,DAT_0926);
    iVar3 = (uint)DAT_0a14 * (uint)DAT_0cec * 2;
    uVar17 = (ushort)iVar3;
    bVar15 = (byte)((uint)iVar3 >> 0x18);
    cVar7 = bVar15 + (0xff7f < uVar17);
    if ((0xff < CONCAT11(bVar15 + CARRY1(bVar15,0xff7f < uVar17),cVar7)) ||
       (uVar17 = CONCAT11(cVar7,(char)(uVar17 + 0x80 >> 8)), DAT_0928 = uVar17 + DAT_095e,
       CARRY2(uVar17,DAT_095e))) {
      DAT_0928 = -1;
    }
    if ((~DAT_08b1 & 0x80) == 0) {
      DAT_0a17 = DAT_0a17 | 0x80;
      FUN_c8c9();
      DAT_0a17 = DAT_0a17 & 0x7f;
    }
    if ((DAT_0d87 != '\t') && ((~DAT_08b1 & 0x80) == 0)) {
      DAT_0a17 = DAT_0a17 | 0x20;
      FUN_c939();
      DAT_0a17 = DAT_0a17 & 0xdf;
    }
  }
  DAT_0881 = DAT_0881 & 0xfe;
  DAT_08c0 = DAT_08c0 | 0x40;
  if (((((~DAT_0886 & 0x40) == 0) && ((~DAT_0881 & 0x10) == 0)) && (DAT_3554 <= DAT_0900._0_1_)) &&
     (((DAT_0900._0_1_ <= DAT_3555 && (bVar15 = (byte)((DAT_08e6 << 6) >> 8), DAT_3556 <= bVar15))
      && (bVar15 <= DAT_3557)))) {
    bVar15 = DAT_3559;
    if ((DAT_0d87 == '\t') && ((DAT_0896 & 0x1000) == 0)) {
      bVar15 = DAT_3558;
    }
    if (DAT_08ed < bVar15) goto LAB_9429;
    DAT_0cf2 = DAT_0cf2 | 2;
LAB_9438:
    lookup_u8_uniform_u16_axis();
    DAT_0a0d = extraout_A_04;
    lookup_u8_uniform_axis((ushort)extraout_A_04 * (ushort)DAT_0a0f);
    DAT_0a10 = extraout_A_05;
    uVar8 = multiply_u16_shift8_saturate(extraout_A_05 + 0x180);
    _DAT_0dde = CONCAT22(uVar8,DAT_0de0);
    lookup_u8_uniform_axis();
    DAT_0d04 = extraout_A_06;
    lookup_u8_uniform_u16_axis();
    uVar2 = (uint)((ushort)extraout_A_07 * (ushort)DAT_0d04) * (_DAT_0dde >> 0x10);
    DAT_0a0e = extraout_A_07;
    if (uVar2 < 0x40000000) {
      bVar15 = (byte)(uVar2 >> 0x10);
      DAT_0cfa = CONCAT11(((char)(uVar2 >> 0x18) << 1 | bVar15 >> 7) << 1 | (bVar15 & 0x7f) >> 6,
                          (bVar15 << 1 | (byte)(uVar2 >> 8) >> 7) << 1 |
                          (byte)((ushort)((short)uVar2 << 1) >> 0xf));
    }
    else {
      DAT_0cfa = 0xffff;
    }
  }
  else {
LAB_9429:
    DAT_0cf2 = DAT_0cf2 & 0xfd;
    if ((~DAT_0cf2 & 1) != 0) goto LAB_9438;
    DAT_0cfa = 0;
  }
  uVar17 = DAT_0cfa + DAT_0940;
  DAT_0cf8 = DAT_19dc;
  if (((!CARRY2(DAT_0cfa,DAT_0940)) && (uVar17 < DAT_19dc)) &&
     (DAT_0cf8 = uVar17, uVar17 < DAT_19da)) {
    DAT_0cf8 = DAT_19da;
  }
  DAT_0cf6 = DAT_0cf8 + DAT_095e;
  if (CARRY2(DAT_0cf8,DAT_095e)) {
    DAT_0cf6 = -1;
  }
  DAT_0d02 = DAT_0cfa;
  FUN_864e();
  iVar3 = (uint)DAT_0d02 * (uint)DAT_0cec * 2;
  uVar17 = (ushort)iVar3;
  sVar11 = uVar17 + 0x80;
  bVar15 = (byte)((uint)iVar3 >> 0x18);
  cVar7 = bVar15 + (0xff7f < uVar17);
  if (CONCAT11(bVar15 + CARRY1(bVar15,0xff7f < uVar17),cVar7) < 0x100) {
    RAM0x0ddf = CONCAT21(sVar11,(char)DAT_0de0);
    _DAT_0dde = CONCAT13(cVar7,RAM0x0ddf);
    DAT_0d00 = (ushort)DAT_0dde;
  }
  else {
    DAT_0d00 = 0xffff;
  }
  uVar17 = DAT_0d00 + DAT_095a;
  DAT_0cfe = DAT_19dc;
  if (((!CARRY2(DAT_0d00,DAT_095a)) && (uVar17 < DAT_19dc)) &&
     (DAT_0cfe = uVar17, uVar17 < DAT_19da)) {
    DAT_0cfe = DAT_19da;
  }
  DAT_0cfc = DAT_0cfe + DAT_095e;
  if (CARRY2(DAT_0cfe,DAT_095e)) {
    DAT_0cfc = -1;
  }
  if ((((~DAT_0d08 & 1) == 0) && ((~DAT_0884 & 2) == 0)) &&
     (((~DAT_0884 & 1) == 0 && ((~DAT_088c & 0x80) == 0)))) {
    if ((DAT_0d87 == '\t') && ((DAT_0896 & 0x1000) == 0)) {
      if (DAT_355a <= DAT_08ed) goto LAB_9566;
      goto LAB_9581;
    }
    if (DAT_08ed < DAT_355b) goto LAB_9581;
LAB_9566:
    if ((((DAT_0dd9 != -0x80) && ((~DAT_08b0 & 8) != 0)) || ((~DAT_08b1 & 0x10) != 0)) ||
       (((DAT_0ca8 & 1) == 0 || ((DAT_08b1 & 0x80) != 0)))) goto LAB_9581;
    if ((((~DAT_0cf2 & 1) == 0) && ((DAT_0cf2 & 2) != 0)) &&
       (((~DAT_0cf2 & 4) == 0 && (DAT_0da4 != '\0')))) {
      DAT_0cf3 = 0;
      DAT_0cf2 = DAT_0cf2 | 1;
    }
  }
  else {
LAB_9581:
    DAT_0cf2 = DAT_0cf2 & 0xfe;
  }
  DAT_08c0 = DAT_08c0 & 0xbf;
  sVar12 = DAT_0c8a - (short)DAT_0c8e;
  if (DAT_0c8a < DAT_0c8e) {
    sVar12 = CONCAT11((~(byte)((ushort)sVar12 >> 8) + 1) - ((char)-(char)sVar12 != '\0'),
                      -(char)sVar12);
    uVar8 = scale_u16_by_u8(sVar11,sVar12);
    sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8)
    ;
  }
  else {
    sVar11 = scale_u16_by_u8(sVar11,sVar12);
  }
  DAT_0c8e = (undefined *)(sVar11 + (short)DAT_0c8e);
  if ((DAT_0ca8 & 1) == 0) {
    DAT_0c96 = DAT_0c98;
  }
  else {
    sVar11 = DAT_0c94 - DAT_0c96;
    if (DAT_0c94 < DAT_0c96) {
      uVar8 = scale_u16_by_u8(sVar12,CONCAT11((~(byte)((ushort)sVar11 >> 8) + 1) -
                                              ((char)-(char)sVar11 != '\0'),-(char)sVar11));
      sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),
                        -(char)uVar8);
    }
    else {
      sVar11 = scale_u16_by_u8(sVar12,sVar11);
    }
    DAT_0c96 = sVar11 + DAT_0c96;
  }
  lookup_u8_uniform_u16_axis();
  puVar4 = DAT_0c8e + -0x1eb7;
  if (DAT_0c8e < &UNK_1eb7) {
    iVar3 = (uint)CONCAT11((~(byte)((ushort)puVar4 >> 8) + 1) - ((char)-(char)puVar4 != '\0'),
                           -(char)puVar4) * (uint)extraout_A_08 * 2;
    uVar17 = (ushort)iVar3;
    sVar11 = uVar17 + 0x80;
    bVar15 = (byte)((uint)iVar3 >> 0x18);
    cVar7 = bVar15 + (0xff7f < uVar17);
    if (CONCAT11(bVar15 + CARRY1(bVar15,0xff7f < uVar17),cVar7) < 0x100) {
      RAM0x0ddf = CONCAT21(sVar11,(char)DAT_0de0);
      _DAT_0dde = CONCAT13(cVar7,RAM0x0ddf);
      DAT_0c90 = &UNK_1eb7 + -(short)DAT_0dde;
      if (DAT_0dde < &UNK_1eb8) goto LAB_965e;
    }
    DAT_0c90 = (undefined *)0x0;
  }
  else {
    iVar3 = ZEXT24(puVar4) * (uint)extraout_A_08 * 2;
    uVar17 = (ushort)iVar3;
    sVar11 = uVar17 + 0x80;
    bVar15 = (byte)((uint)iVar3 >> 0x18);
    cVar7 = bVar15 + (0xff7f < uVar17);
    if (CONCAT11(bVar15 + CARRY1(bVar15,0xff7f < uVar17),cVar7) < 0x100) {
      RAM0x0ddf = CONCAT21(sVar11,(char)DAT_0de0);
      _DAT_0dde = CONCAT13(cVar7,RAM0x0ddf);
      DAT_0c90 = &UNK_1eb7 + (short)DAT_0dde;
      if (DAT_0dde < 0xe149) goto LAB_965e;
    }
    DAT_0c90 = (undefined *)0xffff;
  }
LAB_965e:
  DAT_0c92 = extraout_A_08;
  FUN_cc30();
  if (DAT_4a31 < DAT_08f4) {
    if (DAT_4a32 <= DAT_08f4) {
      DAT_0885 = DAT_0885 & 0xfb;
    }
  }
  else {
    DAT_0885 = DAT_0885 | 4;
  }
  if (DAT_0a2e._0_1_ < DAT_0d7c) {
    if ((DAT_0a2e._0_1_ < DAT_4240) || (DAT_0a82 != '@')) {
      DAT_088d = DAT_088d & 0xdf;
    }
    else {
      DAT_088d = DAT_088d | 0x20;
    }
    if (DAT_0a2e._0_1_ < DAT_4a30) {
      DAT_0880 = DAT_0880 & 0xfb;
      goto LAB_96f1;
    }
    if (DAT_4a2e < DAT_08ed) {
      DAT_0a8a = 0;
      goto LAB_96f1;
    }
    DAT_0a8a = (DAT_0a8a + 1) - (0xfe < DAT_0a8a);
    if (((((DAT_0a8a <= DAT_4a2f) || (DAT_0a89 < DAT_08ec)) || ((~DAT_08af & 8) != 0)) ||
        (((~DAT_08af & 4) != 0 || ((DAT_0d87 == '\t' && ((~DAT_0896._0_1_ & 0x10) != 0)))))) ||
       ((DAT_0885 & 4) == 0)) goto LAB_96f1;
    DAT_0885 = DAT_0885 | 0x20;
  }
  else {
    DAT_0880 = DAT_0880 | 4;
    DAT_088d = DAT_088d & 0xdf;
LAB_96f1:
    DAT_0885 = DAT_0885 & 0xdf;
  }
  DAT_0b20 = (DAT_0b20 + 1) - (0xfe < DAT_0b20);
  DAT_0b1e = (DAT_0b1e + 1) - (0xfe < DAT_0b1e);
  DAT_0b1f = (DAT_0b1f + 1) - (0xfe < DAT_0b1f);
  DAT_0b1d = (DAT_0b1d + 1) - (0xfe < DAT_0b1d);
  DAT_0afd = (DAT_0afd + 1) - (0xfe < DAT_0afd);
  if ((~DAT_0881 & 0x10) == 0) {
    DAT_0afe = (DAT_0afe + 1) - (0xfe < DAT_0afe);
  }
  else {
    DAT_0afe = '\0';
  }
  if (((~DAT_0880 & 1) == 0) && ((~DAT_0885 & 0x40) == 0)) {
    DAT_0b5d = '\0';
  }
  else {
    DAT_0b5d = (DAT_0b5d + 1) - (0xfe < DAT_0b5d);
  }
  if ((~DAT_09a1 & 1) == 0) {
    DAT_09ab = (DAT_09ab + 1) - (0xfe < DAT_09ab);
    DAT_09aa = '\0';
  }
  else {
    DAT_09aa = (DAT_09aa + 1) - (0xfe < DAT_09aa);
    DAT_09ab = '\0';
  }
  DAT_091b = (DAT_091b + 1) - (0xfe < DAT_091b);
  DAT_091c = (DAT_091c + 1) - (0xfe < DAT_091c);
  DAT_091d = (DAT_091d + 1) - (0xfe < DAT_091d);
  DAT_091e = (DAT_091e + 1) - (0xfe < DAT_091e);
  DAT_091f = (DAT_091f + 1) - (0xfe < DAT_091f);
  DAT_0920 = (DAT_0920 + 1) - (0xfe < DAT_0920);
  DAT_0b09 = (DAT_0b09 + 1) - (0xfe < DAT_0b09);
  if ((DAT_0893 & 0x80) == 0) {
LAB_9802:
    DAT_0be7 = 0;
  }
  else {
    DAT_0be7 = (DAT_0be7 + 1) - (0xfe < DAT_0be7);
    if (DAT_4f15 < DAT_0be7) {
      DAT_0893 = DAT_0893 & 0x7f;
      goto LAB_9802;
    }
  }
  DAT_0a9f = DAT_4b9e;
  if (DAT_0900._0_1_ < DAT_4b9c) {
    DAT_0a9f = DAT_4b9d;
  }
  if ((DAT_08ce._0_1_ < DAT_0a9e) || ((byte)(DAT_08ce._0_1_ - DAT_0a9e) < DAT_4b99)) {
    DAT_0a9d = 0;
LAB_984d:
    if ((DAT_0aa0 == '\0') || (DAT_0aa0 = DAT_0aa0 + -1, DAT_0aa0 == '\0')) {
      DAT_0aa0 = DAT_4b9a;
      bVar1 = DAT_0a9c < DAT_4b9b;
      DAT_0a9c = DAT_0a9c - DAT_4b9b;
      if (bVar1) {
        DAT_0a9c = 0;
      }
    }
  }
  else {
    sVar12 = (ushort)(byte)((DAT_08ce._0_1_ - DAT_0a9e) - DAT_4b99) * (ushort)DAT_0a9f;
    if ((char)((ushort)sVar12 >> 8) != '\0') {
      sVar12 = 0xff;
    }
    DAT_0a9d = (byte)sVar12;
    if ((DAT_0a9d < DAT_0a9c) || (DAT_0a9d == DAT_0a9c)) goto LAB_984d;
    DAT_0a9c = DAT_0a9d;
    if (DAT_4b9f <= DAT_0a9d) {
      DAT_0a9c = DAT_4b9f;
    }
  }
  DAT_0a9e = DAT_08ce._0_1_;
  sVar12 = DAT_0900 - DAT_0aa8;
  if (DAT_0900 < DAT_0aa8) {
    uVar8 = scale_u16_by_u8_rounded
                      (sVar11,CONCAT11((~(byte)((ushort)sVar12 >> 8) + 1) -
                                       ((char)-(char)sVar12 != '\0'),-(char)sVar12));
    sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8)
    ;
  }
  else {
    sVar11 = scale_u16_by_u8_rounded(sVar11,sVar12);
  }
  sVar12 = DAT_0ab4;
  sVar11 = sVar11 + DAT_0aa8;
  if ((DAT_0af7 & 1) == 0) {
    DAT_0aaa = (DAT_0aaa + 1) - (0xfe < DAT_0aaa);
    DAT_0aab = (DAT_0aab + 1) - (0xfe < DAT_0aab);
  }
  if ((DAT_4af7 < DAT_0abe) && (DAT_0abe < DAT_4af8)) {
    bVar15 = DAT_0aa6 | 0x80;
  }
  else {
    bVar15 = DAT_0aa6 & 0x7f;
    if ((DAT_0aa6 & 0x40) != 0) {
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar15 = DAT_0aa6 & 0xf;
    }
  }
  DAT_0aa6 = bVar15;
  DAT_0aa8 = sVar11;
  if ((((~DAT_0aa6 & 8) == 0) && ((~DAT_0aa6 & 4) == 0)) && ((~DAT_0aa6 & 2) == 0)) {
    DAT_0aa8._0_1_ = (byte)((ushort)sVar11 >> 8);
    if (DAT_0d87 == '\t') {
      if (DAT_0898 == DAT_4af9) {
        if (DAT_4afd <= DAT_0aaa) {
          DAT_0aa6 = DAT_0aa6 | 0x20;
          DAT_0aa7 = DAT_0aa7 | 8;
          FUN_997a();
          return;
        }
      }
      else {
        DAT_0aaa = 0;
        if ((DAT_0aa6 & 0x20) != 0) {
          DAT_0aa7 = DAT_0aa7 & 0xf7;
          DAT_0aa6 = DAT_0aa6 & 0x9f | 2;
          goto LAB_9a25;
        }
      }
    }
    else if ((DAT_0aa8._0_1_ < DAT_4afb) || (DAT_4afc <= DAT_0aa8._0_1_)) {
      DAT_0aaa = 0;
      if ((DAT_0aa6 & 0x20) != 0) {
        DAT_0aa7 = DAT_0aa7 & 0xf7;
        DAT_0aa6 = DAT_0aa6 & 0x9f | 2;
        goto LAB_9a25;
      }
    }
    else if (DAT_4afd <= DAT_0aaa) {
      DAT_0aa6 = DAT_0aa6 | 0x20;
      DAT_0aa7 = DAT_0aa7 | 8;
      FUN_997a();
      return;
    }
    if (DAT_0d87 == '\t') {
      if (DAT_0898 == DAT_4afa) {
        if (DAT_4afd <= DAT_0aab) {
          DAT_0aa6 = DAT_0aa6 | 0x10;
          DAT_0aa7 = DAT_0aa7 | 4;
        }
LAB_99b5:
        DAT_0aa6 = DAT_0aa6 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      if ((DAT_0aa6 & 0x10) == 0) goto LAB_99b5;
      DAT_0aa7 = DAT_0aa7 & 0xfb;
      DAT_0aa6 = DAT_0aa6 & 0xaf | 2;
    }
    else {
      if ((DAT_4afe <= DAT_0aa8._0_1_) && (DAT_0aa8._0_1_ < DAT_4aff)) {
        if (DAT_4afd <= DAT_0aab) {
          DAT_0aa6 = DAT_0aa6 | 0x10;
          DAT_0aa7 = DAT_0aa7 | 4;
        }
LAB_99f2:
        DAT_0aa6 = DAT_0aa6 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      if ((DAT_0aa6 & 0x10) == 0) goto LAB_99f2;
      DAT_0aa7 = DAT_0aa7 & 0xfb;
      DAT_0aa6 = DAT_0aa6 & 0xaf | 2;
    }
  }
LAB_9a25:
  if ((DAT_0aa6 & 8) != 0) {
    if (DAT_0aaa < DAT_4b01) {
      if (DAT_4b02 <= DAT_08e8._0_1_) {
        DAT_0aaa = 0;
        DAT_0aa6 = DAT_0aa6 & 0xf7 | 4;
      }
    }
    else {
      DAT_0aaa = 0;
      DAT_0aab = 0;
      DAT_0aa6 = DAT_0aa6 & 0x87 | 2;
    }
  }
  if ((DAT_0aa6 & 4) != 0) {
    DAT_0aac = DAT_4b05;
    if ((DAT_0aa7 & 8) != 0) {
      DAT_0aac = DAT_4b04;
    }
    if ((DAT_08e8._0_1_ < DAT_4b02) || (DAT_4b06 <= DAT_0aaa)) {
      DAT_0aa7 = DAT_0aa7 | 2;
      DAT_0aa6 = DAT_0aa6 & 0xfb | 3;
    }
  }
  if ((~DAT_0aa6 & 2) != 0) {
    if (((DAT_0aa6 & 1) != 0) &&
       (DAT_0aae = (DAT_0aae + 1) - (0xfe < DAT_0aae), DAT_4b07 <= DAT_0aae)) {
      DAT_0aae = 0;
      DAT_0aad = (DAT_0aad + 1) - (0xfe < DAT_0aad);
      bVar15 = DAT_0aac;
      if ((DAT_0aa7 & 2) != 0) {
        bVar6 = DAT_4b05;
        if ((DAT_0aa7 & 8) != 0) {
          bVar6 = DAT_4b04;
        }
        bVar15 = bVar6 + DAT_0aad;
        if (CARRY1(bVar6,DAT_0aad)) {
          bVar15 = 0xff;
        }
        if (DAT_0a83 <= bVar15) {
          DAT_0aa7 = DAT_0aa7 & 0xfd;
          bVar15 = DAT_0aac;
        }
      }
      DAT_0aac = bVar15;
      if ((~DAT_0aa7 & 2) == 0) {
        DAT_0aa6 = DAT_0aa6 & 0xfe;
        DAT_0aad = 0;
        DAT_0aa7 = DAT_0aa7 & 0xf3;
      }
    }
    if ((~DAT_0aa6 & 1) == 0) {
      DAT_0aa6 = DAT_0aa6 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  DAT_0ab6 = DAT_0ab4;
  DAT_0ab4 = DAT_0ab0;
  sVar12 = DAT_0ab0 - sVar12;
  if ((~DAT_0ab2 & 4) == 0) {
    sVar12 = 0;
  }
  if ((char)((ushort)sVar12 >> 8) != '\0') {
    sVar12 = 0xff;
  }
  DAT_0ab3 = (byte)sVar12;
  iVar3 = (uint)DAT_4bd4 * (uint)DAT_0ab3;
  DAT_0de0 = CONCAT11((char)((uint)iVar3 >> 8) - ((byte)iVar3 < DAT_0aba),(byte)iVar3 - DAT_0aba);
  if ((char)((uint)iVar3 >> 0x10) != '\0') {
    DAT_0de0 = 0xffff;
  }
  _DAT_0dde = CONCAT22((short)((uint)iVar3 >> 0x10),DAT_0de0);
  sVar11 = (short)((uint)DAT_4bd6 * (uint)DAT_0de0 >> 0x10);
  uVar8 = (undefined2)((uint)DAT_4bd6 * (uint)DAT_0de0);
  if (sVar11 != 0) {
    uVar8 = 0xffff;
  }
  bVar15 = (byte)((ushort)uVar8 >> 8);
  bVar6 = (byte)uVar8;
  if ((DAT_0ab2 & 1) == 0) {
    cVar7 = bVar6 + (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar15 + CARRY1(bVar6,(byte)DAT_0ab8);
    if (CARRY1(bVar15,CARRY1(bVar6,(byte)DAT_0ab8))) {
      cVar7 = -1;
      DAT_0ab8._0_1_ = 0xff;
    }
  }
  else {
    cVar7 = bVar6 - (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar15 - (bVar6 < (byte)DAT_0ab8);
  }
  bVar15 = DAT_0aba + DAT_0ab8._0_1_;
  if (CARRY1(DAT_0aba,DAT_0ab8._0_1_)) {
    bVar15 = 0xff;
  }
  if (bVar15 < DAT_0abe) {
    sVar12 = (ushort)(byte)-(bVar15 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar6 = (byte)((ushort)sVar12 >> 8);
    bVar14 = (byte)sVar12;
    if ((DAT_0ab2 & 2) == 0) {
      _DAT_0abc = CONCAT11(bVar6 - (bVar14 < DAT_0abd),bVar14 - DAT_0abd);
    }
    else {
      bVar1 = CARRY1(bVar14,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar6 + bVar1,bVar14 + DAT_0abd);
      if (CARRY1(bVar6,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    DAT_0ab2 = DAT_0ab2 & 0xfe | 6;
  }
  else {
    sVar12 = (ushort)(byte)(bVar15 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar6 = (byte)((ushort)sVar12 >> 8);
    bVar14 = (byte)sVar12;
    if ((DAT_0ab2 & 2) == 0) {
      bVar1 = CARRY1(bVar14,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar6 + bVar1,bVar14 + DAT_0abd);
      if (CARRY1(bVar6,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    else {
      _DAT_0abc = CONCAT11(bVar6 - (bVar14 < DAT_0abd),bVar14 - DAT_0abd);
    }
    DAT_0ab2 = DAT_0ab2 & 0xfc | 4;
  }
  if ((DAT_0ab2 & 2) == 0) {
    bVar6 = DAT_0abe + DAT_0abc;
    if (CARRY1(DAT_0abe,DAT_0abc)) {
      bVar6 = 0xff;
    }
  }
  else {
    bVar6 = DAT_0abe - DAT_0abc;
    if (DAT_0abe < DAT_0abc) {
      bVar6 = 0;
    }
  }
  if ((DAT_4ba7 != -0x80) ||
     ((((DAT_0d87 == '\t' && ((~DAT_0896._0_1_ & 0x10) != 0)) || (DAT_4ba8 <= DAT_0900._0_1_)) ||
      (DAT_4ba9 <= DAT_08ce._0_1_)))) {
    DAT_0aaf = 0;
    DAT_088d = DAT_088d & 0xbf;
  }
  if ((DAT_0af7 == 0) && (DAT_0aaf = (DAT_0aaf + 1) - (0xfe < DAT_0aaf), DAT_4baa <= DAT_0aaf)) {
    DAT_088d = DAT_088d | 0x40;
  }
  DAT_0aba = bVar15;
  DAT_0abe = bVar6;
  DAT_0ab8._1_1_ = cVar7;
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d49)) {
    if (DAT_0d87 == '\t') {
      if ((((DAT_08f4 < DAT_4c03) || ((ushort)DAT_4c04 << 8 < DAT_0992)) || (DAT_4c06 < DAT_0982))
         || ((~DAT_0881 & 0x20) != 0)) {
LAB_9d2a:
        DAT_0acf = 0;
LAB_9d2b:
        if (((((~DAT_09a1 & 0x80) == 0) && ((~DAT_08a0 & 0x20) == 0)) &&
            (((~DAT_08b0 & 0x10) == 0 &&
             ((((~DAT_08b0 & 4) == 0 && ((~DAT_08b0 & 2) == 0)) && ((~DAT_08b1 & 0x80) == 0)))))) &&
           ((~DAT_08b1 & 0x40) == 0)) goto LAB_9d51;
      }
      else {
        if ((~DAT_0896._0_1_ & 0x10) != 0) {
          if ((&DAT_4e11)[DAT_0898] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        if ((DAT_0acd == '\0') || (FUN_a3b4(), DAT_0ace == '\0')) goto LAB_9d2a;
        if (DAT_0acf < DAT_4c02) {
          DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
          goto LAB_9d2b;
        }
        DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
      }
      bVar15 = DAT_00f0;
      DAT_00f0 = bVar15 | 2;
      DAT_0889 = DAT_0889 | 0x80;
    }
    else {
LAB_9d51:
      bVar15 = DAT_00f0;
      DAT_00f0 = bVar15 & 0xfd;
      DAT_0889 = DAT_0889 & 0x7f;
    }
  }
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d4c)) {
    if ((DAT_4e1b == 0xff) || ((ushort)DAT_4e1b << 8 < DAT_0a2e)) {
      DAT_0b91 = 0;
    }
    else {
      if (DAT_4e95 <= DAT_0b91) {
        DAT_0b90 = DAT_0b90 | 0x80;
      }
      DAT_0b91 = (DAT_0b91 + 1) - (0xfe < DAT_0b91);
    }
    if (((ushort)DAT_4e1a << 8 < DAT_0a2e) && (DAT_4e1a != 0xff)) {
      if ((DAT_0b90 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        if ((DAT_0d87 != '\t') && ((DAT_088c & 0x80) != 0)) {
          DAT_0b90 = DAT_0b90 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        if ((~DAT_0880 & 1) == 0) goto LAB_9dc5;
      }
      bVar15 = DAT_00f0;
      DAT_00f0 = bVar15 & 0xef;
    }
    else {
LAB_9dc5:
      bVar15 = DAT_00f0;
      DAT_00f0 = bVar15 | 0x10;
    }
  }
  if (((DAT_0880 & 1) == 0) ||
     (((((~DAT_08af & 0x40) == 0 && ((~DAT_08af & 2) == 0)) &&
       ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))) &&
      ((((~DAT_08b1 & 0x10) == 0 && ((~DAT_08b2 & 0x80) == 0)) && ((~DAT_08b4 & 8) == 0)))))) {
    DAT_0884 = DAT_0884 & 0xdf;
  }
  else {
    DAT_0884 = DAT_0884 | 0x20;
  }
  if ((DAT_0884 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    DAT_0b6f = (DAT_0b6f + 1) - (0xfe < DAT_0b6f);
    if (DAT_4e38 <= DAT_0b6f) {
      if ((~DAT_0888 & 8) == 0) {
        DAT_0888 = DAT_0888 | 8;
      }
      else {
        DAT_0888 = DAT_0888 & 0xf7;
      }
      goto LAB_9e24;
    }
  }
  if (((~DAT_0889 & 2) != 0) &&
     (DAT_0bd1 = (DAT_0bd1 + 1) - (0xfe < DAT_0bd1), DAT_4e66 <= DAT_0bd1)) {
    DAT_0bd1 = 0;
    DAT_0b94 = (DAT_0b94 + 1) - (0xfe < DAT_0b94);
  }
  if ((DAT_0b9a != 0xff) && (DAT_4e3a <= DAT_0b98)) {
    DAT_0b98 = 0;
    DAT_0b9a = (DAT_0b9a + 1) - (0xfe < DAT_0b9a);
    if (4 < DAT_0b9a) {
      DAT_08b8 = DAT_08af;
      DAT_08b9 = DAT_08b0;
      DAT_08ba = DAT_08b1;
      DAT_08bb = DAT_08b2;
      DAT_0bd2 = DAT_0bd2 | 0xf;
      DAT_0b9a = 0xff;
    }
    DAT_0be8 = DAT_0be8 | 0x40;
  }
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    DAT_0d0a = (DAT_0d0a + 1) - (0xfe < DAT_0d0a);
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) &&
     (DAT_0d0b = (DAT_0d0b + 1) - (0xfe < DAT_0d0b), DAT_0d0b <= DAT_4f16)) {
    bVar15 = DAT_0d09 + DAT_0ab3;
    if (CARRY1(DAT_0d09,DAT_0ab3)) {
      bVar15 = 0xff;
    }
    DAT_0d09 = bVar15;
    if ((DAT_4f16 <= DAT_0d0b) && (bVar15 <= DAT_4e84)) {
      DAT_0d08 = DAT_0d08 | 9;
    }
  }
  uVar17 = (ushort)DAT_08d9 * 0x100;
  if ((~DAT_0881 & 0x10) == 0) {
    sVar12 = uVar17 - DAT_08da;
    if (uVar17 < DAT_08da) {
      uVar8 = scale_u16_by_u8(sVar11,CONCAT11((~(byte)((ushort)sVar12 >> 8) + 1) -
                                              ((char)-(char)sVar12 != '\0'),-(char)sVar12));
      sVar11 = CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),
                        -(char)uVar8);
    }
    else {
      sVar11 = scale_u16_by_u8(sVar11,sVar12);
    }
    uVar17 = sVar11 + DAT_08da;
  }
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       ((DAT_4e28 < DAT_08ec ||
        ((((DAT_4e29 < DAT_0abe || (DAT_0900 < DAT_4e1e)) || ((~DAT_08af & 8) != 0)) ||
         ((~DAT_08af & 4) != 0)))))) {
      DAT_0adb = DAT_0adb & 0x7f;
      DAT_0adc = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x80;
      if (DAT_4e2a <= DAT_0adc) {
        DAT_0ada = DAT_0ada | 0x80;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    if ((DAT_4e28 < DAT_08ec) || (DAT_4e2b < DAT_0abe)) {
      DAT_0ada = DAT_0ada & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      if ((DAT_0ada & 0x40) != 0) {
        DAT_0ada = DAT_0ada | 0x20;
      }
      if ((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) ||
         ((DAT_0900 < DAT_4e20 || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))))) {
        if ((DAT_0ada & 0x10) != 0) {
          DAT_0ada = DAT_0ada & 0xef;
          DAT_0ae1 = 0;
        }
        if ((DAT_0ada & 0x40) != 0) {
          if ((~DAT_0ada & 8) == 0) {
            if (((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) || (DAT_4e22 < DAT_0900))
               || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))) goto LAB_a04f;
            DAT_0ada = DAT_0ada | 8;
          }
          if ((((~DAT_0ada & 0x80) != 0) || ((DAT_08b1 & 0x20) != 0)) &&
             ((DAT_0900 < DAT_4e20 && (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))))) {
            DAT_0ada = DAT_0ada & 0xef | 100;
            goto LAB_a04f;
          }
        }
        if ((DAT_0ada & 4) != 0) {
          DAT_0ada = DAT_0ada & 0xfb;
          DAT_0ae1 = 0;
        }
      }
      else {
        DAT_0ada = DAT_0ada & 0xf3 | 0x70;
      }
    }
  }
LAB_a04f:
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       (((DAT_4e28 < DAT_08ec ||
         (((DAT_4e29 < DAT_0abe || (DAT_4e24 <= DAT_0900)) || ((~DAT_08af & 8) != 0)))) ||
        ((((~DAT_08af & 4) != 0 || (DAT_0ad6 != 0)) || (DAT_0ad9 != '\0')))))) {
      DAT_0adb = DAT_0adb & 0xbf;
      DAT_0add = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x40;
      if (DAT_4e31 <= DAT_0add) {
        DAT_0ada = DAT_0ada & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = '\0';
        DAT_0ae1 = 0;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    bVar15 = DAT_0bd2;
    if (DAT_0d5f != -0x80) {
      if ((DAT_0ada & 0x40) == 0) {
        DAT_0adb = DAT_0adb & 0xdf;
        DAT_0ade = 0;
      }
      else {
        DAT_0adb = DAT_0adb | 0x20;
        if ((DAT_4e57 <= DAT_0ade) && ((~DAT_08b1 & 0x20) == 0)) {
          DAT_08b1 = DAT_08b1 | 0x20;
          bVar15 = DAT_0bd2 | 0x20;
          if ((~DAT_08ba & 0x20) == 0) {
            DAT_08ba = DAT_08ba | 0x20;
            bVar15 = DAT_0bd2 | 0x22;
          }
        }
      }
    }
    DAT_0bd2 = bVar15;
    if ((DAT_0881 & 0x10) == 0) {
      bVar15 = DAT_0adb | 0x10;
      if (((DAT_4e57 <= DAT_0adf) &&
          ((((~DAT_088d & 0x20) != 0 || ((~DAT_0885 & 0x20) != 0)) ||
           (((~DAT_0889 & 2) == 0 && (((~DAT_0880 & 4) == 0 && ((~DAT_0aa6 & 4) == 0)))))))) &&
         ((((~DAT_0ada & 0x80) != 0 || ((DAT_08b1 & 0x20) != 0)) &&
          ((((((DAT_08ec <= DAT_4e28 && (DAT_0abe <= DAT_4e29)) && (DAT_0900 < DAT_4e24)) &&
             (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))) && (DAT_0ad6 == 0)) &&
           (DAT_0ad9 == '\0')))))) {
        DAT_0adb = DAT_0adb | 0x18;
        if (((DAT_4e31 <= DAT_0ae0) && (DAT_0ada = DAT_0ada & 0x7f, DAT_0d5f != -0x80)) &&
           ((DAT_08b1 & 0x20) != 0)) {
          DAT_08b1 = DAT_08b1 & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
        goto LAB_a1ae;
      }
    }
    else {
      DAT_0adf = 0;
      bVar15 = DAT_0adb & 0xef;
    }
    DAT_0adb = bVar15;
    DAT_0adb = DAT_0adb & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  DAT_08da = uVar17;
  FUN_5fc8();
  if ((~DAT_0891 & 2) == 0) {
    if ((DAT_0891 & 0x80) == 0) {
LAB_a24a:
      if (DAT_0bd2 == 0) {
LAB_a26f:
        if (DAT_0be8 != 0) {
          if ((DAT_0be8 & 0x80) == 0) {
            if ((DAT_0be8 & 0x40) == 0) {
              if ((DAT_0be8 & 4) != 0) goto LAB_a2b4;
            }
            else {
LAB_a2af:
              FUN_b78f();
            }
          }
          else {
LAB_a296:
            FUN_b758();
          }
        }
      }
      else if ((DAT_0bd2 & 0x80) == 0) {
        if ((DAT_0bd2 & 0x40) == 0) {
          if ((DAT_0bd2 & 0x20) == 0) {
            if ((DAT_0bd2 & 0x10) == 0) {
              if ((DAT_0bd2 & 8) == 0) {
                if ((DAT_0bd2 & 4) == 0) {
                  if ((DAT_0bd2 & 2) == 0) {
                    if ((DAT_0bd2 & 1) != 0) goto LAB_a2aa;
                    goto LAB_a26f;
                  }
LAB_a2a5:
                  FUN_b6ea();
                }
                else {
LAB_a2a0:
                  FUN_b6b3();
                }
              }
              else {
LAB_a29b:
                FUN_b67c();
              }
            }
            else {
LAB_a291:
              FUN_b645();
            }
          }
          else {
LAB_a28c:
            FUN_b60e();
          }
        }
        else {
LAB_a287:
          FUN_b5d7();
        }
      }
      else {
LAB_a282:
        FUN_b5a0();
      }
    }
    else if ((~DAT_088f & 0x80) == 0) {
      if ((~DAT_088f & 0x40) == 0) goto LAB_a24a;
      FUN_b4c6();
    }
    else {
      FUN_b3ec();
    }
  }
  else if ((DAT_0891 & 0x80) == 0) {
LAB_a1d9:
    if (DAT_0bd3 == 0) {
LAB_a20e:
      if (DAT_0be9 != 0) {
        if ((DAT_0be9 & 0x80) != 0) goto LAB_a296;
        if ((DAT_0be9 & 0x40) != 0) goto LAB_a2af;
        if ((DAT_0be9 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
        FUN_b7b9();
      }
    }
    else {
      if ((DAT_0bd3 & 0x80) != 0) goto LAB_a282;
      if ((DAT_0bd3 & 0x40) != 0) goto LAB_a287;
      if ((DAT_0bd3 & 0x20) != 0) goto LAB_a28c;
      if ((DAT_0bd3 & 0x10) != 0) goto LAB_a291;
      if ((DAT_0bd3 & 8) != 0) goto LAB_a29b;
      if ((DAT_0bd3 & 4) != 0) goto LAB_a2a0;
      if ((DAT_0bd3 & 2) != 0) goto LAB_a2a5;
      if ((DAT_0bd3 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
      FUN_b721();
    }
  }
  else if ((~DAT_0890 & 0x80) == 0) {
    if ((~DAT_0890 & 0x40) == 0) goto LAB_a1d9;
    FUN_b4c6();
  }
  else {
    FUN_b3ec();
  }
LAB_a2b9:
  bVar15 = DAT_0000;
  bVar15 = bVar15 & 0xe0;
  if (bVar15 == 0x80) {
    if (((DAT_08b1 & 0x80) != 0x80) || (bVar15 = DAT_0000, (bVar15 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar15 != 0) {
    if (((bVar15 == 0x40) && ((DAT_08b1 & 0x80) == 0x80)) &&
       (bVar15 = DAT_0000, (bVar15 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  if (((DAT_08b1 & 0x80) == 0x80) && (bVar15 = DAT_0000, (bVar15 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  DAT_08bc = DAT_08bc & 0xf7;
  return;
}


/* Entry 96f7 */

/* WARNING: Removing unreachable block (RAM,0x9c19) */
/* WARNING: Removing unreachable block (RAM,0x9b8d) */
/* WARNING: Removing unreachable block (RAM,0x9b50) */
/* WARNING: Removing unreachable block (RAM,0x9b57) */
/* WARNING: Removing unreachable block (RAM,0x9b59) */
/* WARNING: Removing unreachable block (RAM,0x9b6c) */
/* WARNING: Removing unreachable block (RAM,0x9b6f) */
/* WARNING: Removing unreachable block (RAM,0x9b80) */
/* WARNING: Removing unreachable block (RAM,0x9b74) */
/* WARNING: Removing unreachable block (RAM,0x9b7b) */
/* WARNING: Removing unreachable block (RAM,0x9b87) */
/* WARNING: Removing unreachable block (RAM,0x9b95) */
/* WARNING: Removing unreachable block (RAM,0x9bb8) */
/* WARNING: Removing unreachable block (RAM,0x9c36) */
/* WARNING: Removing unreachable block (RAM,0x9bdb) */
/* WARNING: Removing unreachable block (RAM,0x9be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_unreferenced_96f7(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  char cVar8;
  short sVar6;
  byte bVar9;
  byte bVar10;
  ushort uVar7;
  undefined2 uVar11;
  
  DAT_0880 = DAT_0880 | 4;
  DAT_0b20 = (DAT_0b20 + 1) - (0xfe < DAT_0b20);
  DAT_0b1e = (DAT_0b1e + 1) - (0xfe < DAT_0b1e);
  DAT_0b1f = (DAT_0b1f + 1) - (0xfe < DAT_0b1f);
  DAT_0b1d = (DAT_0b1d + 1) - (0xfe < DAT_0b1d);
  DAT_0afd = (DAT_0afd + 1) - (0xfe < DAT_0afd);
  if ((~DAT_0881 & 0x10) == 0) {
    DAT_0afe = (DAT_0afe + 1) - (0xfe < DAT_0afe);
  }
  else {
    DAT_0afe = '\0';
  }
  if (((~DAT_0880 & 1) == 0) && ((~DAT_0885 & 0x40) == 0)) {
    DAT_0b5d = '\0';
  }
  else {
    DAT_0b5d = (DAT_0b5d + 1) - (0xfe < DAT_0b5d);
  }
  if ((~DAT_09a1 & 1) == 0) {
    DAT_09ab = (DAT_09ab + 1) - (0xfe < DAT_09ab);
    DAT_09aa = '\0';
  }
  else {
    DAT_09aa = (DAT_09aa + 1) - (0xfe < DAT_09aa);
    DAT_09ab = '\0';
  }
  DAT_091b = (DAT_091b + 1) - (0xfe < DAT_091b);
  DAT_091c = (DAT_091c + 1) - (0xfe < DAT_091c);
  DAT_091d = (DAT_091d + 1) - (0xfe < DAT_091d);
  DAT_091e = (DAT_091e + 1) - (0xfe < DAT_091e);
  DAT_091f = (DAT_091f + 1) - (0xfe < DAT_091f);
  DAT_0920 = (DAT_0920 + 1) - (0xfe < DAT_0920);
  DAT_0b09 = (DAT_0b09 + 1) - (0xfe < DAT_0b09);
  if ((DAT_0893 & 0x80) == 0) {
LAB_9802:
    DAT_0be7 = 0;
  }
  else {
    DAT_0be7 = (DAT_0be7 + 1) - (0xfe < DAT_0be7);
    if (DAT_4f15 < DAT_0be7) {
      DAT_0893 = DAT_0893 & 0x7f;
      goto LAB_9802;
    }
  }
  DAT_0a9f = DAT_4b9e;
  if (DAT_0900._0_1_ < DAT_4b9c) {
    DAT_0a9f = DAT_4b9d;
  }
  if ((DAT_08ce._0_1_ < DAT_0a9e) || ((byte)(DAT_08ce._0_1_ - DAT_0a9e) < DAT_4b99)) {
    DAT_0a9d = 0;
LAB_984d:
    if ((DAT_0aa0 == '\0') || (DAT_0aa0 = DAT_0aa0 + -1, DAT_0aa0 == '\0')) {
      DAT_0aa0 = DAT_4b9a;
      bVar1 = DAT_0a9c < DAT_4b9b;
      DAT_0a9c = DAT_0a9c - DAT_4b9b;
      if (bVar1) {
        DAT_0a9c = 0;
      }
    }
  }
  else {
    sVar4 = (ushort)(byte)((DAT_08ce._0_1_ - DAT_0a9e) - DAT_4b99) * (ushort)DAT_0a9f;
    if ((char)((ushort)sVar4 >> 8) != '\0') {
      sVar4 = 0xff;
    }
    DAT_0a9d = (byte)sVar4;
    if ((DAT_0a9d < DAT_0a9c) || (DAT_0a9d == DAT_0a9c)) goto LAB_984d;
    DAT_0a9c = DAT_0a9d;
    if (DAT_4b9f <= DAT_0a9d) {
      DAT_0a9c = DAT_4b9f;
    }
  }
  DAT_0a9e = DAT_08ce._0_1_;
  sVar4 = DAT_0900 - DAT_0aa8;
  if (DAT_0900 < DAT_0aa8) {
    uVar11 = scale_u16_by_u8_rounded
                       (param_1,CONCAT11((~(byte)((ushort)sVar4 >> 8) + 1) -
                                         ((char)-(char)sVar4 != '\0'),-(char)sVar4));
    sVar4 = CONCAT11((~(byte)((ushort)uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                     -(char)uVar11);
  }
  else {
    sVar4 = scale_u16_by_u8_rounded(param_1,sVar4);
  }
  sVar6 = DAT_0ab4;
  sVar4 = sVar4 + DAT_0aa8;
  if ((DAT_0af7 & 1) == 0) {
    DAT_0aaa = (DAT_0aaa + 1) - (0xfe < DAT_0aaa);
    DAT_0aab = (DAT_0aab + 1) - (0xfe < DAT_0aab);
  }
  if ((DAT_4af7 < DAT_0abe) && (DAT_0abe < DAT_4af8)) {
    bVar10 = DAT_0aa6 | 0x80;
  }
  else {
    bVar10 = DAT_0aa6 & 0x7f;
    if ((DAT_0aa6 & 0x40) != 0) {
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar10 = DAT_0aa6 & 0xf;
    }
  }
  DAT_0aa6 = bVar10;
  DAT_0aa8 = sVar4;
  if ((((~DAT_0aa6 & 8) == 0) && ((~DAT_0aa6 & 4) == 0)) && ((~DAT_0aa6 & 2) == 0)) {
    DAT_0aa8._0_1_ = (byte)((ushort)sVar4 >> 8);
    if (DAT_0d87 == '\t') {
      if (DAT_0898 == DAT_4af9) {
        if (DAT_4afd <= DAT_0aaa) {
          DAT_0aa6 = DAT_0aa6 | 0x20;
          DAT_0aa7 = DAT_0aa7 | 8;
          FUN_997a();
          return;
        }
      }
      else {
        DAT_0aaa = 0;
        if ((DAT_0aa6 & 0x20) != 0) {
          DAT_0aa7 = DAT_0aa7 & 0xf7;
          DAT_0aa6 = DAT_0aa6 & 0x9f | 2;
          goto LAB_9a25;
        }
      }
    }
    else if ((DAT_0aa8._0_1_ < DAT_4afb) || (DAT_4afc <= DAT_0aa8._0_1_)) {
      DAT_0aaa = 0;
      if ((DAT_0aa6 & 0x20) != 0) {
        DAT_0aa7 = DAT_0aa7 & 0xf7;
        DAT_0aa6 = DAT_0aa6 & 0x9f | 2;
        goto LAB_9a25;
      }
    }
    else if (DAT_4afd <= DAT_0aaa) {
      DAT_0aa6 = DAT_0aa6 | 0x20;
      DAT_0aa7 = DAT_0aa7 | 8;
      FUN_997a();
      return;
    }
    if (DAT_0d87 == '\t') {
      if (DAT_0898 == DAT_4afa) {
        if (DAT_4afd <= DAT_0aab) {
          DAT_0aa6 = DAT_0aa6 | 0x10;
          DAT_0aa7 = DAT_0aa7 | 4;
        }
LAB_99b5:
        DAT_0aa6 = DAT_0aa6 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      if ((DAT_0aa6 & 0x10) == 0) goto LAB_99b5;
      DAT_0aa7 = DAT_0aa7 & 0xfb;
      DAT_0aa6 = DAT_0aa6 & 0xaf | 2;
    }
    else {
      if ((DAT_4afe <= DAT_0aa8._0_1_) && (DAT_0aa8._0_1_ < DAT_4aff)) {
        if (DAT_4afd <= DAT_0aab) {
          DAT_0aa6 = DAT_0aa6 | 0x10;
          DAT_0aa7 = DAT_0aa7 | 4;
        }
LAB_99f2:
        DAT_0aa6 = DAT_0aa6 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      if ((DAT_0aa6 & 0x10) == 0) goto LAB_99f2;
      DAT_0aa7 = DAT_0aa7 & 0xfb;
      DAT_0aa6 = DAT_0aa6 & 0xaf | 2;
    }
  }
LAB_9a25:
  if ((DAT_0aa6 & 8) != 0) {
    if (DAT_0aaa < DAT_4b01) {
      if (DAT_4b02 <= DAT_08e8._0_1_) {
        DAT_0aaa = 0;
        DAT_0aa6 = DAT_0aa6 & 0xf7 | 4;
      }
    }
    else {
      DAT_0aaa = 0;
      DAT_0aab = 0;
      DAT_0aa6 = DAT_0aa6 & 0x87 | 2;
    }
  }
  if ((DAT_0aa6 & 4) != 0) {
    DAT_0aac = DAT_4b05;
    if ((DAT_0aa7 & 8) != 0) {
      DAT_0aac = DAT_4b04;
    }
    if ((DAT_08e8._0_1_ < DAT_4b02) || (DAT_4b06 <= DAT_0aaa)) {
      DAT_0aa7 = DAT_0aa7 | 2;
      DAT_0aa6 = DAT_0aa6 & 0xfb | 3;
    }
  }
  if ((~DAT_0aa6 & 2) != 0) {
    if (((DAT_0aa6 & 1) != 0) &&
       (DAT_0aae = (DAT_0aae + 1) - (0xfe < DAT_0aae), DAT_4b07 <= DAT_0aae)) {
      DAT_0aae = 0;
      DAT_0aad = (DAT_0aad + 1) - (0xfe < DAT_0aad);
      bVar10 = DAT_0aac;
      if ((DAT_0aa7 & 2) != 0) {
        bVar3 = DAT_4b05;
        if ((DAT_0aa7 & 8) != 0) {
          bVar3 = DAT_4b04;
        }
        bVar10 = bVar3 + DAT_0aad;
        if (CARRY1(bVar3,DAT_0aad)) {
          bVar10 = 0xff;
        }
        if (DAT_0a83 <= bVar10) {
          DAT_0aa7 = DAT_0aa7 & 0xfd;
          bVar10 = DAT_0aac;
        }
      }
      DAT_0aac = bVar10;
      if ((~DAT_0aa7 & 2) == 0) {
        DAT_0aa6 = DAT_0aa6 & 0xfe;
        DAT_0aad = 0;
        DAT_0aa7 = DAT_0aa7 & 0xf3;
      }
    }
    if ((~DAT_0aa6 & 1) == 0) {
      DAT_0aa6 = DAT_0aa6 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  DAT_0ab6 = DAT_0ab4;
  DAT_0ab4 = DAT_0ab0;
  sVar6 = DAT_0ab0 - sVar6;
  if ((~DAT_0ab2 & 4) == 0) {
    sVar6 = 0;
  }
  if ((char)((ushort)sVar6 >> 8) != '\0') {
    sVar6 = 0xff;
  }
  DAT_0ab3 = (byte)sVar6;
  iVar2 = (uint)DAT_4bd4 * (uint)DAT_0ab3;
  uVar11 = (undefined2)((uint)iVar2 >> 0x10);
  DAT_0de0 = CONCAT11((char)((uint)iVar2 >> 8) - ((byte)iVar2 < DAT_0aba),(byte)iVar2 - DAT_0aba);
  DAT_0dde._1_1_ = (char)((uint)iVar2 >> 0x10);
  if ((char)DAT_0dde != '\0') {
    DAT_0de0 = 0xffff;
  }
  sVar4 = (short)((uint)DAT_4bd6 * (uint)DAT_0de0 >> 0x10);
  uVar5 = (undefined2)((uint)DAT_4bd6 * (uint)DAT_0de0);
  if (sVar4 != 0) {
    uVar5 = 0xffff;
  }
  bVar10 = (byte)((ushort)uVar5 >> 8);
  bVar3 = (byte)uVar5;
  if ((DAT_0ab2 & 1) == 0) {
    cVar8 = bVar3 + (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar10 + CARRY1(bVar3,(byte)DAT_0ab8);
    if (CARRY1(bVar10,CARRY1(bVar3,(byte)DAT_0ab8))) {
      cVar8 = -1;
      DAT_0ab8._0_1_ = 0xff;
    }
  }
  else {
    cVar8 = bVar3 - (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar10 - (bVar3 < (byte)DAT_0ab8);
  }
  bVar10 = DAT_0aba + DAT_0ab8._0_1_;
  if (CARRY1(DAT_0aba,DAT_0ab8._0_1_)) {
    bVar10 = 0xff;
  }
  if (bVar10 < DAT_0abe) {
    sVar6 = (ushort)(byte)-(bVar10 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar6 >> 8);
    bVar9 = (byte)sVar6;
    if ((DAT_0ab2 & 2) == 0) {
      _DAT_0abc = CONCAT11(bVar3 - (bVar9 < DAT_0abd),bVar9 - DAT_0abd);
    }
    else {
      bVar1 = CARRY1(bVar9,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar9 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    DAT_0ab2 = DAT_0ab2 & 0xfe | 6;
  }
  else {
    sVar6 = (ushort)(byte)(bVar10 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar6 >> 8);
    bVar9 = (byte)sVar6;
    if ((DAT_0ab2 & 2) == 0) {
      bVar1 = CARRY1(bVar9,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar9 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    else {
      _DAT_0abc = CONCAT11(bVar3 - (bVar9 < DAT_0abd),bVar9 - DAT_0abd);
    }
    DAT_0ab2 = DAT_0ab2 & 0xfc | 4;
  }
  if ((DAT_0ab2 & 2) == 0) {
    bVar3 = DAT_0abe + DAT_0abc;
    if (CARRY1(DAT_0abe,DAT_0abc)) {
      bVar3 = 0xff;
    }
  }
  else {
    bVar3 = DAT_0abe - DAT_0abc;
    if (DAT_0abe < DAT_0abc) {
      bVar3 = 0;
    }
  }
  if ((DAT_4ba7 != -0x80) ||
     ((((DAT_0d87 == '\t' && ((~DAT_0896._0_1_ & 0x10) != 0)) || (DAT_4ba8 <= DAT_0900._0_1_)) ||
      (DAT_4ba9 <= DAT_08ce._0_1_)))) {
    DAT_0aaf = 0;
    DAT_088d = DAT_088d & 0xbf;
  }
  if ((DAT_0af7 == 0) && (DAT_0aaf = (DAT_0aaf + 1) - (0xfe < DAT_0aaf), DAT_4baa <= DAT_0aaf)) {
    DAT_088d = DAT_088d | 0x40;
  }
  DAT_0aba = bVar10;
  DAT_0abe = bVar3;
  DAT_0dde = uVar11;
  DAT_0ab8._1_1_ = cVar8;
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d49)) {
    if (DAT_0d87 == '\t') {
      if ((((DAT_08f4 < DAT_4c03) || ((ushort)DAT_4c04 << 8 < DAT_0992)) || (DAT_4c06 < DAT_0982))
         || ((~DAT_0881 & 0x20) != 0)) {
LAB_9d2a:
        DAT_0acf = 0;
LAB_9d2b:
        if (((((~DAT_09a1 & 0x80) == 0) && ((~DAT_08a0 & 0x20) == 0)) &&
            (((~DAT_08b0 & 0x10) == 0 &&
             ((((~DAT_08b0 & 4) == 0 && ((~DAT_08b0 & 2) == 0)) && ((~DAT_08b1 & 0x80) == 0)))))) &&
           ((~DAT_08b1 & 0x40) == 0)) goto LAB_9d51;
      }
      else {
        if ((~DAT_0896._0_1_ & 0x10) != 0) {
          if ((&DAT_4e11)[DAT_0898] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        if ((DAT_0acd == '\0') || (FUN_a3b4(), DAT_0ace == '\0')) goto LAB_9d2a;
        if (DAT_0acf < DAT_4c02) {
          DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
          goto LAB_9d2b;
        }
        DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
      }
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 | 2;
      DAT_0889 = DAT_0889 | 0x80;
    }
    else {
LAB_9d51:
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 & 0xfd;
      DAT_0889 = DAT_0889 & 0x7f;
    }
  }
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d4c)) {
    if ((DAT_4e1b == 0xff) || ((ushort)DAT_4e1b << 8 < DAT_0a2e)) {
      DAT_0b91 = 0;
    }
    else {
      if (DAT_4e95 <= DAT_0b91) {
        DAT_0b90 = DAT_0b90 | 0x80;
      }
      DAT_0b91 = (DAT_0b91 + 1) - (0xfe < DAT_0b91);
    }
    if (((ushort)DAT_4e1a << 8 < DAT_0a2e) && (DAT_4e1a != 0xff)) {
      if ((DAT_0b90 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        if ((DAT_0d87 != '\t') && ((DAT_088c & 0x80) != 0)) {
          DAT_0b90 = DAT_0b90 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        if ((~DAT_0880 & 1) == 0) goto LAB_9dc5;
      }
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 & 0xef;
    }
    else {
LAB_9dc5:
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 | 0x10;
    }
  }
  if (((DAT_0880 & 1) == 0) ||
     (((((~DAT_08af & 0x40) == 0 && ((~DAT_08af & 2) == 0)) &&
       ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))) &&
      ((((~DAT_08b1 & 0x10) == 0 && ((~DAT_08b2 & 0x80) == 0)) && ((~DAT_08b4 & 8) == 0)))))) {
    DAT_0884 = DAT_0884 & 0xdf;
  }
  else {
    DAT_0884 = DAT_0884 | 0x20;
  }
  if ((DAT_0884 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    DAT_0b6f = (DAT_0b6f + 1) - (0xfe < DAT_0b6f);
    if (DAT_4e38 <= DAT_0b6f) {
      if ((~DAT_0888 & 8) == 0) {
        DAT_0888 = DAT_0888 | 8;
      }
      else {
        DAT_0888 = DAT_0888 & 0xf7;
      }
      goto LAB_9e24;
    }
  }
  if (((~DAT_0889 & 2) != 0) &&
     (DAT_0bd1 = (DAT_0bd1 + 1) - (0xfe < DAT_0bd1), DAT_4e66 <= DAT_0bd1)) {
    DAT_0bd1 = 0;
    DAT_0b94 = (DAT_0b94 + 1) - (0xfe < DAT_0b94);
  }
  if ((DAT_0b9a != 0xff) && (DAT_4e3a <= DAT_0b98)) {
    DAT_0b98 = 0;
    DAT_0b9a = (DAT_0b9a + 1) - (0xfe < DAT_0b9a);
    if (4 < DAT_0b9a) {
      DAT_08b8 = DAT_08af;
      DAT_08b9 = DAT_08b0;
      DAT_08ba = DAT_08b1;
      DAT_08bb = DAT_08b2;
      DAT_0bd2 = DAT_0bd2 | 0xf;
      DAT_0b9a = 0xff;
    }
    DAT_0be8 = DAT_0be8 | 0x40;
  }
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    DAT_0d0a = (DAT_0d0a + 1) - (0xfe < DAT_0d0a);
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) &&
     (DAT_0d0b = (DAT_0d0b + 1) - (0xfe < DAT_0d0b), DAT_0d0b <= DAT_4f16)) {
    bVar10 = DAT_0d09 + DAT_0ab3;
    if (CARRY1(DAT_0d09,DAT_0ab3)) {
      bVar10 = 0xff;
    }
    DAT_0d09 = bVar10;
    if ((DAT_4f16 <= DAT_0d0b) && (bVar10 <= DAT_4e84)) {
      DAT_0d08 = DAT_0d08 | 9;
    }
  }
  uVar7 = (ushort)DAT_08d9 * 0x100;
  if ((~DAT_0881 & 0x10) == 0) {
    sVar6 = uVar7 - DAT_08da;
    if (uVar7 < DAT_08da) {
      uVar11 = scale_u16_by_u8(sVar4,CONCAT11((~(byte)((ushort)sVar6 >> 8) + 1) -
                                              ((char)-(char)sVar6 != '\0'),-(char)sVar6));
      sVar4 = CONCAT11((~(byte)((ushort)uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                       -(char)uVar11);
    }
    else {
      sVar4 = scale_u16_by_u8(sVar4,sVar6);
    }
    uVar7 = sVar4 + DAT_08da;
  }
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       ((DAT_4e28 < DAT_08ec ||
        ((((DAT_4e29 < DAT_0abe || (DAT_0900 < DAT_4e1e)) || ((~DAT_08af & 8) != 0)) ||
         ((~DAT_08af & 4) != 0)))))) {
      DAT_0adb = DAT_0adb & 0x7f;
      DAT_0adc = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x80;
      if (DAT_4e2a <= DAT_0adc) {
        DAT_0ada = DAT_0ada | 0x80;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    if ((DAT_4e28 < DAT_08ec) || (DAT_4e2b < DAT_0abe)) {
      DAT_0ada = DAT_0ada & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      if ((DAT_0ada & 0x40) != 0) {
        DAT_0ada = DAT_0ada | 0x20;
      }
      if ((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) ||
         ((DAT_0900 < DAT_4e20 || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))))) {
        if ((DAT_0ada & 0x10) != 0) {
          DAT_0ada = DAT_0ada & 0xef;
          DAT_0ae1 = 0;
        }
        if ((DAT_0ada & 0x40) != 0) {
          if ((~DAT_0ada & 8) == 0) {
            if (((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) || (DAT_4e22 < DAT_0900))
               || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))) goto LAB_a04f;
            DAT_0ada = DAT_0ada | 8;
          }
          if ((((~DAT_0ada & 0x80) != 0) || ((DAT_08b1 & 0x20) != 0)) &&
             ((DAT_0900 < DAT_4e20 && (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))))) {
            DAT_0ada = DAT_0ada & 0xef | 100;
            goto LAB_a04f;
          }
        }
        if ((DAT_0ada & 4) != 0) {
          DAT_0ada = DAT_0ada & 0xfb;
          DAT_0ae1 = 0;
        }
      }
      else {
        DAT_0ada = DAT_0ada & 0xf3 | 0x70;
      }
    }
  }
LAB_a04f:
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       (((DAT_4e28 < DAT_08ec ||
         (((DAT_4e29 < DAT_0abe || (DAT_4e24 <= DAT_0900)) || ((~DAT_08af & 8) != 0)))) ||
        ((((~DAT_08af & 4) != 0 || (DAT_0ad6 != 0)) || (DAT_0ad9 != '\0')))))) {
      DAT_0adb = DAT_0adb & 0xbf;
      DAT_0add = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x40;
      if (DAT_4e31 <= DAT_0add) {
        DAT_0ada = DAT_0ada & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = '\0';
        DAT_0ae1 = 0;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    bVar10 = DAT_0bd2;
    if (DAT_0d5f != -0x80) {
      if ((DAT_0ada & 0x40) == 0) {
        DAT_0adb = DAT_0adb & 0xdf;
        DAT_0ade = 0;
      }
      else {
        DAT_0adb = DAT_0adb | 0x20;
        if ((DAT_4e57 <= DAT_0ade) && ((~DAT_08b1 & 0x20) == 0)) {
          DAT_08b1 = DAT_08b1 | 0x20;
          bVar10 = DAT_0bd2 | 0x20;
          if ((~DAT_08ba & 0x20) == 0) {
            DAT_08ba = DAT_08ba | 0x20;
            bVar10 = DAT_0bd2 | 0x22;
          }
        }
      }
    }
    DAT_0bd2 = bVar10;
    if ((DAT_0881 & 0x10) == 0) {
      bVar10 = DAT_0adb | 0x10;
      if ((DAT_4e57 <= DAT_0adf) &&
         ((((((~DAT_088d & 0x20) != 0 || ((~DAT_0885 & 0x20) != 0)) ||
            (((~DAT_0889 & 2) == 0 && (((~DAT_0880 & 4) == 0 && ((~DAT_0aa6 & 4) == 0)))))) &&
           (((~DAT_0ada & 0x80) != 0 || ((DAT_08b1 & 0x20) != 0)))) &&
          ((((((DAT_08ec <= DAT_4e28 && (DAT_0abe <= DAT_4e29)) && (DAT_0900 < DAT_4e24)) &&
             (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))) && (DAT_0ad6 == 0)) &&
           (DAT_0ad9 == '\0')))))) {
        DAT_0adb = DAT_0adb | 0x18;
        if (((DAT_4e31 <= DAT_0ae0) && (DAT_0ada = DAT_0ada & 0x7f, DAT_0d5f != -0x80)) &&
           ((DAT_08b1 & 0x20) != 0)) {
          DAT_08b1 = DAT_08b1 & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
        goto LAB_a1ae;
      }
    }
    else {
      DAT_0adf = 0;
      bVar10 = DAT_0adb & 0xef;
    }
    DAT_0adb = bVar10;
    DAT_0adb = DAT_0adb & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  DAT_08da = uVar7;
  FUN_5fc8();
  if ((~DAT_0891 & 2) == 0) {
    if ((DAT_0891 & 0x80) == 0) {
LAB_a24a:
      if (DAT_0bd2 == 0) {
LAB_a26f:
        if (DAT_0be8 != 0) {
          if ((DAT_0be8 & 0x80) == 0) {
            if ((DAT_0be8 & 0x40) == 0) {
              if ((DAT_0be8 & 4) != 0) goto LAB_a2b4;
            }
            else {
LAB_a2af:
              FUN_b78f();
            }
          }
          else {
LAB_a296:
            FUN_b758();
          }
        }
      }
      else if ((DAT_0bd2 & 0x80) == 0) {
        if ((DAT_0bd2 & 0x40) == 0) {
          if ((DAT_0bd2 & 0x20) == 0) {
            if ((DAT_0bd2 & 0x10) == 0) {
              if ((DAT_0bd2 & 8) == 0) {
                if ((DAT_0bd2 & 4) == 0) {
                  if ((DAT_0bd2 & 2) == 0) {
                    if ((DAT_0bd2 & 1) != 0) goto LAB_a2aa;
                    goto LAB_a26f;
                  }
LAB_a2a5:
                  FUN_b6ea();
                }
                else {
LAB_a2a0:
                  FUN_b6b3();
                }
              }
              else {
LAB_a29b:
                FUN_b67c();
              }
            }
            else {
LAB_a291:
              FUN_b645();
            }
          }
          else {
LAB_a28c:
            FUN_b60e();
          }
        }
        else {
LAB_a287:
          FUN_b5d7();
        }
      }
      else {
LAB_a282:
        FUN_b5a0();
      }
    }
    else if ((~DAT_088f & 0x80) == 0) {
      if ((~DAT_088f & 0x40) == 0) goto LAB_a24a;
      FUN_b4c6();
    }
    else {
      FUN_b3ec();
    }
  }
  else if ((DAT_0891 & 0x80) == 0) {
LAB_a1d9:
    if (DAT_0bd3 == 0) {
LAB_a20e:
      if (DAT_0be9 != 0) {
        if ((DAT_0be9 & 0x80) != 0) goto LAB_a296;
        if ((DAT_0be9 & 0x40) != 0) goto LAB_a2af;
        if ((DAT_0be9 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
        FUN_b7b9();
      }
    }
    else {
      if ((DAT_0bd3 & 0x80) != 0) goto LAB_a282;
      if ((DAT_0bd3 & 0x40) != 0) goto LAB_a287;
      if ((DAT_0bd3 & 0x20) != 0) goto LAB_a28c;
      if ((DAT_0bd3 & 0x10) != 0) goto LAB_a291;
      if ((DAT_0bd3 & 8) != 0) goto LAB_a29b;
      if ((DAT_0bd3 & 4) != 0) goto LAB_a2a0;
      if ((DAT_0bd3 & 2) != 0) goto LAB_a2a5;
      if ((DAT_0bd3 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
      FUN_b721();
    }
  }
  else if ((~DAT_0890 & 0x80) == 0) {
    if ((~DAT_0890 & 0x40) == 0) goto LAB_a1d9;
    FUN_b4c6();
  }
  else {
    FUN_b3ec();
  }
LAB_a2b9:
  bVar10 = DAT_0000;
  bVar10 = bVar10 & 0xe0;
  if (bVar10 == 0x80) {
    if (((DAT_08b1 & 0x80) != 0x80) || (bVar10 = DAT_0000, (bVar10 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar10 != 0) {
    if (((bVar10 == 0x40) && ((DAT_08b1 & 0x80) == 0x80)) &&
       (bVar10 = DAT_0000, (bVar10 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  if (((DAT_08b1 & 0x80) == 0x80) && (bVar10 = DAT_0000, (bVar10 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  DAT_08bc = DAT_08bc & 0xf7;
  return;
}


/* Entry 96fd */

/* WARNING: Removing unreachable block (RAM,0x9c19) */
/* WARNING: Removing unreachable block (RAM,0x9b8d) */
/* WARNING: Removing unreachable block (RAM,0x9b50) */
/* WARNING: Removing unreachable block (RAM,0x9b57) */
/* WARNING: Removing unreachable block (RAM,0x9b59) */
/* WARNING: Removing unreachable block (RAM,0x9b6c) */
/* WARNING: Removing unreachable block (RAM,0x9b6f) */
/* WARNING: Removing unreachable block (RAM,0x9b80) */
/* WARNING: Removing unreachable block (RAM,0x9b74) */
/* WARNING: Removing unreachable block (RAM,0x9b7b) */
/* WARNING: Removing unreachable block (RAM,0x9b87) */
/* WARNING: Removing unreachable block (RAM,0x9b95) */
/* WARNING: Removing unreachable block (RAM,0x9bb8) */
/* WARNING: Removing unreachable block (RAM,0x9c36) */
/* WARNING: Removing unreachable block (RAM,0x9bdb) */
/* WARNING: Removing unreachable block (RAM,0x9be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_unreferenced_96fd(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  char cVar8;
  short sVar6;
  byte bVar9;
  byte bVar10;
  ushort uVar7;
  undefined2 uVar11;
  
  DAT_0880 = DAT_0880 & 0xfb;
  DAT_0b20 = (DAT_0b20 + 1) - (0xfe < DAT_0b20);
  DAT_0b1e = (DAT_0b1e + 1) - (0xfe < DAT_0b1e);
  DAT_0b1f = (DAT_0b1f + 1) - (0xfe < DAT_0b1f);
  DAT_0b1d = (DAT_0b1d + 1) - (0xfe < DAT_0b1d);
  DAT_0afd = (DAT_0afd + 1) - (0xfe < DAT_0afd);
  if ((~DAT_0881 & 0x10) == 0) {
    DAT_0afe = (DAT_0afe + 1) - (0xfe < DAT_0afe);
  }
  else {
    DAT_0afe = '\0';
  }
  if (((~DAT_0880 & 1) == 0) && ((~DAT_0885 & 0x40) == 0)) {
    DAT_0b5d = '\0';
  }
  else {
    DAT_0b5d = (DAT_0b5d + 1) - (0xfe < DAT_0b5d);
  }
  if ((~DAT_09a1 & 1) == 0) {
    DAT_09ab = (DAT_09ab + 1) - (0xfe < DAT_09ab);
    DAT_09aa = '\0';
  }
  else {
    DAT_09aa = (DAT_09aa + 1) - (0xfe < DAT_09aa);
    DAT_09ab = '\0';
  }
  DAT_091b = (DAT_091b + 1) - (0xfe < DAT_091b);
  DAT_091c = (DAT_091c + 1) - (0xfe < DAT_091c);
  DAT_091d = (DAT_091d + 1) - (0xfe < DAT_091d);
  DAT_091e = (DAT_091e + 1) - (0xfe < DAT_091e);
  DAT_091f = (DAT_091f + 1) - (0xfe < DAT_091f);
  DAT_0920 = (DAT_0920 + 1) - (0xfe < DAT_0920);
  DAT_0b09 = (DAT_0b09 + 1) - (0xfe < DAT_0b09);
  if ((DAT_0893 & 0x80) == 0) {
LAB_9802:
    DAT_0be7 = 0;
  }
  else {
    DAT_0be7 = (DAT_0be7 + 1) - (0xfe < DAT_0be7);
    if (DAT_4f15 < DAT_0be7) {
      DAT_0893 = DAT_0893 & 0x7f;
      goto LAB_9802;
    }
  }
  DAT_0a9f = DAT_4b9e;
  if (DAT_0900._0_1_ < DAT_4b9c) {
    DAT_0a9f = DAT_4b9d;
  }
  if ((DAT_08ce._0_1_ < DAT_0a9e) || ((byte)(DAT_08ce._0_1_ - DAT_0a9e) < DAT_4b99)) {
    DAT_0a9d = 0;
LAB_984d:
    if ((DAT_0aa0 == '\0') || (DAT_0aa0 = DAT_0aa0 + -1, DAT_0aa0 == '\0')) {
      DAT_0aa0 = DAT_4b9a;
      bVar1 = DAT_0a9c < DAT_4b9b;
      DAT_0a9c = DAT_0a9c - DAT_4b9b;
      if (bVar1) {
        DAT_0a9c = 0;
      }
    }
  }
  else {
    sVar4 = (ushort)(byte)((DAT_08ce._0_1_ - DAT_0a9e) - DAT_4b99) * (ushort)DAT_0a9f;
    if ((char)((ushort)sVar4 >> 8) != '\0') {
      sVar4 = 0xff;
    }
    DAT_0a9d = (byte)sVar4;
    if ((DAT_0a9d < DAT_0a9c) || (DAT_0a9d == DAT_0a9c)) goto LAB_984d;
    DAT_0a9c = DAT_0a9d;
    if (DAT_4b9f <= DAT_0a9d) {
      DAT_0a9c = DAT_4b9f;
    }
  }
  DAT_0a9e = DAT_08ce._0_1_;
  sVar4 = DAT_0900 - DAT_0aa8;
  if (DAT_0900 < DAT_0aa8) {
    uVar11 = scale_u16_by_u8_rounded
                       (param_1,CONCAT11((~(byte)((ushort)sVar4 >> 8) + 1) -
                                         ((char)-(char)sVar4 != '\0'),-(char)sVar4));
    sVar4 = CONCAT11((~(byte)((ushort)uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                     -(char)uVar11);
  }
  else {
    sVar4 = scale_u16_by_u8_rounded(param_1,sVar4);
  }
  sVar6 = DAT_0ab4;
  sVar4 = sVar4 + DAT_0aa8;
  if ((DAT_0af7 & 1) == 0) {
    DAT_0aaa = (DAT_0aaa + 1) - (0xfe < DAT_0aaa);
    DAT_0aab = (DAT_0aab + 1) - (0xfe < DAT_0aab);
  }
  if ((DAT_4af7 < DAT_0abe) && (DAT_0abe < DAT_4af8)) {
    bVar10 = DAT_0aa6 | 0x80;
  }
  else {
    bVar10 = DAT_0aa6 & 0x7f;
    if ((DAT_0aa6 & 0x40) != 0) {
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar10 = DAT_0aa6 & 0xf;
    }
  }
  DAT_0aa6 = bVar10;
  DAT_0aa8 = sVar4;
  if ((((~DAT_0aa6 & 8) == 0) && ((~DAT_0aa6 & 4) == 0)) && ((~DAT_0aa6 & 2) == 0)) {
    DAT_0aa8._0_1_ = (byte)((ushort)sVar4 >> 8);
    if (DAT_0d87 == '\t') {
      if (DAT_0898 == DAT_4af9) {
        if (DAT_4afd <= DAT_0aaa) {
          DAT_0aa6 = DAT_0aa6 | 0x20;
          DAT_0aa7 = DAT_0aa7 | 8;
          FUN_997a();
          return;
        }
      }
      else {
        DAT_0aaa = 0;
        if ((DAT_0aa6 & 0x20) != 0) {
          DAT_0aa7 = DAT_0aa7 & 0xf7;
          DAT_0aa6 = DAT_0aa6 & 0x9f | 2;
          goto LAB_9a25;
        }
      }
    }
    else if ((DAT_0aa8._0_1_ < DAT_4afb) || (DAT_4afc <= DAT_0aa8._0_1_)) {
      DAT_0aaa = 0;
      if ((DAT_0aa6 & 0x20) != 0) {
        DAT_0aa7 = DAT_0aa7 & 0xf7;
        DAT_0aa6 = DAT_0aa6 & 0x9f | 2;
        goto LAB_9a25;
      }
    }
    else if (DAT_4afd <= DAT_0aaa) {
      DAT_0aa6 = DAT_0aa6 | 0x20;
      DAT_0aa7 = DAT_0aa7 | 8;
      FUN_997a();
      return;
    }
    if (DAT_0d87 == '\t') {
      if (DAT_0898 == DAT_4afa) {
        if (DAT_4afd <= DAT_0aab) {
          DAT_0aa6 = DAT_0aa6 | 0x10;
          DAT_0aa7 = DAT_0aa7 | 4;
        }
LAB_99b5:
        DAT_0aa6 = DAT_0aa6 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      if ((DAT_0aa6 & 0x10) == 0) goto LAB_99b5;
      DAT_0aa7 = DAT_0aa7 & 0xfb;
      DAT_0aa6 = DAT_0aa6 & 0xaf | 2;
    }
    else {
      if ((DAT_4afe <= DAT_0aa8._0_1_) && (DAT_0aa8._0_1_ < DAT_4aff)) {
        if (DAT_4afd <= DAT_0aab) {
          DAT_0aa6 = DAT_0aa6 | 0x10;
          DAT_0aa7 = DAT_0aa7 | 4;
        }
LAB_99f2:
        DAT_0aa6 = DAT_0aa6 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      if ((DAT_0aa6 & 0x10) == 0) goto LAB_99f2;
      DAT_0aa7 = DAT_0aa7 & 0xfb;
      DAT_0aa6 = DAT_0aa6 & 0xaf | 2;
    }
  }
LAB_9a25:
  if ((DAT_0aa6 & 8) != 0) {
    if (DAT_0aaa < DAT_4b01) {
      if (DAT_4b02 <= DAT_08e8._0_1_) {
        DAT_0aaa = 0;
        DAT_0aa6 = DAT_0aa6 & 0xf7 | 4;
      }
    }
    else {
      DAT_0aaa = 0;
      DAT_0aab = 0;
      DAT_0aa6 = DAT_0aa6 & 0x87 | 2;
    }
  }
  if ((DAT_0aa6 & 4) != 0) {
    DAT_0aac = DAT_4b05;
    if ((DAT_0aa7 & 8) != 0) {
      DAT_0aac = DAT_4b04;
    }
    if ((DAT_08e8._0_1_ < DAT_4b02) || (DAT_4b06 <= DAT_0aaa)) {
      DAT_0aa7 = DAT_0aa7 | 2;
      DAT_0aa6 = DAT_0aa6 & 0xfb | 3;
    }
  }
  if ((~DAT_0aa6 & 2) != 0) {
    if (((DAT_0aa6 & 1) != 0) &&
       (DAT_0aae = (DAT_0aae + 1) - (0xfe < DAT_0aae), DAT_4b07 <= DAT_0aae)) {
      DAT_0aae = 0;
      DAT_0aad = (DAT_0aad + 1) - (0xfe < DAT_0aad);
      bVar10 = DAT_0aac;
      if ((DAT_0aa7 & 2) != 0) {
        bVar3 = DAT_4b05;
        if ((DAT_0aa7 & 8) != 0) {
          bVar3 = DAT_4b04;
        }
        bVar10 = bVar3 + DAT_0aad;
        if (CARRY1(bVar3,DAT_0aad)) {
          bVar10 = 0xff;
        }
        if (DAT_0a83 <= bVar10) {
          DAT_0aa7 = DAT_0aa7 & 0xfd;
          bVar10 = DAT_0aac;
        }
      }
      DAT_0aac = bVar10;
      if ((~DAT_0aa7 & 2) == 0) {
        DAT_0aa6 = DAT_0aa6 & 0xfe;
        DAT_0aad = 0;
        DAT_0aa7 = DAT_0aa7 & 0xf3;
      }
    }
    if ((~DAT_0aa6 & 1) == 0) {
      DAT_0aa6 = DAT_0aa6 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  DAT_0ab6 = DAT_0ab4;
  DAT_0ab4 = DAT_0ab0;
  sVar6 = DAT_0ab0 - sVar6;
  if ((~DAT_0ab2 & 4) == 0) {
    sVar6 = 0;
  }
  if ((char)((ushort)sVar6 >> 8) != '\0') {
    sVar6 = 0xff;
  }
  DAT_0ab3 = (byte)sVar6;
  iVar2 = (uint)DAT_4bd4 * (uint)DAT_0ab3;
  uVar11 = (undefined2)((uint)iVar2 >> 0x10);
  DAT_0de0 = CONCAT11((char)((uint)iVar2 >> 8) - ((byte)iVar2 < DAT_0aba),(byte)iVar2 - DAT_0aba);
  DAT_0dde._1_1_ = (char)((uint)iVar2 >> 0x10);
  if ((char)DAT_0dde != '\0') {
    DAT_0de0 = 0xffff;
  }
  sVar4 = (short)((uint)DAT_4bd6 * (uint)DAT_0de0 >> 0x10);
  uVar5 = (undefined2)((uint)DAT_4bd6 * (uint)DAT_0de0);
  if (sVar4 != 0) {
    uVar5 = 0xffff;
  }
  bVar10 = (byte)((ushort)uVar5 >> 8);
  bVar3 = (byte)uVar5;
  if ((DAT_0ab2 & 1) == 0) {
    cVar8 = bVar3 + (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar10 + CARRY1(bVar3,(byte)DAT_0ab8);
    if (CARRY1(bVar10,CARRY1(bVar3,(byte)DAT_0ab8))) {
      cVar8 = -1;
      DAT_0ab8._0_1_ = 0xff;
    }
  }
  else {
    cVar8 = bVar3 - (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar10 - (bVar3 < (byte)DAT_0ab8);
  }
  bVar10 = DAT_0aba + DAT_0ab8._0_1_;
  if (CARRY1(DAT_0aba,DAT_0ab8._0_1_)) {
    bVar10 = 0xff;
  }
  if (bVar10 < DAT_0abe) {
    sVar6 = (ushort)(byte)-(bVar10 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar6 >> 8);
    bVar9 = (byte)sVar6;
    if ((DAT_0ab2 & 2) == 0) {
      _DAT_0abc = CONCAT11(bVar3 - (bVar9 < DAT_0abd),bVar9 - DAT_0abd);
    }
    else {
      bVar1 = CARRY1(bVar9,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar9 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    DAT_0ab2 = DAT_0ab2 & 0xfe | 6;
  }
  else {
    sVar6 = (ushort)(byte)(bVar10 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar6 >> 8);
    bVar9 = (byte)sVar6;
    if ((DAT_0ab2 & 2) == 0) {
      bVar1 = CARRY1(bVar9,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar9 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    else {
      _DAT_0abc = CONCAT11(bVar3 - (bVar9 < DAT_0abd),bVar9 - DAT_0abd);
    }
    DAT_0ab2 = DAT_0ab2 & 0xfc | 4;
  }
  if ((DAT_0ab2 & 2) == 0) {
    bVar3 = DAT_0abe + DAT_0abc;
    if (CARRY1(DAT_0abe,DAT_0abc)) {
      bVar3 = 0xff;
    }
  }
  else {
    bVar3 = DAT_0abe - DAT_0abc;
    if (DAT_0abe < DAT_0abc) {
      bVar3 = 0;
    }
  }
  if ((DAT_4ba7 != -0x80) ||
     ((((DAT_0d87 == '\t' && ((~DAT_0896._0_1_ & 0x10) != 0)) || (DAT_4ba8 <= DAT_0900._0_1_)) ||
      (DAT_4ba9 <= DAT_08ce._0_1_)))) {
    DAT_0aaf = 0;
    DAT_088d = DAT_088d & 0xbf;
  }
  if ((DAT_0af7 == 0) && (DAT_0aaf = (DAT_0aaf + 1) - (0xfe < DAT_0aaf), DAT_4baa <= DAT_0aaf)) {
    DAT_088d = DAT_088d | 0x40;
  }
  DAT_0aba = bVar10;
  DAT_0abe = bVar3;
  DAT_0dde = uVar11;
  DAT_0ab8._1_1_ = cVar8;
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d49)) {
    if (DAT_0d87 == '\t') {
      if ((((DAT_08f4 < DAT_4c03) || ((ushort)DAT_4c04 << 8 < DAT_0992)) || (DAT_4c06 < DAT_0982))
         || ((~DAT_0881 & 0x20) != 0)) {
LAB_9d2a:
        DAT_0acf = 0;
LAB_9d2b:
        if (((((~DAT_09a1 & 0x80) == 0) && ((~DAT_08a0 & 0x20) == 0)) &&
            (((~DAT_08b0 & 0x10) == 0 &&
             ((((~DAT_08b0 & 4) == 0 && ((~DAT_08b0 & 2) == 0)) && ((~DAT_08b1 & 0x80) == 0)))))) &&
           ((~DAT_08b1 & 0x40) == 0)) goto LAB_9d51;
      }
      else {
        if ((~DAT_0896._0_1_ & 0x10) != 0) {
          if ((&DAT_4e11)[DAT_0898] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        if ((DAT_0acd == '\0') || (FUN_a3b4(), DAT_0ace == '\0')) goto LAB_9d2a;
        if (DAT_0acf < DAT_4c02) {
          DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
          goto LAB_9d2b;
        }
        DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
      }
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 | 2;
      DAT_0889 = DAT_0889 | 0x80;
    }
    else {
LAB_9d51:
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 & 0xfd;
      DAT_0889 = DAT_0889 & 0x7f;
    }
  }
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d4c)) {
    if ((DAT_4e1b == 0xff) || ((ushort)DAT_4e1b << 8 < DAT_0a2e)) {
      DAT_0b91 = 0;
    }
    else {
      if (DAT_4e95 <= DAT_0b91) {
        DAT_0b90 = DAT_0b90 | 0x80;
      }
      DAT_0b91 = (DAT_0b91 + 1) - (0xfe < DAT_0b91);
    }
    if (((ushort)DAT_4e1a << 8 < DAT_0a2e) && (DAT_4e1a != 0xff)) {
      if ((DAT_0b90 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        if ((DAT_0d87 != '\t') && ((DAT_088c & 0x80) != 0)) {
          DAT_0b90 = DAT_0b90 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        if ((~DAT_0880 & 1) == 0) goto LAB_9dc5;
      }
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 & 0xef;
    }
    else {
LAB_9dc5:
      bVar10 = DAT_00f0;
      DAT_00f0 = bVar10 | 0x10;
    }
  }
  if (((DAT_0880 & 1) == 0) ||
     (((((~DAT_08af & 0x40) == 0 && ((~DAT_08af & 2) == 0)) &&
       ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))) &&
      ((((~DAT_08b1 & 0x10) == 0 && ((~DAT_08b2 & 0x80) == 0)) && ((~DAT_08b4 & 8) == 0)))))) {
    DAT_0884 = DAT_0884 & 0xdf;
  }
  else {
    DAT_0884 = DAT_0884 | 0x20;
  }
  if ((DAT_0884 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    DAT_0b6f = (DAT_0b6f + 1) - (0xfe < DAT_0b6f);
    if (DAT_4e38 <= DAT_0b6f) {
      if ((~DAT_0888 & 8) == 0) {
        DAT_0888 = DAT_0888 | 8;
      }
      else {
        DAT_0888 = DAT_0888 & 0xf7;
      }
      goto LAB_9e24;
    }
  }
  if (((~DAT_0889 & 2) != 0) &&
     (DAT_0bd1 = (DAT_0bd1 + 1) - (0xfe < DAT_0bd1), DAT_4e66 <= DAT_0bd1)) {
    DAT_0bd1 = 0;
    DAT_0b94 = (DAT_0b94 + 1) - (0xfe < DAT_0b94);
  }
  if ((DAT_0b9a != 0xff) && (DAT_4e3a <= DAT_0b98)) {
    DAT_0b98 = 0;
    DAT_0b9a = (DAT_0b9a + 1) - (0xfe < DAT_0b9a);
    if (4 < DAT_0b9a) {
      DAT_08b8 = DAT_08af;
      DAT_08b9 = DAT_08b0;
      DAT_08ba = DAT_08b1;
      DAT_08bb = DAT_08b2;
      DAT_0bd2 = DAT_0bd2 | 0xf;
      DAT_0b9a = 0xff;
    }
    DAT_0be8 = DAT_0be8 | 0x40;
  }
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    DAT_0d0a = (DAT_0d0a + 1) - (0xfe < DAT_0d0a);
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) &&
     (DAT_0d0b = (DAT_0d0b + 1) - (0xfe < DAT_0d0b), DAT_0d0b <= DAT_4f16)) {
    bVar10 = DAT_0d09 + DAT_0ab3;
    if (CARRY1(DAT_0d09,DAT_0ab3)) {
      bVar10 = 0xff;
    }
    DAT_0d09 = bVar10;
    if ((DAT_4f16 <= DAT_0d0b) && (bVar10 <= DAT_4e84)) {
      DAT_0d08 = DAT_0d08 | 9;
    }
  }
  uVar7 = (ushort)DAT_08d9 * 0x100;
  if ((~DAT_0881 & 0x10) == 0) {
    sVar6 = uVar7 - DAT_08da;
    if (uVar7 < DAT_08da) {
      uVar11 = scale_u16_by_u8(sVar4,CONCAT11((~(byte)((ushort)sVar6 >> 8) + 1) -
                                              ((char)-(char)sVar6 != '\0'),-(char)sVar6));
      sVar4 = CONCAT11((~(byte)((ushort)uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                       -(char)uVar11);
    }
    else {
      sVar4 = scale_u16_by_u8(sVar4,sVar6);
    }
    uVar7 = sVar4 + DAT_08da;
  }
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       ((DAT_4e28 < DAT_08ec ||
        ((((DAT_4e29 < DAT_0abe || (DAT_0900 < DAT_4e1e)) || ((~DAT_08af & 8) != 0)) ||
         ((~DAT_08af & 4) != 0)))))) {
      DAT_0adb = DAT_0adb & 0x7f;
      DAT_0adc = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x80;
      if (DAT_4e2a <= DAT_0adc) {
        DAT_0ada = DAT_0ada | 0x80;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    if ((DAT_4e28 < DAT_08ec) || (DAT_4e2b < DAT_0abe)) {
      DAT_0ada = DAT_0ada & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      if ((DAT_0ada & 0x40) != 0) {
        DAT_0ada = DAT_0ada | 0x20;
      }
      if ((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) ||
         ((DAT_0900 < DAT_4e20 || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))))) {
        if ((DAT_0ada & 0x10) != 0) {
          DAT_0ada = DAT_0ada & 0xef;
          DAT_0ae1 = 0;
        }
        if ((DAT_0ada & 0x40) != 0) {
          if ((~DAT_0ada & 8) == 0) {
            if (((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) || (DAT_4e22 < DAT_0900))
               || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))) goto LAB_a04f;
            DAT_0ada = DAT_0ada | 8;
          }
          if ((((~DAT_0ada & 0x80) != 0) || ((DAT_08b1 & 0x20) != 0)) &&
             ((DAT_0900 < DAT_4e20 && (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))))) {
            DAT_0ada = DAT_0ada & 0xef | 100;
            goto LAB_a04f;
          }
        }
        if ((DAT_0ada & 4) != 0) {
          DAT_0ada = DAT_0ada & 0xfb;
          DAT_0ae1 = 0;
        }
      }
      else {
        DAT_0ada = DAT_0ada & 0xf3 | 0x70;
      }
    }
  }
LAB_a04f:
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       (((DAT_4e28 < DAT_08ec ||
         (((DAT_4e29 < DAT_0abe || (DAT_4e24 <= DAT_0900)) || ((~DAT_08af & 8) != 0)))) ||
        ((((~DAT_08af & 4) != 0 || (DAT_0ad6 != 0)) || (DAT_0ad9 != '\0')))))) {
      DAT_0adb = DAT_0adb & 0xbf;
      DAT_0add = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x40;
      if (DAT_4e31 <= DAT_0add) {
        DAT_0ada = DAT_0ada & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = '\0';
        DAT_0ae1 = 0;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    bVar10 = DAT_0bd2;
    if (DAT_0d5f != -0x80) {
      if ((DAT_0ada & 0x40) == 0) {
        DAT_0adb = DAT_0adb & 0xdf;
        DAT_0ade = 0;
      }
      else {
        DAT_0adb = DAT_0adb | 0x20;
        if ((DAT_4e57 <= DAT_0ade) && ((~DAT_08b1 & 0x20) == 0)) {
          DAT_08b1 = DAT_08b1 | 0x20;
          bVar10 = DAT_0bd2 | 0x20;
          if ((~DAT_08ba & 0x20) == 0) {
            DAT_08ba = DAT_08ba | 0x20;
            bVar10 = DAT_0bd2 | 0x22;
          }
        }
      }
    }
    DAT_0bd2 = bVar10;
    if ((DAT_0881 & 0x10) == 0) {
      bVar10 = DAT_0adb | 0x10;
      if ((DAT_4e57 <= DAT_0adf) &&
         ((((((~DAT_088d & 0x20) != 0 || ((~DAT_0885 & 0x20) != 0)) ||
            (((~DAT_0889 & 2) == 0 && (((~DAT_0880 & 4) == 0 && ((~DAT_0aa6 & 4) == 0)))))) &&
           (((~DAT_0ada & 0x80) != 0 || ((DAT_08b1 & 0x20) != 0)))) &&
          ((((((DAT_08ec <= DAT_4e28 && (DAT_0abe <= DAT_4e29)) && (DAT_0900 < DAT_4e24)) &&
             (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))) && (DAT_0ad6 == 0)) &&
           (DAT_0ad9 == '\0')))))) {
        DAT_0adb = DAT_0adb | 0x18;
        if (((DAT_4e31 <= DAT_0ae0) && (DAT_0ada = DAT_0ada & 0x7f, DAT_0d5f != -0x80)) &&
           ((DAT_08b1 & 0x20) != 0)) {
          DAT_08b1 = DAT_08b1 & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
        goto LAB_a1ae;
      }
    }
    else {
      DAT_0adf = 0;
      bVar10 = DAT_0adb & 0xef;
    }
    DAT_0adb = bVar10;
    DAT_0adb = DAT_0adb & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  DAT_08da = uVar7;
  FUN_5fc8();
  if ((~DAT_0891 & 2) == 0) {
    if ((DAT_0891 & 0x80) == 0) {
LAB_a24a:
      if (DAT_0bd2 == 0) {
LAB_a26f:
        if (DAT_0be8 != 0) {
          if ((DAT_0be8 & 0x80) == 0) {
            if ((DAT_0be8 & 0x40) == 0) {
              if ((DAT_0be8 & 4) != 0) goto LAB_a2b4;
            }
            else {
LAB_a2af:
              FUN_b78f();
            }
          }
          else {
LAB_a296:
            FUN_b758();
          }
        }
      }
      else if ((DAT_0bd2 & 0x80) == 0) {
        if ((DAT_0bd2 & 0x40) == 0) {
          if ((DAT_0bd2 & 0x20) == 0) {
            if ((DAT_0bd2 & 0x10) == 0) {
              if ((DAT_0bd2 & 8) == 0) {
                if ((DAT_0bd2 & 4) == 0) {
                  if ((DAT_0bd2 & 2) == 0) {
                    if ((DAT_0bd2 & 1) != 0) goto LAB_a2aa;
                    goto LAB_a26f;
                  }
LAB_a2a5:
                  FUN_b6ea();
                }
                else {
LAB_a2a0:
                  FUN_b6b3();
                }
              }
              else {
LAB_a29b:
                FUN_b67c();
              }
            }
            else {
LAB_a291:
              FUN_b645();
            }
          }
          else {
LAB_a28c:
            FUN_b60e();
          }
        }
        else {
LAB_a287:
          FUN_b5d7();
        }
      }
      else {
LAB_a282:
        FUN_b5a0();
      }
    }
    else if ((~DAT_088f & 0x80) == 0) {
      if ((~DAT_088f & 0x40) == 0) goto LAB_a24a;
      FUN_b4c6();
    }
    else {
      FUN_b3ec();
    }
  }
  else if ((DAT_0891 & 0x80) == 0) {
LAB_a1d9:
    if (DAT_0bd3 == 0) {
LAB_a20e:
      if (DAT_0be9 != 0) {
        if ((DAT_0be9 & 0x80) != 0) goto LAB_a296;
        if ((DAT_0be9 & 0x40) != 0) goto LAB_a2af;
        if ((DAT_0be9 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
        FUN_b7b9();
      }
    }
    else {
      if ((DAT_0bd3 & 0x80) != 0) goto LAB_a282;
      if ((DAT_0bd3 & 0x40) != 0) goto LAB_a287;
      if ((DAT_0bd3 & 0x20) != 0) goto LAB_a28c;
      if ((DAT_0bd3 & 0x10) != 0) goto LAB_a291;
      if ((DAT_0bd3 & 8) != 0) goto LAB_a29b;
      if ((DAT_0bd3 & 4) != 0) goto LAB_a2a0;
      if ((DAT_0bd3 & 2) != 0) goto LAB_a2a5;
      if ((DAT_0bd3 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
      FUN_b721();
    }
  }
  else if ((~DAT_0890 & 0x80) == 0) {
    if ((~DAT_0890 & 0x40) == 0) goto LAB_a1d9;
    FUN_b4c6();
  }
  else {
    FUN_b3ec();
  }
LAB_a2b9:
  bVar10 = DAT_0000;
  bVar10 = bVar10 & 0xe0;
  if (bVar10 == 0x80) {
    if (((DAT_08b1 & 0x80) != 0x80) || (bVar10 = DAT_0000, (bVar10 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar10 != 0) {
    if (((bVar10 == 0x40) && ((DAT_08b1 & 0x80) == 0x80)) &&
       (bVar10 = DAT_0000, (bVar10 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  if (((DAT_08b1 & 0x80) == 0x80) && (bVar10 = DAT_0000, (bVar10 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  DAT_08bc = DAT_08bc & 0xf7;
  return;
}


/* Entry 9973 */

/* WARNING: Removing unreachable block (RAM,0x9c19) */
/* WARNING: Removing unreachable block (RAM,0x9b8d) */
/* WARNING: Removing unreachable block (RAM,0x9b50) */
/* WARNING: Removing unreachable block (RAM,0x9b57) */
/* WARNING: Removing unreachable block (RAM,0x9b59) */
/* WARNING: Removing unreachable block (RAM,0x9b6c) */
/* WARNING: Removing unreachable block (RAM,0x9b6f) */
/* WARNING: Removing unreachable block (RAM,0x9b80) */
/* WARNING: Removing unreachable block (RAM,0x9b74) */
/* WARNING: Removing unreachable block (RAM,0x9b7b) */
/* WARNING: Removing unreachable block (RAM,0x9b87) */
/* WARNING: Removing unreachable block (RAM,0x9b95) */
/* WARNING: Removing unreachable block (RAM,0x9bb8) */
/* WARNING: Removing unreachable block (RAM,0x9c36) */
/* WARNING: Removing unreachable block (RAM,0x9bdb) */
/* WARNING: Removing unreachable block (RAM,0x9be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_unreferenced_9973(void)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar7;
  short sVar5;
  byte bVar8;
  byte bVar9;
  ushort uVar6;
  undefined2 uVar10;
  short sVar11;
  
  sVar11 = DAT_0ab4;
  if ((DAT_0aa6 & 8) != 0) {
    if (DAT_4b01 == '\0') {
      DAT_0aab = 0;
      DAT_0aa6 = DAT_0aa6 & 0x87 | 2;
    }
    else if (DAT_4b02 <= DAT_08e8._0_1_) {
      DAT_0aa6 = DAT_0aa6 & 0xf7 | 4;
    }
  }
  if ((DAT_0aa6 & 4) != 0) {
    DAT_0aac = DAT_4b05;
    if ((DAT_0aa7 & 8) != 0) {
      DAT_0aac = DAT_4b04;
    }
    if ((DAT_08e8._0_1_ < DAT_4b02) || (DAT_4b06 == '\0')) {
      DAT_0aa7 = DAT_0aa7 | 2;
      DAT_0aa6 = DAT_0aa6 & 0xfb | 3;
    }
  }
  if ((~DAT_0aa6 & 2) != 0) {
    if (((DAT_0aa6 & 1) != 0) &&
       (DAT_0aae = (DAT_0aae + 1) - (0xfe < DAT_0aae), DAT_4b07 <= DAT_0aae)) {
      DAT_0aae = 0;
      DAT_0aad = (DAT_0aad + 1) - (0xfe < DAT_0aad);
      bVar9 = DAT_0aac;
      if ((DAT_0aa7 & 2) != 0) {
        bVar3 = DAT_4b05;
        if ((DAT_0aa7 & 8) != 0) {
          bVar3 = DAT_4b04;
        }
        bVar9 = bVar3 + DAT_0aad;
        if (CARRY1(bVar3,DAT_0aad)) {
          bVar9 = 0xff;
        }
        if (DAT_0a83 <= bVar9) {
          DAT_0aa7 = DAT_0aa7 & 0xfd;
          bVar9 = DAT_0aac;
        }
      }
      DAT_0aac = bVar9;
      if ((~DAT_0aa7 & 2) == 0) {
        DAT_0aa6 = DAT_0aa6 & 0xfe;
        DAT_0aad = 0;
        DAT_0aa7 = DAT_0aa7 & 0xf3;
      }
    }
    if ((~DAT_0aa6 & 1) == 0) {
      DAT_0aa6 = DAT_0aa6 & 0xfd;
      DAT_0aab = 0;
    }
  }
  DAT_0aaa = 0;
  DAT_0ab6 = DAT_0ab4;
  DAT_0ab4 = DAT_0ab0;
  sVar11 = DAT_0ab0 - sVar11;
  if ((~DAT_0ab2 & 4) == 0) {
    sVar11 = 0;
  }
  if ((char)((ushort)sVar11 >> 8) != '\0') {
    sVar11 = 0xff;
  }
  DAT_0ab3 = (byte)sVar11;
  iVar2 = (uint)DAT_4bd4 * (uint)DAT_0ab3;
  uVar10 = (undefined2)((uint)iVar2 >> 0x10);
  DAT_0de0 = CONCAT11((char)((uint)iVar2 >> 8) - ((byte)iVar2 < DAT_0aba),(byte)iVar2 - DAT_0aba);
  DAT_0dde._1_1_ = (char)((uint)iVar2 >> 0x10);
  if ((char)DAT_0dde != '\0') {
    DAT_0de0 = 0xffff;
  }
  sVar11 = (short)((uint)DAT_4bd6 * (uint)DAT_0de0 >> 0x10);
  uVar4 = (undefined2)((uint)DAT_4bd6 * (uint)DAT_0de0);
  if (sVar11 != 0) {
    uVar4 = 0xffff;
  }
  bVar9 = (byte)((ushort)uVar4 >> 8);
  bVar3 = (byte)uVar4;
  if ((DAT_0ab2 & 1) == 0) {
    cVar7 = bVar3 + (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar9 + CARRY1(bVar3,(byte)DAT_0ab8);
    if (CARRY1(bVar9,CARRY1(bVar3,(byte)DAT_0ab8))) {
      cVar7 = -1;
      DAT_0ab8._0_1_ = 0xff;
    }
  }
  else {
    cVar7 = bVar3 - (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar9 - (bVar3 < (byte)DAT_0ab8);
  }
  bVar9 = DAT_0aba + DAT_0ab8._0_1_;
  if (CARRY1(DAT_0aba,DAT_0ab8._0_1_)) {
    bVar9 = 0xff;
  }
  if (bVar9 < DAT_0abe) {
    sVar5 = (ushort)(byte)-(bVar9 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar5 >> 8);
    bVar8 = (byte)sVar5;
    if ((DAT_0ab2 & 2) == 0) {
      _DAT_0abc = CONCAT11(bVar3 - (bVar8 < DAT_0abd),bVar8 - DAT_0abd);
    }
    else {
      bVar1 = CARRY1(bVar8,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar8 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    DAT_0ab2 = DAT_0ab2 & 0xfe | 6;
  }
  else {
    sVar5 = (ushort)(byte)(bVar9 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar5 >> 8);
    bVar8 = (byte)sVar5;
    if ((DAT_0ab2 & 2) == 0) {
      bVar1 = CARRY1(bVar8,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar8 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    else {
      _DAT_0abc = CONCAT11(bVar3 - (bVar8 < DAT_0abd),bVar8 - DAT_0abd);
    }
    DAT_0ab2 = DAT_0ab2 & 0xfc | 4;
  }
  if ((DAT_0ab2 & 2) == 0) {
    bVar3 = DAT_0abe + DAT_0abc;
    if (CARRY1(DAT_0abe,DAT_0abc)) {
      bVar3 = 0xff;
    }
  }
  else {
    bVar3 = DAT_0abe - DAT_0abc;
    if (DAT_0abe < DAT_0abc) {
      bVar3 = 0;
    }
  }
  if (((DAT_4ba7 != -0x80) ||
      (((DAT_0d87 == '\t' && ((~DAT_0896._0_1_ & 0x10) != 0)) || (DAT_4ba8 <= DAT_0900._0_1_)))) ||
     (DAT_4ba9 <= DAT_08ce._0_1_)) {
    DAT_0aaf = 0;
    DAT_088d = DAT_088d & 0xbf;
  }
  if ((DAT_0af7 == '\0') && (DAT_0aaf = (DAT_0aaf + 1) - (0xfe < DAT_0aaf), DAT_4baa <= DAT_0aaf)) {
    DAT_088d = DAT_088d | 0x40;
  }
  DAT_0aba = bVar9;
  DAT_0abe = bVar3;
  DAT_0dde = uVar10;
  DAT_0ab8._1_1_ = cVar7;
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d49)) {
    if (DAT_0d87 == '\t') {
      if ((((DAT_08f4 < DAT_4c03) || ((ushort)DAT_4c04 << 8 < DAT_0992)) || (DAT_4c06 < DAT_0982))
         || ((~DAT_0881 & 0x20) != 0)) {
LAB_9d2a:
        DAT_0acf = 0;
LAB_9d2b:
        if (((((~DAT_09a1 & 0x80) == 0) && ((~DAT_08a0 & 0x20) == 0)) &&
            (((~DAT_08b0 & 0x10) == 0 &&
             ((((~DAT_08b0 & 4) == 0 && ((~DAT_08b0 & 2) == 0)) && ((~DAT_08b1 & 0x80) == 0)))))) &&
           ((~DAT_08b1 & 0x40) == 0)) goto LAB_9d51;
      }
      else {
        if ((~DAT_0896._0_1_ & 0x10) != 0) {
          if ((&DAT_4e11)[DAT_0898] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        if ((DAT_0acd == '\0') || (FUN_a3b4(), DAT_0ace == '\0')) goto LAB_9d2a;
        if (DAT_0acf < DAT_4c02) {
          DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
          goto LAB_9d2b;
        }
        DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
      }
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 | 2;
      DAT_0889 = DAT_0889 | 0x80;
    }
    else {
LAB_9d51:
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 & 0xfd;
      DAT_0889 = DAT_0889 & 0x7f;
    }
  }
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d4c)) {
    if ((DAT_4e1b == 0xff) || ((ushort)DAT_4e1b << 8 < DAT_0a2e)) {
      DAT_0b91 = 0;
    }
    else {
      if (DAT_4e95 <= DAT_0b91) {
        DAT_0b90 = DAT_0b90 | 0x80;
      }
      DAT_0b91 = (DAT_0b91 + 1) - (0xfe < DAT_0b91);
    }
    if (((ushort)DAT_4e1a << 8 < DAT_0a2e) && (DAT_4e1a != 0xff)) {
      if ((DAT_0b90 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        if ((DAT_0d87 != '\t') && ((DAT_088c & 0x80) != 0)) {
          DAT_0b90 = DAT_0b90 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        if ((~DAT_0880 & 1) == 0) goto LAB_9dc5;
      }
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 & 0xef;
    }
    else {
LAB_9dc5:
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 | 0x10;
    }
  }
  if (((DAT_0880 & 1) == 0) ||
     (((((~DAT_08af & 0x40) == 0 && ((~DAT_08af & 2) == 0)) &&
       ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))) &&
      ((((~DAT_08b1 & 0x10) == 0 && ((~DAT_08b2 & 0x80) == 0)) && ((~DAT_08b4 & 8) == 0)))))) {
    DAT_0884 = DAT_0884 & 0xdf;
  }
  else {
    DAT_0884 = DAT_0884 | 0x20;
  }
  if ((DAT_0884 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    DAT_0b6f = (DAT_0b6f + 1) - (0xfe < DAT_0b6f);
    if (DAT_4e38 <= DAT_0b6f) {
      if ((~DAT_0888 & 8) == 0) {
        DAT_0888 = DAT_0888 | 8;
      }
      else {
        DAT_0888 = DAT_0888 & 0xf7;
      }
      goto LAB_9e24;
    }
  }
  if (((~DAT_0889 & 2) != 0) &&
     (DAT_0bd1 = (DAT_0bd1 + 1) - (0xfe < DAT_0bd1), DAT_4e66 <= DAT_0bd1)) {
    DAT_0bd1 = 0;
    DAT_0b94 = (DAT_0b94 + 1) - (0xfe < DAT_0b94);
  }
  if ((DAT_0b9a != 0xff) && (DAT_4e3a <= DAT_0b98)) {
    DAT_0b98 = 0;
    DAT_0b9a = (DAT_0b9a + 1) - (0xfe < DAT_0b9a);
    if (4 < DAT_0b9a) {
      DAT_08b8 = DAT_08af;
      DAT_08b9 = DAT_08b0;
      DAT_08ba = DAT_08b1;
      DAT_08bb = DAT_08b2;
      DAT_0bd2 = DAT_0bd2 | 0xf;
      DAT_0b9a = 0xff;
    }
    DAT_0be8 = DAT_0be8 | 0x40;
  }
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    DAT_0d0a = (DAT_0d0a + 1) - (0xfe < DAT_0d0a);
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) &&
     (DAT_0d0b = (DAT_0d0b + 1) - (0xfe < DAT_0d0b), DAT_0d0b <= DAT_4f16)) {
    bVar9 = DAT_0d09 + DAT_0ab3;
    if (CARRY1(DAT_0d09,DAT_0ab3)) {
      bVar9 = 0xff;
    }
    DAT_0d09 = bVar9;
    if ((DAT_4f16 <= DAT_0d0b) && (bVar9 <= DAT_4e84)) {
      DAT_0d08 = DAT_0d08 | 9;
    }
  }
  uVar6 = (ushort)DAT_08d9 * 0x100;
  if ((~DAT_0881 & 0x10) == 0) {
    sVar5 = uVar6 - DAT_08da;
    if (uVar6 < DAT_08da) {
      uVar10 = scale_u16_by_u8(sVar11,CONCAT11((~(byte)((ushort)sVar5 >> 8) + 1) -
                                               ((char)-(char)sVar5 != '\0'),-(char)sVar5));
      sVar11 = CONCAT11((~(byte)((ushort)uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),
                        -(char)uVar10);
    }
    else {
      sVar11 = scale_u16_by_u8(sVar11,sVar5);
    }
    uVar6 = sVar11 + DAT_08da;
  }
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       ((DAT_4e28 < DAT_08ec ||
        ((((DAT_4e29 < DAT_0abe || (DAT_0900 < DAT_4e1e)) || ((~DAT_08af & 8) != 0)) ||
         ((~DAT_08af & 4) != 0)))))) {
      DAT_0adb = DAT_0adb & 0x7f;
      DAT_0adc = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x80;
      if (DAT_4e2a <= DAT_0adc) {
        DAT_0ada = DAT_0ada | 0x80;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    if ((DAT_4e28 < DAT_08ec) || (DAT_4e2b < DAT_0abe)) {
      DAT_0ada = DAT_0ada & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      if ((DAT_0ada & 0x40) != 0) {
        DAT_0ada = DAT_0ada | 0x20;
      }
      if ((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) ||
         ((DAT_0900 < DAT_4e20 || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))))) {
        if ((DAT_0ada & 0x10) != 0) {
          DAT_0ada = DAT_0ada & 0xef;
          DAT_0ae1 = 0;
        }
        if ((DAT_0ada & 0x40) != 0) {
          if ((~DAT_0ada & 8) == 0) {
            if (((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) || (DAT_4e22 < DAT_0900))
               || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))) goto LAB_a04f;
            DAT_0ada = DAT_0ada | 8;
          }
          if ((((~DAT_0ada & 0x80) != 0) || ((DAT_08b1 & 0x20) != 0)) &&
             ((DAT_0900 < DAT_4e20 && (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))))) {
            DAT_0ada = DAT_0ada & 0xef | 100;
            goto LAB_a04f;
          }
        }
        if ((DAT_0ada & 4) != 0) {
          DAT_0ada = DAT_0ada & 0xfb;
          DAT_0ae1 = 0;
        }
      }
      else {
        DAT_0ada = DAT_0ada & 0xf3 | 0x70;
      }
    }
  }
LAB_a04f:
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       (((DAT_4e28 < DAT_08ec ||
         (((DAT_4e29 < DAT_0abe || (DAT_4e24 <= DAT_0900)) || ((~DAT_08af & 8) != 0)))) ||
        ((((~DAT_08af & 4) != 0 || (DAT_0ad6 != 0)) || (DAT_0ad9 != '\0')))))) {
      DAT_0adb = DAT_0adb & 0xbf;
      DAT_0add = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x40;
      if (DAT_4e31 <= DAT_0add) {
        DAT_0ada = DAT_0ada & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = '\0';
        DAT_0ae1 = 0;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    bVar9 = DAT_0bd2;
    if (DAT_0d5f != -0x80) {
      if ((DAT_0ada & 0x40) == 0) {
        DAT_0adb = DAT_0adb & 0xdf;
        DAT_0ade = 0;
      }
      else {
        DAT_0adb = DAT_0adb | 0x20;
        if ((DAT_4e57 <= DAT_0ade) && ((~DAT_08b1 & 0x20) == 0)) {
          DAT_08b1 = DAT_08b1 | 0x20;
          bVar9 = DAT_0bd2 | 0x20;
          if ((~DAT_08ba & 0x20) == 0) {
            DAT_08ba = DAT_08ba | 0x20;
            bVar9 = DAT_0bd2 | 0x22;
          }
        }
      }
    }
    DAT_0bd2 = bVar9;
    if ((DAT_0881 & 0x10) == 0) {
      bVar9 = DAT_0adb | 0x10;
      if ((DAT_4e57 <= DAT_0adf) &&
         ((((((~DAT_088d & 0x20) != 0 || ((~DAT_0885 & 0x20) != 0)) ||
            (((~DAT_0889 & 2) == 0 && (((~DAT_0880 & 4) == 0 && ((~DAT_0aa6 & 4) == 0)))))) &&
           (((~DAT_0ada & 0x80) != 0 || ((DAT_08b1 & 0x20) != 0)))) &&
          ((((((DAT_08ec <= DAT_4e28 && (DAT_0abe <= DAT_4e29)) && (DAT_0900 < DAT_4e24)) &&
             (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))) && (DAT_0ad6 == 0)) &&
           (DAT_0ad9 == '\0')))))) {
        DAT_0adb = DAT_0adb | 0x18;
        if (((DAT_4e31 <= DAT_0ae0) && (DAT_0ada = DAT_0ada & 0x7f, DAT_0d5f != -0x80)) &&
           ((DAT_08b1 & 0x20) != 0)) {
          DAT_08b1 = DAT_08b1 & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
        goto LAB_a1ae;
      }
    }
    else {
      DAT_0adf = 0;
      bVar9 = DAT_0adb & 0xef;
    }
    DAT_0adb = bVar9;
    DAT_0adb = DAT_0adb & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  DAT_08da = uVar6;
  FUN_5fc8();
  if ((~DAT_0891 & 2) == 0) {
    if ((DAT_0891 & 0x80) == 0) {
LAB_a24a:
      if (DAT_0bd2 == 0) {
LAB_a26f:
        if (DAT_0be8 != 0) {
          if ((DAT_0be8 & 0x80) == 0) {
            if ((DAT_0be8 & 0x40) == 0) {
              if ((DAT_0be8 & 4) != 0) goto LAB_a2b4;
            }
            else {
LAB_a2af:
              FUN_b78f();
            }
          }
          else {
LAB_a296:
            FUN_b758();
          }
        }
      }
      else if ((DAT_0bd2 & 0x80) == 0) {
        if ((DAT_0bd2 & 0x40) == 0) {
          if ((DAT_0bd2 & 0x20) == 0) {
            if ((DAT_0bd2 & 0x10) == 0) {
              if ((DAT_0bd2 & 8) == 0) {
                if ((DAT_0bd2 & 4) == 0) {
                  if ((DAT_0bd2 & 2) == 0) {
                    if ((DAT_0bd2 & 1) != 0) goto LAB_a2aa;
                    goto LAB_a26f;
                  }
LAB_a2a5:
                  FUN_b6ea();
                }
                else {
LAB_a2a0:
                  FUN_b6b3();
                }
              }
              else {
LAB_a29b:
                FUN_b67c();
              }
            }
            else {
LAB_a291:
              FUN_b645();
            }
          }
          else {
LAB_a28c:
            FUN_b60e();
          }
        }
        else {
LAB_a287:
          FUN_b5d7();
        }
      }
      else {
LAB_a282:
        FUN_b5a0();
      }
    }
    else if ((~DAT_088f & 0x80) == 0) {
      if ((~DAT_088f & 0x40) == 0) goto LAB_a24a;
      FUN_b4c6();
    }
    else {
      FUN_b3ec();
    }
  }
  else if ((DAT_0891 & 0x80) == 0) {
LAB_a1d9:
    if (DAT_0bd3 == 0) {
LAB_a20e:
      if (DAT_0be9 != 0) {
        if ((DAT_0be9 & 0x80) != 0) goto LAB_a296;
        if ((DAT_0be9 & 0x40) != 0) goto LAB_a2af;
        if ((DAT_0be9 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
        FUN_b7b9();
      }
    }
    else {
      if ((DAT_0bd3 & 0x80) != 0) goto LAB_a282;
      if ((DAT_0bd3 & 0x40) != 0) goto LAB_a287;
      if ((DAT_0bd3 & 0x20) != 0) goto LAB_a28c;
      if ((DAT_0bd3 & 0x10) != 0) goto LAB_a291;
      if ((DAT_0bd3 & 8) != 0) goto LAB_a29b;
      if ((DAT_0bd3 & 4) != 0) goto LAB_a2a0;
      if ((DAT_0bd3 & 2) != 0) goto LAB_a2a5;
      if ((DAT_0bd3 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
      FUN_b721();
    }
  }
  else if ((~DAT_0890 & 0x80) == 0) {
    if ((~DAT_0890 & 0x40) == 0) goto LAB_a1d9;
    FUN_b4c6();
  }
  else {
    FUN_b3ec();
  }
LAB_a2b9:
  bVar9 = DAT_0000;
  bVar9 = bVar9 & 0xe0;
  if (bVar9 == 0x80) {
    if (((DAT_08b1 & 0x80) != 0x80) || (bVar9 = DAT_0000, (bVar9 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar9 != 0) {
    if (((bVar9 == 0x40) && ((DAT_08b1 & 0x80) == 0x80)) &&
       (bVar9 = DAT_0000, (bVar9 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  if (((DAT_08b1 & 0x80) == 0x80) && (bVar9 = DAT_0000, (bVar9 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  DAT_08bc = DAT_08bc & 0xf7;
  return;
}


/* Entry 997a */

/* WARNING: Removing unreachable block (RAM,0x9c19) */
/* WARNING: Removing unreachable block (RAM,0x9b8d) */
/* WARNING: Removing unreachable block (RAM,0x9b50) */
/* WARNING: Removing unreachable block (RAM,0x9b57) */
/* WARNING: Removing unreachable block (RAM,0x9b59) */
/* WARNING: Removing unreachable block (RAM,0x9b6c) */
/* WARNING: Removing unreachable block (RAM,0x9b6f) */
/* WARNING: Removing unreachable block (RAM,0x9b80) */
/* WARNING: Removing unreachable block (RAM,0x9b74) */
/* WARNING: Removing unreachable block (RAM,0x9b7b) */
/* WARNING: Removing unreachable block (RAM,0x9b87) */
/* WARNING: Removing unreachable block (RAM,0x9b95) */
/* WARNING: Removing unreachable block (RAM,0x9bb8) */
/* WARNING: Removing unreachable block (RAM,0x9c36) */
/* WARNING: Removing unreachable block (RAM,0x9bdb) */
/* WARNING: Removing unreachable block (RAM,0x9be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_997a(void)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar7;
  short sVar5;
  byte bVar8;
  byte bVar9;
  ushort uVar6;
  undefined2 uVar10;
  short sVar11;
  
  sVar11 = DAT_0ab4;
  bVar3 = DAT_0aa7;
  bVar9 = DAT_0aa6;
  if (DAT_0d87 == '\t') {
    if (DAT_0898 == DAT_4afa) {
      if (DAT_4afd <= DAT_0aab) {
        DAT_0aa6 = DAT_0aa6 | 0x10;
        DAT_0aa7 = DAT_0aa7 | 4;
      }
LAB_99b5:
      DAT_0aa6 = DAT_0aa6 | 0x40;
      FUN_99fd();
      return;
    }
    DAT_0aab = 0;
    if ((DAT_0aa6 & 0x10) == 0) goto LAB_99b5;
  }
  else {
    if ((DAT_4afe <= DAT_0aa8._0_1_) && (DAT_0aa8._0_1_ < DAT_4aff)) {
      if (DAT_4afd <= DAT_0aab) {
        DAT_0aa6 = DAT_0aa6 | 0x10;
        DAT_0aa7 = DAT_0aa7 | 4;
      }
LAB_99f2:
      DAT_0aa6 = DAT_0aa6 | 0x40;
      FUN_99fd();
      return;
    }
    DAT_0aab = 0;
    if ((DAT_0aa6 & 0x10) == 0) goto LAB_99f2;
  }
  DAT_0aa7 = DAT_0aa7 & 0xfb;
  DAT_0aa6 = DAT_0aa6 & 0xaf | 2;
  if ((bVar9 & 8) != 0) {
    if (DAT_0aaa < DAT_4b01) {
      if (DAT_4b02 <= DAT_08e8._0_1_) {
        DAT_0aaa = 0;
        DAT_0aa6 = bVar9 & 0xa7 | 6;
      }
    }
    else {
      DAT_0aaa = 0;
      DAT_0aa6 = bVar9 & 0x87 | 2;
    }
  }
  if ((DAT_0aa6 & 4) != 0) {
    DAT_0aac = DAT_4b05;
    if ((bVar3 & 8) != 0) {
      DAT_0aac = DAT_4b04;
    }
    if ((DAT_08e8._0_1_ < DAT_4b02) || (DAT_4b06 <= DAT_0aaa)) {
      DAT_0aa7 = DAT_0aa7 | 2;
      DAT_0aa6 = DAT_0aa6 & 0xfb | 3;
    }
  }
  if ((~DAT_0aa6 & 2) != 0) {
    if (((DAT_0aa6 & 1) != 0) &&
       (DAT_0aae = (DAT_0aae + 1) - (0xfe < DAT_0aae), DAT_4b07 <= DAT_0aae)) {
      DAT_0aae = 0;
      DAT_0aad = (DAT_0aad + 1) - (0xfe < DAT_0aad);
      bVar9 = DAT_0aac;
      if ((DAT_0aa7 & 2) != 0) {
        bVar3 = DAT_4b05;
        if ((DAT_0aa7 & 8) != 0) {
          bVar3 = DAT_4b04;
        }
        bVar9 = bVar3 + DAT_0aad;
        if (CARRY1(bVar3,DAT_0aad)) {
          bVar9 = 0xff;
        }
        if (DAT_0a83 <= bVar9) {
          DAT_0aa7 = DAT_0aa7 & 0xfd;
          bVar9 = DAT_0aac;
        }
      }
      DAT_0aac = bVar9;
      if ((~DAT_0aa7 & 2) == 0) {
        DAT_0aa6 = DAT_0aa6 & 0xfe;
        DAT_0aad = 0;
        DAT_0aa7 = DAT_0aa7 & 0xf7;
      }
    }
    if ((~DAT_0aa6 & 1) == 0) {
      DAT_0aa6 = DAT_0aa6 & 0xfd;
      DAT_0aaa = 0;
    }
  }
  DAT_0aab = 0;
  DAT_0ab6 = DAT_0ab4;
  DAT_0ab4 = DAT_0ab0;
  sVar11 = DAT_0ab0 - sVar11;
  if ((~DAT_0ab2 & 4) == 0) {
    sVar11 = 0;
  }
  if ((char)((ushort)sVar11 >> 8) != '\0') {
    sVar11 = 0xff;
  }
  DAT_0ab3 = (byte)sVar11;
  iVar2 = (uint)DAT_4bd4 * (uint)DAT_0ab3;
  uVar10 = (undefined2)((uint)iVar2 >> 0x10);
  DAT_0de0 = CONCAT11((char)((uint)iVar2 >> 8) - ((byte)iVar2 < DAT_0aba),(byte)iVar2 - DAT_0aba);
  DAT_0dde._1_1_ = (char)((uint)iVar2 >> 0x10);
  if ((char)DAT_0dde != '\0') {
    DAT_0de0 = 0xffff;
  }
  sVar11 = (short)((uint)DAT_4bd6 * (uint)DAT_0de0 >> 0x10);
  uVar4 = (undefined2)((uint)DAT_4bd6 * (uint)DAT_0de0);
  if (sVar11 != 0) {
    uVar4 = 0xffff;
  }
  bVar9 = (byte)((ushort)uVar4 >> 8);
  bVar3 = (byte)uVar4;
  if ((DAT_0ab2 & 1) == 0) {
    cVar7 = bVar3 + (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar9 + CARRY1(bVar3,(byte)DAT_0ab8);
    if (CARRY1(bVar9,CARRY1(bVar3,(byte)DAT_0ab8))) {
      cVar7 = -1;
      DAT_0ab8._0_1_ = 0xff;
    }
  }
  else {
    cVar7 = bVar3 - (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar9 - (bVar3 < (byte)DAT_0ab8);
  }
  bVar9 = DAT_0aba + DAT_0ab8._0_1_;
  if (CARRY1(DAT_0aba,DAT_0ab8._0_1_)) {
    bVar9 = 0xff;
  }
  if (bVar9 < DAT_0abe) {
    sVar5 = (ushort)(byte)-(bVar9 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar5 >> 8);
    bVar8 = (byte)sVar5;
    if ((DAT_0ab2 & 2) == 0) {
      _DAT_0abc = CONCAT11(bVar3 - (bVar8 < DAT_0abd),bVar8 - DAT_0abd);
    }
    else {
      bVar1 = CARRY1(bVar8,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar8 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    DAT_0ab2 = DAT_0ab2 & 0xfe | 6;
  }
  else {
    sVar5 = (ushort)(byte)(bVar9 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar5 >> 8);
    bVar8 = (byte)sVar5;
    if ((DAT_0ab2 & 2) == 0) {
      bVar1 = CARRY1(bVar8,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar8 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    else {
      _DAT_0abc = CONCAT11(bVar3 - (bVar8 < DAT_0abd),bVar8 - DAT_0abd);
    }
    DAT_0ab2 = DAT_0ab2 & 0xfc | 4;
  }
  if ((DAT_0ab2 & 2) == 0) {
    bVar3 = DAT_0abe + DAT_0abc;
    if (CARRY1(DAT_0abe,DAT_0abc)) {
      bVar3 = 0xff;
    }
  }
  else {
    bVar3 = DAT_0abe - DAT_0abc;
    if (DAT_0abe < DAT_0abc) {
      bVar3 = 0;
    }
  }
  if (((DAT_4ba7 != -0x80) ||
      (((DAT_0d87 == '\t' && ((~DAT_0896._0_1_ & 0x10) != 0)) || (DAT_4ba8 <= DAT_0900._0_1_)))) ||
     (DAT_4ba9 <= DAT_08ce._0_1_)) {
    DAT_0aaf = 0;
    DAT_088d = DAT_088d & 0xbf;
  }
  if ((DAT_0af7 == '\0') && (DAT_0aaf = (DAT_0aaf + 1) - (0xfe < DAT_0aaf), DAT_4baa <= DAT_0aaf)) {
    DAT_088d = DAT_088d | 0x40;
  }
  DAT_0aba = bVar9;
  DAT_0abe = bVar3;
  DAT_0dde = uVar10;
  DAT_0ab8._1_1_ = cVar7;
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d49)) {
    if (DAT_0d87 == '\t') {
      if ((((DAT_08f4 < DAT_4c03) || ((ushort)DAT_4c04 << 8 < DAT_0992)) || (DAT_4c06 < DAT_0982))
         || ((~DAT_0881 & 0x20) != 0)) {
LAB_9d2a:
        DAT_0acf = 0;
LAB_9d2b:
        if (((((~DAT_09a1 & 0x80) == 0) && ((~DAT_08a0 & 0x20) == 0)) &&
            (((~DAT_08b0 & 0x10) == 0 &&
             ((((~DAT_08b0 & 4) == 0 && ((~DAT_08b0 & 2) == 0)) && ((~DAT_08b1 & 0x80) == 0)))))) &&
           ((~DAT_08b1 & 0x40) == 0)) goto LAB_9d51;
      }
      else {
        if ((~DAT_0896._0_1_ & 0x10) != 0) {
          if ((&DAT_4e11)[DAT_0898] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        if ((DAT_0acd == '\0') || (FUN_a3b4(), DAT_0ace == '\0')) goto LAB_9d2a;
        if (DAT_0acf < DAT_4c02) {
          DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
          goto LAB_9d2b;
        }
        DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
      }
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 | 2;
      DAT_0889 = DAT_0889 | 0x80;
    }
    else {
LAB_9d51:
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 & 0xfd;
      DAT_0889 = DAT_0889 & 0x7f;
    }
  }
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d4c)) {
    if ((DAT_4e1b == 0xff) || ((ushort)DAT_4e1b << 8 < DAT_0a2e)) {
      DAT_0b91 = 0;
    }
    else {
      if (DAT_4e95 <= DAT_0b91) {
        DAT_0b90 = DAT_0b90 | 0x80;
      }
      DAT_0b91 = (DAT_0b91 + 1) - (0xfe < DAT_0b91);
    }
    if (((ushort)DAT_4e1a << 8 < DAT_0a2e) && (DAT_4e1a != 0xff)) {
      if ((DAT_0b90 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        if ((DAT_0d87 != '\t') && ((DAT_088c & 0x80) != 0)) {
          DAT_0b90 = DAT_0b90 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        if ((~DAT_0880 & 1) == 0) goto LAB_9dc5;
      }
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 & 0xef;
    }
    else {
LAB_9dc5:
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 | 0x10;
    }
  }
  if (((DAT_0880 & 1) == 0) ||
     (((((~DAT_08af & 0x40) == 0 && ((~DAT_08af & 2) == 0)) &&
       ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))) &&
      ((((~DAT_08b1 & 0x10) == 0 && ((~DAT_08b2 & 0x80) == 0)) && ((~DAT_08b4 & 8) == 0)))))) {
    DAT_0884 = DAT_0884 & 0xdf;
  }
  else {
    DAT_0884 = DAT_0884 | 0x20;
  }
  if ((DAT_0884 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    DAT_0b6f = (DAT_0b6f + 1) - (0xfe < DAT_0b6f);
    if (DAT_4e38 <= DAT_0b6f) {
      if ((~DAT_0888 & 8) == 0) {
        DAT_0888 = DAT_0888 | 8;
      }
      else {
        DAT_0888 = DAT_0888 & 0xf7;
      }
      goto LAB_9e24;
    }
  }
  if (((~DAT_0889 & 2) != 0) &&
     (DAT_0bd1 = (DAT_0bd1 + 1) - (0xfe < DAT_0bd1), DAT_4e66 <= DAT_0bd1)) {
    DAT_0bd1 = 0;
    DAT_0b94 = (DAT_0b94 + 1) - (0xfe < DAT_0b94);
  }
  if ((DAT_0b9a != 0xff) && (DAT_4e3a <= DAT_0b98)) {
    DAT_0b98 = 0;
    DAT_0b9a = (DAT_0b9a + 1) - (0xfe < DAT_0b9a);
    if (4 < DAT_0b9a) {
      DAT_08b8 = DAT_08af;
      DAT_08b9 = DAT_08b0;
      DAT_08ba = DAT_08b1;
      DAT_08bb = DAT_08b2;
      DAT_0bd2 = DAT_0bd2 | 0xf;
      DAT_0b9a = 0xff;
    }
    DAT_0be8 = DAT_0be8 | 0x40;
  }
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    DAT_0d0a = (DAT_0d0a + 1) - (0xfe < DAT_0d0a);
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) &&
     (DAT_0d0b = (DAT_0d0b + 1) - (0xfe < DAT_0d0b), DAT_0d0b <= DAT_4f16)) {
    bVar9 = DAT_0d09 + DAT_0ab3;
    if (CARRY1(DAT_0d09,DAT_0ab3)) {
      bVar9 = 0xff;
    }
    DAT_0d09 = bVar9;
    if ((DAT_4f16 <= DAT_0d0b) && (bVar9 <= DAT_4e84)) {
      DAT_0d08 = DAT_0d08 | 9;
    }
  }
  uVar6 = (ushort)DAT_08d9 * 0x100;
  if ((~DAT_0881 & 0x10) == 0) {
    sVar5 = uVar6 - DAT_08da;
    if (uVar6 < DAT_08da) {
      uVar10 = scale_u16_by_u8(sVar11,CONCAT11((~(byte)((ushort)sVar5 >> 8) + 1) -
                                               ((char)-(char)sVar5 != '\0'),-(char)sVar5));
      sVar11 = CONCAT11((~(byte)((ushort)uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),
                        -(char)uVar10);
    }
    else {
      sVar11 = scale_u16_by_u8(sVar11,sVar5);
    }
    uVar6 = sVar11 + DAT_08da;
  }
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       ((DAT_4e28 < DAT_08ec ||
        ((((DAT_4e29 < DAT_0abe || (DAT_0900 < DAT_4e1e)) || ((~DAT_08af & 8) != 0)) ||
         ((~DAT_08af & 4) != 0)))))) {
      DAT_0adb = DAT_0adb & 0x7f;
      DAT_0adc = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x80;
      if (DAT_4e2a <= DAT_0adc) {
        DAT_0ada = DAT_0ada | 0x80;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    if ((DAT_4e28 < DAT_08ec) || (DAT_4e2b < DAT_0abe)) {
      DAT_0ada = DAT_0ada & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      if ((DAT_0ada & 0x40) != 0) {
        DAT_0ada = DAT_0ada | 0x20;
      }
      if ((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) ||
         ((DAT_0900 < DAT_4e20 || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))))) {
        if ((DAT_0ada & 0x10) != 0) {
          DAT_0ada = DAT_0ada & 0xef;
          DAT_0ae1 = 0;
        }
        if ((DAT_0ada & 0x40) != 0) {
          if ((~DAT_0ada & 8) == 0) {
            if (((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) || (DAT_4e22 < DAT_0900))
               || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))) goto LAB_a04f;
            DAT_0ada = DAT_0ada | 8;
          }
          if ((((~DAT_0ada & 0x80) != 0) || ((DAT_08b1 & 0x20) != 0)) &&
             ((DAT_0900 < DAT_4e20 && (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))))) {
            DAT_0ada = DAT_0ada & 0xef | 100;
            goto LAB_a04f;
          }
        }
        if ((DAT_0ada & 4) != 0) {
          DAT_0ada = DAT_0ada & 0xfb;
          DAT_0ae1 = 0;
        }
      }
      else {
        DAT_0ada = DAT_0ada & 0xf3 | 0x70;
      }
    }
  }
LAB_a04f:
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       (((DAT_4e28 < DAT_08ec ||
         (((DAT_4e29 < DAT_0abe || (DAT_4e24 <= DAT_0900)) || ((~DAT_08af & 8) != 0)))) ||
        ((((~DAT_08af & 4) != 0 || (DAT_0ad6 != 0)) || (DAT_0ad9 != '\0')))))) {
      DAT_0adb = DAT_0adb & 0xbf;
      DAT_0add = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x40;
      if (DAT_4e31 <= DAT_0add) {
        DAT_0ada = DAT_0ada & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = '\0';
        DAT_0ae1 = 0;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    bVar9 = DAT_0bd2;
    if (DAT_0d5f != -0x80) {
      if ((DAT_0ada & 0x40) == 0) {
        DAT_0adb = DAT_0adb & 0xdf;
        DAT_0ade = 0;
      }
      else {
        DAT_0adb = DAT_0adb | 0x20;
        if ((DAT_4e57 <= DAT_0ade) && ((~DAT_08b1 & 0x20) == 0)) {
          DAT_08b1 = DAT_08b1 | 0x20;
          bVar9 = DAT_0bd2 | 0x20;
          if ((~DAT_08ba & 0x20) == 0) {
            DAT_08ba = DAT_08ba | 0x20;
            bVar9 = DAT_0bd2 | 0x22;
          }
        }
      }
    }
    DAT_0bd2 = bVar9;
    if ((DAT_0881 & 0x10) == 0) {
      bVar9 = DAT_0adb | 0x10;
      if ((DAT_4e57 <= DAT_0adf) &&
         ((((((~DAT_088d & 0x20) != 0 || ((~DAT_0885 & 0x20) != 0)) ||
            (((~DAT_0889 & 2) == 0 && (((~DAT_0880 & 4) == 0 && ((~DAT_0aa6 & 4) == 0)))))) &&
           (((~DAT_0ada & 0x80) != 0 || ((DAT_08b1 & 0x20) != 0)))) &&
          ((((((DAT_08ec <= DAT_4e28 && (DAT_0abe <= DAT_4e29)) && (DAT_0900 < DAT_4e24)) &&
             (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))) && (DAT_0ad6 == 0)) &&
           (DAT_0ad9 == '\0')))))) {
        DAT_0adb = DAT_0adb | 0x18;
        if (((DAT_4e31 <= DAT_0ae0) && (DAT_0ada = DAT_0ada & 0x7f, DAT_0d5f != -0x80)) &&
           ((DAT_08b1 & 0x20) != 0)) {
          DAT_08b1 = DAT_08b1 & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
        goto LAB_a1ae;
      }
    }
    else {
      DAT_0adf = 0;
      bVar9 = DAT_0adb & 0xef;
    }
    DAT_0adb = bVar9;
    DAT_0adb = DAT_0adb & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  DAT_08da = uVar6;
  FUN_5fc8();
  if ((~DAT_0891 & 2) == 0) {
    if ((DAT_0891 & 0x80) == 0) {
LAB_a24a:
      if (DAT_0bd2 == 0) {
LAB_a26f:
        if (DAT_0be8 != 0) {
          if ((DAT_0be8 & 0x80) == 0) {
            if ((DAT_0be8 & 0x40) == 0) {
              if ((DAT_0be8 & 4) != 0) goto LAB_a2b4;
            }
            else {
LAB_a2af:
              FUN_b78f();
            }
          }
          else {
LAB_a296:
            FUN_b758();
          }
        }
      }
      else if ((DAT_0bd2 & 0x80) == 0) {
        if ((DAT_0bd2 & 0x40) == 0) {
          if ((DAT_0bd2 & 0x20) == 0) {
            if ((DAT_0bd2 & 0x10) == 0) {
              if ((DAT_0bd2 & 8) == 0) {
                if ((DAT_0bd2 & 4) == 0) {
                  if ((DAT_0bd2 & 2) == 0) {
                    if ((DAT_0bd2 & 1) != 0) goto LAB_a2aa;
                    goto LAB_a26f;
                  }
LAB_a2a5:
                  FUN_b6ea();
                }
                else {
LAB_a2a0:
                  FUN_b6b3();
                }
              }
              else {
LAB_a29b:
                FUN_b67c();
              }
            }
            else {
LAB_a291:
              FUN_b645();
            }
          }
          else {
LAB_a28c:
            FUN_b60e();
          }
        }
        else {
LAB_a287:
          FUN_b5d7();
        }
      }
      else {
LAB_a282:
        FUN_b5a0();
      }
    }
    else if ((~DAT_088f & 0x80) == 0) {
      if ((~DAT_088f & 0x40) == 0) goto LAB_a24a;
      FUN_b4c6();
    }
    else {
      FUN_b3ec();
    }
  }
  else if ((DAT_0891 & 0x80) == 0) {
LAB_a1d9:
    if (DAT_0bd3 == 0) {
LAB_a20e:
      if (DAT_0be9 != 0) {
        if ((DAT_0be9 & 0x80) != 0) goto LAB_a296;
        if ((DAT_0be9 & 0x40) != 0) goto LAB_a2af;
        if ((DAT_0be9 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
        FUN_b7b9();
      }
    }
    else {
      if ((DAT_0bd3 & 0x80) != 0) goto LAB_a282;
      if ((DAT_0bd3 & 0x40) != 0) goto LAB_a287;
      if ((DAT_0bd3 & 0x20) != 0) goto LAB_a28c;
      if ((DAT_0bd3 & 0x10) != 0) goto LAB_a291;
      if ((DAT_0bd3 & 8) != 0) goto LAB_a29b;
      if ((DAT_0bd3 & 4) != 0) goto LAB_a2a0;
      if ((DAT_0bd3 & 2) != 0) goto LAB_a2a5;
      if ((DAT_0bd3 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
      FUN_b721();
    }
  }
  else if ((~DAT_0890 & 0x80) == 0) {
    if ((~DAT_0890 & 0x40) == 0) goto LAB_a1d9;
    FUN_b4c6();
  }
  else {
    FUN_b3ec();
  }
LAB_a2b9:
  bVar9 = DAT_0000;
  bVar9 = bVar9 & 0xe0;
  if (bVar9 == 0x80) {
    if (((DAT_08b1 & 0x80) != 0x80) || (bVar9 = DAT_0000, (bVar9 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar9 != 0) {
    if (((bVar9 == 0x40) && ((DAT_08b1 & 0x80) == 0x80)) &&
       (bVar9 = DAT_0000, (bVar9 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  if (((DAT_08b1 & 0x80) == 0x80) && (bVar9 = DAT_0000, (bVar9 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  DAT_08bc = DAT_08bc & 0xf7;
  return;
}


/* Entry 99f8 */

/* WARNING: Removing unreachable block (RAM,0x9c19) */
/* WARNING: Removing unreachable block (RAM,0x9b8d) */
/* WARNING: Removing unreachable block (RAM,0x9b50) */
/* WARNING: Removing unreachable block (RAM,0x9b57) */
/* WARNING: Removing unreachable block (RAM,0x9b59) */
/* WARNING: Removing unreachable block (RAM,0x9b6c) */
/* WARNING: Removing unreachable block (RAM,0x9b6f) */
/* WARNING: Removing unreachable block (RAM,0x9b80) */
/* WARNING: Removing unreachable block (RAM,0x9b74) */
/* WARNING: Removing unreachable block (RAM,0x9b7b) */
/* WARNING: Removing unreachable block (RAM,0x9b87) */
/* WARNING: Removing unreachable block (RAM,0x9b95) */
/* WARNING: Removing unreachable block (RAM,0x9bb8) */
/* WARNING: Removing unreachable block (RAM,0x9c36) */
/* WARNING: Removing unreachable block (RAM,0x9bdb) */
/* WARNING: Removing unreachable block (RAM,0x9be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_unreferenced_99f8(void)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar7;
  short sVar5;
  byte bVar8;
  byte bVar9;
  ushort uVar6;
  undefined2 uVar10;
  short sVar11;
  
  sVar11 = DAT_0ab4;
  if ((DAT_0aa6 & 8) != 0) {
    if (DAT_0aaa < DAT_4b01) {
      if (DAT_4b02 <= DAT_08e8._0_1_) {
        DAT_0aaa = 0;
        DAT_0aa6 = DAT_0aa6 & 0xf7 | 4;
      }
    }
    else {
      DAT_0aaa = 0;
      DAT_0aa6 = DAT_0aa6 & 0x87 | 2;
    }
  }
  if ((DAT_0aa6 & 4) != 0) {
    DAT_0aac = DAT_4b05;
    if ((DAT_0aa7 & 8) != 0) {
      DAT_0aac = DAT_4b04;
    }
    if ((DAT_08e8._0_1_ < DAT_4b02) || (DAT_4b06 <= DAT_0aaa)) {
      DAT_0aa7 = DAT_0aa7 | 2;
      DAT_0aa6 = DAT_0aa6 & 0xfb | 3;
    }
  }
  if ((~DAT_0aa6 & 2) != 0) {
    if (((DAT_0aa6 & 1) != 0) &&
       (DAT_0aae = (DAT_0aae + 1) - (0xfe < DAT_0aae), DAT_4b07 <= DAT_0aae)) {
      DAT_0aae = 0;
      DAT_0aad = (DAT_0aad + 1) - (0xfe < DAT_0aad);
      bVar9 = DAT_0aac;
      if ((DAT_0aa7 & 2) != 0) {
        bVar3 = DAT_4b05;
        if ((DAT_0aa7 & 8) != 0) {
          bVar3 = DAT_4b04;
        }
        bVar9 = bVar3 + DAT_0aad;
        if (CARRY1(bVar3,DAT_0aad)) {
          bVar9 = 0xff;
        }
        if (DAT_0a83 <= bVar9) {
          DAT_0aa7 = DAT_0aa7 & 0xfd;
          bVar9 = DAT_0aac;
        }
      }
      DAT_0aac = bVar9;
      if ((~DAT_0aa7 & 2) == 0) {
        DAT_0aa6 = DAT_0aa6 & 0xfe;
        DAT_0aad = 0;
        DAT_0aa7 = DAT_0aa7 & 0xf3;
      }
    }
    if ((~DAT_0aa6 & 1) == 0) {
      DAT_0aa6 = DAT_0aa6 & 0xfd;
      DAT_0aaa = 0;
    }
  }
  DAT_0aab = 0;
  DAT_0ab6 = DAT_0ab4;
  DAT_0ab4 = DAT_0ab0;
  sVar11 = DAT_0ab0 - sVar11;
  if ((~DAT_0ab2 & 4) == 0) {
    sVar11 = 0;
  }
  if ((char)((ushort)sVar11 >> 8) != '\0') {
    sVar11 = 0xff;
  }
  DAT_0ab3 = (byte)sVar11;
  iVar2 = (uint)DAT_4bd4 * (uint)DAT_0ab3;
  uVar10 = (undefined2)((uint)iVar2 >> 0x10);
  DAT_0de0 = CONCAT11((char)((uint)iVar2 >> 8) - ((byte)iVar2 < DAT_0aba),(byte)iVar2 - DAT_0aba);
  DAT_0dde._1_1_ = (char)((uint)iVar2 >> 0x10);
  if ((char)DAT_0dde != '\0') {
    DAT_0de0 = 0xffff;
  }
  sVar11 = (short)((uint)DAT_4bd6 * (uint)DAT_0de0 >> 0x10);
  uVar4 = (undefined2)((uint)DAT_4bd6 * (uint)DAT_0de0);
  if (sVar11 != 0) {
    uVar4 = 0xffff;
  }
  bVar9 = (byte)((ushort)uVar4 >> 8);
  bVar3 = (byte)uVar4;
  if ((DAT_0ab2 & 1) == 0) {
    cVar7 = bVar3 + (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar9 + CARRY1(bVar3,(byte)DAT_0ab8);
    if (CARRY1(bVar9,CARRY1(bVar3,(byte)DAT_0ab8))) {
      cVar7 = -1;
      DAT_0ab8._0_1_ = 0xff;
    }
  }
  else {
    cVar7 = bVar3 - (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar9 - (bVar3 < (byte)DAT_0ab8);
  }
  bVar9 = DAT_0aba + DAT_0ab8._0_1_;
  if (CARRY1(DAT_0aba,DAT_0ab8._0_1_)) {
    bVar9 = 0xff;
  }
  if (bVar9 < DAT_0abe) {
    sVar5 = (ushort)(byte)-(bVar9 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar5 >> 8);
    bVar8 = (byte)sVar5;
    if ((DAT_0ab2 & 2) == 0) {
      _DAT_0abc = CONCAT11(bVar3 - (bVar8 < DAT_0abd),bVar8 - DAT_0abd);
    }
    else {
      bVar1 = CARRY1(bVar8,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar8 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    DAT_0ab2 = DAT_0ab2 & 0xfe | 6;
  }
  else {
    sVar5 = (ushort)(byte)(bVar9 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar5 >> 8);
    bVar8 = (byte)sVar5;
    if ((DAT_0ab2 & 2) == 0) {
      bVar1 = CARRY1(bVar8,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar8 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    else {
      _DAT_0abc = CONCAT11(bVar3 - (bVar8 < DAT_0abd),bVar8 - DAT_0abd);
    }
    DAT_0ab2 = DAT_0ab2 & 0xfc | 4;
  }
  if ((DAT_0ab2 & 2) == 0) {
    bVar3 = DAT_0abe + DAT_0abc;
    if (CARRY1(DAT_0abe,DAT_0abc)) {
      bVar3 = 0xff;
    }
  }
  else {
    bVar3 = DAT_0abe - DAT_0abc;
    if (DAT_0abe < DAT_0abc) {
      bVar3 = 0;
    }
  }
  if (((DAT_4ba7 != -0x80) ||
      (((DAT_0d87 == '\t' && ((~DAT_0896._0_1_ & 0x10) != 0)) || (DAT_4ba8 <= DAT_0900._0_1_)))) ||
     (DAT_4ba9 <= DAT_08ce._0_1_)) {
    DAT_0aaf = 0;
    DAT_088d = DAT_088d & 0xbf;
  }
  if ((DAT_0af7 == '\0') && (DAT_0aaf = (DAT_0aaf + 1) - (0xfe < DAT_0aaf), DAT_4baa <= DAT_0aaf)) {
    DAT_088d = DAT_088d | 0x40;
  }
  DAT_0aba = bVar9;
  DAT_0abe = bVar3;
  DAT_0dde = uVar10;
  DAT_0ab8._1_1_ = cVar7;
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d49)) {
    if (DAT_0d87 == '\t') {
      if ((((DAT_08f4 < DAT_4c03) || ((ushort)DAT_4c04 << 8 < DAT_0992)) || (DAT_4c06 < DAT_0982))
         || ((~DAT_0881 & 0x20) != 0)) {
LAB_9d2a:
        DAT_0acf = 0;
LAB_9d2b:
        if (((((~DAT_09a1 & 0x80) == 0) && ((~DAT_08a0 & 0x20) == 0)) &&
            (((~DAT_08b0 & 0x10) == 0 &&
             ((((~DAT_08b0 & 4) == 0 && ((~DAT_08b0 & 2) == 0)) && ((~DAT_08b1 & 0x80) == 0)))))) &&
           ((~DAT_08b1 & 0x40) == 0)) goto LAB_9d51;
      }
      else {
        if ((~DAT_0896._0_1_ & 0x10) != 0) {
          if ((&DAT_4e11)[DAT_0898] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        if ((DAT_0acd == '\0') || (FUN_a3b4(), DAT_0ace == '\0')) goto LAB_9d2a;
        if (DAT_0acf < DAT_4c02) {
          DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
          goto LAB_9d2b;
        }
        DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
      }
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 | 2;
      DAT_0889 = DAT_0889 | 0x80;
    }
    else {
LAB_9d51:
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 & 0xfd;
      DAT_0889 = DAT_0889 & 0x7f;
    }
  }
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d4c)) {
    if ((DAT_4e1b == 0xff) || ((ushort)DAT_4e1b << 8 < DAT_0a2e)) {
      DAT_0b91 = 0;
    }
    else {
      if (DAT_4e95 <= DAT_0b91) {
        DAT_0b90 = DAT_0b90 | 0x80;
      }
      DAT_0b91 = (DAT_0b91 + 1) - (0xfe < DAT_0b91);
    }
    if (((ushort)DAT_4e1a << 8 < DAT_0a2e) && (DAT_4e1a != 0xff)) {
      if ((DAT_0b90 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        if ((DAT_0d87 != '\t') && ((DAT_088c & 0x80) != 0)) {
          DAT_0b90 = DAT_0b90 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        if ((~DAT_0880 & 1) == 0) goto LAB_9dc5;
      }
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 & 0xef;
    }
    else {
LAB_9dc5:
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 | 0x10;
    }
  }
  if (((DAT_0880 & 1) == 0) ||
     (((((~DAT_08af & 0x40) == 0 && ((~DAT_08af & 2) == 0)) &&
       ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))) &&
      ((((~DAT_08b1 & 0x10) == 0 && ((~DAT_08b2 & 0x80) == 0)) && ((~DAT_08b4 & 8) == 0)))))) {
    DAT_0884 = DAT_0884 & 0xdf;
  }
  else {
    DAT_0884 = DAT_0884 | 0x20;
  }
  if ((DAT_0884 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    DAT_0b6f = (DAT_0b6f + 1) - (0xfe < DAT_0b6f);
    if (DAT_4e38 <= DAT_0b6f) {
      if ((~DAT_0888 & 8) == 0) {
        DAT_0888 = DAT_0888 | 8;
      }
      else {
        DAT_0888 = DAT_0888 & 0xf7;
      }
      goto LAB_9e24;
    }
  }
  if (((~DAT_0889 & 2) != 0) &&
     (DAT_0bd1 = (DAT_0bd1 + 1) - (0xfe < DAT_0bd1), DAT_4e66 <= DAT_0bd1)) {
    DAT_0bd1 = 0;
    DAT_0b94 = (DAT_0b94 + 1) - (0xfe < DAT_0b94);
  }
  if ((DAT_0b9a != 0xff) && (DAT_4e3a <= DAT_0b98)) {
    DAT_0b98 = 0;
    DAT_0b9a = (DAT_0b9a + 1) - (0xfe < DAT_0b9a);
    if (4 < DAT_0b9a) {
      DAT_08b8 = DAT_08af;
      DAT_08b9 = DAT_08b0;
      DAT_08ba = DAT_08b1;
      DAT_08bb = DAT_08b2;
      DAT_0bd2 = DAT_0bd2 | 0xf;
      DAT_0b9a = 0xff;
    }
    DAT_0be8 = DAT_0be8 | 0x40;
  }
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    DAT_0d0a = (DAT_0d0a + 1) - (0xfe < DAT_0d0a);
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) &&
     (DAT_0d0b = (DAT_0d0b + 1) - (0xfe < DAT_0d0b), DAT_0d0b <= DAT_4f16)) {
    bVar9 = DAT_0d09 + DAT_0ab3;
    if (CARRY1(DAT_0d09,DAT_0ab3)) {
      bVar9 = 0xff;
    }
    DAT_0d09 = bVar9;
    if ((DAT_4f16 <= DAT_0d0b) && (bVar9 <= DAT_4e84)) {
      DAT_0d08 = DAT_0d08 | 9;
    }
  }
  uVar6 = (ushort)DAT_08d9 * 0x100;
  if ((~DAT_0881 & 0x10) == 0) {
    sVar5 = uVar6 - DAT_08da;
    if (uVar6 < DAT_08da) {
      uVar10 = scale_u16_by_u8(sVar11,CONCAT11((~(byte)((ushort)sVar5 >> 8) + 1) -
                                               ((char)-(char)sVar5 != '\0'),-(char)sVar5));
      sVar11 = CONCAT11((~(byte)((ushort)uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),
                        -(char)uVar10);
    }
    else {
      sVar11 = scale_u16_by_u8(sVar11,sVar5);
    }
    uVar6 = sVar11 + DAT_08da;
  }
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       ((DAT_4e28 < DAT_08ec ||
        ((((DAT_4e29 < DAT_0abe || (DAT_0900 < DAT_4e1e)) || ((~DAT_08af & 8) != 0)) ||
         ((~DAT_08af & 4) != 0)))))) {
      DAT_0adb = DAT_0adb & 0x7f;
      DAT_0adc = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x80;
      if (DAT_4e2a <= DAT_0adc) {
        DAT_0ada = DAT_0ada | 0x80;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    if ((DAT_4e28 < DAT_08ec) || (DAT_4e2b < DAT_0abe)) {
      DAT_0ada = DAT_0ada & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      if ((DAT_0ada & 0x40) != 0) {
        DAT_0ada = DAT_0ada | 0x20;
      }
      if ((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) ||
         ((DAT_0900 < DAT_4e20 || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))))) {
        if ((DAT_0ada & 0x10) != 0) {
          DAT_0ada = DAT_0ada & 0xef;
          DAT_0ae1 = 0;
        }
        if ((DAT_0ada & 0x40) != 0) {
          if ((~DAT_0ada & 8) == 0) {
            if (((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) || (DAT_4e22 < DAT_0900))
               || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))) goto LAB_a04f;
            DAT_0ada = DAT_0ada | 8;
          }
          if ((((~DAT_0ada & 0x80) != 0) || ((DAT_08b1 & 0x20) != 0)) &&
             ((DAT_0900 < DAT_4e20 && (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))))) {
            DAT_0ada = DAT_0ada & 0xef | 100;
            goto LAB_a04f;
          }
        }
        if ((DAT_0ada & 4) != 0) {
          DAT_0ada = DAT_0ada & 0xfb;
          DAT_0ae1 = 0;
        }
      }
      else {
        DAT_0ada = DAT_0ada & 0xf3 | 0x70;
      }
    }
  }
LAB_a04f:
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       (((DAT_4e28 < DAT_08ec ||
         (((DAT_4e29 < DAT_0abe || (DAT_4e24 <= DAT_0900)) || ((~DAT_08af & 8) != 0)))) ||
        ((((~DAT_08af & 4) != 0 || (DAT_0ad6 != 0)) || (DAT_0ad9 != '\0')))))) {
      DAT_0adb = DAT_0adb & 0xbf;
      DAT_0add = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x40;
      if (DAT_4e31 <= DAT_0add) {
        DAT_0ada = DAT_0ada & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = '\0';
        DAT_0ae1 = 0;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    bVar9 = DAT_0bd2;
    if (DAT_0d5f != -0x80) {
      if ((DAT_0ada & 0x40) == 0) {
        DAT_0adb = DAT_0adb & 0xdf;
        DAT_0ade = 0;
      }
      else {
        DAT_0adb = DAT_0adb | 0x20;
        if ((DAT_4e57 <= DAT_0ade) && ((~DAT_08b1 & 0x20) == 0)) {
          DAT_08b1 = DAT_08b1 | 0x20;
          bVar9 = DAT_0bd2 | 0x20;
          if ((~DAT_08ba & 0x20) == 0) {
            DAT_08ba = DAT_08ba | 0x20;
            bVar9 = DAT_0bd2 | 0x22;
          }
        }
      }
    }
    DAT_0bd2 = bVar9;
    if ((DAT_0881 & 0x10) == 0) {
      bVar9 = DAT_0adb | 0x10;
      if ((DAT_4e57 <= DAT_0adf) &&
         ((((((~DAT_088d & 0x20) != 0 || ((~DAT_0885 & 0x20) != 0)) ||
            (((~DAT_0889 & 2) == 0 && (((~DAT_0880 & 4) == 0 && ((~DAT_0aa6 & 4) == 0)))))) &&
           (((~DAT_0ada & 0x80) != 0 || ((DAT_08b1 & 0x20) != 0)))) &&
          ((((((DAT_08ec <= DAT_4e28 && (DAT_0abe <= DAT_4e29)) && (DAT_0900 < DAT_4e24)) &&
             (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))) && (DAT_0ad6 == 0)) &&
           (DAT_0ad9 == '\0')))))) {
        DAT_0adb = DAT_0adb | 0x18;
        if (((DAT_4e31 <= DAT_0ae0) && (DAT_0ada = DAT_0ada & 0x7f, DAT_0d5f != -0x80)) &&
           ((DAT_08b1 & 0x20) != 0)) {
          DAT_08b1 = DAT_08b1 & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
        goto LAB_a1ae;
      }
    }
    else {
      DAT_0adf = 0;
      bVar9 = DAT_0adb & 0xef;
    }
    DAT_0adb = bVar9;
    DAT_0adb = DAT_0adb & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  DAT_08da = uVar6;
  FUN_5fc8();
  if ((~DAT_0891 & 2) == 0) {
    if ((DAT_0891 & 0x80) == 0) {
LAB_a24a:
      if (DAT_0bd2 == 0) {
LAB_a26f:
        if (DAT_0be8 != 0) {
          if ((DAT_0be8 & 0x80) == 0) {
            if ((DAT_0be8 & 0x40) == 0) {
              if ((DAT_0be8 & 4) != 0) goto LAB_a2b4;
            }
            else {
LAB_a2af:
              FUN_b78f();
            }
          }
          else {
LAB_a296:
            FUN_b758();
          }
        }
      }
      else if ((DAT_0bd2 & 0x80) == 0) {
        if ((DAT_0bd2 & 0x40) == 0) {
          if ((DAT_0bd2 & 0x20) == 0) {
            if ((DAT_0bd2 & 0x10) == 0) {
              if ((DAT_0bd2 & 8) == 0) {
                if ((DAT_0bd2 & 4) == 0) {
                  if ((DAT_0bd2 & 2) == 0) {
                    if ((DAT_0bd2 & 1) != 0) goto LAB_a2aa;
                    goto LAB_a26f;
                  }
LAB_a2a5:
                  FUN_b6ea();
                }
                else {
LAB_a2a0:
                  FUN_b6b3();
                }
              }
              else {
LAB_a29b:
                FUN_b67c();
              }
            }
            else {
LAB_a291:
              FUN_b645();
            }
          }
          else {
LAB_a28c:
            FUN_b60e();
          }
        }
        else {
LAB_a287:
          FUN_b5d7();
        }
      }
      else {
LAB_a282:
        FUN_b5a0();
      }
    }
    else if ((~DAT_088f & 0x80) == 0) {
      if ((~DAT_088f & 0x40) == 0) goto LAB_a24a;
      FUN_b4c6();
    }
    else {
      FUN_b3ec();
    }
  }
  else if ((DAT_0891 & 0x80) == 0) {
LAB_a1d9:
    if (DAT_0bd3 == 0) {
LAB_a20e:
      if (DAT_0be9 != 0) {
        if ((DAT_0be9 & 0x80) != 0) goto LAB_a296;
        if ((DAT_0be9 & 0x40) != 0) goto LAB_a2af;
        if ((DAT_0be9 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
        FUN_b7b9();
      }
    }
    else {
      if ((DAT_0bd3 & 0x80) != 0) goto LAB_a282;
      if ((DAT_0bd3 & 0x40) != 0) goto LAB_a287;
      if ((DAT_0bd3 & 0x20) != 0) goto LAB_a28c;
      if ((DAT_0bd3 & 0x10) != 0) goto LAB_a291;
      if ((DAT_0bd3 & 8) != 0) goto LAB_a29b;
      if ((DAT_0bd3 & 4) != 0) goto LAB_a2a0;
      if ((DAT_0bd3 & 2) != 0) goto LAB_a2a5;
      if ((DAT_0bd3 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
      FUN_b721();
    }
  }
  else if ((~DAT_0890 & 0x80) == 0) {
    if ((~DAT_0890 & 0x40) == 0) goto LAB_a1d9;
    FUN_b4c6();
  }
  else {
    FUN_b3ec();
  }
LAB_a2b9:
  bVar9 = DAT_0000;
  bVar9 = bVar9 & 0xe0;
  if (bVar9 == 0x80) {
    if (((DAT_08b1 & 0x80) != 0x80) || (bVar9 = DAT_0000, (bVar9 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar9 != 0) {
    if (((bVar9 == 0x40) && ((DAT_08b1 & 0x80) == 0x80)) &&
       (bVar9 = DAT_0000, (bVar9 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  if (((DAT_08b1 & 0x80) == 0x80) && (bVar9 = DAT_0000, (bVar9 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  DAT_08bc = DAT_08bc & 0xf7;
  return;
}


/* Entry 99fd */

/* WARNING: Removing unreachable block (RAM,0x9c19) */
/* WARNING: Removing unreachable block (RAM,0x9b8d) */
/* WARNING: Removing unreachable block (RAM,0x9b50) */
/* WARNING: Removing unreachable block (RAM,0x9b57) */
/* WARNING: Removing unreachable block (RAM,0x9b59) */
/* WARNING: Removing unreachable block (RAM,0x9b6c) */
/* WARNING: Removing unreachable block (RAM,0x9b6f) */
/* WARNING: Removing unreachable block (RAM,0x9b80) */
/* WARNING: Removing unreachable block (RAM,0x9b74) */
/* WARNING: Removing unreachable block (RAM,0x9b7b) */
/* WARNING: Removing unreachable block (RAM,0x9b87) */
/* WARNING: Removing unreachable block (RAM,0x9b95) */
/* WARNING: Removing unreachable block (RAM,0x9bb8) */
/* WARNING: Removing unreachable block (RAM,0x9c36) */
/* WARNING: Removing unreachable block (RAM,0x9bdb) */
/* WARNING: Removing unreachable block (RAM,0x9be0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_99fd(void)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar7;
  short sVar5;
  byte bVar8;
  byte bVar9;
  ushort uVar6;
  undefined2 uVar10;
  short sVar11;
  
  sVar11 = DAT_0ab4;
  if (DAT_4b00 <= DAT_08e8._0_1_) {
    DAT_0aaa = 0;
    DAT_0aab = 0;
    if (((~DAT_0aa6 & 0x20) != 0) || ((DAT_0aa6 & 0x10) != 0)) {
      DAT_0aa6 = DAT_0aa6 & 0x8f | 8;
    }
  }
  if ((DAT_0aa6 & 8) != 0) {
    if (DAT_0aaa < DAT_4b01) {
      if (DAT_4b02 <= DAT_08e8._0_1_) {
        DAT_0aaa = 0;
        DAT_0aa6 = DAT_0aa6 & 0xf7 | 4;
      }
    }
    else {
      DAT_0aaa = 0;
      DAT_0aab = 0;
      DAT_0aa6 = DAT_0aa6 & 0x87 | 2;
    }
  }
  if ((DAT_0aa6 & 4) != 0) {
    DAT_0aac = DAT_4b05;
    if ((DAT_0aa7 & 8) != 0) {
      DAT_0aac = DAT_4b04;
    }
    if ((DAT_08e8._0_1_ < DAT_4b02) || (DAT_4b06 <= DAT_0aaa)) {
      DAT_0aa7 = DAT_0aa7 | 2;
      DAT_0aa6 = DAT_0aa6 & 0xfb | 3;
    }
  }
  if ((~DAT_0aa6 & 2) != 0) {
    if (((DAT_0aa6 & 1) != 0) &&
       (DAT_0aae = (DAT_0aae + 1) - (0xfe < DAT_0aae), DAT_4b07 <= DAT_0aae)) {
      DAT_0aae = 0;
      DAT_0aad = (DAT_0aad + 1) - (0xfe < DAT_0aad);
      bVar9 = DAT_0aac;
      if ((DAT_0aa7 & 2) != 0) {
        bVar3 = DAT_4b05;
        if ((DAT_0aa7 & 8) != 0) {
          bVar3 = DAT_4b04;
        }
        bVar9 = bVar3 + DAT_0aad;
        if (CARRY1(bVar3,DAT_0aad)) {
          bVar9 = 0xff;
        }
        if (DAT_0a83 <= bVar9) {
          DAT_0aa7 = DAT_0aa7 & 0xfd;
          bVar9 = DAT_0aac;
        }
      }
      DAT_0aac = bVar9;
      if ((~DAT_0aa7 & 2) == 0) {
        DAT_0aa6 = DAT_0aa6 & 0xfe;
        DAT_0aad = 0;
        DAT_0aa7 = DAT_0aa7 & 0xf3;
      }
    }
    if ((~DAT_0aa6 & 1) == 0) {
      DAT_0aa6 = DAT_0aa6 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  DAT_0ab6 = DAT_0ab4;
  DAT_0ab4 = DAT_0ab0;
  sVar11 = DAT_0ab0 - sVar11;
  if ((~DAT_0ab2 & 4) == 0) {
    sVar11 = 0;
  }
  if ((char)((ushort)sVar11 >> 8) != '\0') {
    sVar11 = 0xff;
  }
  DAT_0ab3 = (byte)sVar11;
  iVar2 = (uint)DAT_4bd4 * (uint)DAT_0ab3;
  uVar10 = (undefined2)((uint)iVar2 >> 0x10);
  DAT_0de0 = CONCAT11((char)((uint)iVar2 >> 8) - ((byte)iVar2 < DAT_0aba),(byte)iVar2 - DAT_0aba);
  DAT_0dde._1_1_ = (char)((uint)iVar2 >> 0x10);
  if ((char)DAT_0dde != '\0') {
    DAT_0de0 = 0xffff;
  }
  sVar11 = (short)((uint)DAT_4bd6 * (uint)DAT_0de0 >> 0x10);
  uVar4 = (undefined2)((uint)DAT_4bd6 * (uint)DAT_0de0);
  if (sVar11 != 0) {
    uVar4 = 0xffff;
  }
  bVar9 = (byte)((ushort)uVar4 >> 8);
  bVar3 = (byte)uVar4;
  if ((DAT_0ab2 & 1) == 0) {
    cVar7 = bVar3 + (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar9 + CARRY1(bVar3,(byte)DAT_0ab8);
    if (CARRY1(bVar9,CARRY1(bVar3,(byte)DAT_0ab8))) {
      cVar7 = -1;
      DAT_0ab8._0_1_ = 0xff;
    }
  }
  else {
    cVar7 = bVar3 - (byte)DAT_0ab8;
    DAT_0ab8._0_1_ = bVar9 - (bVar3 < (byte)DAT_0ab8);
  }
  bVar9 = DAT_0aba + DAT_0ab8._0_1_;
  if (CARRY1(DAT_0aba,DAT_0ab8._0_1_)) {
    bVar9 = 0xff;
  }
  if (bVar9 < DAT_0abe) {
    sVar5 = (ushort)(byte)-(bVar9 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar5 >> 8);
    bVar8 = (byte)sVar5;
    if ((DAT_0ab2 & 2) == 0) {
      _DAT_0abc = CONCAT11(bVar3 - (bVar8 < DAT_0abd),bVar8 - DAT_0abd);
    }
    else {
      bVar1 = CARRY1(bVar8,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar8 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    DAT_0ab2 = DAT_0ab2 & 0xfe | 6;
  }
  else {
    sVar5 = (ushort)(byte)(bVar9 - DAT_0abe) * (ushort)DAT_4bd6;
    bVar3 = (byte)((ushort)sVar5 >> 8);
    bVar8 = (byte)sVar5;
    if ((DAT_0ab2 & 2) == 0) {
      bVar1 = CARRY1(bVar8,DAT_0abd);
      _DAT_0abc = CONCAT11(bVar3 + bVar1,bVar8 + DAT_0abd);
      if (CARRY1(bVar3,bVar1)) {
        _DAT_0abc = 0xffff;
      }
    }
    else {
      _DAT_0abc = CONCAT11(bVar3 - (bVar8 < DAT_0abd),bVar8 - DAT_0abd);
    }
    DAT_0ab2 = DAT_0ab2 & 0xfc | 4;
  }
  if ((DAT_0ab2 & 2) == 0) {
    bVar3 = DAT_0abe + DAT_0abc;
    if (CARRY1(DAT_0abe,DAT_0abc)) {
      bVar3 = 0xff;
    }
  }
  else {
    bVar3 = DAT_0abe - DAT_0abc;
    if (DAT_0abe < DAT_0abc) {
      bVar3 = 0;
    }
  }
  if (((DAT_4ba7 != -0x80) ||
      (((DAT_0d87 == '\t' && ((~DAT_0896._0_1_ & 0x10) != 0)) || (DAT_4ba8 <= DAT_0900._0_1_)))) ||
     (DAT_4ba9 <= DAT_08ce._0_1_)) {
    DAT_0aaf = 0;
    DAT_088d = DAT_088d & 0xbf;
  }
  if ((DAT_0af7 == '\0') && (DAT_0aaf = (DAT_0aaf + 1) - (0xfe < DAT_0aaf), DAT_4baa <= DAT_0aaf)) {
    DAT_088d = DAT_088d | 0x40;
  }
  DAT_0aba = bVar9;
  DAT_0abe = bVar3;
  DAT_0dde = uVar10;
  DAT_0ab8._1_1_ = cVar7;
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d49)) {
    if (DAT_0d87 == '\t') {
      if ((((DAT_08f4 < DAT_4c03) || ((ushort)DAT_4c04 << 8 < DAT_0992)) || (DAT_4c06 < DAT_0982))
         || ((~DAT_0881 & 0x20) != 0)) {
LAB_9d2a:
        DAT_0acf = 0;
LAB_9d2b:
        if (((((~DAT_09a1 & 0x80) == 0) && ((~DAT_08a0 & 0x20) == 0)) &&
            (((~DAT_08b0 & 0x10) == 0 &&
             ((((~DAT_08b0 & 4) == 0 && ((~DAT_08b0 & 2) == 0)) && ((~DAT_08b1 & 0x80) == 0)))))) &&
           ((~DAT_08b1 & 0x40) == 0)) goto LAB_9d51;
      }
      else {
        if ((~DAT_0896._0_1_ & 0x10) != 0) {
          if ((&DAT_4e11)[DAT_0898] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        if ((DAT_0acd == '\0') || (FUN_a3b4(), DAT_0ace == '\0')) goto LAB_9d2a;
        if (DAT_0acf < DAT_4c02) {
          DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
          goto LAB_9d2b;
        }
        DAT_0acf = (DAT_0acf + 1) - (0xfe < DAT_0acf);
      }
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 | 2;
      DAT_0889 = DAT_0889 | 0x80;
    }
    else {
LAB_9d51:
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 & 0xfd;
      DAT_0889 = DAT_0889 & 0x7f;
    }
  }
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d4c)) {
    if ((DAT_4e1b == 0xff) || ((ushort)DAT_4e1b << 8 < DAT_0a2e)) {
      DAT_0b91 = 0;
    }
    else {
      if (DAT_4e95 <= DAT_0b91) {
        DAT_0b90 = DAT_0b90 | 0x80;
      }
      DAT_0b91 = (DAT_0b91 + 1) - (0xfe < DAT_0b91);
    }
    if (((ushort)DAT_4e1a << 8 < DAT_0a2e) && (DAT_4e1a != 0xff)) {
      if ((DAT_0b90 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        if ((DAT_0d87 != '\t') && ((DAT_088c & 0x80) != 0)) {
          DAT_0b90 = DAT_0b90 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        if ((~DAT_0880 & 1) == 0) goto LAB_9dc5;
      }
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 & 0xef;
    }
    else {
LAB_9dc5:
      bVar9 = DAT_00f0;
      DAT_00f0 = bVar9 | 0x10;
    }
  }
  if (((DAT_0880 & 1) == 0) ||
     (((((~DAT_08af & 0x40) == 0 && ((~DAT_08af & 2) == 0)) &&
       ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))) &&
      ((((~DAT_08b1 & 0x10) == 0 && ((~DAT_08b2 & 0x80) == 0)) && ((~DAT_08b4 & 8) == 0)))))) {
    DAT_0884 = DAT_0884 & 0xdf;
  }
  else {
    DAT_0884 = DAT_0884 | 0x20;
  }
  if ((DAT_0884 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    DAT_0b6f = (DAT_0b6f + 1) - (0xfe < DAT_0b6f);
    if (DAT_4e38 <= DAT_0b6f) {
      if ((~DAT_0888 & 8) == 0) {
        DAT_0888 = DAT_0888 | 8;
      }
      else {
        DAT_0888 = DAT_0888 & 0xf7;
      }
      goto LAB_9e24;
    }
  }
  if (((~DAT_0889 & 2) != 0) &&
     (DAT_0bd1 = (DAT_0bd1 + 1) - (0xfe < DAT_0bd1), DAT_4e66 <= DAT_0bd1)) {
    DAT_0bd1 = 0;
    DAT_0b94 = (DAT_0b94 + 1) - (0xfe < DAT_0b94);
  }
  if ((DAT_0b9a != 0xff) && (DAT_4e3a <= DAT_0b98)) {
    DAT_0b98 = 0;
    DAT_0b9a = (DAT_0b9a + 1) - (0xfe < DAT_0b9a);
    if (4 < DAT_0b9a) {
      DAT_08b8 = DAT_08af;
      DAT_08b9 = DAT_08b0;
      DAT_08ba = DAT_08b1;
      DAT_08bb = DAT_08b2;
      DAT_0bd2 = DAT_0bd2 | 0xf;
      DAT_0b9a = 0xff;
    }
    DAT_0be8 = DAT_0be8 | 0x40;
  }
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    DAT_0d0a = (DAT_0d0a + 1) - (0xfe < DAT_0d0a);
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) &&
     (DAT_0d0b = (DAT_0d0b + 1) - (0xfe < DAT_0d0b), DAT_0d0b <= DAT_4f16)) {
    bVar9 = DAT_0d09 + DAT_0ab3;
    if (CARRY1(DAT_0d09,DAT_0ab3)) {
      bVar9 = 0xff;
    }
    DAT_0d09 = bVar9;
    if ((DAT_4f16 <= DAT_0d0b) && (bVar9 <= DAT_4e84)) {
      DAT_0d08 = DAT_0d08 | 9;
    }
  }
  uVar6 = (ushort)DAT_08d9 * 0x100;
  if ((~DAT_0881 & 0x10) == 0) {
    sVar5 = uVar6 - DAT_08da;
    if (uVar6 < DAT_08da) {
      uVar10 = scale_u16_by_u8(sVar11,CONCAT11((~(byte)((ushort)sVar5 >> 8) + 1) -
                                               ((char)-(char)sVar5 != '\0'),-(char)sVar5));
      sVar11 = CONCAT11((~(byte)((ushort)uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),
                        -(char)uVar10);
    }
    else {
      sVar11 = scale_u16_by_u8(sVar11,sVar5);
    }
    uVar6 = sVar11 + DAT_08da;
  }
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       ((DAT_4e28 < DAT_08ec ||
        ((((DAT_4e29 < DAT_0abe || (DAT_0900 < DAT_4e1e)) || ((~DAT_08af & 8) != 0)) ||
         ((~DAT_08af & 4) != 0)))))) {
      DAT_0adb = DAT_0adb & 0x7f;
      DAT_0adc = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x80;
      if (DAT_4e2a <= DAT_0adc) {
        DAT_0ada = DAT_0ada | 0x80;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    if ((DAT_4e28 < DAT_08ec) || (DAT_4e2b < DAT_0abe)) {
      DAT_0ada = DAT_0ada & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      if ((DAT_0ada & 0x40) != 0) {
        DAT_0ada = DAT_0ada | 0x20;
      }
      if ((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) ||
         ((DAT_0900 < DAT_4e20 || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))))) {
        if ((DAT_0ada & 0x10) != 0) {
          DAT_0ada = DAT_0ada & 0xef;
          DAT_0ae1 = 0;
        }
        if ((DAT_0ada & 0x40) != 0) {
          if ((~DAT_0ada & 8) == 0) {
            if (((((~DAT_0ada & 0x80) == 0) && ((DAT_08b1 & 0x20) == 0)) || (DAT_4e22 < DAT_0900))
               || (((~DAT_08af & 8) != 0 || ((~DAT_08af & 4) != 0)))) goto LAB_a04f;
            DAT_0ada = DAT_0ada | 8;
          }
          if ((((~DAT_0ada & 0x80) != 0) || ((DAT_08b1 & 0x20) != 0)) &&
             ((DAT_0900 < DAT_4e20 && (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))))) {
            DAT_0ada = DAT_0ada & 0xef | 100;
            goto LAB_a04f;
          }
        }
        if ((DAT_0ada & 4) != 0) {
          DAT_0ada = DAT_0ada & 0xfb;
          DAT_0ae1 = 0;
        }
      }
      else {
        DAT_0ada = DAT_0ada & 0xf3 | 0x70;
      }
    }
  }
LAB_a04f:
  if (DAT_0d87 != '\t') {
    if (((((~DAT_088d & 0x20) == 0) && ((~DAT_0885 & 0x20) == 0)) &&
        (((~DAT_0889 & 2) != 0 || (((~DAT_0880 & 4) != 0 || ((~DAT_0aa6 & 4) != 0)))))) ||
       (((DAT_4e28 < DAT_08ec ||
         (((DAT_4e29 < DAT_0abe || (DAT_4e24 <= DAT_0900)) || ((~DAT_08af & 8) != 0)))) ||
        ((((~DAT_08af & 4) != 0 || (DAT_0ad6 != 0)) || (DAT_0ad9 != '\0')))))) {
      DAT_0adb = DAT_0adb & 0xbf;
      DAT_0add = 0;
    }
    else {
      DAT_0adb = DAT_0adb | 0x40;
      if (DAT_4e31 <= DAT_0add) {
        DAT_0ada = DAT_0ada & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = '\0';
        DAT_0ae1 = 0;
      }
    }
  }
  if (DAT_0d87 != '\t') {
    bVar9 = DAT_0bd2;
    if (DAT_0d5f != -0x80) {
      if ((DAT_0ada & 0x40) == 0) {
        DAT_0adb = DAT_0adb & 0xdf;
        DAT_0ade = 0;
      }
      else {
        DAT_0adb = DAT_0adb | 0x20;
        if ((DAT_4e57 <= DAT_0ade) && ((~DAT_08b1 & 0x20) == 0)) {
          DAT_08b1 = DAT_08b1 | 0x20;
          bVar9 = DAT_0bd2 | 0x20;
          if ((~DAT_08ba & 0x20) == 0) {
            DAT_08ba = DAT_08ba | 0x20;
            bVar9 = DAT_0bd2 | 0x22;
          }
        }
      }
    }
    DAT_0bd2 = bVar9;
    if ((DAT_0881 & 0x10) == 0) {
      bVar9 = DAT_0adb | 0x10;
      if ((DAT_4e57 <= DAT_0adf) &&
         ((((((~DAT_088d & 0x20) != 0 || ((~DAT_0885 & 0x20) != 0)) ||
            (((~DAT_0889 & 2) == 0 && (((~DAT_0880 & 4) == 0 && ((~DAT_0aa6 & 4) == 0)))))) &&
           (((~DAT_0ada & 0x80) != 0 || ((DAT_08b1 & 0x20) != 0)))) &&
          ((((((DAT_08ec <= DAT_4e28 && (DAT_0abe <= DAT_4e29)) && (DAT_0900 < DAT_4e24)) &&
             (((~DAT_08af & 8) == 0 && ((~DAT_08af & 4) == 0)))) && (DAT_0ad6 == 0)) &&
           (DAT_0ad9 == '\0')))))) {
        DAT_0adb = DAT_0adb | 0x18;
        if (((DAT_4e31 <= DAT_0ae0) && (DAT_0ada = DAT_0ada & 0x7f, DAT_0d5f != -0x80)) &&
           ((DAT_08b1 & 0x20) != 0)) {
          DAT_08b1 = DAT_08b1 & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x20;
        }
        goto LAB_a1ae;
      }
    }
    else {
      DAT_0adf = 0;
      bVar9 = DAT_0adb & 0xef;
    }
    DAT_0adb = bVar9;
    DAT_0adb = DAT_0adb & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  DAT_08da = uVar6;
  FUN_5fc8();
  if ((~DAT_0891 & 2) == 0) {
    if ((DAT_0891 & 0x80) == 0) {
LAB_a24a:
      if (DAT_0bd2 == 0) {
LAB_a26f:
        if (DAT_0be8 != 0) {
          if ((DAT_0be8 & 0x80) == 0) {
            if ((DAT_0be8 & 0x40) == 0) {
              if ((DAT_0be8 & 4) != 0) goto LAB_a2b4;
            }
            else {
LAB_a2af:
              FUN_b78f();
            }
          }
          else {
LAB_a296:
            FUN_b758();
          }
        }
      }
      else if ((DAT_0bd2 & 0x80) == 0) {
        if ((DAT_0bd2 & 0x40) == 0) {
          if ((DAT_0bd2 & 0x20) == 0) {
            if ((DAT_0bd2 & 0x10) == 0) {
              if ((DAT_0bd2 & 8) == 0) {
                if ((DAT_0bd2 & 4) == 0) {
                  if ((DAT_0bd2 & 2) == 0) {
                    if ((DAT_0bd2 & 1) != 0) goto LAB_a2aa;
                    goto LAB_a26f;
                  }
LAB_a2a5:
                  FUN_b6ea();
                }
                else {
LAB_a2a0:
                  FUN_b6b3();
                }
              }
              else {
LAB_a29b:
                FUN_b67c();
              }
            }
            else {
LAB_a291:
              FUN_b645();
            }
          }
          else {
LAB_a28c:
            FUN_b60e();
          }
        }
        else {
LAB_a287:
          FUN_b5d7();
        }
      }
      else {
LAB_a282:
        FUN_b5a0();
      }
    }
    else if ((~DAT_088f & 0x80) == 0) {
      if ((~DAT_088f & 0x40) == 0) goto LAB_a24a;
      FUN_b4c6();
    }
    else {
      FUN_b3ec();
    }
  }
  else if ((DAT_0891 & 0x80) == 0) {
LAB_a1d9:
    if (DAT_0bd3 == 0) {
LAB_a20e:
      if (DAT_0be9 != 0) {
        if ((DAT_0be9 & 0x80) != 0) goto LAB_a296;
        if ((DAT_0be9 & 0x40) != 0) goto LAB_a2af;
        if ((DAT_0be9 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
        FUN_b7b9();
      }
    }
    else {
      if ((DAT_0bd3 & 0x80) != 0) goto LAB_a282;
      if ((DAT_0bd3 & 0x40) != 0) goto LAB_a287;
      if ((DAT_0bd3 & 0x20) != 0) goto LAB_a28c;
      if ((DAT_0bd3 & 0x10) != 0) goto LAB_a291;
      if ((DAT_0bd3 & 8) != 0) goto LAB_a29b;
      if ((DAT_0bd3 & 4) != 0) goto LAB_a2a0;
      if ((DAT_0bd3 & 2) != 0) goto LAB_a2a5;
      if ((DAT_0bd3 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
      FUN_b721();
    }
  }
  else if ((~DAT_0890 & 0x80) == 0) {
    if ((~DAT_0890 & 0x40) == 0) goto LAB_a1d9;
    FUN_b4c6();
  }
  else {
    FUN_b3ec();
  }
LAB_a2b9:
  bVar9 = DAT_0000;
  bVar9 = bVar9 & 0xe0;
  if (bVar9 == 0x80) {
    if (((DAT_08b1 & 0x80) != 0x80) || (bVar9 = DAT_0000, (bVar9 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar9 != 0) {
    if (((bVar9 == 0x40) && ((DAT_08b1 & 0x80) == 0x80)) &&
       (bVar9 = DAT_0000, (bVar9 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  if (((DAT_08b1 & 0x80) == 0x80) && (bVar9 = DAT_0000, (bVar9 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  DAT_08bc = DAT_08bc & 0xf7;
  return;
}


/* Entry a314 */

void FUN_a314(void)

{
  byte bVar1;
  
  if ((~DAT_0886 & 0x40) == 0) {
    DAT_0a06 = DAT_0a05 + DAT_34a4;
    if (CARRY1(DAT_0a05,DAT_34a4)) {
      DAT_0a06 = 0xff;
    }
    DAT_0b1a = 0;
  }
  else if (DAT_08ec <= DAT_0a05) {
    if (DAT_08ec == DAT_0a07) {
      DAT_0b1a = (DAT_0b1a + 1) - (0xfe < DAT_0b1a);
    }
    else {
      DAT_0b1a = 0;
    }
    if (DAT_34a5 <= DAT_0b1a) {
      bVar1 = DAT_08ec + DAT_34a4;
      if (CARRY1(DAT_08ec,DAT_34a4)) {
        bVar1 = 0xff;
      }
      if (bVar1 < DAT_0a06) {
        DAT_0a06 = bVar1;
      }
    }
  }
  DAT_0a07 = DAT_08ec;
  return;
}


/* Entry a363 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_a363(void)

{
  bool bVar1;
  byte bVar3;
  ushort uVar2;
  byte bVar4;
  byte bVar5;
  
  bVar3 = 0x10;
  do {
    if (&UNK_4c08 + bVar3 < DAT_08e8) {
      bVar3 = (byte)(bVar3 + 2) >> 1;
      goto LAB_a37e;
    }
    bVar1 = 1 < bVar3;
    bVar3 = bVar3 - 2;
  } while (bVar1);
  bVar3 = 0;
LAB_a37e:
  uVar2 = CONCAT11(bVar3,0x24);
  do {
    bVar4 = (byte)uVar2;
    bVar3 = (byte)(uVar2 >> 8);
    if (&UNK_4c1c + (uVar2 & 0xff) < DAT_0900) {
      bVar4 = (byte)(bVar4 + 2) >> 1;
      goto LAB_a39b;
    }
    uVar2 = CONCAT11(bVar3,bVar4 - 2);
  } while (1 < bVar4);
  bVar4 = 0;
LAB_a39b:
  _DAT_0ad0 = CONCAT11(bVar3,bVar4);
  bVar5 = (byte)((ushort)bVar4 * 10);
  DAT_0acd = (&DAT_4c44)
             [CONCAT11((char)((ushort)bVar4 * 10 >> 8) + CARRY1(bVar5,bVar3),bVar5 + bVar3)];
  return;
}


/* Entry a3b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_a3b4(void)

{
  bool bVar1;
  byte bVar3;
  ushort uVar2;
  byte bVar4;
  byte bVar5;
  
  bVar3 = 0x10;
  do {
    if (&UNK_4d0c + bVar3 < DAT_0c90) {
      bVar3 = (byte)(bVar3 + 2) >> 1;
      goto LAB_a3cf;
    }
    bVar1 = 1 < bVar3;
    bVar3 = bVar3 - 2;
  } while (bVar1);
  bVar3 = 0;
LAB_a3cf:
  uVar2 = CONCAT11(bVar3,0x24);
  do {
    bVar4 = (byte)uVar2;
    bVar3 = (byte)(uVar2 >> 8);
    if (&UNK_4d20 + (uVar2 & 0xff) < DAT_0900) {
      bVar4 = (byte)(bVar4 + 2) >> 1;
      goto LAB_a3ec;
    }
    uVar2 = CONCAT11(bVar3,bVar4 - 2);
  } while (1 < bVar4);
  bVar4 = 0;
LAB_a3ec:
  _DAT_0ad2 = CONCAT11(bVar3,bVar4);
  bVar5 = (byte)((ushort)bVar4 * 10);
  DAT_0ace = (&DAT_4d48)
             [CONCAT11((char)((ushort)bVar4 * 10 >> 8) + CARRY1(bVar5,bVar3),bVar5 + bVar3)];
  return;
}


/* Entry a405 */

void FUN_a405(void)

{
  short sVar1;
  
  DAT_0ba2 = DAT_08e8;
  DAT_0ba4 = &axis_raw_313a;
  DAT_09f8 = axis_index_u16_ascending();
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_314e;
  DAT_09fa = axis_index_u16_ascending();
  DAT_0de0 = DAT_09f8;
  DAT_0dde = DAT_09fa;
  sVar1 = bilinear_u8_grid(10,&UNK_3165);
  DAT_09d8 = (char)((ushort)(sVar1 + 0x80) >> 8);
  return;
}


/* Entry a448 */

void FUN_a448(void)

{
  undefined1 extraout_A;
  undefined *puVar1;
  
  if (DAT_31ea < DAT_0898) {
    puVar1 = &UNK_3200;
  }
  else {
    puVar1 = &UNK_31ec;
  }
  lookup_u8_uniform_u16_axis(DAT_0900,puVar1);
  DAT_09d9 = extraout_A;
  return;
}


/* Entry a462 */

void FUN_a462(void)

{
  if ((DAT_09cf & 0x10) != 0) {
    if (DAT_09da <= DAT_09d2) {
      if (DAT_09d2 != DAT_09da) {
        DAT_09de = 0;
        return;
      }
      DAT_09de = (DAT_09de + 1) - (0xfe < DAT_09de);
      if (DAT_09de < DAT_3214) {
        return;
      }
    }
    DAT_09cf = DAT_09cf & 0xef;
  }
  DAT_09de = 0;
  return;
}


/* Entry a489 */

void FUN_a489(void)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0x7f;
  DAT_0dde = FUN_5fa4();
  uVar4 = 0x1800;
  sVar2 = 0;
  do {
    sVar2 = sVar2 + uVar4;
    if ((uVar4 & 0x1fff) == 0x1000) {
      sVar2 = FUN_5fa4(0x1000);
    }
    uVar4 = uVar4 + 2;
  } while ((uVar4 != 0) && (uVar4 <= DAT_0dde));
  cVar3 = '\0';
  if (sVar2 != -0x55ab) {
    cVar3 = -1;
  }
  DAT_0e66 = sVar2;
  if (cVar3 == '\0') {
    FUN_5fa4();
    if ((DAT_0d65 != -0x80) && ((DAT_08b2 & 0x80) != 0)) {
      DAT_08b2 = DAT_08b2 & 0x7f;
      DAT_0bd2 = DAT_0bd2 | 0x10;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 | 0x80;
    bVar1 = DAT_0bd2;
  }
  else {
    bVar1 = DAT_0bd2;
    if ((DAT_0d65 != -0x80) && ((~DAT_08b2 & 0x80) == 0)) {
      DAT_08b2 = DAT_08b2 | 0x80;
      bVar1 = DAT_0bd2 | 0x10;
      if ((~DAT_08bb & 0x80) == 0) {
        DAT_08bb = DAT_08bb | 0x80;
        bVar1 = DAT_0bd2 | 0x11;
      }
    }
  }
  DAT_0bd2 = bVar1;
  FUN_5fa4();
  return;
}


/* Entry a505 */

void FUN_a505(void)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0x7f;
  uVar3 = 0x5555;
LAB_a510:
  do {
    if (uVar3 != 0xfffe) {
      if (uVar3 + 2 < 0xfff) goto LAB_a510;
    }
    uVar4 = 0x800;
    do {
      if (uVar3 != uVar4) {
        cVar2 = -1;
        goto LAB_a538;
      }
      uVar4 = uVar4 + 2;
    } while ((uVar4 != 0) && (uVar4 < 0xfff));
    uVar3 = CONCAT11(~(byte)(uVar3 >> 8),~(byte)uVar3);
    if (uVar3 == 0x5555) {
      cVar2 = '\0';
LAB_a538:
      if (cVar2 == '\0') {
        FUN_5fa4();
        bVar1 = DAT_00f0;
        DAT_00f0 = bVar1 | 0x80;
      }
      cVar2 = -1;
      do {
        cVar2 = cVar2 + '\x01';
        if (cVar2 == '\0') {
          FUN_5fa4();
          cVar2 = '\0';
        }
        bVar1 = DAT_0000;
      } while ((bVar1 & 0xe0) == 0x40);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  } while( true );
}


/* Entry a557 */

void FUN_a557(void)

{
  DAT_0887 = DAT_0887 & 0xdf;
  DAT_08bf = DAT_08bf & 0xf7;
  return;
}


/* Entry a564 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_a564(undefined2 param_1)

{
  bool bVar1;
  byte bVar2;
  byte extraout_A;
  byte extraout_A_00;
  byte extraout_A_01;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar8;
  undefined2 uVar6;
  short sVar7;
  
  DAT_0882 = DAT_0882 & 0xfb;
  DAT_08bf = DAT_08bf | 4;
  if (DAT_08f2 < DAT_3586) {
    if (DAT_08f2 <= DAT_3584) {
      DAT_09a2 = DAT_09a2 & 0x7f;
    }
  }
  else {
    DAT_09a2 = DAT_09a2 | 0x80;
  }
  if ((((((DAT_0881 & 0x10) == 0) &&
        (lookup_u8_uniform_axis(), DAT_09b4 = extraout_A, extraout_A <= DAT_09b5)) &&
       (DAT_357e <= DAT_08f4)) &&
      (((FUN_abdd(), DAT_09ae != '\0' && (FUN_ac2e(), DAT_09af != '\0')) &&
       (((~DAT_0886 & 0x40) == 0 && (((DAT_09a1 & 0x40) != 0 && (DAT_0992 == 0)))))))) &&
     (((DAT_097a == -0x80 &&
       (((DAT_0d87 != '\t' || ((DAT_0896._0_1_ & 0x10) != 0)) && ((~DAT_08af & 0x20) == 0)))) &&
      ((((~DAT_08af & 0x10) == 0 && ((~DAT_08af & 8) == 0)) &&
       (((((~DAT_08af & 4) == 0 && (((~DAT_08b0 & 0x80) == 0 && ((~DAT_08b0 & 0x40) == 0)))) &&
         ((~DAT_08b1 & 0x80) == 0)) &&
        (((((~DAT_08b1 & 0x40) == 0 && (DAT_3580 <= DAT_0982)) && (DAT_0982 <= DAT_3582)) &&
         (((DAT_09a2 & 0x80) != 0 && ((~DAT_08a0 & 0x20) == 0)))))))))))) {
    if (DAT_09ad < DAT_357d) {
      DAT_09a1 = DAT_09a1 & 0x7f;
    }
    else {
      DAT_09a1 = DAT_09a1 | 0x80;
    }
  }
  else {
    DAT_09a1 = DAT_09a1 & 0x7f;
    DAT_09ad = 0;
  }
  FUN_aab6();
  bVar2 = DAT_09b6;
  if (((((DAT_09b6 & 4) == 0) || ((DAT_09a1 & 0x80) == 0)) ||
      ((DAT_08f4 < DAT_36e0 ||
       (((DAT_36e1 <= DAT_08f4 || (DAT_08f5 < DAT_36e2)) || (DAT_36e3 <= DAT_08f5)))))) ||
     ((DAT_08ed < DAT_36e4 || (DAT_36e5 < DAT_08ed)))) {
LAB_a6a8:
    DAT_09b6 = bVar2;
    DAT_09ca = 0;
    bVar2 = DAT_09b6 & 0xf7;
LAB_a6af:
    DAT_09b6 = bVar2;
    DAT_09b6 = DAT_09b6 & 0xef;
  }
  else {
    bVar2 = DAT_09b6 | 8;
    if ((DAT_09ca < DAT_36e6) || (DAT_36e7 != -0x80)) goto LAB_a6af;
    if ((((~DAT_08b0 & 0x10) != 0) || ((~DAT_08b0 & 4) != 0)) ||
       (((~DAT_08b0 & 2) != 0 ||
        ((((~DAT_08b1 & 8) != 0 || ((~DAT_08b1 & 4) != 0)) || ((~DAT_08b1 & 2) != 0))))))
    goto LAB_a6a8;
    DAT_09b6 = DAT_09b6 | 0x18;
  }
  DAT_0ba8 = DAT_097e;
  if ((~DAT_09a1 & 0x80) == 0) {
    uVar4 = 0x8000;
  }
  else if ((DAT_09a1 & 2) == 0) {
    uVar5 = DAT_36a2;
    if ((DAT_09a2 & 1) != 0) {
      FUN_ab66();
      FUN_ab90();
      lookup_u8_uniform_u16_axis();
      DAT_09a8 = (ushort)extraout_A_01 << 8;
      DAT_09a2 = DAT_09a2 & 0xfe;
      uVar5 = DAT_09a8;
    }
    uVar4 = DAT_097e + uVar5;
    DAT_0dde = uVar5;
    if (CARRY2(DAT_097e,uVar5)) {
      uVar4 = 0xffff;
    }
  }
  else {
    uVar5 = DAT_36a0;
    if ((~DAT_09a2 & 1) == 0) {
      FUN_ab66();
      FUN_ab90();
      lookup_u8_uniform_u16_axis();
      DAT_09a6 = (ushort)extraout_A_00 << 8;
      DAT_09a2 = DAT_09a2 | 1;
      uVar5 = DAT_09a6;
    }
    uVar4 = DAT_097e - uVar5;
    DAT_0dde = uVar5;
    if (DAT_097e < uVar5) {
      uVar4 = 0;
    }
  }
  DAT_097e = DAT_36c0;
  if ((DAT_36c0 <= uVar4) && (DAT_097e = uVar4, DAT_36c2 < uVar4)) {
    DAT_097e = DAT_36c2;
  }
  bVar2 = DAT_0bd2;
  if (((DAT_0d5c != -0x80) && (DAT_0d87 != '\t')) &&
     (((~DAT_08a0 & 4) == 0 && ((~DAT_08b2 & 0x80) == 0)))) {
    if ((DAT_09a1 & 0x80) != 0) {
      if (DAT_36c2 <= DAT_097e) {
        if ((DAT_08b6 & 0x20) == 0) {
          DAT_08b6 = DAT_08b6 | 0x20;
        }
        else if ((DAT_4e52 < DAT_0b44) && ((~DAT_08b0 & 4) == 0)) {
          DAT_08b0 = DAT_08b0 | 4;
          bVar2 = DAT_0bd2 | 0x40;
          if ((~DAT_08b9 & 4) == 0) {
            DAT_08b9 = DAT_08b9 | 4;
            bVar2 = DAT_0bd2 | 0x44;
          }
        }
        goto LAB_a7b0;
      }
      if ((DAT_097e < DAT_0ba8) && ((DAT_08b0 & 4) != 0)) {
        DAT_08b0 = DAT_08b0 & 0xfb;
        DAT_0bd2 = DAT_0bd2 | 0x40;
      }
    }
    DAT_0b44 = 0;
    DAT_08b6 = DAT_08b6 & 0xdf;
    bVar2 = DAT_0bd2;
  }
LAB_a7b0:
  DAT_0bd2 = bVar2;
  bVar2 = DAT_0bd2;
  if ((((DAT_0d5d != -0x80) && (DAT_0d87 != '\t')) && ((~DAT_08a0 & 4) == 0)) &&
     ((~DAT_08b2 & 0x80) == 0)) {
    if ((DAT_09a1 & 0x80) != 0) {
      if (DAT_097e <= DAT_36c0) {
        if ((DAT_08b6 & 0x10) == 0) {
          DAT_08b6 = DAT_08b6 | 0x10;
        }
        else if ((DAT_4e52 < DAT_0b45) && ((~DAT_08b0 & 2) == 0)) {
          DAT_08b0 = DAT_08b0 | 2;
          bVar2 = DAT_0bd2 | 0x40;
          if ((~DAT_08b9 & 2) == 0) {
            DAT_08b9 = DAT_08b9 | 2;
            bVar2 = DAT_0bd2 | 0x44;
          }
        }
        goto LAB_a823;
      }
      if ((DAT_0ba8 < DAT_097e) && ((DAT_08b0 & 2) != 0)) {
        DAT_08b0 = DAT_08b0 & 0xfd;
        DAT_0bd2 = DAT_0bd2 | 0x40;
      }
    }
    DAT_0b45 = 0;
    DAT_08b6 = DAT_08b6 & 0xef;
    bVar2 = DAT_0bd2;
  }
LAB_a823:
  DAT_0bd2 = bVar2;
  uVar5 = (ushort)*(byte *)((short)&DAT_09b7 + (ushort)(byte)(DAT_09cb * '\x04' + DAT_09cc)) * 0x100
  ;
  sVar7 = uVar5 - DAT_09c8;
  if (uVar5 < DAT_09c8) {
    cVar8 = -(char)sVar7;
    uVar6 = scale_u16_by_u8(param_1,CONCAT11((~(byte)((ushort)sVar7 >> 8) + 1) - (cVar8 != '\0'),
                                             cVar8));
    sVar7 = CONCAT11((~(byte)((ushort)uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
  }
  else {
    sVar7 = scale_u16_by_u8();
  }
  DAT_09c8 = sVar7 + DAT_09c8;
  bVar1 = 0x7f < (byte)DAT_09c8;
  bVar2 = (byte)(DAT_09c8 >> 8);
  DAT_0980 = (bVar2 + bVar1) - CARRY1(bVar2,bVar1);
  if ((DAT_36e7 != -0x80) && (DAT_36ee == -0x80)) {
    DAT_09b7 = 0x8080;
    DAT_09b9 = 0x8080;
    DAT_09bb = 0x8080;
    DAT_09bd = 0x8080;
    DAT_09bf = 0x8080;
    DAT_09c1 = 0x8080;
    DAT_09c3 = 0x8080;
    DAT_09c5 = 0x8080;
  }
  if ((DAT_09cf & 1) != 0) {
    if ((~DAT_09cf & 4) == 0) {
      if (((~DAT_09cf & 8) == 0) && ((DAT_09cf & 2) != 0)) {
        DAT_09cf = DAT_09cf | 4;
        DAT_09dd = 0;
LAB_a8d3:
        if (DAT_09d7 <= DAT_09dd) {
          DAT_09cf = DAT_09cf & 0xfb | 8;
        }
      }
    }
    else {
      if (DAT_09da <= DAT_09d2) {
        DAT_09dd = (DAT_09dd + 1) - (0xfe < DAT_09dd);
        goto LAB_a8d3;
      }
      DAT_09cf = DAT_09cf & 0x3a;
      DAT_09dd = 0;
    }
  }
  DAT_0bc8 = (DAT_0bc8 + 1) - (0xfe < DAT_0bc8);
  bVar2 = DAT_0bd2;
  if (DAT_4e91 == -0x80) {
    DAT_0884 = DAT_0884 & 0xfd;
LAB_a983:
    DAT_0885 = DAT_0885 & 0x7f;
    if ((~DAT_0881 & 0x20) == 0) {
      DAT_0884 = DAT_0884 & 0xfe;
    }
  }
  else if ((DAT_08dd <= DAT_4e92) && (DAT_4e94 < DAT_08dd)) {
    if (DAT_08dd < DAT_4e93) {
      bVar1 = DAT_0b0a < DAT_4be8;
      DAT_0b0a = DAT_0b0a - DAT_4be8;
      if (bVar1) {
        DAT_0b0a = 0;
      }
    }
    else {
      DAT_0b0a = CONCAT11((char)(DAT_0b0a + 1 >> 8),(char)(DAT_0b0a + 1) - (0xfffe < DAT_0b0a));
      if (DAT_4be6 <= DAT_0b0a) {
        DAT_0b0a = DAT_4be6;
      }
    }
    if (DAT_0b0a < DAT_4bea) goto LAB_a983;
    DAT_0885 = DAT_0885 | 0x80;
    if (DAT_0dd9 == -0x80) {
      DAT_08a1 = DAT_08a1 | 2;
    }
    else {
      DAT_0884 = DAT_0884 | 1;
    }
    if ((((DAT_0d5b != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) &&
       (((DAT_0dd9 == -0x80 || (0x1e < DAT_0bc8)) && ((~DAT_08b0 & 8) == 0)))) {
      DAT_08b0 = DAT_08b0 | 8;
      bVar2 = DAT_0bd2 | 0x40;
      if ((~DAT_08b9 & 8) == 0) {
        DAT_08b9 = DAT_08b9 | 8;
        bVar2 = DAT_0bd2 | 0x44;
      }
    }
  }
  DAT_0bd2 = bVar2;
  if ((DAT_0bf8 & 0x40) == 0) {
LAB_a9ac:
    DAT_0bfa = 0;
  }
  else {
    bVar2 = DAT_0bfa + 1;
    if ((0xfe < DAT_0bfa) || (DAT_0bfa = bVar2, DAT_4bfc < bVar2)) {
      DAT_0bf8 = DAT_0bf8 & 0xbf;
      goto LAB_a9ac;
    }
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 2) != 0)) && ((~DAT_0d08 & 0x20) == 0)) {
    DAT_0dde._0_1_ = DAT_0d25 & 0x3f;
    bVar2 = DAT_0dde._0_1_;
    DAT_0de0._0_1_ = DAT_0d27 & 0x3f;
    sVar7 = (DAT_0d26 & 0x3f) << 6;
    bVar3 = (byte)((ushort)sVar7 >> 8);
    DAT_0dde = CONCAT11(DAT_0d25,bVar3) & 0x3fff;
    DAT_0d34 = (char)(((ushort)bVar2 << 4) >> 8);
    DAT_0d35 = CONCAT11((byte)((ushort)bVar2 << 4) | bVar3,(byte)sVar7 | DAT_0de0._0_1_);
    _DAT_0de2 = (ushort)DAT_0d18 * (ushort)DAT_0d19 + (ushort)DAT_0d17 * (ushort)DAT_0d18;
    DAT_0de0._1_1_ = CARRY2((ushort)DAT_0d18 * (ushort)DAT_0d19,(ushort)DAT_0d17 * (ushort)DAT_0d18)
    ;
    DAT_0d32 = (ushort)DAT_0d19 * (ushort)DAT_0d17 + _DAT_0de2;
    DAT_0d31 = (undefined1)DAT_0de0 + CARRY2((ushort)DAT_0d19 * (ushort)DAT_0d17,_DAT_0de2);
    if ((DAT_0d32 == DAT_0d35) && (DAT_0d31 == DAT_0d34)) {
      DAT_0d08 = DAT_0d08 | 0x10;
    }
    else {
      DAT_0d08 = DAT_0d08 & 0xef;
    }
    DAT_0d08 = DAT_0d08 | 0x20;
  }
  if (((DAT_0dd5 != -0x80) && ((DAT_0d06 & 4) != 0)) && ((~DAT_0be8 & 4) == 0)) {
    if ((((DAT_0d28 == DAT_0d2b) && (DAT_0d28 == DAT_0d2e)) && (DAT_0d2a == DAT_0d2d)) &&
       (DAT_0d2a == DAT_0d30)) {
      DAT_0d07 = DAT_0d07 & 0xef;
      if ((DAT_0d08 & 0x10) == 0) {
        DAT_0be8 = DAT_0be8 & 0xfb;
        DAT_0d08 = DAT_0d08 & 0xbf;
        DAT_0d06 = DAT_0d06 & 0xfb;
        DAT_0d37 = 0xffff;
        DAT_0d39 = 0xff;
        goto LAB_aab1;
      }
      DAT_0be8 = DAT_0be8 | 4;
      DAT_0d15 = 0;
    }
    else {
      DAT_0d07 = DAT_0d07 | 0x10;
      DAT_0be8 = DAT_0be8 & 0xfb;
    }
    DAT_0d06 = DAT_0d06 & 0xfb;
  }
LAB_aab1:
  DAT_08bf = DAT_08bf & 0xfb;
  return;
}


/* Entry aab6 */

void FUN_aab6(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (DAT_0900._0_1_ < DAT_36d6) {
    puVar2 = (undefined *)0x0;
LAB_aaee:
    DAT_09b6 = DAT_09b6 & 0xfd;
  }
  else {
    if (DAT_0900._0_1_ < DAT_36d7) {
      puVar2 = (undefined *)0x1;
    }
    else if (DAT_0900._0_1_ < DAT_36d8) {
      puVar2 = &UNK_0102;
    }
    else if (DAT_0900._0_1_ < DAT_36d9) {
      puVar2 = &UNK_0203;
    }
    else {
      if (DAT_36da <= DAT_0900._0_1_) {
        puVar2 = &UNK_0305;
        goto LAB_aaee;
      }
      puVar2 = &UNK_0304;
    }
    DAT_09b6 = DAT_09b6 | 2;
  }
  DAT_09cb = (char)((ushort)puVar2 >> 8);
  DAT_09cd = (char)puVar2;
  if (DAT_36db < DAT_0c90._0_1_) {
    if (DAT_36dc < DAT_0c90._0_1_) {
      if (DAT_36dd < DAT_0c90._0_1_) {
        if (DAT_36de < DAT_0c90._0_1_) {
          if (DAT_36df < DAT_0c90._0_1_) {
            puVar3 = &UNK_0305;
            goto LAB_ab36;
          }
          puVar3 = &UNK_0304;
        }
        else {
          puVar3 = &UNK_0203;
        }
      }
      else {
        puVar3 = &UNK_0102;
      }
    }
    else {
      puVar3 = (undefined *)0x1;
    }
    DAT_09b6 = DAT_09b6 | 1;
    bVar1 = true;
  }
  else {
    puVar3 = (undefined *)0x0;
LAB_ab36:
    DAT_09b6 = DAT_09b6 & 0xfe;
    bVar1 = false;
  }
  DAT_09cc = (char)((ushort)puVar3 >> 8);
  DAT_09ce = (char)puVar3;
  if ((((DAT_09b6 & 2) != 0) && (bVar1)) || (CONCAT11((char)puVar2,(char)puVar3) == 0x100)) {
    DAT_09b6 = DAT_09b6 | 4;
  }
  else {
    DAT_09b6 = DAT_09b6 & 0xfb;
  }
  return;
}


/* Entry ab66 */

void FUN_ab66(void)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  
  uVar3 = DAT_09a4 + DAT_097e >> 1;
  uVar3 = CONCAT11((byte)(uVar3 >> 8) | CARRY2(DAT_09a4,DAT_097e) << 7,(char)uVar3);
  if (uVar3 < 0xc000) {
    if (uVar3 < 0x4000) {
      DAT_09c7 = '\0';
    }
    else {
      bVar1 = 0x7f < (byte)((char)(uVar3 + 0xc000) * '\x02');
      bVar2 = (byte)((uVar3 + 0xc000 & 0x7fff) >> 7);
      DAT_09c7 = (bVar2 + bVar1) - CARRY1(bVar2,bVar1);
    }
  }
  else {
    DAT_09c7 = -1;
  }
  DAT_09a4 = DAT_097e;
  return;
}


/* Entry ab90 */

void FUN_ab90(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  if ((DAT_09b6 & 0x10) != 0) {
    pbVar3 = (byte *)((short)&DAT_09b7 + (ushort)(byte)(DAT_09cb * '\x04' + DAT_09cc));
    if (DAT_36e8 < DAT_09c7) {
      bVar1 = *pbVar3 + DAT_36ea;
      if (CARRY1(*pbVar3,DAT_36ea)) {
        bVar1 = 0xff;
      }
    }
    else if (DAT_09c7 < DAT_36e9) {
      bVar1 = *pbVar3 - DAT_36ea;
      if (*pbVar3 < DAT_36ea) {
        bVar1 = 0;
      }
    }
    else {
      bVar1 = *pbVar3;
    }
    bVar2 = DAT_36eb;
    if ((DAT_36eb <= bVar1) && (bVar2 = bVar1, DAT_36ec < bVar1)) {
      bVar2 = DAT_36ec;
    }
    *pbVar3 = bVar2;
  }
  return;
}


/* Entry abdd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_abdd(void)

{
  bool bVar1;
  byte bVar3;
  ushort uVar2;
  byte bVar4;
  byte bVar5;
  
  bVar3 = 0x10;
  do {
    if (&UNK_3588 + bVar3 < DAT_08e8) {
      bVar3 = (byte)(bVar3 + 2) >> 1;
      goto LAB_abf8;
    }
    bVar1 = 1 < bVar3;
    bVar3 = bVar3 - 2;
  } while (bVar1);
  bVar3 = 0;
LAB_abf8:
  uVar2 = CONCAT11(bVar3,0x10);
  do {
    bVar4 = (byte)uVar2;
    bVar3 = (byte)(uVar2 >> 8);
    if (&UNK_359c + (uVar2 & 0xff) < DAT_0900) {
      bVar4 = (byte)(bVar4 + 2) >> 1;
      goto LAB_ac15;
    }
    uVar2 = CONCAT11(bVar3,bVar4 - 2);
  } while (1 < bVar4);
  bVar4 = 0;
LAB_ac15:
  _DAT_09b0 = CONCAT11(bVar3,bVar4);
  bVar5 = (byte)((ushort)bVar4 * 10);
  DAT_09ae = (&DAT_35b0)
             [CONCAT11((char)((ushort)bVar4 * 10 >> 8) + CARRY1(bVar5,bVar3),bVar5 + bVar3)];
  return;
}


/* Entry ac2e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ac2e(void)

{
  bool bVar1;
  byte bVar3;
  ushort uVar2;
  byte bVar4;
  byte bVar5;
  
  bVar3 = 0x10;
  do {
    if (&UNK_3614 + bVar3 < DAT_0c90) {
      bVar3 = (byte)(bVar3 + 2) >> 1;
      goto LAB_ac49;
    }
    bVar1 = 1 < bVar3;
    bVar3 = bVar3 - 2;
  } while (bVar1);
  bVar3 = 0;
LAB_ac49:
  uVar2 = CONCAT11(bVar3,0x10);
  do {
    bVar4 = (byte)uVar2;
    bVar3 = (byte)(uVar2 >> 8);
    if (&UNK_3628 + (uVar2 & 0xff) < DAT_0900) {
      bVar4 = (byte)(bVar4 + 2) >> 1;
      goto LAB_ac66;
    }
    uVar2 = CONCAT11(bVar3,bVar4 - 2);
  } while (1 < bVar4);
  bVar4 = 0;
LAB_ac66:
  _DAT_09b2 = CONCAT11(bVar3,bVar4);
  bVar5 = (byte)((ushort)bVar4 * 10);
  DAT_09af = (&DAT_363c)
             [CONCAT11((char)((ushort)bVar4 * 10 >> 8) + CARRY1(bVar5,bVar3),bVar5 + bVar3)];
  return;
}


/* Entry ac7f */

void FUN_ac7f(void)

{
  byte bVar1;
  
  DAT_088e = DAT_088e & 0x7f;
  DAT_08bf = DAT_08bf | 2;
  if ((~DAT_08a0 & 4) == 0) {
    if ((~DAT_08b2 & 0x80) == 0) {
      if (((((~DAT_0d08 & 1) != 0) || ((~DAT_0884 & 2) != 0)) || ((~DAT_0884 & 1) != 0)) ||
         (((DAT_0dd9 != -0x80 && ((~DAT_08b0 & 8) != 0)) || ((~DAT_08b1 & 0x10) != 0)))) {
        DAT_0afb = 0xff;
        DAT_0afc = 0xff;
        goto LAB_ace6;
      }
      if (DAT_0afb < DAT_4e8f) {
        DAT_0afb = (DAT_0afb + 1) - (0xfe < DAT_0afb);
      }
      else if (DAT_4e8e <= DAT_0afc) goto LAB_ace6;
      bVar1 = DAT_0000;
      DAT_0000 = bVar1 | 4;
    }
    else {
LAB_ace6:
      bVar1 = DAT_0000;
      DAT_0000 = bVar1 & 0xfb;
    }
    DAT_0afc = (DAT_0afc + 1) - (0xfe < DAT_0afc);
  }
  if (((DAT_08a0 & 4) == 0) || (DAT_0bdd != DAT_0d4d)) {
    if ((DAT_0d87 == '\t') || (DAT_0900._0_1_ <= DAT_4e1c)) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xfe;
    }
    else if (DAT_4e1d <= DAT_0900._0_1_) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 1;
    }
  }
  if ((((((~DAT_08af & 8) != 0) || ((~DAT_08af & 4) != 0)) || ((~DAT_08af & 0x20) != 0)) ||
      (((~DAT_08af & 0x10) != 0 || ((DAT_08b1 & 8) != 0)))) || (DAT_370e < DAT_08e8._0_1_))
  goto LAB_ada9;
  if ((~DAT_0b80 & 1) == 0) {
    if ((DAT_0b80 & 4) == 0) {
      if ((DAT_0b80 & 0x10) == 0) {
        if ((~DAT_0b80 & 0x40) == 0) {
          DAT_0b8a = 0;
          if (DAT_0898 == DAT_4e8d) {
            if ((DAT_0abe < DAT_36ef) || (DAT_36f0 < DAT_0abe)) {
              if ((DAT_0b81 & 8) != 0) {
                if ((DAT_0b82 < DAT_36f2) || (DAT_36f4 < DAT_0b82)) goto LAB_ada9;
                DAT_0b80 = DAT_0b80 | 0x40;
                DAT_0b84 = 0;
              }
            }
            else {
              DAT_0b81 = DAT_0b81 | 8;
              DAT_0b82 = CONCAT11((char)(DAT_0b82 + 1 >> 8),
                                  (char)(DAT_0b82 + 1) - (0xfffe < DAT_0b82));
            }
          }
          else {
LAB_ada9:
            DAT_0b80 = 0;
            DAT_0b81 = 0;
            DAT_0b82 = 0;
            DAT_0b84 = 0;
            DAT_0b86 = 0;
            DAT_0b88 = 0;
            DAT_0b8a = 0;
          }
        }
        else {
          DAT_0b8a = CONCAT11((char)(DAT_0b8a + 1 >> 8),(char)(DAT_0b8a + 1) - (0xfffe < DAT_0b8a));
          if (DAT_3710 < DAT_0b8a) goto LAB_ada9;
          if ((~DAT_0b80 & 0x20) == 0) {
            DAT_0b84 = CONCAT11((char)(DAT_0b84 + 1 >> 8),(char)(DAT_0b84 + 1) - (0xfffe < DAT_0b84)
                               );
            if (DAT_0b84 < DAT_36f6) goto LAB_af24;
            DAT_0b80 = DAT_0b80 | 0x20;
            DAT_0b84 = 0;
          }
          if ((DAT_0abe < DAT_36f8) || (DAT_36f9 < DAT_0abe)) {
            if ((DAT_0b81 & 4) != 0) {
              if ((DAT_0b84 < DAT_36fa) || (DAT_36fc < DAT_0b84)) goto LAB_ada9;
              DAT_0b80 = DAT_0b80 | 0x10;
              DAT_0b86 = 0;
            }
          }
          else {
            DAT_0b81 = DAT_0b81 | 4;
            DAT_0b84 = CONCAT11((char)(DAT_0b84 + 1 >> 8),(char)(DAT_0b84 + 1) - (0xfffe < DAT_0b84)
                               );
          }
        }
      }
      else {
        DAT_0b8a = CONCAT11((char)(DAT_0b8a + 1 >> 8),(char)(DAT_0b8a + 1) - (0xfffe < DAT_0b8a));
        if (DAT_3710 < DAT_0b8a) goto LAB_ada9;
        if ((~DAT_0b80 & 8) == 0) {
          DAT_0b86 = CONCAT11((char)(DAT_0b86 + 1 >> 8),(char)(DAT_0b86 + 1) - (0xfffe < DAT_0b86));
          if (DAT_0b86 < DAT_36fe) goto LAB_af24;
          DAT_0b80 = DAT_0b80 | 8;
          DAT_0b86 = 0;
        }
        if ((DAT_0abe < DAT_3700) || (DAT_3701 < DAT_0abe)) {
          if ((DAT_0b81 & 2) != 0) {
            if ((DAT_0b86 < DAT_3702) || (DAT_3704 < DAT_0b86)) goto LAB_ada9;
            DAT_0b80 = DAT_0b80 | 4;
            DAT_0b88 = 0;
          }
        }
        else {
          DAT_0b81 = DAT_0b81 | 2;
          DAT_0b86 = CONCAT11((char)(DAT_0b86 + 1 >> 8),(char)(DAT_0b86 + 1) - (0xfffe < DAT_0b86));
        }
      }
    }
    else {
      DAT_0b8a = CONCAT11((char)(DAT_0b8a + 1 >> 8),(char)(DAT_0b8a + 1) - (0xfffe < DAT_0b8a));
      if (DAT_3710 < DAT_0b8a) goto LAB_ada9;
      if ((~DAT_0b80 & 2) == 0) {
        DAT_0b88 = CONCAT11((char)(DAT_0b88 + 1 >> 8),(char)(DAT_0b88 + 1) - (0xfffe < DAT_0b88));
        if (DAT_0b88 < DAT_3706) goto LAB_af24;
        DAT_0b80 = DAT_0b80 | 2;
        DAT_0b88 = 0;
      }
      if ((DAT_0abe < DAT_3708) || (DAT_3709 < DAT_0abe)) {
        if ((DAT_0b81 & 1) != 0) {
          if ((DAT_0b88 < DAT_370a) || (DAT_370c < DAT_0b88)) goto LAB_ada9;
          DAT_0b80 = DAT_0b80 | 1;
        }
      }
      else {
        DAT_0b81 = DAT_0b81 | 1;
        DAT_0b88 = CONCAT11((char)(DAT_0b88 + 1 >> 8),(char)(DAT_0b88 + 1) - (0xfffe < DAT_0b88));
      }
    }
  }
LAB_af24:
  if ((DAT_0893 & 0x20) == 0) goto LAB_af92;
  if ((((DAT_0bdd != DAT_0d46) && (DAT_0bdd != DAT_0d47)) && (DAT_0bdd != DAT_0d48)) &&
     ((DAT_0bdd != DAT_0d49 && (DAT_0bdd != DAT_0d4a)))) {
    if ((DAT_0bdd == DAT_0d4b) || (DAT_0bdd == DAT_0d4c)) {
      DAT_0be2 = (DAT_0be2 + 1) - (0xfe < DAT_0be2);
      if (DAT_4f0c < DAT_0be2) {
        DAT_0893 = DAT_0893 & 0xdf | 0x10;
        DAT_0be4 = DAT_4f0e;
      }
      goto LAB_af92;
    }
    if (DAT_0bdd != DAT_0d4d) goto LAB_af92;
  }
  DAT_0be2 = (DAT_0be2 + 1) - (0xfe < DAT_0be2);
  if (DAT_4f0c < DAT_0be2) {
    DAT_0893 = DAT_0893 & 0xdf | 0x10;
    DAT_0be4 = DAT_4f0d;
  }
LAB_af92:
  if ((DAT_0893 & 0x10) != 0) {
    if (DAT_0bdd == DAT_0d46) {
      FUN_b900();
    }
    else if (DAT_0bdd == DAT_0d47) {
      FUN_b97f();
    }
    else if (DAT_0bdd == DAT_0d48) {
      FUN_ba06();
    }
    else if (DAT_0bdd == DAT_0d49) {
      FUN_ba8d();
    }
    else if (DAT_0bdd == DAT_0d4a) {
      FUN_baed();
    }
    else if (DAT_0bdd == DAT_0d4b) {
      FUN_bb45();
    }
    else if (DAT_0bdd == DAT_0d4c) {
      FUN_bba1();
    }
    else if (DAT_0bdd == DAT_0d4d) {
      FUN_bbfd();
    }
    else if (DAT_0bdd == DAT_0d50) {
      FUN_bc1b();
    }
  }
  DAT_08bf = DAT_08bf & 0xfd;
  return;
}


/* Entry aff9 */

void FUN_aff9(void)

{
  byte bVar1;
  short sVar2;
  
  DAT_0882 = DAT_0882 & 0xdf;
  DAT_0b02 = (DAT_0b02 + 1) - (0xfe < DAT_0b02);
  if (((DAT_0884 & 4) != 0) && (DAT_0aff = (DAT_0aff + 1) - (0xfe < DAT_0aff), DAT_4bf9 <= DAT_0aff)
     ) {
    DAT_0884 = DAT_0884 & 0xfb;
    DAT_0aff = 0;
  }
  if ((DAT_0bf8 & 0x80) != 0) {
    bVar1 = DAT_0bf9 + 1;
    if ((DAT_0bf9 != -1) && (DAT_0bf9 = bVar1, bVar1 <= DAT_4bf9)) goto LAB_b049;
    DAT_0bf8 = DAT_0bf8 & 0x7f;
  }
  DAT_0bf9 = 0;
LAB_b049:
  DAT_0b00 = (DAT_0b00 + 1) - (0xfe < DAT_0b00);
  bVar1 = DAT_00e1;
  if (((bVar1 & 8) != 0) && (DAT_0b00 == 8)) {
    DAT_0b01 = (DAT_0b01 + 1) - (0xfe < DAT_0b01);
  }
  if (((~DAT_088d & 0x80) != 0) || (bVar1 = DAT_4ba2, DAT_4ba4 < DAT_0b01)) {
    DAT_088d = DAT_088d | 0x80;
    bVar1 = DAT_4ba3;
  }
  if (bVar1 <= DAT_0b00) {
    bVar1 = DAT_00e1;
    if ((bVar1 & 8) != 0) {
      DAT_0afd = 0;
    }
    sVar2 = DAT_0044;
    DAT_0056 = sVar2 + 5;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xf7;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
    DAT_0a92 = DAT_0a92 & 0x77;
  }
  if (((DAT_4ba5 <= DAT_0900._0_1_) || (DAT_4ba6 <= DAT_0b5e)) || (DAT_4ba6 <= DAT_0b00)) {
    DAT_0b01 = 0;
    DAT_088d = DAT_088d & 0x7f;
  }
  if ((~DAT_0880 & 1) == 0) {
    DAT_0b5e = (DAT_0b5e + 1) - (0xfe < DAT_0b5e);
  }
  else {
    DAT_0b5e = '\0';
  }
  DAT_0b6b = (DAT_0b6b + 1) - (0xfe < DAT_0b6b);
  DAT_0b6e = (DAT_0b6e + 1) - (0xfe < DAT_0b6e);
  DAT_09ad = (DAT_09ad + 1) - (0xfe < DAT_09ad);
  if ((((~DAT_0880 & 1) != 0) || (DAT_0d75 <= DAT_0b6e)) &&
     ((DAT_4e98 <= DAT_08d9 && (DAT_08d9 < 0xcd)))) {
    if (DAT_0b56 < DAT_4e99) {
      if (DAT_4e99 <= DAT_0b55) {
        DAT_08b4 = DAT_08b4 & 0x7f;
      }
    }
    else {
      DAT_08b4 = DAT_08b4 | 0x80;
    }
    if (DAT_0b58 < DAT_4e99) {
      if (DAT_4e99 <= DAT_0b57) {
        DAT_08b4 = DAT_08b4 & 0xbf;
      }
    }
    else {
      DAT_08b4 = DAT_08b4 | 0x40;
    }
  }
  DAT_08bc = DAT_08bc & 0xfb;
  return;
}


/* Entry b166 */

void FUN_b166(short param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  byte extraout_A;
  undefined1 extraout_A_00;
  undefined1 extraout_A_01;
  undefined1 extraout_A_02;
  byte extraout_A_03;
  byte extraout_A_04;
  undefined1 extraout_A_05;
  undefined2 uVar7;
  short sVar8;
  ushort uVar9;
  short sVar10;
  
  DAT_0882 = DAT_0882 & 0xef;
  DAT_08bc = DAT_08bc | 2;
  lookup_u8_uniform_axis();
  DAT_095e = (ushort)extraout_A << 3;
  lookup_u8_uniform_axis();
  DAT_0979 = extraout_A_00;
  lookup_u8_uniform_axis();
  DAT_098f = extraout_A_01;
  lookup_u8_uniform_axis();
  if (((DAT_0881 & 0x20) == 0) || ((~DAT_0880 & 8) != 0)) {
    DAT_0b3d = 0;
LAB_b1d7:
    bVar1 = DAT_089f & 0x3f;
  }
  else {
    DAT_0b3d = (DAT_0b3d + 1) - (0xfe < DAT_0b3d);
    if (DAT_0b3d < DAT_18b0) goto LAB_b1d7;
    bVar1 = DAT_089f | 0x80;
    if ((~(DAT_089f | 0x80) & 0x40) == 0) {
      DAT_0ca4 = DAT_0ca2;
      bVar1 = DAT_089f | 0xc0;
    }
  }
  DAT_089f = bVar1;
  sVar10 = param_1;
  DAT_0990 = extraout_A_02;
  if ((DAT_089f & 0x80) != 0) {
    sVar10 = DAT_0ca2 - DAT_0ca4;
    if (DAT_0ca2 < DAT_0ca4) {
      sVar10 = CONCAT11((~(byte)((ushort)sVar10 >> 8) + 1) - ((char)-(char)sVar10 != '\0'),
                        -(char)sVar10);
      uVar7 = scale_u16_by_u8(param_1,sVar10);
      sVar8 = CONCAT11((~(byte)((ushort)uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7
                      );
    }
    else {
      sVar8 = scale_u16_by_u8(param_1,sVar10);
    }
    DAT_0ca4 = sVar8 + DAT_0ca4;
  }
  if ((DAT_0bfe & 0x80) != 0) {
    DAT_0cb2 = (ushort)DAT_1870 * 2 + 0xc58;
  }
  if (((((((~DAT_08af & 0x20) == 0) && ((~DAT_08af & 0x10) == 0)) && ((~DAT_08af & 8) == 0)) &&
       (((~DAT_08af & 4) == 0 && ((~DAT_089f & 0x80) == 0)))) && ((~DAT_0881 & 0x10) == 0)) &&
     (((DAT_1874 <= DAT_08e8 && (DAT_08e8 <= DAT_1876)) &&
      ((DAT_1878 <= DAT_0900 &&
       (((DAT_0900 <= DAT_187a && (DAT_187c <= DAT_0c90)) && (DAT_0c90 <= DAT_187e)))))))) {
    bVar1 = DAT_0b3a + 1;
    if ((DAT_0b3a == 0xff) || (DAT_0b3a = bVar1, DAT_1871 < bVar1)) {
      lookup_u8_uniform_u16_axis();
      uVar2 = (ushort)extraout_A_03 * 0x40 + 0xe000;
      DAT_0cb0 = extraout_A_03;
      if ((ushort)extraout_A_03 * 0x40 < 0x2000) {
        DAT_0cb4 = uVar2 + DAT_0cb2;
        if (!CARRY2(uVar2,DAT_0cb2)) {
          DAT_0cb4 = 0;
        }
      }
      else {
        DAT_0cb4 = uVar2 + DAT_0cb2;
        if (CARRY2(uVar2,DAT_0cb2)) {
          DAT_0cb4 = 0xffff;
        }
      }
    }
  }
  else {
    DAT_0b3a = 0;
  }
  sVar8 = DAT_0cb4 - DAT_0cb6;
  if (DAT_0cb4 < DAT_0cb6) {
    uVar7 = scale_u16_by_u8(sVar10,CONCAT11((~(byte)((ushort)sVar8 >> 8) + 1) -
                                            ((char)-(char)sVar8 != '\0'),-(char)sVar8));
    sVar10 = CONCAT11((~(byte)((ushort)uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7)
    ;
  }
  else {
    sVar10 = scale_u16_by_u8(sVar10,sVar8);
  }
  uVar2 = sVar10 + DAT_0cb6;
  if ((DAT_1843 < DAT_0b1b) || ((DAT_0880 & 8) == 0)) {
    if ((DAT_089f & 0x10) == 0) {
      if (((~DAT_08af & 0x20) == 0) && ((~DAT_08af & 0x10) == 0)) goto LAB_b2fa;
    }
    else {
      DAT_089f = DAT_089f & 0xef;
    }
  }
  else {
    DAT_0b1b = 0xff;
  }
  DAT_0c86 = DAT_0da8;
LAB_b2fa:
  DAT_0b1b = (DAT_0b1b + 1) - (0xfe < DAT_0b1b);
  uVar9 = DAT_0da8;
  DAT_0cb6 = DAT_0da8;
  if ((DAT_1843 < DAT_0b3b) || ((DAT_0880 & 8) == 0)) {
    if ((DAT_089f & 8) == 0) {
      uVar3 = DAT_0da8;
      uVar4 = DAT_0da8;
      uVar5 = DAT_0da8;
      uVar6 = DAT_0da8;
      if (((((~DAT_08af & 0x20) == 0) &&
           (uVar3 = DAT_0da8, uVar4 = DAT_0da8, uVar5 = DAT_0da8, uVar6 = DAT_0da8,
           (~DAT_08af & 0x10) == 0)) &&
          (uVar3 = DAT_0da8, uVar4 = DAT_0da8, uVar5 = DAT_0da8, uVar6 = DAT_0da8,
          (~DAT_08af & 8) == 0)) &&
         (((uVar3 = DAT_0da8, uVar4 = DAT_0da8, uVar5 = DAT_0da8, uVar6 = DAT_0da8,
           (~DAT_08af & 4) == 0 &&
           (uVar9 = DAT_0ca4, uVar3 = DAT_0ca4, DAT_0cb6 = DAT_0ca4, uVar4 = DAT_0ca4,
           uVar5 = DAT_0ca4, uVar6 = DAT_0ca4, (DAT_089f & 0x80) == 0)) &&
          (uVar9 = DAT_0cc8, uVar3 = DAT_0cb4, DAT_0cb6 = uVar2, uVar4 = DAT_0cc6, uVar5 = DAT_0cc8,
          uVar6 = DAT_0cca, DAT_186f != -0x80)))) {
        uVar9 = uVar2;
      }
    }
    else {
      DAT_089f = DAT_089f & 0xf7;
      uVar3 = DAT_0da8;
      uVar4 = DAT_0da8;
      uVar5 = DAT_0da8;
      uVar6 = DAT_0da8;
    }
  }
  else {
    DAT_0b3b = 0xff;
    uVar3 = DAT_0da8;
    uVar4 = DAT_0da8;
    uVar5 = DAT_0da8;
    uVar6 = DAT_0da8;
  }
  DAT_0cca = uVar6;
  DAT_0cc8 = uVar5;
  DAT_0cc6 = uVar4;
  DAT_0cb4 = uVar3;
  DAT_08f2 = DAT_18ac;
  if ((DAT_18ac <= uVar9) && (DAT_08f2 = uVar9, DAT_18ae < uVar9)) {
    DAT_08f2 = DAT_18ae;
  }
  DAT_0b3b = (DAT_0b3b + 1) - (0xfe < DAT_0b3b);
  lookup_u8_uniform_u16_axis();
  DAT_0ba2 = DAT_0c90;
  DAT_0ba4 = &axis_raw_3258;
  DAT_0971 = extraout_A_04;
  DAT_0974 = axis_index_u16_ascending();
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_3270;
  DAT_0976 = axis_index_u16_ascending();
  DAT_0de0 = DAT_0974;
  DAT_0dde = DAT_0976;
  sVar10 = bilinear_u8_grid();
  DAT_0972 = (byte)((ushort)(sVar10 + 0x80) >> 8);
  DAT_0970 = (undefined1)((ushort)DAT_0972 * (ushort)DAT_0971 * 2 >> 8);
  if ((short)((ushort)DAT_0972 * (ushort)DAT_0971) < 0) {
    DAT_0970 = 0xff;
  }
  lookup_u8_uniform_u16_axis(DAT_08f2,&UNK_32e0);
  DAT_0978 = extraout_A_05;
  DAT_08bc = DAT_08bc & 0xfd;
  return;
}


/* Entry b3ec */

void FUN_b3ec(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 0x40) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      DAT_088f = DAT_088f & 0x7f;
      DAT_0890 = DAT_0890 | 0x80;
      DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
      FUN_57e9(&DAT_0a00);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 0x40;
  }
  if ((~DAT_0891 & 0x20) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(&DAT_0a02);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 0x20;
  }
  if ((~DAT_0891 & 0x10) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(&DAT_0a04);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 0x10;
  }
  if ((~DAT_0891 & 8) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(&DAT_0a06);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 8;
  }
  if ((~DAT_0891 & 4) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(&DAT_0a07);
    }
    else {
      bVar1 = DAT_00e9;
      if ((bVar1 & 0x10) != 0) {
        bVar1 = DAT_00f0;
        DAT_00f0 = bVar1 & 0xf7;
        DAT_0891 = 0;
        DAT_0890 = DAT_0890 & 0x7f;
      }
    }
  }
  return;
}


/* Entry b4c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_b4c6(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 0x40) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      DAT_088f = DAT_088f & 0xbf;
      DAT_0890 = DAT_0890 | 0x40;
      _DAT_0b32 = CONCAT11((char)(_DAT_0b32 + 1 >> 8),(char)(_DAT_0b32 + 1) - (0xfffe < _DAT_0b32));
      FUN_57e9(&DAT_0a01);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 0x40;
  }
  if ((~DAT_0891 & 0x20) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(&DAT_0a03);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 0x20;
  }
  if ((~DAT_0891 & 0x10) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(&DAT_0a05);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 0x10;
  }
  if ((~DAT_0891 & 8) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(&DAT_0a08);
      return;
    }
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    DAT_0891 = DAT_0891 & 0xfd | 8;
  }
  if ((~DAT_0891 & 4) == 0) {
    if ((~DAT_0891 & 2) == 0) {
      FUN_57e9(0xa09);
    }
    else {
      bVar1 = DAT_00e9;
      if ((bVar1 & 0x10) != 0) {
        bVar1 = DAT_00f0;
        DAT_00f0 = bVar1 & 0xf7;
        DAT_0891 = 0;
        DAT_0890 = DAT_0890 & 0xbf;
      }
    }
  }
  return;
}


/* Entry b5a0 */

void FUN_b5a0(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0bd2 = DAT_0bd2 & 0x7f;
    DAT_0bd3 = DAT_0bd3 | 0x80;
    DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
    FUN_57e9(&DAT_0a20);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0bd3 = DAT_0bd3 & 0x7f;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


/* Entry b5d7 */

void FUN_b5d7(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0bd2 = DAT_0bd2 & 0xbf;
    DAT_0bd3 = DAT_0bd3 | 0x40;
    DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
    FUN_57e9(&DAT_0a21);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0bd3 = DAT_0bd3 & 0xbf;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


/* Entry b60e */

void FUN_b60e(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0bd2 = DAT_0bd2 & 0xdf;
    DAT_0bd3 = DAT_0bd3 | 0x20;
    DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
    FUN_57e9(&DAT_0a22);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0bd3 = DAT_0bd3 & 0xdf;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


/* Entry b645 */

void FUN_b645(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0bd2 = DAT_0bd2 & 0xef;
    DAT_0bd3 = DAT_0bd3 | 0x10;
    DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
    FUN_57e9(0xa23);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0bd3 = DAT_0bd3 & 0xef;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


/* Entry b67c */

void FUN_b67c(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0bd2 = DAT_0bd2 & 0xf7;
    DAT_0bd3 = DAT_0bd3 | 8;
    DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
    FUN_57e9(&DAT_0a24);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0bd3 = DAT_0bd3 & 0xf7;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


/* Entry b6b3 */

void FUN_b6b3(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0bd2 = DAT_0bd2 & 0xfb;
    DAT_0bd3 = DAT_0bd3 | 4;
    DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
    FUN_57e9(0xa25);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0bd3 = DAT_0bd3 & 0xfb;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


/* Entry b6ea */

void FUN_b6ea(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0bd2 = DAT_0bd2 & 0xfd;
    DAT_0bd3 = DAT_0bd3 | 2;
    DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
    FUN_57e9(&DAT_0a26);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0bd3 = DAT_0bd3 & 0xfd;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


/* Entry b721 */

void FUN_b721(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0bd2 = DAT_0bd2 & 0xfe;
    DAT_0bd3 = DAT_0bd3 | 1;
    DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
    FUN_57e9(0xa27);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0bd3 = DAT_0bd3 & 0xfe;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


/* Entry b758 */

void FUN_b758(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0be8 = DAT_0be8 & 0x7f;
    DAT_0be9 = DAT_0be9 | 0x80;
    DAT_0b30 = CONCAT11((char)(DAT_0b30 + 1 >> 8),(char)(DAT_0b30 + 1) - (0xfffe < DAT_0b30));
    FUN_57e9(&DAT_0a28);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0be9 = DAT_0be9 & 0x7f;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


/* Entry b78f */

void FUN_b78f(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0be8 = DAT_0be8 & 0xbf;
    DAT_0be9 = DAT_0be9 | 0x40;
    FUN_57e9(DAT_0b9a,&DAT_0a30);
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      DAT_0be9 = DAT_0be9 & 0xbf;
      DAT_0891 = DAT_0891 & 0xfd;
    }
  }
  return;
}


/* Entry b7b9 */

void FUN_b7b9(void)

{
  byte bVar1;
  
  if ((~DAT_0891 & 2) == 0) {
    DAT_0be8 = DAT_0be8 & 0xfb;
    DAT_0be9 = DAT_0be9 | 4;
  }
  else {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
  }
  if (DAT_0d15 < 0xb) {
    FUN_57e9(DAT_0d15 + 0xa50);
    DAT_0d15 = (DAT_0d15 + 1) - (0xfe < DAT_0d15);
  }
  else {
    FUN_5e63();
    FUN_5f35();
    DAT_0d08 = DAT_0d08 | 0x40;
    DAT_0be9 = DAT_0be9 & 0xfb;
    DAT_0891 = DAT_0891 & 0xfd;
  }
  return;
}


/* Entry b817 */

void FUN_b817(void)

{
  undefined1 extraout_A;
  undefined1 extraout_A_00;
  undefined1 extraout_A_01;
  undefined1 extraout_A_02;
  undefined1 extraout_A_03;
  short sVar1;
  
  DAT_08bc = DAT_08bc | 1;
  DAT_0882 = DAT_0882 & 0xf7;
  if ((~DAT_0881 & 0x10) == 0) {
    DAT_0afa = (DAT_0afa + 1) - (0xfe < DAT_0afa);
  }
  else {
    DAT_0afa = '\0';
  }
  if ((DAT_09a1 & 0x20) != 0) {
    DAT_09ac = (DAT_09ac + 1) - (0xfe < DAT_09ac);
  }
  if ((DAT_09b6 & 8) != 0) {
    DAT_09ca = (DAT_09ca + 1) - (0xfe < DAT_09ca);
  }
  DAT_0ba2._0_1_ = DAT_08f4;
  DAT_0ba4 = &axis_raw_4a46;
  DAT_0a8e = axis_index_u8_ascending();
  DAT_0ba2._0_1_ = DAT_0900._0_1_;
  DAT_0ba4 = &axis_raw_4a56;
  DAT_0a90 = axis_index_u8_ascending();
  DAT_0de0 = DAT_0a8e;
  DAT_0dde = DAT_0a90;
  sVar1 = bilinear_u8_grid();
  DAT_0a88 = (undefined1)((ushort)(sVar1 + 0x80) >> 8);
  lookup_u8_uniform_axis();
  DAT_0a89 = extraout_A;
  lookup_u8_uniform_axis();
  DAT_097b = extraout_A_00;
  lookup_u8_uniform_axis();
  DAT_097c = extraout_A_01;
  lookup_u8_uniform_axis();
  if (DAT_4243 == '\x02') {
    DAT_0884 = DAT_0884 | 0x40;
  }
  else {
    DAT_0884 = DAT_0884 & 0xbf;
  }
  DAT_0a0f = extraout_A_02;
  lookup_u8_uniform_u16_axis(DAT_08f2,&UNK_4bac);
  DAT_0d05 = extraout_A_03;
  DAT_08bc = DAT_08bc & 0xfe;
  return;
}


/* Entry b900 */

void FUN_b900(void)

{
  short sVar1;
  undefined2 uVar2;
  byte bVar3;
  
  DAT_0be4 = (DAT_0be4 + 1) - (0xfe < DAT_0be4);
  if (DAT_4f0d <= DAT_0be4) {
    DAT_0be3 = (DAT_0be3 + 1) - (0xfe < DAT_0be3);
    if (DAT_4f0b < DAT_0be3) {
      DAT_0893 = DAT_0893 & 0xaf;
      DAT_0be3 = 0;
    }
    else {
      DAT_0893 = DAT_0893 | 4;
      sVar1 = DAT_0044;
      DAT_0056 = sVar1 + 2;
      bVar3 = DAT_004c;
      DAT_004c = bVar3 & 0xf7;
      bVar3 = DAT_0049;
      DAT_0049 = bVar3 | 0xc0;
      DAT_004e = 8;
      uVar2 = DAT_0044;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      uVar2 = DAT_0056;
      sVar1 = DAT_0056;
      DAT_0056 = DAT_4f12 + sVar1;
      bVar3 = DAT_004c;
      DAT_004c = bVar3 & 0xf7;
      bVar3 = DAT_0049;
      DAT_0049 = bVar3 & 0xbf | 0x80;
      DAT_004e = 8;
    }
    DAT_0be4 = 0;
  }
  return;
}


/* Entry b97f */

void FUN_b97f(void)

{
  short sVar1;
  undefined2 uVar2;
  byte bVar3;
  
  DAT_0be4 = (DAT_0be4 + 1) - (0xfe < DAT_0be4);
  if (DAT_4f0d <= DAT_0be4) {
    DAT_0be3 = (DAT_0be3 + 1) - (0xfe < DAT_0be3);
    if (DAT_4f0b < DAT_0be3) {
      DAT_0893 = DAT_0893 & 0xaf;
      DAT_0be3 = 0;
    }
    else {
      DAT_0893 = DAT_0893 | 4;
      if (DAT_4e7b != 0) {
        sVar1 = DAT_0044;
        DAT_005c = sVar1 + 2;
        bVar3 = DAT_004c;
        DAT_004c = bVar3 & 0xbf;
        bVar3 = DAT_0048;
        DAT_0048 = bVar3 & 0xef | 0x20;
        DAT_004e = 0x40;
        uVar2 = DAT_0044;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        uVar2 = DAT_005c;
        sVar1 = DAT_005c;
        DAT_005c = (ushort)DAT_4e7b * 0xfa + sVar1;
        bVar3 = DAT_004c;
        DAT_004c = bVar3 & 0xbf;
        bVar3 = DAT_0048;
        DAT_0048 = bVar3 | 0x30;
        DAT_004e = 0x40;
      }
    }
    DAT_0be4 = 0;
  }
  return;
}


/* Entry ba06 */

void FUN_ba06(void)

{
  short sVar1;
  undefined2 uVar2;
  byte bVar3;
  
  DAT_0be4 = (DAT_0be4 + 1) - (0xfe < DAT_0be4);
  if (DAT_4f0d <= DAT_0be4) {
    DAT_0be3 = (DAT_0be3 + 1) - (0xfe < DAT_0be3);
    if (DAT_4f0b < DAT_0be3) {
      DAT_0893 = DAT_0893 & 0xaf;
      DAT_0be3 = 0;
    }
    else {
      DAT_0893 = DAT_0893 | 4;
      if (DAT_4e7b != 0) {
        sVar1 = DAT_0044;
        DAT_005e = sVar1 + 2;
        bVar3 = DAT_004c;
        DAT_004c = bVar3 & 0x7f;
        bVar3 = DAT_0048;
        DAT_0048 = bVar3 & 0xbf | 0x80;
        DAT_004e = 0x80;
        uVar2 = DAT_0044;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        uVar2 = DAT_005e;
        sVar1 = DAT_005e;
        DAT_005e = (ushort)DAT_4e7b * 0xfa + sVar1;
        bVar3 = DAT_004c;
        DAT_004c = bVar3 & 0x7f;
        bVar3 = DAT_0048;
        DAT_0048 = bVar3 | 0xc0;
        DAT_004e = 0x80;
      }
    }
    DAT_0be4 = 0;
  }
  return;
}


/* Entry ba8d */

void FUN_ba8d(void)

{
  byte bVar1;
  
  DAT_0be4 = (DAT_0be4 + 1) - (0xfe < DAT_0be4);
  if (DAT_4f0d <= DAT_0be4) {
    DAT_0be3 = (DAT_0be3 + 1) - (0xfe < DAT_0be3);
    if (DAT_4f0b < DAT_0be3) {
      DAT_0893 = DAT_0893 & 0xaf;
      DAT_0be3 = 0;
    }
    else {
      DAT_0893 = DAT_0893 | 0xc;
      DAT_0be5 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 2;
      DAT_0889 = DAT_0889 | 0x80;
    }
    DAT_0be4 = 0;
  }
  if (((DAT_0893 & 8) != 0) && (DAT_0be5 = (DAT_0be5 + 1) - (0xfe < DAT_0be5), DAT_4f0f < DAT_0be5))
  {
    DAT_0893 = DAT_0893 & 0xf7;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfd;
    DAT_0889 = DAT_0889 & 0x7f;
  }
  return;
}


/* Entry baed */

void FUN_baed(void)

{
  byte bVar1;
  
  DAT_0be4 = (DAT_0be4 + 1) - (0xfe < DAT_0be4);
  if (DAT_4f0d <= DAT_0be4) {
    DAT_0be3 = (DAT_0be3 + 1) - (0xfe < DAT_0be3);
    if (DAT_4f0b < DAT_0be3) {
      DAT_0893 = DAT_0893 & 0xaf;
      DAT_0be3 = 0;
    }
    else {
      DAT_0893 = DAT_0893 | 0xc;
      DAT_0be5 = 0;
      bVar1 = DAT_0000;
      DAT_0000 = bVar1 & 0xfb;
    }
    DAT_0be4 = 0;
  }
  if (((DAT_0893 & 8) != 0) && (DAT_0be5 = (DAT_0be5 + 1) - (0xfe < DAT_0be5), DAT_4f0f < DAT_0be5))
  {
    DAT_0893 = DAT_0893 & 0xf7;
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 | 4;
  }
  return;
}


/* Entry bb45 */

void FUN_bb45(void)

{
  byte bVar1;
  
  DAT_0be4 = (DAT_0be4 + 1) - (0xfe < DAT_0be4);
  if (DAT_4f0e <= DAT_0be4) {
    DAT_0be3 = (DAT_0be3 + 1) - (0xfe < DAT_0be3);
    if (DAT_4f0b < DAT_0be3) {
      DAT_0893 = DAT_0893 & 0xaf;
      DAT_0be3 = 0;
    }
    else {
      DAT_0893 = DAT_0893 | 0xc;
      DAT_0be5 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 4;
    }
    DAT_0be4 = 0;
  }
  if (((DAT_0893 & 8) != 0) && (DAT_0be5 = (DAT_0be5 + 1) - (0xfe < DAT_0be5), DAT_4f10 < DAT_0be5))
  {
    DAT_0893 = DAT_0893 & 0xf3;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfb;
  }
  return;
}


/* Entry bba1 */

void FUN_bba1(void)

{
  byte bVar1;
  
  DAT_0be4 = (DAT_0be4 + 1) - (0xfe < DAT_0be4);
  if (DAT_4f0e <= DAT_0be4) {
    DAT_0be3 = (DAT_0be3 + 1) - (0xfe < DAT_0be3);
    if (DAT_4f0b < DAT_0be3) {
      DAT_0893 = DAT_0893 & 0xaf;
      DAT_0be3 = 0;
    }
    else {
      DAT_0893 = DAT_0893 | 0xc;
      DAT_0be5 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 0x10;
    }
    DAT_0be4 = 0;
  }
  if (((DAT_0893 & 8) != 0) && (DAT_0be5 = (DAT_0be5 + 1) - (0xfe < DAT_0be5), DAT_4f10 < DAT_0be5))
  {
    DAT_0893 = DAT_0893 & 0xf3;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xef;
  }
  return;
}


/* Entry bbfd */

void FUN_bbfd(void)

{
  byte bVar1;
  
  if ((~DAT_0888 & 2) == 0) {
    DAT_0893 = DAT_0893 & 0xab;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfe;
  }
  else {
    DAT_0893 = DAT_0893 | 4;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 | 1;
  }
  return;
}


/* Entry bc1b */

void FUN_bc1b(void)

{
  if (((~DAT_0891 & 2) == 0) && (DAT_0bd2 == '\0')) {
    DAT_0893 = DAT_0893 & 0xaf;
  }
  return;
}


/* Entry bc2e */

void FUN_bc2e(void)

{
  byte bVar1;
  ushort uVar2;
  
  if ((DAT_0880 & 1) != 0) {
    DAT_0b5c = (DAT_0b5c + 1) - (0xfe < DAT_0b5c);
  }
  if (((DAT_0880 & 1) == 0) || ((~DAT_0883 & 4) != 0)) {
    DAT_0baa = 0;
  }
  else {
    DAT_0baa = (DAT_0baa + 1) - (0xfe < DAT_0baa);
  }
  DAT_0883 = DAT_0883 & 0xfb;
  if ((~DAT_0881 & 0x10) == 0) {
    DAT_09b5 = (DAT_09b5 + 1) - (0xfe < DAT_09b5);
  }
  else {
    DAT_09b5 = '\0';
  }
  if ((DAT_08b5 & 0x40) == 0) {
    DAT_0b3e = '\0';
    DAT_0b4b = (DAT_0b4b + 1) - (0xfe < DAT_0b4b);
  }
  else {
    DAT_0b4b = '\0';
    DAT_0b3e = (DAT_0b3e + 1) - (0xfe < DAT_0b3e);
  }
  if ((DAT_0bfe & 0x80) == 0) {
LAB_bcca:
    DAT_0b3f = '\0';
    DAT_0b4c = '\0';
    DAT_08b5 = DAT_08b5 & 0xf9;
  }
  else if ((DAT_08b5 & 4) == 0) {
    if ((DAT_08b5 & 2) == 0) goto LAB_bcca;
    DAT_0b3f = '\0';
    DAT_0b4c = (DAT_0b4c + 1) - (0xfe < DAT_0b4c);
  }
  else {
    DAT_0b4c = '\0';
    DAT_0b3f = (DAT_0b3f + 1) - (0xfe < DAT_0b3f);
  }
  if ((DAT_08b5 & 0x80) == 0) {
    DAT_0b40 = '\0';
    DAT_0b4d = (DAT_0b4d + 1) - (0xfe < DAT_0b4d);
  }
  else {
    DAT_0b4d = '\0';
    DAT_0b40 = (DAT_0b40 + 1) - (0xfe < DAT_0b40);
  }
  if ((DAT_08b5 & 0x20) == 0) {
    DAT_0b42 = '\0';
    DAT_0b4f = (DAT_0b4f + 1) - (0xfe < DAT_0b4f);
  }
  else {
    DAT_0b4f = '\0';
    DAT_0b42 = (DAT_0b42 + 1) - (0xfe < DAT_0b42);
  }
  if ((DAT_08b5 & 0x10) == 0) {
    DAT_0b41 = '\0';
    DAT_0b4e = (DAT_0b4e + 1) - (0xfe < DAT_0b4e);
  }
  else {
    DAT_0b4e = '\0';
    DAT_0b41 = (DAT_0b41 + 1) - (0xfe < DAT_0b41);
  }
  if ((DAT_08b6 & 4) == 0) {
    DAT_0bc6 = '\0';
    DAT_0bc7 = (DAT_0bc7 + 1) - (0xfe < DAT_0bc7);
  }
  else {
    DAT_0bc7 = '\0';
    DAT_0bc6 = (DAT_0bc6 + 1) - (0xfe < DAT_0bc6);
  }
  if ((((~DAT_08b6 & 2) == 0) &&
      (((DAT_0d87 != '\t' || ((DAT_0896._0_1_ & 0x10) != 0)) && ((~DAT_0881 & 0x10) == 0)))) &&
     (DAT_0bca != '\0')) {
    DAT_0bcd = (DAT_0bcd + 1) - (0xfe < DAT_0bcd);
  }
  else {
    DAT_0bcd = '\0';
  }
  if ((DAT_08b7 & 0x80) == 0) {
    DAT_0b48 = 0;
    DAT_0b52 = (DAT_0b52 + 1) - (0xfe < DAT_0b52);
  }
  else {
    DAT_0b52 = '\0';
  }
  if ((DAT_08b7 & 0x40) == 0) {
    DAT_0b49 = '\0';
    DAT_0b53 = (DAT_0b53 + 1) - (0xfe < DAT_0b53);
  }
  else {
    DAT_0b53 = '\0';
    DAT_0b49 = (DAT_0b49 + 1) - (0xfe < DAT_0b49);
  }
  if ((DAT_08b7 & 0x20) == 0) {
    DAT_0bcf = '\0';
    DAT_0bd0 = (DAT_0bd0 + 1) - (0xfe < DAT_0bd0);
  }
  else {
    DAT_0bd0 = '\0';
    DAT_0bcf = (DAT_0bcf + 1) - (0xfe < DAT_0bcf);
  }
  bVar1 = DAT_0bd2;
  if (((DAT_0d60 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    if (DAT_4e91 == -0x80) {
LAB_be39:
      if ((DAT_08b1 & 0x10) != 0) {
        DAT_08b1 = DAT_08b1 & 0xef;
        bVar1 = DAT_0bd2 | 0x20;
      }
    }
    else if ((DAT_08dd < DAT_4e96) && (DAT_4e97 < DAT_08dd)) {
      if ((~DAT_08b6 & 8) == 0) {
        DAT_0b0c = (DAT_0b0c + 1) - (0xfe < DAT_0b0c);
        if (DAT_0d8a <= DAT_0b0c) goto LAB_be39;
      }
      else {
        DAT_08b6 = DAT_08b6 & 0xf7;
        DAT_0b0c = 0;
      }
    }
    else if ((DAT_08b6 & 8) == 0) {
      DAT_08b6 = DAT_08b6 | 8;
      DAT_0b0c = 0;
    }
    else {
      DAT_0b0c = (DAT_0b0c + 1) - (0xfe < DAT_0b0c);
      if ((DAT_0d8a <= DAT_0b0c) && ((~DAT_08b1 & 0x10) == 0)) {
        DAT_08b1 = DAT_08b1 | 0x10;
        bVar1 = DAT_0bd2 | 0x20;
        if ((~DAT_08ba & 0x10) == 0) {
          DAT_08ba = DAT_08ba | 0x10;
          bVar1 = DAT_0bd2 | 0x22;
        }
      }
    }
  }
  DAT_0bd2 = bVar1;
  if ((((DAT_0d52 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) &&
     (DAT_4e3c <= DAT_0baa)) {
    if ((~DAT_08af & 0x40) == 0) {
      DAT_08af = DAT_08af | 0x40;
      DAT_0bd2 = DAT_0bd2 | 0x80;
    }
    if ((~DAT_08b8 & 0x40) == 0) {
      DAT_08b8 = DAT_08b8 | 0x40;
      DAT_0bd2 = DAT_0bd2 | 8;
    }
  }
  if (((DAT_0d56 == -0x80) || ((~DAT_08af & 8) != 0)) ||
     (((~DAT_08a0 & 4) != 0 || ((~DAT_08b2 & 0x80) != 0)))) goto LAB_bfac;
  if (DAT_0b9c <= DAT_0900) {
    DAT_0b9c = DAT_0900;
    DAT_089e = DAT_089e | 0x80;
  }
  uVar2 = DAT_0b9c - DAT_4e44;
  if (DAT_0b9c < DAT_4e44) {
    uVar2 = 0;
  }
  if (DAT_0900 < uVar2) {
    DAT_0b9c = DAT_0900 + DAT_4e44;
    DAT_089e = DAT_089e & 0x7f;
  }
  if ((~DAT_089e & 0x80) == 0) {
    if ((DAT_089e & 0x40) != 0) {
LAB_bf14:
      if (DAT_0b9e < DAT_4e46) {
        DAT_0b9e = (DAT_0b9e + 1) - (0xfe < DAT_0b9e);
      }
    }
  }
  else if ((~DAT_089e & 0x40) == 0) goto LAB_bf14;
  uVar2 = DAT_0bb0 - DAT_0bb2;
  if (DAT_0bb0 < DAT_0bb2) {
    uVar2 = CONCAT11((~(byte)(uVar2 >> 8) + 1) - ((char)-(char)uVar2 != '\0'),-(char)uVar2);
  }
  if (DAT_4e48 <= uVar2) {
    if ((DAT_0b9e < DAT_4e46) && ((DAT_08af & 4) != 0)) {
      DAT_08af = DAT_08af & 0xfb;
      DAT_0bd2 = DAT_0bd2 | 0x80;
      if (((~DAT_08af & 8) == 0) && ((~DAT_08b1 & 8) == 0)) {
        DAT_0889 = DAT_0889 | 2;
        DAT_0b94 = 0;
        DAT_0b92 = DAT_0a83;
        DAT_0b95 = DAT_0a83;
      }
    }
    DAT_0b9e = 0;
  }
  if (DAT_0b9e == DAT_4e46) {
    bVar1 = DAT_0bd2;
    if ((~DAT_08af & 4) == 0) {
      DAT_08af = DAT_08af | 4;
      bVar1 = DAT_0bd2 | 0x80;
      if ((~DAT_08b8 & 4) == 0) {
        DAT_08b8 = DAT_08b8 | 4;
        bVar1 = DAT_0bd2 | 0x88;
      }
    }
    DAT_0bd2 = bVar1;
    DAT_08b6 = DAT_08b6 | 1;
    DAT_0889 = DAT_0889 & 0xfd;
    DAT_0b92 = 0;
  }
  if ((~DAT_089e & 0x80) == 0) {
    DAT_089e = DAT_089e & 0xbf;
  }
  else {
    DAT_089e = DAT_089e | 0x40;
  }
  DAT_0bb2 = DAT_0bb0;
LAB_bfac:
  if (((DAT_08f8._0_1_ == '\n') && ((~DAT_0880 & 1) == 0)) && (DAT_0bce < 0x10)) {
    DAT_0b7e = (DAT_0b7e + 1) - (0xfe < DAT_0b7e);
    if (0x1d < DAT_0b7e) {
      DAT_08bf = DAT_08bf | 1;
      FUN_5843();
      return;
    }
  }
  else {
    DAT_0b7e = 0;
  }
  if ((((~DAT_08a3 & 0x80) == 0) && ((DAT_08a2 & 0x80) != 0)) &&
     (DAT_0b34 = (DAT_0b34 + 1) - (0xfe < DAT_0b34), DAT_4e32 <= DAT_0b34)) {
    DAT_08a3 = DAT_08a3 | 0x80;
  }
  if (((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) &&
     (DAT_0d0f = (DAT_0d0f + 1) - (0xfe < DAT_0d0f), DAT_4e83 <= DAT_0d0f)) {
    DAT_0d08 = DAT_0d08 | 1;
  }
  if ((((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) && ((DAT_0d07 & 8) != 0)) &&
     (((~DAT_0d07 & 4) == 0 && (DAT_0d0d = (DAT_0d0d + 1) - (0xfe < DAT_0d0d), DAT_4e81 <= DAT_0d0d)
      ))) {
    DAT_0d07 = DAT_0d07 | 4;
    DAT_0d0e = (DAT_0d0e + 1) - (0xfe < DAT_0d0e);
    if (DAT_4e82 <= DAT_0d0e) {
      DAT_0d08 = DAT_0d08 | 1;
    }
  }
  DAT_0882 = DAT_0882 & 0xfd;
  DAT_08bf = DAT_08bf & 0xfe;
  return;
}


/* Entry c063 */

void FUN_c063(void)

{
  if ((DAT_08b6 & 0x40) == 0) {
    DAT_0b43 = '\0';
  }
  else {
    DAT_0b43 = (DAT_0b43 + 1) - (0xfe < DAT_0b43);
  }
  if ((DAT_08b6 & 0x20) == 0) {
    DAT_0b44 = '\0';
  }
  else {
    DAT_0b44 = (DAT_0b44 + 1) - (0xfe < DAT_0b44);
  }
  if ((DAT_08b6 & 0x10) == 0) {
    DAT_0b45 = '\0';
  }
  else {
    DAT_0b45 = (DAT_0b45 + 1) - (0xfe < DAT_0b45);
  }
  if ((DAT_08b7 & 0x80) == 0) {
    DAT_0b48 = '\0';
  }
  else {
    DAT_0b52 = 0;
    DAT_0b48 = (DAT_0b48 + 1) - (0xfe < DAT_0b48);
  }
  DAT_0cab = DAT_0d7e + DAT_0d9d;
  if (DAT_0cab == 0x17) {
    DAT_0cab = 0x16;
  }
  else if (0x16 < DAT_0cab) {
    DAT_0cab = DAT_0cab - 0x18;
  }
  if ((DAT_08b7 & 0x10) == 0) {
    DAT_0b4a = '\0';
  }
  else {
    DAT_0b54 = 0;
    DAT_0b4a = (DAT_0b4a + 1) - (0xfe < DAT_0b4a);
  }
  if ((DAT_08b7 & 8) == 0) {
    DAT_0b54 = '\0';
  }
  else {
    DAT_0b4a = '\0';
    DAT_0b54 = (DAT_0b54 + 1) - (0xfe < DAT_0b54);
  }
  if ((~DAT_0881 & 0x10) == 0) {
    DAT_0caf = (DAT_0caf + 1) - (0xfe < DAT_0caf);
  }
  else {
    DAT_0caf = '\0';
  }
  if ((DAT_0adb & 0x80) == 0) {
    DAT_0adc = '\0';
  }
  else {
    DAT_0adc = (DAT_0adc + 1) - (0xfe < DAT_0adc);
  }
  if ((DAT_0adb & 0x40) == 0) {
    DAT_0add = '\0';
  }
  else {
    DAT_0add = (DAT_0add + 1) - (0xfe < DAT_0add);
  }
  if ((DAT_0adb & 0x20) == 0) {
    DAT_0ade = '\0';
  }
  else {
    DAT_0ade = (DAT_0ade + 1) - (0xfe < DAT_0ade);
  }
  if ((DAT_0adb & 0x10) == 0) {
    DAT_0adf = '\0';
  }
  else {
    DAT_0adf = (DAT_0adf + 1) - (0xfe < DAT_0adf);
  }
  if ((DAT_0adb & 8) == 0) {
    DAT_0ae0 = '\0';
  }
  else {
    DAT_0ae0 = (DAT_0ae0 + 1) - (0xfe < DAT_0ae0);
  }
  DAT_0887 = DAT_0887 & 0x7f;
  DAT_08bf = DAT_08bf & 0xdf;
  return;
}


/* Entry c199 */

void FUN_c199(void)

{
  if (((DAT_08b6 & 2) == 0) ||
     (((DAT_0d87 == '\t' && ((DAT_0896._0_1_ & 0x10) == 0)) || (DAT_0bca != '\0')))) {
    DAT_0bcc = '\0';
  }
  else {
    DAT_0bcc = (DAT_0bcc + 1) - (0xfe < DAT_0bcc);
  }
  DAT_0887 = DAT_0887 & 0xbf;
  DAT_08bf = DAT_08bf & 0xef;
  return;
}


/* Entry c1cd */

undefined2 lookup_u8_uniform_axis(undefined2 param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  
  bVar3 = (byte)((ushort)param_1 >> 8);
  bVar4 = bVar3 - *param_2;
  if (bVar3 < *param_2) {
    bVar4 = 0;
  }
  if (param_2[1] < bVar4) {
    bVar4 = param_2[1];
  }
  cVar2 = (char)((ushort)bVar4 * (ushort)param_2[2]);
  param_2 = param_2 + ((ushort)bVar4 * (ushort)param_2[2] >> 8);
  sVar6 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = param_2[4] - param_2[3];
    uVar5 = CONCAT11(cVar2,cVar1);
    if (param_2[4] < param_2[3]) {
      uVar5 = CONCAT11(-cVar2,-cVar1);
      param_2 = param_2 + 1;
    }
    sVar6 = (uVar5 >> 8) * (uVar5 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar6 >> 8) + param_2[3],(char)sVar6);
}


/* Entry c1db */

undefined2 interp_u8_q8_index(ushort param_1,short param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  
  cVar2 = (char)param_1;
  param_2 = (param_1 >> 8) + param_2;
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = *(byte *)(param_2 + 4) - *(byte *)(param_2 + 3);
    uVar3 = CONCAT11(cVar2,cVar1);
    if (*(byte *)(param_2 + 4) < *(byte *)(param_2 + 3)) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      param_2 = param_2 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + *(char *)(param_2 + 3),(char)sVar4);
}


/* Entry c1e1 */

undefined2 FUN_c1e1(undefined2 param_1,short param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  
  cVar2 = (char)((ushort)param_1 >> 8);
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = *(byte *)(param_2 + 4) - *(byte *)(param_2 + 3);
    uVar3 = CONCAT11(cVar2,cVar1);
    if (*(byte *)(param_2 + 4) < *(byte *)(param_2 + 3)) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      param_2 = param_2 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + *(char *)(param_2 + 3),(char)sVar4);
}


/* Entry c1f2 */

undefined2 lookup_u8_uniform_u16_axis(short param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  
  uVar3 = multiply_u16_shift8_saturate();
  cVar2 = (char)uVar3;
  param_1 = (uVar3 >> 8) + param_1;
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = *(byte *)(param_1 + 7) - *(byte *)(param_1 + 6);
    uVar3 = CONCAT11(cVar2,cVar1);
    if (*(byte *)(param_1 + 7) < *(byte *)(param_1 + 6)) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      param_1 = param_1 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + *(char *)(param_1 + 6),(char)sVar4);
}


/* Entry c21c */

undefined2 scale_u16_by_u8(ushort param_1,byte *param_2)

{
  return (short)((uint)*param_2 * (uint)param_1 >> 8);
}


/* Entry c227 */

/* WARNING: Removing unreachable block (RAM,0xc23d) */

undefined2 scale_u16_by_u8_rounded(short param_1,byte *param_2)

{
  return CONCAT11(0xff7f < (ushort)*param_2 * param_1,(char)((ushort)*param_2 * param_1 + 0x80 >> 8)
                 );
}


/* Entry c243 */

undefined2 multiply_u16_shift8_saturate(ushort param_1,ushort param_2)

{
  undefined2 uVar1;
  
  if ((ushort)((uint)param_1 * (uint)param_2 >> 0x10) < 0x100) {
    uVar1 = (undefined2)((uint)param_1 * (uint)param_2 >> 8);
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}


/* Entry c268 */

undefined2 candidate_unreferenced_c268(undefined2 param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  
  bVar3 = (byte)((ushort)param_1 >> 8);
  bVar4 = bVar3 - *param_2;
  if (bVar3 < *param_2) {
    bVar4 = 0;
  }
  if (param_2[1] < bVar4) {
    bVar4 = param_2[1];
  }
  cVar2 = (char)((ushort)bVar4 * (ushort)param_2[2]);
  param_2 = param_2 + ((ushort)bVar4 * (ushort)param_2[2] >> 8);
  sVar6 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = param_2[4] - param_2[3];
    uVar5 = CONCAT11(cVar2,cVar1);
    if (param_2[4] < param_2[3]) {
      uVar5 = CONCAT11(-cVar2,-cVar1);
      param_2 = param_2 + 1;
    }
    sVar6 = (uVar5 >> 8) * (uVar5 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar6 >> 8) + param_2[3],(char)sVar6);
}


/* Entry c276 */

undefined2 FUN_c276(ushort param_1,short param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  
  cVar2 = (char)param_1;
  param_2 = (param_1 >> 8) + param_2;
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = *(byte *)(param_2 + 4) - *(byte *)(param_2 + 3);
    uVar3 = CONCAT11(cVar2,cVar1);
    if (*(byte *)(param_2 + 4) < *(byte *)(param_2 + 3)) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      param_2 = param_2 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + *(char *)(param_2 + 3),(char)sVar4);
}


/* Entry c28d */

short lookup_u8_grid_special(ushort param_1,short param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  
  DAT_0de3 = (byte)param_1;
  bVar1 = (byte)(param_1 >> 8);
  sVar4 = param_2;
  for (bVar2 = bVar1; bVar2 <= DAT_0de0._0_1_; bVar2 = bVar2 + bVar1) {
    sVar4 = (ushort)(byte)(bVar1 * DAT_0de3) + sVar4;
  }
  DAT_0de2 = bVar2 - bVar1;
  bVar2 = DAT_0de0._0_1_ - DAT_0de2;
  sVar3 = interp_u8_q8_index(param_2);
  sVar3 = sVar3 + 0x80;
  if ((char)DAT_0de0 != '\0') {
    DAT_0de2 = (char)((ushort)sVar3 >> 8);
    sVar4 = interp_u8_q8_index(DAT_0dde,(ushort)DAT_0de3 +
                                        ((ushort)bVar2 * (param_1 & 0xff) & 0xff) + sVar4);
    DAT_0de3 = (byte)((ushort)(sVar4 + 0x80) >> 8);
    sVar3 = FUN_c1e1(0xddf);
    sVar3 = sVar3 + 0x80;
  }
  return sVar3;
}


/* Entry c2e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short candidate_unreferenced_c2e8(byte param_1,short param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = (ushort)DAT_0dec + (ushort)DAT_0dea * (ushort)param_1 + param_2;
  _DAT_0dee = param_2;
  sVar1 = interp_u8_q8_fraction(sVar3);
  sVar2 = sVar1;
  if (DAT_0deb != '\0') {
    DAT_0dee = (char)((ushort)(sVar1 + 0x80) >> 8);
    sVar2 = interp_u8_q8_fraction((ushort)param_1 + sVar3);
    _DAT_0dee = CONCAT11(DAT_0dee,(char)((ushort)(sVar2 + 0x80) >> 8));
    sVar1 = interp_u8_q8_fraction(&DAT_0deb);
    sVar2 = DAT_0df4;
  }
  DAT_0df4 = sVar2;
  return sVar1;
}


/* Entry c32d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short bilinear_u8_grid(byte param_1,short param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = (ushort)DAT_0de0._0_1_ + (ushort)DAT_0dde._0_1_ * (ushort)param_1 + param_2;
  _DAT_0de2 = param_2;
  sVar1 = interp_u8_q8_fraction(sVar3);
  sVar2 = sVar1;
  if ((char)DAT_0dde != '\0') {
    DAT_0de2 = (char)((ushort)(sVar1 + 0x80) >> 8);
    sVar2 = interp_u8_q8_fraction((ushort)param_1 + sVar3);
    _DAT_0de2 = CONCAT11(DAT_0de2,(char)((ushort)(sVar2 + 0x80) >> 8));
    sVar1 = interp_u8_q8_fraction(0xddf);
    sVar2 = RAM0x0de8;
  }
  RAM0x0de8 = sVar2;
  return sVar1;
}


/* Entry c372 */

undefined2 interp_u8_q8_fraction(undefined2 param_1,short param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  
  bVar2 = (byte)((ushort)param_1 >> 8);
  sVar3 = CONCAT11(bVar2,bVar2);
  if (bVar2 != 0) {
    bVar1 = *(byte *)(param_2 + 4) - *(byte *)(param_2 + 3);
    if (*(byte *)(param_2 + 4) < *(byte *)(param_2 + 3)) {
      sVar3 = (ushort)(byte)-bVar2 * (ushort)(byte)-bVar1;
      return CONCAT11((char)((ushort)sVar3 >> 8) + *(char *)(param_2 + 4),(char)sVar3);
    }
    sVar3 = (ushort)bVar2 * (ushort)bVar1;
  }
  return CONCAT11((char)((ushort)sVar3 >> 8) + *(char *)(param_2 + 3),(char)sVar3);
}


/* Entry c386 */

byte * candidate_unreferenced_c386(undefined2 param_1,byte *param_2)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  
  bVar3 = (byte)((ushort)param_1 >> 8);
  bVar4 = bVar3 - *param_2;
  if (bVar3 < *param_2) {
    bVar4 = 0;
  }
  if (param_2[1] < bVar4) {
    bVar4 = param_2[1];
  }
  bVar3 = (byte)((ushort)bVar4 * (ushort)param_2[2] >> 8);
  bVar4 = (byte)((ushort)bVar4 * (ushort)param_2[2]);
  sVar2 = (ushort)bVar3 + (ushort)bVar3;
  sVar5 = CONCAT11(bVar4,bVar4);
  if (bVar4 != 0) {
    uVar1 = (short)(param_2 + sVar2 + 5) - (short)(param_2 + sVar2 + 3);
    if (param_2 + sVar2 + 5 < param_2 + sVar2 + 3) {
      return param_2 + (short)((uint)(byte)-bVar4 * 0x100 *
                               (uint)CONCAT11((~(byte)(uVar1 >> 8) + 1) -
                                              ((char)-(char)uVar1 != '\0'),-(char)uVar1) >> 0x10) +
                       sVar2 + 5;
    }
    sVar5 = (short)((uint)bVar4 * 0x100 * (uint)uVar1 >> 0x10);
  }
  return param_2 + sVar5 + sVar2 + 3;
}


/* Entry c3c0 */

short candidate_unreferenced_c3c0(ushort param_1,ushort param_2)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  
  uVar3 = param_1 - param_2;
  if (param_1 < param_2) {
    uVar3 = 0;
  }
  if (param_2 + 2 < uVar3) {
    uVar3 = param_2 + 2;
  }
  uVar2 = (uint)(param_2 + 4) * (uint)uVar3;
  DAT_0e10 = (short)(uVar2 >> 0x10) * 2;
  sVar1 = param_2 + DAT_0e10;
  sVar4 = 0;
  if ((short)uVar2 != 0) {
    uVar3 = (sVar1 + 8U) - (sVar1 + 6U);
    if (sVar1 + 8U < sVar1 + 6U) {
      return (short)((uint)CONCAT11((~(byte)(uVar3 >> 8) + 1) - ((char)-(char)uVar3 != '\0'),
                                    -(char)uVar3) *
                     (uint)CONCAT11((~(byte)(uVar2 >> 8) + 1) - ((char)-(char)uVar2 != '\0'),
                                    -(char)uVar2) >> 0x10) + sVar1 + 8;
    }
    sVar4 = (short)((uVar2 & 0xffff) * (uint)uVar3 >> 0x10);
  }
  return sVar4 + sVar1 + 6;
}


/* Entry c3e2 */

short interp_u16_q16_fraction(ushort param_1,short param_2)

{
  ushort uVar1;
  short sVar2;
  
  sVar2 = 0;
  if (param_1 != 0) {
    uVar1 = (param_2 + 8U) - (param_2 + 6U);
    if (param_2 + 8U < param_2 + 6U) {
      return (short)((uint)CONCAT11((~(byte)(uVar1 >> 8) + 1) - ((char)-(char)uVar1 != '\0'),
                                    -(char)uVar1) *
                     (uint)CONCAT11((~(byte)(param_1 >> 8) + 1) - ((char)-(char)param_1 != '\0'),
                                    -(char)param_1) >> 0x10) + param_2 + 8;
    }
    sVar2 = (short)((uint)param_1 * (uint)uVar1 >> 0x10);
  }
  return sVar2 + param_2 + 6;
}


/* Entry c407 */

ushort FUN_c407(ushort param_1,ushort param_2)

{
  DAT_0dde = param_2;
  if (param_1 < param_2) {
    return 0;
  }
  DAT_0de0 = param_1 / param_2;
  return param_1 / param_2;
}


/* Entry c422 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_unreferenced_c422(ushort param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar6;
  undefined2 uVar5;
  short sVar7;
  
  uVar4 = DAT_0e16;
  if (param_1 + 0x10 <= DAT_0e16) {
    uVar4 = param_1 + 0x10;
  }
  if (param_1 + 0xc < uVar4) {
    uVar3 = uVar4 + param_1 + 0xc >> 1;
    uVar3 = CONCAT11((byte)(uVar3 >> 8) | CARRY2(uVar4,param_1 + 0xc) << 7,(char)uVar3);
    uVar4 = param_1 + 0xe + param_1 + 0xc >> 1;
    DAT_0e0c = CONCAT11((byte)(uVar4 >> 8) | CARRY2(param_1 + 0xe,param_1 + 0xc) << 7,(char)uVar4);
    uVar4 = uVar3 - DAT_0e0c;
    if (DAT_0e0c <= uVar3) {
      uVar4 = uVar4 >> 1;
    }
    uVar4 = uVar4 + DAT_0e0c;
  }
  uVar3 = uVar4 - (param_1 + 10);
  if (uVar4 < param_1 + 10) {
    uVar3 = 0;
  }
  iVar2 = (uint)(param_1 + 0x12) * (uint)uVar3;
  DAT_0e08 = (undefined2)iVar2;
  bVar6 = (byte)((uint)iVar2 >> 0x10);
  _DAT_0e06 = CONCAT11(bVar6,DAT_0e06_1);
  uVar4 = DAT_0e18;
  if (param_1 + 6 <= DAT_0e18) {
    uVar4 = param_1 + 6;
  }
  if (param_1 + 2 < uVar4) {
    uVar3 = uVar4 + param_1 + 2 >> 1;
    uVar3 = CONCAT11((byte)(uVar3 >> 8) | CARRY2(uVar4,param_1 + 2) << 7,(char)uVar3);
    uVar4 = param_1 + 4 + param_1 + 2 >> 1;
    DAT_0e0c = CONCAT11((byte)(uVar4 >> 8) | CARRY2(param_1 + 4,param_1 + 2) << 7,(char)uVar4);
    uVar4 = uVar3 - DAT_0e0c;
    if (DAT_0e0c <= uVar3) {
      uVar4 = uVar4 >> 1;
    }
    uVar4 = uVar4 + DAT_0e0c;
  }
  uVar3 = uVar4 - param_1;
  if (uVar4 < param_1) {
    uVar3 = 0;
  }
  iVar2 = (uint)(param_1 + 8) * (uint)uVar3;
  DAT_0e0a = (short)iVar2;
  bVar1 = *(byte *)(param_1 + 0x14);
  DAT_0e0e = (ushort)bVar1 * ((ushort)((uint)iVar2 >> 0x10) & 0xff);
  sVar7 = (ushort)bVar6 + (ushort)bVar6 + param_1 + DAT_0e0e * 2 + 0xf;
  uVar5 = interp_u16_q16_fraction(DAT_0e0a,sVar7);
  if (DAT_0e0a == 0) {
    return;
  }
  _DAT_0e06 = uVar5;
  DAT_0e08 = interp_u16_q16_fraction(DAT_0e08,(ushort)bVar1 + (ushort)bVar1 + sVar7);
  interp_u16_q16_fraction(DAT_0e0a,0xe00);
  return;
}


/* Entry c499 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bilinear_u16_grid(ushort param_1,short param_2)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  
  bVar1 = (byte)(param_1 >> 8);
  DAT_0e0e = (ushort)bVar1 * (param_1 & 0xff);
  sVar3 = (ushort)DAT_0e06 + (ushort)DAT_0e06 + param_2 + DAT_0e0e * 2 + 0xf;
  uVar2 = interp_u16_q16_fraction(sVar3);
  if (DAT_0e0a == 0) {
    return;
  }
  _DAT_0e06 = uVar2;
  DAT_0e08 = interp_u16_q16_fraction(DAT_0e08,(ushort)bVar1 + (ushort)bVar1 + sVar3);
  interp_u16_q16_fraction(DAT_0e0a,0xe00);
  return;
}


/* Entry c4dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short bilinear_modulo24_grid(byte param_1,short param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar3 = (ushort)DAT_0de0._0_1_ + (ushort)DAT_0dde._0_1_ * (ushort)param_1 + param_2;
  _DAT_0de2 = param_2;
  sVar1 = interp_modulo24(sVar3);
  sVar2 = sVar1;
  if ((char)DAT_0dde != '\0') {
    DAT_0de2 = (char)((ushort)(sVar1 + 0x80) >> 8);
    sVar2 = interp_modulo24((ushort)param_1 + sVar3);
    _DAT_0de2 = CONCAT11(DAT_0de2,(char)((ushort)(sVar2 + 0x80) >> 8));
    sVar1 = interp_modulo24(0xddf);
    sVar2 = RAM0x0de8;
  }
  RAM0x0de8 = sVar2;
  return sVar1;
}


/* Entry c521 */

void interp_modulo24(short param_1)

{
  DAT_0de4 = *(byte *)(param_1 + 3) - DAT_0d7e;
  if (*(byte *)(param_1 + 3) < DAT_0d7e) {
    DAT_0de4 = DAT_0de4 + '\x18';
  }
  DAT_0de5._0_1_ = *(byte *)(param_1 + 4) - DAT_0d7e;
  if (*(byte *)(param_1 + 4) < DAT_0d7e) {
    DAT_0de5._0_1_ = DAT_0de5._0_1_ + '\x18';
  }
  return;
}


/* Entry c55b */

void FUN_c55b(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  byte bVar5;
  short sVar6;
  
  if ((~DAT_0a16 & 0x80) != 0) {
    DAT_004e = 0x40;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x40) != 0) {
      sVar3 = DAT_0044;
      sVar6 = DAT_005c;
      if (199 < (ushort)(sVar3 - sVar6)) {
        bVar1 = DAT_0000;
        if ((bVar1 & 1) == 0) {
          DAT_0b56 = 0;
          DAT_0b55 = (DAT_0b55 + 1) - (0xfe < DAT_0b55);
        }
        else {
          DAT_0b55 = 0;
          DAT_0b56 = (DAT_0b56 + 1) - (0xfe < DAT_0b56);
        }
      }
    }
  }
  bVar1 = DAT_0a17;
  if (((~DAT_0a17 & 0x80) == 0) && ((DAT_088b & 0x80) != 0)) {
    if ((DAT_0a19 & 8) != 0) goto LAB_c70d;
    bVar1 = DAT_0a17 | 8;
    DAT_0a19 = DAT_0a19 | 8;
    DAT_0a20 = (DAT_0a20 + 1) - (0xfe < DAT_0a20);
    if (DAT_0a22 == 0) goto LAB_c5c8;
    bVar5 = DAT_00e1;
    if ((bVar5 & 0x40) == 0) {
      sVar6 = DAT_005c;
      sVar3 = DAT_0044;
      uVar2 = sVar6 - sVar3;
      if ((-1 < (short)uVar2) && (7 < uVar2)) {
        if ((short)(uVar2 - DAT_0a22) < 0) {
          sVar6 = DAT_005c;
          sVar3 = DAT_0044;
          if ((ushort)((sVar6 - sVar3) + DAT_4f18) < DAT_0a22) {
            bVar5 = DAT_004c;
            DAT_004c = bVar5 | 0x40;
            DAT_0a2a = DAT_0a22 + DAT_0af0;
            if ((~DAT_0cf2 & 1) == 0) {
              if (((DAT_0cf2 & 4) != 0) &&
                 (DAT_0cf4 = (DAT_0cf4 + 1) - (0xfe < DAT_0cf4), DAT_0da5 <= DAT_0cf4)) {
                DAT_0cf2 = DAT_0cf2 & 0xfb;
              }
            }
            else {
              DAT_0cf3 = (DAT_0cf3 + 1) - (0xfe < DAT_0cf3);
              if ((DAT_0da4 <= DAT_0cf3) && (DAT_0cf2 = DAT_0cf2 & 0xfe, DAT_0da5 != 0)) {
                DAT_0cf4 = 0;
                DAT_0cf2 = DAT_0cf2 | 4;
              }
              DAT_092a = DAT_0cf6;
            }
            DAT_0a18 = DAT_0a18 | 0x80;
            DAT_0a17 = bVar1;
            DAT_0b72 = DAT_092a;
            goto LAB_c70d;
          }
          if ((~DAT_0cf2 & 1) == 0) {
            DAT_0b72 = DAT_092a;
            if (((DAT_0cf2 & 4) != 0) &&
               (DAT_0cf4 = (DAT_0cf4 + 1) - (0xfe < DAT_0cf4), DAT_0da5 <= DAT_0cf4)) {
              DAT_0cf2 = DAT_0cf2 & 0xfb;
            }
          }
          else {
            DAT_0cf3 = (DAT_0cf3 + 1) - (0xfe < DAT_0cf3);
            if ((DAT_0da4 <= DAT_0cf3) && (DAT_0cf2 = DAT_0cf2 & 0xfe, DAT_0da5 != 0)) {
              DAT_0cf4 = 0;
              DAT_0cf2 = DAT_0cf2 | 4;
            }
            DAT_092a = DAT_0cf6;
            DAT_0b72 = DAT_092a;
          }
        }
        goto LAB_c5c8;
      }
    }
    DAT_005c = DAT_0af0 + DAT_0a22;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xef | 0x20;
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x40;
    DAT_0a18 = DAT_0a18 | 8;
    DAT_0a17 = DAT_0a17 | 8;
  }
  else {
LAB_c5c8:
    DAT_0a17 = bVar1;
    sVar3 = DAT_0044;
    DAT_005c = sVar3 + 2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xef | 0x20;
    DAT_004e = 0x40;
    uVar4 = DAT_0044;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    uVar4 = DAT_005c;
    sVar3 = DAT_005c;
    DAT_005c = DAT_0b72 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0x30;
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x40;
  }
  DAT_0a16 = DAT_0a16 | 0x80;
LAB_c70d:
  DAT_08c1 = DAT_08c1 & 0xef;
  return;
}


/* Entry c712 */

void FUN_c712(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  byte bVar5;
  short sVar6;
  
  if ((~DAT_0a16 & 0x20) != 0) {
    DAT_004e = 0x80;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x80) != 0) {
      sVar3 = DAT_0044;
      sVar6 = DAT_005e;
      if (199 < (ushort)(sVar3 - sVar6)) {
        bVar1 = DAT_0000;
        if ((bVar1 & 2) == 0) {
          DAT_0b58 = 0;
          DAT_0b57 = (DAT_0b57 + 1) - (0xfe < DAT_0b57);
        }
        else {
          DAT_0b57 = 0;
          DAT_0b58 = (DAT_0b58 + 1) - (0xfe < DAT_0b58);
        }
      }
    }
  }
  bVar1 = DAT_0a17;
  if (((~DAT_0a17 & 0x20) == 0) && ((DAT_088b & 0x80) != 0)) {
    if ((DAT_0a19 & 2) != 0) goto LAB_c8c4;
    bVar1 = DAT_0a17 | 2;
    DAT_0a19 = DAT_0a19 | 2;
    DAT_0a21 = (DAT_0a21 + 1) - (0xfe < DAT_0a21);
    if (DAT_0a24 == 0) goto LAB_c77f;
    bVar5 = DAT_00e1;
    if ((bVar5 & 0x80) == 0) {
      sVar6 = DAT_005e;
      sVar3 = DAT_0044;
      uVar2 = sVar6 - sVar3;
      if ((-1 < (short)uVar2) && (7 < uVar2)) {
        if ((short)(uVar2 - DAT_0a24) < 0) {
          sVar6 = DAT_005e;
          sVar3 = DAT_0044;
          DAT_0b74 = DAT_0cfc;
          if ((ushort)((sVar6 - sVar3) + DAT_4f18) < DAT_0a24) {
            bVar5 = DAT_004c;
            DAT_004c = bVar5 | 0x80;
            DAT_0a2c = DAT_0a24 + DAT_0af0;
            if ((~DAT_0cf2 & 1) == 0) {
              DAT_0b74 = DAT_092c;
              if (((DAT_0cf2 & 4) != 0) &&
                 (DAT_0cf4 = (DAT_0cf4 + 1) - (0xfe < DAT_0cf4), DAT_0da5 <= DAT_0cf4)) {
                DAT_0cf2 = DAT_0cf2 & 0xfb;
              }
            }
            else {
              DAT_0cf3 = (DAT_0cf3 + 1) - (0xfe < DAT_0cf3);
              if ((DAT_0da4 <= DAT_0cf3) && (DAT_0cf2 = DAT_0cf2 & 0xfe, DAT_0da5 != 0)) {
                DAT_0cf4 = 0;
                DAT_0cf2 = DAT_0cf2 | 4;
              }
              DAT_092a = DAT_0cfc;
            }
            DAT_0a18 = DAT_0a18 | 0x20;
            DAT_0a17 = bVar1;
            goto LAB_c8c4;
          }
          if ((~DAT_0cf2 & 1) == 0) {
            DAT_0b74 = DAT_092c;
            if (((DAT_0cf2 & 4) != 0) &&
               (DAT_0cf4 = (DAT_0cf4 + 1) - (0xfe < DAT_0cf4), DAT_0da5 <= DAT_0cf4)) {
              DAT_0cf2 = DAT_0cf2 & 0xfb;
            }
          }
          else {
            DAT_0cf3 = (DAT_0cf3 + 1) - (0xfe < DAT_0cf3);
            if ((DAT_0da4 <= DAT_0cf3) && (DAT_0cf2 = DAT_0cf2 & 0xfe, DAT_0da5 != 0)) {
              DAT_0cf4 = 0;
              DAT_0cf2 = DAT_0cf2 | 4;
            }
            DAT_092a = DAT_0cfc;
          }
        }
        goto LAB_c77f;
      }
    }
    DAT_005e = DAT_0af0 + DAT_0a24;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xbf | 0x80;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
    DAT_0a18 = DAT_0a18 | 2;
    DAT_0a17 = DAT_0a17 | 2;
  }
  else {
LAB_c77f:
    DAT_0a17 = bVar1;
    sVar3 = DAT_0044;
    DAT_005e = sVar3 + 2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0x7f;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xbf | 0x80;
    DAT_004e = 0x80;
    uVar4 = DAT_0044;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    uVar4 = DAT_005e;
    sVar3 = DAT_005e;
    DAT_005e = DAT_0b74 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0xc0;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
  }
  DAT_0a16 = DAT_0a16 | 0x20;
LAB_c8c4:
  DAT_08c1 = DAT_08c1 & 0xbf;
  return;
}


/* Entry c8c9 */

void FUN_c8c9(void)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  
  DAT_004e = 0x40;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x40) == 0) {
    sVar3 = DAT_005c;
    sVar1 = DAT_0044;
    if ((sVar3 - sVar1 < 0) || (DAT_0e02 = (sVar3 - sVar1) - DAT_4f18, DAT_0e02 < 0)) {
      DAT_0e02 = 0;
    }
    DAT_0b72 = (DAT_0e02 + DAT_0926) - DAT_0b76;
  }
  else if ((DAT_0a18 & 8) == 0) {
    DAT_0b72 = DAT_0926;
  }
  else {
    sVar3 = DAT_005c;
    sVar1 = DAT_0044;
    if (((-1 < sVar3 - sVar1) && (sVar1 = (sVar3 - sVar1) - DAT_0926, -1 < sVar1)) &&
       (-1 < sVar1 - DAT_4f18)) {
      DAT_0a2a = DAT_005c;
      DAT_0b72 = DAT_0926;
      FUN_c55b();
      bVar2 = DAT_004c;
      DAT_004c = bVar2 | 0x40;
      DAT_0b76 = 0;
      DAT_0a18 = DAT_0a18 | 0x80;
      return;
    }
    DAT_0b72 = DAT_0926 + DAT_0b72;
  }
  FUN_c55b();
  DAT_0b76 = 0;
  return;
}


/* Entry c939 */

void FUN_c939(void)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  
  DAT_004e = 0x80;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x80) == 0) {
    sVar3 = DAT_005e;
    sVar1 = DAT_0044;
    if ((sVar3 - sVar1 < 0) || (DAT_0e02 = (sVar3 - sVar1) - DAT_4f18, DAT_0e02 < 0)) {
      DAT_0e02 = 0;
    }
    DAT_0b74 = (DAT_0e02 + DAT_0928) - DAT_0b78;
  }
  else if ((DAT_0a18 & 2) == 0) {
    DAT_0b74 = DAT_0928;
  }
  else {
    sVar3 = DAT_005e;
    sVar1 = DAT_0044;
    if (((-1 < sVar3 - sVar1) && (sVar1 = (sVar3 - sVar1) - DAT_0928, -1 < sVar1)) &&
       (-1 < sVar1 - DAT_4f18)) {
      DAT_0a2c = DAT_005e;
      DAT_0b74 = DAT_0928;
      FUN_c712();
      bVar2 = DAT_004c;
      DAT_004c = bVar2 | 0x80;
      DAT_0b78 = 0;
      DAT_0a18 = DAT_0a18 | 0x20;
      return;
    }
    DAT_0b74 = DAT_0928 + DAT_0b74;
  }
  FUN_c712();
  DAT_0b78 = 0;
  return;
}


/* Entry c9a9 */

void axis_index_u8_ascending(undefined2 param_1)

{
  byte *pbVar1;
  ushort uVar2;
  byte bVar3;
  
  DAT_0b9f = (char)((ushort)param_1 >> 8) - 1;
  DAT_0ba0 = 0;
  if (*DAT_0ba4 < DAT_0ba2._0_1_) {
    bVar3 = DAT_0ba0;
    if (DAT_0ba2._0_1_ < DAT_0ba4[DAT_0b9f]) {
      while (DAT_0ba0 = bVar3, (byte)(DAT_0b9f - DAT_0ba0) != 1) {
        DAT_0ba1 = ((byte)(DAT_0b9f - DAT_0ba0) >> 1) + DAT_0ba0;
        bVar3 = DAT_0ba1;
        if (DAT_0ba2._0_1_ < DAT_0ba4[DAT_0ba1]) {
          DAT_0b9f = DAT_0ba1;
          bVar3 = DAT_0ba0;
        }
      }
      DAT_0ba6._0_1_ = DAT_0ba0;
      pbVar1 = DAT_0ba4 + DAT_0ba0;
      DAT_0dde = CONCAT11(pbVar1[1] - *pbVar1,(undefined1)DAT_0dde);
      uVar2 = (ushort)(((uint)(byte)(DAT_0ba2._0_1_ - *pbVar1) << 0x18) / (uint)DAT_0dde);
      if (0xff7f < uVar2) {
        DAT_0ba6._0_1_ = DAT_0ba0 + 1;
      }
      DAT_0ba6 = CONCAT11(DAT_0ba6._0_1_,(char)(uVar2 + 0x80 >> 8));
    }
    else {
      DAT_0ba6 = (ushort)DAT_0b9f << 8;
    }
  }
  else {
    DAT_0ba6 = 0;
  }
  return;
}


/* Entry ca49 */

void axis_index_u16_ascending(undefined2 param_1)

{
  ushort uVar1;
  byte bVar2;
  
  DAT_0b9f = (char)((ushort)param_1 >> 8) - 1;
  DAT_0ba0 = 0;
  if (DAT_0ba4 < DAT_0ba2) {
    bVar2 = DAT_0ba0;
    if (DAT_0ba2 < (byte)(DAT_0b9f * '\x02') + DAT_0ba4) {
      while (DAT_0ba0 = bVar2, (byte)(DAT_0b9f - DAT_0ba0) != 1) {
        DAT_0ba1 = ((byte)(DAT_0b9f - DAT_0ba0) >> 1) + DAT_0ba0;
        bVar2 = DAT_0ba1;
        if (DAT_0ba2 < (byte)(DAT_0ba1 * '\x02') + DAT_0ba4) {
          DAT_0b9f = DAT_0ba1;
          bVar2 = DAT_0ba0;
        }
      }
      DAT_0ba6._0_1_ = DAT_0ba0;
      DAT_0dde = 2;
      uVar1 = (ushort)(((uint)(DAT_0ba2 - ((byte)(DAT_0ba0 << 1) + DAT_0ba4)) << 0x10) / 2);
      if (0xff7f < uVar1) {
        DAT_0ba6._0_1_ = DAT_0ba0 + 1;
      }
      DAT_0ba6 = CONCAT11(DAT_0ba6._0_1_,(char)(uVar1 + 0x80 >> 8));
    }
    else {
      DAT_0ba6 = (ushort)DAT_0b9f << 8;
    }
  }
  else {
    DAT_0ba6 = 0;
  }
  return;
}


/* Entry caea */

void candidate_unreferenced_caea(undefined2 param_1)

{
  ushort uVar1;
  byte bVar2;
  
  DAT_0b9f = (char)((ushort)param_1 >> 8) - 1;
  DAT_0ba0 = 0;
  if (DAT_0ba2 < DAT_0ba4) {
    bVar2 = DAT_0ba0;
    if ((byte)(DAT_0b9f * '\x02') + DAT_0ba4 < DAT_0ba2) {
      while (DAT_0ba0 = bVar2, (byte)(DAT_0b9f - DAT_0ba0) != 1) {
        DAT_0ba1 = ((byte)(DAT_0b9f - DAT_0ba0) >> 1) + DAT_0ba0;
        bVar2 = DAT_0ba1;
        if ((byte)(DAT_0ba1 * '\x02') + DAT_0ba4 <= DAT_0ba2) {
          DAT_0b9f = DAT_0ba1;
          bVar2 = DAT_0ba0;
        }
      }
      DAT_0ba6._0_1_ = DAT_0ba0;
      DAT_0dde = 0xfffe;
      uVar1 = (ushort)(((uint)(((byte)(DAT_0ba0 << 1) + DAT_0ba4) - DAT_0ba2) << 0x10) / 0xfffe);
      if (0xff7f < uVar1) {
        DAT_0ba6._0_1_ = DAT_0ba0 + 1;
      }
      DAT_0ba6 = CONCAT11(DAT_0ba6._0_1_,(char)(uVar1 + 0x80 >> 8));
    }
    else {
      DAT_0ba6 = (ushort)DAT_0b9f << 8;
    }
  }
  else {
    DAT_0ba6 = 0;
  }
  return;
}


/* Entry cb8b */

void candidate_unreferenced_cb8b(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = DAT_0001;
  if ((~bVar1 & 0x80) == 0) {
    bVar1 = DAT_0001;
    DAT_0001 = bVar1 | 0x80;
    if ((DAT_0b65 & 0xf0) == 0) {
      if ((DAT_0b64 & 0xf) == 0) {
        DAT_0b65 = 0;
        return;
      }
      DAT_0b66 = param_1[3];
    }
    else {
      DAT_0b66 = param_1[1];
    }
  }
  else {
    if (DAT_0b64 == DAT_0b65) {
      bVar1 = DAT_0001;
      DAT_0001 = bVar1 & 0x7f;
      if ((DAT_0b64 & 0xf0) != 0) {
        DAT_0b64 = DAT_0b64 - 0x10;
        DAT_0b66 = param_1[2];
        return;
      }
      DAT_0b64 = DAT_0b64 - 1;
      DAT_0b66 = param_1[4];
      return;
    }
    DAT_0b66 = *param_1;
  }
  DAT_0b65 = DAT_0b64;
  return;
}


/* Entry cbef */

void FUN_cbef(void)

{
  if (DAT_0d87 == '\t') {
    if ((~DAT_0896._0_1_ & 2) != 0) {
LAB_cc19:
      DAT_0b06 = (DAT_0b06 + 1) - (0xfe < DAT_0b06);
      if (DAT_0b06 < DAT_18d5) {
        DAT_0b05 = 0;
        return;
      }
      DAT_0880 = DAT_0880 & 0xfe;
      DAT_0b05 = 0;
      return;
    }
  }
  else if ((DAT_0896._0_1_ & 2) == 0) goto LAB_cc19;
  DAT_0b06 = 0;
  DAT_0b05 = (DAT_0b05 + 1) - (0xfe < DAT_0b05);
  if (DAT_0b05 < DAT_18d4) {
    DAT_0b06 = 0;
    return;
  }
  DAT_0880 = DAT_0880 | 1;
  return;
}


/* Entry cc30 */

void FUN_cc30(void)

{
  if ((~DAT_0896._0_1_ & 1) == 0) {
    DAT_0b08 = (DAT_0b08 + 1) - (0xfe < DAT_0b08);
    DAT_0b07 = 0;
    if (DAT_4bfd <= DAT_0b08) {
      DAT_088c = DAT_088c & 0x7f;
      return;
    }
  }
  else {
    DAT_0b07 = (DAT_0b07 + 1) - (0xfe < DAT_0b07);
    DAT_0b08 = 0;
    if (DAT_4bfd <= DAT_0b07) {
      DAT_088c = DAT_088c | 0x80;
    }
  }
  return;
}


/* Entry cc63 */

ushort FUN_cc63(ushort param_1)

{
  ushort uVar1;
  
  if (param_1 < 0x1000) {
    uVar1 = 0;
  }
  else if (param_1 - 0x1000 < 0xe000) {
    uVar1 = param_1 - 0x1000 >> 3;
  }
  else {
    uVar1 = 0x1c00;
  }
  return uVar1;
}


/* Entry cc7b */

undefined * FUN_cc7b(undefined2 param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  
  bVar1 = (byte)((ushort)param_1 >> 8);
  uVar2 = CONCAT11(bVar1 - 0x10,(char)param_1);
  if (bVar1 < 0x10) {
    uVar2 = 0;
  }
  puVar3 = &UNK_2800 + uVar2;
  if (0xd7ff < uVar2) {
    puVar3 = (undefined *)0x0;
  }
  puVar3 = puVar3 + -0x2800;
  bVar1 = (byte)((ushort)puVar3 >> 8);
  if (bVar1 < 0x28) {
    puVar3 = (undefined *)((ushort)puVar3 >> 2);
  }
  else if (bVar1 < 0x38) {
    puVar3 = &UNK_0500 + ((ushort)puVar3 >> 3);
  }
  else {
    puVar3 = &DAT_0880 + ((ushort)puVar3 >> 4);
  }
  return puVar3;
}


/* Entry cca9 */

void FUN_cca9(void)

{
  byte bVar1;
  
  bVar1 = DAT_0037;
  DAT_0037 = bVar1 | 0x80;
  FUN_ccb0();
  return;
}


/* Entry ccb0 */

ushort FUN_ccb0(ushort param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined1 uVar4;
  
  bVar1 = DAT_0020;
  if (((((bVar1 & 1) == 0) || (param_1 = DAT_0024, param_1 != 0xa55a)) && ((DAT_08ae & 1) != 0)) &&
     ((~DAT_08ae & 0x20) != 0)) {
    if ((~DAT_08ae & 4) == 0) {
      DAT_08ae = DAT_08ae | 4;
    }
    else if ((DAT_08a4 & 2) == 0) {
      if ((DAT_08a4 & 4) == 0) {
        if ((DAT_08a4 & 8) == 0) {
          if ((DAT_08a4 & 0x10) == 0) {
            if ((DAT_08a4 & 0x20) == 0) {
              uVar2 = DAT_00d4;
              uVar4 = DAT_00d6._1_1_;
              DAT_00d6._1_1_ = DAT_08a6;
              param_1 = CONCAT11(0x60,DAT_08a6);
              DAT_08a4 = 0x60;
            }
            else {
              uVar3 = DAT_00d4;
              param_1 = uVar3 & 0x80ff;
              DAT_0e1c = uVar3;
              if ((uVar3 & 0x8000) != 0) {
                DAT_0e1c._0_1_ = (undefined1)(uVar3 >> 8);
                param_1 = CONCAT11(DAT_0e1c._0_1_,(char)param_1) & 0x40ff;
                if ((uVar3 & 0x4000) != 0) {
                  uVar2 = DAT_00d4;
                  uVar4 = DAT_00d6._1_1_;
                  param_1 = CONCAT11(uVar4,DAT_08a7);
                  DAT_00d6._1_1_ = DAT_08a7;
                  DAT_08a4 = DAT_08a4 | 0x10;
                }
              }
            }
          }
          else {
            uVar3 = DAT_00d4;
            param_1 = uVar3 & 0x80ff;
            DAT_0e1c = uVar3;
            if ((uVar3 & 0x8000) != 0) {
              DAT_0e1c._0_1_ = (undefined1)(uVar3 >> 8);
              param_1 = CONCAT11(DAT_0e1c._0_1_,(char)param_1) & 0x40ff;
              if ((uVar3 & 0x4000) != 0) {
                uVar2 = DAT_00d4;
                uVar4 = DAT_00d6._1_1_;
                param_1 = CONCAT11(uVar4,DAT_08a8);
                DAT_00d6._1_1_ = DAT_08a8;
                DAT_08a4 = DAT_08a4 | 8;
              }
            }
          }
        }
        else {
          uVar3 = DAT_00d4;
          param_1 = uVar3 & 0x80ff;
          DAT_0e1c = uVar3;
          if ((uVar3 & 0x8000) != 0) {
            DAT_0e1c._0_1_ = (undefined1)(uVar3 >> 8);
            param_1 = CONCAT11(DAT_0e1c._0_1_,(char)param_1) & 0x40ff;
            if ((uVar3 & 0x4000) != 0) {
              uVar2 = DAT_00d4;
              uVar4 = DAT_00d6._1_1_;
              param_1 = CONCAT11(uVar4,DAT_08a9);
              DAT_00d6._1_1_ = DAT_08a9;
              DAT_08a4 = DAT_08a4 | 4;
            }
          }
        }
      }
      else {
        uVar3 = DAT_00d4;
        param_1 = uVar3 & 0x80ff;
        DAT_0e1c = uVar3;
        if ((uVar3 & 0x8000) != 0) {
          DAT_0e1c._0_1_ = (undefined1)(uVar3 >> 8);
          param_1 = CONCAT11(DAT_0e1c._0_1_,(char)param_1) & 0x40ff;
          if ((uVar3 & 0x4000) != 0) {
            uVar2 = DAT_00d4;
            uVar4 = DAT_00d6._1_1_;
            param_1 = CONCAT11(uVar4,DAT_08aa);
            DAT_00d6._1_1_ = DAT_08aa;
            DAT_08a4 = DAT_08a4 | 2;
          }
        }
      }
    }
    else {
      DAT_0e1c = DAT_00d4;
      param_1 = DAT_0e1c & 0x80ff;
      if ((DAT_0e1c & 0x8000) != 0) {
        DAT_08a4 = 0x40;
        DAT_08ae = DAT_08ae & 0xda | 0x40;
        uVar2 = DAT_00d4;
        uVar4 = DAT_00d6._1_1_;
        param_1 = CONCAT11(0x26,uVar4);
        DAT_00d2._1_1_ = 0x26;
      }
    }
  }
  return param_1;
}


/* Entry cdc0 */

ushort FUN_cdc0(ushort param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  undefined1 uVar5;
  
  sVar4 = DAT_0ae4;
  bVar1 = DAT_0020;
  if (((bVar1 & 1) == 0) || (param_1 = DAT_0024, param_1 != 0xa55a)) {
    uVar3 = DAT_0e1c;
    if ((~DAT_08ae & 0x40) != 0) {
      DAT_0ae6 = DAT_0ae4;
      DAT_0ae4 = DAT_0ab0;
      sVar4 = DAT_0ab0 - sVar4;
      if ((~DAT_08a2 & 1) == 0) {
        sVar4 = 0;
      }
      if ((char)((ushort)sVar4 >> 8) != '\0') {
        sVar4 = 0xff;
      }
      DAT_0ae3 = (undefined1)sVar4;
      DAT_08a2 = DAT_08a2 | 1;
      uVar3 = DAT_00d4;
      DAT_0e1a = DAT_00d2;
      uVar2 = DAT_00d6;
      DAT_0e1c._0_1_ = (undefined1)(uVar3 >> 8);
      param_1 = CONCAT11(DAT_0e1c._0_1_,(char)DAT_0e1a) & 0x20ff;
      if (((uVar3 & 0x2000) != 0) &&
         (param_1 = CONCAT11(DAT_0e1c._0_1_,(char)param_1) & 0xaff, (uVar3 & 0xa00) == 0)) {
        DAT_0d10 = (undefined1)uVar2;
        DAT_0e1c = uVar3;
        DAT_0e1e = DAT_0d10;
        if ((DAT_0dd5 == -0x80) || ((~DAT_0d06 & 0x80) != 0)) {
          uVar5 = FUN_ce51(param_1);
        }
        else {
          uVar5 = FUN_d36c();
        }
        DAT_00d2._1_1_ = 8;
        return CONCAT11(8,uVar5);
      }
    }
    DAT_0e1c = uVar3;
    DAT_08ae = DAT_08ae | 0x40;
    uVar5 = DAT_00d4._0_1_;
    uVar5 = DAT_00d6._1_1_;
    uVar3 = CONCAT11(0x26,(char)param_1);
    DAT_00d2._1_1_ = 0x26;
  }
  else {
    uVar2 = DAT_00d4;
    bVar1 = DAT_00d6._1_1_;
    uVar3 = (ushort)bVar1;
    DAT_00d2._1_1_ = 0;
    DAT_08a0 = 0x80;
    DAT_08ae = 0x40;
  }
  return uVar3;
}


/* Entry ce51 */

void FUN_ce51(char param_1)

{
  byte bVar1;
  byte bVar2;
  
  if ((DAT_08a0 & 2) != 0) {
    if ((((param_1 == '\0') || (param_1 == '\x01')) || (param_1 == '\x02')) || (param_1 == -2)) {
      DAT_08a1 = DAT_08a1 & 0xfe;
      bVar2 = DAT_0020;
      DAT_0020 = bVar2 | 4;
      DAT_00cb = 0;
      DAT_0e1f = param_1;
    }
    else {
      DAT_08a1 = DAT_08a1 | 1;
    }
  }
  if ((DAT_08a0 & 0x80) != 0) {
    if ((~DAT_08a3 & 0x80) == 0) {
      if ((~DAT_08a1 & 0x80) == 0) {
        if (param_1 == -2) {
          bVar2 = DAT_0020;
          DAT_0020 = bVar2 | 4;
          DAT_00cb = 0;
          bVar2 = DAT_08a1 & 0xfe | 0x80;
          goto LAB_d355;
        }
      }
      else {
        DAT_08a1 = DAT_08a1 & 0xfe;
        if (param_1 != '\x01') {
          if (param_1 == -0x33) {
            DAT_08a2 = DAT_08a2 | 0x80;
            bVar2 = DAT_08a1;
            goto LAB_d355;
          }
          if (((param_1 != -0x34) && (param_1 != -0x35)) && (param_1 != -0x36)) {
            DAT_08a1 = DAT_08a1 | 1;
            DAT_0b34 = 0;
          }
        }
      }
      DAT_08a0 = DAT_08a0 & 0x7f | 2;
      bVar2 = DAT_08a1 & 0x7f;
    }
    else {
      DAT_08a0 = DAT_08a0 & 0x7f | 0x40;
      bVar2 = DAT_08a1 & 0x3f;
    }
    goto LAB_d355;
  }
  bVar2 = DAT_08a1;
  if ((~DAT_08a0 & 0x40) != 0) {
    if ((~DAT_08a2 & 0x40) == 0) {
      if (param_1 == -0x36) {
        DAT_08a2 = DAT_08a2 | 0x40;
      }
    }
    else {
      bVar2 = DAT_08a1 & 0xfe;
      if ((param_1 == -0x35) || (param_1 == -0x34)) {
        DAT_0b38 = 0;
      }
      else if (param_1 == -0x36) {
        DAT_0b38 = 0;
        if (DAT_0e1f == -0x35) {
          if ((DAT_08a1 & 0x40) == 0) {
            bVar2 = bVar2 | 0x40;
          }
          else {
            bVar2 = DAT_08a1 & 0xbe;
          }
        }
      }
      else if (param_1 == -0x33) {
        DAT_0b38 = (DAT_0b38 + 1) - (0xfe < DAT_0b38);
        if (0x7f < DAT_0b38) {
          if ((DAT_08a1 & 0x40) == 0) {
            bVar1 = DAT_0000;
            DAT_0000 = bVar1 & 0xfb;
            DAT_0bdd = 1;
            DAT_08a0 = DAT_08a0 & 0xbf | 4;
            DAT_08a1 = bVar2 | 0x20;
          }
          else {
            DAT_08a0 = DAT_08a0 & 0xbf | 0x30;
            DAT_08a1 = bVar2 | 0x30;
          }
          DAT_0b38 = 0;
          bVar2 = DAT_08a1;
        }
      }
      else {
        bVar2 = bVar2 | 1;
      }
    }
    goto LAB_d355;
  }
  if ((DAT_08a0 & 4) != 0) {
    DAT_0bde = DAT_0bdd;
    DAT_08a1 = DAT_08a1 & 0xfe;
    if (param_1 == -0x36) {
      DAT_0b36 = 0;
      DAT_0b37 = 0;
      DAT_08a2 = DAT_08a2 | 8;
    }
    else if (param_1 == -0x35) {
      DAT_0b37 = 0;
      if (DAT_0e1f == -0x36) {
        DAT_0bdc = DAT_0bdc + 1;
        if (DAT_0d3c <= DAT_0bdc) {
          DAT_0bdc = 0;
        }
        if (DAT_0d87 == '\t') {
          if ((DAT_0bdc == 0xb) || (DAT_0bdc == 0x10)) {
LAB_d23a:
            DAT_0bdc = DAT_0bdc + 1;
          }
        }
        else if ((DAT_0bdc == 0xc) || (DAT_0bdc == 8)) goto LAB_d23a;
        DAT_0bdd = (&DAT_0d3d)[DAT_0bdc];
        DAT_0b36 = (DAT_0b36 + 1) - (0xfe < DAT_0b36);
      }
      else {
        if (((~DAT_08a2 & 8) == 0) ||
           (DAT_0b36 = (DAT_0b36 + 1) - (0xfe < DAT_0b36), DAT_0b36 < 0x40)) goto LAB_d34e;
        DAT_0bdc = DAT_0bdc + 1;
        if (DAT_0d3c <= DAT_0bdc) {
          DAT_0bdc = 0;
        }
        if (DAT_0d87 == '\t') {
          if ((DAT_0bdc == 0xb) || (DAT_0bdc == 0x10)) {
LAB_d293:
            DAT_0bdc = DAT_0bdc + 1;
          }
        }
        else if ((DAT_0bdc == 0xc) || (DAT_0bdc == 8)) goto LAB_d293;
        DAT_0bdd = (&DAT_0d3d)[DAT_0bdc];
        DAT_0b36 = DAT_0d87 - 0x10;
      }
    }
    else if (param_1 == -0x34) {
      DAT_0b36 = 0;
      if (DAT_0e1f == -0x36) {
        if (DAT_0bdc == 0) {
          DAT_0bdc = DAT_0d3c;
        }
        bVar2 = DAT_0bdc - 1;
        if (DAT_0d87 == '\t') {
          if ((bVar2 == 0xb) || (bVar2 == 0x10)) {
LAB_d2e4:
            bVar2 = DAT_0bdc - 2;
          }
        }
        else if ((bVar2 == 0xc) || (bVar2 == 8)) goto LAB_d2e4;
        DAT_0bdd = (&DAT_0d3d)[bVar2];
        DAT_0b37 = (DAT_0b37 + 1) - (0xfe < DAT_0b37);
        DAT_0bdc = bVar2;
      }
      else if (((DAT_08a2 & 8) != 0) &&
              (DAT_0b37 = (DAT_0b37 + 1) - (0xfe < DAT_0b37), 0x3f < DAT_0b37)) {
        if (DAT_0bdc == 0) {
          DAT_0bdc = DAT_0d3c;
        }
        bVar2 = DAT_0bdc - 1;
        if (DAT_0d87 == '\t') {
          if ((bVar2 == 0xb) || (bVar2 == 0x10)) {
LAB_d337:
            bVar2 = DAT_0bdc - 2;
          }
        }
        else if ((bVar2 == 0xc) || (bVar2 == 8)) goto LAB_d337;
        DAT_0bdd = (&DAT_0d3d)[bVar2];
        DAT_0b37 = DAT_0d87 - 0x10;
        DAT_0bdc = bVar2;
      }
    }
    else {
      if (param_1 != -0x33) {
        bVar2 = DAT_08a1 | 1;
        goto LAB_d355;
      }
      DAT_0b36 = 0;
      DAT_0b37 = 0;
    }
LAB_d34e:
    DAT_0b38 = 0;
    DAT_0b35 = 0;
    FUN_d6a3();
    goto LAB_d15f;
  }
  if ((~DAT_08a0 & 0x10) != 0) {
    if ((~DAT_08a2 & 0x20) == 0) {
      if (param_1 == -0x36) {
        DAT_08a2 = DAT_08a2 | 0x20;
      }
    }
    else {
      bVar2 = DAT_08a1 & 0xfe;
      if (param_1 == -0x36) {
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        if (DAT_0e1f == -0x35) {
          bVar2 = bVar2 | 8;
        }
        else if (DAT_0e1f == -0x34) {
          bVar2 = bVar2 | 4;
        }
        else {
          bVar2 = DAT_08a1 & 0xf2;
        }
      }
      else if (param_1 == -0x35) {
        DAT_0b35 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        DAT_0b36 = (DAT_0b36 + 1) - (0xfe < DAT_0b36);
        bVar2 = DAT_08a1 & 0xf6;
      }
      else if (param_1 == -0x34) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b38 = 0;
        DAT_0b37 = (DAT_0b37 + 1) - (0xfe < DAT_0b37);
        bVar2 = DAT_08a1 & 0xfa;
      }
      else if (param_1 == -0x33) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = (DAT_0b38 + 1) - (0xfe < DAT_0b38);
        if (0x7f < DAT_0b38) {
          DAT_08a0 = DAT_08a0 & 0xef | 8;
          DAT_08a2 = DAT_08a2 & 0xef;
          DAT_0b38 = 0;
          DAT_0b39 = 0;
          bVar2 = DAT_08a1 & 0xde;
          DAT_0aed = DAT_0a00;
          if (DAT_0aee == -0x3f) {
            DAT_0aed = DAT_09fc;
          }
        }
      }
      else {
        bVar2 = bVar2 | 1;
      }
    }
    goto LAB_d355;
  }
  if ((~DAT_08a2 & 0x10) == 0) {
    if (param_1 == -0x36) {
      DAT_08a2 = DAT_08a2 | 0x10;
    }
    goto LAB_d355;
  }
  DAT_08a1 = DAT_08a1 & 0xfe;
  if (param_1 == -0x36) {
    DAT_0b36 = 0;
    DAT_0b37 = 0;
    DAT_0b38 = 0;
    if (DAT_0e1f == -0x35) {
      DAT_0aed = DAT_0aed + 1;
      if (0xfd < DAT_0aed) {
        DAT_0aed = 0xfe;
      }
    }
    else {
      if (DAT_0e1f != -0x34) goto LAB_d15f;
      DAT_0aed = (DAT_0aed == 0) - 0x34;
    }
    if (DAT_0aee == -0x3f) {
      DAT_09fc = DAT_0aed;
      DAT_088f = DAT_088f | 0x80;
    }
    else {
      DAT_0a00 = DAT_0aed;
      DAT_088f = DAT_088f | 0x40;
    }
    DAT_0891 = DAT_0891 | 0x80;
  }
  else if (param_1 == -0x35) {
    DAT_0b35 = 0;
    DAT_0b37 = 0;
    DAT_0b38 = 0;
    DAT_0b36 = (DAT_0b36 + 1) - (0xfe < DAT_0b36);
    if (0x1f < DAT_0b36) {
      DAT_0aed = DAT_0aed + 1;
      if (0xfd < DAT_0aed) {
        DAT_0aed = 0xfe;
      }
      DAT_0b36 = DAT_0b36 - 8;
    }
  }
  else {
    if (param_1 != -0x34) {
      if (param_1 == -0x33) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        DAT_0b39 = 0;
        DAT_08a0 = DAT_08a0 & 0xf7 | 0x10;
        DAT_08a2 = DAT_08a2 & 0xdf;
        bVar2 = DAT_08a1 | 0x30;
      }
      else {
        bVar2 = DAT_08a1 | 1;
      }
      goto LAB_d355;
    }
    DAT_0b35 = 0;
    DAT_0b36 = 0;
    DAT_0b38 = 0;
    DAT_0b37 = (DAT_0b37 + 1) - (0xfe < DAT_0b37);
    if (0x1f < DAT_0b37) {
      DAT_0aed = DAT_0b37 + (DAT_0aed == 0);
      DAT_0b37 = DAT_0b37 - 8;
    }
  }
LAB_d15f:
  DAT_0b39 = (DAT_0b39 + 1) - (0xfe < DAT_0b39);
  bVar2 = DAT_08a1;
  if ((~DAT_08a1 & 0x20) == 0) {
    if (6 < DAT_0b39) {
      DAT_0b39 = 0;
      bVar2 = DAT_08a1 | 0x20;
    }
  }
  else if (DAT_0b39 != 0) {
    DAT_0b39 = 0;
    bVar2 = DAT_08a1 & 0xdf;
  }
LAB_d355:
  DAT_08a1 = bVar2;
  DAT_08ae = DAT_08ae & 0xbf | 0xa2;
  DAT_0e1f = DAT_0e1e;
  return;
}


/* Entry d36c */

void FUN_d36c(char param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  
  if (param_1 == '>') {
    bVar3 = DAT_0020;
    DAT_0020 = bVar3 | 4;
    DAT_00cb = 0;
    DAT_0d0f = 0;
    DAT_0d3b = 0;
    DAT_0d0c = 0;
    DAT_0d0e = 0;
    DAT_0d11 = 1;
    DAT_0d07 = 0;
    DAT_0d13 = 0;
    DAT_0d12 = 0;
    DAT_0d14 = 0;
    DAT_0d08 = DAT_0d08 & 0x89;
    DAT_0d3a = DAT_0044._1_1_;
    DAT_08a6 = DAT_0d3a * '\x13' + '\x13';
    DAT_08a7 = DAT_08a6 * '\x13' + '\x13';
    DAT_08a9 = DAT_08a7 * '\x13' + '\x13';
    DAT_08a8 = 'C';
    DAT_08aa = DAT_08a7 * '\x13' + 'V' + DAT_08a6 + DAT_08a7;
    DAT_0d06 = 0x60;
    DAT_0d17 = DAT_08a6;
    DAT_0d18 = DAT_08a7;
    DAT_0d19 = DAT_08a9;
    goto LAB_d696;
  }
  if (param_1 == '=') {
    DAT_0d0f = 0;
    if ((~DAT_0d06 & 0x40) != 0) {
      DAT_0d07 = DAT_0d07 & 0xf7;
      DAT_0d0e = 0;
      if (DAT_0d11 == 1) {
        DAT_0d0c = 0;
        DAT_0d11 = 2;
        if ((DAT_0d08 & 0x80) == 0) {
          DAT_08a6 = 'J';
          DAT_08a7 = 'J';
          DAT_08a8 = 'J';
          DAT_08a9 = 'J';
          DAT_08aa = '(';
          DAT_0d06 = DAT_0d06 | 0x10;
        }
        else {
          DAT_08a6 = (char)((ushort)DAT_0d37 >> 8);
          DAT_08a7 = (char)DAT_0d37;
          DAT_08a9 = DAT_0d39;
          DAT_08a8 = 'K';
          DAT_08aa = DAT_08a6 + DAT_08a7 + DAT_0d39 + 'K';
          DAT_0d06 = DAT_0d06 | 0x10;
        }
        goto LAB_d696;
      }
LAB_d430:
      DAT_0d07 = DAT_0d07 & 0xf7;
      DAT_0d0e = 0;
      DAT_0d0c = (DAT_0d0c + 1) - (0xfe < DAT_0d0c);
      if (DAT_4e80 <= DAT_0d0c) {
        DAT_0d08 = DAT_0d08 | 1;
      }
      DAT_0d06 = DAT_0d06 & 0x7f;
      DAT_0d11 = 0;
      DAT_0d12 = 0;
      DAT_0d13 = 0;
      DAT_08a6 = '\0';
      DAT_08a7 = '\0';
      DAT_08a8 = '8';
      DAT_08a9 = '\0';
      DAT_08aa = '8';
      goto LAB_d696;
    }
  }
  else {
    uVar1 = CONCAT11(param_1,param_1) & 0xc0ff;
    if ((char)(uVar1 >> 8) == -0x80) {
      DAT_0d0f = 0;
      if ((~DAT_0d06 & 0x40) != 0) {
        DAT_0d07 = DAT_0d07 & 0xf7;
        DAT_0d0e = 0;
        if (DAT_0d13 == 0) {
          DAT_0d11 = DAT_0d11 + 1;
        }
        if ((DAT_0d11 == 3) && (DAT_0d13 < 3)) {
          if (DAT_0d13 == 2) {
            DAT_0d06 = DAT_0d06 | 2;
          }
          DAT_0d0c = 0;
          (&DAT_0d25)[DAT_0d13] = DAT_0d10;
          DAT_0d13 = DAT_0d13 + 1;
          DAT_08a6 = 'G';
          DAT_08a7 = 'G';
          DAT_08a8 = 'G';
          DAT_08a9 = 'G';
          DAT_08aa = '\x1c';
          goto LAB_d696;
        }
        DAT_0d3b = 0x30;
        goto LAB_d430;
      }
    }
    else {
      uVar2 = (undefined1)uVar1;
      uVar1 = CONCAT11(uVar2,uVar2) & 0xc0ff;
      if ((char)(uVar1 >> 8) == '@') {
        DAT_0d0f = 0;
        if ((~DAT_0d06 & 0x40) != 0) {
          DAT_0d07 = DAT_0d07 & 0xf7;
          DAT_0d0e = 0;
          if ((~DAT_0d08 & 0x80) == 0) {
            if (DAT_0d12 == 0) {
              DAT_0d11 = DAT_0d11 + 1;
            }
            if ((DAT_0d11 == 4) && (DAT_0d12 < 9)) {
              if (DAT_0d12 == 8) {
                DAT_0d06 = DAT_0d06 | 0xc;
              }
              DAT_0d0c = 0;
              *(undefined1 *)((short)&DAT_0d28 + (ushort)DAT_0d12) = DAT_0d10;
              DAT_0d12 = DAT_0d12 + 1;
              DAT_08a6 = 'I';
              DAT_08a7 = 'I';
              DAT_08a8 = 'I';
              DAT_08a9 = 'I';
              DAT_08aa = '$';
              goto LAB_d696;
            }
          }
          DAT_0d3b = 0x40;
          goto LAB_d430;
        }
      }
      else {
        bVar3 = (byte)uVar1;
        if (bVar3 == 0x3f) {
          DAT_0d0f = 0;
          if ((~DAT_0d06 & 0x40) != 0) {
            DAT_0d07 = DAT_0d07 & 0xf7;
            DAT_0d0e = 0;
            if ((2 < DAT_0d11) && (DAT_0d11 < 5)) {
              if ((~DAT_0d07 & 0x10) != 0) goto LAB_d430;
              DAT_0d0c = 0;
              if ((((DAT_0d06 & 8) != 0) && ((DAT_0d08 & 0x40) == 0)) || ((DAT_0d08 & 0x20) == 0)) {
                DAT_08a6 = 'I';
                DAT_08a7 = 'I';
                DAT_08a8 = 'I';
                DAT_08a9 = 'I';
                DAT_08aa = '$';
                goto LAB_d696;
              }
              if ((DAT_0d08 & 0x10) == 0) {
                DAT_0d08 = DAT_0d08 | 1;
                DAT_08a6 = 'F';
                DAT_08a7 = 'F';
                DAT_08a8 = 'F';
                DAT_08a9 = 'F';
                DAT_08aa = '\x18';
                goto LAB_d696;
              }
              DAT_0d14 = (DAT_0d14 + 1) - (0xfe < DAT_0d14);
              if (DAT_0d14 < 5) {
                if ((3 < DAT_0d14) && (DAT_0d06 = DAT_0d06 | 0x80, (DAT_0d08 & 1) != 0)) {
                  DAT_0d08 = DAT_0d08 & 0xfe;
                  DAT_0afc = 0;
                  if ((~DAT_0881 & 0x20) == 0) {
                    DAT_0d08 = DAT_0d08 | 2;
                  }
                }
                DAT_08a6 = 'E';
                DAT_08a7 = 'E';
                DAT_08a8 = 'E';
                DAT_08a9 = 'E';
                DAT_08aa = '\x14';
                goto LAB_d696;
              }
            }
            DAT_08a6 = 'D';
            DAT_08a7 = 'D';
            DAT_08a8 = 'D';
            DAT_08a9 = 'D';
            DAT_08aa = '\x10';
            goto LAB_d696;
          }
        }
        else if ((bVar3 < 0x33) || (0x37 < bVar3)) {
          if ((bVar3 != 0xfe) &&
             ((((bVar3 != 1 && (bVar3 != 2)) && (bVar3 != 5)) && ((DAT_0d06 & 0x40) != 0)))) {
            DAT_0d07 = DAT_0d07 | 0x40;
            DAT_0d3b = 0xff;
            goto LAB_d430;
          }
        }
        else {
          DAT_0d3b = 0xe0;
          DAT_0d0f = 0;
          if ((bVar3 == 0x37) || ((DAT_0d06 & 0x40) != 0)) {
            DAT_0d0e = 0;
            DAT_0d0c = (DAT_0d0c + 1) - (0xfe < DAT_0d0c);
            if (DAT_4e80 <= DAT_0d0c) {
              DAT_0d08 = DAT_0d08 | 1;
            }
            DAT_0d07 = DAT_0d07 & 0xf7 | 0x80;
            DAT_0d06 = DAT_0d06 & 0x7f;
            DAT_0d11 = 0;
            DAT_0d12 = 0;
            DAT_0d13 = 0;
            DAT_08a6 = '\0';
            DAT_08a7 = '\0';
            DAT_08a9 = '\0';
            DAT_08a8 = param_1;
            DAT_08aa = param_1;
            goto LAB_d696;
          }
        }
      }
    }
  }
  bVar3 = DAT_0020;
  DAT_0020 = bVar3 | 4;
  DAT_00cb = 0;
  DAT_0d07 = DAT_0d07 & 0xfb | 8;
  DAT_0d0d = 0;
  DAT_08a6 = '\0';
  DAT_08a7 = '\0';
  DAT_08a8 = 'H';
  DAT_08a9 = '\0';
  DAT_08aa = 'H';
LAB_d696:
  DAT_08ae = DAT_08ae & 0xbf | 0x21;
  return;
}


/* Entry d6a3 */

void FUN_d6a3(void)

{
  if (DAT_0bdd != DAT_0bde) {
    DAT_0893 = 0;
    DAT_0be3 = 0;
    DAT_0be6 = 0;
    DAT_0be5 = 0;
    DAT_0be2 = 0;
    DAT_0be4 = 0;
    DAT_0bdf = 0;
    DAT_0be0 = 0;
    DAT_0b71 = 0;
    DAT_0892 = DAT_0892 & 0xef;
    if (DAT_0bde == DAT_0d43) {
      FUN_d7c4();
    }
    else if (DAT_0bde == DAT_0d46) {
      FUN_d7d0();
    }
    else if (DAT_0bde == DAT_0d47) {
      FUN_d7eb();
    }
    else if (DAT_0bde == DAT_0d48) {
      FUN_d804();
    }
    else if (DAT_0bde == DAT_0d49) {
      FUN_d81d();
    }
    else if (DAT_0bde == DAT_0d4a) {
      FUN_d830();
    }
    else if (DAT_0bde == DAT_0d4b) {
      FUN_d83c();
    }
    else if (DAT_0bde == DAT_0d4c) {
      FUN_d84b();
    }
    else if (DAT_0bde == DAT_0d4d) {
      FUN_d85a();
    }
    else if (DAT_0bde == DAT_0d4e) {
      FUN_d862();
    }
    else if (DAT_0bde == DAT_0d4f) {
      FUN_d864();
    }
    else if (DAT_0bde == DAT_0d50) {
      FUN_d86d();
    }
    if (DAT_0bdd == DAT_0d43) {
      FUN_d7c0();
    }
    else if (DAT_0bdd == DAT_0d46) {
      FUN_d7c8();
    }
    else if (DAT_0bdd == DAT_0d47) {
      FUN_d7e3();
    }
    else if (DAT_0bdd == DAT_0d48) {
      FUN_d7fc();
    }
    else if (DAT_0bdd == DAT_0d49) {
      FUN_d815();
    }
    else if (DAT_0bdd == DAT_0d4a) {
      FUN_d828();
    }
    else if (DAT_0bdd == DAT_0d4b) {
      FUN_d834();
    }
    else if (DAT_0bdd == DAT_0d4c) {
      FUN_d843();
    }
    else if (DAT_0bdd == DAT_0d4d) {
      FUN_d852();
    }
    else if (DAT_0bdd == DAT_0d4e) {
      FUN_d861();
    }
    else if (DAT_0bdd == DAT_0d4f) {
      FUN_d863();
    }
    else if (DAT_0bdd == DAT_0d50) {
      FUN_d865();
    }
  }
  return;
}


/* Entry d7c0 */

void FUN_d7c0(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d7c4 */

void FUN_d7c4(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  return;
}


/* Entry d7c8 */

void FUN_d7c8(void)

{
  byte bVar1;
  
  DAT_0893 = DAT_0893 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d7d0 */

void FUN_d7d0(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0xf7;
  bVar1 = DAT_0049;
  DAT_0049 = bVar1 & 0xbf | 0x80;
  DAT_004e = 8;
  return;
}


/* Entry d7e3 */

void FUN_d7e3(void)

{
  byte bVar1;
  
  DAT_0893 = DAT_0893 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d7eb */

void FUN_d7eb(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0xbf;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 | 0x30;
  DAT_004e = 0x40;
  return;
}


/* Entry d7fc */

void FUN_d7fc(void)

{
  byte bVar1;
  
  DAT_0893 = DAT_0893 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d804 */

void FUN_d804(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0x7f;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 | 0xc0;
  DAT_004e = 0x80;
  return;
}


/* Entry d815 */

void FUN_d815(void)

{
  byte bVar1;
  
  DAT_0893 = DAT_0893 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d81d */

void FUN_d81d(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xfd;
  DAT_0889 = DAT_0889 & 0x7f;
  return;
}


/* Entry d828 */

void FUN_d828(void)

{
  byte bVar1;
  
  DAT_0893 = DAT_0893 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d830 */

void FUN_d830(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  return;
}


/* Entry d834 */

void FUN_d834(void)

{
  byte bVar1;
  
  DAT_0893 = DAT_0893 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d83c */

void FUN_d83c(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xfb;
  return;
}


/* Entry d843 */

void FUN_d843(void)

{
  byte bVar1;
  
  DAT_0893 = DAT_0893 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d84b */

void FUN_d84b(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xef;
  return;
}


/* Entry d852 */

void FUN_d852(void)

{
  byte bVar1;
  
  DAT_0893 = DAT_0893 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d85a */

void FUN_d85a(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xfe;
  return;
}


/* Entry d861 */

void FUN_d861(void)

{
  return;
}


/* Entry d862 */

void FUN_d862(void)

{
  return;
}


/* Entry d863 */

void FUN_d863(void)

{
  return;
}


/* Entry d864 */

void FUN_d864(void)

{
  return;
}


/* Entry d865 */

void FUN_d865(void)

{
  byte bVar1;
  
  DAT_0893 = DAT_0893 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d86d */

void FUN_d86d(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  return;
}


/* Entry d871 */

/* WARNING: Removing unreachable block (RAM,0xe1fa) */
/* WARNING: Removing unreachable block (RAM,0xe140) */
/* WARNING: Removing unreachable block (RAM,0xe150) */
/* WARNING: Removing unreachable block (RAM,0xe153) */
/* WARNING: Removing unreachable block (RAM,0xe164) */
/* WARNING: Removing unreachable block (RAM,0xe158) */
/* WARNING: Removing unreachable block (RAM,0xe15f) */
/* WARNING: Removing unreachable block (RAM,0xe16b) */
/* WARNING: Removing unreachable block (RAM,0xe199) */
/* WARNING: Removing unreachable block (RAM,0xe171) */
/* WARNING: Removing unreachable block (RAM,0xe179) */
/* WARNING: Removing unreachable block (RAM,0xe217) */
/* WARNING: Removing unreachable block (RAM,0xe1bc) */
/* WARNING: Removing unreachable block (RAM,0xe1c1) */
/* WARNING: Removing unreachable block (RAM,0xe611) */
/* WARNING: Removing unreachable block (RAM,0xe87d) */
/* WARNING: Removing unreachable block (RAM,0xe729) */
/* WARNING: Removing unreachable block (RAM,0xe535) */
/* WARNING: Removing unreachable block (RAM,0xea0d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_d871(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint3 uVar7;
  uint uVar8;
  undefined3 uVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  byte extraout_A;
  short sVar13;
  undefined2 uVar14;
  byte bVar17;
  undefined *puVar15;
  ushort uVar16;
  
  DAT_004e = 2;
  bVar10 = DAT_00e1;
  if ((bVar10 & 2) != 0) {
    bVar10 = DAT_004b;
    DAT_004b = bVar10 & 0xfb | 8;
    goto LAB_dc06;
  }
  DAT_08be = DAT_08be | 0xa0;
  bVar10 = DAT_0883 | 4;
  bVar12 = DAT_0880 | 8;
  DAT_0b62 = 0;
  DAT_0bc8 = 0;
  if ((((DAT_0d52 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) &&
     ((DAT_08af & 0x40) != 0)) {
    DAT_08af = DAT_08af & 0xbf;
    DAT_0bd2 = DAT_0bd2 | 0x80;
  }
  if (DAT_0d66 <= DAT_0afd) {
    DAT_0afb = 0;
  }
  DAT_0c0f = DAT_0c07;
  DAT_0c10 = DAT_0c08;
  sVar13 = DAT_0052;
  uVar16 = sVar13 - DAT_0af0;
  DAT_0af0 = DAT_0052;
  if ((short)((ushort)DAT_0c02 << 8) < 0) {
    DAT_0c07 = 0xff;
  }
  else if (DAT_0c02 < 8) {
    DAT_0c07 = 0;
  }
  else {
    DAT_0c08._0_1_ = (byte)(uVar16 >> 8);
    DAT_0c07 = (byte)(DAT_0c02 + ((byte)~DAT_0c08._0_1_ >> 4)) >> 4;
  }
  DAT_0c00 = DAT_0044;
  DAT_0c02 = 0;
  if ((((~DAT_0d08 & 1) == 0) && ((DAT_0880 & 1) != 0)) &&
     ((DAT_0caa = (DAT_0caa + 1) - (0xfe < DAT_0caa), DAT_0d67 <= DAT_0caa &&
      ((0xbf < DAT_0c03 || ((DAT_0d08 & 2) != 0)))))) {
    DAT_0d08 = DAT_0d08 & 0xfd;
    bVar10 = DAT_0883 | 0x14;
  }
  DAT_0883 = bVar10;
  DAT_0c2e = DAT_0daa;
  DAT_0c30 = DAT_0daa * 2;
  if (CARRY2(DAT_0daa,DAT_0daa)) {
    DAT_0c30 = -1;
  }
  DAT_0880 = bVar12;
  DAT_0c08 = uVar16;
  if ((~DAT_0bfe & 0x80) == 0) {
    if (((~DAT_0884 & 4) == 0) && ((~DAT_0bf8 & 0x80) == 0)) {
      FUN_f043();
    }
  }
  else {
    FUN_f147();
  }
  uVar16 = DAT_0c28;
  bVar10 = DAT_0c27;
  DAT_0b09 = 0;
  if ((~DAT_0bfe & 0x80) != 0) {
    DAT_0c23 = DAT_0c27;
    DAT_0c24 = DAT_0c28;
    if ((DAT_0c03 & 0x1f) == 10) {
      if ((DAT_0c07 == 0) && (DAT_0c08 < 0x100)) goto LAB_dc06;
      DAT_0c2b = DAT_0c07;
      DAT_0c2c = DAT_0c08;
      DAT_0c27 = DAT_0c07 >> 1;
      bVar10 = (byte)(DAT_0c08 >> 8);
      DAT_0c28 = CONCAT11(bVar10 >> 1 | DAT_0c07 << 7,(byte)DAT_0c08 >> 1 | bVar10 << 7);
    }
    else {
      if ((DAT_0c07 == 0) && (DAT_0c08 < 0x80)) goto LAB_dc06;
      DAT_0c27 = DAT_0c07;
      DAT_0c28 = DAT_0c08;
      DAT_0c2c = DAT_0c08 + uVar16;
      DAT_0c2b = DAT_0c07 + bVar10 + CARRY2(DAT_0c08,uVar16);
    }
    bVar10 = DAT_0c03 & 0x1f;
    DAT_0a2e = DAT_0c28;
    if (bVar10 == 0) {
      if (DAT_0c27 != 0) {
        DAT_0a2e = 0xffff;
      }
      if ((DAT_0e21 & 0x80) != 0) {
        DAT_0921 = DAT_091b;
      }
      DAT_091b = 0;
      uVar16 = DAT_0c2c;
      DAT_0a38 = DAT_0a2e;
      if (DAT_0c2b != 0) {
        uVar16 = 0xffff;
      }
    }
    else if (bVar10 == 1) {
LAB_da48:
      if (DAT_0c27 != 0) {
        DAT_0a2e = 0xffff;
      }
      if ((DAT_0e21 & 0x80) != 0) {
        DAT_0921 = DAT_091c;
      }
      DAT_091c = 0;
      uVar16 = DAT_0a38 + DAT_0a42;
      DAT_0a3a = DAT_0a2e;
      if (CARRY2(DAT_0a38,DAT_0a42)) {
        uVar16 = 0xffff;
      }
    }
    else if (bVar10 == 2) {
LAB_da79:
      if (DAT_0c27 != 0) {
        DAT_0a2e = 0xffff;
      }
      if ((DAT_0e21 & 0x80) != 0) {
        DAT_0921 = DAT_091d;
      }
      DAT_091d = 0;
      uVar16 = DAT_0a3a + DAT_0a38;
      DAT_0a3c = DAT_0a2e;
      if (CARRY2(DAT_0a3a,DAT_0a38)) {
        uVar16 = 0xffff;
      }
    }
    else if (bVar10 == 3) {
LAB_daaa:
      if (DAT_0c27 != 0) {
        DAT_0a2e = 0xffff;
      }
      if ((DAT_0e21 & 0x80) != 0) {
        DAT_0921 = DAT_091e;
      }
      DAT_091e = 0;
      uVar16 = DAT_0a3c + DAT_0a3a;
      DAT_0a3e = DAT_0a2e;
      if (CARRY2(DAT_0a3c,DAT_0a3a)) {
        uVar16 = 0xffff;
      }
    }
    else if (bVar10 == 4) {
      if (DAT_0c27 != 0) {
        DAT_0a2e = 0xffff;
      }
      if ((DAT_0e21 & 0x80) != 0) {
        DAT_0921 = (byte)(((ushort)DAT_091f << 7) >> 8);
      }
      DAT_091f = 0;
      uVar16 = DAT_0a3e + DAT_0a3c;
      DAT_0a40 = DAT_0a2e;
      if (CARRY2(DAT_0a3e,DAT_0a3c)) {
        uVar16 = 0xffff;
      }
    }
    else if (bVar10 == 5) {
      if (DAT_0c27 != 0) {
        DAT_0a2e = 0xffff;
      }
      if ((DAT_0e21 & 0x80) != 0) {
        DAT_0921 = DAT_0920;
      }
      DAT_0920 = 0;
      DAT_0e21 = DAT_0e21 | 0x80;
      uVar16 = DAT_0a3e + DAT_0a40;
      DAT_0a42 = DAT_0a2e;
      if (CARRY2(DAT_0a3e,DAT_0a40)) {
        uVar16 = 0xffff;
      }
    }
    else {
      if (bVar10 != 6) {
        if (bVar10 == 7) goto LAB_da48;
        if (bVar10 == 8) goto LAB_da79;
        if (bVar10 != 9) {
          if (DAT_0c27 != 0) {
            DAT_0a2e = 0xffff;
          }
          DAT_0921 = DAT_0920;
          DAT_0920 = 0;
          DAT_0a40 = DAT_0a2e;
          DAT_0a42 = DAT_0a2e;
          if ((DAT_0c2b != 0) || (DAT_0a34 = DAT_0a3e + DAT_0c2c, CARRY2(DAT_0a3e,DAT_0c2c))) {
            DAT_0a34 = -1;
          }
          goto LAB_dba1;
        }
        goto LAB_daaa;
      }
      if (DAT_0c27 != 0) {
        DAT_0a2e = 0xffff;
      }
      DAT_0921 = DAT_091b;
      DAT_091b = 0;
      uVar16 = DAT_0a42 + DAT_0a40;
      DAT_0a38 = DAT_0a2e;
      if (CARRY2(DAT_0a42,DAT_0a40)) {
        uVar16 = 0xffff;
      }
    }
    DAT_0a34 = uVar16 + DAT_0a2e;
    if (CARRY2(uVar16,DAT_0a2e)) {
      DAT_0a34 = -1;
    }
  }
LAB_dba1:
  if ((~DAT_0bfe & 0x80) != 0) {
    DAT_0c03 = DAT_0c03 + 1;
    if (10 < DAT_0c03) {
      DAT_0c03 = 0;
    }
    DAT_0c04 = DAT_0c03 & 0x1f;
    if (((~DAT_0884 & 4) != 0) || ((~DAT_0bf8 & 0x80) != 0)) {
LAB_dbf1:
      DAT_091b = 0;
      DAT_091c = 0;
      DAT_091d = 0;
      DAT_091e = 0;
      DAT_091f = 0;
      DAT_0920 = 0;
      DAT_0b09 = 0;
      goto LAB_dc06;
    }
    if (DAT_0922 < 0x16) {
      if (DAT_0922 == 10) {
        DAT_0922 = 0xb;
      }
      uVar16 = (ushort)(byte)(DAT_0922 + 1) << 8;
    }
    else {
      if (0xbf < DAT_0922) {
        DAT_0922 = (DAT_0922 + 1) - (0xfe < DAT_0922);
        goto LAB_dbf1;
      }
      cVar11 = DAT_0922 + 1;
      if (cVar11 == '\v') {
        cVar11 = '\f';
      }
      uVar16 = CONCAT11(cVar11,cVar11) & 0xff1f;
      if (0x16 < (byte)uVar16) {
        uVar16 = (ushort)(byte)((char)(uVar16 >> 8) - 0x17) << 8;
      }
    }
    DAT_0b60 = DAT_0b60 + 1;
    DAT_0922 = (byte)(uVar16 >> 8);
    DAT_0923 = DAT_0922 & 0x1f;
  }
  DAT_08c4 = DAT_0085;
  DAT_088d = DAT_088d | 1;
  DAT_0085 = 1;
  sVar13 = DAT_0044;
  DAT_08c8 = sVar13 + 0x4b;
  if ((~DAT_0bfe & 0x80) != 0) {
    if (0x33 < DAT_0921) {
      DAT_0a2e = 0xffff;
    }
    if ((~DAT_0880 & 1) == 0) {
      if (((DAT_0880 & 2) != 0) && ((byte)(&DAT_0d68)[DAT_0c04] <= DAT_0a2e._0_1_)) {
        DAT_0884 = DAT_0884 | 4;
        DAT_0aff = 0;
        FUN_721f();
        if ((DAT_088d & 1) != 0) {
          DAT_088d = DAT_088d & 0xfe;
          FUN_f39d();
        }
        goto LAB_dc06;
      }
      if (DAT_0d74 <= DAT_0b5d) {
        DAT_0885 = DAT_0885 & 0xbf;
      }
    }
    else if ((DAT_0a2e._0_1_ < DAT_0d73) || (DAT_0d74 <= DAT_0b5d)) {
      DAT_0885 = DAT_0885 & 0xbf;
      DAT_0884 = DAT_0884 & 0xfb;
    }
    else {
      DAT_0885 = DAT_0885 | 0x40;
    }
    if (((((~DAT_0bf8 & 0x80) == 0) && ((DAT_0bf8 & 0x40) != 0)) &&
        ((byte)(&DAT_0d68)[DAT_0c04] <= DAT_0a2e._0_1_)) && ((~DAT_0bf8 & 0x20) == 0)) {
      DAT_0bf8 = DAT_0bf8 | 0x80;
      DAT_0bf9 = 0;
      FUN_721f();
      if ((DAT_088d & 1) != 0) {
        DAT_088d = DAT_088d & 0xfe;
        FUN_f39d();
      }
LAB_dc06:
      DAT_0b00 = 0;
      DAT_004e = 2;
      DAT_08be = DAT_08be & 0x1f;
      return;
    }
    DAT_0882 = DAT_0882 | 0x80;
  }
  DAT_0b00 = 0;
  if ((~DAT_0bfe & 0x80) != 0) {
    bVar10 = DAT_0bd2;
    if ((((((DAT_0d5e != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) &&
         ((((~DAT_0880 & 1) != 0 || ((DAT_0d75 <= DAT_0b6e && (DAT_0d77 <= DAT_0bce)))) &&
          (DAT_0d5e != -0x80)))) &&
        ((((~DAT_0880 & 0x80) == 0 && ((~DAT_0d08 & 1) == 0)) && ((~DAT_0884 & 2) == 0)))) &&
       ((((~DAT_0884 & 4) == 0 && ((~DAT_088c & 0x80) == 0)) &&
        (((~DAT_0885 & 0x40) == 0 && (((~DAT_0bf8 & 0x80) == 0 && ((~DAT_089b & 0x80) == 0)))))))) {
      if (((~DAT_088c & 2) != 0) || (((~DAT_089a & 2) != 0 || (DAT_0c04 != 8)))) goto LAB_de0b;
      if ((DAT_0a92 & 8) != 0) {
        bVar12 = DAT_004e;
        if ((bVar12 & 0x20) == 0) {
          DAT_0b50 = 0;
          DAT_0b46 = (DAT_0b46 + 1) - (0xfe < DAT_0b46);
          if ((DAT_0d78 <= DAT_0b46) && ((~DAT_08b1 & 0x80) == 0)) {
            DAT_08b1 = DAT_08b1 | 0x80;
            bVar10 = DAT_0bd2 | 0x20;
            if ((~DAT_08ba & 0x80) == 0) {
              DAT_08ba = DAT_08ba | 0x80;
              bVar10 = DAT_0bd2 | 0x22;
            }
          }
        }
        else {
          DAT_0b46 = 0;
          DAT_0b50 = (DAT_0b50 + 1) - (0xfe < DAT_0b50);
          if ((DAT_0d76 <= DAT_0b50) && ((DAT_08b1 & 0x80) != 0)) {
            DAT_08b1 = DAT_08b1 & 0x7f;
            bVar10 = DAT_0bd2 | 0x20;
          }
        }
      }
    }
    DAT_0bd2 = bVar10;
    DAT_004e = 0x20;
  }
LAB_de0b:
  if (((~DAT_0bfe & 0x80) != 0) && (DAT_0c04 == 10)) {
    DAT_0a92 = DAT_0a92 & 0x77;
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if (DAT_0a2e._0_1_ < DAT_0d79) {
      if (DAT_0a2e._0_1_ < DAT_0d7a) {
        DAT_0881 = DAT_0881 & 0xef;
      }
    }
    else {
      DAT_0881 = DAT_0881 | 0x10;
      DAT_0a1a = DAT_0d7b;
    }
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if (((DAT_0a2e._0_1_ < DAT_0d7d) || ((~DAT_0880 & 1) == 0)) && (DAT_0a2e._0_1_ < DAT_0d7c)) {
      if (DAT_0c04 == 0) {
        DAT_0880 = DAT_0880 & 0xbf;
      }
      if (DAT_0d7c <= DAT_0a2e._0_1_) goto LAB_de81;
      if (DAT_0c04 == 0) {
        DAT_0880 = DAT_0880 & 0xfb;
      }
    }
    else {
      DAT_0880 = DAT_0880 | 0x40;
LAB_de81:
      DAT_0880 = DAT_0880 | 4;
      DAT_0a86 = 0x80;
    }
    DAT_0881 = DAT_0881 & 0xdf;
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    FUN_ed29();
    FUN_ed6d();
  }
  if (((~DAT_0bfe & 0x80) != 0) && (DAT_0c04 == 0)) {
    DAT_0887 = DAT_0887 | 2;
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if (((DAT_0923 == 0) || (DAT_0923 == 6)) || ((DAT_0923 == 0xc || (DAT_0923 == 0x12)))) {
      DAT_0881 = DAT_0881 | 4;
      DAT_0887 = DAT_0887 | 1;
    }
    if (((DAT_0ca8 & 1) != 0) && (DAT_0923 == (byte)(DAT_0da6 + 4U))) {
      DAT_0881 = DAT_0881 | 2;
    }
    if ((DAT_088b & 0x80) == 0) {
      bVar10 = DAT_0d7e & 0x1f;
      if (0xb < bVar10) {
        bVar10 = bVar10 - 0xc;
      }
      if (DAT_0c04 == bVar10) {
        DAT_0a17 = DAT_0a17 & 0xf7;
        DAT_0a19 = DAT_0a19 & 0xf7;
        DAT_088b = DAT_088b | 0x40;
        DAT_0a22._0_1_ = DAT_0a26._0_1_;
        DAT_0a22._1_1_ = (undefined1)DAT_0a26;
        DAT_0a1c = DAT_0a1e;
      }
      bVar10 = DAT_0cab & 0x1f;
      if (0xb < bVar10) {
        bVar10 = bVar10 - 0xc;
      }
      if (DAT_0c04 == bVar10) {
        DAT_0a17 = DAT_0a17 & 0xfd;
        DAT_0a19 = DAT_0a19 & 0xfd;
        DAT_0a24._0_1_ = DAT_0a28._0_1_;
        DAT_0a24._1_1_ = (undefined1)DAT_0a28;
        DAT_0a1d = DAT_0a1f;
      }
    }
    else {
      if (DAT_0923 == (DAT_0d7e & 0x1f)) {
        DAT_0a17 = DAT_0a17 & 0xf7;
        DAT_0a19 = DAT_0a19 & 0xf7;
        DAT_088b = DAT_088b | 0x40;
        DAT_0a22._0_1_ = DAT_0a26._0_1_;
        DAT_0a22._1_1_ = (undefined1)DAT_0a26;
        DAT_0a1c = DAT_0a1e;
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0cab) & 0xff1f;
      if ((char)(uVar16 >> 8) == (char)uVar16) {
        DAT_0a17 = DAT_0a17 & 0xfd;
        DAT_0a19 = DAT_0a19 & 0xfd;
        DAT_0a24._0_1_ = DAT_0a28._0_1_;
        DAT_0a24._1_1_ = (undefined1)DAT_0a28;
        DAT_0a1d = DAT_0a1f;
      }
    }
    FUN_f49f();
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if ((~DAT_0ca8 & 1) == 0) {
      bVar10 = DAT_0d7e & 0x1f;
      if (bVar10 == 0xb) {
        bVar10 = 10;
      }
      else if (10 < bVar10) {
        bVar10 = bVar10 - 0xc;
      }
      if (DAT_0c04 == bVar10) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a20 = '\0';
        }
        else {
          DAT_0a20 = DAT_0c04 + (DAT_0a20 == '\0');
        }
      }
      bVar10 = DAT_0cab & 0x1f;
      if (bVar10 == 0xb) {
        bVar10 = 10;
      }
      else if (10 < bVar10) {
        bVar10 = bVar10 - 0xc;
      }
      if (DAT_0c04 == bVar10) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a21 = '\0';
        }
        else {
          DAT_0a21 = DAT_0c04 + (DAT_0a21 == '\0');
        }
      }
      bVar10 = DAT_0a1c & 0x1f;
      if (bVar10 == 0xb) {
        bVar10 = 10;
      }
      else if (10 < bVar10) {
        bVar10 = bVar10 - 0xc;
      }
      if ((DAT_0c04 == bVar10) && ((DAT_0a19 & 8) != 0)) {
        FUN_ec98();
      }
      bVar10 = DAT_0a1d & 0x1f;
      if (bVar10 == 0xb) {
        bVar10 = 10;
      }
      else if (10 < bVar10) {
        bVar10 = bVar10 - 0xc;
      }
      if ((DAT_0c04 == bVar10) && ((DAT_0a19 & 2) != 0)) {
        FUN_ed11();
      }
      bVar10 = DAT_0d7e & 0x1f;
      if (bVar10 == 0xb) {
        bVar10 = 10;
      }
      else if (10 < bVar10) {
        bVar10 = bVar10 - 0xc;
      }
      if (DAT_0c04 == bVar10) {
        DAT_0881 = DAT_0881 & 0x7f;
      }
      bVar10 = DAT_0cab & 0x1f;
      if (bVar10 == 0xb) {
        bVar10 = 10;
      }
      else if (10 < bVar10) {
        bVar10 = bVar10 - 0xc;
      }
      if (DAT_0c04 == bVar10) {
        DAT_0881 = DAT_0881 & 0xbf;
      }
    }
    else {
      if (DAT_0923 == (DAT_0d7e & 0x1f)) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a20 = '\0';
        }
        else {
          DAT_0a20 = DAT_0923 + (DAT_0a20 == '\0');
        }
      }
      if (DAT_0923 == (DAT_0cab & 0x1f)) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a21 = '\0';
        }
        else {
          DAT_0a21 = DAT_0923 + (DAT_0a21 == '\0');
        }
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0a1c) & 0xff1f;
      if (((char)(uVar16 >> 8) == (char)uVar16) && ((DAT_0a19 & 8) != 0)) {
        FUN_ec98();
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0a1d) & 0xff1f;
      if (((char)(uVar16 >> 8) == (char)uVar16) && ((DAT_0a19 & 2) != 0)) {
        FUN_ed11();
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0d7e) & 0xff1f;
      cVar11 = (char)(uVar16 >> 8);
      if (cVar11 == (char)uVar16) {
        DAT_0881 = DAT_0881 & 0x7f;
      }
      uVar16 = CONCAT11(cVar11,DAT_0cab) & 0xff1f;
      if ((char)(uVar16 >> 8) == (char)uVar16) {
        DAT_0881 = DAT_0881 & 0xbf;
      }
    }
  }
  sVar13 = DAT_0ac2;
  if (((~DAT_0bfe & 0x80) != 0) && (((DAT_0922 & 0x1f) == 0 || ((DAT_0922 & 0x1f) == 0xc)))) {
    DAT_0ac4 = DAT_0ac2;
    DAT_0ac2 = DAT_0ab0;
    uVar16 = DAT_0ab0 - sVar13;
    if ((~DAT_0abf & 4) == 0) {
      uVar16 = 0;
    }
    if ((char)(uVar16 >> 8) != '\0') {
      uVar16 = 0xff;
    }
    DAT_0ac0 = (undefined1)uVar16;
    sVar13 = (uVar16 & 0xff) * (ushort)DAT_0d7f;
    bVar10 = (byte)sVar13;
    iVar6 = (uint)DAT_0d80 *
            (uint)CONCAT11((char)((ushort)sVar13 >> 8) - (bVar10 < DAT_0ac8),bVar10 - DAT_0ac8);
    uVar14 = (undefined2)iVar6;
    if ((short)((uint)iVar6 >> 0x10) != 0) {
      uVar14 = 0xffff;
    }
    bVar10 = (byte)((ushort)uVar14 >> 8);
    bVar12 = (byte)uVar14;
    if ((DAT_0abf & 1) == 0) {
      uVar14 = CONCAT11(bVar10 + CARRY1(bVar12,(byte)DAT_0ac6),bVar12 + (byte)DAT_0ac6);
      if (CARRY1(bVar10,CARRY1(bVar12,(byte)DAT_0ac6))) {
        uVar14 = 0xffff;
      }
    }
    else {
      uVar14 = CONCAT11(bVar10 - (bVar12 < (byte)DAT_0ac6),bVar12 - (byte)DAT_0ac6);
    }
    DAT_0ac6._0_1_ = (byte)((ushort)uVar14 >> 8);
    bVar10 = DAT_0ac8 + DAT_0ac6._0_1_;
    if (CARRY1(DAT_0ac8,DAT_0ac6._0_1_)) {
      bVar10 = 0xff;
    }
    if (bVar10 < DAT_0acc) {
      sVar13 = (ushort)(byte)-(bVar10 - DAT_0acc) * (ushort)DAT_0d80;
      bVar12 = (byte)((ushort)sVar13 >> 8);
      bVar17 = (byte)sVar13;
      if ((DAT_0abf & 2) == 0) {
        DAT_0aca = CONCAT11(bVar12 - (bVar17 < (byte)DAT_0aca),bVar17 - (byte)DAT_0aca);
      }
      else {
        bVar1 = CARRY1(bVar17,(byte)DAT_0aca);
        DAT_0aca = CONCAT11(bVar12 + bVar1,bVar17 + (byte)DAT_0aca);
        if (CARRY1(bVar12,bVar1)) {
          DAT_0aca = 0xffff;
        }
      }
      DAT_0abf = DAT_0abf & 0xfe | 6;
    }
    else {
      sVar13 = (ushort)(byte)(bVar10 - DAT_0acc) * (ushort)DAT_0d80;
      bVar12 = (byte)((ushort)sVar13 >> 8);
      bVar17 = (byte)sVar13;
      if ((DAT_0abf & 2) == 0) {
        bVar1 = CARRY1(bVar17,(byte)DAT_0aca);
        DAT_0aca = CONCAT11(bVar12 + bVar1,bVar17 + (byte)DAT_0aca);
        if (CARRY1(bVar12,bVar1)) {
          DAT_0aca = 0xffff;
        }
      }
      else {
        DAT_0aca = CONCAT11(bVar12 - (bVar17 < (byte)DAT_0aca),bVar17 - (byte)DAT_0aca);
      }
      DAT_0abf = DAT_0abf & 0xfc | 4;
    }
    if ((DAT_0abf & 2) == 0) {
      bVar12 = DAT_0acc + DAT_0aca._0_1_;
      if (CARRY1(DAT_0acc,DAT_0aca._0_1_)) {
        bVar12 = 0xff;
      }
    }
    else {
      bVar12 = DAT_0acc - DAT_0aca._0_1_;
      if (DAT_0acc < DAT_0aca._0_1_) {
        bVar12 = 0;
      }
    }
    if (DAT_0d87 == '\t') {
      if (bVar12 < DAT_0d81) {
        puVar15 = (undefined *)0x100;
      }
      else if (bVar12 < DAT_0d82) {
        puVar15 = &UNK_0201;
      }
      else if (bVar12 < DAT_0d83) {
        puVar15 = &UNK_0402;
      }
      else if (bVar12 < DAT_0d84) {
        puVar15 = (undefined *)0x803;
      }
      else {
        if (DAT_0d85 <= bVar12) goto LAB_e28e;
        puVar15 = (undefined *)0x1004;
      }
    }
    else {
LAB_e28e:
      puVar15 = &UNK_2005;
    }
    DAT_0bcb = (undefined1)((ushort)puVar15 >> 8);
    DAT_0bca = (char)puVar15;
    if ((((DAT_0d61 != -0x80) && (DAT_0d87 == '\t')) && ((~DAT_08a0 & 4) == 0)) &&
       ((~DAT_08b2 & 0x80) == 0)) {
      if (((DAT_0896._0_1_ & 0x10) == 0) || ((~DAT_0881 & 0x10) != 0)) {
        DAT_0bcc = 0;
        DAT_0bcd = 0;
      }
      else if (DAT_0bca == '\0') {
        if ((DAT_08b6 & 2) != 0) {
          if (DAT_0bcc <= DAT_0d88) goto LAB_e34d;
          bVar17 = DAT_0bd2;
          if ((~DAT_08b1 & 8) == 0) {
            DAT_08b1 = DAT_08b1 | 8;
            bVar17 = DAT_0bd2 | 0x20;
            if ((~DAT_08ba & 8) == 0) {
              DAT_08ba = DAT_08ba | 8;
              bVar17 = DAT_0bd2 | 0x22;
            }
          }
          DAT_0bd2 = bVar17;
          DAT_0889 = DAT_0889 & 0xfd;
          DAT_0b92 = 0;
        }
        DAT_08b6 = DAT_08b6 | 2;
      }
      else if ((DAT_08b6 & 2) == 0) {
        if ((DAT_0d8a < DAT_0bcd) && ((DAT_08b1 & 8) != 0)) {
          DAT_08b1 = DAT_08b1 & 0xf7;
          DAT_0bd2 = DAT_0bd2 | 0x20;
          if (((~DAT_08af & 8) == 0) && ((~DAT_08af & 4) == 0)) {
            DAT_0889 = DAT_0889 | 2;
            DAT_0b94 = 0;
            DAT_0b92 = DAT_0a83;
            DAT_0b95 = DAT_0a83;
          }
        }
      }
      else {
        DAT_08b6 = DAT_08b6 & 0xfd;
      }
    }
LAB_e34d:
    DAT_0898 = DAT_0bca;
    DAT_0899 = DAT_0bcb;
    DAT_0ac6 = uVar14;
    DAT_0ac8 = bVar10;
    DAT_0acc = bVar12;
    if ((DAT_08b1 & 8) != 0) {
      DAT_0898 = '\x05';
      DAT_0899 = 0x20;
    }
  }
  do {
    bVar10 = DAT_008b;
    if ((~bVar10 & 2) != 0) {
      DAT_08cc = (undefined *)DAT_0092;
      DAT_088d = DAT_088d & 0xfd;
      goto LAB_e37e;
    }
    sVar13 = DAT_0044;
  } while (sVar13 - DAT_08c8 < 0);
  DAT_088d = DAT_088d | 2;
LAB_e37e:
  DAT_088d = DAT_088d & 0xfe;
  FUN_f39d();
  uVar16 = DAT_0c9a;
  if ((~DAT_088d & 2) == 0) {
    DAT_0c40 = DAT_08cc;
    DAT_08c2 = 0x40;
    DAT_08c3 = 0;
  }
  bVar10 = DAT_0bd2;
  if (((DAT_0d53 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    bVar12 = (byte)((ushort)DAT_0c40 >> 8);
    if ((bVar12 < 0x1a) || (0xf5 < bVar12)) {
      if ((DAT_08b5 & 0x40) == 0) {
        DAT_08b5 = DAT_08b5 | 0x40;
        DAT_0bab = DAT_0bab | 0x20;
      }
      else if ((DAT_0d89 < DAT_0b3e) && ((~DAT_08af & 0x20) == 0)) {
        DAT_08af = DAT_08af | 0x20;
        bVar10 = DAT_0bd2 | 0x80;
        if ((~DAT_08b8 & 0x20) == 0) {
          DAT_08b8 = DAT_08b8 | 0x20;
          bVar10 = DAT_0bd2 | 0x88;
        }
      }
    }
    else if ((DAT_08b5 & 0x40) == 0) {
      if (DAT_0d8a < DAT_0b4b) {
        if ((DAT_08af & 0x20) != 0) {
          DAT_08af = DAT_08af & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x80;
        }
        DAT_0bab = DAT_0bab & 0xdf;
        bVar10 = DAT_0bd2;
      }
    }
    else {
      DAT_08b5 = DAT_08b5 & 0xbf;
    }
  }
  DAT_0bd2 = bVar10;
  if (DAT_0d8b == -0x80) {
    if (DAT_0c04 == 1) {
      DAT_0c9a = DAT_0c44;
      goto LAB_e461;
    }
  }
  else if (DAT_0c04 == 0) {
    DAT_0c9a = DAT_0c42;
LAB_e461:
    DAT_0c9c = uVar16;
    if (((~DAT_08af & 0x20) == 0) && ((DAT_08af & 0x10) == 0)) {
      if ((~DAT_0ca8 & 1) == 0) {
        DAT_0c8a = DAT_0c88;
        DAT_0c94 = DAT_0c88;
      }
      else if (DAT_0d8d == '\x01') {
LAB_e491:
        DAT_0c8a = (undefined *)((ushort)DAT_0d94 * 2 + 0xc58);
        DAT_0c94 = DAT_0c8a;
      }
      else if (DAT_0d8d == '\x02') {
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = uVar16 + (short)((uint)DAT_0d8e * (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8);
        iVar6 = (uint)DAT_0d8f * (uint)uVar16;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar5;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar5),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 2,
                             (char)(CONCAT11((char)(RAM0x0c9f % 2),(undefined1)DAT_0ca0) / 2));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else if (DAT_0d8d == '\x03') {
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar16 = uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                         uVar16 + (short)((uint)DAT_0d8e * (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8
                                         );
        iVar6 = (uint)DAT_0d90 * (uint)uVar5;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 3,
                             (char)(CONCAT11((char)(RAM0x0c9f % 3),(undefined1)DAT_0ca0) / 3));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else if (DAT_0d8d == '\x04') {
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar2 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar16 = uVar2 + (short)((uint)DAT_0d90 * (uint)uVar5 >> 8) +
                         uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                                 uVar16 + (short)((uint)DAT_0d8e *
                                                  (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8);
        iVar6 = (uint)DAT_0d91 * (uint)uVar2;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 4,
                             (char)(CONCAT11((char)(RAM0x0c9f % 4),(undefined1)DAT_0ca0) / 4));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else if (DAT_0d8d == '\x05') {
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar2 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d98 * 2 + 0xc58;
        uVar16 = uVar3 + (short)((uint)DAT_0d91 * (uint)uVar2 >> 8) +
                         uVar2 + (short)((uint)DAT_0d90 * (uint)uVar5 >> 8) +
                                 uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                                         uVar16 + (short)((uint)DAT_0d8e *
                                                          (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8)
        ;
        iVar6 = (uint)DAT_0d92 * (uint)uVar3;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 5,
                             (char)(CONCAT11((char)(RAM0x0c9f % 5),(undefined1)DAT_0ca0) / 5));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else {
        if (DAT_0d8d != '\x06') goto LAB_e491;
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar2 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d98 * 2 + 0xc58;
        uVar4 = (ushort)DAT_0d99 * 2 + 0xc58;
        uVar16 = uVar4 + (short)((uint)DAT_0d92 * (uint)uVar3 >> 8) +
                         uVar3 + (short)((uint)DAT_0d91 * (uint)uVar2 >> 8) +
                                 uVar2 + (short)((uint)DAT_0d90 * (uint)uVar5 >> 8) +
                                         uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                                                 uVar16 + (short)((uint)DAT_0d8e *
                                                                  (uint)((ushort)DAT_0d94 * 2 +
                                                                        0xc58) >> 8);
        iVar6 = (uint)DAT_0d93 * (uint)uVar4;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 6,
                             (char)(CONCAT11((char)(RAM0x0c9f % 6),(undefined1)DAT_0ca0) / 6));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
    }
    else {
      DAT_0c8a = DAT_0da8;
    }
    FUN_f3b7();
    puVar15 = DAT_0c8a + -0x1eb7;
    if (DAT_0c8a < &UNK_1eb7) {
      iVar6 = (uint)CONCAT11((~(byte)((ushort)puVar15 >> 8) + 1) - ((char)-(char)puVar15 != '\0'),
                             -(char)puVar15) * (uint)extraout_A * 2;
      uVar16 = (ushort)iVar6;
      bVar10 = (byte)((uint)iVar6 >> 0x18);
      cVar11 = bVar10 + (0xff7f < uVar16);
      if (CONCAT11(bVar10 + CARRY1(bVar10,0xff7f < uVar16),cVar11) < 0x100) {
        _DAT_0e04 = CONCAT12(cVar11,uVar16 + 0x80);
        DAT_0c8c = &UNK_1eb7 + -(short)DAT_0e04;
        if (DAT_0e04 < &UNK_1eb8) goto LAB_ea7c;
      }
      DAT_0c8c = (undefined *)0x0;
    }
    else {
      iVar6 = ZEXT24(puVar15) * (uint)extraout_A * 2;
      uVar16 = (ushort)iVar6;
      bVar10 = (byte)((uint)iVar6 >> 0x18);
      cVar11 = bVar10 + (0xff7f < uVar16);
      if (CONCAT11(bVar10 + CARRY1(bVar10,0xff7f < uVar16),cVar11) < 0x100) {
        _DAT_0e04 = CONCAT12(cVar11,uVar16 + 0x80);
        DAT_0c8c = &UNK_1eb7 + (short)DAT_0e04;
        if (DAT_0e04 < 0xe149) goto LAB_ea7c;
      }
      DAT_0c8c = (undefined *)0xffff;
    }
LAB_ea7c:
    DAT_0c93 = extraout_A;
    if ((~DAT_0ca8 & 1) == 0) {
      if ((((DAT_0ca8 & 2) == 0) || (DAT_0c9c <= DAT_0c9a)) || (DAT_0c9c - DAT_0c9a < DAT_0dac)) {
        if ((((~DAT_0ca8 & 2) != 0) || (DAT_0c9a <= DAT_0c9c)) || (DAT_0c9a - DAT_0c9c < DAT_0dac))
        {
          DAT_0ca9 = 0;
          goto LAB_ead9;
        }
        DAT_0ca8 = DAT_0ca8 | 2;
        DAT_0922 = DAT_0c03 + 0xc;
      }
      else {
        DAT_0ca8 = DAT_0ca8 & 0xfd;
        DAT_0922 = DAT_0c03;
      }
      DAT_0ca9 = (DAT_0ca9 + 1) - (0xfe < DAT_0ca9);
      if (DAT_0d9a <= DAT_0ca9) {
        DAT_0ca8 = DAT_0ca8 | 1;
      }
    }
  }
LAB_ead9:
  if ((((DAT_0bfe & 0x80) != 0) && (DAT_0c9a < DAT_0c9c)) && (DAT_0c04 == DAT_0d8c)) {
    DAT_0c88 = DAT_0c40;
  }
  if ((((~DAT_0889 & 4) == 0) && ((~DAT_0885 & 0x80) == 0)) && ((DAT_0889 & 0x10) != 0)) {
    DAT_0889 = DAT_0889 | 0xc;
  }
  uVar16 = (ushort)DAT_0a53 * 2 + 0xa54;
  DAT_0a52 = (DAT_0a52 + 1) - (0xfe < DAT_0a52);
  if (DAT_0a52 < 0x18) {
    uVar9 = _DAT_0a4f;
    if (1 < DAT_0a52) {
      _DAT_0df7 = CONCAT21(RAM0x0a50,DAT_0df9);
      _DAT_0df6 = CONCAT13(DAT_0a4f._0_1_,_DAT_0df7);
      goto LAB_eb49;
    }
  }
  else {
    _DAT_0df7 = CONCAT21(RAM0x0a50 - uVar16,DAT_0df9);
    _DAT_0df6 = CONCAT13(DAT_0a4f._0_1_ - (RAM0x0a50 < uVar16),_DAT_0df7);
LAB_eb49:
    uVar16 = DAT_0c08;
    if (DAT_0c07 != 0) {
      uVar16 = 0xffff;
    }
    sVar13 = DAT_0df7 + uVar16;
    bVar1 = CARRY2(DAT_0df7,uVar16);
    _DAT_0df7 = CONCAT21(sVar13,DAT_0df9);
    cVar11 = DAT_0df6 + bVar1;
    _DAT_0a4f = CONCAT12(cVar11,sVar13);
    uVar9 = _DAT_0a4f;
    _DAT_0df6 = CONCAT13(cVar11,_DAT_0df7);
    if (DAT_0a52 < 0x17) {
      bVar10 = DAT_0a52 - 1;
      RAM0x0df8 = (ushort)bVar10;
      DAT_0a51 = (undefined1)sVar13;
      RAM0x0df8 = CONCAT11((char)(CONCAT11((char)(DAT_0a4f % (ushort)bVar10),DAT_0a51) / RAM0x0df8),
                           bVar10);
      _DAT_0df6 = CONCAT22(DAT_0a4f / bVar10,RAM0x0df8);
      iVar6 = (_DAT_0df6 >> 8 & 0xffff) * 0x16;
      _DAT_0df7 = CONCAT21((short)iVar6,bVar10);
      _DAT_0df6 = CONCAT13((char)((uint)iVar6 >> 0x10),_DAT_0df7);
    }
    DAT_0a4b._0_1_ = DAT_0df6;
    RAM0x0a4c = DAT_0df7;
    DAT_0a53 = DAT_0a53 + 1;
    if (0x15 < DAT_0a53) {
      DAT_0a53 = 0;
    }
  }
  _DAT_0a4f = uVar9;
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    if (DAT_0a2e._0_1_ < DAT_0dd8) {
      if (((DAT_0a2e._0_1_ < DAT_0dd7) && (DAT_0d0a < DAT_0dd6)) && ((~DAT_0d08 & 8) == 0)) {
        DAT_0afc = 0;
        DAT_0d08 = DAT_0d08 & 0xfe | 8;
      }
    }
    else {
      DAT_0d08 = DAT_0d08 | 1;
    }
  }
  if (DAT_0d87 != '\t') {
    if (DAT_0c04 != 0) goto LAB_ec8f;
    if ((((~DAT_0ada & 0x10) != 0) || ((DAT_0ada & 4) != 0)) &&
       (DAT_0ae1 = (DAT_0ae1 + 1) - (0xfe < DAT_0ae1), DAT_0ddb <= DAT_0ae1)) {
      DAT_0ae1 = 0;
      if ((DAT_0ada & 0x10) == 0) {
        uVar16 = DAT_0ad6 - DAT_0db8;
        if (DAT_0ad6 < DAT_0db8) {
          uVar16 = 0;
        }
        bVar1 = DAT_0ad9 < DAT_0dda;
        DAT_0ad6 = uVar16;
        DAT_0ad9 = DAT_0ad9 - DAT_0dda;
        if (bVar1) {
          DAT_0ad9 = 0;
        }
      }
      else {
        uVar16 = DAT_0ad6 + DAT_0db8;
        if ((CARRY2(DAT_0ad6,DAT_0db8)) || (0x200 < uVar16)) {
          uVar16 = 0x200;
        }
        bVar10 = DAT_0ad9 + DAT_0dda;
        DAT_0ad6 = uVar16;
        if ((CARRY1(DAT_0ad9,DAT_0dda)) || (DAT_0ad9 = bVar10, DAT_0ddc < bVar10)) {
          DAT_0ad9 = DAT_0ddc;
        }
      }
    }
    if ((DAT_0ada & 0x20) != 0) {
      DAT_0ad4 = DAT_0ad6;
      DAT_0ad8 = DAT_0ad9;
      goto LAB_ec8f;
    }
  }
  DAT_0ad4 = 0;
  DAT_0ad8 = 0;
LAB_ec8f:
  DAT_08be = DAT_08be & 0x5f;
  return;
}


/* Entry dc39 */

/* WARNING: Removing unreachable block (RAM,0xe1fa) */
/* WARNING: Removing unreachable block (RAM,0xe140) */
/* WARNING: Removing unreachable block (RAM,0xe150) */
/* WARNING: Removing unreachable block (RAM,0xe153) */
/* WARNING: Removing unreachable block (RAM,0xe164) */
/* WARNING: Removing unreachable block (RAM,0xe158) */
/* WARNING: Removing unreachable block (RAM,0xe15f) */
/* WARNING: Removing unreachable block (RAM,0xe16b) */
/* WARNING: Removing unreachable block (RAM,0xe199) */
/* WARNING: Removing unreachable block (RAM,0xe171) */
/* WARNING: Removing unreachable block (RAM,0xe179) */
/* WARNING: Removing unreachable block (RAM,0xe217) */
/* WARNING: Removing unreachable block (RAM,0xe1bc) */
/* WARNING: Removing unreachable block (RAM,0xe1c1) */
/* WARNING: Removing unreachable block (RAM,0xe611) */
/* WARNING: Removing unreachable block (RAM,0xe87d) */
/* WARNING: Removing unreachable block (RAM,0xe729) */
/* WARNING: Removing unreachable block (RAM,0xe535) */
/* WARNING: Removing unreachable block (RAM,0xea0d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_unreferenced_dc39(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint3 uVar7;
  uint uVar8;
  undefined3 uVar9;
  char cVar10;
  byte bVar11;
  byte extraout_A;
  byte bVar12;
  short sVar13;
  undefined2 uVar14;
  byte bVar17;
  undefined *puVar15;
  ushort uVar16;
  
  DAT_0b60 = 0;
  if (0xbf < DAT_0922) {
    DAT_0880 = DAT_0880 | 0x80;
    DAT_088c = DAT_088c | 0x30;
  }
  DAT_0922 = 0;
  DAT_0923 = 0;
  DAT_08c4 = DAT_0085;
  DAT_088d = DAT_088d | 1;
  DAT_0085 = 1;
  sVar13 = DAT_0044;
  DAT_08c8 = sVar13 + 0x4b;
  if ((~DAT_0bfe & 0x80) != 0) {
    if (0x33 < DAT_0921) {
      DAT_0a2e = 0xffff;
    }
    if ((~DAT_0880 & 1) == 0) {
      if (((DAT_0880 & 2) != 0) && ((byte)(&DAT_0d68)[DAT_0c04] <= DAT_0a2e._0_1_)) {
        DAT_0884 = DAT_0884 | 4;
        DAT_0aff = 0;
        FUN_721f();
        if ((DAT_088d & 1) != 0) {
          DAT_088d = DAT_088d & 0xfe;
          FUN_f39d();
        }
        goto LAB_dc06;
      }
      if (DAT_0d74 <= DAT_0b5d) {
        DAT_0885 = DAT_0885 & 0xbf;
      }
    }
    else if ((DAT_0a2e._0_1_ < DAT_0d73) || (DAT_0d74 <= DAT_0b5d)) {
      DAT_0885 = DAT_0885 & 0xbf;
      DAT_0884 = DAT_0884 & 0xfb;
    }
    else {
      DAT_0885 = DAT_0885 | 0x40;
    }
    if (((((~DAT_0bf8 & 0x80) == 0) && ((DAT_0bf8 & 0x40) != 0)) &&
        ((byte)(&DAT_0d68)[DAT_0c04] <= DAT_0a2e._0_1_)) && ((~DAT_0bf8 & 0x20) == 0)) {
      DAT_0bf8 = DAT_0bf8 | 0x80;
      DAT_0bf9 = 0;
      FUN_721f();
      if ((DAT_088d & 1) != 0) {
        DAT_088d = DAT_088d & 0xfe;
        FUN_f39d();
      }
LAB_dc06:
      DAT_0b00 = 0;
      DAT_004e = 2;
      DAT_08be = DAT_08be & 0x1f;
      return;
    }
    DAT_0882 = DAT_0882 | 0x80;
  }
  DAT_0b00 = 0;
  if ((~DAT_0bfe & 0x80) != 0) {
    bVar12 = DAT_0bd2;
    if (((((DAT_0d5e != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) &&
        ((((~DAT_0880 & 1) != 0 || ((DAT_0d75 <= DAT_0b6e && (DAT_0d77 <= DAT_0bce)))) &&
         (DAT_0d5e != -0x80)))) &&
       ((((((~DAT_0880 & 0x80) == 0 && ((~DAT_0d08 & 1) == 0)) && ((~DAT_0884 & 2) == 0)) &&
         (((~DAT_0884 & 4) == 0 && ((~DAT_088c & 0x80) == 0)))) &&
        (((~DAT_0885 & 0x40) == 0 && (((~DAT_0bf8 & 0x80) == 0 && ((~DAT_089b & 0x80) == 0)))))))) {
      if (((~DAT_088c & 2) != 0) || (((~DAT_089a & 2) != 0 || (DAT_0c04 != 8)))) goto LAB_de0b;
      if ((DAT_0a92 & 8) != 0) {
        bVar11 = DAT_004e;
        if ((bVar11 & 0x20) == 0) {
          DAT_0b50 = 0;
          DAT_0b46 = (DAT_0b46 + 1) - (0xfe < DAT_0b46);
          if ((DAT_0d78 <= DAT_0b46) && ((~DAT_08b1 & 0x80) == 0)) {
            DAT_08b1 = DAT_08b1 | 0x80;
            bVar12 = DAT_0bd2 | 0x20;
            if ((~DAT_08ba & 0x80) == 0) {
              DAT_08ba = DAT_08ba | 0x80;
              bVar12 = DAT_0bd2 | 0x22;
            }
          }
        }
        else {
          DAT_0b46 = 0;
          DAT_0b50 = (DAT_0b50 + 1) - (0xfe < DAT_0b50);
          if ((DAT_0d76 <= DAT_0b50) && ((DAT_08b1 & 0x80) != 0)) {
            DAT_08b1 = DAT_08b1 & 0x7f;
            bVar12 = DAT_0bd2 | 0x20;
          }
        }
      }
    }
    DAT_0bd2 = bVar12;
    DAT_004e = 0x20;
  }
LAB_de0b:
  if (((~DAT_0bfe & 0x80) != 0) && (DAT_0c04 == 10)) {
    DAT_0a92 = DAT_0a92 & 0x77;
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if (DAT_0a2e._0_1_ < DAT_0d79) {
      if (DAT_0a2e._0_1_ < DAT_0d7a) {
        DAT_0881 = DAT_0881 & 0xef;
      }
    }
    else {
      DAT_0881 = DAT_0881 | 0x10;
      DAT_0a1a = DAT_0d7b;
    }
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if (((DAT_0a2e._0_1_ < DAT_0d7d) || ((~DAT_0880 & 1) == 0)) && (DAT_0a2e._0_1_ < DAT_0d7c)) {
      if (DAT_0c04 == 0) {
        DAT_0880 = DAT_0880 & 0xbf;
      }
      if (DAT_0d7c <= DAT_0a2e._0_1_) goto LAB_de81;
      if (DAT_0c04 == 0) {
        DAT_0880 = DAT_0880 & 0xfb;
      }
    }
    else {
      DAT_0880 = DAT_0880 | 0x40;
LAB_de81:
      DAT_0880 = DAT_0880 | 4;
      DAT_0a86 = 0x80;
    }
    DAT_0881 = DAT_0881 & 0xdf;
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    FUN_ed29();
    FUN_ed6d();
  }
  if (((~DAT_0bfe & 0x80) != 0) && (DAT_0c04 == 0)) {
    DAT_0887 = DAT_0887 | 2;
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if (((DAT_0923 == 0) || (DAT_0923 == 6)) || ((DAT_0923 == 0xc || (DAT_0923 == 0x12)))) {
      DAT_0881 = DAT_0881 | 4;
      DAT_0887 = DAT_0887 | 1;
    }
    if (((DAT_0ca8 & 1) != 0) && (DAT_0923 == (byte)(DAT_0da6 + 4U))) {
      DAT_0881 = DAT_0881 | 2;
    }
    if ((DAT_088b & 0x80) == 0) {
      bVar12 = DAT_0d7e & 0x1f;
      if (0xb < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        DAT_0a17 = DAT_0a17 & 0xf7;
        DAT_0a19 = DAT_0a19 & 0xf7;
        DAT_088b = DAT_088b | 0x40;
        DAT_0a22._0_1_ = DAT_0a26._0_1_;
        DAT_0a22._1_1_ = (undefined1)DAT_0a26;
        DAT_0a1c = DAT_0a1e;
      }
      bVar12 = DAT_0cab & 0x1f;
      if (0xb < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        DAT_0a17 = DAT_0a17 & 0xfd;
        DAT_0a19 = DAT_0a19 & 0xfd;
        DAT_0a24._0_1_ = DAT_0a28._0_1_;
        DAT_0a24._1_1_ = (undefined1)DAT_0a28;
        DAT_0a1d = DAT_0a1f;
      }
    }
    else {
      if (DAT_0923 == (DAT_0d7e & 0x1f)) {
        DAT_0a17 = DAT_0a17 & 0xf7;
        DAT_0a19 = DAT_0a19 & 0xf7;
        DAT_088b = DAT_088b | 0x40;
        DAT_0a22._0_1_ = DAT_0a26._0_1_;
        DAT_0a22._1_1_ = (undefined1)DAT_0a26;
        DAT_0a1c = DAT_0a1e;
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0cab) & 0xff1f;
      if ((char)(uVar16 >> 8) == (char)uVar16) {
        DAT_0a17 = DAT_0a17 & 0xfd;
        DAT_0a19 = DAT_0a19 & 0xfd;
        DAT_0a24._0_1_ = DAT_0a28._0_1_;
        DAT_0a24._1_1_ = (undefined1)DAT_0a28;
        DAT_0a1d = DAT_0a1f;
      }
    }
    FUN_f49f();
  }
  if ((~DAT_0bfe & 0x80) != 0) {
    if ((~DAT_0ca8 & 1) == 0) {
      bVar12 = DAT_0d7e & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a20 = '\0';
        }
        else {
          DAT_0a20 = DAT_0c04 + (DAT_0a20 == '\0');
        }
      }
      bVar12 = DAT_0cab & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a21 = '\0';
        }
        else {
          DAT_0a21 = DAT_0c04 + (DAT_0a21 == '\0');
        }
      }
      bVar12 = DAT_0a1c & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if ((DAT_0c04 == bVar12) && ((DAT_0a19 & 8) != 0)) {
        FUN_ec98();
      }
      bVar12 = DAT_0a1d & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if ((DAT_0c04 == bVar12) && ((DAT_0a19 & 2) != 0)) {
        FUN_ed11();
      }
      bVar12 = DAT_0d7e & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        DAT_0881 = DAT_0881 & 0x7f;
      }
      bVar12 = DAT_0cab & 0x1f;
      if (bVar12 == 0xb) {
        bVar12 = 10;
      }
      else if (10 < bVar12) {
        bVar12 = bVar12 - 0xc;
      }
      if (DAT_0c04 == bVar12) {
        DAT_0881 = DAT_0881 & 0xbf;
      }
    }
    else {
      if (DAT_0923 == (DAT_0d7e & 0x1f)) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a20 = '\0';
        }
        else {
          DAT_0a20 = DAT_0923 + (DAT_0a20 == '\0');
        }
      }
      if (DAT_0923 == (DAT_0cab & 0x1f)) {
        if ((~DAT_088b & 0x80) == 0) {
          DAT_0a21 = '\0';
        }
        else {
          DAT_0a21 = DAT_0923 + (DAT_0a21 == '\0');
        }
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0a1c) & 0xff1f;
      if (((char)(uVar16 >> 8) == (char)uVar16) && ((DAT_0a19 & 8) != 0)) {
        FUN_ec98();
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0a1d) & 0xff1f;
      if (((char)(uVar16 >> 8) == (char)uVar16) && ((DAT_0a19 & 2) != 0)) {
        FUN_ed11();
      }
      uVar16 = CONCAT11(DAT_0923,DAT_0d7e) & 0xff1f;
      cVar10 = (char)(uVar16 >> 8);
      if (cVar10 == (char)uVar16) {
        DAT_0881 = DAT_0881 & 0x7f;
      }
      uVar16 = CONCAT11(cVar10,DAT_0cab) & 0xff1f;
      if ((char)(uVar16 >> 8) == (char)uVar16) {
        DAT_0881 = DAT_0881 & 0xbf;
      }
    }
  }
  sVar13 = DAT_0ac2;
  if (((~DAT_0bfe & 0x80) != 0) && (((DAT_0922 & 0x1f) == 0 || ((DAT_0922 & 0x1f) == 0xc)))) {
    DAT_0ac4 = DAT_0ac2;
    DAT_0ac2 = DAT_0ab0;
    uVar16 = DAT_0ab0 - sVar13;
    if ((~DAT_0abf & 4) == 0) {
      uVar16 = 0;
    }
    if ((char)(uVar16 >> 8) != '\0') {
      uVar16 = 0xff;
    }
    DAT_0ac0 = (undefined1)uVar16;
    sVar13 = (uVar16 & 0xff) * (ushort)DAT_0d7f;
    bVar12 = (byte)sVar13;
    iVar6 = (uint)DAT_0d80 *
            (uint)CONCAT11((char)((ushort)sVar13 >> 8) - (bVar12 < DAT_0ac8),bVar12 - DAT_0ac8);
    uVar14 = (undefined2)iVar6;
    if ((short)((uint)iVar6 >> 0x10) != 0) {
      uVar14 = 0xffff;
    }
    bVar12 = (byte)((ushort)uVar14 >> 8);
    bVar11 = (byte)uVar14;
    if ((DAT_0abf & 1) == 0) {
      uVar14 = CONCAT11(bVar12 + CARRY1(bVar11,(byte)DAT_0ac6),bVar11 + (byte)DAT_0ac6);
      if (CARRY1(bVar12,CARRY1(bVar11,(byte)DAT_0ac6))) {
        uVar14 = 0xffff;
      }
    }
    else {
      uVar14 = CONCAT11(bVar12 - (bVar11 < (byte)DAT_0ac6),bVar11 - (byte)DAT_0ac6);
    }
    DAT_0ac6._0_1_ = (byte)((ushort)uVar14 >> 8);
    bVar12 = DAT_0ac8 + DAT_0ac6._0_1_;
    if (CARRY1(DAT_0ac8,DAT_0ac6._0_1_)) {
      bVar12 = 0xff;
    }
    if (bVar12 < DAT_0acc) {
      sVar13 = (ushort)(byte)-(bVar12 - DAT_0acc) * (ushort)DAT_0d80;
      bVar11 = (byte)((ushort)sVar13 >> 8);
      bVar17 = (byte)sVar13;
      if ((DAT_0abf & 2) == 0) {
        DAT_0aca = CONCAT11(bVar11 - (bVar17 < (byte)DAT_0aca),bVar17 - (byte)DAT_0aca);
      }
      else {
        bVar1 = CARRY1(bVar17,(byte)DAT_0aca);
        DAT_0aca = CONCAT11(bVar11 + bVar1,bVar17 + (byte)DAT_0aca);
        if (CARRY1(bVar11,bVar1)) {
          DAT_0aca = 0xffff;
        }
      }
      DAT_0abf = DAT_0abf & 0xfe | 6;
    }
    else {
      sVar13 = (ushort)(byte)(bVar12 - DAT_0acc) * (ushort)DAT_0d80;
      bVar11 = (byte)((ushort)sVar13 >> 8);
      bVar17 = (byte)sVar13;
      if ((DAT_0abf & 2) == 0) {
        bVar1 = CARRY1(bVar17,(byte)DAT_0aca);
        DAT_0aca = CONCAT11(bVar11 + bVar1,bVar17 + (byte)DAT_0aca);
        if (CARRY1(bVar11,bVar1)) {
          DAT_0aca = 0xffff;
        }
      }
      else {
        DAT_0aca = CONCAT11(bVar11 - (bVar17 < (byte)DAT_0aca),bVar17 - (byte)DAT_0aca);
      }
      DAT_0abf = DAT_0abf & 0xfc | 4;
    }
    if ((DAT_0abf & 2) == 0) {
      bVar11 = DAT_0acc + DAT_0aca._0_1_;
      if (CARRY1(DAT_0acc,DAT_0aca._0_1_)) {
        bVar11 = 0xff;
      }
    }
    else {
      bVar11 = DAT_0acc - DAT_0aca._0_1_;
      if (DAT_0acc < DAT_0aca._0_1_) {
        bVar11 = 0;
      }
    }
    if (DAT_0d87 == '\t') {
      if (bVar11 < DAT_0d81) {
        puVar15 = (undefined *)0x100;
      }
      else if (bVar11 < DAT_0d82) {
        puVar15 = &UNK_0201;
      }
      else if (bVar11 < DAT_0d83) {
        puVar15 = &UNK_0402;
      }
      else if (bVar11 < DAT_0d84) {
        puVar15 = (undefined *)0x803;
      }
      else {
        if (DAT_0d85 <= bVar11) goto LAB_e28e;
        puVar15 = (undefined *)0x1004;
      }
    }
    else {
LAB_e28e:
      puVar15 = &UNK_2005;
    }
    DAT_0bcb = (undefined1)((ushort)puVar15 >> 8);
    DAT_0bca = (char)puVar15;
    if ((((DAT_0d61 != -0x80) && (DAT_0d87 == '\t')) && ((~DAT_08a0 & 4) == 0)) &&
       ((~DAT_08b2 & 0x80) == 0)) {
      if (((DAT_0896._0_1_ & 0x10) == 0) || ((~DAT_0881 & 0x10) != 0)) {
        DAT_0bcc = 0;
        DAT_0bcd = 0;
      }
      else if (DAT_0bca == '\0') {
        if ((DAT_08b6 & 2) != 0) {
          if (DAT_0bcc <= DAT_0d88) goto LAB_e34d;
          bVar17 = DAT_0bd2;
          if ((~DAT_08b1 & 8) == 0) {
            DAT_08b1 = DAT_08b1 | 8;
            bVar17 = DAT_0bd2 | 0x20;
            if ((~DAT_08ba & 8) == 0) {
              DAT_08ba = DAT_08ba | 8;
              bVar17 = DAT_0bd2 | 0x22;
            }
          }
          DAT_0bd2 = bVar17;
          DAT_0889 = DAT_0889 & 0xfd;
          DAT_0b92 = 0;
        }
        DAT_08b6 = DAT_08b6 | 2;
      }
      else if ((DAT_08b6 & 2) == 0) {
        if ((DAT_0d8a < DAT_0bcd) && ((DAT_08b1 & 8) != 0)) {
          DAT_08b1 = DAT_08b1 & 0xf7;
          DAT_0bd2 = DAT_0bd2 | 0x20;
          if (((~DAT_08af & 8) == 0) && ((~DAT_08af & 4) == 0)) {
            DAT_0889 = DAT_0889 | 2;
            DAT_0b94 = 0;
            DAT_0b92 = DAT_0a83;
            DAT_0b95 = DAT_0a83;
          }
        }
      }
      else {
        DAT_08b6 = DAT_08b6 & 0xfd;
      }
    }
LAB_e34d:
    DAT_0898 = DAT_0bca;
    DAT_0899 = DAT_0bcb;
    DAT_0ac6 = uVar14;
    DAT_0ac8 = bVar12;
    DAT_0acc = bVar11;
    if ((DAT_08b1 & 8) != 0) {
      DAT_0898 = '\x05';
      DAT_0899 = 0x20;
    }
  }
  do {
    bVar12 = DAT_008b;
    if ((~bVar12 & 2) != 0) {
      DAT_08cc = (undefined *)DAT_0092;
      DAT_088d = DAT_088d & 0xfd;
      goto LAB_e37e;
    }
    sVar13 = DAT_0044;
  } while (sVar13 - DAT_08c8 < 0);
  DAT_088d = DAT_088d | 2;
LAB_e37e:
  DAT_088d = DAT_088d & 0xfe;
  FUN_f39d();
  uVar16 = DAT_0c9a;
  if ((~DAT_088d & 2) == 0) {
    DAT_0c40 = DAT_08cc;
    DAT_08c2 = 0x40;
    DAT_08c3 = 0;
  }
  bVar12 = DAT_0bd2;
  if (((DAT_0d53 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    bVar11 = (byte)((ushort)DAT_0c40 >> 8);
    if ((bVar11 < 0x1a) || (0xf5 < bVar11)) {
      if ((DAT_08b5 & 0x40) == 0) {
        DAT_08b5 = DAT_08b5 | 0x40;
        DAT_0bab = DAT_0bab | 0x20;
      }
      else if ((DAT_0d89 < DAT_0b3e) && ((~DAT_08af & 0x20) == 0)) {
        DAT_08af = DAT_08af | 0x20;
        bVar12 = DAT_0bd2 | 0x80;
        if ((~DAT_08b8 & 0x20) == 0) {
          DAT_08b8 = DAT_08b8 | 0x20;
          bVar12 = DAT_0bd2 | 0x88;
        }
      }
    }
    else if ((DAT_08b5 & 0x40) == 0) {
      if (DAT_0d8a < DAT_0b4b) {
        if ((DAT_08af & 0x20) != 0) {
          DAT_08af = DAT_08af & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x80;
        }
        DAT_0bab = DAT_0bab & 0xdf;
        bVar12 = DAT_0bd2;
      }
    }
    else {
      DAT_08b5 = DAT_08b5 & 0xbf;
    }
  }
  DAT_0bd2 = bVar12;
  if (DAT_0d8b == -0x80) {
    if (DAT_0c04 == 1) {
      DAT_0c9a = DAT_0c44;
      goto LAB_e461;
    }
  }
  else if (DAT_0c04 == 0) {
    DAT_0c9a = DAT_0c42;
LAB_e461:
    DAT_0c9c = uVar16;
    if (((~DAT_08af & 0x20) == 0) && ((DAT_08af & 0x10) == 0)) {
      if ((~DAT_0ca8 & 1) == 0) {
        DAT_0c8a = DAT_0c88;
        DAT_0c94 = DAT_0c88;
      }
      else if (DAT_0d8d == '\x01') {
LAB_e491:
        DAT_0c8a = (undefined *)((ushort)DAT_0d94 * 2 + 0xc58);
        DAT_0c94 = DAT_0c8a;
      }
      else if (DAT_0d8d == '\x02') {
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = uVar16 + (short)((uint)DAT_0d8e * (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8);
        iVar6 = (uint)DAT_0d8f * (uint)uVar16;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar5;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar5),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 2,
                             (char)(CONCAT11((char)(RAM0x0c9f % 2),(undefined1)DAT_0ca0) / 2));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else if (DAT_0d8d == '\x03') {
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar16 = uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                         uVar16 + (short)((uint)DAT_0d8e * (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8
                                         );
        iVar6 = (uint)DAT_0d90 * (uint)uVar5;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 3,
                             (char)(CONCAT11((char)(RAM0x0c9f % 3),(undefined1)DAT_0ca0) / 3));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else if (DAT_0d8d == '\x04') {
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar2 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar16 = uVar2 + (short)((uint)DAT_0d90 * (uint)uVar5 >> 8) +
                         uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                                 uVar16 + (short)((uint)DAT_0d8e *
                                                  (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8);
        iVar6 = (uint)DAT_0d91 * (uint)uVar2;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 4,
                             (char)(CONCAT11((char)(RAM0x0c9f % 4),(undefined1)DAT_0ca0) / 4));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else if (DAT_0d8d == '\x05') {
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar2 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d98 * 2 + 0xc58;
        uVar16 = uVar3 + (short)((uint)DAT_0d91 * (uint)uVar2 >> 8) +
                         uVar2 + (short)((uint)DAT_0d90 * (uint)uVar5 >> 8) +
                                 uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                                         uVar16 + (short)((uint)DAT_0d8e *
                                                          (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8)
        ;
        iVar6 = (uint)DAT_0d92 * (uint)uVar3;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 5,
                             (char)(CONCAT11((char)(RAM0x0c9f % 5),(undefined1)DAT_0ca0) / 5));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
      else {
        if (DAT_0d8d != '\x06') goto LAB_e491;
        uVar16 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar2 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d98 * 2 + 0xc58;
        uVar4 = (ushort)DAT_0d99 * 2 + 0xc58;
        uVar16 = uVar4 + (short)((uint)DAT_0d92 * (uint)uVar3 >> 8) +
                         uVar3 + (short)((uint)DAT_0d91 * (uint)uVar2 >> 8) +
                                 uVar2 + (short)((uint)DAT_0d90 * (uint)uVar5 >> 8) +
                                         uVar5 + (short)((uint)DAT_0d8f * (uint)uVar16 >> 8) +
                                                 uVar16 + (short)((uint)DAT_0d8e *
                                                                  (uint)((ushort)DAT_0d94 * 2 +
                                                                        0xc58) >> 8);
        iVar6 = (uint)DAT_0d93 * (uint)uVar4;
        DAT_0df7 = (ushort)((uint)iVar6 >> 8);
        sVar13 = DAT_0df7 + uVar16;
        uVar7 = CONCAT12(CARRY2(DAT_0df7,uVar16),sVar13);
        _DAT_0c9e = (uint)uVar7;
        uVar8 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar7 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar13;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 6,
                             (char)(CONCAT11((char)(RAM0x0c9f % 6),(undefined1)DAT_0ca0) / 6));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar8;
        _DAT_0df6 = iVar6;
      }
    }
    else {
      DAT_0c8a = DAT_0da8;
    }
    FUN_f3b7();
    puVar15 = DAT_0c8a + -0x1eb7;
    if (DAT_0c8a < &UNK_1eb7) {
      iVar6 = (uint)CONCAT11((~(byte)((ushort)puVar15 >> 8) + 1) - ((char)-(char)puVar15 != '\0'),
                             -(char)puVar15) * (uint)extraout_A * 2;
      uVar16 = (ushort)iVar6;
      bVar12 = (byte)((uint)iVar6 >> 0x18);
      cVar10 = bVar12 + (0xff7f < uVar16);
      if (CONCAT11(bVar12 + CARRY1(bVar12,0xff7f < uVar16),cVar10) < 0x100) {
        _DAT_0e04 = CONCAT12(cVar10,uVar16 + 0x80);
        DAT_0c8c = &UNK_1eb7 + -(short)DAT_0e04;
        if (DAT_0e04 < &UNK_1eb8) goto LAB_ea7c;
      }
      DAT_0c8c = (undefined *)0x0;
    }
    else {
      iVar6 = ZEXT24(puVar15) * (uint)extraout_A * 2;
      uVar16 = (ushort)iVar6;
      bVar12 = (byte)((uint)iVar6 >> 0x18);
      cVar10 = bVar12 + (0xff7f < uVar16);
      if (CONCAT11(bVar12 + CARRY1(bVar12,0xff7f < uVar16),cVar10) < 0x100) {
        _DAT_0e04 = CONCAT12(cVar10,uVar16 + 0x80);
        DAT_0c8c = &UNK_1eb7 + (short)DAT_0e04;
        if (DAT_0e04 < 0xe149) goto LAB_ea7c;
      }
      DAT_0c8c = (undefined *)0xffff;
    }
LAB_ea7c:
    DAT_0c93 = extraout_A;
    if ((~DAT_0ca8 & 1) == 0) {
      if ((((DAT_0ca8 & 2) == 0) || (DAT_0c9c <= DAT_0c9a)) || (DAT_0c9c - DAT_0c9a < DAT_0dac)) {
        if ((((~DAT_0ca8 & 2) != 0) || (DAT_0c9a <= DAT_0c9c)) || (DAT_0c9a - DAT_0c9c < DAT_0dac))
        {
          DAT_0ca9 = 0;
          goto LAB_ead9;
        }
        DAT_0ca8 = DAT_0ca8 | 2;
        DAT_0922 = DAT_0c03 + 0xc;
      }
      else {
        DAT_0ca8 = DAT_0ca8 & 0xfd;
        DAT_0922 = DAT_0c03;
      }
      DAT_0ca9 = (DAT_0ca9 + 1) - (0xfe < DAT_0ca9);
      if (DAT_0d9a <= DAT_0ca9) {
        DAT_0ca8 = DAT_0ca8 | 1;
      }
    }
  }
LAB_ead9:
  if ((((DAT_0bfe & 0x80) != 0) && (DAT_0c9a < DAT_0c9c)) && (DAT_0c04 == DAT_0d8c)) {
    DAT_0c88 = DAT_0c40;
  }
  if ((((~DAT_0889 & 4) == 0) && ((~DAT_0885 & 0x80) == 0)) && ((DAT_0889 & 0x10) != 0)) {
    DAT_0889 = DAT_0889 | 0xc;
  }
  uVar16 = (ushort)DAT_0a53 * 2 + 0xa54;
  DAT_0a52 = (DAT_0a52 + 1) - (0xfe < DAT_0a52);
  if (DAT_0a52 < 0x18) {
    uVar9 = _DAT_0a4f;
    if (1 < DAT_0a52) {
      _DAT_0df7 = CONCAT21(RAM0x0a50,DAT_0df9);
      _DAT_0df6 = CONCAT13(DAT_0a4f._0_1_,_DAT_0df7);
      goto LAB_eb49;
    }
  }
  else {
    _DAT_0df7 = CONCAT21(RAM0x0a50 - uVar16,DAT_0df9);
    _DAT_0df6 = CONCAT13(DAT_0a4f._0_1_ - (RAM0x0a50 < uVar16),_DAT_0df7);
LAB_eb49:
    uVar16 = DAT_0c08;
    if (DAT_0c07 != '\0') {
      uVar16 = 0xffff;
    }
    sVar13 = DAT_0df7 + uVar16;
    bVar1 = CARRY2(DAT_0df7,uVar16);
    _DAT_0df7 = CONCAT21(sVar13,DAT_0df9);
    cVar10 = DAT_0df6 + bVar1;
    _DAT_0a4f = CONCAT12(cVar10,sVar13);
    uVar9 = _DAT_0a4f;
    _DAT_0df6 = CONCAT13(cVar10,_DAT_0df7);
    if (DAT_0a52 < 0x17) {
      bVar12 = DAT_0a52 - 1;
      RAM0x0df8 = (ushort)bVar12;
      DAT_0a51 = (undefined1)sVar13;
      RAM0x0df8 = CONCAT11((char)(CONCAT11((char)(DAT_0a4f % (ushort)bVar12),DAT_0a51) / RAM0x0df8),
                           bVar12);
      _DAT_0df6 = CONCAT22(DAT_0a4f / bVar12,RAM0x0df8);
      iVar6 = (_DAT_0df6 >> 8 & 0xffff) * 0x16;
      _DAT_0df7 = CONCAT21((short)iVar6,bVar12);
      _DAT_0df6 = CONCAT13((char)((uint)iVar6 >> 0x10),_DAT_0df7);
    }
    DAT_0a4b._0_1_ = DAT_0df6;
    RAM0x0a4c = DAT_0df7;
    DAT_0a53 = DAT_0a53 + 1;
    if (0x15 < DAT_0a53) {
      DAT_0a53 = 0;
    }
  }
  _DAT_0a4f = uVar9;
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    if (DAT_0a2e._0_1_ < DAT_0dd8) {
      if (((DAT_0a2e._0_1_ < DAT_0dd7) && (DAT_0d0a < DAT_0dd6)) && ((~DAT_0d08 & 8) == 0)) {
        DAT_0afc = 0;
        DAT_0d08 = DAT_0d08 & 0xfe | 8;
      }
    }
    else {
      DAT_0d08 = DAT_0d08 | 1;
    }
  }
  if (DAT_0d87 != '\t') {
    if (DAT_0c04 != 0) goto LAB_ec8f;
    if ((((~DAT_0ada & 0x10) != 0) || ((DAT_0ada & 4) != 0)) &&
       (DAT_0ae1 = (DAT_0ae1 + 1) - (0xfe < DAT_0ae1), DAT_0ddb <= DAT_0ae1)) {
      DAT_0ae1 = 0;
      if ((DAT_0ada & 0x10) == 0) {
        uVar16 = DAT_0ad6 - DAT_0db8;
        if (DAT_0ad6 < DAT_0db8) {
          uVar16 = 0;
        }
        bVar1 = DAT_0ad9 < DAT_0dda;
        DAT_0ad6 = uVar16;
        DAT_0ad9 = DAT_0ad9 - DAT_0dda;
        if (bVar1) {
          DAT_0ad9 = 0;
        }
      }
      else {
        uVar16 = DAT_0ad6 + DAT_0db8;
        if ((CARRY2(DAT_0ad6,DAT_0db8)) || (0x200 < uVar16)) {
          uVar16 = 0x200;
        }
        bVar12 = DAT_0ad9 + DAT_0dda;
        DAT_0ad6 = uVar16;
        if ((CARRY1(DAT_0ad9,DAT_0dda)) || (DAT_0ad9 = bVar12, DAT_0ddc < bVar12)) {
          DAT_0ad9 = DAT_0ddc;
        }
      }
    }
    if ((DAT_0ada & 0x20) != 0) {
      DAT_0ad4 = DAT_0ad6;
      DAT_0ad8 = DAT_0ad9;
      goto LAB_ec8f;
    }
  }
  DAT_0ad4 = 0;
  DAT_0ad8 = 0;
LAB_ec8f:
  DAT_08be = DAT_08be & 0x5f;
  return;
}


/* Entry e294 */

/* WARNING: Removing unreachable block (RAM,0xe2dc) */
/* WARNING: Removing unreachable block (RAM,0xe2e1) */
/* WARNING: Removing unreachable block (RAM,0xe2e9) */
/* WARNING: Removing unreachable block (RAM,0xe2ee) */
/* WARNING: Removing unreachable block (RAM,0xe2fb) */
/* WARNING: Removing unreachable block (RAM,0xe303) */
/* WARNING: Removing unreachable block (RAM,0xe30c) */
/* WARNING: Removing unreachable block (RAM,0xe611) */
/* WARNING: Removing unreachable block (RAM,0xe87d) */
/* WARNING: Removing unreachable block (RAM,0xe729) */
/* WARNING: Removing unreachable block (RAM,0xe535) */
/* WARNING: Removing unreachable block (RAM,0xea0d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_unreferenced_e294(void)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  undefined *puVar9;
  uint3 uVar10;
  uint uVar11;
  undefined3 uVar12;
  byte bVar13;
  byte extraout_A;
  byte bVar14;
  ushort uVar15;
  
  DAT_0bcb = 0x40;
  DAT_0bca = 6;
  if ((((DAT_0d61 != -0x80) && (DAT_0d87 == '\t')) && ((~DAT_08a0 & 4) == 0)) &&
     ((~DAT_08b2 & 0x80) == 0)) {
    if (((DAT_0896._0_1_ & 0x10) == 0) || ((~DAT_0881 & 0x10) != 0)) {
      DAT_0bcc = 0;
      DAT_0bcd = 0;
    }
    else if ((DAT_08b6 & 2) == 0) {
      if ((DAT_0d8a < DAT_0bcd) && ((DAT_08b1 & 8) != 0)) {
        DAT_08b1 = DAT_08b1 & 0xf7;
        DAT_0bd2 = DAT_0bd2 | 0x20;
        if (((~DAT_08af & 8) == 0) && ((~DAT_08af & 4) == 0)) {
          DAT_0889 = DAT_0889 | 2;
          DAT_0b94 = 0;
          DAT_0b92 = DAT_0a83;
          DAT_0b95 = DAT_0a83;
        }
      }
    }
    else {
      DAT_08b6 = DAT_08b6 & 0xfd;
    }
  }
  if ((DAT_08b1 & 8) == 0) {
    DAT_0899 = 0x40;
    DAT_0898 = 6;
  }
  else {
    DAT_0899 = 0x20;
    DAT_0898 = 5;
  }
  do {
    bVar14 = DAT_008b;
    if ((~bVar14 & 2) != 0) {
      DAT_08cc = (undefined *)DAT_0092;
      DAT_088d = DAT_088d & 0xfd;
      goto LAB_e37e;
    }
    sVar7 = DAT_0044;
  } while (sVar7 - DAT_08c8 < 0);
  DAT_088d = DAT_088d | 2;
LAB_e37e:
  DAT_088d = DAT_088d & 0xfe;
  FUN_f39d();
  uVar15 = DAT_0c9a;
  if ((~DAT_088d & 2) == 0) {
    DAT_0c40 = DAT_08cc;
    DAT_08c2 = 0x40;
    DAT_08c3 = 0;
  }
  bVar14 = DAT_0bd2;
  if (((DAT_0d53 != -0x80) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) {
    bVar13 = (byte)((ushort)DAT_0c40 >> 8);
    if ((bVar13 < 0x1a) || (0xf5 < bVar13)) {
      if ((DAT_08b5 & 0x40) == 0) {
        DAT_08b5 = DAT_08b5 | 0x40;
        DAT_0bab = DAT_0bab | 0x20;
      }
      else if ((DAT_0d89 < DAT_0b3e) && ((~DAT_08af & 0x20) == 0)) {
        DAT_08af = DAT_08af | 0x20;
        bVar14 = DAT_0bd2 | 0x80;
        if ((~DAT_08b8 & 0x20) == 0) {
          DAT_08b8 = DAT_08b8 | 0x20;
          bVar14 = DAT_0bd2 | 0x88;
        }
      }
    }
    else if ((DAT_08b5 & 0x40) == 0) {
      if (DAT_0d8a < DAT_0b4b) {
        if ((DAT_08af & 0x20) != 0) {
          DAT_08af = DAT_08af & 0xdf;
          DAT_0bd2 = DAT_0bd2 | 0x80;
        }
        DAT_0bab = DAT_0bab & 0xdf;
        bVar14 = DAT_0bd2;
      }
    }
    else {
      DAT_08b5 = DAT_08b5 & 0xbf;
    }
  }
  DAT_0bd2 = bVar14;
  if (DAT_0d8b == -0x80) {
    if (DAT_0c04 == '\x01') {
      DAT_0c9a = DAT_0c44;
      goto LAB_e461;
    }
  }
  else if (DAT_0c04 == '\0') {
    DAT_0c9a = DAT_0c42;
LAB_e461:
    DAT_0c9c = uVar15;
    if (((~DAT_08af & 0x20) == 0) && ((DAT_08af & 0x10) == 0)) {
      if ((~DAT_0ca8 & 1) == 0) {
        DAT_0c8a = DAT_0c88;
        DAT_0c94 = DAT_0c88;
      }
      else if (DAT_0d8d == '\x01') {
LAB_e491:
        DAT_0c8a = (undefined *)((ushort)DAT_0d94 * 2 + 0xc58);
        DAT_0c94 = DAT_0c8a;
      }
      else if (DAT_0d8d == '\x02') {
        uVar15 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar6 = uVar15 + (short)((uint)DAT_0d8e * (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8);
        iVar8 = (uint)DAT_0d8f * (uint)uVar15;
        DAT_0df7 = (ushort)((uint)iVar8 >> 8);
        sVar7 = DAT_0df7 + uVar6;
        uVar10 = CONCAT12(CARRY2(DAT_0df7,uVar6),sVar7);
        _DAT_0c9e = (uint)uVar10;
        uVar11 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar10 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar7;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 2,
                             (char)(CONCAT11((char)(RAM0x0c9f % 2),(undefined1)DAT_0ca0) / 2));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar11;
        _DAT_0df6 = iVar8;
      }
      else if (DAT_0d8d == '\x03') {
        uVar15 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar6 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar15 = uVar6 + (short)((uint)DAT_0d8f * (uint)uVar15 >> 8) +
                         uVar15 + (short)((uint)DAT_0d8e * (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8
                                         );
        iVar8 = (uint)DAT_0d90 * (uint)uVar6;
        DAT_0df7 = (ushort)((uint)iVar8 >> 8);
        sVar7 = DAT_0df7 + uVar15;
        uVar10 = CONCAT12(CARRY2(DAT_0df7,uVar15),sVar7);
        _DAT_0c9e = (uint)uVar10;
        uVar11 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar10 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar7;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 3,
                             (char)(CONCAT11((char)(RAM0x0c9f % 3),(undefined1)DAT_0ca0) / 3));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar11;
        _DAT_0df6 = iVar8;
      }
      else if (DAT_0d8d == '\x04') {
        uVar15 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar6 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar15 = uVar3 + (short)((uint)DAT_0d90 * (uint)uVar6 >> 8) +
                         uVar6 + (short)((uint)DAT_0d8f * (uint)uVar15 >> 8) +
                                 uVar15 + (short)((uint)DAT_0d8e *
                                                  (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8);
        iVar8 = (uint)DAT_0d91 * (uint)uVar3;
        DAT_0df7 = (ushort)((uint)iVar8 >> 8);
        sVar7 = DAT_0df7 + uVar15;
        uVar10 = CONCAT12(CARRY2(DAT_0df7,uVar15),sVar7);
        _DAT_0c9e = (uint)uVar10;
        uVar11 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar10 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar7;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 4,
                             (char)(CONCAT11((char)(RAM0x0c9f % 4),(undefined1)DAT_0ca0) / 4));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar11;
        _DAT_0df6 = iVar8;
      }
      else if (DAT_0d8d == '\x05') {
        uVar15 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar6 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar4 = (ushort)DAT_0d98 * 2 + 0xc58;
        uVar15 = uVar4 + (short)((uint)DAT_0d91 * (uint)uVar3 >> 8) +
                         uVar3 + (short)((uint)DAT_0d90 * (uint)uVar6 >> 8) +
                                 uVar6 + (short)((uint)DAT_0d8f * (uint)uVar15 >> 8) +
                                         uVar15 + (short)((uint)DAT_0d8e *
                                                          (uint)((ushort)DAT_0d94 * 2 + 0xc58) >> 8)
        ;
        iVar8 = (uint)DAT_0d92 * (uint)uVar4;
        DAT_0df7 = (ushort)((uint)iVar8 >> 8);
        sVar7 = DAT_0df7 + uVar15;
        uVar10 = CONCAT12(CARRY2(DAT_0df7,uVar15),sVar7);
        _DAT_0c9e = (uint)uVar10;
        uVar11 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar10 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar7;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 5,
                             (char)(CONCAT11((char)(RAM0x0c9f % 5),(undefined1)DAT_0ca0) / 5));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar11;
        _DAT_0df6 = iVar8;
      }
      else {
        if (DAT_0d8d != '\x06') goto LAB_e491;
        uVar15 = (ushort)DAT_0d95 * 2 + 0xc58;
        uVar6 = (ushort)DAT_0d96 * 2 + 0xc58;
        uVar3 = (ushort)DAT_0d97 * 2 + 0xc58;
        uVar4 = (ushort)DAT_0d98 * 2 + 0xc58;
        uVar5 = (ushort)DAT_0d99 * 2 + 0xc58;
        uVar15 = uVar5 + (short)((uint)DAT_0d92 * (uint)uVar4 >> 8) +
                         uVar4 + (short)((uint)DAT_0d91 * (uint)uVar3 >> 8) +
                                 uVar3 + (short)((uint)DAT_0d90 * (uint)uVar6 >> 8) +
                                         uVar6 + (short)((uint)DAT_0d8f * (uint)uVar15 >> 8) +
                                                 uVar15 + (short)((uint)DAT_0d8e *
                                                                  (uint)((ushort)DAT_0d94 * 2 +
                                                                        0xc58) >> 8);
        iVar8 = (uint)DAT_0d93 * (uint)uVar5;
        DAT_0df7 = (ushort)((uint)iVar8 >> 8);
        sVar7 = DAT_0df7 + uVar15;
        uVar10 = CONCAT12(CARRY2(DAT_0df7,uVar15),sVar7);
        _DAT_0c9e = (uint)uVar10;
        uVar11 = _DAT_0c9e;
        RAM0x0c9f = (ushort)(uVar10 >> 8);
        DAT_0ca0._1_1_ = (undefined1)sVar7;
        _DAT_0dfa = CONCAT21(RAM0x0c9f / 6,
                             (char)(CONCAT11((char)(RAM0x0c9f % 6),(undefined1)DAT_0ca0) / 6));
        DAT_0c8a = RAM0x0dfb;
        DAT_0c94 = DAT_0c8a;
        _DAT_0c9e = uVar11;
        _DAT_0df6 = iVar8;
      }
    }
    else {
      DAT_0c8a = DAT_0da8;
    }
    FUN_f3b7();
    puVar9 = DAT_0c8a + -0x1eb7;
    if (DAT_0c8a < &UNK_1eb7) {
      iVar8 = (uint)CONCAT11((~(byte)((ushort)puVar9 >> 8) + 1) - ((char)-(char)puVar9 != '\0'),
                             -(char)puVar9) * (uint)extraout_A * 2;
      uVar15 = (ushort)iVar8;
      bVar14 = (byte)((uint)iVar8 >> 0x18);
      cVar2 = bVar14 + (0xff7f < uVar15);
      if (CONCAT11(bVar14 + CARRY1(bVar14,0xff7f < uVar15),cVar2) < 0x100) {
        _DAT_0e04 = CONCAT12(cVar2,uVar15 + 0x80);
        DAT_0c8c = &UNK_1eb7 + -(short)DAT_0e04;
        if (DAT_0e04 < &UNK_1eb8) goto LAB_ea7c;
      }
      DAT_0c8c = (undefined *)0x0;
    }
    else {
      iVar8 = ZEXT24(puVar9) * (uint)extraout_A * 2;
      uVar15 = (ushort)iVar8;
      bVar14 = (byte)((uint)iVar8 >> 0x18);
      cVar2 = bVar14 + (0xff7f < uVar15);
      if (CONCAT11(bVar14 + CARRY1(bVar14,0xff7f < uVar15),cVar2) < 0x100) {
        _DAT_0e04 = CONCAT12(cVar2,uVar15 + 0x80);
        DAT_0c8c = &UNK_1eb7 + (short)DAT_0e04;
        if (DAT_0e04 < 0xe149) goto LAB_ea7c;
      }
      DAT_0c8c = (undefined *)0xffff;
    }
LAB_ea7c:
    DAT_0c93 = extraout_A;
    if ((~DAT_0ca8 & 1) == 0) {
      if ((((DAT_0ca8 & 2) == 0) || (DAT_0c9c <= DAT_0c9a)) || (DAT_0c9c - DAT_0c9a < DAT_0dac)) {
        if ((((~DAT_0ca8 & 2) != 0) || (DAT_0c9a <= DAT_0c9c)) || (DAT_0c9a - DAT_0c9c < DAT_0dac))
        {
          DAT_0ca9 = 0;
          goto LAB_ead9;
        }
        DAT_0ca8 = DAT_0ca8 | 2;
        DAT_0922 = DAT_0c03 + '\f';
      }
      else {
        DAT_0ca8 = DAT_0ca8 & 0xfd;
        DAT_0922 = DAT_0c03;
      }
      DAT_0ca9 = (DAT_0ca9 + 1) - (0xfe < DAT_0ca9);
      if (DAT_0d9a <= DAT_0ca9) {
        DAT_0ca8 = DAT_0ca8 | 1;
      }
    }
  }
LAB_ead9:
  if ((((DAT_0bfe & 0x80) != 0) && (DAT_0c9a < DAT_0c9c)) && (DAT_0c04 == DAT_0d8c)) {
    DAT_0c88 = DAT_0c40;
  }
  if ((((~DAT_0889 & 4) == 0) && ((~DAT_0885 & 0x80) == 0)) && ((DAT_0889 & 0x10) != 0)) {
    DAT_0889 = DAT_0889 | 0xc;
  }
  uVar15 = (ushort)DAT_0a53 * 2 + 0xa54;
  DAT_0a52 = (DAT_0a52 + 1) - (0xfe < DAT_0a52);
  if (DAT_0a52 < 0x18) {
    uVar12 = _DAT_0a4f;
    if (1 < DAT_0a52) {
      _DAT_0df7 = CONCAT21(RAM0x0a50,DAT_0df9);
      _DAT_0df6 = CONCAT13(DAT_0a4f._0_1_,_DAT_0df7);
      goto LAB_eb49;
    }
  }
  else {
    _DAT_0df7 = CONCAT21(RAM0x0a50 - uVar15,DAT_0df9);
    _DAT_0df6 = CONCAT13(DAT_0a4f._0_1_ - (RAM0x0a50 < uVar15),_DAT_0df7);
LAB_eb49:
    uVar15 = DAT_0c08;
    if (DAT_0c07 != '\0') {
      uVar15 = 0xffff;
    }
    sVar7 = DAT_0df7 + uVar15;
    bVar1 = CARRY2(DAT_0df7,uVar15);
    _DAT_0df7 = CONCAT21(sVar7,DAT_0df9);
    cVar2 = DAT_0df6 + bVar1;
    _DAT_0a4f = CONCAT12(cVar2,sVar7);
    uVar12 = _DAT_0a4f;
    _DAT_0df6 = CONCAT13(cVar2,_DAT_0df7);
    if (DAT_0a52 < 0x17) {
      bVar14 = DAT_0a52 - 1;
      RAM0x0df8 = (ushort)bVar14;
      DAT_0a51 = (undefined1)sVar7;
      RAM0x0df8 = CONCAT11((char)(CONCAT11((char)(DAT_0a4f % (ushort)bVar14),DAT_0a51) / RAM0x0df8),
                           bVar14);
      _DAT_0df6 = CONCAT22(DAT_0a4f / bVar14,RAM0x0df8);
      iVar8 = (_DAT_0df6 >> 8 & 0xffff) * 0x16;
      _DAT_0df7 = CONCAT21((short)iVar8,bVar14);
      _DAT_0df6 = CONCAT13((char)((uint)iVar8 >> 0x10),_DAT_0df7);
    }
    DAT_0a4b._0_1_ = DAT_0df6;
    RAM0x0a4c = DAT_0df7;
    DAT_0a53 = DAT_0a53 + 1;
    if (0x15 < DAT_0a53) {
      DAT_0a53 = 0;
    }
  }
  _DAT_0a4f = uVar12;
  if ((DAT_0dd5 != -0x80) && ((~DAT_0d06 & 0x80) == 0)) {
    if (DAT_0a2e._0_1_ < DAT_0dd8) {
      if (((DAT_0a2e._0_1_ < DAT_0dd7) && (DAT_0d0a < DAT_0dd6)) && ((~DAT_0d08 & 8) == 0)) {
        DAT_0afc = 0;
        DAT_0d08 = DAT_0d08 & 0xfe | 8;
      }
    }
    else {
      DAT_0d08 = DAT_0d08 | 1;
    }
  }
  if (DAT_0d87 != '\t') {
    if (DAT_0c04 != '\0') goto LAB_ec8f;
    if ((((~DAT_0ada & 0x10) != 0) || ((DAT_0ada & 4) != 0)) &&
       (DAT_0ae1 = (DAT_0ae1 + 1) - (0xfe < DAT_0ae1), DAT_0ddb <= DAT_0ae1)) {
      DAT_0ae1 = 0;
      if ((DAT_0ada & 0x10) == 0) {
        uVar15 = DAT_0ad6 - DAT_0db8;
        if (DAT_0ad6 < DAT_0db8) {
          uVar15 = 0;
        }
        bVar1 = DAT_0ad9 < DAT_0dda;
        DAT_0ad6 = uVar15;
        DAT_0ad9 = DAT_0ad9 - DAT_0dda;
        if (bVar1) {
          DAT_0ad9 = 0;
        }
      }
      else {
        uVar15 = DAT_0ad6 + DAT_0db8;
        if ((CARRY2(DAT_0ad6,DAT_0db8)) || (0x200 < uVar15)) {
          uVar15 = 0x200;
        }
        bVar14 = DAT_0ad9 + DAT_0dda;
        DAT_0ad6 = uVar15;
        if ((CARRY1(DAT_0ad9,DAT_0dda)) || (DAT_0ad9 = bVar14, DAT_0ddc < bVar14)) {
          DAT_0ad9 = DAT_0ddc;
        }
      }
    }
    if ((DAT_0ada & 0x20) != 0) {
      DAT_0ad4 = DAT_0ad6;
      DAT_0ad8 = DAT_0ad9;
      goto LAB_ec8f;
    }
  }
  DAT_0ad4 = 0;
  DAT_0ad8 = 0;
LAB_ec8f:
  DAT_08be = DAT_08be & 0x5f;
  return;
}


/* Entry ec98 */

void FUN_ec98(void)

{
  byte bVar1;
  
  DAT_0a1e = DAT_0a1b;
  if (DAT_0d9b == -0x80) {
    DAT_0cad = DAT_0a1b - DAT_0d7e;
    if (DAT_0a1b < DAT_0d7e) {
      DAT_0cad = DAT_0cad + 0x18;
    }
    DAT_0cac = DAT_0a1a - DAT_0d7e;
    if (DAT_0a1a < DAT_0d7e) {
      DAT_0cac = DAT_0cac + 0x18;
    }
    bVar1 = DAT_0cad - DAT_0cac;
    if (bVar1 != 0) {
      if (DAT_0cad < DAT_0cac) {
        if (((DAT_0d9c < (byte)-bVar1) && (DAT_0a1e = DAT_0a1a - DAT_0d9c, DAT_0a1a < DAT_0d9c)) &&
           (DAT_0a1e = (DAT_0a1a - DAT_0d9c) + 0x18, DAT_0a1e == 0x17)) {
          DAT_0a1e = 0x16;
        }
      }
      else if (DAT_0d9c < bVar1) {
        DAT_0a1a = DAT_0a1a + DAT_0d9c;
        if (0x16 < DAT_0a1a) {
          if (DAT_0a1a == 0x17) {
            DAT_0a1e = 0;
            goto LAB_ecfe;
          }
          DAT_0a1a = DAT_0a1a - 0x18;
        }
        if (DAT_0a1a != 0xb) {
          DAT_0a1e = DAT_0a1a;
          DAT_0a26 = DAT_0dae;
          return;
        }
        DAT_0a1a = 0xc;
        DAT_0a1e = 0xc;
        DAT_0a26 = DAT_0dae;
        return;
      }
    }
  }
LAB_ecfe:
  if (DAT_0a1e == 0xb) {
    DAT_0a1e = 10;
  }
  DAT_0a1a = DAT_0a1e;
  DAT_0a26 = DAT_0dae;
  return;
}


/* Entry ed11 */

void FUN_ed11(void)

{
  DAT_0a1f = (DAT_0a1a & 0x1f) + DAT_0d9d;
  if (0x16 < DAT_0a1f) {
    DAT_0a1f = DAT_0a1f - 0x18;
  }
  DAT_0a28 = DAT_0dae;
  return;
}


/* Entry ed29 */

void FUN_ed29(void)

{
  if ((DAT_0880 & 0x44) == 0) {
    FUN_ee78();
    if ((DAT_0c04 == 6) &&
       (((~DAT_088d & 0x20) != 0 || ((0x40 < DAT_0a82 && ((DAT_0a92 & 8) != 0)))))) {
      FUN_edc3();
    }
    else if ((2 < DAT_0c04) && (DAT_0c04 < 7)) {
      FUN_ef6d();
    }
    return;
  }
  if ((~DAT_0880 & 0x40) == 0) {
    FUN_ee78();
    FUN_edc3();
    return;
  }
  FUN_ee19();
  FUN_edc3();
  return;
}


/* Entry ed6d */

void FUN_ed6d(void)

{
  byte bVar1;
  short sVar2;
  
  if (((~DAT_0885 & 0x40) == 0) && ((DAT_0884 & 2) == 0)) {
    if (DAT_0c04 != '\a') {
      return;
    }
    if ((((~DAT_0880 & 0x40) == 0) && (DAT_0d9e <= DAT_0a2e._0_1_)) &&
       (sVar2 = DAT_0044, (sVar2 - DAT_0b7a) - DAT_0a9a < 0)) {
      DAT_0a93 = DAT_0a93 | 2;
      sVar2 = DAT_0b7a + DAT_0a9a;
    }
    else {
      DAT_0a93 = DAT_0a93 & 0xfd;
      sVar2 = DAT_0044;
    }
    DAT_0056 = sVar2 + 10;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xf7;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
    DAT_0a92 = DAT_0a92 | 0x80;
    return;
  }
  return;
}


/* Entry edc2 */

void candidate_unreferenced_edc2(void)

{
  return;
}


/* Entry edc3 */

void FUN_edc3(void)

{
  byte bVar1;
  short sVar2;
  
  if (((~DAT_0885 & 0x40) == 0) && ((DAT_0884 & 2) == 0)) {
    if (DAT_0c04 != '\x06') {
      return;
    }
    if ((((~DAT_0880 & 0x40) == 0) && (DAT_0d9e <= DAT_0a2e._0_1_)) &&
       (sVar2 = DAT_0044, (sVar2 - DAT_0b7a) - DAT_0a9a < 0)) {
      DAT_0a93 = DAT_0a93 | 2;
      sVar2 = DAT_0b7a + DAT_0a9a;
    }
    else {
      DAT_0a93 = DAT_0a93 & 0xfd;
      sVar2 = DAT_0044;
    }
    DAT_0056 = sVar2 + 10;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xf7;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
    DAT_0a92 = DAT_0a92 | 0x80;
    return;
  }
  return;
}


/* Entry ee18 */

void candidate_unreferenced_ee18(void)

{
  return;
}


/* Entry ee19 */

void FUN_ee19(void)

{
  short sVar1;
  byte bVar2;
  
  if ((((((~DAT_08a0 & 4) == 0) && ((~DAT_08b2 & 0x80) == 0)) && ((~DAT_0880 & 0x80) == 0)) &&
      (((~DAT_0884 & 4) == 0 && ((~DAT_0d08 & 1) == 0)))) &&
     ((((~DAT_0884 & 2) == 0 && (((~DAT_088c & 0x80) == 0 && ((~DAT_0885 & 0x40) == 0)))) &&
      ((~DAT_0bf8 & 0x80) == 0)))) {
    if ((((~DAT_088c & 2) != 0) || ((~DAT_089a & 2) != 0)) ||
       ((DAT_0c04 != '\x04' && (DAT_0c04 != '\x05')))) {
      return;
    }
    sVar1 = DAT_0044;
    DAT_0b7a = sVar1 + 10;
    DAT_0056 = DAT_0b7a;
    bVar2 = DAT_004c;
    DAT_004c = bVar2 & 0xf7;
    bVar2 = DAT_0049;
    DAT_0049 = bVar2 | 0xc0;
    DAT_004e = 8;
    DAT_0a92 = DAT_0a92 | 8;
  }
  return;
}


/* Entry ee78 */

void FUN_ee78(void)

{
  short sVar1;
  byte bVar2;
  
  if ((~DAT_08a0 & 4) != 0) {
    return;
  }
  if ((~DAT_08b2 & 0x80) != 0) {
    return;
  }
  bVar2 = DAT_00e1;
  if ((bVar2 & 8) != 0) {
    return;
  }
  if ((~DAT_0a92 & 8) != 0) {
    return;
  }
  if ((~DAT_0884 & 4) != 0) {
    return;
  }
  if ((~DAT_0d08 & 1) != 0) {
    return;
  }
  if ((~DAT_0884 & 2) != 0) {
    return;
  }
  if ((~DAT_088c & 0x80) != 0) {
    return;
  }
  if ((~DAT_0885 & 0x40) != 0) {
    return;
  }
  if ((~DAT_0bf8 & 0x80) != 0) {
    return;
  }
  if ((~DAT_088c & 2) != 0) {
    return;
  }
  if ((~DAT_089a & 2) != 0) {
    return;
  }
  if (DAT_0c04 == DAT_0925) {
    if ((DAT_089b & 0x20) != 0) {
      if ((DAT_089b & 0x10) == 0) {
        if ((DAT_089b & 2) == 0) {
          if (DAT_0b28 <= DAT_0b2a) {
            DAT_089b = DAT_089b | 2;
            DAT_0b2a = 0;
            DAT_0b29 = DAT_0b29 + 1;
            return;
          }
          DAT_0b2a = DAT_0b2a + 1;
          goto LAB_ef50;
        }
      }
      else {
        DAT_089b = DAT_089b & 0xef | 10;
      }
      if (DAT_0b29 < DAT_0b27) {
        DAT_0b29 = DAT_0b29 + 1;
        return;
      }
      DAT_089b = DAT_089b & 0xfd;
      DAT_0b2a = DAT_0b2a + 1;
      DAT_0b29 = 0;
    }
LAB_ef50:
    bVar2 = DAT_0049;
    DAT_0049 = bVar2 | 0xc0;
    DAT_004e = 8;
    bVar2 = DAT_004c;
    DAT_004c = bVar2 | 8;
    DAT_0b7a = DAT_0af0 + DAT_0aa2;
    goto LAB_ef63;
  }
  if (DAT_0c04 == 0) {
    if ((DAT_0925 != 10) && (DAT_0925 != 9)) {
      return;
    }
LAB_eee7:
    if ((DAT_089b & 0x20) != 0) {
      return;
    }
  }
  else {
    if (6 < DAT_0c04) {
      if (DAT_0c04 != 10) {
        return;
      }
      if (DAT_0925 != 9) {
        return;
      }
      goto LAB_eee7;
    }
    if ((DAT_0c04 < DAT_0925) || ((DAT_089b & 0x20) != 0)) {
      return;
    }
  }
  bVar2 = DAT_0049;
  DAT_0049 = bVar2 | 0xc0;
  DAT_004e = 8;
  bVar2 = DAT_004c;
  DAT_004c = bVar2 | 8;
  sVar1 = DAT_0044;
  DAT_0b7a = sVar1 + 10;
LAB_ef63:
  DAT_0056 = DAT_0b7a;
  DAT_0a92 = DAT_0a92 | 8;
  return;
}


/* Entry ef6d */

void FUN_ef6d(byte param_1)

{
  byte bVar1;
  short sVar2;
  
  if (((~DAT_08a0 & 4) != 0) || ((~DAT_08b2 & 0x80) != 0)) {
    return;
  }
  if (param_1 != DAT_0924) {
    if (param_1 < DAT_0924) {
      return;
    }
    if ((~DAT_0a92 & 0x80) != 0) {
      return;
    }
    DAT_0aa4 = DAT_0db4;
  }
  bVar1 = DAT_00e1;
  if ((bVar1 & 8) == 0) {
    if ((((((((~DAT_088c & 2) == 0) && ((~DAT_089a & 2) == 0)) && ((~DAT_089b & 0x80) == 0)) &&
          (((~DAT_0884 & 4) == 0 && ((~DAT_0d08 & 1) == 0)))) &&
         (((~DAT_0884 & 2) == 0 && (((~DAT_088c & 0x80) == 0 && ((~DAT_0885 & 0x40) == 0)))))) &&
        ((~DAT_0bf8 & 0x80) == 0)) && ((~DAT_0a92 & 8) == 0)) {
      DAT_0b7a = DAT_0af0 + DAT_0db0;
      DAT_0056 = DAT_0b7a;
      bVar1 = DAT_0049;
      DAT_0049 = bVar1 | 0xc0;
      DAT_004e = 8;
      bVar1 = DAT_004c;
      DAT_004c = bVar1 | 8;
      DAT_0a92 = DAT_0a92 | 8;
    }
    return;
  }
  if (((((~DAT_0884 & 4) == 0) && ((~DAT_0884 & 2) == 0)) && ((~DAT_0885 & 0x40) == 0)) &&
     ((((~DAT_0bf8 & 0x80) == 0 && ((~DAT_088d & 0x20) == 0)) && ((DAT_0880 & 4) == 0)))) {
    if ((DAT_0a2e._0_1_ < DAT_0d9e) ||
       (DAT_0e2a = (DAT_0af0 + DAT_0aa4) - DAT_0b7a, -1 < DAT_0e2a - DAT_0a9a)) {
      DAT_0a93 = DAT_0a93 & 0xfd;
      sVar2 = DAT_0af0 + DAT_0aa4;
    }
    else {
      DAT_0a93 = DAT_0a93 | 2;
      sVar2 = DAT_0b7a + DAT_0a9a;
    }
    DAT_0056 = sVar2;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 8;
    DAT_0a92 = DAT_0a92 | 0x80;
    return;
  }
  return;
}


/* Entry f043 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_f043(void)

{
  uint3 uVar1;
  uint3 uVar2;
  undefined3 uVar3;
  undefined3 uVar4;
  
  uVar4 = _DAT_0c1b;
  uVar3 = _DAT_0c17;
  if (DAT_0c05 != 0) {
    if (DAT_0c30 <= _DAT_0c07) {
LAB_f071:
      FUN_721f();
      return;
    }
    if (DAT_0c2e <= _DAT_0c07) {
      if (DAT_0c33 == '\0') {
        DAT_0c33 = '\x01';
      }
      else if ((DAT_0c05 != DAT_0c32) && ((byte)(DAT_0c05 - DAT_0c32) != '\v')) goto LAB_f071;
      DAT_0c32 = DAT_0c05;
    }
    uVar1 = (uint3)_DAT_0c1b >> 0x10;
    _DAT_0c1f = _DAT_0c1b;
    uVar2 = (uint3)_DAT_0c17 >> 0x10;
    _DAT_0c1b = _DAT_0c17;
    _DAT_0c17 = _DAT_0c07;
    if (3 < DAT_0c05) {
      DAT_0c36 = (ushort)DAT_0d9f << 2;
      if (((char)((uint3)_DAT_0c07 >> 0x10) == '\0' && (char)uVar2 == '\0') && (char)uVar1 == '\0')
      {
        FUN_f1ce();
      }
      else {
        DAT_0df7._1_1_ = (undefined1)(ushort)((uint3)uVar3 >> 10);
        DAT_0df6 = (undefined1)(ushort)((uint3)uVar4 >> 10);
        FUN_f26e();
      }
      if ((DAT_0bfe & 0x40) != 0) {
        DAT_0c14 = DAT_0c08 + DAT_0c0c;
        DAT_0c13 = DAT_0c07 + DAT_0c0b + CARRY2(DAT_0c08,DAT_0c0c);
        if ((DAT_0c07 == '\0') && (DAT_0c08 < DAT_0db6)) {
          _DAT_0c1f = CONCAT12(0xff,DAT_0c20);
          DAT_0880 = DAT_0880 & 0x7f;
          DAT_0881 = DAT_0881 & 0x7f;
          DAT_088c = DAT_088c & 0xdf;
          DAT_0922 = 0;
          DAT_0923 = 0;
          DAT_0bfe = DAT_0bfe | 0x80;
          DAT_0c03 = 0;
          DAT_0c04 = 0;
          return;
        }
        _DAT_0c1f = CONCAT12(DAT_0c1f | DAT_0c1b,DAT_0c20);
        DAT_0880 = DAT_0880 & 0x7f;
        DAT_0881 = DAT_0881 & 0x7f;
        DAT_088c = DAT_088c & 0xdf;
        DAT_0922 = 0;
        DAT_0923 = 0;
        DAT_0bfe = DAT_0bfe | 0x80;
        DAT_0c03 = 0;
        DAT_0c04 = 0;
        return;
      }
    }
    DAT_0c0b = DAT_0c07;
    DAT_0c0c = DAT_0c08;
  }
  DAT_0c05 = DAT_0c05 + 1;
  if (0xe < DAT_0c05) {
    DAT_0c05 = 1;
  }
  return;
}


/* Entry f147 */

void FUN_f147(void)

{
  if (DAT_0c03 == '\t') {
    if ((DAT_0c07 == 0) && (DAT_0c08 < DAT_0db6)) {
      DAT_0c1f = 0xff;
    }
    else {
      DAT_0c1f = DAT_0c07;
      DAT_0c20 = DAT_0c08;
    }
  }
  else if (DAT_0c03 == '\n') {
    if (-1 < (short)((ushort)DAT_0c1f << 8)) {
      DAT_0c1f = DAT_0c1f | DAT_0c07;
    }
    DAT_0c1c = DAT_0c08;
  }
  else if (DAT_0c03 == '\0') {
    if ((short)((ushort)DAT_0c1f << 8) < 0) {
      if ((DAT_0c08 >> 2) + DAT_0c08 < DAT_0c1c) {
        return;
      }
    }
    else {
      if (DAT_0c1f != 0 || DAT_0c07 != 0) {
        return;
      }
      DAT_0c36 = (ushort)DAT_0da3 << 2;
      FUN_f1ce();
      if ((DAT_0bfe & 0x40) != 0) {
        DAT_0c35 = 0;
        return;
      }
    }
    DAT_0c35 = (DAT_0c35 + 1) - (0xfe < DAT_0c35);
    if (DAT_0da2 <= DAT_0c35) {
      FUN_721f();
    }
  }
  return;
}


/* Entry f1ce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_f1ce(void)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  
  DAT_0df9 = (byte)(DAT_0c1c >> 8);
  DAT_0dfa._0_1_ = (byte)DAT_0c1c;
  DAT_0dfa._1_1_ = (byte)((uint3)_DAT_0c1f >> 8);
  bVar3 = (byte)DAT_0dfa;
  DAT_0dfc = (byte)_DAT_0c1f;
  bVar4 = DAT_0dfc;
  DAT_0dfd = (byte)(DAT_0c08 >> 8);
  DAT_0dfe = (undefined1)DAT_0c08;
  bVar6 = DAT_0dfd | (byte)DAT_0dfa | DAT_0df9;
  if ((bVar6 & 0xf8) == 0) {
    DAT_0df9 = DAT_0df9 >> 3;
    DAT_0dfa._0_1_ = (byte)(DAT_0c1c >> 3);
    DAT_0dfa._1_1_ = (byte)DAT_0dfa >> 3;
    DAT_0dfc = (byte)(DAT_0c20 >> 3);
    DAT_0dfd = DAT_0dfd >> 3;
    DAT_0dfe = (undefined1)(DAT_0c08 >> 3);
    DAT_0df7._1_1_ = DAT_0dfa._0_1_;
    FUN_f26e(CONCAT11(DAT_0dfc,DAT_0dfe));
    return;
  }
  if (bVar6 < 0x10) {
    DAT_0c34 = '\x04';
  }
  else if (bVar6 < 0x20) {
    DAT_0c34 = '\x03';
  }
  else if (bVar6 < 0x40) {
    DAT_0c34 = '\x02';
  }
  else if (bVar6 < 0x80) {
    DAT_0c34 = '\x01';
  }
  else {
    DAT_0c34 = '\0';
  }
  for (; uVar2 = CONCAT11(DAT_0dfa._0_1_,(byte)DAT_0dfa), DAT_0c34 != '\0'; DAT_0c34 = DAT_0c34 + -1
      ) {
    sVar9 = CONCAT11(DAT_0df9,DAT_0dfa._0_1_) << 1;
    DAT_0df9 = (byte)((ushort)sVar9 >> 8);
    DAT_0dfa._0_1_ = (byte)sVar9;
    sVar9 = CONCAT11((byte)DAT_0dfa,DAT_0dfc) << 1;
    DAT_0dfa._1_1_ = (byte)((ushort)sVar9 >> 8);
    DAT_0dfc = (byte)sVar9;
    sVar9 = CONCAT11(DAT_0dfd,DAT_0dfe) << 1;
    DAT_0dfd = (byte)((ushort)sVar9 >> 8);
    DAT_0dfe = (undefined1)sVar9;
  }
  DAT_0df7._1_1_ = DAT_0df9;
  uVar10 = (ushort)(byte)DAT_0dfa * (ushort)DAT_0dfd;
  uVar11 = (ushort)DAT_0df9 * (ushort)DAT_0df9;
  if (uVar10 <= uVar11) {
    uVar2 = uVar11 / uVar10;
    DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
    DAT_0dfa._1_1_ = (byte)uVar2;
    uVar1 = ((uint)(uVar11 % uVar10) << 0x10) / (uint)uVar10;
    DAT_0dfc = (byte)(uVar1 >> 8);
    DAT_0dfd = (byte)uVar1;
    if (DAT_0dfa._0_1_ != '\0') {
LAB_f392:
      DAT_0bfe = DAT_0bfe | 0x40;
      goto LAB_f39c;
    }
    DAT_0c3c = CONCAT11((byte)DAT_0dfa,DAT_0dfc);
    if (DAT_0c36 <= DAT_0c3c) {
      if ((DAT_0bfe & 0x80) != 0) goto LAB_f392;
      DAT_0df7._0_1_ = (byte)_DAT_0c17;
      DAT_0df6 = (byte)((uint3)_DAT_0c17 >> 8);
      bVar6 = DAT_0df6;
      DAT_0df7._1_1_ = bVar3;
      DAT_0df9 = bVar4;
      if ((DAT_0c17 | DAT_0c1f) != 0) {
        if (((DAT_0c17 | DAT_0c1f) & 0xf0) == 0) {
          DAT_0df6 = DAT_0c17;
          DAT_0df9 = DAT_0c1f;
          bVar7 = DAT_0df6;
          bVar5 = DAT_0df7._0_1_;
          bVar8 = DAT_0df9;
          DAT_0dfa._0_1_ = bVar3;
          DAT_0dfa._1_1_ = bVar4;
          do {
            DAT_0df9 = bVar8;
            DAT_0df7._1_1_ = bVar5;
            DAT_0df7._0_1_ = bVar6;
            DAT_0df6 = bVar7;
            bVar7 = DAT_0df6 >> 1;
            DAT_0df6 = DAT_0df7._0_1_ >> 1 | DAT_0df6 << 7;
            DAT_0df7._0_1_ = (byte)DAT_0df7 >> 1 | DAT_0df7._0_1_ << 7;
            bVar8 = DAT_0df9 >> 1;
            DAT_0df7._1_1_ = DAT_0dfa._0_1_ >> 1 | DAT_0df9 << 7;
            DAT_0dfa._1_1_ = (byte)DAT_0dfa >> 1 | DAT_0dfa._0_1_ << 7;
            bVar6 = DAT_0df6;
            bVar5 = DAT_0df7._0_1_;
            DAT_0df9 = (byte)DAT_0dfa;
            DAT_0dfa._0_1_ = (byte)DAT_0df7;
          } while (bVar7 != 0 || bVar8 != 0);
        }
        else {
          DAT_0df7._1_1_ = DAT_0df7._0_1_;
          DAT_0dfa._1_1_ = bVar4;
          bVar4 = DAT_0c17;
          DAT_0df7._0_1_ = DAT_0df6;
          bVar6 = (byte)DAT_0df7;
          DAT_0df7._1_1_ = DAT_0c1f;
          DAT_0dfa._0_1_ = bVar3;
          do {
            DAT_0df9 = (byte)DAT_0df7;
            DAT_0df7._1_1_ = bVar6;
            DAT_0df6 = bVar4;
            bVar6 = (byte)DAT_0df7 << 1;
            bVar3 = DAT_0df7._0_1_ >> 7;
            DAT_0df7._0_1_ = DAT_0df7._0_1_ << 1 | (byte)DAT_0df7 >> 7;
            DAT_0df6 = DAT_0df6 << 1 | bVar3;
            bVar3 = (byte)DAT_0dfa >> 7;
            DAT_0dfa._1_1_ = (byte)DAT_0dfa << 1;
            bVar4 = DAT_0dfa._0_1_ >> 7;
            DAT_0dfa._0_1_ = DAT_0dfa._0_1_ << 1 | bVar3;
            DAT_0df7._1_1_ = DAT_0df9 << 1 | bVar4;
            bVar4 = DAT_0df6;
            DAT_0df9 = DAT_0dfa._0_1_;
          } while (((byte)DAT_0df7 | DAT_0df6) < 0x80);
        }
      }
      uVar10 = CONCAT11(DAT_0df6,DAT_0df7._0_1_);
      uVar2 = uVar10 / CONCAT11((byte)DAT_0df7,DAT_0df9);
      DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
      DAT_0dfa._1_1_ = (byte)uVar2;
      uVar1 = ((uint)(uVar10 % CONCAT11((byte)DAT_0df7,DAT_0df9)) << 0x10) /
              (uint)CONCAT11((byte)DAT_0df7,DAT_0df9);
      DAT_0dfc = (byte)(uVar1 >> 8);
      DAT_0dfd = (byte)uVar1;
      if (DAT_0dfa._0_1_ == '\0') {
        DAT_0c3e = CONCAT11((byte)DAT_0dfa,DAT_0dfc);
        DAT_0c38 = (ushort)DAT_0da0 << 2;
        if ((DAT_0c38 < DAT_0c3e) &&
           (DAT_0c3a = (ushort)DAT_0da1 * 4, DAT_0c3e <= DAT_0c3a && DAT_0c3a - DAT_0c3e != 0))
        goto LAB_f392;
      }
    }
  }
  DAT_0bfe = DAT_0bfe & 0xbf;
LAB_f39c:
  DAT_0df6 = (byte)(uVar10 >> 8);
  DAT_0df7._0_1_ = (byte)uVar10;
  DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
  DAT_0dfa._1_1_ = (byte)uVar2;
  return;
}


/* Entry f26e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_f26e(ushort param_1)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  
  uVar7 = (param_1 >> 8) * (param_1 & 0xff);
  uVar8 = (ushort)(byte)DAT_0df7 * (ushort)(byte)DAT_0df7;
  uVar2 = DAT_0dfa;
  if (uVar7 <= uVar8) {
    uVar2 = uVar8 / uVar7;
    DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
    DAT_0dfa._1_1_ = (byte)uVar2;
    uVar1 = ((uint)(uVar8 % uVar7) << 0x10) / (uint)uVar7;
    DAT_0dfc = (undefined1)(uVar1 >> 8);
    DAT_0dfd = (undefined1)uVar1;
    if (DAT_0dfa._0_1_ != '\0') {
LAB_f392:
      DAT_0bfe = DAT_0bfe | 0x40;
      goto LAB_f39c;
    }
    DAT_0c3c = CONCAT11((byte)DAT_0dfa,DAT_0dfc);
    if (DAT_0c36 <= DAT_0c3c) {
      if ((DAT_0bfe & 0x80) != 0) goto LAB_f392;
      DAT_0df7._0_1_ = (byte)_DAT_0c17;
      DAT_0df6 = (byte)((uint3)_DAT_0c17 >> 8);
      bVar3 = DAT_0df6;
      DAT_0df9 = (byte)_DAT_0c1f;
      DAT_0dfa._1_1_ = DAT_0df9;
      DAT_0df7._1_1_ = (byte)((uint3)_DAT_0c1f >> 8);
      DAT_0dfa._0_1_ = (byte)DAT_0df7;
      if ((DAT_0c17 | DAT_0c1f) != 0) {
        if (((DAT_0c17 | DAT_0c1f) & 0xf0) == 0) {
          DAT_0df6 = DAT_0c17;
          DAT_0df9 = DAT_0c1f;
          bVar5 = DAT_0df6;
          bVar4 = DAT_0df7._0_1_;
          bVar6 = DAT_0df9;
          do {
            DAT_0df9 = bVar6;
            DAT_0df7._1_1_ = bVar4;
            DAT_0df7._0_1_ = bVar3;
            DAT_0df6 = bVar5;
            bVar5 = DAT_0df6 >> 1;
            DAT_0df6 = DAT_0df7._0_1_ >> 1 | DAT_0df6 << 7;
            DAT_0df7._0_1_ = (byte)DAT_0df7 >> 1 | DAT_0df7._0_1_ << 7;
            bVar6 = DAT_0df9 >> 1;
            DAT_0df7._1_1_ = DAT_0dfa._0_1_ >> 1 | DAT_0df9 << 7;
            DAT_0dfa._1_1_ = (byte)DAT_0dfa >> 1 | DAT_0dfa._0_1_ << 7;
            bVar3 = DAT_0df6;
            bVar4 = DAT_0df7._0_1_;
            DAT_0df9 = (byte)DAT_0dfa;
            DAT_0dfa._0_1_ = (byte)DAT_0df7;
          } while (bVar5 != 0 || bVar6 != 0);
        }
        else {
          DAT_0df7._1_1_ = DAT_0df7._0_1_;
          bVar3 = DAT_0c17;
          DAT_0df7._0_1_ = DAT_0df6;
          bVar5 = (byte)DAT_0df7;
          bVar4 = DAT_0c1f;
          do {
            DAT_0df9 = bVar4;
            DAT_0df7._1_1_ = bVar5;
            DAT_0df6 = bVar3;
            bVar5 = (byte)DAT_0df7 << 1;
            bVar3 = DAT_0df7._0_1_ >> 7;
            DAT_0df7._0_1_ = DAT_0df7._0_1_ << 1 | (byte)DAT_0df7 >> 7;
            DAT_0df6 = DAT_0df6 << 1 | bVar3;
            bVar3 = (byte)DAT_0dfa >> 7;
            DAT_0dfa._1_1_ = (byte)DAT_0dfa << 1;
            bVar4 = DAT_0dfa._0_1_ >> 7;
            DAT_0dfa._0_1_ = DAT_0dfa._0_1_ << 1 | bVar3;
            DAT_0df7._1_1_ = DAT_0df9 << 1 | bVar4;
            bVar3 = DAT_0df6;
            DAT_0df9 = DAT_0dfa._0_1_;
            bVar4 = (byte)DAT_0df7;
          } while (((byte)DAT_0df7 | DAT_0df6) < 0x80);
        }
      }
      uVar7 = CONCAT11(DAT_0df6,DAT_0df7._0_1_);
      uVar2 = uVar7 / CONCAT11((byte)DAT_0df7,DAT_0df9);
      DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
      DAT_0dfa._1_1_ = (byte)uVar2;
      uVar1 = ((uint)(uVar7 % CONCAT11((byte)DAT_0df7,DAT_0df9)) << 0x10) /
              (uint)CONCAT11((byte)DAT_0df7,DAT_0df9);
      DAT_0dfc = (undefined1)(uVar1 >> 8);
      DAT_0dfd = (undefined1)uVar1;
      if (DAT_0dfa._0_1_ == '\0') {
        DAT_0c3e = CONCAT11((byte)DAT_0dfa,DAT_0dfc);
        DAT_0c38 = (ushort)DAT_0da0 << 2;
        if ((DAT_0c38 < DAT_0c3e) &&
           (DAT_0c3a = (ushort)DAT_0da1 * 4, DAT_0c3e <= DAT_0c3a && DAT_0c3a - DAT_0c3e != 0))
        goto LAB_f392;
      }
    }
  }
  DAT_0bfe = DAT_0bfe & 0xbf;
LAB_f39c:
  DAT_0df6 = (byte)(uVar7 >> 8);
  DAT_0df7._0_1_ = (byte)uVar7;
  DAT_0dfa._0_1_ = (byte)(uVar2 >> 8);
  DAT_0dfa._1_1_ = (byte)uVar2;
  return;
}


/* Entry f39d */

void FUN_f39d(void)

{
  DAT_0085 = DAT_08c4;
  return;
}


/* Entry f3b7 */

undefined2 FUN_f3b7(short param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  
  uVar3 = FUN_f3e1();
  cVar2 = (char)uVar3;
  param_1 = (uVar3 >> 8) + param_1;
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = *(byte *)(param_1 + 7) - *(byte *)(param_1 + 6);
    uVar3 = CONCAT11(cVar2,cVar1);
    if (*(byte *)(param_1 + 7) < *(byte *)(param_1 + 6)) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      param_1 = param_1 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + *(char *)(param_1 + 6),(char)sVar4);
}


/* Entry f3e1 */

undefined2 FUN_f3e1(ushort param_1,ushort param_2)

{
  undefined2 uVar1;
  
  if ((ushort)((uint)param_1 * (uint)param_2 >> 0x10) < 0x100) {
    uVar1 = (undefined2)((uint)param_1 * (uint)param_2 >> 8);
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}


/* Entry f3f3 */

void FUN_f3f3(void)

{
  byte bVar1;
  
  DAT_004e = 4;
  bVar1 = DAT_00e1;
  if ((bVar1 & 4) == 0) {
    DAT_0ab0 = DAT_0ab0 + 1;
    DAT_0b98 = CONCAT11((char)(DAT_0b98 + 1 >> 8),(char)(DAT_0b98 + 1) - (0xfffe < DAT_0b98));
  }
  else {
    bVar1 = DAT_004b;
    DAT_004b = bVar1 & 0xef | 0x20;
  }
  DAT_08be = DAT_08be & 0xef;
  return;
}


/* Entry f424 */

void FUN_f424(void)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = DAT_004c;
  if ((bVar1 & 8) == 0) {
LAB_f486:
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xf7;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
  }
  else if ((((~DAT_0880 & 0x40) == 0) && ((~DAT_0880 & 4) == 0)) && ((~DAT_088d & 0x20) == 0)) {
    bVar1 = DAT_00e1;
    if ((bVar1 & 8) == 0) goto LAB_f498;
    if ((DAT_0c03 & 0x1f) == DAT_0924) {
      if ((DAT_0a2e._0_1_ < DAT_0d9e) ||
         (DAT_0e32 = (DAT_0af0 + DAT_0aa4) - DAT_0b7a, -1 < DAT_0e32 - DAT_0a9a)) {
        DAT_0a93 = DAT_0a93 & 0xfd;
        sVar2 = DAT_0af0 + DAT_0aa4;
      }
      else {
        DAT_0a93 = DAT_0a93 | 2;
        sVar2 = DAT_0b7a + DAT_0a9a;
      }
      DAT_0056 = sVar2;
      DAT_0a92 = DAT_0a92 | 0x80;
      goto LAB_f486;
    }
  }
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0xf7;
LAB_f498:
  DAT_004e = 8;
  return;
}


/* Entry f49f */

void FUN_f49f(void)

{
  char cVar1;
  
  if ((((((((~DAT_088c & 0x20) == 0) && ((~DAT_08a0 & 4) == 0)) && ((~DAT_08b2 & 0x80) == 0)) &&
        (((~DAT_088c & 0x80) == 0 && ((~DAT_0d08 & 1) == 0)))) &&
       (((DAT_0884 & 7) == 0 && (((~DAT_0885 & 0x40) == 0 && ((~DAT_0bf8 & 0x80) == 0)))))) &&
      ((DAT_0dd9 == -0x80 || ((~DAT_08b0 & 8) == 0)))) &&
     (((~DAT_08b1 & 0x10) == 0 && ((DAT_0886 & 0xc1) == 0)))) {
    if ((~DAT_0886 & 4) == 0) {
      cVar1 = DAT_0923;
      if ((~DAT_088b & 0x80) == 0) {
        cVar1 = DAT_0c04;
      }
      if (cVar1 == DAT_0a1c) {
        FUN_f519();
      }
    }
    if ((~DAT_0886 & 2) == 0) {
      cVar1 = DAT_0923;
      if ((~DAT_088b & 0x80) == 0) {
        cVar1 = DAT_0c04;
      }
      if (cVar1 == DAT_0a1d) {
        FUN_f592();
      }
    }
    return;
  }
  return;
}


/* Entry f519 */

void FUN_f519(void)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  
  if (((~DAT_088c & 8) == 0) && ((~DAT_089a & 8) == 0)) {
    if ((DAT_08b1 & 0x80) == 0) {
      DAT_088c = DAT_088c & 0xcf;
      if ((DAT_09cf & 1) != 0) {
        DAT_09cf = DAT_09cf | 2;
      }
      DAT_08c1 = DAT_08c1 | 1;
      DAT_004e = 0x40;
      bVar3 = DAT_00e1;
      if ((bVar3 & 0x40) == 0) {
        sVar2 = DAT_005c;
        sVar1 = DAT_0044;
        if ((sVar2 - sVar1 < 0) || (DAT_0e02 = (sVar2 - sVar1) - DAT_0db2, (short)DAT_0e02 < 0)) {
          DAT_0e02 = 0;
        }
        if ((DAT_0e02 <= DAT_0b76) || (DAT_0b76 == 0)) {
          DAT_0b76 = DAT_0e02;
        }
        DAT_0b72 = DAT_0b76 + DAT_092a;
        DAT_0a18 = DAT_0a18 & 0x7f;
      }
      else {
        DAT_0b72 = DAT_092a;
        DAT_0b76 = 0;
      }
      FUN_c55b();
      DAT_08c1 = DAT_08c1 & 0xfe;
      return;
    }
    DAT_088c = DAT_088c & 0xcf;
  }
  return;
}


/* Entry f592 */

void FUN_f592(void)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  
  if ((((DAT_0d87 != '\t') && ((~DAT_088c & 0x10) == 0)) && ((~DAT_088c & 4) == 0)) &&
     (((~DAT_089a & 4) == 0 && ((DAT_08b1 & 0x80) == 0)))) {
    if ((DAT_09cf & 1) != 0) {
      DAT_09cf = DAT_09cf | 2;
    }
    DAT_08c1 = DAT_08c1 | 4;
    DAT_004e = 0x80;
    bVar3 = DAT_00e1;
    if ((bVar3 & 0x80) == 0) {
      sVar2 = DAT_005e;
      sVar1 = DAT_0044;
      if ((sVar2 - sVar1 < 0) || (DAT_0e02 = (sVar2 - sVar1) - DAT_0db2, (short)DAT_0e02 < 0)) {
        DAT_0e02 = 0;
      }
      if ((DAT_0e02 <= DAT_0b78) || (DAT_0b78 == 0)) {
        DAT_0b78 = DAT_0e02;
      }
      DAT_0b74 = DAT_0b78 + DAT_092c;
      DAT_0a18 = DAT_0a18 & 0xdf;
    }
    else {
      DAT_0b74 = DAT_092c;
      DAT_0b78 = 0;
    }
    FUN_c712();
    DAT_08c1 = DAT_08c1 & 0xfb;
    return;
  }
  return;
}


/* Entry f607 */

void FUN_f607(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  
  DAT_004e = 0x40;
  bVar1 = DAT_00e1;
  if ((bVar1 & 0x40) == 0) {
    sVar3 = DAT_0b72;
    if ((~DAT_0a18 & 0x80) != 0) {
      DAT_0a18 = DAT_0a18 & 0x7f;
      sVar3 = DAT_092a;
    }
    if ((~DAT_0cf2 & 1) == 0) {
      if (((DAT_0cf2 & 4) != 0) &&
         (DAT_0cf4 = (DAT_0cf4 + 1) - (0xfe < DAT_0cf4), DAT_0da5 <= DAT_0cf4)) {
        DAT_0cf2 = DAT_0cf2 & 0xfb;
      }
    }
    else {
      DAT_0cf3 = (DAT_0cf3 + 1) - (0xfe < DAT_0cf3);
      sVar3 = DAT_0cf6;
      if ((DAT_0da4 <= DAT_0cf3) && (DAT_0cf2 = DAT_0cf2 & 0xfe, DAT_0da5 != 0)) {
        DAT_0cf4 = 0;
        DAT_0cf2 = DAT_0cf2 | 4;
      }
    }
    sVar2 = DAT_005c;
    DAT_005c = sVar3 + sVar2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0x30;
    DAT_004e = 0x40;
    DAT_0a18 = DAT_0a18 & 0xf7;
    return;
  }
  if ((DAT_0a18 & 0x80) == 0) {
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    DAT_0a18 = DAT_0a18 & 0xf7;
    return;
  }
  sVar3 = DAT_0044;
  sVar2 = DAT_0a2a;
  if ((DAT_0a2a + -5) - sVar3 < 0) {
    sVar3 = DAT_0044;
    sVar2 = sVar3 + 5;
  }
  DAT_005c = sVar2;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 & 0xef | 0x20;
  DAT_004e = 0x40;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 0x40;
  DAT_0a18 = DAT_0a18 | 8;
  DAT_0a17 = DAT_0a17 | 8;
  DAT_0a19 = DAT_0a19 | 8;
  return;
}


/* Entry f6c0 */

void FUN_f6c0(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  
  DAT_004e = 0x80;
  bVar1 = DAT_00e1;
  if ((bVar1 & 0x80) == 0) {
    sVar3 = DAT_0b74;
    if ((~DAT_0a18 & 0x20) != 0) {
      DAT_0a18 = DAT_0a18 & 0xdf;
      sVar3 = DAT_092c;
    }
    if ((~DAT_0cf2 & 1) == 0) {
      if (((DAT_0cf2 & 4) != 0) &&
         (DAT_0cf4 = (DAT_0cf4 + 1) - (0xfe < DAT_0cf4), DAT_0da5 <= DAT_0cf4)) {
        DAT_0cf2 = DAT_0cf2 & 0xfb;
      }
    }
    else {
      DAT_0cf3 = (DAT_0cf3 + 1) - (0xfe < DAT_0cf3);
      sVar3 = DAT_0cfc;
      if ((DAT_0da4 <= DAT_0cf3) && (DAT_0cf2 = DAT_0cf2 & 0xfe, DAT_0da5 != 0)) {
        DAT_0cf4 = 0;
        DAT_0cf2 = DAT_0cf2 | 4;
      }
    }
    sVar2 = DAT_005e;
    DAT_005e = sVar3 + sVar2;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0xc0;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
    DAT_0a18 = DAT_0a18 & 0xfd;
    return;
  }
  if ((DAT_0a18 & 0x20) == 0) {
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0x7f;
    DAT_0a18 = DAT_0a18 & 0xfd;
    return;
  }
  sVar3 = DAT_0044;
  sVar2 = DAT_0a2c;
  if ((DAT_0a2c + -5) - sVar3 < 0) {
    sVar3 = DAT_0044;
    sVar2 = sVar3 + 5;
  }
  DAT_005e = sVar2;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 & 0xbf | 0x80;
  DAT_004e = 0x80;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 0x80;
  DAT_0a18 = DAT_0a18 | 2;
  DAT_0a17 = DAT_0a17 | 2;
  DAT_0a19 = DAT_0a19 | 2;
  return;
}


/* Entry f7a0 */

/* WARNING: This function may have set the stack pointer */

void application_init(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  byte extraout_A;
  byte extraout_A_00;
  ushort uVar5;
  ushort uVar6;
  
  DAT_00f8 = 0xc0;
  DAT_0082 = 0;
  DAT_0082 = 0x80;
  DAT_0083 = 0x40;
  DAT_0084 = 99;
  DAT_0085 = 0x10;
  DAT_0000 = 0xf8;
  DAT_0002 = 0x1f;
  if (DAT_18d3 == '\t') {
    uVar4 = 0xff;
  }
  else {
    uVar4 = 0xfd;
  }
  DAT_0001 = uVar4;
  DAT_0003 = 0xec;
  DAT_00f0 = 0xe0;
  DAT_00f2 = 0xff;
  DAT_00e0 = 0xfe;
  DAT_00e2 = 0xd9;
  DAT_00e8 = 0xff;
  DAT_00ea = 0xea;
  DAT_0009 = 0x9f;
  DAT_0033 = 0x80;
  DAT_0046 = 0x80;
  DAT_004d = 5;
  DAT_0040 = 0xd8;
  DAT_0048 = 0xf0;
  DAT_0049 = 0x80;
  DAT_0041 = 200;
  bVar1 = DAT_00ee;
  DAT_00ee = bVar1 | 10;
  RAM00d0 = 0x40;
  DAT_00d2._1_1_ = 0x24;
  DAT_00d8 = 0x50;
  DAT_00da = 3;
  uVar4 = DAT_00db;
  uVar4 = DAT_00dd;
  FUN_5fa4();
  bVar1 = DAT_0008;
  DAT_0008 = bVar1 & 0xf3;
  uVar4 = DAT_0001;
  DAT_0896 = CONCAT11(uVar4,uVar4);
  uVar4 = DAT_0000;
  DAT_0894 = CONCAT11(uVar4,uVar4);
  DAT_0880 = 0x44;
  DAT_0881 = 0xf0;
  DAT_0a16 = DAT_0a16 & 0xf7;
  DAT_0888 = 0x10;
  FUN_5fc8();
  DAT_0921 = 0xff;
  DAT_091b = 0xff;
  DAT_091c = 0xff;
  DAT_091d = 0xff;
  DAT_091e = 0xff;
  DAT_091f = 0xff;
  DAT_0920 = 0xff;
  DAT_0b09 = 0xff;
  DAT_0afd = 0xff;
  DAT_0b20 = 0xff;
  DAT_0b05 = 0xff;
  DAT_0b06 = 0xff;
  DAT_0b6e = 0xff;
  DAT_0b02 = 0xff;
  DAT_0b03 = 0xff;
  DAT_0a06 = 0xff;
  DAT_0b6c = 0xff;
  DAT_0a38 = 0xffff;
  DAT_0a3a = 0xffff;
  DAT_0a3c = 0xffff;
  DAT_0a3e = 0xffff;
  DAT_0a40 = 0xffff;
  DAT_0a42 = 0xffff;
  DAT_0a2e = 0xffff;
  DAT_0a34 = 0xffff;
  DAT_0a32 = 0xffff;
  DAT_0a30 = 0xffff;
  DAT_0a36 = 0xffff;
  DAT_0a46 = 0xffff;
  DAT_0a48 = 0xffff;
  DAT_0a44 = 0xffff;
  DAT_0a4b = 0xffff;
  DAT_0a4d = 0xff;
  DAT_0a80 = 0xffff;
  DAT_0982 = 0x8000;
  DAT_09b7 = 0x8080;
  DAT_09b9 = 0x8080;
  DAT_09bb = 0x8080;
  DAT_09bd = 0x8080;
  DAT_09bf = 0x8080;
  DAT_09c1 = 0x8080;
  DAT_09c3 = 0x8080;
  DAT_09c5 = 0x8080;
  DAT_095c = 0x80;
  DAT_095d = 0x80;
  DAT_0979 = 0x80;
  DAT_097a = 0x80;
  DAT_0938 = 0x80;
  DAT_0970 = 0x80;
  DAT_0978 = 0x80;
  DAT_0a86 = 0x80;
  DAT_08ed = 0x80;
  DAT_0bbb = 0x80;
  DAT_0922 = 0xc0;
  DAT_0c03 = 0xc0;
  DAT_08e0 = DAT_4e18;
  DAT_0bb4 = DAT_4e18;
  DAT_0889 = DAT_0889 | 0x20;
  DAT_08e4 = DAT_08e2;
  DAT_08c5 = 0x7f;
  DAT_0af7 = 0x7b;
  DAT_0b21 = 1;
  DAT_0924 = 6;
  DAT_095e = 0x1e0;
  DAT_092a = 0x9c4;
  DAT_092c = 0x9c4;
  DAT_0a22 = 0;
  DAT_0a24 = 0;
  DAT_0a26 = 0;
  DAT_0a28 = 0;
  DAT_0cab = DAT_0d7e + DAT_0d9d;
  if (DAT_0cab == 0x17) {
    DAT_0cab = 0x16;
  }
  else if (0x16 < DAT_0cab) {
    DAT_0cab = DAT_0cab - 0x18;
  }
  DAT_0a1c = DAT_18e0;
  if (0x16 < DAT_18e0) {
    DAT_0a1c = 0x16;
  }
  if (DAT_0a1c < 0xc) {
    if (DAT_0a1c == 0xb) {
      DAT_0a1c = 10;
    }
  }
  else {
    DAT_0a1c = DAT_0a1c - 0xc;
  }
  if (DAT_0d7b < 0x17) {
    DAT_0a1a = DAT_0d7b;
    if (DAT_0d7b == 0xb) {
      DAT_0a1a = 10;
    }
  }
  else {
    DAT_0a1a = 0x16;
  }
  if (DAT_4243 == '\x02') {
    DAT_0884 = DAT_0884 | 0x40;
  }
  DAT_0892 = DAT_0892 | 4;
  DAT_08a0 = DAT_08a0 | 0x80;
  DAT_08ae = DAT_08ae | 0x40;
  DAT_0880 = DAT_0880 | 0x80;
  DAT_088c = DAT_088c | 0x30;
  DAT_089e = DAT_089e | 0xc0;
  DAT_0a1d = DAT_0a1c;
  DAT_0a1e = DAT_0a1c;
  DAT_0a1f = DAT_0a1c;
  FUN_56b4();
  DAT_08e8 = DAT_0e3e;
  DAT_08ea = DAT_0e3e;
  uVar5 = DAT_0e3e;
  if ((char)(DAT_0e3e >> 8) == -1) {
    uVar5 = 0xfe00;
  }
  DAT_0ae9 = (undefined1)(uVar5 >> 8);
  DAT_08d0 = DAT_0e3e >> 6;
  DAT_0c86 = DAT_0e40;
  DAT_08f2 = DAT_0e40;
  DAT_0cb4 = DAT_0e40;
  DAT_0cb6 = DAT_0e40;
  DAT_0cc8 = DAT_0e40;
  DAT_0cca = DAT_0e40;
  DAT_0cc6 = DAT_0e40;
  DAT_08d8 = DAT_0e44;
  DAT_08d9 = DAT_0e46;
  DAT_0bce = DAT_0e46;
  DAT_08da = (ushort)DAT_0e46 << 8;
  uVar6 = (ushort)DAT_0e46 << 8;
  uVar5 = uVar6 / 0xf0;
  if (0xfe < uVar5) {
    uVar5 = 0xfe;
  }
  DAT_0aec = (undefined1)uVar5;
  DAT_08dd = DAT_0e48;
  DAT_08d2 = CONCAT11(DAT_0e4a,DAT_0aec);
  DAT_08d6 = DAT_0e4a;
  DAT_0880 = DAT_0880 | 0x30;
  DAT_0085 = 0;
  DAT_08d4 = DAT_08d2;
  DAT_08e6 = DAT_08d0;
  DAT_09d0 = DAT_08d0;
  DAT_0b0e = DAT_08d0;
  DAT_0b10 = DAT_08d0;
  DAT_0b12 = DAT_08d0;
  DAT_0b14 = DAT_08d0;
  DAT_0bb0 = DAT_08d0;
  DAT_0bb2 = DAT_08d0;
  DAT_0bbe = DAT_08d0;
  DAT_0bc0 = DAT_08d0;
  DAT_0bc2 = DAT_08d0;
  DAT_0bc4 = DAT_08d0;
  DAT_0bfc = DAT_08d2;
  FUN_5fa4(uVar6 % 0xf0);
  interp_u8_q8_index();
  DAT_0ae8 = (byte)((ushort)extraout_A * 0xa0 >> 8);
  if (0x95 < DAT_0ae8) {
    DAT_0ae8 = 0x95;
  }
  DAT_08f4 = extraout_A;
  DAT_08f6 = extraout_A;
  interp_u8_q8_index();
  DAT_0aeb = (byte)((ushort)extraout_A_00 * 0xa0 >> 8);
  if (0x95 < DAT_0aeb) {
    DAT_0aeb = 0x95;
  }
  DAT_0888 = DAT_0888 & 0xef;
  bVar1 = DAT_0008;
  DAT_0008 = bVar1 & 0xf3;
  DAT_0e26 = DAT_4fa0;
  DAT_08f5 = extraout_A_00;
  if (DAT_4e86 == 0x55aa) {
    FUN_5857();
  }
  if (DAT_4e88 == -0x55ab) {
    FUN_5c05();
    FUN_5d4d();
  }
  FUN_5d67();
  FUN_5cc7();
  FUN_592e();
  if ((DAT_0bd5 & 8) != 0) {
    DAT_0bd2 = DAT_0bd2 | 0x40;
  }
  if (DAT_0dd5 != -0x80) {
    DAT_0d08 = DAT_0d08 | 1;
    FUN_5ef1();
  }
  FUN_a489();
  FUN_5fbf();
  FUN_5fba();
  bVar1 = DAT_004a;
  DAT_004a = bVar1 & 0xfb | 8;
  bVar1 = DAT_004b;
  DAT_004b = bVar1 & 0xeb | 0x28;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 6;
  DAT_0af2 = DAT_0044;
  uVar4 = DAT_0001;
  DAT_0896 = CONCAT11(uVar4,uVar4);
  DAT_0af4 = DAT_0af2;
  DAT_0c00 = DAT_0af2;
  do {
    DAT_08bc = DAT_08bc ^ 0x80;
    DAT_0ffc = (undefined1 *)0x539b;
    FUN_5fa3();
    bVar1 = DAT_0020;
    if (((bVar1 & 1) != 0) && (sVar2 = DAT_0024, sVar2 == -0x5aa6)) {
      uVar3 = DAT_00d4;
      uVar4 = DAT_00d6._1_1_;
      DAT_00d2._1_1_ = 0;
      DAT_08a0 = 0x80;
      DAT_08ae = 0x40;
    }
    bVar1 = DAT_0020;
    if ((bVar1 & 4) != 0) {
      DAT_00cb = 0;
    }
    DAT_0ffc = (undefined1 *)0x53c5;
    FUN_6259();
    DAT_0ffc = (undefined1 *)0x53c8;
    FUN_6772();
    DAT_0ffc = (undefined1 *)0x53cb;
    FUN_f8a0();
    DAT_0ffc = (undefined1 *)0x53ce;
    FUN_6299();
    if ((DAT_0881 & 4) != 0) {
      DAT_0ffc = &LAB_53d6;
      FUN_8691();
    }
    if ((DAT_0881 & 2) != 0) {
      DAT_0ffc = &LAB_53de;
      FUN_869e();
    }
    if ((DAT_0887 & 2) != 0) {
      DAT_0ffc = &LAB_53e6;
      FUN_87e7();
    }
    if ((~DAT_0882 & 0x80) != 0) {
      DAT_0ffc = (undefined1 *)0x53f2;
      FUN_73a5();
      DAT_0a30 = DAT_0a2e;
      DAT_0a36 = DAT_0a34;
      DAT_0a32 = DAT_0a34 >> 2;
      if (((DAT_0c03 & 0x1f) < 2) || (5 < (DAT_0c03 & 0x1f))) {
        DAT_0ffc = (undefined1 *)0x541c;
        FUN_54f0();
        DAT_0924 = DAT_0de3;
        DAT_0a94 = DAT_0de5;
        DAT_0aa4 = DAT_0de7;
        DAT_0ffc = &LAB_5435;
        FUN_55b6();
      }
      if ((((((~DAT_08a0 & 4) == 0) && ((~DAT_08b2 & 0x80) == 0)) && (DAT_08f8 < &UNK_2800)) &&
          (((((~DAT_0884 & 4) == 0 && ((~DAT_0d08 & 1) == 0)) &&
            (((~DAT_0884 & 2) == 0 && (((~DAT_088c & 0x80) == 0 && ((~DAT_0885 & 0x40) == 0)))))) &&
           ((~DAT_0bf8 & 0x80) == 0)))) &&
         ((((~DAT_089b & 0x80) == 0 && ((~DAT_089b & 8) == 0)) && ((~DAT_0880 & 0x40) == 0)))) {
        DAT_0ffc = &LAB_5477;
        FUN_5664();
      }
      DAT_0882 = DAT_0882 & 0x7f;
    }
    DAT_0ffc = (undefined1 *)0x547e;
    FUN_857d();
    if ((DAT_0881 & 0x80) == 0) {
      DAT_0a16 = DAT_0a16 | 1;
LAB_5494:
      DAT_0ffc = &LAB_5497;
      FUN_74b8();
    }
    else if ((DAT_0881 & 0x40) == 0) {
      DAT_0a16 = DAT_0a16 | 2;
      goto LAB_5494;
    }
    DAT_0ffc = (undefined1 *)0x549a;
    FUN_6772();
    DAT_0ffc = (undefined1 *)0x549d;
    FUN_6299();
    if ((DAT_0882 & 0x40) != 0) {
      DAT_0ffc = &LAB_54a5;
      FUN_8b34();
    }
    if ((DAT_0887 & 0x20) != 0) {
      DAT_0ffc = &LAB_54ad;
      FUN_a557();
    }
    if ((DAT_0882 & 4) != 0) {
      DAT_0ffc = &LAB_54b5;
      FUN_a564();
    }
    if ((DAT_088e & 0x80) != 0) {
      DAT_0ffc = &LAB_54bd;
      FUN_ac7f();
    }
    if ((DAT_0882 & 0x20) != 0) {
      DAT_0ffc = &LAB_54c5;
      FUN_aff9();
    }
    if ((DAT_0882 & 0x10) != 0) {
      DAT_0ffc = &LAB_54cd;
      FUN_b166();
    }
    if ((DAT_0882 & 8) != 0) {
      DAT_0ffc = &LAB_54d5;
      FUN_b817();
    }
    if ((DAT_0882 & 2) != 0) {
      DAT_0ffc = &LAB_54dd;
      FUN_bc2e();
    }
    if ((DAT_0887 & 0x80) != 0) {
      DAT_0ffc = &LAB_54e5;
      FUN_c063();
    }
    if ((DAT_0887 & 0x40) != 0) {
      DAT_0ffc = &LAB_54ed;
      FUN_c199();
    }
  } while( true );
}


/* Entry f7a4 */

void default_interrupt_loop(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Entry f7a6 */

undefined2 dispatch_stub_f7a6(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7aa */

undefined2 dispatch_stub_f7aa(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7ae */

undefined2 dispatch_stub_f7ae(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7b2 */

undefined2 dispatch_stub_f7b2(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7b6 */

undefined2 dispatch_stub_f7b6(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_cdc0();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7ba */

undefined2 dispatch_stub_f7ba(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7be */

undefined2 dispatch_stub_f7be(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7c2 */

undefined2 dispatch_stub_f7c2(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7c6 */

undefined2 dispatch_stub_f7c6(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7ca */

undefined2 dispatch_stub_f7ca(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_f6c0();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7ce */

undefined2 dispatch_stub_f7ce(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_f607();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7d2 */

undefined2 dispatch_stub_f7d2(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7d6 */

undefined2 dispatch_stub_f7d6(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7da */

undefined2 dispatch_stub_f7da(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_f424();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7de */

undefined2 dispatch_stub_f7de(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_f3f3();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7e2 */

undefined2 dispatch_stub_f7e2(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_d871();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7e6 */

undefined2 dispatch_stub_f7e6(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7ea */

undefined2 dispatch_stub_f7ea(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_cca9();
  return CONCAT11(param_1,in_stack_00000001);
}


/* UNAVAILABLE: FUN_f8a0 at f8a0 - target outside supplied application code. */
