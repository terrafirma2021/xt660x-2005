/* Entry 5000 */

/* WARNING: This function may have set the stack pointer */

void application_init(void)

{
  short sVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  byte extraout_A;
  byte bVar6;
  byte extraout_A_00;
  undefined2 uVar7;
  ushort uVar8;
  ushort uVar9;
  
  DAT_00f8 = 0xc0;
  DAT_0082 = 0;
  DAT_0082 = 0x80;
  DAT_0083 = 0x40;
  DAT_0084 = 99;
  DAT_0085 = 0x10;
  DAT_0000 = 0xf8;
  DAT_0002 = 0x1f;
  if (DAT_18d3 == '\t') {
    uVar5 = 0xff;
  }
  else {
    uVar5 = 0xfd;
  }
  DAT_0001 = uVar5;
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
  bVar6 = DAT_00ee;
  DAT_00ee = bVar6 | 10;
  RAM00d0 = 0x40;
  DAT_00d2._1_1_ = 0x24;
  DAT_00d8 = 0x50;
  DAT_00da = 3;
  uVar5 = DAT_00db;
  uVar5 = DAT_00dd;
  FUN_5fa4();
  bVar6 = DAT_0008;
  DAT_0008 = bVar6 & 0xf3;
  uVar5 = DAT_0001;
  DAT_0896 = CONCAT11(uVar5,uVar5);
  uVar5 = DAT_0000;
  DAT_0894 = CONCAT11(uVar5,uVar5);
  DAT_0880 = 0x44;
  DAT_0881 = 0xf0;
  bVar6 = DAT_0a16;
  DAT_0a16 = bVar6 & 0xf7;
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
  bVar6 = DAT_0889;
  DAT_0889 = bVar6 | 0x20;
  uVar7 = DAT_08e2;
  DAT_08e4 = uVar7;
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
  cVar3 = DAT_0d7e;
  cVar4 = DAT_0d9d;
  bVar6 = cVar3 + cVar4;
  if (bVar6 == 0x17) {
    bVar6 = 0x16;
  }
  else if (0x16 < bVar6) {
    bVar6 = bVar6 - 0x18;
  }
  DAT_0cab = bVar6;
  bVar6 = DAT_18e0;
  if (0x16 < DAT_18e0) {
    bVar6 = 0x16;
  }
  if (bVar6 < 0xc) {
    if (bVar6 == 0xb) {
      bVar6 = 10;
    }
  }
  else {
    bVar6 = bVar6 - 0xc;
  }
  DAT_0a1c = bVar6;
  DAT_0a1e = bVar6;
  DAT_0a1d = bVar6;
  DAT_0a1f = bVar6;
  bVar6 = DAT_0d7b;
  if (bVar6 < 0x17) {
    if (bVar6 == 0xb) {
      bVar6 = 10;
    }
  }
  else {
    bVar6 = 0x16;
  }
  DAT_0a1a = bVar6;
  if (DAT_4243 == '\x02') {
    bVar6 = DAT_0884;
    DAT_0884 = bVar6 | 0x40;
  }
  bVar6 = DAT_0892;
  DAT_0892 = bVar6 | 4;
  bVar6 = DAT_08a0;
  DAT_08a0 = bVar6 | 0x80;
  bVar6 = DAT_08ae;
  DAT_08ae = bVar6 | 0x40;
  bVar6 = DAT_0880;
  DAT_0880 = bVar6 | 0x80;
  bVar6 = DAT_088c;
  DAT_088c = bVar6 | 0x20;
  bVar6 = DAT_088c;
  DAT_088c = bVar6 | 0x10;
  bVar6 = DAT_089e;
  DAT_089e = bVar6 | 0x80;
  bVar6 = DAT_089e;
  DAT_089e = bVar6 | 0x40;
  FUN_56b4();
  uVar7 = DAT_0e3e;
  DAT_08e8 = uVar7;
  DAT_08ea = uVar7;
  if ((char)((ushort)uVar7 >> 8) == -1) {
    uVar7 = 0xfe00;
  }
  DAT_0ae9 = (char)((ushort)uVar7 >> 8);
  uVar8 = DAT_0e3e;
  uVar8 = uVar8 >> 6;
  DAT_08d0 = uVar8;
  DAT_0bb0 = uVar8;
  DAT_0bb2 = uVar8;
  DAT_08e6 = uVar8;
  DAT_09d0 = uVar8;
  DAT_0b0e = uVar8;
  DAT_0b10 = uVar8;
  DAT_0b12 = uVar8;
  DAT_0b14 = uVar8;
  DAT_0bbe = uVar8;
  DAT_0bc0 = uVar8;
  DAT_0bc2 = uVar8;
  DAT_0bc4 = uVar8;
  uVar7 = DAT_0e40;
  DAT_0c86 = uVar7;
  bVar6 = DAT_0880;
  DAT_0880 = bVar6 | 0x20;
  DAT_08f2 = uVar7;
  DAT_0cb4 = uVar7;
  DAT_0cb6 = uVar7;
  DAT_0cc8 = uVar7;
  DAT_0cca = uVar7;
  DAT_0cc6 = uVar7;
  uVar5 = DAT_0e44;
  DAT_08d8 = uVar5;
  bVar6 = DAT_0e46;
  DAT_08d9 = bVar6;
  DAT_0bce = bVar6;
  DAT_08da = (ushort)bVar6 << 8;
  uVar9 = (ushort)bVar6 << 8;
  uVar8 = uVar9 / 0xf0;
  if (0xfe < uVar8) {
    uVar8 = 0xfe;
  }
  DAT_0aec = (char)uVar8;
  uVar5 = DAT_0e48;
  DAT_08dd = uVar5;
  uVar5 = DAT_0e4a;
  uVar7 = CONCAT11(uVar5,(char)uVar8);
  DAT_08d6 = uVar5;
  DAT_08d2 = uVar7;
  DAT_08d4 = uVar7;
  DAT_0bfc = uVar7;
  bVar6 = DAT_0880;
  DAT_0880 = bVar6 | 0x10;
  DAT_0085 = 0;
  FUN_5fa4(uVar9 % 0xf0);
  bVar6 = DAT_08d6;
  uVar8 = interp_u8_q8_index((ushort)bVar6 * 0x20,(byte *)((short)&DAT_4f22 + 1));
  extraout_A = (byte)(uVar8 >> 8);
  DAT_08f4 = extraout_A;
  DAT_08f6 = extraout_A;
  bVar6 = (byte)((ushort)extraout_A * 0xa0 >> 8);
  if (0x95 < bVar6) {
    bVar6 = 0x95;
  }
  DAT_0ae8 = bVar6;
  bVar6 = DAT_08d8;
  uVar8 = interp_u8_q8_index((ushort)bVar6 * 0x20,(byte *)((short)&DAT_4f22 + 1));
  extraout_A_00 = (byte)(uVar8 >> 8);
  DAT_08f5 = extraout_A_00;
  bVar6 = (byte)((ushort)extraout_A_00 * 0xa0 >> 8);
  if (0x95 < bVar6) {
    bVar6 = 0x95;
  }
  DAT_0aeb = bVar6;
  bVar6 = DAT_0888;
  DAT_0888 = bVar6 & 0xef;
  bVar6 = DAT_0008;
  DAT_0008 = bVar6 & 0xf3;
  DAT_0e26 = DAT_4fa0;
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
  bVar6 = DAT_0bd5;
  if ((bVar6 & 8) != 0) {
    bVar6 = DAT_0bd2;
    DAT_0bd2 = bVar6 | 0x40;
  }
  cVar3 = DAT_0dd5;
  if (cVar3 != -0x80) {
    bVar6 = DAT_0d08;
    DAT_0d08 = bVar6 | 1;
    FUN_5ef1();
  }
  FUN_a489();
  FUN_5fbf();
  FUN_5fba();
  bVar6 = DAT_004a;
  DAT_004a = bVar6 & 0xfb | 8;
  bVar6 = DAT_004b;
  DAT_004b = bVar6 & 0xeb | 0x28;
  bVar6 = DAT_004c;
  DAT_004c = bVar6 | 6;
  uVar7 = DAT_0044;
  DAT_0af4 = uVar7;
  DAT_0af2 = uVar7;
  DAT_0c00 = uVar7;
  uVar5 = DAT_0001;
  DAT_0896 = CONCAT11(uVar5,uVar5);
  do {
    bVar6 = DAT_08bc;
    DAT_08bc = bVar6 ^ 0x80;
    DAT_0ffc = 0x539b;
    FUN_5fa3();
    bVar6 = DAT_0020;
    if (((bVar6 & 1) != 0) && (sVar1 = DAT_0024, sVar1 == -0x5aa6)) {
      uVar7 = DAT_00d4;
      uVar5 = DAT_00d6._1_1_;
      DAT_00d2._1_1_ = 0;
      DAT_08a0 = 0x80;
      DAT_08ae = 0x40;
    }
    bVar6 = DAT_0020;
    if ((bVar6 & 4) != 0) {
      DAT_00cb = 0;
    }
    DAT_0ffc = 0x53c5;
    FUN_6259();
    DAT_0ffc = 0x53c8;
    FUN_6772();
    DAT_0ffc = 0x53cb;
    FUN_f8a0();
    DAT_0ffc = 0x53ce;
    FUN_6299();
    bVar6 = DAT_0881;
    if ((bVar6 & 4) != 0) {
      DAT_0ffc = 0x53d6;
      FUN_8691();
    }
    bVar6 = DAT_0881;
    if ((bVar6 & 2) != 0) {
      DAT_0ffc = 0x53de;
      FUN_869e();
    }
    bVar6 = DAT_0887;
    if ((bVar6 & 2) != 0) {
      DAT_0ffc = 0x53e6;
      FUN_87e7();
    }
    bVar6 = DAT_0882;
    if ((~bVar6 & 0x80) != 0) {
      DAT_0ffc = 0x53f2;
      FUN_73a5();
      uVar7 = DAT_0a2e;
      DAT_0a30 = uVar7;
      uVar8 = DAT_0a34;
      DAT_0a36 = uVar8;
      DAT_0a32 = uVar8 >> 2;
      bVar6 = DAT_0c03;
      if (((bVar6 & 0x1f) < 2) || (5 < (bVar6 & 0x1f))) {
        uVar5 = DAT_0a82;
        DAT_0ffc = 0x541c;
        FUN_54f0();
        uVar5 = DAT_0de3;
        DAT_0924 = uVar5;
        uVar7 = DAT_0de5;
        DAT_0a94 = uVar7;
        uVar7 = DAT_0de7;
        DAT_0aa4 = uVar7;
        DAT_0ffc = 0x5435;
        FUN_55b6();
      }
      bVar6 = DAT_08a0;
      if ((((((~bVar6 & 4) == 0) && (bVar6 = DAT_08b2, (~bVar6 & 0x80) == 0)) &&
           (puVar2 = (undefined *)DAT_08f8, puVar2 < &UNK_2800)) &&
          ((((bVar6 = DAT_0884, (~bVar6 & 4) == 0 && (bVar6 = DAT_0d08, (~bVar6 & 1) == 0)) &&
            ((bVar6 = DAT_0884, (~bVar6 & 2) == 0 &&
             ((bVar6 = DAT_088c, (~bVar6 & 0x80) == 0 && (bVar6 = DAT_0885, (~bVar6 & 0x40) == 0))))
            )) && (bVar6 = DAT_0bf8, (~bVar6 & 0x80) == 0)))) &&
         (((bVar6 = DAT_089b, (~bVar6 & 0x80) == 0 && (bVar6 = DAT_089b, (~bVar6 & 8) == 0)) &&
          (bVar6 = DAT_0880, (~bVar6 & 0x40) == 0)))) {
        DAT_0ffc = 0x5477;
        FUN_5664();
      }
      bVar6 = DAT_0882;
      DAT_0882 = bVar6 & 0x7f;
    }
    DAT_0ffc = 0x547e;
    FUN_857d();
    bVar6 = DAT_0881;
    if ((bVar6 & 0x80) == 0) {
      bVar6 = DAT_0a16;
      DAT_0a16 = bVar6 | 1;
LAB_5494:
      DAT_0ffc = 0x5497;
      FUN_74b8();
    }
    else {
      bVar6 = DAT_0881;
      if ((bVar6 & 0x40) == 0) {
        bVar6 = DAT_0a16;
        DAT_0a16 = bVar6 | 2;
        goto LAB_5494;
      }
    }
    DAT_0ffc = 0x549a;
    FUN_6772();
    DAT_0ffc = 0x549d;
    FUN_6299();
    bVar6 = DAT_0882;
    if ((bVar6 & 0x40) != 0) {
      DAT_0ffc = 0x54a5;
      FUN_8b34();
    }
    bVar6 = DAT_0887;
    if ((bVar6 & 0x20) != 0) {
      DAT_0ffc = 0x54ad;
      FUN_a557();
    }
    bVar6 = DAT_0882;
    if ((bVar6 & 4) != 0) {
      DAT_0ffc = 0x54b5;
      FUN_a564();
    }
    bVar6 = DAT_088e;
    if ((bVar6 & 0x80) != 0) {
      DAT_0ffc = 0x54bd;
      FUN_ac7f();
    }
    bVar6 = DAT_0882;
    if ((bVar6 & 0x20) != 0) {
      DAT_0ffc = 0x54c5;
      FUN_aff9();
    }
    bVar6 = DAT_0882;
    if ((bVar6 & 0x10) != 0) {
      DAT_0ffc = 0x54cd;
      FUN_b166();
    }
    bVar6 = DAT_0882;
    if ((bVar6 & 8) != 0) {
      DAT_0ffc = 0x54d5;
      FUN_b817();
    }
    bVar6 = DAT_0882;
    if ((bVar6 & 2) != 0) {
      DAT_0ffc = 0x54dd;
      FUN_bc2e();
    }
    bVar6 = DAT_0887;
    if ((bVar6 & 0x80) != 0) {
      DAT_0ffc = 0x54e5;
      FUN_c063();
    }
    bVar6 = DAT_0887;
    if ((bVar6 & 0x40) != 0) {
      DAT_0ffc = 0x54ed;
      FUN_c199();
    }
  } while( true );
}


