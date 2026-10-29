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


