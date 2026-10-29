/* Whole supplied application: approximate structured C; raw instruction semantics in full/instructions.jsonl. */
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
    if ((~bVar6 & 0x80) == 0) {
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
      if ((((((~bVar6 & 4) != 0) && (bVar6 = DAT_08b2, (~bVar6 & 0x80) != 0)) &&
           (puVar2 = (undefined *)DAT_08f8, puVar2 < &UNK_2800)) &&
          ((((bVar6 = DAT_0884, (~bVar6 & 4) != 0 && (bVar6 = DAT_0d08, (~bVar6 & 1) != 0)) &&
            ((bVar6 = DAT_0884, (~bVar6 & 2) != 0 &&
             ((bVar6 = DAT_088c, (~bVar6 & 0x80) != 0 && (bVar6 = DAT_0885, (~bVar6 & 0x40) != 0))))
            )) && (bVar6 = DAT_0bf8, (~bVar6 & 0x80) != 0)))) &&
         (((bVar6 = DAT_089b, (~bVar6 & 0x80) != 0 && (bVar6 = DAT_089b, (~bVar6 & 8) != 0)) &&
          (bVar6 = DAT_0880, (~bVar6 & 0x40) != 0)))) {
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


/* Entry 54f0 */

void FUN_54f0(undefined2 param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  
  uVar3 = (undefined1)((ushort)param_1 >> 8);
  DAT_0dde._0_1_ = uVar3;
  DAT_0dde._1_1_ = uVar3;
  uVar4 = DAT_0a36;
  uVar4 = scale_u16_by_u8(uVar4,(byte *)((short)&DAT_0dde + 1));
  DAT_0de0 = uVar4;
  bVar2 = DAT_0a8b;
  uVar6 = DAT_0de0;
  uVar4 = bVar2 + uVar6;
  if (CARRY2((ushort)bVar2,uVar6)) {
    uVar4 = 0xffff;
  }
  sVar5 = uVar4 - DAT_4f9e;
  if (uVar4 < DAT_4f9e) {
    sVar5 = 0;
  }
  DAT_0de5 = sVar5;
  uVar4 = DAT_0a32;
  uVar6 = DAT_0de5;
  if ((uVar4 < uVar6) || (uVar1 = DAT_0db4, uVar4 - uVar6 < uVar1)) {
    uVar1 = DAT_0a32;
    uVar6 = DAT_0a30;
    uVar4 = uVar1 + uVar6;
    if (CARRY2(uVar1,uVar6)) {
      uVar4 = 0xffff;
    }
    uVar1 = DAT_0de5;
    uVar6 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      uVar1 = DAT_0a32;
      uVar6 = DAT_0a30;
      uVar4 = uVar1 + uVar6;
      if (CARRY2(uVar1,uVar6)) {
        uVar4 = 0xffff;
      }
      uVar1 = DAT_0a30;
      uVar6 = uVar4 + uVar1;
      if (CARRY2(uVar4,uVar1)) {
        uVar6 = 0xffff;
      }
      uVar1 = DAT_0de5;
      uVar4 = uVar6 - uVar1;
      if (uVar6 < uVar1) {
        uVar6 = DAT_0a32;
        uVar1 = DAT_0a36;
        uVar4 = uVar6 + uVar1;
        if (CARRY2(uVar6,uVar1)) {
          uVar4 = 0xffff;
        }
        uVar1 = DAT_0de5;
        uVar6 = uVar4 - uVar1;
        if ((uVar4 < uVar1) || (uVar4 = DAT_0db4, uVar6 < uVar4)) {
          uVar6 = DAT_0db4;
        }
        DAT_0de7 = uVar6;
        DAT_0de3 = 3;
      }
      else {
        uVar6 = DAT_0db4;
        if (uVar4 < uVar6) {
          sVar5 = DAT_0a30;
          DAT_0de7 = uVar4 + sVar5;
          DAT_0de3 = 3;
        }
        else {
          DAT_0de7 = uVar4;
          DAT_0de3 = 4;
        }
      }
    }
    else {
      uVar4 = DAT_0db4;
      if (uVar6 < uVar4) {
        sVar5 = DAT_0a30;
        DAT_0de7 = uVar6 + sVar5;
        DAT_0de3 = 4;
      }
      else {
        DAT_0de7 = uVar6;
        DAT_0de3 = 5;
      }
    }
  }
  else {
    DAT_0de7 = uVar4 - uVar6;
    DAT_0de3 = 6;
  }
  return;
}


/* Entry 55b6 */

void FUN_55b6(void)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  
  DAT_0dde._0_1_ = 1;
  sVar2 = DAT_0a96;
  RAM0ddf = sVar2;
  sVar6 = DAT_0a94;
  uVar1 = sVar2 + sVar6;
  uVar3 = DAT_0a32;
  if (uVar1 < uVar3) {
    RAM0de1 = uVar1;
    sVar6 = DAT_0a32;
    sVar2 = RAM0de1;
    uVar1 = sVar6 - sVar2;
    uVar3 = DAT_0db0;
    if (uVar3 <= uVar1) {
      DAT_0aa2 = uVar1;
      DAT_0925 = 6;
      return;
    }
    sVar6 = DAT_0a30;
    DAT_0aa2 = uVar1 + sVar6;
    DAT_0925 = 5;
    return;
  }
  sVar6 = DAT_0a32;
  RAM0de1 = uVar1 - sVar6;
  sVar2 = RAM0de1;
  sVar6 = DAT_0db0;
  RAM0de3 = -sVar6 - sVar2;
  do {
    uVar3 = RAM0de3;
    uVar1 = DAT_0a30;
    sVar6 = uVar3 + uVar1;
    if (CARRY2(uVar3,uVar1)) goto LAB_5628;
    RAM0de3 = sVar6;
    cVar4 = DAT_0dde._0_1_;
    DAT_0dde._0_1_ = cVar4 + 1U;
  } while ((byte)(cVar4 + 1U) < 9);
  uVar3 = RAM0de3;
  uVar1 = DAT_0a30;
  sVar6 = uVar3 + uVar1;
  if (!CARRY2(uVar3,uVar1)) {
    sVar6 = 0;
  }
LAB_5628:
  sVar2 = DAT_0db0;
  DAT_0aa2 = sVar6 + sVar2;
  bVar5 = DAT_0dde._0_1_;
  if (bVar5 < 7) {
    cVar4 = DAT_0dde._0_1_;
    DAT_0925 = 6U - cVar4 & 0x1f;
  }
  else {
    if (bVar5 == 7) {
      uVar3 = DAT_0aa2;
      uVar1 = DAT_0a30;
      sVar6 = uVar3 + uVar1;
      if (CARRY2(uVar3,uVar1)) {
        sVar6 = DAT_0db0;
        sVar2 = DAT_0a30;
        sVar6 = sVar6 + sVar2;
      }
      DAT_0aa2 = sVar6;
    }
    DAT_0925 = 10;
  }
  return;
}


/* Entry 5664 */

void FUN_5664(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  short sVar5;
  
  bVar1 = DAT_088c;
  if (((((~bVar1 & 2) != 0) && (bVar1 = DAT_089a, (~bVar1 & 2) != 0)) &&
      (bVar1 = DAT_00e1, (bVar1 & 8) == 0)) &&
     (bVar4 = DAT_0c03, bVar1 = DAT_0925, (bVar4 & 0x1f) == bVar1)) {
    sVar5 = DAT_0044;
    DAT_0dde = sVar5 + DAT_4f20;
    sVar3 = DAT_0af0;
    sVar2 = DAT_0aa2;
    sVar5 = DAT_0dde;
    sVar5 = (sVar3 + sVar2) - sVar5;
    if (sVar5 < 0) {
      sVar5 = DAT_0dde;
    }
    else {
      sVar2 = DAT_0dde;
      sVar5 = sVar5 + sVar2;
    }
    DAT_0b7a = sVar5;
    DAT_0056 = sVar5;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 | 0xc0;
    DAT_004e = 8;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 8;
    bVar1 = DAT_0a92;
    DAT_0a92 = bVar1 | 8;
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
  byte bVar2;
  char cVar3;
  
  cVar3 = DAT_0e3b;
  DAT_0e3b = cVar3 + '\x01';
  bVar2 = DAT_0e3b;
  if ((BYTE_ARRAY_56cb[bVar2 & 3] & 1) == 0) {
    bVar1 = DAT_0e28;
    DAT_0e28 = bVar1 & 0x7f;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 & 0xfb;
  }
  else {
    bVar1 = DAT_0e28;
    DAT_0e28 = bVar1 | 0x80;
    bVar1 = DAT_0008;
    DAT_0008 = bVar1 | 4;
  }
  if ((BYTE_ARRAY_56cb[bVar2 & 3] & 2) == 0) {
    bVar2 = DAT_0e28;
    DAT_0e28 = bVar2 & 0xbf;
    bVar2 = DAT_0008;
    DAT_0008 = bVar2 & 0xf7;
  }
  else {
    bVar2 = DAT_0e28;
    DAT_0e28 = bVar2 | 0x40;
    bVar2 = DAT_0008;
    DAT_0008 = bVar2 | 8;
  }
  DAT_0083 = 0x40;
  DAT_0084 = 99;
  DAT_0085 = 0x10;
  return;
}


/* Entry 5728 */

void FUN_5728(void)

{
  undefined2 uVar1;
  short sVar2;
  byte bVar3;
  
  while (bVar3 = DAT_0086, (~bVar3 & 0x80) != 0) {
    sVar2 = DAT_0e3c;
    DAT_0e3c = sVar2 + 1;
  }
  uVar1 = DAT_0090;
  DAT_0e3e = uVar1;
  uVar1 = DAT_0092;
  DAT_0e40 = uVar1;
  uVar1 = DAT_0094;
  DAT_0e42 = uVar1;
  uVar1 = DAT_0096;
  RAM0e44 = uVar1;
  uVar1 = DAT_0098;
  RAM0e46 = uVar1;
  uVar1 = DAT_009a;
  RAM0e48 = uVar1;
  bVar3 = DAT_0e3b;
  bVar3 = bVar3 & 3;
  if (bVar3 != 0) {
    if (bVar3 == 1) {
      uVar1 = DAT_009c;
      DAT_0e4c = uVar1;
      goto LAB_5784;
    }
    if (bVar3 == 2) {
      uVar1 = DAT_009c;
      DAT_0e4e = uVar1;
      goto LAB_5784;
    }
    if (bVar3 == 3) {
      uVar1 = DAT_009c;
      DAT_0e50 = uVar1;
      goto LAB_5784;
    }
  }
  uVar1 = DAT_009c;
  RAM0e4a = uVar1;
LAB_5784:
  bVar3 = DAT_0e3b;
  bVar3 = bVar3 & 3;
  if (bVar3 != 0) {
    if (bVar3 == 1) {
      uVar1 = DAT_009e;
      DAT_0e54 = uVar1;
      return;
    }
    if (bVar3 == 2) {
      uVar1 = DAT_009e;
      DAT_0e56 = uVar1;
      return;
    }
    if (bVar3 == 3) {
      uVar1 = DAT_009e;
      DAT_0e58 = uVar1;
      return;
    }
  }
  uVar1 = DAT_009e;
  DAT_0e52 = uVar1;
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
  undefined1 uVar3;
  
  DAT_0dde._0_1_ = (char)((ushort)param_1 >> 8);
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
  uVar3 = DAT_0dde._0_1_;
  DAT_00dd = uVar3;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 & 0xf7;
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 | 8;
  bVar2 = DAT_0891;
  DAT_0891 = bVar2 | 2;
  return CONCAT11(uVar1,uVar3);
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
  bVar1 = DAT_0891;
  DAT_0891 = bVar1 & 0xfd;
  return;
}


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
  if ((cVar2 != -0x80) && (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)) {
    bVar1 = DAT_08b4;
    if (((~bVar1 & 2) == 0) || (bVar1 = DAT_08b4, (~bVar1 & 1) == 0)) {
      bVar1 = DAT_08b1;
      if ((~bVar1 & 2) != 0) {
        bVar1 = DAT_08b1;
        DAT_08b1 = bVar1 | 2;
        bVar1 = DAT_0bd2;
        DAT_0bd2 = bVar1 | 0x20;
        bVar1 = DAT_08ba;
        if ((~bVar1 & 2) != 0) {
          bVar1 = DAT_08ba;
          DAT_08ba = bVar1 | 2;
          bVar1 = DAT_0bd2;
          DAT_0bd2 = bVar1 | 2;
        }
      }
    }
    else {
      bVar1 = DAT_08b1;
      if ((bVar1 & 2) != 0) {
        bVar1 = DAT_08b1;
        DAT_08b1 = bVar1 & 0xfd;
        bVar1 = DAT_0bd2;
        DAT_0bd2 = bVar1 | 0x20;
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
  bVar1 = DAT_0891;
  DAT_0891 = bVar1 & 0xfd;
  return;
}


/* Entry 5b68 */

void candidate_unreferenced_5b68(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_57b4(&DAT_0c10);
  DAT_09b7._0_1_ = uVar1;
  uVar1 = FUN_57b4(0xc11);
  DAT_09b7._1_1_ = uVar1;
  uVar1 = FUN_57b4(&UNK_0c12);
  DAT_09b9._0_1_ = uVar1;
  uVar1 = FUN_57b4(&DAT_0c13);
  DAT_09b9._1_1_ = uVar1;
  FUN_5fa4();
  uVar1 = FUN_57b4(&DAT_0c14);
  DAT_09bb._0_1_ = uVar1;
  uVar1 = FUN_57b4(0xc15);
  DAT_09bb._1_1_ = uVar1;
  uVar1 = FUN_57b4(&UNK_0c16);
  DAT_09bd._0_1_ = uVar1;
  uVar1 = FUN_57b4(&DAT_0c17);
  DAT_09bd._1_1_ = uVar1;
  FUN_5fa4();
  uVar1 = FUN_57b4(&DAT_0c18);
  DAT_09bf._0_1_ = uVar1;
  uVar1 = FUN_57b4(0xc19);
  DAT_09bf._1_1_ = uVar1;
  uVar1 = FUN_57b4(&UNK_0c1a);
  DAT_09c1._0_1_ = uVar1;
  uVar1 = FUN_57b4(&DAT_0c1b);
  DAT_09c1._1_1_ = uVar1;
  FUN_5fa4();
  uVar1 = FUN_57b4(&DAT_0c1c);
  DAT_09c3._0_1_ = uVar1;
  uVar1 = FUN_57b4(0xc1d);
  DAT_09c3._1_1_ = uVar1;
  uVar1 = FUN_57b4(&UNK_0c1e);
  DAT_09c5._0_1_ = uVar1;
  uVar1 = FUN_57b4(&DAT_0c1f);
  DAT_09c5._1_1_ = uVar1;
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
  bVar1 = DAT_0891;
  DAT_0891 = bVar1 & 0xfd;
  return;
}


/* Entry 5cc7 */

void FUN_5cc7(void)

{
  byte bVar1;
  char cVar2;
  undefined1 extraout_B;
  undefined1 extraout_B_00;
  byte extraout_B_01;
  byte bVar3;
  undefined1 extraout_B_02;
  byte extraout_B_03;
  undefined1 extraout_B_04;
  undefined1 extraout_B_05;
  undefined1 extraout_B_06;
  undefined1 extraout_B_07;
  
  FUN_57b4();
  DAT_0bd4 = extraout_B;
  DAT_08af = extraout_B;
  FUN_57b4();
  DAT_0bd6 = extraout_B_00;
  DAT_08b1 = extraout_B_00;
  FUN_57b4();
  DAT_0bd5 = extraout_B_01;
  cVar2 = DAT_0d5b;
  bVar3 = extraout_B_01;
  if ((cVar2 != -0x80) && (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)) {
    bVar3 = extraout_B_01 & 0xf7;
  }
  DAT_08b0 = bVar3;
  FUN_57b4(&DAT_0c23);
  DAT_0bd7 = extraout_B_02;
  DAT_08b2 = extraout_B_02;
  FUN_5fa4();
  FUN_57b4(&DAT_0c28);
  DAT_0bea = extraout_B_03;
  DAT_08b4 = extraout_B_03 & 0x30;
  FUN_5fa4();
  FUN_57b4(&DAT_0c24);
  DAT_0bd8 = extraout_B_04;
  DAT_08b8 = extraout_B_04;
  FUN_57b4(0xc25);
  DAT_0bd9 = extraout_B_05;
  DAT_08b9 = extraout_B_05;
  FUN_57b4(&UNK_0c26);
  DAT_0bda = extraout_B_06;
  DAT_08ba = extraout_B_06;
  FUN_57b4(&DAT_0c27);
  DAT_0bdb = extraout_B_07;
  DAT_08bb = extraout_B_07;
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
  bVar1 = DAT_0891;
  DAT_0891 = bVar1 & 0xfd;
  return;
}


/* Entry 5d67 */

void FUN_5d67(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_57b4(&DAT_0c30);
  DAT_0beb = uVar1;
  DAT_0b9a = uVar1;
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
  bVar1 = DAT_0891;
  DAT_0891 = bVar1 & 0xfd;
  return;
}


/* Entry 5e63 */

void FUN_5e63(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_57b4(&UNK_0c50);
  DAT_0bec = uVar1;
  DAT_0d1a = uVar1;
  uVar1 = FUN_57b4(&UNK_0c51);
  DAT_0bed = uVar1;
  DAT_0d1b = uVar1;
  uVar1 = FUN_57b4(&UNK_0c52);
  DAT_0bee = uVar1;
  DAT_0d1c = uVar1;
  uVar1 = FUN_57b4(&UNK_0c53);
  DAT_0bef = uVar1;
  DAT_0d1d = uVar1;
  FUN_5fa4();
  uVar1 = FUN_57b4(&UNK_0c54);
  DAT_0bf0 = uVar1;
  DAT_0d1e = uVar1;
  uVar1 = FUN_57b4(&UNK_0c55);
  DAT_0bf1 = uVar1;
  DAT_0d1f = uVar1;
  uVar1 = FUN_57b4(&UNK_0c56);
  DAT_0bf2 = uVar1;
  DAT_0d20 = uVar1;
  uVar1 = FUN_57b4(&UNK_0c57);
  DAT_0bf3 = uVar1;
  DAT_0d21 = uVar1;
  FUN_5fa4();
  uVar1 = FUN_57b4(&DAT_0c58);
  DAT_0bf4 = uVar1;
  DAT_0d22 = uVar1;
  uVar1 = FUN_57b4(0xc59);
  DAT_0bf5 = uVar1;
  DAT_0d23 = uVar1;
  uVar1 = FUN_57b4(&DAT_0c5a);
  DAT_0bf6 = uVar1;
  DAT_0d24 = uVar1;
  FUN_5fa4();
  return;
}


/* Entry 5ef1 */

void FUN_5ef1(undefined1 param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  
  cVar2 = DAT_0dd5;
  sVar3 = CONCAT11(cVar2,param_1);
  if (cVar2 != -0x40) {
    FUN_5e63();
    sVar3 = RAM0d23;
    if (sVar3 == 0x5aa5) {
      FUN_5f35();
      return;
    }
  }
  bVar1 = DAT_0d08;
  DAT_0d08 = bVar1 & 0x7f;
  if ((sVar3 == -1) && (sVar3 = RAM0d1a, sVar3 == -1)) {
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
  byte bVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = DAT_0d1a;
  cVar2 = DAT_0d1d;
  if (((cVar3 == cVar2) || (cVar2 = DAT_0d20, cVar3 == cVar2)) ||
     (cVar3 = DAT_0d1d, cVar2 = DAT_0d20, cVar3 == cVar2)) {
    DAT_0d37._0_1_ = cVar3;
    cVar3 = DAT_0d1b;
    cVar2 = DAT_0d1e;
    if (((cVar3 == cVar2) || (cVar2 = DAT_0d21, cVar3 == cVar2)) ||
       (cVar3 = DAT_0d1e, cVar2 = DAT_0d21, cVar3 == cVar2)) {
      do {
        DAT_0d37._1_1_ = 0;
        cVar3 = DAT_0d1c;
        cVar2 = DAT_0d1f;
        if ((cVar3 == cVar2) || (cVar2 = DAT_0d22, cVar3 == cVar2)) {
          DAT_0d39 = cVar3;
          goto LAB_5f9e;
        }
        cVar3 = DAT_0d1f;
        cVar2 = DAT_0d22;
      } while (cVar3 == cVar2);
      DAT_0d37 = 0xff00;
      DAT_0d39 = 0xff;
    }
    else {
      DAT_0d37 = 0xff00;
      DAT_0d39 = 0xff;
    }
  }
  else {
    DAT_0d37 = 0xff00;
    DAT_0d39 = 0xff;
  }
LAB_5f9e:
  bVar1 = DAT_0d08;
  DAT_0d08 = bVar1 | 0x80;
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
    DAT_0000 = bVar1 & 0xef;
  }
  else {
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 | 0x10;
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
  byte bVar1;
  byte bVar2;
  
  bVar2 = DAT_0abe;
  if (bVar2 < DAT_4be0) {
    if (bVar2 < DAT_4bdf) {
      bVar1 = DAT_089a;
      DAT_089a = bVar1 & 0xf7;
    }
  }
  else {
    bVar1 = DAT_089a;
    DAT_089a = bVar1 | 8;
  }
  if (bVar2 < DAT_4be4) {
    if (bVar2 < DAT_4be3) {
      bVar1 = DAT_089a;
      DAT_089a = bVar1 & 0xfb;
    }
  }
  else {
    bVar1 = DAT_089a;
    DAT_089a = bVar1 | 4;
  }
  if (bVar2 < DAT_4be2) {
    if (bVar2 < DAT_4be1) {
      bVar2 = DAT_089a;
      DAT_089a = bVar2 & 0xfd;
    }
  }
  else {
    bVar2 = DAT_089a;
    DAT_089a = bVar2 | 2;
  }
  return;
}


/* Entry 6299 */

void FUN_6299(void)

{
  byte bVar1;
  
  bVar1 = DAT_08ae;
  if ((bVar1 & 2) != 0) {
    FUN_62aa();
    bVar1 = DAT_08ae;
    DAT_08ae = bVar1 & 0xfd;
    bVar1 = DAT_08ae;
    DAT_08ae = bVar1 | 1;
  }
  return;
}


/* Entry 62aa */

void FUN_62aa(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  
  bVar1 = DAT_08a0;
  if ((bVar1 & 4) == 0) {
    bVar1 = DAT_08af;
    bVar2 = DAT_08b8;
    DAT_08b8 = bVar1 | bVar2;
    bVar1 = DAT_08b0;
    bVar2 = DAT_08b9;
    DAT_08b9 = bVar1 | bVar2;
    bVar1 = DAT_08b1;
    bVar2 = DAT_08ba;
    DAT_08ba = bVar1 | bVar2;
    bVar1 = DAT_08b2;
    bVar2 = DAT_08bb;
    DAT_08bb = bVar1 | bVar2;
    uVar6 = RAM08af;
    if (((((char)((ushort)uVar6 >> 8) == '\0') && ((char)uVar6 == '\0')) &&
        (uVar6 = RAM08b1, (char)((ushort)uVar6 >> 8) == '\0')) && ((char)uVar6 == '\0')) {
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 | 0x80;
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 & 0xbf;
    }
    else {
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 & 0x7f;
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 | 0x40;
    }
    uVar6 = RAM08b8;
    if ((((char)((ushort)uVar6 >> 8) == '\0') && ((char)uVar6 == '\0')) &&
       ((uVar6 = RAM08ba, (char)((ushort)uVar6 >> 8) == '\0' && ((char)uVar6 == '\0')))) {
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 & 0xfd;
    }
    else {
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 | 2;
    }
  }
  uVar7 = DAT_0ae2;
  DAT_08a6 = uVar7;
  uVar7 = DAT_0ae3;
  DAT_08a7 = uVar7;
  bVar1 = DAT_08a1;
  if ((bVar1 & 1) == 0) {
    FUN_6496();
    uVar7 = DAT_0b64;
    uVar7 = DAT_08a0;
    bVar1 = DAT_08a0;
    if (((~bVar1 & 4) == 0) || (bVar1 = DAT_08a0, (bVar1 & 0x20) != 0)) {
      uVar7 = DAT_08a1;
    }
    bVar1 = DAT_08a0;
    if ((bVar1 & 4) == 0) {
      bVar1 = DAT_0884;
      if ((~bVar1 & 0x20) == 0) {
        bVar1 = DAT_0888;
        bVar1 = ~bVar1 & 8;
      }
      else {
        bVar1 = DAT_0892;
        if (((~bVar1 & 0x40) == 0) || (bVar1 = DAT_0880, (~bVar1 & 1) == 0)) goto LAB_63e4;
        bVar1 = DAT_08a1;
        bVar1 = ~bVar1 & 2;
      }
      if (bVar1 == 0) goto LAB_63e4;
    }
    else {
      bVar1 = DAT_0893;
      if ((bVar1 & 4) != 0) {
        cVar3 = DAT_0bdd;
        cVar4 = DAT_0d46;
        if ((((cVar3 == cVar4) || (cVar4 = DAT_0d47, cVar3 == cVar4)) ||
            (cVar4 = DAT_0d48, cVar3 == cVar4)) ||
           ((cVar4 = DAT_0d49, cVar3 == cVar4 || (cVar4 = DAT_0d4a, cVar3 == cVar4)))) {
          bVar1 = DAT_0be6;
          bVar1 = (bVar1 + 1) - (0xfe < bVar1);
          DAT_0be6 = bVar1;
          if (bVar1 <= DAT_4f14) goto LAB_63e4;
          bVar1 = DAT_0893;
          DAT_0893 = bVar1 & 0xfb;
          DAT_0be6 = 0;
        }
        else {
          cVar4 = DAT_0d4b;
          if (((cVar3 == cVar4) || (cVar4 = DAT_0d4c, cVar3 == cVar4)) ||
             (cVar4 = DAT_0d4d, cVar3 == cVar4)) {
LAB_63e4:
            uVar7 = 0x80;
            goto LAB_63e6;
          }
        }
      }
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 0x40;
  }
LAB_63e6:
  DAT_08a8 = uVar7;
  bVar1 = DAT_08a0;
  bVar2 = DAT_08a1;
  if ((bVar2 & 1) != 0) goto LAB_6486;
  if ((bVar1 & 2) == 0) {
    if ((bVar1 & 0x80) == 0) {
      if ((bVar1 & 0x40) != 0) goto LAB_6486;
      if ((bVar1 & 0x20) != 0) {
        if ((bVar1 & 8) == 0) {
          cVar3 = DAT_08a9;
          if (((bVar2 & 8) == 0) && ((bVar2 & 4) == 0)) {
            if ((bVar2 & 0x10) == 0) goto LAB_6486;
            bVar1 = DAT_08a1;
            DAT_08a1 = bVar1 & 0xef;
          }
          else if (cVar3 != -0x3e) {
            DAT_0aee = 0xc2;
            goto LAB_6486;
          }
          DAT_0aee = 0xc1;
        }
        else {
          bVar1 = DAT_08a1;
          if ((bVar1 & 0x20) == 0) {
            uVar7 = DAT_0aed;
          }
          else {
            uVar7 = DAT_0aee;
          }
        }
        goto LAB_6486;
      }
      if ((bVar1 & 4) != 0) {
        FUN_650b();
        goto LAB_6486;
      }
      goto LAB_640a;
    }
    if ((bVar2 & 0x80) != 0) goto LAB_6486;
  }
  else {
LAB_640a:
    cVar3 = DAT_0e1f;
    if (cVar3 != '\x01') goto LAB_6486;
  }
  uVar7 = DAT_0ae8;
LAB_6486:
  DAT_08a9 = 0;
  cVar5 = DAT_08a8;
  cVar4 = DAT_08a7;
  cVar3 = DAT_08a6;
  DAT_08aa = cVar5 + cVar4 + cVar3;
  return;
}


/* Entry 6496 */

void FUN_6496(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  
  bVar1 = DAT_08a0;
  if ((((bVar1 & 2) == 0) || (bVar1 = DAT_0892, (bVar1 & 0x40) == 0)) ||
     (bVar1 = DAT_0881, (bVar1 & 0x20) == 0)) {
    DAT_0b64 = 0;
  }
  else {
    bVar1 = DAT_0892;
    if (((bVar1 & 0x10) == 0) || (cVar4 = DAT_0b66, cVar4 == '\0')) {
      uVar2 = DAT_08af;
      uVar3 = DAT_08b0;
      RAM0b67 = CONCAT11(uVar2,uVar3);
      uVar2 = DAT_08b1;
      uVar3 = DAT_08b2;
      RAM0b69 = CONCAT11(uVar2,uVar3);
      cVar4 = DAT_0b67;
      cVar5 = DAT_0b68;
      if (cVar4 == '\0' && cVar5 == '\0') {
        cVar4 = DAT_0b69;
        cVar5 = DAT_0b6a;
        if (cVar4 == '\0' && cVar5 == '\0') {
          return;
        }
      }
      FUN_66d6();
      bVar1 = DAT_0b71;
      DAT_0b64 = (&DAT_4ec9)[bVar1];
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 | 0x10;
      DAT_0b66 = DAT_4eea;
    }
    else {
      cVar4 = DAT_0b66;
      DAT_0b66 = cVar4 + -1;
    }
  }
  return;
}


/* Entry 650b */

void FUN_650b(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  bVar1 = DAT_08a1;
  if ((bVar1 & 0x20) == 0) {
    cVar2 = DAT_0bdd;
    cVar4 = DAT_0d3d;
    if (cVar2 == cVar4) {
      cVar4 = DAT_0ae9;
    }
    else {
      cVar4 = DAT_0d3e;
      if (cVar2 == cVar4) {
        cVar4 = DAT_0aea;
      }
      else {
        cVar4 = DAT_0d3f;
        if (cVar2 == cVar4) {
          cVar4 = DAT_0aeb;
        }
        else {
          cVar4 = DAT_0d40;
          if (cVar2 == cVar4) {
            cVar4 = DAT_0ae8;
          }
          else {
            cVar4 = DAT_0d41;
            if (cVar2 == cVar4) {
              cVar4 = DAT_0ae3;
              if (cVar4 == -1) {
                cVar4 = -2;
              }
            }
            else {
              cVar4 = DAT_0d42;
              if (cVar2 == cVar4) {
                cVar4 = DAT_08dd;
                if (cVar4 == -1) {
                  cVar4 = -2;
                }
              }
              else {
                cVar4 = DAT_0d43;
                if (cVar2 == cVar4) {
                  cVar4 = DAT_0aec;
                }
                else {
                  cVar4 = DAT_0d44;
                  if (cVar2 == cVar4) {
                    bVar1 = DAT_0896._0_1_;
                    if ((~bVar1 & 1) == 0) {
                      cVar4 = -0x10;
                    }
                    else {
                      cVar4 = '\0';
                    }
                  }
                  else {
                    cVar4 = DAT_0d45;
                    if (cVar2 == cVar4) {
                      cVar2 = DAT_0d87;
                      if ((cVar2 == '\t') && (bVar1 = DAT_0896._0_1_, (~bVar1 & 0x10) != 0)) {
                        cVar4 = '\0';
                      }
                      else {
                        cVar4 = -0x10;
                      }
                    }
                    else {
                      cVar4 = DAT_0d46;
                      if (cVar2 == cVar4) {
                        cVar4 = '\0';
                      }
                      else {
                        cVar4 = DAT_0d47;
                        if (cVar2 == cVar4) {
                          cVar4 = '\0';
                        }
                        else {
                          cVar4 = DAT_0d48;
                          if (cVar2 == cVar4) {
                            cVar4 = '\0';
                          }
                          else {
                            cVar4 = DAT_0d49;
                            if (cVar2 == cVar4) {
                              cVar4 = '\0';
                            }
                            else {
                              cVar4 = DAT_0d4a;
                              if (cVar2 == cVar4) {
                                cVar4 = '\0';
                              }
                              else {
                                cVar4 = DAT_0d4b;
                                if (cVar2 == cVar4) {
                                  cVar4 = '\0';
                                }
                                else {
                                  cVar4 = DAT_0d4c;
                                  if (cVar2 == cVar4) {
                                    cVar4 = '\0';
                                  }
                                  else {
                                    cVar4 = DAT_0d4d;
                                    if (cVar2 == cVar4) {
                                      cVar4 = '\0';
                                    }
                                    else {
                                      cVar4 = DAT_0d4e;
                                      if (cVar2 == cVar4) {
                                        FUN_6630();
                                        cVar4 = DAT_0bdf;
                                      }
                                      else {
                                        cVar4 = DAT_0d4f;
                                        if (cVar2 == cVar4) {
                                          FUN_6672();
                                          cVar4 = DAT_0bdf;
                                        }
                                        else {
                                          cVar4 = DAT_0d50;
                                          if (cVar2 == cVar4) {
                                            FUN_6726();
                                            cVar4 = DAT_0bdf;
                                          }
                                          else {
                                            cVar3 = DAT_0d51;
                                            cVar4 = DAT_4e7c;
                                            if (cVar2 != cVar3) {
                                              cVar4 = -1;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    cVar4 = DAT_0bdd;
  }
  DAT_0be1 = cVar4;
  return;
}


/* Entry 6630 */

void FUN_6630(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_0892;
  if (((bVar1 & 0x10) == 0) || (cVar2 = DAT_0b66, cVar2 == '\0')) {
    bVar1 = DAT_08b4;
    DAT_0b67 = bVar1 & 3;
    DAT_0b68 = 0;
    DAT_0b69 = 0;
    DAT_0b6a = 0;
    cVar2 = DAT_0b67;
    if (cVar2 != '\0') {
      FUN_66d6();
      bVar1 = DAT_0b71;
      DAT_0bdf = (&DAT_4eeb)[bVar1];
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 | 0x10;
      DAT_0b66 = DAT_4ef4;
    }
  }
  else {
    cVar2 = DAT_0b66;
    DAT_0b66 = cVar2 + -1;
  }
  return;
}


/* Entry 6672 */

void FUN_6672(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  
  bVar1 = DAT_0892;
  if (((bVar1 & 0x10) == 0) || (cVar3 = DAT_0b66, cVar3 == '\0')) {
    bVar1 = DAT_08af;
    bVar2 = DAT_08b8;
    DAT_0b67 = ~bVar1 & bVar2;
    bVar1 = DAT_08b0;
    bVar2 = DAT_08b9;
    DAT_0b68 = ~bVar1 & bVar2;
    bVar1 = DAT_08b1;
    bVar2 = DAT_08ba;
    DAT_0b69 = ~bVar1 & bVar2;
    bVar1 = DAT_08b2;
    bVar2 = DAT_08bb;
    DAT_0b6a = ~bVar1 & bVar2;
    cVar3 = DAT_0b67;
    cVar4 = DAT_0b68;
    if (cVar3 == '\0' && cVar4 == '\0') {
      cVar3 = DAT_0b69;
      cVar4 = DAT_0b6a;
      if (cVar3 == '\0' && cVar4 == '\0') {
        return;
      }
    }
    FUN_66d6();
    bVar1 = DAT_0b71;
    DAT_0bdf = (&DAT_4ec9)[bVar1];
    bVar1 = DAT_0892;
    DAT_0892 = bVar1 | 0x10;
    DAT_0b66 = DAT_4eeb;
  }
  else {
    cVar3 = DAT_0b66;
    DAT_0b66 = cVar3 + -1;
  }
  return;
}


/* Entry 66d6 */

undefined2 FUN_66d6(void)

{
  char cVar1;
  char cVar2;
  short sVar3;
  byte bVar5;
  short sVar4;
  byte bVar6;
  ushort uVar7;
  
  do {
    cVar1 = DAT_0b71;
    uVar7 = (ushort)(byte)(cVar1 + 1);
    sVar4 = RAM0b67;
    sVar3 = RAM0b69;
    while (uVar7 = uVar7 - 1, uVar7 != 0) {
      bVar6 = -(char)(sVar3 >> 0xf);
      sVar3 = sVar3 << 1;
      bVar5 = (byte)(sVar4 << 1);
      sVar4 = CONCAT11((char)((ushort)(sVar4 << 1) >> 8) + CARRY1(bVar5,bVar6),bVar5 + bVar6);
    }
    do {
      cVar1 = DAT_0b71;
      DAT_0b71 = cVar1 + '\x01';
      bVar6 = (byte)(sVar4 << 1);
      cVar2 = (char)((ushort)(sVar4 << 1) >> 8);
      cVar1 = (char)(sVar3 >> 0xf);
      if (sVar4 < 0) {
        bVar5 = -cVar1;
        return CONCAT11(cVar2 + CARRY1(bVar6,bVar5),bVar6 + bVar5);
      }
      bVar5 = -cVar1;
      sVar3 = sVar3 * 2;
      sVar4 = CONCAT11(cVar2 + CARRY1(bVar6,bVar5),bVar6 + bVar5);
    } while ((sVar4 != 0) || (sVar3 != 0));
    DAT_0b71 = 0;
  } while( true );
}


/* Entry 6726 */

void FUN_6726(void)

{
  undefined2 uVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  
  uVar1 = RAM08b8;
  RAM0b67 = uVar1;
  uVar1 = RAM08ba;
  RAM0b69 = uVar1;
  cVar2 = DAT_0b67;
  cVar3 = DAT_0b68;
  if (cVar2 == '\0' && cVar3 == '\0') {
    cVar2 = DAT_0b69;
    cVar3 = DAT_0b6a;
    if (cVar2 == '\0' && cVar3 == '\0') {
      uVar5 = 0;
      goto LAB_676e;
    }
  }
  sVar7 = 0x20;
  DAT_0b71 = 0;
  sVar6 = RAM0b67;
  sVar8 = RAM0b69;
  do {
    uVar4 = (ushort)sVar6 >> 0xf;
    sVar6 = sVar6 << 1;
    if (sVar8 < 0) {
      cVar2 = DAT_0b71;
      DAT_0b71 = cVar2 + '\x01';
    }
    sVar7 = sVar7 + -1;
    sVar8 = CONCAT11((char)((ushort)sVar8 >> 8) << 1 | (byte)sVar8 >> 7,
                     (byte)sVar8 << 1 | (byte)uVar4);
  } while (sVar7 != 0);
  uVar5 = DAT_0b71;
LAB_676e:
  DAT_0bdf = uVar5;
  return;
}


/* Entry 6772 */

undefined * FUN_6772(void)

{
  short sVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  short sVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  
  sVar1 = DAT_0044;
  sVar5 = DAT_0c00;
  if (&UNK_0f9f < (undefined *)(sVar1 - sVar5)) {
    sVar1 = DAT_0c00;
    DAT_0c00 = &UNK_0fa0 + sVar1;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 | 0x20;
    cVar4 = DAT_0c02;
    DAT_0c02 = cVar4 + '\x01';
    cVar4 = DAT_0c02;
    if (-1 < (char)(cVar4 + -0x40)) {
      cVar4 = DAT_0c02;
      DAT_0c02 = cVar4 + -1;
    }
  }
  sVar1 = DAT_0044;
  sVar5 = DAT_0af4;
  if (0x9c3 < (ushort)(sVar1 - sVar5)) {
    sVar1 = DAT_0af4;
    DAT_0af4 = sVar1 + 0x9c4;
    bVar6 = DAT_0882;
    DAT_0882 = bVar6 | 0x40;
    cVar4 = DAT_0af7;
    DAT_0af7 = cVar4 + '\x01';
    bVar6 = DAT_0af7;
    if ((bVar6 & 1) == 0) {
      bVar6 = DAT_0882;
      DAT_0882 = bVar6 | 4;
    }
    bVar6 = DAT_0af7;
    if ((bVar6 & 3) == 0) {
      bVar6 = DAT_088e;
      DAT_088e = bVar6 | 0x80;
    }
    cVar4 = DAT_0b25;
    bVar6 = cVar4 + 1;
    if (0x13 < bVar6) {
      bVar6 = DAT_0882;
      DAT_0882 = bVar6 | 2;
      bVar6 = 0;
    }
    DAT_0b25 = bVar6;
    cVar4 = DAT_0b26;
    bVar6 = cVar4 + 1;
    if (199 < bVar6) {
      bVar6 = DAT_0887;
      DAT_0887 = bVar6 | 0x80;
      cVar4 = DAT_0bc9;
      DAT_0bc9 = cVar4 + '\x01';
      bVar6 = DAT_0bc9;
      if ((bVar6 & 1) == 0) {
        bVar6 = DAT_0887;
        DAT_0887 = bVar6 | 0x40;
      }
      bVar6 = 0;
    }
    DAT_0b26 = bVar6;
    bVar6 = DAT_0af7;
    if ((bVar6 & 7) == 2) {
      bVar7 = DAT_0882;
      DAT_0882 = bVar7 | 0x20;
    }
    if ((bVar6 & 7) == 6) {
      bVar6 = DAT_0882;
      DAT_0882 = bVar6 | 0x10;
    }
    bVar6 = DAT_0af7;
    if ((bVar6 & 0xf) == 8) {
      bVar6 = DAT_0882;
      DAT_0882 = bVar6 | 8;
    }
    bVar6 = DAT_0af7;
    if ((bVar6 & 0x1f) == 0) {
      bVar6 = DAT_0882;
      DAT_0882 = bVar6 | 1;
    }
    bVar6 = DAT_0ca8;
    if ((bVar6 & 1) == 0) {
      bVar6 = DAT_0b09;
      if (bVar6 < 0xc) goto LAB_6884;
      bVar6 = DAT_004c;
      DAT_004c = bVar6 & 0xf7;
      bVar6 = DAT_0880;
      DAT_0880 = bVar6 | 0x44;
      bVar6 = DAT_0b09;
    }
    else {
      bVar6 = DAT_0920;
      if (bVar6 < 0xc) goto LAB_6884;
      bVar6 = DAT_004c;
      DAT_004c = bVar6 & 0xf7;
      bVar6 = DAT_0880;
      DAT_0880 = bVar6 | 0x44;
      bVar6 = DAT_0920;
    }
    if (DAT_18d8 <= bVar6) {
      bVar6 = DAT_0881;
      DAT_0881 = bVar6 | 0x20;
      FUN_721f();
      bVar6 = DAT_0880;
      DAT_0880 = bVar6 | 0x80;
      bVar6 = DAT_088c;
      DAT_088c = bVar6 | 0x20;
      bVar6 = DAT_088c;
      DAT_088c = bVar6 | 0x10;
    }
  }
LAB_6884:
  sVar1 = DAT_0044;
  sVar5 = DAT_0af2;
  if ((undefined *)(sVar1 - sVar5) <= &UNK_01f3) {
    return (undefined *)(sVar1 - sVar5);
  }
  sVar1 = DAT_0af2;
  puVar8 = &UNK_01f4 + sVar1;
  DAT_0af2 = puVar8;
  bVar6 = DAT_008b;
  if ((~bVar6 & 8) == 0) {
    DAT_08c6 = 0;
    uVar3 = DAT_0096;
    DAT_08ca = uVar3;
    uVar2 = DAT_008b;
    bVar6 = DAT_0085;
    uVar3 = DAT_08ca;
    (**(code **)(BYTE_ARRAY_6948 + (byte)((bVar6 & 7) << 1) + 0x20))();
    cVar4 = DAT_08c5;
    DAT_08c5 = cVar4 + '\x01';
    bVar6 = DAT_08c5;
    puVar8 = (undefined *)CONCAT11(bVar6 & 3,4);
    if (((bVar6 & 3) != 0) && (puVar8 = (undefined *)((ushort)(bVar6 & 3) << 8), (bVar6 & 3) != 1))
    {
      bVar6 = DAT_08c5;
      bVar7 = bVar6 & 7;
      puVar8 = (undefined *)CONCAT11(bVar7,2);
      if ((bVar7 != 2) &&
         ((puVar8 = (undefined *)(CONCAT11(bVar6,5) & 0x7ff), bVar7 != 6 &&
          (puVar8 = (undefined *)(CONCAT11(bVar6,6) & 0x7ff), bVar7 != 7)))) {
        bVar6 = DAT_08c5;
        bVar7 = bVar6 & 0xf;
        puVar8 = (undefined *)CONCAT11(bVar7,1);
        if ((bVar7 != 3) && (puVar8 = (undefined *)(CONCAT11(bVar6,3) & 0xfff), bVar7 != 0xb)) {
          puVar8 = (undefined *)((bVar6 & 0xf) << 8);
        }
      }
    }
    DAT_0085 = (char)puVar8;
  }
  else {
    cVar4 = DAT_08c6;
    DAT_08c6 = cVar4 + '\x01';
    if ((char)(cVar4 + '\x01') < '\0') {
      DAT_08c6 = 0;
      DAT_0083 = 0x20;
      DAT_0084 = 99;
      puVar8 = (undefined *)((ushort)puVar8 & 0xff);
      DAT_0085 = 0;
    }
  }
  return puVar8;
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
  (**(code **)(BYTE_ARRAY_6948 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7) + 0x10))
            (*(code **)(BYTE_ARRAY_6948 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7) + 0x10));
  return;
}


/* Entry 6987 */

void FUN_6987(void)

{
  byte bVar1;
  char in_CCR;
  
  bVar1 = DAT_0008;
  (**(code **)(BYTE_ARRAY_6948 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7) + 0x18))
            (*(code **)(BYTE_ARRAY_6948 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7) + 0x18));
  return;
}


/* Entry 6996 */

void FUN_6996(undefined2 param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  
  cVar6 = (char)((ushort)param_1 >> 8);
  if (cVar6 == -1) {
    cVar6 = -2;
  }
  DAT_0ae9 = cVar6;
  uVar1 = DAT_08ca;
  DAT_0bb0 = uVar1 >> 6;
  cVar6 = DAT_0d55;
  if (cVar6 != -0x80) {
    uVar2 = DAT_08ca;
    bVar7 = DAT_08a0;
    if (((~bVar7 & 4) != 0) && (bVar7 = DAT_08b2, (~bVar7 & 0x80) != 0)) {
      bVar7 = (byte)((ushort)uVar2 >> 8);
      if ((bVar7 < 10) || (0xf5 < bVar7)) {
        bVar7 = DAT_08b5;
        if ((~bVar7 & 0x80) == 0) {
          bVar7 = DAT_0b40;
          bVar5 = DAT_0d8a;
          if (bVar5 < bVar7) {
            bVar7 = DAT_08af;
            if ((~bVar7 & 8) != 0) {
              bVar7 = DAT_08af;
              DAT_08af = bVar7 | 8;
              bVar7 = DAT_0bd2;
              DAT_0bd2 = bVar7 | 0x80;
              bVar7 = DAT_08b8;
              if ((~bVar7 & 8) != 0) {
                bVar7 = DAT_08b8;
                DAT_08b8 = bVar7 | 8;
                bVar7 = DAT_0bd2;
                DAT_0bd2 = bVar7 | 8;
              }
            }
            bVar7 = DAT_08b5;
            DAT_08b5 = bVar7 | 1;
            bVar7 = DAT_0889;
            DAT_0889 = bVar7 & 0xfd;
            DAT_0b92 = 0;
          }
        }
        else {
          bVar7 = DAT_08b5;
          DAT_08b5 = bVar7 | 0x80;
          bVar7 = DAT_0bab;
          DAT_0bab = bVar7 | 8;
        }
      }
      else {
        bVar7 = DAT_08b5;
        if ((bVar7 & 0x80) == 0) {
          bVar7 = DAT_0b4d;
          bVar5 = DAT_0d8a;
          if (bVar5 < bVar7) {
            bVar7 = DAT_08af;
            if ((bVar7 & 8) != 0) {
              bVar7 = DAT_08af;
              DAT_08af = bVar7 & 0xf7;
              bVar7 = DAT_0bd2;
              DAT_0bd2 = bVar7 | 0x80;
              bVar7 = DAT_08af;
              if (((~bVar7 & 4) != 0) && (bVar7 = DAT_08b1, (~bVar7 & 8) != 0)) {
                bVar7 = DAT_0889;
                DAT_0889 = bVar7 | 2;
                DAT_0b94 = 0;
                uVar4 = DAT_0a83;
                DAT_0b92 = uVar4;
                DAT_0b95 = uVar4;
              }
            }
            bVar7 = DAT_0bab;
            DAT_0bab = bVar7 & 0xf7;
            bVar7 = DAT_08b5;
            if ((bVar7 & 1) == 0) {
              bVar7 = DAT_08b6;
              if ((bVar7 & 1) == 0) goto LAB_6a68;
              bVar7 = DAT_08b6;
              DAT_08b6 = bVar7 & 0xfe;
            }
            else {
              bVar7 = DAT_08b5;
              DAT_08b5 = bVar7 & 0xfe;
            }
            DAT_08e0 = DAT_4e18;
          }
        }
        else {
          bVar7 = DAT_08b5;
          DAT_08b5 = bVar7 & 0x7f;
        }
      }
    }
  }
LAB_6a68:
  bVar7 = DAT_08af;
  if (((~bVar7 & 8) == 0) || (bVar7 = DAT_08af, (~bVar7 & 4) == 0)) {
    DAT_08d0 = DAT_4e60;
    DAT_08ce = DAT_4e60 << 6;
  }
  else {
    uVar1 = DAT_08ca;
    DAT_08d0 = uVar1 >> 6;
    sVar3 = DAT_08e2;
    DAT_08ce = sVar3 << 6;
  }
  DAT_08c2 = 0x80;
  DAT_08c3 = 0;
  return;
}


/* Entry 6aa5 */

void FUN_6aa5(undefined *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  undefined *puVar5;
  short sVar6;
  ushort uVar7;
  
  DAT_0ca2 = param_1;
  puVar5 = param_1 + -0x1ec0;
  if (param_1 < &UNK_1ec0) {
    puVar5 = (undefined *)0x0;
  }
  cVar4 = -0x3e;
  sVar6 = FUN_c407(puVar5);
  if ((sVar6 != 0) || (cVar4 == -1)) {
    cVar4 = -2;
  }
  DAT_0aea = cVar4;
  bVar1 = DAT_089f;
  if ((~bVar1 & 0x20) != 0) {
    uVar3 = DAT_0ca2;
    DAT_0ca6 = uVar3;
    uVar2 = DAT_0c86;
    uVar7 = uVar3 - uVar2;
    if (uVar3 < uVar2) {
      uVar7 = CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7);
    }
    if (0xc0 < uVar7) {
      bVar1 = DAT_089f;
      DAT_089f = bVar1 | 0x10;
      bVar1 = DAT_089f;
      DAT_089f = bVar1 | 8;
    }
    bVar1 = DAT_089f;
    DAT_089f = bVar1 | 0x20;
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
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte extraout_A;
  ushort uVar4;
  
  bVar3 = (byte)((ushort)param_1 >> 8);
  DAT_08dc = bVar3;
  if (bVar3 < 0x17) {
    bVar1 = DAT_09a1;
    DAT_09a1 = bVar1 & 0xfe;
  }
  else {
    bVar1 = DAT_09a1;
    DAT_09a1 = bVar1 | 1;
  }
  if (bVar3 < 0x1c) {
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 | 4;
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xef;
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xf7;
  }
  else {
    bVar3 = DAT_09a1;
    if ((bVar3 & 8) != 0) {
      bVar3 = DAT_09a1;
      DAT_09a1 = bVar3 | 0x10;
    }
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 | 8;
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xfb;
  }
  bVar3 = DAT_09a1;
  if ((~bVar3 & 1) == 0) {
    bVar3 = DAT_09aa;
    if (DAT_18b3 <= bVar3) {
      bVar3 = DAT_09a1;
      DAT_09a1 = bVar3 | 2;
    }
  }
  else {
    bVar3 = DAT_09ab;
    if (DAT_18b4 <= bVar3) {
      bVar3 = DAT_09a1;
      DAT_09a1 = bVar3 & 0xfd;
    }
  }
  bVar3 = DAT_0881;
  if ((~bVar3 & 0x10) != 0) {
    bVar3 = DAT_09a1;
    if ((~bVar3 & 0x10) == 0) {
LAB_6b6b:
      bVar3 = DAT_09a1;
      if ((~bVar3 & 0x40) != 0) {
        bVar3 = DAT_09a1;
        DAT_09a1 = bVar3 | 0x40;
      }
    }
    else if (DAT_18b5 != -0x80) {
      uVar4 = lookup_u8_uniform_axis((uchar)param_1,&UNK_18b6);
      extraout_A = (byte)(uVar4 >> 8);
      DAT_0cae = extraout_A;
      bVar3 = DAT_0caf;
      if (extraout_A <= bVar3) goto LAB_6b6b;
    }
  }
  bVar3 = DAT_09a1;
  if ((((bVar3 & 0x80) == 0) || (bVar3 = DAT_09a1, (bVar3 & 4) == 0)) ||
     (bVar3 = DAT_09a1, (bVar3 & 0x40) == 0)) {
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xdf;
    DAT_09ac = 0;
LAB_6ba3:
    bVar3 = DAT_0881;
    if ((~bVar3 & 0x20) == 0) goto LAB_6b8f;
  }
  else {
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 | 0x20;
    bVar3 = DAT_09ac;
    if (bVar3 < DAT_18c8) goto LAB_6ba3;
LAB_6b8f:
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xbf;
    bVar3 = DAT_09a1;
    DAT_09a1 = bVar3 & 0xdf;
    DAT_09ac = 0;
  }
  cVar2 = DAT_0d5a;
  if (((cVar2 != -0x80) && (cVar2 = DAT_0d87, cVar2 != '\t')) &&
     ((bVar3 = DAT_08a0, (~bVar3 & 4) != 0 && (bVar3 = DAT_08b2, (~bVar3 & 0x80) != 0)))) {
    bVar3 = DAT_08b0;
    if ((~bVar3 & 0x10) == 0) {
      bVar3 = DAT_09a1;
      if (((bVar3 & 2) != 0) && (bVar3 = DAT_08b0, (bVar3 & 0x10) != 0)) {
        bVar3 = DAT_08b0;
        DAT_08b0 = bVar3 & 0xef;
        bVar3 = DAT_0bd2;
        DAT_0bd2 = bVar3 | 0x40;
      }
    }
    else {
      bVar3 = DAT_08f4;
      if ((((((DAT_4e4c <= bVar3) && (uVar4 = DAT_0900, DAT_4e4e <= uVar4)) &&
            (uVar4 = DAT_08e8, DAT_4e50 <= uVar4)) &&
           ((cVar2 = DAT_0d87, cVar2 != '\t' || (bVar3 = DAT_0889, (bVar3 & 0x80) != 0)))) &&
          ((bVar3 = DAT_0bab, (~bVar3 & 8) != 0 &&
           ((bVar3 = DAT_08af, (~bVar3 & 4) != 0 && (bVar3 = DAT_0bac, (~bVar3 & 0x80) != 0)))))) &&
         (bVar3 = DAT_09a1, (~bVar3 & 2) != 0)) {
        bVar3 = DAT_09a1;
        if ((bVar3 & 0x80) == 0) {
          bVar3 = DAT_08b6;
          if ((bVar3 & 0x40) == 0) {
            bVar3 = DAT_08b6;
            DAT_08b6 = bVar3 | 0x40;
          }
          else {
            bVar3 = DAT_0b43;
            if ((DAT_4e4b < bVar3) && (bVar3 = DAT_08b0, (~bVar3 & 0x10) != 0)) {
              bVar3 = DAT_08b0;
              DAT_08b0 = bVar3 | 0x10;
              bVar3 = DAT_0bd2;
              DAT_0bd2 = bVar3 | 0x40;
              bVar3 = DAT_08b9;
              if ((~bVar3 & 0x10) != 0) {
                bVar3 = DAT_08b9;
                DAT_08b9 = bVar3 | 0x10;
                bVar3 = DAT_0bd2;
                DAT_0bd2 = bVar3 | 4;
              }
            }
          }
        }
        goto LAB_6c53;
      }
    }
    DAT_0b43 = 0;
    bVar3 = DAT_08b6;
    DAT_08b6 = bVar3 & 0xbf;
  }
LAB_6c53:
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
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  
  bVar4 = (byte)((ushort)param_1 >> 8);
  DAT_0bce = bVar4;
  uVar6 = ((ushort)bVar4 << 8) / 0xf0;
  if (0xfe < uVar6) {
    uVar6 = 0xfe;
  }
  DAT_0aec = (char)uVar6;
  bVar4 = DAT_08a0;
  if ((bVar4 & 4) != 0) {
    cVar1 = DAT_0bdd;
    cVar2 = DAT_0d4a;
    if ((cVar1 != cVar2) || (bVar4 = DAT_0893, (bVar4 & 0x10) == 0)) goto LAB_6c89;
    goto LAB_6d58;
  }
LAB_6c89:
  bVar4 = DAT_0bce;
  if (bVar4 < 0x26) {
    bVar4 = DAT_0888;
    if ((~bVar4 & 0x80) == 0) {
      bVar4 = DAT_0888;
      DAT_0888 = bVar4 & 0x7f;
    }
    else {
      bVar4 = DAT_0888;
      if ((~bVar4 & 1) == 0) {
        bVar4 = DAT_0888;
        DAT_0888 = bVar4 & 0xfd;
        goto LAB_6d58;
      }
    }
    bVar4 = DAT_0888;
    DAT_0888 = bVar4 | 1;
  }
  else {
    bVar4 = DAT_0888;
    if ((~bVar4 & 0x80) == 0) {
      bVar4 = DAT_0888;
      if ((~bVar4 & 1) == 0) {
        bVar4 = DAT_0888;
        if ((~bVar4 & 2) != 0) {
          bVar4 = DAT_0888;
          DAT_0888 = bVar4 | 2;
          bVar4 = DAT_08a0;
          if (((bVar4 & 4) != 0) && (bVar4 = DAT_0893, (~bVar4 & 0x80) != 0)) {
            cVar1 = DAT_0bdd;
            cVar2 = DAT_0d50;
            if (cVar1 == cVar2) {
              bVar4 = DAT_0893;
              if ((~bVar4 & 0x40) == 0) {
LAB_6d20:
                bVar4 = DAT_0893;
                if ((~bVar4 & 0x40) != 0) {
                  bVar4 = DAT_0893;
                  DAT_0893 = bVar4 | 0x40;
                  bVar4 = DAT_0893;
                  DAT_0893 = bVar4 | 0x20;
                  DAT_0be2 = 0;
                }
              }
              else {
                bVar4 = DAT_0893;
                DAT_0893 = bVar4 | 0x40;
                bVar4 = DAT_0893;
                DAT_0893 = bVar4 | 0x10;
                uVar5 = DAT_08af;
                DAT_08b8 = uVar5;
                uVar5 = DAT_08b0;
                DAT_08b9 = uVar5;
                uVar5 = DAT_08b1;
                DAT_08ba = uVar5;
                uVar5 = DAT_08b2;
                DAT_08bb = uVar5;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 8;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 4;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 2;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 1;
              }
            }
            else {
              cVar2 = DAT_0d46;
              if ((((((cVar1 == cVar2) || (cVar2 = DAT_0d47, cVar1 == cVar2)) ||
                    (cVar2 = DAT_0d48, cVar1 == cVar2)) ||
                   ((cVar2 = DAT_0d49, cVar1 == cVar2 || (cVar2 = DAT_0d4a, cVar1 == cVar2)))) ||
                  (cVar2 = DAT_0d4b, cVar1 == cVar2)) ||
                 ((cVar2 = DAT_0d4c, cVar1 == cVar2 || (cVar2 = DAT_0d4d, cVar1 == cVar2))))
              goto LAB_6d20;
            }
          }
        }
LAB_6d58:
        bVar4 = DAT_0888;
        DAT_0888 = bVar4 & 0xfe;
        goto LAB_6d5c;
      }
    }
    else {
      bVar4 = DAT_0888;
      DAT_0888 = bVar4 | 0x80;
    }
    bVar4 = DAT_0888;
    DAT_0888 = bVar4 | 1;
  }
LAB_6d5c:
  cVar1 = DAT_0d62;
  if (((cVar1 != -0x80) && (bVar4 = DAT_08a0, (~bVar4 & 4) != 0)) &&
     (bVar4 = DAT_08b2, (~bVar4 & 0x80) != 0)) {
    bVar4 = DAT_08b1;
    if ((~bVar4 & 4) == 0) {
      bVar4 = DAT_08b4;
      if ((bVar4 & 0x20) == 0) {
        bVar4 = DAT_08b4;
        if ((bVar4 & 0x10) == 0) {
LAB_6eb4:
          DAT_0b48 = 0;
          DAT_0b49 = 0;
        }
        else {
          bVar4 = DAT_0000;
          if (((~bVar4 & 4) == 0) || (bVar4 = DAT_0888, (bVar4 & 2) != 0)) {
            bVar4 = DAT_08b7;
            DAT_08b7 = bVar4 | 0x40;
            DAT_0b53 = 0;
          }
          else {
            bVar4 = DAT_08b7;
            if ((bVar4 & 0x40) == 0) {
              bVar4 = DAT_0b53;
              bVar3 = DAT_0d8a;
              if (bVar3 < bVar4) {
                bVar4 = DAT_08b4;
                if ((bVar4 & 0x10) != 0) {
                  bVar4 = DAT_08b4;
                  DAT_08b4 = bVar4 & 0xef;
                  bVar4 = DAT_0be8;
                  DAT_0be8 = bVar4 | 0x80;
                }
                bVar4 = DAT_08b1;
                if ((bVar4 & 4) != 0) {
                  bVar4 = DAT_08b1;
                  DAT_08b1 = bVar4 & 0xfb;
                  bVar4 = DAT_0bd2;
                  DAT_0bd2 = bVar4 | 0x20;
                }
                goto LAB_6eb4;
              }
            }
            else {
              bVar4 = DAT_08b7;
              DAT_08b7 = bVar4 & 0xbf;
            }
          }
        }
      }
      else {
        bVar4 = DAT_0000;
        if (((bVar4 & 4) == 0) || (bVar4 = DAT_0888, (~bVar4 & 2) != 0)) {
          bVar4 = DAT_08b7;
          DAT_08b7 = bVar4 | 0x80;
          DAT_0b52 = 0;
        }
        else {
          bVar4 = DAT_08b7;
          if ((bVar4 & 0x80) == 0) {
            bVar4 = DAT_0b52;
            bVar3 = DAT_0d8a;
            if (bVar3 < bVar4) {
              bVar4 = DAT_08b4;
              if ((bVar4 & 0x20) != 0) {
                bVar4 = DAT_08b4;
                DAT_08b4 = bVar4 & 0xdf;
                bVar4 = DAT_0be8;
                DAT_0be8 = bVar4 | 0x80;
              }
              bVar4 = DAT_08b1;
              if ((bVar4 & 4) != 0) {
                bVar4 = DAT_08b1;
                DAT_08b1 = bVar4 & 0xfb;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 0x20;
              }
              goto LAB_6eb4;
            }
          }
          else {
            bVar4 = DAT_08b7;
            DAT_08b7 = bVar4 & 0x7f;
          }
        }
      }
    }
    else {
      bVar4 = DAT_0000;
      if (((bVar4 & 4) == 0) || (bVar4 = DAT_0888, (bVar4 & 2) != 0)) {
        bVar4 = DAT_08b7;
        DAT_08b7 = bVar4 & 0x7f;
        DAT_0b48 = 0;
      }
      else {
        bVar4 = DAT_08b7;
        if ((bVar4 & 0x80) == 0) {
          bVar4 = DAT_08b7;
          DAT_08b7 = bVar4 | 0x80;
        }
        else {
          bVar4 = DAT_0b48;
          if (DAT_4e59 < bVar4) {
            bVar4 = DAT_08b4;
            if ((~bVar4 & 0x20) != 0) {
              bVar4 = DAT_08b4;
              DAT_08b4 = bVar4 | 0x20;
              bVar4 = DAT_0be8;
              DAT_0be8 = bVar4 | 0x80;
            }
            bVar4 = DAT_08b1;
            if ((~bVar4 & 4) != 0) {
              bVar4 = DAT_08b1;
              DAT_08b1 = bVar4 | 4;
              bVar4 = DAT_0bd2;
              DAT_0bd2 = bVar4 | 0x20;
              bVar4 = DAT_08ba;
              if ((~bVar4 & 4) != 0) {
                bVar4 = DAT_08ba;
                DAT_08ba = bVar4 | 4;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 2;
              }
            }
            goto LAB_6ebb;
          }
        }
      }
      bVar4 = DAT_0000;
      if (((~bVar4 & 4) == 0) || (bVar4 = DAT_0888, (~bVar4 & 2) != 0)) {
        bVar4 = DAT_08b7;
        DAT_08b7 = bVar4 & 0xbf;
        DAT_0b49 = 0;
      }
      else {
        bVar4 = DAT_08b7;
        if ((bVar4 & 0x40) == 0) {
          bVar4 = DAT_08b7;
          DAT_08b7 = bVar4 | 0x40;
        }
        else {
          bVar4 = DAT_0b49;
          bVar3 = DAT_0d8a;
          if (bVar3 < bVar4) {
            bVar4 = DAT_08b4;
            if ((~bVar4 & 0x10) != 0) {
              bVar4 = DAT_08b4;
              DAT_08b4 = bVar4 | 0x10;
              bVar4 = DAT_0be8;
              DAT_0be8 = bVar4 | 0x80;
            }
            bVar4 = DAT_08b1;
            if ((~bVar4 & 4) != 0) {
              bVar4 = DAT_08b1;
              DAT_08b1 = bVar4 | 4;
              bVar4 = DAT_0bd2;
              DAT_0bd2 = bVar4 | 0x20;
              bVar4 = DAT_08ba;
              if ((~bVar4 & 4) != 0) {
                bVar4 = DAT_08ba;
                DAT_08ba = bVar4 | 4;
                bVar4 = DAT_0bd2;
                DAT_0bd2 = bVar4 | 2;
              }
            }
          }
        }
      }
    }
  }
LAB_6ebb:
  bVar4 = DAT_08b1;
  if ((~bVar4 & 4) == 0) {
    uVar5 = 0x9a;
  }
  else {
    uVar5 = DAT_0bce;
  }
  DAT_08d9 = uVar5;
  bVar4 = DAT_08b4;
  if ((bVar4 & 8) == 0) {
    bVar4 = DAT_0889;
    if ((~bVar4 & 8) == 0) {
      bVar4 = DAT_0888;
      if ((bVar4 & 2) == 0) {
        bVar4 = DAT_08b7;
        if ((bVar4 & 0x20) == 0) {
          bVar4 = DAT_08b7;
          DAT_08b7 = bVar4 | 0x20;
        }
        else {
          bVar4 = DAT_0bcf;
          if (DAT_4e37 < bVar4) {
            bVar4 = DAT_08b4;
            DAT_08b4 = bVar4 | 8;
            bVar4 = DAT_0889;
            DAT_0889 = bVar4 & 0xf7;
          }
        }
      }
      else {
        bVar4 = DAT_08b7;
        DAT_08b7 = bVar4 & 0xdf;
        bVar4 = DAT_0889;
        DAT_0889 = bVar4 & 0xf7;
        DAT_0bcf = 0;
      }
    }
  }
  else {
    bVar4 = DAT_0888;
    if ((~bVar4 & 2) == 0) {
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 & 0xdf;
      bVar4 = DAT_08b4;
      DAT_08b4 = bVar4 & 0xf7;
      DAT_0bcf = 0;
    }
    else {
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 | 0x20;
      DAT_0bd0 = 0;
    }
  }
  cVar1 = DAT_0d64;
  if (((cVar1 == -0x80) || (bVar4 = DAT_08a0, (~bVar4 & 4) == 0)) ||
     (bVar4 = DAT_08b2, (~bVar4 & 0x80) == 0)) goto LAB_6fb8;
  bVar4 = DAT_0881;
  if ((bVar4 & 0x10) == 0) {
    bVar4 = DAT_0bce;
    if ((bVar4 < DAT_4e5b) || (DAT_4e5c < bVar4)) {
      bVar4 = DAT_0888;
      if ((bVar4 & 2) == 0) goto LAB_6f3b;
      bVar4 = DAT_08b7;
      if ((~bVar4 & 0x10) == 0) {
        bVar4 = DAT_0b4a;
        if (DAT_4e5a < bVar4) {
          bVar4 = DAT_08b1;
          if ((~bVar4 & 1) != 0) {
            bVar4 = DAT_08b1;
            DAT_08b1 = bVar4 | 1;
            bVar4 = DAT_0bd2;
            DAT_0bd2 = bVar4 | 0x20;
          }
          bVar4 = DAT_08ba;
          if ((~bVar4 & 1) != 0) {
            bVar4 = DAT_08ba;
            DAT_08ba = bVar4 | 1;
            bVar4 = DAT_0bd2;
            DAT_0bd2 = bVar4 | 2;
          }
        }
        goto LAB_6fb8;
      }
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 | 0x10;
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 & 0xf7;
    }
    else {
      bVar4 = DAT_08b7;
      if ((~bVar4 & 8) == 0) {
        bVar4 = DAT_0b54;
        if ((DAT_4e5a < bVar4) && (bVar4 = DAT_08b1, (bVar4 & 1) != 0)) {
          bVar4 = DAT_08b1;
          DAT_08b1 = bVar4 & 0xfe;
          bVar4 = DAT_0bd2;
          DAT_0bd2 = bVar4 | 0x20;
        }
        goto LAB_6fb8;
      }
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 | 8;
      bVar4 = DAT_08b7;
      DAT_08b7 = bVar4 & 0xef;
    }
  }
  else {
LAB_6f3b:
    bVar4 = DAT_08b7;
    DAT_08b7 = bVar4 & 0xef;
    bVar4 = DAT_08b7;
    DAT_08b7 = bVar4 & 0xf7;
  }
  DAT_0b4a = 0;
  DAT_0b54 = 0;
LAB_6fb8:
  DAT_08c2 = 8;
  DAT_08c3 = 0;
  return;
}


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
  if (((cVar3 != -0x80) && (bVar1 = DAT_08a0, (~bVar1 & 4) != 0)) &&
     (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)) {
    if ((bVar4 < 7) || (0xf7 < bVar4)) {
      bVar4 = DAT_08b5;
      if ((bVar4 & 0x20) == 0) {
        bVar4 = DAT_08b5;
        DAT_08b5 = bVar4 | 0x20;
      }
      else {
        bVar4 = DAT_0b42;
        bVar1 = DAT_0d8a;
        if ((bVar1 < bVar4) && (bVar4 = DAT_08b0, (~bVar4 & 0x40) != 0)) {
          bVar4 = DAT_08b0;
          DAT_08b0 = bVar4 | 0x40;
          bVar4 = DAT_0bd2;
          DAT_0bd2 = bVar4 | 0x40;
          bVar4 = DAT_08b9;
          if ((~bVar4 & 0x40) != 0) {
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
  if (((~bVar4 & 4) == 0) || (bVar4 = DAT_08b0, (~bVar4 & 0x40) != 0)) {
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
  else {
    uVar2 = DAT_08ca._0_1_;
    DAT_08d8 = uVar2;
    DAT_08f5 = DAT_4e65;
    bVar4 = (byte)((ushort)DAT_4e65 * 0xa0 >> 8);
    if (0x95 < bVar4) {
      bVar4 = 0x95;
    }
    DAT_0aeb = bVar4;
  }
  DAT_08c2 = 0x10;
  DAT_08c3 = 0;
  return;
}


/* Entry 707c */

void FUN_707c(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  
  bVar1 = DAT_0880;
  if ((~bVar1 & 0x10) != 0) {
    bVar1 = DAT_0880;
    DAT_0880 = bVar1 | 0x10;
    uVar3 = DAT_08ca;
    DAT_08d4 = uVar3;
  }
  uVar3 = DAT_08ca;
  DAT_0bfc = uVar3;
  uVar2 = DAT_08a0;
  DAT_08d2 = uVar3;
  DAT_08c2 = 0;
  DAT_08c3 = 0x40;
  return;
}


/* Entry 70a3 */

void FUN_70a3(undefined2 param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte extraout_A;
  undefined1 uVar7;
  undefined *index_q8;
  ushort uVar8;
  
  cVar4 = DAT_0d58;
  bVar6 = (byte)((ushort)param_1 >> 8);
  if (((cVar4 != -0x80) && (bVar1 = DAT_08a0, (~bVar1 & 4) != 0)) &&
     (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)) {
    if ((bVar6 < 7) || (0xf7 < bVar6)) {
      bVar6 = DAT_08b5;
      if ((bVar6 & 0x10) == 0) {
        bVar6 = DAT_08b5;
        DAT_08b5 = bVar6 | 0x10;
        bVar6 = DAT_0bac;
        DAT_0bac = bVar6 | 0x80;
      }
      else {
        bVar6 = DAT_0b41;
        bVar1 = DAT_0d8a;
        if ((bVar1 < bVar6) && (bVar6 = DAT_08b0, (~bVar6 & 0x80) != 0)) {
          bVar6 = DAT_08b0;
          DAT_08b0 = bVar6 | 0x80;
          bVar6 = DAT_0bd2;
          DAT_0bd2 = bVar6 | 0x40;
          bVar6 = DAT_08b9;
          if ((~bVar6 & 0x80) != 0) {
            bVar6 = DAT_08b9;
            DAT_08b9 = bVar6 | 0x80;
            bVar6 = DAT_0bd2;
            DAT_0bd2 = bVar6 | 4;
          }
        }
      }
    }
    else {
      bVar6 = DAT_08b5;
      if ((bVar6 & 0x10) == 0) {
        bVar6 = DAT_0b4e;
        bVar1 = DAT_0d8a;
        if (bVar1 < bVar6) {
          bVar6 = DAT_08b0;
          if ((bVar6 & 0x80) != 0) {
            bVar6 = DAT_08b0;
            DAT_08b0 = bVar6 & 0x7f;
            bVar6 = DAT_0bd2;
            DAT_0bd2 = bVar6 | 0x40;
          }
          bVar6 = DAT_0bac;
          DAT_0bac = bVar6 & 0x7f;
        }
      }
      else {
        bVar6 = DAT_08b5;
        DAT_08b5 = bVar6 & 0xef;
      }
    }
  }
  uVar2 = DAT_08ca;
  RAM08d6 = uVar2;
  uVar3 = RAM08d6;
  uVar8 = uVar3 - 0xf00;
  if (uVar3 < 0xf00) {
    uVar8 = 0;
  }
  index_q8 = (undefined *)(uVar8 >> 3);
  if (&UNK_1bff < index_q8) {
    index_q8 = (undefined *)0x1c00;
  }
  uVar8 = FUN_c276((ushort)index_q8,&UNK_4f44);
  extraout_A = (byte)(uVar8 >> 8);
  DAT_08f6 = extraout_A;
  uVar8 = (ushort)extraout_A * 0xa0;
  if (0x95ff < uVar8) {
    uVar8 = CONCAT11(0x95,(char)uVar8);
  }
  DAT_0ae8 = (char)(uVar8 >> 8);
  bVar6 = DAT_08a0;
  if (((~bVar6 & 4) == 0) || (bVar6 = DAT_08b0, uVar7 = DAT_4e64, (bVar6 & 0x80) == 0)) {
    uVar7 = DAT_08f6;
  }
  DAT_08f4 = uVar7;
  bVar6 = DAT_0883;
  if ((~bVar6 & 0x20) != 0) {
    bVar6 = DAT_0883;
    DAT_0883 = bVar6 | 0x20;
    uVar8 = lookup_u8_uniform_axis((uchar)uVar8,&UNK_1996);
    DAT_0a08 = (char)(uVar8 >> 8);
    bVar6 = DAT_0884;
    if ((~bVar6 & 8) != 0) {
      bVar6 = DAT_0884;
      DAT_0884 = bVar6 | 8;
      uVar8 = lookup_u8_uniform_axis((uchar)uVar8,&UNK_32ef);
      DAT_0994 = uVar8;
      uVar8 = lookup_u8_uniform_axis((uchar)uVar8,&UNK_3301);
      DAT_0996 = uVar8;
    }
  }
  bVar6 = DAT_08a0;
  if ((bVar6 & 4) != 0) {
    cVar4 = DAT_0bdd;
    cVar5 = DAT_0d4b;
    if (cVar4 == cVar5) goto LAB_71cd;
  }
  bVar6 = DAT_08b0;
  if (((bVar6 & 0x80) == 0) || (bVar6 = DAT_0881, (~bVar6 & 0x10) == 0)) {
    bVar6 = DAT_08f4;
    if (DAT_4bfe <= bVar6) {
      if ((bVar6 == DAT_4bff) || (bVar6 < DAT_4bff)) goto LAB_71cd;
      goto LAB_71c5;
    }
  }
  else {
    bVar6 = DAT_0abe;
    if (bVar6 < DAT_4c00) {
LAB_71c5:
      bVar6 = DAT_00f0;
      DAT_00f0 = bVar6 | 4;
      goto LAB_71cd;
    }
    if (bVar6 <= DAT_4c01) goto LAB_71cd;
  }
  bVar6 = DAT_00f0;
  DAT_00f0 = bVar6 & 0xfb;
LAB_71cd:
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
  undefined1 uVar1;
  
  uVar1 = DAT_08ca._0_1_;
  DAT_08de = uVar1;
  DAT_08c2 = 4;
  DAT_08c3 = 0;
  return;
}


/* Entry 7208 */

void candidate_unreferenced_7208(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar1 = DAT_0885;
  bVar2 = DAT_0de0._0_1_;
  bVar4 = DAT_0de0._1_1_;
  bVar3 = DAT_0de0._0_1_;
  RAM0de1 = CONCAT11(((bVar1 ^ bVar2) & bVar4) + (~(bVar1 ^ bVar2) & bVar3),bVar1);
  return;
}


/* Entry 721f */

void FUN_721f(void)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = DAT_0bfe;
  DAT_0bfe = bVar1 & 0x3f;
  bVar1 = DAT_0ca8;
  DAT_0ca8 = bVar1 & 0xf8;
  DAT_091b = 0xe;
  DAT_091c = 0xe;
  DAT_091d = 0xe;
  DAT_091e = 0xe;
  DAT_091f = 0xe;
  DAT_0920 = 0xe;
  DAT_0b09 = 0xe;
  bVar1 = DAT_0880;
  DAT_0880 = bVar1 | 0x44;
  bVar1 = DAT_0880;
  DAT_0880 = bVar1 & 0xfd;
  bVar1 = DAT_0880;
  DAT_0880 = bVar1 & 0xf7;
  bVar1 = DAT_0881;
  DAT_0881 = bVar1 | 0xd0;
  bVar1 = DAT_0881;
  DAT_0881 = bVar1 & 0xf7;
  bVar1 = DAT_0883;
  DAT_0883 = bVar1 & 0xef;
  bVar1 = DAT_0883;
  DAT_0883 = bVar1 & 0xdf;
  DAT_088b = 0;
  bVar1 = DAT_0a16;
  DAT_0a16 = bVar1 & 0xf7;
  bVar1 = DAT_0a92;
  DAT_0a92 = bVar1 & 0x7f;
  bVar1 = DAT_0a92;
  DAT_0a92 = bVar1 & 0xdf;
  bVar1 = DAT_0a92;
  DAT_0a92 = bVar1 & 0xf7;
  bVar1 = DAT_0a92;
  DAT_0a92 = bVar1 & 0xfd;
  bVar1 = DAT_0cf2;
  DAT_0cf2 = bVar1 & 0xfb;
  bVar1 = DAT_0cf2;
  DAT_0cf2 = bVar1 & 0xfd;
  bVar1 = DAT_0cf2;
  DAT_0cf2 = bVar1 & 0xfe;
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
  bVar1 = DAT_18e0;
  if (0x16 < DAT_18e0) {
    bVar1 = 0x16;
  }
  if (bVar1 < 0xc) {
    if (bVar1 == 0xb) {
      bVar1 = 10;
    }
  }
  else {
    bVar1 = bVar1 - 0xc;
  }
  DAT_0a1c = bVar1;
  DAT_0a1e = bVar1;
  DAT_0a1d = bVar1;
  DAT_0a1f = bVar1;
  bVar1 = DAT_0d7b;
  if (bVar1 < 0x17) {
    if (bVar1 == 0xb) {
      bVar1 = 10;
    }
  }
  else {
    bVar1 = 0x16;
  }
  DAT_0a1a = bVar1;
  bVar1 = DAT_0abf;
  DAT_0abf = bVar1 & 0xfb;
  bVar1 = DAT_0abf;
  DAT_0abf = bVar1 & 0xfe;
  bVar1 = DAT_0abf;
  DAT_0abf = bVar1 & 0xfd;
  DAT_0ac2 = 0;
  DAT_0ac4 = 0;
  DAT_0ac6 = 0;
  DAT_0aca = 0;
  DAT_0ac0 = 0;
  DAT_0ac8 = 0;
  DAT_0acc = 0;
  bVar1 = DAT_0d08;
  DAT_0d08 = bVar1 & 0xfd;
  if (DAT_32ee != -0x80) {
    uVar2 = lookup_u8_uniform_axis('\0',&UNK_32ef);
    DAT_0994 = uVar2;
    uVar2 = lookup_u8_uniform_axis((uchar)uVar2,&UNK_3301);
    DAT_0996 = uVar2;
  }
  bVar1 = DAT_0e21;
  DAT_0e21 = bVar1 & 0x7f;
  return;
}


/* Entry 73a5 */

void FUN_73a5(void)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  undefined2 uVar8;
  ushort uVar9;
  
  bVar2 = DAT_08bc;
  DAT_08bc = bVar2 | 0x10;
  bVar2 = DAT_0921;
  if (0x3f < bVar2) {
    DAT_0a44 = 0xffff;
    uVar5 = 0x1e0;
    goto LAB_7416;
  }
  uVar5 = DAT_0a38;
  uVar9 = DAT_0a3a;
  if (CARRY2(uVar5,uVar9)) {
LAB_73c4:
    sVar6 = -1;
  }
  else {
    uVar3 = DAT_0a3c;
    uVar1 = uVar5 + uVar9 + uVar3;
    if (CARRY2(uVar5 + uVar9,uVar3)) goto LAB_73c4;
    uVar9 = DAT_0a3e;
    uVar5 = uVar1 + uVar9;
    if (CARRY2(uVar1,uVar9)) goto LAB_73c4;
    uVar1 = DAT_0a40;
    uVar9 = uVar5 + uVar1;
    if (CARRY2(uVar5,uVar1)) goto LAB_73c4;
    uVar5 = DAT_0a42;
    sVar6 = uVar9 + uVar5;
    if (CARRY2(uVar9,uVar5)) goto LAB_73c4;
  }
  DAT_0a44 = sVar6;
  sVar7 = sVar6 << 1;
  if (sVar6 < 0) {
    sVar7 = -1;
  }
  DAT_0a46 = sVar7;
  uVar9 = DAT_0a44;
  uVar5 = DAT_0a34;
  sVar6 = uVar9 + uVar5;
  if (CARRY2(uVar9,uVar5)) {
    sVar6 = -1;
  }
  DAT_0a48 = sVar6;
  uVar5 = DAT_0a44;
  DAT_0dde = 0x927c / uVar5;
  uVar9 = DAT_0a44;
  bVar2 = DAT_0dde._1_1_;
  uVar5 = CONCAT11(bVar2,(char)(((uint)(0x927c % uVar5) << 0x10) / (uint)uVar9 >> 8)) << 3;
  if ((bVar2 & 0x3f) >> 5 != 0) {
    uVar5 = 0xffff;
  }
LAB_7416:
  if (0xfdff < uVar5) {
    uVar5 = 0xfe00;
  }
  DAT_08f8 = uVar5;
  if (DAT_4bec <= uVar5) {
    bVar2 = DAT_0880;
    DAT_0880 = bVar2 | 2;
    bVar2 = DAT_0bf8;
    DAT_0bf8 = bVar2 | 0x20;
  }
  bVar2 = DAT_0a4b._0_1_;
  if (bVar2 < 4) {
    DAT_0dde._0_1_ = bVar2 >> 1;
    uVar8 = RAM0a4c;
    bVar4 = (byte)((ushort)uVar8 >> 8);
    RAM0ddf = CONCAT11(bVar4 >> 1 | bVar2 << 7,(byte)uVar8 >> 1 | bVar4 << 7);
    bVar2 = DAT_0dde._0_1_;
    DAT_0dde._0_1_ = bVar2 >> 1;
    uVar8 = RAM0ddf;
    bVar4 = (byte)((ushort)uVar8 >> 8);
    uVar8 = CONCAT11(bVar4 >> 1 | bVar2 << 7,(byte)uVar8 >> 1 | bVar4 << 7);
    RAM0ddf = uVar8;
  }
  else {
    uVar8 = 0xffff;
  }
  DAT_0a80 = uVar8;
  uVar5 = DAT_0a80;
  DAT_0dde = 0x927c / uVar5;
  uVar9 = DAT_0a80;
  bVar2 = DAT_0dde._1_1_;
  uVar5 = CONCAT11(bVar2,(char)(((uint)(0x927c % uVar5) << 0x10) / (uint)uVar9 >> 8)) << 3;
  if ((bVar2 & 0x3f) >> 5 != 0) {
    uVar5 = 0xffff;
  }
  if (0xfdff < uVar5) {
    uVar5 = 0xfe00;
  }
  DAT_0906 = uVar5;
  if (DAT_18d7 == '\0') {
    uVar8 = DAT_08fe;
    DAT_0902 = uVar8;
    uVar5 = DAT_08f8;
    DAT_0900 = uVar5;
  }
  else {
    uVar5 = DAT_0906;
    DAT_0900 = uVar5;
    DAT_0902 = uVar5;
  }
  uVar9 = DAT_4e34;
  if (DAT_4e34 == 0) {
    uVar9 = 1;
  }
  uVar5 = uVar5 / uVar9;
  if ((char)(uVar5 >> 8) != '\0') {
    uVar5 = 0xff;
  }
  DAT_0ae2 = (char)uVar5;
  bVar2 = DAT_08bc;
  DAT_08bc = bVar2 & 0xef;
  return;
}


/* Entry 74b8 */

void FUN_74b8(uchar param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  byte extraout_A;
  byte extraout_A_00;
  byte extraout_A_01;
  byte extraout_A_02;
  uchar uVar5;
  undefined1 extraout_A_03;
  undefined1 extraout_A_04;
  ushort uVar6;
  byte bVar12;
  undefined2 uVar7;
  short sVar8;
  byte bVar13;
  char cVar14;
  ushort uVar9;
  undefined2 uVar10;
  undefined1 uVar15;
  short sVar11;
  byte *pbVar16;
  ushort uVar17;
  
  bVar12 = DAT_08bc;
  DAT_08bc = bVar12 | 0x40;
  uVar6 = lookup_u8_uniform_axis(param_1,&UNK_4234);
  DAT_095e = (uVar6 >> 8) << 3;
  cVar14 = DAT_0d54;
  if (((cVar14 != -0x80) && (bVar12 = DAT_08a0, (~bVar12 & 4) != 0)) &&
     (bVar12 = DAT_08b2, (~bVar12 & 0x80) != 0)) {
    bVar12 = DAT_0bfe;
    if ((bVar12 & 0x80) == 0) {
LAB_751f:
      bVar12 = DAT_08b5;
      DAT_08b5 = bVar12 & 0xfb;
      bVar12 = DAT_08b5;
      DAT_08b5 = bVar12 & 0xfd;
    }
    else {
      uVar17 = DAT_0c9c;
      uVar9 = DAT_0c9a;
      uVar6 = uVar17 - uVar9;
      if (uVar17 < uVar9) {
        uVar6 = CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
      }
      if (DAT_4e42 < uVar6) {
        bVar12 = DAT_08b5;
        if ((~bVar12 & 2) == 0) {
          bVar12 = DAT_0b4c;
          bVar13 = DAT_0d8a;
          if (bVar13 < bVar12) {
            bVar12 = DAT_08af;
            if ((bVar12 & 0x10) != 0) {
              bVar12 = DAT_08af;
              DAT_08af = bVar12 & 0xef;
              bVar12 = DAT_0bd2;
              DAT_0bd2 = bVar12 | 0x80;
            }
            bVar12 = DAT_0bab;
            DAT_0bab = bVar12 & 0xef;
          }
        }
        else {
          bVar12 = DAT_08b5;
          DAT_08b5 = bVar12 | 2;
          bVar12 = DAT_08b5;
          DAT_08b5 = bVar12 & 0xfb;
        }
      }
      else {
        bVar12 = DAT_0881;
        if (((((~bVar12 & 0x10) == 0) || (bVar12 = DAT_0900._0_1_, DAT_4e40 < bVar12)) ||
            ((bVar12 = DAT_08e8._0_1_, DAT_4e41 < bVar12 ||
             ((bVar12 = DAT_0bab, (~bVar12 & 0x20) == 0 || (bVar12 = DAT_0bab, (~bVar12 & 8) == 0)))
             ))) || (bVar12 = DAT_08af, (~bVar12 & 4) == 0)) goto LAB_751f;
        bVar12 = DAT_08b5;
        if ((bVar12 & 4) == 0) {
          bVar12 = DAT_08b5;
          DAT_08b5 = bVar12 | 4;
          bVar12 = DAT_08b5;
          DAT_08b5 = bVar12 & 0xfd;
          bVar12 = DAT_0bab;
          DAT_0bab = bVar12 | 0x10;
        }
        else {
          bVar12 = DAT_0b3f;
          if ((DAT_4e3e < bVar12) && (bVar12 = DAT_08af, (~bVar12 & 0x10) != 0)) {
            bVar12 = DAT_08af;
            DAT_08af = bVar12 | 0x10;
            bVar12 = DAT_0bd2;
            DAT_0bd2 = bVar12 | 0x80;
            bVar12 = DAT_08b8;
            if ((~bVar12 & 0x10) != 0) {
              bVar12 = DAT_08b8;
              DAT_08b8 = bVar12 | 0x10;
              bVar12 = DAT_0bd2;
              DAT_0bd2 = bVar12 | 8;
            }
          }
        }
      }
    }
  }
  uVar6 = DAT_0a44;
  if (DAT_4bca < uVar6) {
    if (DAT_4bc8 <= uVar6) {
      bVar12 = DAT_088c;
      DAT_088c = bVar12 & 0xf7;
    }
  }
  else {
    bVar12 = DAT_088c;
    DAT_088c = bVar12 | 8;
  }
  if (DAT_4bd2 < uVar6) {
    if (DAT_4bd0 <= uVar6) {
      bVar12 = DAT_088c;
      DAT_088c = bVar12 & 0xfb;
    }
  }
  else {
    bVar12 = DAT_088c;
    DAT_088c = bVar12 | 4;
  }
  if (DAT_4bce < uVar6) {
    if (DAT_4bcc <= uVar6) {
      bVar12 = DAT_088c;
      DAT_088c = bVar12 & 0xfd;
    }
  }
  else {
    bVar12 = DAT_088c;
    DAT_088c = bVar12 | 2;
  }
  bVar12 = DAT_08af;
  if (((~bVar12 & 8) != 0) && (bVar12 = DAT_08af, (~bVar12 & 4) != 0)) {
    bVar12 = DAT_0886;
    if ((~bVar12 & 0x10) == 0) {
      bVar12 = DAT_0b19;
      if (DAT_3492 <= bVar12) {
        bVar12 = DAT_0886;
        if (((bVar12 & 0x40) != 0) && (bVar12 = DAT_0886, (bVar12 & 0x10) != 0)) {
          bVar12 = DAT_088a;
          DAT_088a = bVar12 | 0x20;
          bVar12 = DAT_088a;
          DAT_088a = bVar12 | 2;
        }
        bVar12 = DAT_0886;
        DAT_0886 = bVar12 & 0xef;
      }
    }
    else {
      bVar12 = DAT_0b18;
      if (DAT_3491 <= bVar12) {
        bVar12 = DAT_0886;
        DAT_0886 = bVar12 | 0x10;
      }
    }
  }
  bVar12 = DAT_08af;
  if (((~bVar12 & 0x20) == 0) || (bVar12 = DAT_08af, (~bVar12 & 0x10) == 0)) {
LAB_7659:
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xf7;
  }
  else {
    bVar12 = DAT_08af;
    if (((~bVar12 & 8) == 0) || (bVar12 = DAT_08af, (~bVar12 & 4) == 0)) {
LAB_761e:
      bVar12 = DAT_0c90._0_1_;
      if (DAT_3490 < bVar12) {
        if ((DAT_348f <= bVar12) && (bVar12 = DAT_0886, (bVar12 & 8) != 0)) {
          bVar12 = DAT_0886;
          if ((bVar12 & 0x40) != 0) {
            bVar12 = DAT_088a;
            DAT_088a = bVar12 | 0x40;
            bVar12 = DAT_088a;
            DAT_088a = bVar12 | 4;
          }
          goto LAB_7659;
        }
      }
      else {
        bVar12 = DAT_0886;
        DAT_0886 = bVar12 | 8;
      }
    }
    else {
      bVar12 = DAT_08ec;
      bVar13 = DAT_0a06;
      if (bVar12 < bVar13) goto LAB_761e;
      bVar12 = DAT_0886;
      if ((bVar12 & 8) != 0) {
        bVar12 = DAT_0886;
        if ((bVar12 & 0x40) != 0) {
          bVar12 = DAT_088a;
          DAT_088a = bVar12 | 0x20;
          bVar12 = DAT_088a;
          DAT_088a = bVar12 | 2;
        }
        goto LAB_7659;
      }
    }
  }
  bVar12 = DAT_08f4;
  if (((DAT_348a < bVar12) && (bVar12 = DAT_0afa, DAT_3489 < bVar12)) &&
     (bVar12 = DAT_088d, (bVar12 & 4) != 0)) {
    bVar13 = DAT_0900._0_1_;
    bVar12 = DAT_0886;
    if ((~bVar12 & 0x40) == 0) {
      if (DAT_348d <= bVar13) goto LAB_7697;
      bVar12 = DAT_0886;
      if ((bVar12 & 0x40) == 0) goto LAB_777d;
      bVar12 = DAT_088a;
      DAT_088a = bVar12 | 0x80;
      bVar12 = DAT_088a;
      DAT_088a = bVar12 | 8;
LAB_76fd:
      cVar14 = DAT_097a;
      if ((cVar14 == '\0') &&
         ((((bVar12 = DAT_088a, uVar15 = DAT_3481, uVar4 = DAT_3484, (~bVar12 & 0x80) == 0 ||
            (bVar12 = DAT_088a, (~bVar12 & 0x40) == 0)) ||
           (bVar12 = DAT_088a, uVar15 = DAT_3482, uVar4 = DAT_3485, (~bVar12 & 0x20) == 0)) ||
          (bVar12 = DAT_088a, uVar15 = DAT_3483, uVar4 = DAT_3486, (~bVar12 & 0x10) == 0)))) {
        DAT_097a = uVar15;
        DAT_0a04 = uVar4;
      }
      cVar14 = DAT_0a86;
      if ((cVar14 == -0x80) &&
         (((bVar12 = DAT_088a, bVar13 = DAT_4b09, uVar15 = DAT_4b0c, (~bVar12 & 8) == 0 ||
           ((DAT_4b08 != '\0' &&
            (((bVar12 = DAT_088a, (~bVar12 & 4) == 0 ||
              (bVar12 = DAT_088a, bVar13 = DAT_4b0a, uVar15 = DAT_4b0d, (~bVar12 & 2) == 0)) ||
             (bVar12 = DAT_088a, bVar13 = DAT_4b0b, uVar15 = DAT_4b0e, (~bVar12 & 1) == 0)))))) &&
          (DAT_0a86 = bVar13, bVar13 < 0x80)))) {
        DAT_0a87 = uVar15;
      }
      goto LAB_777a;
    }
    if (bVar13 <= DAT_348e) goto LAB_777d;
LAB_7697:
    bVar12 = DAT_0886;
    if (((((bVar12 & 0x10) == 0) || (bVar12 = DAT_08af, (~bVar12 & 8) == 0)) ||
        (bVar12 = DAT_08af, (~bVar12 & 4) == 0)) &&
       (((bVar12 = DAT_08af, (~bVar12 & 0x20) == 0 || (bVar12 = DAT_08af, (~bVar12 & 0x10) == 0)) ||
        (bVar12 = DAT_0886, (bVar12 & 8) == 0)))) {
      bVar12 = DAT_0886;
      if ((bVar12 & 0x40) != 0) goto LAB_76fd;
      goto LAB_777d;
    }
    bVar12 = DAT_0b16;
    if (bVar12 <= DAT_34a6) goto LAB_7785;
    bVar12 = DAT_0b17;
    if ((bVar12 < DAT_348c) ||
       ((cVar14 = DAT_0d87, cVar14 == '\t' && (bVar12 = DAT_0896._0_1_, (bVar12 & 0x10) == 0)))) {
      bVar12 = DAT_0886;
      if ((bVar12 & 0x40) != 0) {
        bVar12 = DAT_088a;
        DAT_088a = bVar12 | 0x10;
        bVar12 = DAT_088a;
        DAT_088a = bVar12 | 1;
        goto LAB_76fd;
      }
      goto LAB_777d;
    }
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 | 0x40;
    DAT_097a = 0;
    DAT_0a04 = 0;
  }
  else {
    bVar12 = DAT_0886;
    if ((bVar12 & 0x40) == 0) goto LAB_777d;
LAB_777a:
    DAT_0b16 = 0;
LAB_777d:
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xef;
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xf7;
LAB_7785:
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xbf;
    DAT_088a = 0;
    bVar12 = DAT_0900._0_1_;
    if (((bVar12 < DAT_3488) || (bVar12 = DAT_08f4, bVar12 <= DAT_348a)) ||
       (bVar12 = DAT_0896._0_1_, (~bVar12 & 0x10) != 0)) {
      DAT_097a = 0x80;
    }
  }
  bVar12 = DAT_0a2e._0_1_;
  bVar13 = DAT_0d7c;
  if ((bVar13 <= bVar12) || (bVar12 = DAT_0900._0_1_, bVar12 < DAT_4b11)) {
    DAT_0a86 = 0x80;
  }
  bVar12 = DAT_08b1;
  if ((~bVar12 & 8) == 0) {
    uVar6 = DAT_0a44;
    if (DAT_34aa < uVar6) {
      if (DAT_34a8 < uVar6) {
        bVar12 = DAT_0886;
        DAT_0886 = bVar12 & 0xfb;
      }
    }
    else {
      bVar12 = DAT_0886;
      DAT_0886 = bVar12 | 4;
    }
    if (DAT_34ae < uVar6) {
      if (DAT_34ac < uVar6) {
        bVar12 = DAT_0886;
        DAT_0886 = bVar12 & 0xfd;
      }
    }
    else {
      bVar12 = DAT_0886;
      DAT_0886 = bVar12 | 2;
    }
  }
  else {
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xfb;
    bVar12 = DAT_0886;
    DAT_0886 = bVar12 & 0xfd;
  }
  uVar9 = DAT_08ce;
  uVar17 = DAT_08e8;
  uVar6 = uVar9 - uVar17;
  if (uVar9 < uVar17) {
    uVar6 = scale_u16_by_u8(CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),
                                     -(char)uVar6),&UNK_1841);
    uVar6 = CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
  }
  else {
    uVar6 = scale_u16_by_u8(uVar6,&UNK_1841);
  }
  sVar8 = DAT_08e8;
  DAT_08e8 = uVar6 + sVar8;
  bVar12 = DAT_0b03;
  if (bVar12 < DAT_19d8) {
    uVar7 = DAT_08ce;
    DAT_08e8 = uVar7;
  }
  bVar12 = DAT_0afe;
  if (bVar12 < 100) {
    uVar7 = DAT_0c8c;
    DAT_08f0 = uVar7;
  }
  else {
    cVar14 = DAT_0d87;
    if ((cVar14 == '\t') && (bVar12 = DAT_0896._0_1_, (bVar12 & 0x10) == 0)) {
      pbVar16 = &UNK_3343;
    }
    else {
      pbVar16 = &UNK_3342;
    }
    uVar17 = DAT_0c8c;
    uVar9 = DAT_08f0;
    uVar6 = uVar17 - uVar9;
    if (uVar17 < uVar9) {
      uVar6 = scale_u16_by_u8(CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),
                                       -(char)uVar6),pbVar16);
      uVar6 = CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
    }
    else {
      uVar6 = scale_u16_by_u8(uVar6,pbVar16);
    }
    sVar8 = DAT_08f0;
    DAT_08f0 = uVar6 + sVar8;
  }
  bVar2 = DAT_0c8c._0_1_;
  bVar13 = DAT_08f0._0_1_;
  bVar12 = bVar2 - bVar13;
  if (bVar2 < bVar13) {
    bVar12 = -bVar12;
    DAT_0dde._0_1_ = 0x80;
  }
  else {
    DAT_0dde._0_1_ = 0;
  }
  if (0x7f < bVar12) {
    bVar12 = 0x7f;
  }
  DAT_0dde._1_1_ = bVar12;
  uVar6 = DAT_0dde;
  if ((uVar6 & 0x8000) == 0) {
    cVar14 = (char)uVar6;
  }
  else {
    cVar14 = DAT_0dde._1_1_;
    cVar14 = -cVar14;
  }
  DAT_0988 = cVar14 + -0x80;
  bVar12 = DAT_0dde._1_1_;
  if (DAT_3344 < bVar12) {
    DAT_0989 = cVar14 + -0x80;
  }
  else {
    DAT_0989 = 0x80;
    DAT_0dde._1_1_ = 0;
  }
  uVar7 = DAT_0900;
  uVar7 = FUN_cc7b();
  RAM0de8 = uVar7;
  cVar3 = DAT_0d87;
  cVar14 = DAT_0989;
  if (cVar14 < '\0') {
    if ((cVar3 == '\t') && (bVar12 = DAT_0896._0_1_, (~bVar12 & 0x10) != 0)) {
      pbVar16 = &UNK_33f4;
    }
    else {
      bVar12 = DAT_0898;
      if (DAT_33f5 < bVar12) {
        pbVar16 = &UNK_3422;
      }
      else {
        pbVar16 = &UNK_340b;
      }
    }
  }
  else if ((cVar3 == '\t') && (bVar12 = DAT_0896._0_1_, (~bVar12 & 0x10) != 0)) {
    pbVar16 = &UNK_3439;
  }
  else {
    bVar12 = DAT_0898;
    if (DAT_33f6 < bVar12) {
      pbVar16 = &UNK_3467;
    }
    else {
      pbVar16 = &UNK_3450;
    }
  }
  uVar6 = RAM0de8;
  uVar6 = interp_u8_q8_index(uVar6,pbVar16);
  extraout_A = (byte)(uVar6 >> 8);
  DAT_098e = extraout_A;
  bVar12 = DAT_0dde._1_1_;
  RAM0ddf = (ushort)extraout_A * (ushort)bVar12;
  bVar12 = DAT_0dde._0_1_;
  if ((bVar12 & 0x80) == 0) {
    uVar6 = RAM0ddf;
    sVar8 = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      sVar8 = -1;
    }
  }
  else {
    uVar6 = RAM0ddf;
    sVar8 = -0x8000 - uVar6;
    if (0x8000 < uVar6) {
      sVar8 = 0;
    }
  }
  DAT_098a = sVar8;
  cVar14 = DAT_0d87;
  uVar15 = DAT_333a;
  if ((cVar14 == '\t') && (bVar12 = DAT_0896._0_1_, (bVar12 & 0x10) == 0)) {
    uVar15 = DAT_3339;
  }
  DAT_0de0._1_1_ = uVar15;
  uVar9 = DAT_08ce;
  uVar17 = DAT_08ea;
  uVar6 = uVar9 - uVar17;
  if (uVar9 < uVar17) {
    uVar6 = scale_u16_by_u8(CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),
                                     -(char)uVar6),(byte *)((short)&DAT_0de0 + 1));
    uVar6 = CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
  }
  else {
    uVar6 = scale_u16_by_u8(uVar6,(byte *)((short)&DAT_0de0 + 1));
  }
  sVar8 = DAT_08ea;
  DAT_08ea = uVar6 + sVar8;
  bVar12 = DAT_0b02;
  if ((byte)(DAT_333f - 1U) < bVar12) {
    bVar12 = DAT_0885;
    DAT_0885 = bVar12 & 0xfd;
    bVar12 = DAT_08e8._0_1_;
    if (bVar12 <= DAT_333b) {
      bVar12 = DAT_08ed;
      if (DAT_333c <= bVar12) {
        DAT_0b02 = 0;
        DAT_0b04 = 0;
        goto LAB_79b5;
      }
      goto LAB_79b9;
    }
LAB_79ca:
    bVar12 = DAT_08ea._0_1_;
  }
  else {
    bVar12 = DAT_0b04;
    if (DAT_333d <= (byte)((bVar12 + 1) - (0xfe < bVar12))) goto LAB_79ca;
    bVar12 = DAT_0b04;
    DAT_0b04 = (bVar12 + 1) - (0xfe < bVar12);
LAB_79b5:
    bVar12 = DAT_0885;
    DAT_0885 = bVar12 | 2;
LAB_79b9:
    bVar12 = DAT_0885;
    if ((bVar12 & 2) == 0) goto LAB_79ca;
    bVar13 = DAT_08ea._0_1_;
    bVar12 = bVar13 - DAT_333e;
    if (bVar13 < DAT_333e) {
      bVar12 = 0;
    }
  }
  bVar2 = DAT_08e8._0_1_;
  bVar13 = bVar2 - bVar12;
  if (bVar2 < bVar12) {
    bVar13 = -bVar13;
    DAT_0de0._1_1_ = 0x80;
  }
  else {
    DAT_0de0._1_1_ = 0;
  }
  if (0x7f < bVar13) {
    bVar13 = 0x7f;
  }
  DAT_0de2 = bVar13;
  uVar6 = RAM0de1;
  if ((uVar6 & 0x8000) == 0) {
    cVar14 = (char)uVar6;
  }
  else {
    cVar14 = DAT_0de2;
    cVar14 = -cVar14;
  }
  DAT_0984 = cVar14 + -0x80;
  bVar12 = DAT_08e8._0_1_;
  if ((DAT_3340 <= bVar12) || (bVar12 = DAT_0afe, bVar12 < 100)) {
    DAT_0de2 = 0;
    DAT_0984 = 0x80;
  }
  bVar12 = DAT_0de2;
  if (DAT_3341 < bVar12) {
    uVar15 = DAT_0984;
    DAT_0985 = uVar15;
  }
  else {
    DAT_0985 = 0x80;
    DAT_0de2 = 0;
  }
  uVar7 = DAT_0900;
  uVar7 = FUN_cc7b();
  RAM0de8 = uVar7;
  cVar3 = DAT_0d87;
  cVar14 = DAT_0985;
  if (cVar14 < '\0') {
    if ((cVar3 == '\t') && (bVar12 = DAT_0896._0_1_, (~bVar12 & 0x10) != 0)) {
      pbVar16 = &UNK_3368;
    }
    else {
      bVar12 = DAT_0898;
      if (DAT_3369 < bVar12) {
        pbVar16 = &UNK_3396;
      }
      else {
        pbVar16 = &UNK_337f;
      }
    }
  }
  else if ((cVar3 == '\t') && (bVar12 = DAT_0896._0_1_, (~bVar12 & 0x10) != 0)) {
    pbVar16 = &UNK_33ad;
  }
  else {
    bVar12 = DAT_0898;
    if (DAT_336a < bVar12) {
      pbVar16 = &UNK_33db;
    }
    else {
      pbVar16 = &UNK_33c4;
    }
  }
  uVar6 = RAM0de8;
  uVar6 = interp_u8_q8_index(uVar6,pbVar16);
  extraout_A_00 = (byte)(uVar6 >> 8);
  DAT_098d = extraout_A_00;
  bVar12 = DAT_0de2;
  RAM0de2 = (ushort)extraout_A_00 * (ushort)bVar12;
  bVar12 = DAT_0de0._1_1_;
  if ((bVar12 & 0x80) == 0) {
    uVar6 = RAM0de2;
    sVar8 = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      sVar8 = -1;
    }
  }
  else {
    uVar6 = RAM0de2;
    sVar8 = -0x8000 - uVar6;
    if (0x8000 < uVar6) {
      sVar8 = 0;
    }
  }
  DAT_0986 = sVar8;
  bVar12 = DAT_0de0._1_1_;
  if ((bVar12 & 0x80) == 0) {
    bVar12 = DAT_0dde._0_1_;
    if ((bVar12 & 0x80) == 0) {
      sVar8 = RAM0ddf;
      sVar11 = RAM0de2;
      sVar8 = sVar8 + sVar11;
      if (0x7f < (byte)((ushort)sVar8 >> 8)) {
        sVar8 = 0x7fff;
      }
    }
    else {
      uVar9 = RAM0de2;
      uVar6 = RAM0ddf;
      sVar8 = uVar9 - uVar6;
      if (uVar9 < uVar6) {
        sVar8 = CONCAT11((~(byte)((ushort)sVar8 >> 8) + 1) - ((char)-(char)sVar8 != '\0'),
                         -(char)sVar8);
        goto LAB_7b07;
      }
    }
LAB_7aff:
    DAT_0de5 = sVar8;
    DAT_0de4 = 0;
    uVar6 = DAT_0de5;
    uVar6 = scale_u16_by_u8(uVar6,&DAT_098f);
    sVar8 = uVar6 + 0x8000;
    if (0x7fff < uVar6) {
      sVar8 = -1;
    }
  }
  else {
    bVar12 = DAT_0dde._0_1_;
    if ((bVar12 & 0x80) == 0) {
      uVar6 = RAM0ddf;
      uVar9 = RAM0de2;
      sVar8 = uVar6 - uVar9;
      if (uVar9 <= uVar6) goto LAB_7aff;
      sVar8 = CONCAT11((~(byte)((ushort)sVar8 >> 8) + 1) - ((char)-(char)sVar8 != '\0'),-(char)sVar8
                      );
    }
    else {
      sVar8 = RAM0ddf;
      sVar11 = RAM0de2;
      sVar8 = sVar8 + sVar11;
      if (0x7f < (byte)((ushort)sVar8 >> 8)) {
        sVar8 = -0x8000;
      }
    }
LAB_7b07:
    DAT_0de5 = sVar8;
    DAT_0de4 = 0x80;
    uVar6 = DAT_0de5;
    uVar6 = scale_u16_by_u8(uVar6,&DAT_0990);
    if (7 < (byte)(uVar6 >> 8)) {
      uVar6 = 0x800;
    }
    DAT_0de7 = uVar6;
    sVar8 = DAT_0de7;
    sVar8 = -0x8000 - sVar8;
  }
  DAT_0982 = sVar8;
  bVar12 = DAT_0de4;
  if ((bVar12 & 0x80) == 0) {
    sVar8 = DAT_0de5;
    uVar15 = (undefined1)((ushort)(sVar8 + -0x8000) >> 8);
  }
  else {
    sVar8 = DAT_0de5;
    uVar15 = (undefined1)((ushort)(-0x8000 - sVar8) >> 8);
  }
  DAT_098c = uVar15;
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x18fa;
  uVar6 = axis_index_u16_ascending(0xfa);
  DAT_0908 = uVar6;
  uVar7 = DAT_08e8;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x18e6;
  uVar6 = axis_index_u16_ascending(0xe6);
  DAT_090e = uVar6;
  uVar7 = DAT_0908;
  DAT_0de0 = uVar7;
  uVar7 = DAT_090e;
  DAT_0dde = uVar7;
  uVar6 = bilinear_modulo24_grid(&UNK_1911,'\r');
  extraout_A_01 = (byte)(uVar6 >> 8);
  if (extraout_A_01 < 0x17) {
    bVar12 = extraout_A_01;
    if (extraout_A_01 == 0xb) {
      bVar12 = 10;
    }
  }
  else {
    bVar12 = 0x16;
  }
  DAT_0a1b = bVar12;
  bVar12 = DAT_0881;
  if ((~bVar12 & 0x10) == 0) {
    uVar6 = DAT_08f2;
    uVar6 = lookup_u8_uniform_u16_axis(uVar6,&UNK_19c6);
    DAT_0938 = (char)(uVar6 >> 8);
    uVar6 = lookup_u8_uniform_axis((uchar)uVar6,&UNK_1996);
    DAT_0934 = uVar6;
    bVar12 = DAT_08af;
    if (((~bVar12 & 8) == 0) || (bVar12 = DAT_08af, (~bVar12 & 4) == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = DAT_08ce;
    }
    uVar6 = lookup_u8_uniform_u16_axis(uVar6,&UNK_19ba);
    DAT_0937 = (char)(uVar6 >> 8);
    uVar6 = DAT_0900;
    uVar6 = lookup_u8_uniform_u16_axis(uVar6,&UNK_19a8);
    extraout_A_02 = (byte)(uVar6 >> 8);
    DAT_0936 = extraout_A_02;
    bVar12 = DAT_0937;
    bVar13 = DAT_0979;
    uVar6 = multiply_u16_shift8_saturate(bVar13 + 0x180,(ushort)extraout_A_02 * (ushort)bVar12);
    bVar12 = DAT_0938;
    uVar9 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6);
    uVar6 = DAT_0934;
    uVar17 = (ushort)((uint)uVar9 * (uint)uVar6 >> 0x10);
    if (uVar17 < 0x4000) {
      sVar8 = (ushort)(byte)((byte)((uint)uVar9 * (uint)uVar6 >> 8) >> 6) + uVar17 * 4;
    }
    else {
      sVar8 = -1;
    }
    DAT_0932 = sVar8;
    uVar7 = DAT_08ce;
    DAT_08e8 = uVar7;
    DAT_08ea = uVar7;
    uVar9 = DAT_095e;
    uVar6 = DAT_0932;
    sVar8 = uVar9 + uVar6;
    if (CARRY2(uVar9,uVar6)) {
      sVar8 = -1;
    }
    DAT_092a = sVar8;
    DAT_092e = sVar8;
    FUN_864e();
    bVar12 = DAT_0cec;
    uVar6 = DAT_0932;
    iVar1 = (uint)uVar6 * (uint)bVar12 * 2;
    uVar6 = (ushort)iVar1;
    bVar12 = (byte)((uint)iVar1 >> 0x10);
    cVar14 = bVar12 + (0xff7f < uVar6);
    if (CONCAT11((char)((uint)iVar1 >> 0x18) + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
      DAT_0dde._0_1_ = cVar14;
      RAM0ddf = uVar6 + 0x80;
      uVar9 = DAT_0dde;
      uVar6 = DAT_095e;
      sVar8 = uVar9 + uVar6;
      if (CARRY2(uVar9,uVar6)) goto LAB_7c69;
    }
    else {
LAB_7c69:
      sVar8 = -1;
    }
    DAT_092c = sVar8;
    DAT_0930 = sVar8;
    bVar12 = DAT_0a16;
    if ((~bVar12 & 2) == 0) {
      bVar12 = DAT_0881;
      DAT_0881 = bVar12 | 0x40;
      bVar12 = DAT_0a16;
      DAT_0a16 = bVar12 & 0xfd;
    }
    else {
      bVar12 = DAT_0881;
      DAT_0881 = bVar12 | 0x80;
      bVar12 = DAT_0a16;
      DAT_0a16 = bVar12 & 0xfe;
    }
    bVar12 = DAT_088b;
    if ((~bVar12 & 0x80) != 0) {
      DAT_0a26 = 0;
      bVar12 = DAT_18e0;
      if (0x16 < DAT_18e0) {
        bVar12 = 0x16;
      }
      if (bVar12 < 0xc) {
        if (bVar12 == 0xb) {
          bVar12 = 10;
        }
      }
      else {
        bVar12 = bVar12 - 0xc;
      }
      DAT_0a1e = bVar12;
      DAT_0a28 = 0;
      uVar15 = DAT_0a1e;
      DAT_0a1f = uVar15;
    }
    bVar12 = DAT_0a16;
    DAT_0a16 = bVar12 & 0xf7;
    goto LAB_8578;
  }
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x1b0c;
  uVar6 = axis_index_u16_ascending('\f');
  DAT_090a = uVar6;
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x374e;
  uVar6 = axis_index_u16_ascending('N');
  DAT_0b8c = uVar6;
  bVar12 = DAT_0a16;
  if ((~bVar12 & 2) == 0) {
    bVar12 = DAT_0b80;
    if ((~bVar12 & 1) == 0) {
      uVar7 = DAT_0c90;
      DAT_0ba2 = uVar7;
      DAT_0ba4 = 0x3712;
      uVar6 = axis_index_u16_ascending('\x12');
      DAT_0b8e = uVar6;
      sVar8 = DAT_0b8e;
      DAT_0e06 = (char)((ushort)sVar8 >> 8);
      DAT_0e08 = sVar8 << 8;
      sVar8 = DAT_0b8c;
      uVar5 = (uchar)((ushort)sVar8 >> 8);
      DAT_0e0a = sVar8 << 8;
      uVar6 = bilinear_u16_grid(&UNK_3793,uVar5,uVar5);
    }
    else {
      uVar7 = DAT_0c90;
      DAT_0ba2 = uVar7;
      DAT_0ba4 = 0x1ad0;
      uVar6 = axis_index_u16_ascending(0xd0);
      DAT_0910 = uVar6;
      sVar8 = DAT_0910;
      DAT_0e06 = (char)((ushort)sVar8 >> 8);
      DAT_0e08 = sVar8 << 8;
      sVar8 = DAT_090a;
      uVar5 = (uchar)((ushort)sVar8 >> 8);
      DAT_0e0a = sVar8 << 8;
      uVar6 = bilinear_u16_grid(&UNK_1b51,uVar5,uVar5);
    }
    DAT_0954 = uVar6;
  }
  else {
    bVar12 = DAT_0b80;
    if ((~bVar12 & 1) == 0) {
      uVar7 = DAT_0c90;
      DAT_0ba2 = uVar7;
      DAT_0ba4 = 0x3712;
      uVar6 = axis_index_u16_ascending('\x12');
      DAT_0b8e = uVar6;
      sVar8 = DAT_0b8e;
      DAT_0e06 = (char)((ushort)sVar8 >> 8);
      DAT_0e08 = sVar8 << 8;
      sVar8 = DAT_0b8c;
      uVar5 = (uchar)((ushort)sVar8 >> 8);
      DAT_0e0a = sVar8 << 8;
      uVar6 = bilinear_u16_grid(&UNK_3793,uVar5,uVar5);
    }
    else {
      uVar7 = DAT_0c90;
      DAT_0ba2 = uVar7;
      DAT_0ba4 = 0x1ad0;
      uVar6 = axis_index_u16_ascending(0xd0);
      DAT_0910 = uVar6;
      sVar8 = DAT_0910;
      DAT_0e06 = (char)((ushort)sVar8 >> 8);
      DAT_0e08 = sVar8 << 8;
      sVar8 = DAT_090a;
      uVar5 = (uchar)((ushort)sVar8 >> 8);
      DAT_0e0a = sVar8 << 8;
      uVar6 = bilinear_u16_grid(&UNK_1b51,uVar5,uVar5);
    }
    DAT_0952 = uVar6;
  }
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x262e;
  uVar6 = axis_index_u16_ascending('.');
  DAT_090c = uVar6;
  uVar7 = DAT_08e8;
  bVar12 = DAT_08af;
  if (((((~bVar12 & 8) == 0) || (bVar12 = DAT_08af, uVar10 = uVar7, (~bVar12 & 4) == 0)) &&
      (bVar12 = DAT_08af, uVar10 = DAT_4e62, (~bVar12 & 0x20) != 0)) &&
     (bVar12 = DAT_08af, (~bVar12 & 0x10) != 0)) {
    uVar10 = uVar7;
  }
  DAT_0ba2 = uVar10;
  DAT_0ba4 = 0x25f2;
  uVar6 = axis_index_u16_ascending(0xf2);
  DAT_0912 = uVar6;
  bVar12 = DAT_0a16;
  if ((~bVar12 & 2) == 0) {
    sVar8 = DAT_0912;
    DAT_0e06 = (char)((ushort)sVar8 >> 8);
    DAT_0e08 = sVar8 << 8;
    sVar8 = DAT_090c;
    uVar5 = (uchar)((ushort)sVar8 >> 8);
    DAT_0e0a = sVar8 << 8;
    uVar6 = bilinear_u16_grid(&UNK_2673,uVar5,uVar5);
    DAT_0958 = uVar6;
  }
  else {
    sVar8 = DAT_0912;
    DAT_0e06 = (char)((ushort)sVar8 >> 8);
    DAT_0e08 = sVar8 << 8;
    sVar8 = DAT_090c;
    uVar5 = (uchar)((ushort)sVar8 >> 8);
    DAT_0e0a = sVar8 << 8;
    uVar6 = bilinear_u16_grid(&UNK_2673,uVar5,uVar5);
    DAT_0956 = uVar6;
  }
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x311a;
  uVar6 = axis_index_u16_ascending('\x1a');
  DAT_0cd6 = uVar6;
  uVar7 = DAT_0c90;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x3116;
  uVar6 = axis_index_u16_ascending('\x16');
  DAT_0cd8 = uVar6;
  uVar7 = DAT_0cd6;
  DAT_0dde = uVar7;
  uVar7 = DAT_0cd8;
  DAT_0de0 = uVar7;
  uVar6 = bilinear_u8_grid(&UNK_311b,'\x02');
  DAT_0cd2 = (char)(uVar6 + 0x80 >> 8);
  uVar7 = DAT_0900;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x3126;
  uVar6 = axis_index_u16_ascending('&');
  DAT_0cda = uVar6;
  uVar7 = DAT_08e8;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x3122;
  uVar6 = axis_index_u16_ascending('\"');
  DAT_0cdc = uVar6;
  uVar7 = DAT_0cda;
  DAT_0dde = uVar7;
  uVar7 = DAT_0cdc;
  DAT_0de0 = uVar7;
  uVar6 = bilinear_u8_grid(&UNK_3127,'\x02');
  DAT_0cd3 = (char)(uVar6 + 0x80 >> 8);
  if (DAT_3114 == -0x80) {
    bVar12 = DAT_0cd2;
  }
  else {
    bVar12 = DAT_0cd3;
  }
  DAT_0cd1 = bVar12;
  bVar2 = DAT_0cd4;
  bVar13 = bVar2 + 0x80;
  if (bVar2 < 0x80) {
    cVar14 = bVar12 + bVar13;
    if (!CARRY1(bVar12,bVar13)) {
      cVar14 = '\0';
    }
  }
  else {
    cVar14 = bVar12 + bVar13;
    if (CARRY1(bVar12,bVar13)) {
      cVar14 = -1;
    }
  }
  DAT_0cd0 = cVar14;
  uVar15 = DAT_0cd0;
  DAT_0ba2._0_1_ = uVar15;
  DAT_0ba4 = 0x321a;
  uVar6 = axis_index_u8_ascending('\x1a');
  DAT_0cde = uVar6;
  uVar7 = DAT_0c90;
  DAT_0ba2 = uVar7;
  DAT_0ba4 = 0x3216;
  uVar6 = axis_index_u16_ascending('\x16');
  DAT_0ce0 = uVar6;
  uVar7 = DAT_0cde;
  DAT_0dde = uVar7;
  uVar7 = DAT_0ce0;
  DAT_0de0 = uVar7;
  uVar6 = bilinear_u8_grid(&UNK_3219,'\x02');
  DAT_0cd5 = (char)(uVar6 + 0x80 >> 8);
  bVar12 = DAT_0cd0;
  if (bVar12 == 0) {
LAB_7fa5:
    uVar9 = 0x100;
  }
  else {
    bVar13 = DAT_0cd5;
    if (bVar13 == 0) goto LAB_7fa5;
    iVar1 = (uint)bVar13 * 2 * (uint)(bVar12 + 0x80);
    uVar6 = (ushort)iVar1;
    bVar12 = (byte)((uint)iVar1 >> 0x10);
    uVar7 = CONCAT11(CARRY1(bVar12,0xff7f < uVar6),bVar12 + (0xff7f < uVar6));
    DAT_0dde = uVar7;
    DAT_0de0._0_1_ = (char)(uVar6 + 0x80 >> 8);
    uVar6 = RAM0ddf;
    if ((uVar6 == 0) || (DAT_1ace == 0)) goto LAB_7fa5;
    uVar7 = FUN_c407(DAT_1ace + 0x80,uVar7);
    if ((char)((ushort)uVar7 >> 8) == '\0') {
      DAT_0dde._0_1_ = (char)uVar7;
      bVar12 = DAT_0dde._0_1_;
      uVar9 = CONCAT11(bVar12 + (0xff7f < uVar6),(char)(uVar6 + 0x80 >> 8));
      if (CARRY1(bVar12,0xff7f < uVar6)) goto LAB_7fa0;
    }
    else {
LAB_7fa0:
      uVar9 = 0xffff;
    }
  }
  DAT_0ce2 = uVar9;
  uVar6 = DAT_0952;
  uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
  DAT_0ce4 = uVar6;
  uVar9 = DAT_0ce2;
  uVar6 = DAT_0954;
  uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
  DAT_0ce6 = uVar6;
  uVar9 = DAT_0ce2;
  uVar6 = DAT_0956;
  uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
  DAT_0ce8 = uVar6;
  uVar9 = DAT_0ce2;
  uVar6 = DAT_0958;
  uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
  DAT_0cea = uVar6;
  uVar6 = DAT_0994;
  bVar13 = (byte)(uVar6 >> 1);
  bVar12 = (byte)(uVar6 >> 9);
  sVar8 = CONCAT11(bVar12 - (bVar13 < DAT_3313),bVar13 - DAT_3313);
  if (bVar12 < (bVar13 < DAT_3313)) {
    sVar8 = 0;
  }
  DAT_0994 = sVar8 << 1;
  uVar6 = DAT_0996;
  bVar13 = (byte)(uVar6 >> 1);
  bVar12 = (byte)(uVar6 >> 9);
  sVar8 = CONCAT11(bVar12 - (bVar13 < DAT_3314),bVar13 - DAT_3314);
  if (bVar12 < (bVar13 < DAT_3314)) {
    sVar8 = 0;
  }
  DAT_0996 = sVar8 << 1;
  uVar6 = DAT_0994;
  if ((ushort)(sVar8 << 1) < uVar6) {
    uVar7 = DAT_0994;
  }
  else {
    uVar7 = DAT_0996;
  }
  DAT_0992 = uVar7;
  uVar6 = DAT_0900;
  uVar6 = lookup_u8_uniform_u16_axis(uVar6,&UNK_34b0);
  DAT_09a0 = (char)(uVar6 >> 8);
  bVar12 = DAT_0a16;
  if ((~bVar12 & 2) == 0) {
    uVar15 = DAT_0a00;
    FUN_8623();
    DAT_095d = extraout_A_04;
  }
  else {
    uVar15 = DAT_09fc;
    FUN_8623();
    DAT_095c = extraout_A_03;
  }
  if (DAT_19de != '\x01') {
    bVar12 = DAT_19d6;
    if (8 < DAT_19d6) {
      bVar12 = 8;
    }
    uVar6 = (ushort)(byte)(bVar12 << 1);
    bVar13 = DAT_08e8._0_1_;
    bVar12 = DAT_08af;
    if (((~bVar12 & 0x20) == 0) || (bVar12 = DAT_08af, (~bVar12 & 0x10) == 0)) {
LAB_81d9:
      bVar12 = DAT_0b03;
      uVar15 = 0xff;
      DAT_0b03 = (bVar12 + 1) - (0xfe < bVar12);
    }
    else {
      bVar12 = DAT_08af;
      if (((~bVar12 & 8) == 0) || (bVar12 = DAT_08af, (~bVar12 & 4) == 0)) {
        bVar12 = DAT_08af;
        if (((~bVar12 & 0x20) == 0) || (bVar12 = DAT_08af, (~bVar12 & 0x10) == 0)) goto LAB_81d9;
        uVar15 = 0;
      }
      else {
        bVar12 = DAT_088d;
        if ((~bVar12 & 4) == 0) {
          if (bVar13 < DAT_19d5) {
            bVar13 = DAT_08e8._0_1_;
            bVar12 = bVar13 + BYTE_ARRAY_c255[uVar6];
            if (CARRY1(bVar13,BYTE_ARRAY_c255[uVar6])) {
              DAT_0dde._1_1_ = bVar12;
              DAT_0dde._0_1_ = 1;
              DAT_0de0._0_1_ = 0;
              DAT_0de0._1_1_ = DAT_19d5;
              sVar8 = DAT_0dde;
              sVar11 = DAT_0de0;
              sVar8 = (ushort)BYTE_ARRAY_c255[uVar6 + 1] * (sVar8 - sVar11 & 0xffU);
              if ((char)((ushort)sVar8 >> 8) != '\0') {
                sVar8 = 0xff;
              }
            }
            else if (bVar12 < DAT_19d5) {
              sVar8 = 0;
            }
            else {
              sVar8 = (ushort)(byte)(bVar12 - DAT_19d5) * (ushort)BYTE_ARRAY_c255[uVar6 + 1];
              if ((char)((ushort)sVar8 >> 8) != '\0') {
                sVar8 = 0xff;
              }
            }
            bVar12 = DAT_0b03;
            uVar15 = (undefined1)sVar8;
            if (DAT_19d8 <= bVar12) goto LAB_81e5;
          }
          goto LAB_81d9;
        }
        uVar15 = 0;
      }
    }
LAB_81e5:
    DAT_0998 = uVar15;
    if (DAT_19de == '\x02') {
      sVar8 = (ushort)DAT_19e1 << 1;
      DAT_0960 = sVar8;
      DAT_0962 = sVar8;
      DAT_0964 = sVar8;
      DAT_0966 = sVar8;
    }
    else if (DAT_19de == '\x04') {
      DAT_0960 = (ushort)DAT_19e2 << 1;
      DAT_0964 = (ushort)DAT_19e2 << 1;
      DAT_0962 = (ushort)DAT_19e3 << 1;
      DAT_0966 = (ushort)DAT_19e3 << 1;
    }
    else {
      bVar12 = DAT_0992._0_1_;
      sVar8 = CONCAT11(0xdf < bVar12,bVar12 + 0x20) << 2;
      bVar12 = DAT_097b;
      bVar13 = (byte)sVar8;
      sVar8 = CONCAT11((char)((ushort)sVar8 >> 8) + CARRY1(bVar13,bVar12),bVar13 + bVar12) * 4 +
              -0x80;
      bVar12 = DAT_0980;
      bVar13 = (byte)sVar8;
      sVar11 = CONCAT11((char)((ushort)sVar8 >> 8) + CARRY1(bVar13,bVar12),bVar13 + bVar12) << 2;
      sVar8 = DAT_0982;
      DAT_0dde = CONCAT11((char)((ushort)sVar11 >> 8) + -0x80,(char)sVar11) + sVar8;
      uVar6 = DAT_097e;
      sVar8 = DAT_0dde;
      DAT_096c = ((uVar6 >> 5) + sVar8) - 0x400 >> 1;
      bVar12 = DAT_0992._0_1_;
      sVar8 = CONCAT11(0xdf < bVar12,bVar12 + 0x20) << 2;
      bVar12 = DAT_097c;
      bVar13 = (byte)sVar8;
      sVar8 = CONCAT11((char)((ushort)sVar8 >> 8) + CARRY1(bVar13,bVar12),bVar13 + bVar12) * 4 +
              -0x80;
      bVar12 = DAT_0980;
      bVar13 = (byte)sVar8;
      sVar11 = CONCAT11((char)((ushort)sVar8 >> 8) + CARRY1(bVar13,bVar12),bVar13 + bVar12) << 2;
      sVar8 = DAT_0982;
      DAT_0dde = CONCAT11((char)((ushort)sVar11 >> 8) + -0x80,(char)sVar11) + sVar8;
      uVar6 = DAT_097e;
      sVar8 = DAT_0dde;
      uVar6 = ((uVar6 >> 5) + sVar8) - 0x400 >> 1;
      DAT_096e = uVar6;
      bVar12 = DAT_0979;
      uVar6 = multiply_u16_shift8_saturate(bVar12 + 0x180,uVar6);
      bVar12 = DAT_097a;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6 >> 1);
      DAT_096a = uVar6;
      uVar6 = DAT_096c;
      bVar12 = DAT_0979;
      uVar6 = multiply_u16_shift8_saturate(bVar12 + 0x180,uVar6);
      bVar12 = DAT_097a;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6 >> 1);
      DAT_0968 = uVar6;
      bVar12 = DAT_0978;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6);
      DAT_0964 = uVar6;
      uVar6 = DAT_096a;
      bVar12 = DAT_0978;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6);
      DAT_0966 = uVar6;
      uVar6 = DAT_0968;
      bVar12 = DAT_0970;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6);
      DAT_0960 = uVar6;
      uVar6 = DAT_096a;
      bVar12 = DAT_0970;
      uVar6 = multiply_u16_shift8_saturate((ushort)bVar12,uVar6);
      DAT_0962 = uVar6;
      bVar12 = DAT_097a;
      if (bVar12 == 0x80) {
LAB_830d:
        DAT_0a04 = 0;
        bVar13 = 0x80;
      }
      else if (bVar12 < 0x80) {
        bVar2 = DAT_0a04;
        bVar13 = bVar12 + bVar2;
        if ((CARRY1(bVar12,bVar2)) || (0x7f < bVar13)) goto LAB_830d;
      }
      else {
        bVar2 = DAT_0a04;
        bVar13 = bVar12 - bVar2;
        if ((bVar12 < bVar2) || (bVar13 < 0x80)) goto LAB_830d;
      }
      DAT_097a = bVar13;
      FUN_864e();
    }
    bVar12 = DAT_0a16;
    if ((~bVar12 & 2) != 0) {
      bVar12 = DAT_095c;
      if (bVar12 < 0x80) {
        DAT_0dde = (ushort)(byte)(0x80 - bVar12) << 2;
        uVar9 = DAT_0ce4;
        uVar17 = DAT_0dde;
        uVar6 = uVar9 - uVar17;
        if (uVar9 < uVar17) {
          uVar6 = 0;
        }
      }
      else {
        DAT_0dde = (ushort)(byte)(bVar12 + 0x80) << 2;
        uVar9 = DAT_0ce4;
        uVar17 = DAT_0dde;
        uVar6 = uVar9 + uVar17;
        if (CARRY2(uVar9,uVar17)) {
          uVar6 = 0xffff;
        }
      }
      uVar9 = DAT_0960;
      uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
      DAT_0942 = uVar6;
      bVar12 = DAT_095c;
      if (bVar12 < 0x80) {
        DAT_0dde = (ushort)(byte)(0x80 - bVar12) << 2;
        uVar9 = DAT_0ce8;
        uVar17 = DAT_0dde;
        uVar6 = uVar9 - uVar17;
        if (uVar9 < uVar17) {
          uVar6 = 0;
        }
      }
      else {
        DAT_0dde = (ushort)(byte)(bVar12 + 0x80) << 2;
        uVar9 = DAT_0ce8;
        uVar17 = DAT_0dde;
        uVar6 = uVar9 + uVar17;
        if (CARRY2(uVar9,uVar17)) {
          uVar6 = 0xffff;
        }
      }
      uVar9 = DAT_0964;
      uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
      DAT_0944 = uVar6;
      uVar6 = DAT_0944;
      uVar6 = scale_u16_by_u8(uVar6,&DAT_0998);
      RAM0ddf = uVar6;
      bVar12 = DAT_0998;
      DAT_0dde._0_1_ = ~bVar12;
      uVar6 = DAT_0942;
      uVar6 = scale_u16_by_u8(uVar6,(byte *)&DAT_0dde);
      sVar8 = RAM0ddf;
      uVar6 = uVar6 + sVar8;
      sVar8 = DAT_0ad4;
      if (sVar8 != 0) {
        uVar6 = (ushort)((uint)(ushort)(sVar8 * -0x40) * (uint)uVar6 >> 0x10);
      }
      uVar9 = DAT_19dc;
      if ((uVar6 < DAT_19dc) && (uVar9 = uVar6, uVar6 < DAT_19da)) {
        uVar9 = DAT_19da;
      }
      DAT_0940 = uVar9;
      DAT_093c = uVar9;
      bVar12 = DAT_0ca8;
      if ((~bVar12 & 1) != 0) {
        iVar1 = (uint)DAT_19d4 * 4 * (uint)uVar9;
        uVar6 = (ushort)iVar1;
        bVar12 = (byte)((uint)iVar1 >> 0x10);
        cVar14 = bVar12 + (0xff7f < uVar6);
        if (CONCAT11((char)((uint)iVar1 >> 0x18) + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
          DAT_0dde._0_1_ = cVar14;
          RAM0ddf = uVar6 + 0x80;
          uVar9 = DAT_0dde;
        }
        else {
          uVar9 = 0xffff;
        }
      }
      DAT_093e = uVar9;
      uVar6 = DAT_095e;
      sVar8 = uVar9 + uVar6;
      if (CARRY2(uVar9,uVar6)) {
        sVar8 = -1;
      }
      DAT_093a = sVar8;
      DAT_092a = sVar8;
      bVar12 = DAT_0881;
      DAT_0881 = bVar12 | 0x80;
      bVar12 = DAT_0a16;
      DAT_0a16 = bVar12 & 0xfe;
      bVar12 = DAT_0a16;
      if ((~bVar12 & 8) != 0) {
        bVar12 = DAT_0881;
        DAT_0881 = bVar12 & 0xbf;
      }
      goto LAB_8578;
    }
    bVar12 = DAT_095d;
    if (bVar12 < 0x80) {
      DAT_0dde = (ushort)(byte)(0x80 - bVar12) << 2;
      uVar9 = DAT_0ce6;
      uVar17 = DAT_0dde;
      uVar6 = uVar9 - uVar17;
      if (uVar9 < uVar17) {
        uVar6 = 0;
      }
    }
    else {
      DAT_0dde = (ushort)(byte)(bVar12 + 0x80) << 2;
      uVar9 = DAT_0ce6;
      uVar17 = DAT_0dde;
      uVar6 = uVar9 + uVar17;
      if (CARRY2(uVar9,uVar17)) {
        uVar6 = 0xffff;
      }
    }
    uVar9 = DAT_0962;
    uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
    DAT_094e = uVar6;
    bVar12 = DAT_095d;
    if (bVar12 < 0x80) {
      DAT_0dde = (ushort)(byte)(0x80 - bVar12) << 2;
      uVar9 = DAT_0cea;
      uVar17 = DAT_0dde;
      uVar6 = uVar9 - uVar17;
      if (uVar9 < uVar17) {
        uVar6 = 0;
      }
    }
    else {
      DAT_0dde = (ushort)(byte)(bVar12 + 0x80) << 2;
      uVar9 = DAT_0cea;
      uVar17 = DAT_0dde;
      uVar6 = uVar9 + uVar17;
      if (CARRY2(uVar9,uVar17)) {
        uVar6 = 0xffff;
      }
    }
    uVar9 = DAT_0966;
    uVar6 = multiply_u16_shift8_saturate(uVar9,uVar6);
    DAT_0950 = uVar6;
    uVar6 = DAT_0950;
    uVar6 = scale_u16_by_u8(uVar6,&DAT_0998);
    RAM0ddf = uVar6;
    bVar12 = DAT_0998;
    DAT_0dde._0_1_ = ~bVar12;
    uVar6 = DAT_094e;
    uVar6 = scale_u16_by_u8(uVar6,(byte *)&DAT_0dde);
    sVar8 = RAM0ddf;
    uVar6 = uVar6 + sVar8;
    sVar8 = DAT_0ad4;
    if (sVar8 != 0) {
      uVar6 = (ushort)((uint)(ushort)(sVar8 * -0x40) * (uint)uVar6 >> 0x10);
    }
    DAT_094c = uVar6;
    DAT_0948 = uVar6;
    bVar12 = DAT_0cec;
    uVar6 = DAT_094c;
    iVar1 = (uint)uVar6 * (uint)bVar12 * 2;
    uVar6 = (ushort)iVar1;
    bVar12 = (byte)((uint)iVar1 >> 0x10);
    cVar14 = bVar12 + (0xff7f < uVar6);
    if (CONCAT11((char)((uint)iVar1 >> 0x18) + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
      DAT_0dde._0_1_ = cVar14;
      RAM0ddf = uVar6 + 0x80;
      uVar6 = DAT_0dde;
      uVar9 = DAT_19dc;
      if ((uVar6 < DAT_19dc) && (uVar9 = uVar6, uVar6 < DAT_19da)) {
        uVar9 = DAT_19da;
      }
      DAT_095a = uVar9;
      bVar12 = DAT_0ca8;
      if ((~bVar12 & 1) != 0) {
        iVar1 = (uint)DAT_19d4 * 4 * (uint)uVar9;
        uVar6 = (ushort)iVar1;
        bVar12 = (byte)((uint)iVar1 >> 0x10);
        cVar14 = bVar12 + (0xff7f < uVar6);
        if (CONCAT11((char)((uint)iVar1 >> 0x18) + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
          DAT_0dde._0_1_ = cVar14;
          RAM0ddf = uVar6 + 0x80;
          uVar9 = DAT_0dde;
        }
        else {
          uVar9 = 0xffff;
        }
      }
      DAT_094a = uVar9;
      uVar6 = DAT_095e;
      sVar8 = uVar9 + uVar6;
      if (CARRY2(uVar9,uVar6)) goto LAB_8563;
    }
    else {
LAB_8563:
      sVar8 = -1;
    }
    DAT_092c = sVar8;
    DAT_0946 = sVar8;
    bVar12 = DAT_0881;
    DAT_0881 = bVar12 | 0x40;
    bVar12 = DAT_0a16;
    DAT_0a16 = bVar12 | 8;
    bVar12 = DAT_0a16;
    DAT_0a16 = bVar12 & 0xfd;
    goto LAB_8578;
  }
  DAT_0960 = 0x100;
  DAT_0962 = 0x100;
  DAT_0964 = 0x100;
  DAT_0966 = 0x100;
  uVar9 = (ushort)DAT_19df << 5;
  uVar6 = DAT_19dc;
  if ((uVar9 < DAT_19dc) && (uVar6 = uVar9, uVar9 < DAT_19da)) {
    uVar6 = DAT_19da;
  }
  DAT_0940 = uVar6;
  DAT_093c = uVar6;
  uVar9 = (ushort)DAT_19e0 << 5;
  uVar6 = DAT_19dc;
  if ((uVar9 < DAT_19dc) && (uVar6 = uVar9, uVar9 < DAT_19da)) {
    uVar6 = DAT_19da;
  }
  DAT_094c = uVar6;
  DAT_0948 = uVar6;
  uVar6 = DAT_0940;
  bVar12 = DAT_0ca8;
  if ((~bVar12 & 1) != 0) {
    iVar1 = (uint)DAT_19d4 * 4 * (uint)uVar6;
    uVar6 = (ushort)iVar1;
    bVar12 = (byte)((uint)iVar1 >> 0x10);
    cVar14 = bVar12 + (0xff7f < uVar6);
    if (CONCAT11((char)((uint)iVar1 >> 0x18) + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
      DAT_0dde._0_1_ = cVar14;
      RAM0ddf = uVar6 + 0x80;
      uVar6 = DAT_0dde;
    }
    else {
      uVar6 = 0xffff;
    }
  }
  DAT_093e = uVar6;
  uVar9 = DAT_095e;
  sVar8 = uVar6 + uVar9;
  if (CARRY2(uVar6,uVar9)) {
    sVar8 = -1;
  }
  DAT_093a = sVar8;
  DAT_092a = sVar8;
  FUN_864e();
  bVar12 = DAT_0cec;
  uVar6 = DAT_094c;
  iVar1 = (uint)uVar6 * (uint)bVar12 * 2;
  uVar6 = (ushort)iVar1;
  bVar12 = (byte)((uint)iVar1 >> 0x10);
  cVar14 = bVar12 + (0xff7f < uVar6);
  if (CONCAT11((char)((uint)iVar1 >> 0x18) + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
    DAT_0dde._0_1_ = cVar14;
    RAM0ddf = uVar6 + 0x80;
    uVar6 = DAT_0dde;
    uVar9 = DAT_19dc;
    if ((uVar6 < DAT_19dc) && (uVar9 = uVar6, uVar6 < DAT_19da)) {
      uVar9 = DAT_19da;
    }
    DAT_095a = uVar9;
    bVar12 = DAT_0ca8;
    if ((~bVar12 & 1) != 0) {
      iVar1 = (uint)DAT_19d4 * 4 * (uint)uVar9;
      uVar6 = (ushort)iVar1;
      bVar12 = (byte)((uint)iVar1 >> 0x10);
      cVar14 = bVar12 + (0xff7f < uVar6);
      if (CONCAT11((char)((uint)iVar1 >> 0x18) + CARRY1(bVar12,0xff7f < uVar6),cVar14) < 0x100) {
        DAT_0dde._0_1_ = cVar14;
        RAM0ddf = uVar6 + 0x80;
        uVar9 = DAT_0dde;
      }
      else {
        uVar9 = 0xffff;
      }
    }
    DAT_094a = uVar9;
    uVar6 = DAT_095e;
    sVar8 = uVar9 + uVar6;
    if (CARRY2(uVar9,uVar6)) goto LAB_8136;
  }
  else {
LAB_8136:
    sVar8 = -1;
  }
  DAT_092c = sVar8;
  DAT_0946 = sVar8;
  bVar12 = DAT_0a16;
  DAT_0a16 = bVar12 & 0xfe;
  bVar12 = DAT_0a16;
  DAT_0a16 = bVar12 & 0xfd;
  bVar12 = DAT_0881;
  DAT_0881 = bVar12 | 0x80;
  bVar12 = DAT_0881;
  DAT_0881 = bVar12 | 0x40;
LAB_8578:
  bVar12 = DAT_08bc;
  DAT_08bc = bVar12 & 0xbf;
  return;
}


/* Entry 857d */

void FUN_857d(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  byte bVar3;
  
  bVar3 = DAT_088b;
  if ((~bVar3 & 0x40) == 0) {
    bVar3 = DAT_088b;
    DAT_088b = bVar3 & 0xbf;
    bVar3 = DAT_0ca8;
    if (((bVar3 & 1) != 0) && (bVar3 = DAT_0881, (~bVar3 & 0x10) != 0)) {
      bVar3 = DAT_088b;
      if ((~bVar3 & 0x80) == 0) {
        return;
      }
      bVar3 = DAT_088b;
      DAT_088b = bVar3 | 0x80;
      FUN_ec98();
      uVar2 = DAT_0a26;
      DAT_0a22 = uVar2;
      uVar1 = DAT_0a1e;
      DAT_0a1c = uVar1;
      FUN_ed11();
      uVar2 = DAT_0a28;
      DAT_0a24 = uVar2;
      uVar1 = DAT_0a1f;
      DAT_0a1d = uVar1;
      return;
    }
    bVar3 = DAT_088b;
    if ((bVar3 & 0x80) != 0) {
      bVar3 = DAT_088b;
      DAT_088b = bVar3 & 0x7f;
      DAT_0a22 = 0;
      DAT_0a24 = 0;
      bVar3 = DAT_18e0;
      if (0x16 < DAT_18e0) {
        bVar3 = 0x16;
      }
      if (bVar3 < 0xc) {
        if (bVar3 == 0xb) {
          bVar3 = 10;
        }
      }
      else {
        bVar3 = bVar3 - 0xc;
      }
      DAT_0a1c = bVar3;
      DAT_0a1d = bVar3;
    }
  }
  else {
    bVar3 = DAT_088b;
    if ((bVar3 & 0x80) != 0) {
      return;
    }
  }
  DAT_0a26 = 0;
  bVar3 = DAT_18e0;
  if (0x16 < DAT_18e0) {
    bVar3 = 0x16;
  }
  if (bVar3 < 0xc) {
    if (bVar3 == 0xb) {
      bVar3 = 10;
    }
  }
  else {
    bVar3 = bVar3 - 0xc;
  }
  DAT_0a1e = bVar3;
  DAT_0a28 = 0;
  uVar1 = DAT_0a1e;
  DAT_0a1f = uVar1;
  return;
}


/* Entry 8623 */

void FUN_8623(byte param_1)

{
  undefined1 uVar1;
  
  if (param_1 < 0x80) {
    uVar1 = DAT_09a0;
  }
  else {
    uVar1 = DAT_09a0;
  }
  return;
}


/* Entry 864e */

void FUN_864e(void)

{
  undefined2 uVar1;
  ushort uVar2;
  
  uVar1 = DAT_0900;
  DAT_0ba2 = uVar1;
  DAT_0ba4 = 0x1a02;
  uVar2 = axis_index_u16_ascending('\x02');
  DAT_0cee = uVar2;
  uVar1 = DAT_08e8;
  DAT_0ba2 = uVar1;
  DAT_0ba4 = 0x19e4;
  uVar2 = axis_index_u16_ascending(0xe4);
  DAT_0cf0 = uVar2;
  uVar1 = DAT_0cee;
  DAT_0dde = uVar1;
  uVar1 = DAT_0cf0;
  DAT_0de0 = uVar1;
  uVar2 = bilinear_u8_grid(&UNK_1a17,'\x0f');
  DAT_0cec = (char)(uVar2 + 0x80 >> 8);
  return;
}


/* Entry 8691 */

void FUN_8691(void)

{
  byte bVar1;
  
  bVar1 = DAT_0881;
  DAT_0881 = bVar1 & 0xfb;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 | 0x80;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 & 0x7f;
  return;
}


/* Entry 869e */

void FUN_869e(void)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  undefined1 uVar8;
  ushort uVar9;
  undefined2 *puVar10;
  ushort *puVar11;
  undefined2 *puVar12;
  
  bVar1 = DAT_0881;
  DAT_0881 = bVar1 & 0xfd;
  bVar1 = DAT_08c0;
  DAT_08c0 = bVar1 | 0x20;
  puVar10 = &DAT_0c58 + DAT_189a;
  puVar12 = &DAT_0cb8;
  DAT_0b3c = 0;
  while( true ) {
    *puVar12 = *puVar10;
    bVar1 = DAT_0b3c;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b3c = bVar1;
    if (4 < bVar1) break;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar11 = &DAT_0cb8;
  uVar2 = DAT_0cb8;
  DAT_0ccc = uVar2;
  DAT_0cce = uVar2;
  DAT_0b3c = 0;
  while( true ) {
    bVar1 = DAT_0b3c;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b3c = bVar1;
    if (4 < bVar1) break;
    puVar11 = puVar11 + 1;
    uVar9 = *puVar11;
    uVar5 = DAT_0ccc;
    if (uVar9 < uVar5) {
      uVar5 = DAT_0cce;
      if (uVar9 < uVar5) {
        DAT_0cce = uVar9;
      }
    }
    else {
      DAT_0ccc = uVar9;
    }
  }
  uVar2 = DAT_0ccc;
  DAT_0cc2 = uVar2;
  uVar2 = DAT_0cce;
  DAT_0cc4 = uVar2;
  bVar1 = DAT_08af;
  if (((((~bVar1 & 0x20) != 0) && (bVar1 = DAT_08af, (~bVar1 & 0x10) != 0)) &&
      (bVar1 = DAT_08af, (~bVar1 & 8) != 0)) &&
     ((bVar1 = DAT_08af, (~bVar1 & 4) != 0 && (bVar1 = DAT_089f, (~bVar1 & 0x80) != 0)))) {
    sVar3 = DAT_0cc2;
    sVar4 = DAT_0cc4;
    if (((((ushort)(sVar3 - sVar4) <= DAT_189c) &&
         ((bVar1 = DAT_0881, (~bVar1 & 0x10) != 0 && (uVar9 = DAT_08e8, DAT_18a0 <= uVar9)))) &&
        ((uVar9 <= DAT_18a2 &&
         (((uVar9 = DAT_0900, DAT_18a4 <= uVar9 && (uVar9 <= DAT_18a6)) &&
          (uVar9 = DAT_0c90, DAT_18a8 <= uVar9)))))) && (uVar9 <= DAT_18aa)) {
      puVar11 = &DAT_0cb8;
      DAT_0b3c = 0;
      DAT_0dde._0_1_ = 0;
      RAM0ddf = 0;
      while( true ) {
        uVar9 = RAM0ddf;
        RAM0ddf = *puVar11 + uVar9;
        cVar7 = DAT_0dde._0_1_;
        DAT_0dde._0_1_ = cVar7 + CARRY2(*puVar11,uVar9);
        bVar1 = DAT_0b3c;
        bVar1 = (bVar1 + 1) - (0xfe < bVar1);
        DAT_0b3c = bVar1;
        if (4 < bVar1) break;
        puVar11 = puVar11 + 1;
      }
      uVar9 = DAT_0dde;
      RAM0de1 = uVar9 / 5;
      uVar8 = DAT_0de0._0_1_;
      DAT_0de3 = (char)(CONCAT11((char)(uVar9 % 5),uVar8) / 5);
      uVar2 = RAM0de2;
      DAT_0cc6 = uVar2;
      uVar5 = DAT_0cc6;
      uVar6 = DAT_0cca;
      uVar9 = uVar5 - uVar6;
      if (uVar5 < uVar6) {
        uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                         -(char)uVar9),&UNK_189e);
        uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
      }
      else {
        uVar9 = scale_u16_by_u8(uVar9,&UNK_189e);
      }
      sVar3 = DAT_0cca;
      DAT_0cca = uVar9 + sVar3;
      DAT_0cc8 = uVar9 + sVar3;
    }
  }
  bVar1 = DAT_08c0;
  DAT_08c0 = bVar1 & 0xdf;
  return;
}


/* Entry 87e7 */

void FUN_87e7(void)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 extraout_A;
  byte bVar6;
  byte extraout_A_00;
  ushort uVar7;
  undefined2 uVar8;
  byte bVar10;
  byte bVar11;
  short sVar9;
  byte *table_bias;
  
  bVar6 = DAT_08bc;
  DAT_08bc = bVar6 | 0x20;
  uVar3 = DAT_08fa;
  uVar2 = DAT_08f8;
  uVar7 = uVar3 + uVar2;
  if (CARRY2(uVar3,uVar2)) {
    uVar7 = CONCAT11((byte)(uVar7 >> 9),(char)(uVar7 >> 1)) | 0x8000;
  }
  else {
    uVar7 = uVar7 >> 1;
  }
  DAT_08fc = uVar7;
  uVar8 = DAT_08f8;
  DAT_08fa = uVar8;
  uVar2 = DAT_08fc;
  uVar3 = DAT_08fe;
  uVar7 = uVar2 - uVar3;
  if (uVar2 < uVar3) {
    uVar7 = scale_u16_by_u8(CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),
                                     -(char)uVar7),&UNK_18d6);
    uVar7 = CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7);
  }
  else {
    uVar7 = scale_u16_by_u8(uVar7,&UNK_18d6);
  }
  sVar9 = DAT_08fe;
  DAT_08fe = uVar7 + sVar9;
  uVar8 = DAT_0902;
  DAT_0ba2 = uVar8;
  DAT_0ba4 = 0x426e;
  uVar7 = axis_index_u16_ascending('n');
  DAT_0914 = uVar7;
  uVar8 = DAT_08f8;
  uVar8 = FUN_cc63();
  DAT_0918 = uVar8;
  bVar6 = DAT_0880;
  if ((~bVar6 & 0x40) == 0) {
    DAT_0a82 = 0x40;
    DAT_0a86 = 0x80;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 & 0xfd;
    goto LAB_8a89;
  }
  uVar8 = DAT_08e8;
  bVar6 = DAT_088d;
  if ((~bVar6 & 4) != 0) {
    uVar8 = 0xd000;
  }
  DAT_0ba2 = uVar8;
  DAT_0ba4 = 0x4246;
  uVar7 = axis_index_u16_ascending('F');
  DAT_0916 = uVar7;
  uVar8 = DAT_0914;
  DAT_0dde = uVar8;
  uVar8 = DAT_0916;
  DAT_0de0 = uVar8;
  cVar1 = DAT_0d87;
  if ((cVar1 == '\t') && (bVar6 = DAT_0896._0_1_, (~bVar6 & 0x10) != 0)) {
    table_bias = &UNK_42ab;
  }
  else {
    bVar6 = DAT_0898;
    if (DAT_4245 < bVar6) {
      table_bias = &UNK_47ab;
    }
    else {
      table_bias = &UNK_452b;
    }
  }
  uVar7 = bilinear_u8_grid(table_bias,'\x14');
  DAT_0a83 = (char)(uVar7 + 0x80 >> 8);
  bVar6 = DAT_0889;
  if ((bVar6 & 2) != 0) {
    bVar6 = DAT_0b92;
    bVar10 = DAT_0b94;
    if ((CARRY1(bVar6,bVar10)) || (bVar4 = DAT_0a83, bVar4 < (byte)(bVar6 + bVar10))) {
      bVar6 = DAT_0889;
      DAT_0889 = bVar6 & 0xfd;
      DAT_0b92 = 0;
    }
    else {
      DAT_0b95 = bVar6 + bVar10;
    }
  }
  uVar5 = DAT_0d87;
  uVar8 = DAT_0918;
  DAT_0dde = uVar8;
  DAT_0de0 = 0;
  lookup_u8_grid_special();
  DAT_0a8b = extraout_A;
  bVar6 = DAT_0880;
  if ((bVar6 & 4) != 0) {
    DAT_0a82 = 0x40;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 & 0xfd;
    goto LAB_8a89;
  }
  if (DAT_4243 == '\x01') {
    bVar6 = DAT_4244;
    if (DAT_4242 <= DAT_4244) {
      bVar6 = DAT_4242;
    }
    DAT_0a82 = bVar6;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 & 0xfd;
    goto LAB_8a89;
  }
  bVar6 = DAT_0889;
  if ((~bVar6 & 2) == 0) {
    bVar6 = DAT_0a86;
    if (bVar6 < 0x80) {
      bVar10 = DAT_0888;
      if ((bVar10 & 0x40) != 0) {
        DAT_0a87 = DAT_4b10;
      }
      cVar1 = DAT_0a87;
      bVar6 = bVar6 + cVar1;
      if (0x7f < bVar6) {
        bVar6 = 0x80;
      }
      DAT_0a86 = bVar6;
    }
    bVar6 = DAT_0a86;
    bVar10 = DAT_0b95;
    uVar7 = (ushort)bVar6 * (ushort)bVar10 >> 7;
    DAT_0dde = uVar7;
    if (((short)((ushort)bVar6 * (ushort)bVar10) < 0) || (DAT_4242 <= (byte)uVar7)) {
      uVar7 = (ushort)DAT_4242;
    }
    DAT_0a82 = (char)uVar7;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 & 0xfd;
    bVar6 = DAT_0880;
    if ((bVar6 & 4) != 0) {
      DAT_0a86 = 0x80;
    }
    goto LAB_8a89;
  }
  bVar6 = DAT_0885;
  if ((bVar6 & 0x20) == 0) {
    bVar6 = DAT_0a86;
    if (bVar6 < 0x80) {
      bVar10 = DAT_0888;
      if ((bVar10 & 0x40) != 0) {
        DAT_0a87 = DAT_4b10;
      }
      cVar1 = DAT_0a87;
      bVar6 = bVar6 + cVar1;
      if (0x7f < bVar6) {
        bVar6 = 0x80;
      }
      DAT_0a86 = bVar6;
    }
    if ((DAT_4b03 == -0x80) &&
       ((bVar6 = DAT_0aa6, (~bVar6 & 4) == 0 || (bVar6 = DAT_0aa7, (bVar6 & 2) != 0)))) {
      bVar6 = DAT_0aac;
    }
    else {
      bVar6 = DAT_0a83;
      bVar10 = DAT_0d05;
      if (bVar6 < bVar10) {
        bVar6 = DAT_0d05;
      }
      bVar10 = DAT_0a86;
      uVar7 = (ushort)bVar6 * (ushort)bVar10 >> 7;
      DAT_0dde = uVar7;
      bVar4 = DAT_0ada;
      bVar6 = -(char)((short)((ushort)bVar6 * (ushort)bVar10) >> 0xf);
      if ((bVar4 & 0x40) == 0) {
        if (bVar6 == 0) goto LAB_8a70;
      }
      else {
        bVar4 = DAT_0ad8;
        bVar11 = (byte)uVar7;
        bVar10 = bVar11 - bVar4;
        cVar1 = bVar6 - (bVar11 < bVar4);
        uVar7 = CONCAT11(cVar1,bVar10);
        if (bVar6 < (bVar11 < bVar4)) {
LAB_8a62:
          uVar7 = (ushort)DAT_4e2f;
        }
        else if ((cVar1 == '\0') && (bVar10 <= DAT_4e30)) {
          if (bVar10 < DAT_4e2f) goto LAB_8a62;
        }
        else {
          uVar7 = (ushort)DAT_4e30;
        }
LAB_8a70:
        bVar6 = (byte)uVar7;
        if ((byte)uVar7 < DAT_4242) goto LAB_8a78;
      }
      bVar6 = DAT_4242;
    }
LAB_8a78:
    DAT_0a82 = bVar6;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 & 0xfd;
    bVar6 = DAT_0880;
    if ((bVar6 & 4) != 0) {
      DAT_0a86 = 0x80;
    }
    goto LAB_8a89;
  }
  bVar6 = DAT_0a86;
  if (bVar6 < 0x80) {
    bVar10 = DAT_0888;
    if ((bVar10 & 0x40) != 0) {
      DAT_0a87 = DAT_4b10;
    }
    cVar1 = DAT_0a87;
    bVar6 = bVar6 + cVar1;
    if (0x7f < bVar6) {
      bVar6 = 0x80;
    }
    DAT_0a86 = bVar6;
  }
  bVar10 = DAT_0a88;
  bVar6 = DAT_0900._0_1_;
  if ((bVar6 <= DAT_4241) && (bVar6 = DAT_0d05, bVar10 < bVar6)) {
    uVar5 = DAT_0d05;
  }
  uVar5 = DAT_0a86;
  bVar10 = 0;
  DAT_0dde = 0;
  bVar6 = DAT_0ada;
  if ((bVar6 & 0x40) == 0) {
    if (true) goto LAB_89e7;
LAB_89ec:
    bVar10 = DAT_4242;
  }
  else {
    cVar1 = DAT_0ad8;
    if ((cVar1 != '\0') || (((bVar10 = DAT_4e30, true && (true)) && (bVar10 = 0, DAT_4e2f != 0)))) {
      bVar10 = DAT_4e2f;
    }
LAB_89e7:
    if (DAT_4242 <= bVar10) goto LAB_89ec;
  }
  DAT_0a82 = bVar10;
  bVar6 = DAT_0887;
  DAT_0887 = bVar6 & 0xfd;
LAB_8a89:
  bVar6 = DAT_0880;
  if ((bVar6 & 0x40) == 0) {
    bVar6 = DAT_08d9;
    if (bVar6 < 0x1a) {
      bVar6 = 0xb3;
    }
    if (bVar6 < 0x53) {
      sVar9 = 0;
    }
    else if ((byte)(bVar6 + 0xad) < 0x80) {
      sVar9 = (ushort)(byte)(bVar6 + 0xad) << 4;
    }
    else {
      sVar9 = 0x800;
    }
    DAT_0dde = sVar9;
    uVar7 = DAT_0900;
    if (uVar7 < 0x1000) {
      uVar7 = 0;
    }
    else if (uVar7 - 0x1000 < 0xe000) {
      uVar7 = uVar7 - 0x1000 >> 4;
    }
    else {
      uVar7 = 0xe00;
    }
    DAT_0de0 = uVar7;
    lookup_u8_grid_special();
    bVar6 = DAT_088d;
    bVar10 = extraout_A_00;
    if ((bVar6 & 0x40) != 0) {
      bVar10 = DAT_4bab;
    }
    DAT_0a98 = (ushort)bVar10 << 5;
    bVar6 = DAT_0a9c;
    sVar9 = DAT_0a98;
    uVar7 = (ushort)bVar6 * 0x20 + sVar9;
    bVar6 = DAT_0880;
    if ((~bVar6 & 0x40) == 0) {
      DAT_0dde = uVar7;
      DAT_0aa0 = DAT_4b9a;
      uVar8 = DAT_0dde;
      DAT_0dde = uVar8;
      uVar7 = DAT_0a2e;
      uVar2 = DAT_0dde;
      if (uVar2 <= uVar7) {
        uVar7 = DAT_0dde;
      }
    }
    else {
      uVar2 = DAT_0a48;
      if (uVar2 <= uVar7) {
        uVar7 = DAT_0a48;
      }
    }
  }
  else {
    uVar7 = DAT_0a2e;
  }
  DAT_0a96 = uVar7;
  uVar7 = scale_u16_by_u8(uVar7,&UNK_4ba1);
  DAT_0a9a = uVar7 << 1;
  bVar6 = DAT_08bc;
  DAT_08bc = bVar6 & 0xdf;
  return;
}


/* Entry 8b34 */

void FUN_8b34(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uchar uVar4;
  short sVar5;
  undefined *puVar6;
  byte bVar7;
  short sVar8;
  ushort uVar9;
  ushort uVar10;
  char cVar15;
  undefined1 uVar16;
  ushort uVar11;
  ushort uVar12;
  undefined *puVar13;
  byte bVar17;
  undefined2 uVar14;
  char cVar18;
  byte bVar19;
  ushort *puVar20;
  byte *pbVar21;
  
  bVar7 = DAT_0882;
  DAT_0882 = bVar7 & 0xbf;
  bVar7 = DAT_08bc;
  DAT_08bc = bVar7 | 8;
  FUN_5fa4();
  uVar16 = DAT_0896._0_1_;
  DAT_0dde._0_1_ = uVar16;
  bVar7 = DAT_0001;
  bVar17 = DAT_0896._1_1_;
  bVar19 = DAT_0896._0_1_;
  bVar3 = DAT_0896._1_1_;
  DAT_0896 = CONCAT11(((bVar7 ^ bVar17) & bVar19) + (~(bVar7 ^ bVar17) & bVar3),bVar7);
  bVar7 = DAT_0000;
  bVar17 = DAT_0894._1_1_;
  bVar19 = DAT_0894._0_1_;
  bVar3 = DAT_0894._1_1_;
  DAT_0894 = CONCAT11(((bVar7 ^ bVar17) & bVar19) + (~(bVar7 ^ bVar17) & bVar3),bVar7);
  cVar18 = DAT_0d57;
  if (((cVar18 != -0x80) && (bVar7 = DAT_08a0, (~bVar7 & 4) != 0)) &&
     (bVar7 = DAT_08b2, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0896._0_1_;
    if ((bVar7 & 1) == 0) {
      bVar7 = DAT_08b6;
      if ((bVar7 & 4) == 0) {
        bVar7 = DAT_0bc7;
        bVar19 = DAT_0d8a;
        if ((bVar19 < bVar7) && (bVar7 = DAT_08af, (bVar7 & 2) != 0)) {
          bVar7 = DAT_08af;
          DAT_08af = bVar7 & 0xfd;
          bVar7 = DAT_0bd2;
          DAT_0bd2 = bVar7 | 0x80;
        }
      }
      else {
        bVar7 = DAT_08b6;
        DAT_08b6 = bVar7 & 0xfb;
      }
    }
    else {
      bVar7 = DAT_0900._0_1_;
      if ((bVar7 < DAT_4e4a) || (bVar7 = DAT_0880, (~bVar7 & 1) != 0)) {
        bVar7 = DAT_08b6;
        DAT_08b6 = bVar7 & 0xfb;
        DAT_0bc6 = 0;
        DAT_0bc7 = 0;
      }
      else {
        bVar7 = DAT_08b6;
        if ((bVar7 & 4) != 0) {
          bVar7 = DAT_0bc6;
          bVar19 = DAT_0d8a;
          if (bVar7 <= bVar19) goto LAB_8bec;
          bVar7 = DAT_08af;
          if ((~bVar7 & 2) != 0) {
            bVar7 = DAT_08af;
            DAT_08af = bVar7 | 2;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 0x80;
            bVar7 = DAT_08b8;
            if ((~bVar7 & 2) != 0) {
              bVar7 = DAT_08b8;
              DAT_08b8 = bVar7 | 2;
              bVar7 = DAT_0bd2;
              DAT_0bd2 = bVar7 | 8;
            }
          }
        }
        bVar7 = DAT_08b6;
        DAT_08b6 = bVar7 | 4;
      }
    }
  }
LAB_8bec:
  bVar7 = DAT_0889;
  if ((bVar7 & 0x20) == 0) {
LAB_8c00:
    bVar7 = 0;
  }
  else {
    bVar7 = DAT_0baf;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    if (0x32 < bVar7) {
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 & 0xdf;
      goto LAB_8c00;
    }
  }
  DAT_0baf = bVar7;
  uVar9 = DAT_0bb0;
  uVar10 = DAT_0bb4;
  if (uVar9 < uVar10) {
    bVar7 = DAT_0bba;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
  }
  else {
    bVar7 = 0;
  }
  DAT_0bba = bVar7;
  if (3 < bVar7) {
    sVar8 = DAT_0bb4;
    bVar7 = (byte)(sVar8 + -1);
    DAT_0bb4 = CONCAT11((char)((ushort)(sVar8 + -1) >> 8) + CARRY1(bVar7,sVar8 == 0),
                        bVar7 + (sVar8 == 0));
    DAT_0bba = 0;
  }
  uVar9 = DAT_0bb0;
  uVar10 = DAT_0bb4;
  sVar8 = uVar9 - uVar10;
  if (uVar9 < uVar10) {
    sVar8 = 0;
  }
  DAT_0bb6 = sVar8;
  uVar9 = DAT_08d0;
  uVar10 = DAT_08e0;
  if (uVar9 < uVar10) {
    bVar7 = DAT_08ef;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
  }
  else {
    bVar7 = 0;
  }
  DAT_08ef = bVar7;
  if (3 < bVar7) {
    sVar8 = DAT_08e0;
    bVar7 = (byte)(sVar8 + -1);
    DAT_08e0 = CONCAT11((char)((ushort)(sVar8 + -1) >> 8) + CARRY1(bVar7,sVar8 == 0),
                        bVar7 + (sVar8 == 0));
    DAT_08ef = 0;
  }
  uVar9 = DAT_08d0;
  uVar10 = DAT_08e0;
  sVar8 = uVar9 - uVar10;
  if (uVar9 < uVar10) {
    sVar8 = 0;
  }
  DAT_08e2 = sVar8;
  uVar11 = DAT_08e4;
  uVar10 = DAT_08e2;
  uVar9 = uVar11 - uVar10;
  if (uVar11 < uVar10) {
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  if (uVar9 < 8) {
    bVar7 = DAT_088d;
    DAT_088d = bVar7 & 0xf7;
  }
  else {
    bVar7 = DAT_088d;
    DAT_088d = bVar7 | 8;
    bVar7 = DAT_088d;
    DAT_088d = bVar7 | 4;
    uVar14 = DAT_08e2;
    DAT_08e4 = uVar14;
  }
  uVar10 = DAT_08e2;
  uVar11 = DAT_08e6;
  uVar9 = uVar10 - uVar11;
  if (uVar10 < uVar11) {
    uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                     -(char)uVar9),&UNK_1840);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = scale_u16_by_u8(uVar9,&UNK_1840);
  }
  sVar8 = DAT_08e6;
  DAT_08e6 = uVar9 + sVar8;
  uVar10 = DAT_0bb6;
  uVar11 = DAT_0bb8;
  uVar9 = uVar10 - uVar11;
  if (uVar10 < uVar11) {
    uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                     -(char)uVar9),&UNK_1840);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = scale_u16_by_u8(uVar9,&UNK_1840);
  }
  sVar8 = DAT_0bb8;
  DAT_0bb8 = uVar9 + sVar8;
  uVar10 = DAT_08e2;
  uVar11 = DAT_09d0;
  uVar9 = uVar10 - uVar11;
  if (uVar10 < uVar11) {
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    uVar10 = scale_u16_by_u8(uVar9,&UNK_312e);
    uVar10 = CONCAT11((~(byte)(uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),-(char)uVar10);
  }
  else {
    uVar10 = scale_u16_by_u8(uVar9,&UNK_312e);
  }
  sVar8 = DAT_09d0;
  DAT_09d0 = uVar10 + sVar8;
  cVar18 = DAT_09df;
  DAT_09df = cVar18 + '\x01';
  bVar7 = DAT_312f;
  if (9 < DAT_312f) {
    bVar7 = 10;
  }
  DAT_0de2 = bVar7;
  bVar7 = DAT_09df;
  bVar19 = DAT_0de2;
  if (bVar19 <= bVar7) {
    bVar7 = DAT_09e0;
    DAT_09e0 = bVar7 | 1;
    DAT_09df = 0;
  }
  bVar7 = DAT_09df;
  puVar20 = &DAT_09e2 + bVar7;
  uVar10 = DAT_09d0;
  *puVar20 = uVar10;
  bVar7 = DAT_09e0;
  if ((~bVar7 & 1) == 0) {
    uVar14 = DAT_09d2;
    DAT_09da = uVar14;
    DAT_0dde = 0;
    DAT_0de0 = 0;
    puVar20 = &DAT_09e2;
    do {
      uVar10 = RAM0ddf;
      RAM0ddf = *puVar20 + uVar10;
      cVar18 = DAT_0dde._0_1_;
      DAT_0dde._0_1_ = cVar18 + CARRY2(*puVar20,uVar10);
      puVar20 = puVar20 + 1;
      cVar18 = DAT_0de0._1_1_;
      DAT_0de0._1_1_ = cVar18 + 1U;
      bVar7 = DAT_0de2;
    } while ((byte)(cVar18 + 1U) < bVar7);
    cVar18 = DAT_0de2;
    if (cVar18 == '\0') {
      uVar14 = DAT_09e2;
      RAM0de3 = uVar14;
    }
    else {
      bVar7 = DAT_0de0._1_1_;
      uVar10 = DAT_0dde;
      RAM0de2 = uVar10 / bVar7;
      uVar16 = DAT_0de0._0_1_;
      uVar10 = CONCAT11((char)(uVar10 % (ushort)bVar7),uVar16);
      bVar7 = DAT_0de0._1_1_;
      puVar20 = (ushort *)(uVar10 % (ushort)bVar7);
      DAT_0de4 = (char)(uVar10 / bVar7);
      uVar14 = RAM0de3;
    }
    DAT_09d2 = uVar14;
  }
  FUN_a405(puVar20);
  FUN_a448();
  FUN_a462();
  bVar7 = DAT_09cf;
  if ((~bVar7 & 0x40) == 0) {
LAB_8df9:
    if ((((DAT_3130 != -0x80) || (bVar7 = DAT_08af, (~bVar7 & 8) == 0)) ||
        ((bVar7 = DAT_08af, (~bVar7 & 4) == 0 || (bVar7 = DAT_0881, (~bVar7 & 0x10) == 0)))) ||
       (((cVar18 = DAT_0d87, cVar18 == '\t' && (bVar7 = DAT_0896._0_1_, (bVar7 & 0x10) == 0)) ||
        (bVar7 = DAT_09cf, (~bVar7 & 0x10) == 0)))) goto LAB_8e37;
    bVar7 = DAT_09cf;
    if ((~bVar7 & 1) != 0) {
      bVar7 = DAT_09cf;
      DAT_09cf = bVar7 | 1;
      uVar16 = DAT_09d8;
      DAT_09d6 = uVar16;
      uVar16 = DAT_09d9;
      DAT_09d7 = uVar16;
    }
  }
  else {
    bVar7 = DAT_09cf;
    if ((~bVar7 & 0x80) == 0) {
LAB_8dd1:
      uVar10 = DAT_09d2;
      uVar11 = DAT_09da;
      if (uVar11 <= uVar10) {
        bVar7 = DAT_09dc;
        bVar7 = (bVar7 + 1) - (0xfe < bVar7);
        DAT_09dc = bVar7;
        if (bVar7 < DAT_3136) goto LAB_8e47;
        uVar10 = DAT_09d2;
        uVar11 = DAT_09d4;
        if ((uVar11 < uVar10) && (uVar10 - uVar11 <= DAT_3138)) {
          bVar7 = DAT_09cf;
          DAT_09cf = bVar7 | 0x40;
          goto LAB_8df9;
        }
      }
    }
    else {
      uVar10 = DAT_09d2;
      uVar11 = DAT_09da;
      if (((uVar11 <= uVar10) && (DAT_3132 <= uVar10 - uVar11)) && (uVar10 - uVar11 <= DAT_3134)) {
        uVar14 = DAT_09da;
        DAT_09d4 = uVar14;
        bVar7 = DAT_09cf;
        DAT_09cf = bVar7 | 0x80;
        goto LAB_8dd1;
      }
    }
LAB_8e37:
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0x7f;
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xbf;
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xfe;
    DAT_09dc = 0;
  }
LAB_8e47:
  bVar7 = DAT_09cf;
  if ((bVar7 & 1) == 0) {
LAB_8e8d:
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xf7;
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xfe;
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xfd;
    bVar7 = DAT_09cf;
    DAT_09cf = bVar7 & 0xfb;
    bVar7 = 0x80;
  }
  else {
    bVar7 = DAT_09cf;
    if ((~bVar7 & 8) != 0) {
      uVar10 = DAT_09d2;
      uVar11 = DAT_09da;
      if (uVar11 <= uVar10) {
        bVar7 = DAT_09d6;
        goto LAB_8e9f;
      }
LAB_8e81:
      bVar7 = DAT_09cf;
      DAT_09cf = bVar7 & 0xbf;
      bVar7 = DAT_09cf;
      DAT_09cf = bVar7 & 0x7f;
      DAT_09dc = 0;
      goto LAB_8e8d;
    }
    bVar19 = DAT_0cd4;
    if (bVar19 < 0x80) {
      bVar7 = bVar19 + DAT_3213;
      if (((CARRY1(bVar19,DAT_3213)) || (bVar7 == 0x80)) || (0x7f < bVar7)) {
LAB_8e7d:
        bVar7 = DAT_09cf;
        DAT_09cf = bVar7 | 0x10;
        goto LAB_8e81;
      }
    }
    else {
      bVar7 = bVar19 - DAT_3213;
      if (((bVar19 < DAT_3213) || (bVar7 == 0x80)) || (bVar7 < 0x80)) goto LAB_8e7d;
    }
  }
LAB_8e9f:
  DAT_0cd4 = bVar7;
  bVar7 = DAT_0b0d;
  uVar12 = DAT_08e6;
  uVar10 = *(ushort *)((short)&DAT_0b0e + (ushort)bVar7);
  uVar11 = uVar12 - uVar10;
  cVar15 = (char)uVar11;
  cVar18 = (char)(uVar11 >> 8);
  if (uVar12 < uVar10) {
    bVar19 = cVar18 + 0x80;
    if ((bVar19 < 0x80) && (0x7f7f < CONCAT11(bVar19,cVar15))) {
      bVar19 = cVar15 + 0x80;
    }
    else {
      bVar19 = 0;
    }
  }
  else if ((uVar11 < 0x8000) && (CONCAT11(cVar18 + -0x80,cVar15) < 0x8080)) {
    bVar19 = cVar15 + 0x80;
  }
  else {
    bVar19 = 0xff;
  }
  DAT_08ed = bVar19;
  bVar17 = DAT_0881;
  if ((bVar17 & 0x10) == 0) {
    if (DAT_19d7 <= bVar19) {
      DAT_0b03 = 0;
    }
  }
  else {
    DAT_0b03 = 0xff;
  }
  bVar19 = DAT_08ed;
  if (DAT_348b < bVar19) {
    DAT_0b17 = 0;
  }
  else {
    bVar19 = DAT_0b17;
    DAT_0b17 = (bVar19 + 1) - (0xfe < bVar19);
  }
  uVar10 = DAT_08e6;
  *(ushort *)((short)&DAT_0b0e + (ushort)bVar7) = uVar10;
  cVar18 = DAT_0b0d;
  DAT_0b0d = cVar18 + 2U & DAT_1842;
  bVar7 = DAT_0a86;
  if (bVar7 < 0x80) {
    bVar7 = DAT_08ed;
    if (DAT_4b0f <= bVar7) {
      bVar7 = DAT_0888;
      DAT_0888 = bVar7 | 0x40;
    }
  }
  else {
    bVar7 = DAT_0888;
    DAT_0888 = bVar7 & 0xbf;
  }
  bVar7 = DAT_0bbc;
  uVar12 = DAT_0bb8;
  uVar10 = *(ushort *)((short)&DAT_0bbe + (ushort)bVar7);
  uVar11 = uVar12 - uVar10;
  cVar18 = (char)uVar11;
  cVar15 = (char)(uVar11 >> 8);
  if (uVar12 < uVar10) {
    bVar19 = cVar15 + 0x80;
    if ((bVar19 < 0x80) && (0x7f7f < CONCAT11(bVar19,cVar18))) {
      cVar18 = cVar18 + -0x80;
    }
    else {
      cVar18 = '\0';
    }
  }
  else if ((uVar11 < 0x8000) && (CONCAT11(cVar15 + -0x80,cVar18) < 0x8080)) {
    cVar18 = cVar18 + -0x80;
  }
  else {
    cVar18 = -1;
  }
  DAT_0bbb = cVar18;
  uVar10 = DAT_0bb8;
  *(ushort *)((short)&DAT_0bbe + (ushort)bVar7) = uVar10;
  cVar18 = DAT_0bbc;
  DAT_0bbc = cVar18 + 2U & DAT_1842;
  cVar18 = DAT_08e6._0_1_;
  if (cVar18 == '\0') {
    uVar14 = DAT_08e6;
    uVar16 = (undefined1)uVar14;
  }
  else {
    uVar16 = 0xff;
  }
  DAT_08ec = uVar16;
  uVar10 = DAT_0900;
  uVar10 = lookup_u8_uniform_u16_axis(uVar10,&UNK_3494);
  DAT_0a05 = (char)(uVar10 >> 8);
  FUN_a314();
  bVar7 = DAT_08af;
  if (((~bVar7 & 8) != 0) && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)) {
    bVar7 = DAT_08ec;
    bVar19 = DAT_0a05;
    if (bVar19 < bVar7) {
      cVar18 = '\0';
    }
    else {
      bVar7 = DAT_0b18;
      cVar18 = (bVar7 + 1) - (0xfe < bVar7);
    }
    DAT_0b18 = cVar18;
    bVar7 = DAT_0886;
    if ((bVar7 & 0x10) == 0) {
LAB_8fd5:
      cVar18 = '\0';
    }
    else {
      bVar7 = DAT_08ec;
      bVar19 = DAT_0a06;
      if (bVar7 < bVar19) goto LAB_8fd5;
      bVar7 = DAT_0b19;
      cVar18 = (bVar7 + 1) - (0xfe < bVar7);
    }
    DAT_0b19 = cVar18;
  }
  bVar7 = DAT_0b16;
  DAT_0b16 = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0e20;
  bVar7 = (bVar7 + 1) - (0xfe < bVar7);
  DAT_0e20 = bVar7;
  if (DAT_4e8c <= bVar7) {
    FUN_cbef();
    bVar7 = DAT_0883;
    if ((~bVar7 & 2) == 0) {
      bVar7 = DAT_0880;
      if ((~bVar7 & 1) != 0) {
        DAT_0b6e = 0;
        bVar7 = DAT_0883;
        DAT_0883 = bVar7 & 0xfd;
        bVar7 = DAT_0bf8;
        DAT_0bf8 = bVar7 | 0x40;
      }
    }
    else {
      bVar7 = DAT_0880;
      if ((bVar7 & 1) != 0) {
        bVar7 = DAT_0883;
        DAT_0883 = bVar7 | 2;
        bVar7 = DAT_0889;
        DAT_0889 = bVar7 | 0x10;
        bVar7 = DAT_0bf8;
        DAT_0bf8 = bVar7 & 0xdf;
      }
    }
  }
  bVar7 = DAT_0880;
  if ((~bVar7 & 1) == 0) {
    bVar7 = DAT_0a2e._0_1_;
    bVar19 = DAT_0d7d;
    if (bVar19 <= bVar7) {
      bVar7 = DAT_0880;
      DAT_0880 = bVar7 | 0x44;
    }
    bVar7 = DAT_0d08;
    if ((((((((~bVar7 & 1) != 0) && (bVar7 = DAT_0884, (~bVar7 & 2) != 0)) &&
           (bVar7 = DAT_0884, (~bVar7 & 1) != 0)) &&
          ((bVar7 = DAT_088c, (~bVar7 & 0x80) != 0 && (bVar7 = DAT_0883, (bVar7 & 0x10) != 0)))) &&
         ((bVar7 = DAT_0881, (~bVar7 & 8) != 0 &&
          ((cVar18 = DAT_0dd9, cVar18 == -0x80 || (bVar7 = DAT_08b0, (~bVar7 & 8) != 0)))))) &&
        (bVar7 = DAT_08b1, (~bVar7 & 0x10) != 0)) &&
       ((bVar7 = DAT_08a0, (~bVar7 & 4) != 0 && (DAT_18df != -0x80)))) {
      bVar7 = DAT_091b;
      if (0xbf < bVar7) {
        DAT_091b = 0xc0;
      }
      bVar7 = DAT_091c;
      if (0xbf < bVar7) {
        DAT_091c = 0xc0;
      }
      bVar7 = DAT_091d;
      if (0xbf < bVar7) {
        DAT_091d = 0xc0;
      }
      bVar7 = DAT_091e;
      if (0xbf < bVar7) {
        DAT_091e = 0xc0;
      }
      uVar14 = DAT_095e;
      bVar7 = DAT_0a08;
      bVar19 = (byte)((ushort)uVar14 >> 8);
      uVar14 = CONCAT11(bVar19 + bVar7,(char)uVar14);
      if (CARRY1(bVar19,bVar7)) {
        uVar14 = 0xffff;
      }
      DAT_0926 = uVar14;
      FUN_864e();
      bVar19 = DAT_0cec;
      bVar7 = DAT_0a08;
      iVar2 = (uint)bVar7 * 0x100 * (uint)bVar19 * 2;
      uVar10 = (ushort)iVar2;
      bVar7 = (byte)((uint)iVar2 >> 0x10);
      cVar18 = bVar7 + (0xff7f < uVar10);
      uVar11 = CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar7,0xff7f < uVar10),cVar18);
      uVar9 = uVar10 + 0x80;
      if (uVar11 < 0x100) {
        DAT_0dde._0_1_ = cVar18;
        DAT_0dde._1_1_ = (char)(uVar10 + 0x80 >> 8);
        uVar12 = DAT_0dde;
        uVar10 = DAT_095e;
        sVar8 = uVar12 + uVar10;
        uVar9 = uVar11;
        if (CARRY2(uVar12,uVar10)) goto LAB_90dd;
      }
      else {
LAB_90dd:
        sVar8 = -1;
      }
      DAT_0928 = sVar8;
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 | 0x80;
      FUN_c8c9();
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 & 0x7f;
      cVar18 = DAT_0d87;
      if (cVar18 != '\t') {
        bVar7 = DAT_0a17;
        DAT_0a17 = bVar7 | 0x20;
        FUN_c939();
        bVar7 = DAT_0a17;
        DAT_0a17 = bVar7 & 0xdf;
      }
      bVar7 = DAT_0881;
      DAT_0881 = bVar7 | 8;
    }
  }
  else {
    DAT_0b5c = 0;
  }
  bVar7 = DAT_0886;
  if ((((bVar7 & 0x40) == 0) || (bVar7 = DAT_08ed, bVar7 < DAT_34ce)) ||
     (bVar7 = DAT_0b1e, bVar7 < DAT_3553)) {
    sVar8 = 0;
  }
  else {
    bVar7 = DAT_0881;
    DAT_0881 = bVar7 | 1;
    DAT_0b1e = 0;
    if (((DAT_4b08 != '\0') && (cVar18 = DAT_0a86, cVar18 == -0x80)) &&
       (DAT_0a86 = DAT_4b0b, DAT_4b0b < 0x80)) {
      DAT_0a87 = DAT_4b0e;
    }
    cVar18 = DAT_097a;
    if ((cVar18 == '\0') && (DAT_097a = DAT_3483, DAT_3483 != -0x80)) {
      DAT_0a04 = DAT_3486;
    }
    cVar18 = DAT_0d87;
    bVar7 = DAT_354e;
    if (((((cVar18 == '\t') && (bVar19 = DAT_0896._0_1_, bVar7 = DAT_3548, (~bVar19 & 0x10) == 0))
         && (bVar19 = DAT_0899, bVar7 = DAT_3549, (bVar19 & 2) == 0)) &&
        ((bVar19 = DAT_0899, bVar7 = DAT_354a, (bVar19 & 4) == 0 &&
         (bVar19 = DAT_0899, bVar7 = DAT_354b, (bVar19 & 8) == 0)))) &&
       ((bVar19 = DAT_0899, bVar7 = DAT_354c, (bVar19 & 0x10) == 0 &&
        (bVar19 = DAT_0899, bVar7 = DAT_354e, (bVar19 & 0x20) != 0)))) {
      bVar7 = DAT_354d;
    }
    sVar8 = (ushort)bVar7 << 5;
  }
  DAT_0a12 = sVar8;
  cVar18 = DAT_0b21;
  if (cVar18 == '\x01') {
    bVar7 = DAT_0886;
    if ((((~bVar7 & 0x40) == 0) || (bVar7 = DAT_0881, (~bVar7 & 0x10) == 0)) ||
       ((bVar7 = DAT_0900._0_1_, bVar7 < DAT_34c5 || (DAT_34c6 < bVar7)))) goto LAB_931f;
    sVar8 = DAT_08e6;
    bVar7 = (byte)((ushort)(sVar8 << 6) >> 8);
    if ((bVar7 < DAT_34c7) || (DAT_34c8 < bVar7)) goto LAB_931f;
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar7 = DAT_0896._0_1_, (bVar7 & 0x10) == 0)) {
      bVar7 = DAT_08ed;
      if (DAT_34c9 <= bVar7) goto LAB_9217;
      goto LAB_931f;
    }
    bVar7 = DAT_08ed;
    if (bVar7 < DAT_34ca) goto LAB_931f;
LAB_9217:
    uVar9 = DAT_08f2;
    uVar9 = lookup_u8_uniform_u16_axis(uVar9,&UNK_353a);
    bVar19 = (byte)(uVar9 >> 8);
    DAT_0a0d = bVar19;
    bVar7 = DAT_0a0f;
    uVar9 = (ushort)bVar19 * (ushort)bVar7;
    uVar4 = DAT_08f5;
    uVar10 = lookup_u8_uniform_axis(uVar4,&UNK_351d);
    bVar7 = (byte)(uVar10 >> 8);
    DAT_0a10 = bVar7;
    uVar9 = multiply_u16_shift8_saturate(bVar7 + 0x180,uVar9);
    DAT_0dde = uVar9;
    uVar4 = DAT_08ed;
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) != 0)) {
      pbVar21 = &UNK_34d0;
    }
    else {
      bVar7 = DAT_0898;
      if (DAT_34cf < bVar7) {
        pbVar21 = &UNK_34e4;
      }
      else {
        pbVar21 = &UNK_34da;
      }
    }
    uVar9 = lookup_u8_uniform_axis(uVar4,pbVar21);
    DAT_0a0c = (char)(uVar9 >> 8);
    uVar9 = DAT_08ce;
    uVar9 = lookup_u8_uniform_u16_axis(uVar9,&UNK_34ee);
    bVar19 = (byte)(uVar9 >> 8);
    DAT_0a0e = bVar19;
    bVar7 = DAT_0a0c;
    uVar9 = DAT_0dde;
    uVar1 = (uint)((ushort)bVar19 * (ushort)bVar7) * (uint)uVar9;
    if (uVar1 < 0x40000000) {
      bVar7 = (byte)(uVar1 >> 0x10);
      uVar9 = CONCAT11(((char)(uVar1 >> 0x18) << 1 | bVar7 >> 7) << 1 | (bVar7 & 0x7f) >> 6,
                       (bVar7 << 1 | (byte)(uVar1 >> 8) >> 7) << 1 |
                       (byte)((ushort)((short)uVar1 << 1) >> 0xf));
      if (uVar9 <= DAT_34cc) goto LAB_931f;
    }
    else {
      uVar9 = 0xffff;
    }
    DAT_0a0a = uVar9;
    do {
      bVar7 = DAT_0b21;
      uVar9 = (ushort)((uint)bVar7 * 0x9c4 >> 0x10);
      DAT_0dde = (short)((uint)bVar7 * 0x9c4);
      uVar12 = DAT_0a0a;
      uVar11 = DAT_095e;
      uVar10 = uVar12 + uVar11;
      if (CARRY2(uVar12,uVar11)) {
        uVar10 = 0xffff;
      }
      uVar11 = DAT_0dde;
      if (uVar10 < uVar11) break;
      bVar7 = DAT_0b21;
      bVar7 = (bVar7 + 1) - (0xfe < bVar7);
      DAT_0b21 = bVar7;
    } while (bVar7 < 0x1b);
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar7 = DAT_0896._0_1_, (bVar7 & 0x10) == 0)) {
      bVar7 = DAT_0b20;
      bVar19 = DAT_3551;
      if (bVar7 < DAT_354f) {
LAB_92fe:
        bVar7 = DAT_0b1c;
        if (bVar19 <= bVar7) goto LAB_931f;
        bVar7 = DAT_0b1c;
        DAT_0b1c = (bVar7 + 1) - (0xfe < bVar7);
      }
      else {
        DAT_0b20 = 0;
        DAT_0b1c = 0;
      }
    }
    else {
      bVar7 = DAT_0b20;
      bVar19 = DAT_3552;
      if (bVar7 < DAT_3550) goto LAB_92fe;
      DAT_0b20 = 0;
      DAT_0b1c = 0;
    }
    bVar7 = DAT_0881;
    DAT_0881 = bVar7 | 1;
    if (DAT_3487 == -0x80) {
      DAT_097a = 0x80;
    }
  }
  else {
    cVar18 = DAT_0b21;
    DAT_0b21 = cVar18 + -1;
LAB_931f:
    DAT_0a0a = 0;
  }
  bVar7 = DAT_0881;
  if (((((((bVar7 & 1) != 0) && (bVar7 = DAT_0d08, (~bVar7 & 1) != 0)) &&
        (bVar7 = DAT_0884, (~bVar7 & 2) != 0)) &&
       ((bVar7 = DAT_0884, (~bVar7 & 1) != 0 && (bVar7 = DAT_088c, (~bVar7 & 0x80) != 0)))) &&
      (bVar7 = DAT_08a0, (~bVar7 & 4) != 0)) &&
     (((cVar18 = DAT_0dd9, cVar18 == -0x80 || (bVar7 = DAT_08b0, (~bVar7 & 8) != 0)) &&
      (bVar7 = DAT_08b1, (bVar7 & 0x10) == 0)))) {
    uVar11 = DAT_0a0a;
    uVar12 = DAT_0a12;
    uVar10 = uVar11 + uVar12;
    if ((CARRY2(uVar11,uVar12)) || (24999 < uVar10)) {
      uVar10 = 25000;
    }
    DAT_0a14 = uVar10;
    uVar11 = DAT_095e;
    sVar8 = uVar10 + uVar11;
    if (CARRY2(uVar10,uVar11)) {
      sVar8 = -1;
    }
    DAT_0926 = sVar8;
    FUN_864e(uVar9,sVar8);
    bVar7 = DAT_0cec;
    uVar9 = DAT_0a14;
    iVar2 = (uint)uVar9 * (uint)bVar7 * 2;
    uVar9 = (ushort)iVar2;
    bVar7 = (byte)((uint)iVar2 >> 0x10);
    cVar18 = bVar7 + (0xff7f < uVar9);
    if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar7,0xff7f < uVar9),cVar18) < 0x100) {
      uVar10 = CONCAT11(cVar18,(char)(uVar9 + 0x80 >> 8));
      uVar9 = DAT_095e;
      sVar8 = uVar10 + uVar9;
      if (CARRY2(uVar10,uVar9)) goto LAB_939e;
    }
    else {
LAB_939e:
      sVar8 = -1;
    }
    DAT_0928 = sVar8;
    bVar7 = DAT_08b1;
    if ((~bVar7 & 0x80) != 0) {
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 | 0x80;
      FUN_c8c9();
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 & 0x7f;
    }
    cVar18 = DAT_0d87;
    if ((cVar18 != '\t') && (bVar7 = DAT_08b1, (~bVar7 & 0x80) != 0)) {
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 | 0x20;
      FUN_c939();
      bVar7 = DAT_0a17;
      DAT_0a17 = bVar7 & 0xdf;
    }
  }
  bVar7 = DAT_0881;
  DAT_0881 = bVar7 & 0xfe;
  bVar7 = DAT_08c0;
  DAT_08c0 = bVar7 | 0x40;
  bVar7 = DAT_0886;
  if (((((~bVar7 & 0x40) == 0) || (bVar7 = DAT_0881, (~bVar7 & 0x10) == 0)) ||
      (bVar7 = DAT_0900._0_1_, bVar7 < DAT_3554)) || (DAT_3555 < bVar7)) {
LAB_9429:
    bVar7 = DAT_0cf2;
    DAT_0cf2 = bVar7 & 0xfd;
    bVar7 = DAT_0cf2;
    if ((~bVar7 & 1) == 0) goto LAB_9438;
    uVar9 = 0;
  }
  else {
    sVar8 = DAT_08e6;
    bVar7 = (byte)((ushort)(sVar8 << 6) >> 8);
    if ((bVar7 < DAT_3556) || (DAT_3557 < bVar7)) goto LAB_9429;
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar7 = DAT_0896._0_1_, (bVar7 & 0x10) == 0)) {
      bVar7 = DAT_08ed;
      if (bVar7 < DAT_3558) goto LAB_9429;
    }
    else {
      bVar7 = DAT_08ed;
      if (bVar7 < DAT_3559) goto LAB_9429;
    }
    bVar7 = DAT_0cf2;
    DAT_0cf2 = bVar7 | 2;
LAB_9438:
    uVar9 = DAT_08f2;
    uVar9 = lookup_u8_uniform_u16_axis(uVar9,&UNK_353a);
    bVar19 = (byte)(uVar9 >> 8);
    DAT_0a0d = bVar19;
    bVar7 = DAT_0a0f;
    uVar9 = (ushort)bVar19 * (ushort)bVar7;
    uVar4 = DAT_08f5;
    uVar10 = lookup_u8_uniform_axis(uVar4,&UNK_351d);
    bVar7 = (byte)(uVar10 >> 8);
    DAT_0a10 = bVar7;
    uVar9 = multiply_u16_shift8_saturate(bVar7 + 0x180,uVar9);
    DAT_0dde = uVar9;
    uVar4 = DAT_08ed;
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) != 0)) {
      pbVar21 = &UNK_355d;
    }
    else {
      bVar7 = DAT_0898;
      if (DAT_355c < bVar7) {
        pbVar21 = &UNK_3571;
      }
      else {
        pbVar21 = &UNK_3567;
      }
    }
    uVar9 = lookup_u8_uniform_axis(uVar4,pbVar21);
    DAT_0d04 = (char)(uVar9 >> 8);
    uVar9 = DAT_08ce;
    uVar9 = lookup_u8_uniform_u16_axis(uVar9,&UNK_34ee);
    bVar19 = (byte)(uVar9 >> 8);
    DAT_0a0e = bVar19;
    bVar7 = DAT_0d04;
    uVar9 = DAT_0dde;
    uVar1 = (uint)((ushort)bVar19 * (ushort)bVar7) * (uint)uVar9;
    if (uVar1 < 0x40000000) {
      bVar7 = (byte)(uVar1 >> 0x10);
      uVar9 = CONCAT11(((char)(uVar1 >> 0x18) << 1 | bVar7 >> 7) << 1 | (bVar7 & 0x7f) >> 6,
                       (bVar7 << 1 | (byte)(uVar1 >> 8) >> 7) << 1 |
                       (byte)((ushort)((short)uVar1 << 1) >> 0xf));
    }
    else {
      uVar9 = 0xffff;
    }
  }
  DAT_0d02 = uVar9;
  DAT_0cfa = uVar9;
  uVar11 = DAT_0940;
  uVar10 = uVar9 + uVar11;
  uVar12 = DAT_19dc;
  if (((!CARRY2(uVar9,uVar11)) && (uVar10 < DAT_19dc)) && (uVar12 = uVar10, uVar10 < DAT_19da)) {
    uVar12 = DAT_19da;
  }
  DAT_0cf8 = uVar12;
  uVar9 = DAT_095e;
  sVar8 = uVar12 + uVar9;
  if (CARRY2(uVar12,uVar9)) {
    sVar8 = -1;
  }
  DAT_0cf6 = sVar8;
  FUN_864e();
  bVar7 = DAT_0cec;
  uVar9 = DAT_0d02;
  iVar2 = (uint)uVar9 * (uint)bVar7 * 2;
  uVar9 = (ushort)iVar2;
  bVar7 = (byte)((uint)iVar2 >> 0x10);
  cVar18 = bVar7 + (0xff7f < uVar9);
  if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar7,0xff7f < uVar9),cVar18) < 0x100) {
    DAT_0dde._0_1_ = cVar18;
    RAM0ddf = uVar9 + 0x80;
    uVar9 = DAT_0dde;
  }
  else {
    uVar9 = 0xffff;
  }
  DAT_0d00 = uVar9;
  uVar11 = DAT_095a;
  uVar10 = uVar9 + uVar11;
  uVar12 = DAT_19dc;
  if (((!CARRY2(uVar9,uVar11)) && (uVar10 < DAT_19dc)) && (uVar12 = uVar10, uVar10 < DAT_19da)) {
    uVar12 = DAT_19da;
  }
  DAT_0cfe = uVar12;
  uVar9 = DAT_095e;
  sVar8 = uVar12 + uVar9;
  if (CARRY2(uVar12,uVar9)) {
    sVar8 = -1;
  }
  DAT_0cfc = sVar8;
  bVar7 = DAT_0d08;
  if ((((~bVar7 & 1) == 0) || (bVar7 = DAT_0884, (~bVar7 & 2) == 0)) ||
     ((bVar7 = DAT_0884, (~bVar7 & 1) == 0 || (bVar7 = DAT_088c, (~bVar7 & 0x80) == 0)))) {
LAB_9581:
    bVar7 = DAT_0cf2;
    DAT_0cf2 = bVar7 & 0xfe;
  }
  else {
    bVar7 = DAT_08ed;
    cVar18 = DAT_0d87;
    if ((cVar18 == '\t') && (bVar19 = DAT_0896._0_1_, (bVar19 & 0x10) == 0)) {
      if (DAT_355a <= bVar7) goto LAB_9566;
      goto LAB_9581;
    }
    if (bVar7 < DAT_355b) goto LAB_9581;
LAB_9566:
    cVar18 = DAT_0dd9;
    if ((((cVar18 != -0x80) && (bVar7 = DAT_08b0, (~bVar7 & 8) == 0)) ||
        (bVar7 = DAT_08b1, (~bVar7 & 0x10) == 0)) ||
       ((bVar7 = DAT_0ca8, (bVar7 & 1) == 0 || (bVar7 = DAT_08b1, (bVar7 & 0x80) != 0))))
    goto LAB_9581;
    bVar7 = DAT_0cf2;
    if ((((~bVar7 & 1) != 0) && (bVar7 = DAT_0cf2, (bVar7 & 2) != 0)) &&
       ((bVar7 = DAT_0cf2, (~bVar7 & 4) != 0 && (cVar18 = DAT_0da4, cVar18 != '\0')))) {
      DAT_0cf3 = 0;
      bVar7 = DAT_0cf2;
      DAT_0cf2 = bVar7 | 1;
    }
  }
  bVar7 = DAT_08c0;
  DAT_08c0 = bVar7 & 0xbf;
  uVar10 = DAT_0c8a;
  uVar11 = DAT_0c8e;
  uVar9 = uVar10 - uVar11;
  if (uVar10 < uVar11) {
    uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                     -(char)uVar9),&UNK_1852);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = scale_u16_by_u8(uVar9,&UNK_1852);
  }
  sVar8 = DAT_0c8e;
  DAT_0c8e = uVar9 + sVar8;
  bVar7 = DAT_0ca8;
  if ((bVar7 & 1) == 0) {
    uVar14 = DAT_0c98;
    DAT_0c96 = uVar14;
  }
  else {
    uVar10 = DAT_0c94;
    uVar11 = DAT_0c96;
    uVar9 = uVar10 - uVar11;
    if (uVar10 < uVar11) {
      uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                       -(char)uVar9),&UNK_1852);
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    else {
      uVar9 = scale_u16_by_u8(uVar9,&UNK_1852);
    }
    sVar8 = DAT_0c96;
    DAT_0c96 = uVar9 + sVar8;
  }
  uVar9 = DAT_08f2;
  uVar9 = lookup_u8_uniform_u16_axis(uVar9,&DAT_0dba);
  DAT_0c92 = (char)(uVar9 >> 8);
  bVar7 = DAT_0c92;
  puVar6 = (undefined *)DAT_0c8e;
  puVar13 = puVar6 + -0x1eb7;
  if (puVar6 < &UNK_1eb7) {
    iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar13 >> 8) + 1) - ((char)-(char)puVar13 != '\0'),
                           -(char)puVar13) * (uint)bVar7 * 2;
    uVar9 = (ushort)iVar2;
    bVar7 = (byte)((uint)iVar2 >> 0x10);
    cVar18 = bVar7 + (0xff7f < uVar9);
    if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar7,0xff7f < uVar9),cVar18) < 0x100) {
      DAT_0dde._0_1_ = cVar18;
      RAM0ddf = uVar9 + 0x80;
      puVar6 = (undefined *)DAT_0dde;
      puVar13 = &UNK_1eb7 + -(short)puVar6;
      if (puVar6 < &UNK_1eb8) goto LAB_965e;
    }
    puVar13 = (undefined *)0x0;
  }
  else {
    iVar2 = ZEXT24(puVar13) * (uint)bVar7 * 2;
    uVar9 = (ushort)iVar2;
    bVar7 = (byte)((uint)iVar2 >> 0x10);
    cVar18 = bVar7 + (0xff7f < uVar9);
    if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar7,0xff7f < uVar9),cVar18) < 0x100) {
      DAT_0dde._0_1_ = cVar18;
      RAM0ddf = uVar9 + 0x80;
      uVar9 = DAT_0dde;
      puVar13 = &UNK_1eb7 + uVar9;
      if (uVar9 < 0xe149) goto LAB_965e;
    }
    puVar13 = (undefined *)0xffff;
  }
LAB_965e:
  DAT_0c90 = puVar13;
  FUN_cc30();
  bVar7 = DAT_08f4;
  if (DAT_4a31 < bVar7) {
    if (DAT_4a32 <= bVar7) {
      bVar7 = DAT_0885;
      DAT_0885 = bVar7 & 0xfb;
    }
  }
  else {
    bVar7 = DAT_0885;
    DAT_0885 = bVar7 | 4;
  }
  bVar7 = DAT_0a2e._0_1_;
  bVar19 = DAT_0d7c;
  if (bVar7 < bVar19) {
    if ((bVar7 < DAT_4240) || (cVar18 = DAT_0a82, cVar18 != '@')) {
      bVar19 = DAT_088d;
      DAT_088d = bVar19 & 0xdf;
    }
    else {
      bVar19 = DAT_088d;
      DAT_088d = bVar19 | 0x20;
    }
    if (bVar7 < DAT_4a30) {
      bVar7 = DAT_0880;
      DAT_0880 = bVar7 & 0xfb;
      goto LAB_96f1;
    }
    bVar7 = DAT_08ed;
    if (DAT_4a2e < bVar7) {
      DAT_0a8a = 0;
      goto LAB_96f1;
    }
    bVar7 = DAT_0a8a;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0a8a = bVar7;
    if (bVar7 <= DAT_4a2f) goto LAB_96f1;
    bVar19 = DAT_0a89;
    bVar7 = DAT_08ec;
    if ((((bVar19 < bVar7) || (bVar7 = DAT_08af, (~bVar7 & 8) == 0)) ||
        (bVar7 = DAT_08af, (~bVar7 & 4) == 0)) ||
       (((cVar18 = DAT_0d87, cVar18 == '\t' && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) ||
        (bVar7 = DAT_0885, (bVar7 & 4) == 0)))) goto LAB_96f1;
    bVar7 = DAT_0885;
    DAT_0885 = bVar7 | 0x20;
  }
  else {
    bVar7 = DAT_0880;
    DAT_0880 = bVar7 | 4;
    bVar7 = DAT_088d;
    DAT_088d = bVar7 & 0xdf;
LAB_96f1:
    bVar7 = DAT_0885;
    DAT_0885 = bVar7 & 0xdf;
  }
  bVar7 = DAT_0b20;
  DAT_0b20 = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0b1e;
  DAT_0b1e = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0b1f;
  DAT_0b1f = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0b1d;
  DAT_0b1d = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0afd;
  DAT_0afd = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0881;
  if ((~bVar7 & 0x10) == 0) {
    cVar18 = '\0';
  }
  else {
    bVar7 = DAT_0afe;
    cVar18 = (bVar7 + 1) - (0xfe < bVar7);
  }
  DAT_0afe = cVar18;
  bVar7 = DAT_0880;
  if (((~bVar7 & 1) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x40) == 0)) {
    bVar7 = DAT_0b5d;
    cVar18 = (bVar7 + 1) - (0xfe < bVar7);
  }
  else {
    cVar18 = '\0';
  }
  DAT_0b5d = cVar18;
  bVar7 = DAT_09a1;
  if ((~bVar7 & 1) == 0) {
    bVar7 = DAT_09aa;
    DAT_09aa = (bVar7 + 1) - (0xfe < bVar7);
    DAT_09ab = 0;
  }
  else {
    bVar7 = DAT_09ab;
    DAT_09ab = (bVar7 + 1) - (0xfe < bVar7);
    DAT_09aa = 0;
  }
  bVar7 = DAT_091b;
  DAT_091b = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_091c;
  DAT_091c = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_091d;
  DAT_091d = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_091e;
  DAT_091e = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_091f;
  DAT_091f = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0920;
  DAT_0920 = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0b09;
  DAT_0b09 = (bVar7 + 1) - (0xfe < bVar7);
  bVar7 = DAT_0893;
  if ((bVar7 & 0x80) == 0) {
LAB_9802:
    bVar7 = 0;
  }
  else {
    bVar7 = DAT_0be7;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    if (DAT_4f15 < bVar7) {
      bVar7 = DAT_0893;
      DAT_0893 = bVar7 & 0x7f;
      goto LAB_9802;
    }
  }
  DAT_0be7 = bVar7;
  bVar7 = DAT_0900._0_1_;
  uVar16 = DAT_4b9e;
  if (bVar7 < DAT_4b9c) {
    uVar16 = DAT_4b9d;
  }
  DAT_0a9f = uVar16;
  bVar7 = DAT_08ce._0_1_;
  bVar19 = DAT_0a9e;
  if ((bVar7 < bVar19) || ((byte)(bVar7 - bVar19) < DAT_4b99)) {
    DAT_0a9d = 0;
LAB_984d:
    cVar18 = DAT_0aa0;
    if ((cVar18 == '\0') || (DAT_0aa0 = cVar18 + -1, (char)(cVar18 + -1) == '\0')) {
      DAT_0aa0 = DAT_4b9a;
      bVar7 = DAT_0a9c;
      bVar19 = bVar7 - DAT_4b9b;
      if (bVar7 < DAT_4b9b) {
        bVar19 = 0;
      }
      goto LAB_986d;
    }
  }
  else {
    bVar17 = DAT_0a9f;
    sVar8 = (ushort)(byte)((bVar7 - bVar19) - DAT_4b99) * (ushort)bVar17;
    if ((char)((ushort)sVar8 >> 8) != '\0') {
      sVar8 = 0xff;
    }
    bVar19 = (byte)sVar8;
    DAT_0a9d = bVar19;
    bVar7 = DAT_0a9c;
    if ((bVar19 < bVar7) || (bVar19 == bVar7)) goto LAB_984d;
    if (DAT_4b9f <= bVar19) {
      bVar19 = DAT_4b9f;
    }
LAB_986d:
    DAT_0a9c = bVar19;
  }
  uVar16 = DAT_08ce._0_1_;
  DAT_0a9e = uVar16;
  uVar10 = DAT_0900;
  uVar11 = DAT_0aa8;
  uVar9 = uVar10 - uVar11;
  if (uVar10 < uVar11) {
    uVar9 = scale_u16_by_u8_rounded
                      (CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                -(char)uVar9),&UNK_4af6);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = scale_u16_by_u8_rounded(uVar9,&UNK_4af6);
  }
  sVar8 = DAT_0aa8;
  DAT_0aa8 = uVar9 + sVar8;
  bVar7 = DAT_0af7;
  if ((bVar7 & 1) == 0) {
    bVar7 = DAT_0aaa;
    DAT_0aaa = (bVar7 + 1) - (0xfe < bVar7);
    bVar7 = DAT_0aab;
    DAT_0aab = (bVar7 + 1) - (0xfe < bVar7);
  }
  bVar7 = DAT_0abe;
  if ((DAT_4af7 < bVar7) && (bVar7 < DAT_4af8)) {
    bVar7 = DAT_0aa6;
    DAT_0aa6 = bVar7 | 0x80;
  }
  else {
    bVar7 = DAT_0aa6;
    DAT_0aa6 = bVar7 & 0x7f;
    bVar7 = DAT_0aa6;
    if ((bVar7 & 0x40) != 0) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xdf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  bVar7 = DAT_0aa6;
  if ((((~bVar7 & 8) != 0) && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)) &&
     (bVar7 = DAT_0aa6, (~bVar7 & 2) != 0)) {
    cVar18 = DAT_0d87;
    if (cVar18 == '\t') {
      cVar18 = DAT_0898;
      if (cVar18 == DAT_4af9) {
        bVar7 = DAT_0aaa;
        if (DAT_4afd <= bVar7) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 0x20;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 | 8;
          FUN_997a();
          return;
        }
      }
      else {
        DAT_0aaa = 0;
        bVar7 = DAT_0aa6;
        if ((bVar7 & 0x20) != 0) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xdf;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xf7;
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xbf;
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 2;
          goto LAB_9a25;
        }
      }
    }
    else {
      bVar7 = DAT_0aa8._0_1_;
      if ((bVar7 < DAT_4afb) || (DAT_4afc <= bVar7)) {
        DAT_0aaa = 0;
        bVar7 = DAT_0aa6;
        if ((bVar7 & 0x20) != 0) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xdf;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xf7;
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xbf;
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 2;
          goto LAB_9a25;
        }
      }
      else {
        bVar7 = DAT_0aaa;
        if (DAT_4afd <= bVar7) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 0x20;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 | 8;
          FUN_997a();
          return;
        }
      }
    }
    cVar18 = DAT_0d87;
    if (cVar18 == '\t') {
      cVar18 = DAT_0898;
      if (cVar18 == DAT_4afa) {
        bVar7 = DAT_0aab;
        if (DAT_4afd <= bVar7) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 0x10;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 | 4;
        }
LAB_99b5:
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      bVar7 = DAT_0aa6;
      if ((bVar7 & 0x10) == 0) goto LAB_99b5;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      bVar7 = DAT_0aa7;
      DAT_0aa7 = bVar7 & 0xfb;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
    }
    else {
      bVar7 = DAT_0aa8._0_1_;
      if ((DAT_4afe <= bVar7) && (bVar7 < DAT_4aff)) {
        bVar7 = DAT_0aab;
        if (DAT_4afd <= bVar7) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 | 0x10;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 | 4;
        }
LAB_99f2:
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      bVar7 = DAT_0aa6;
      if ((bVar7 & 0x10) == 0) goto LAB_99f2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      bVar7 = DAT_0aa7;
      DAT_0aa7 = bVar7 & 0xfb;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
    }
  }
LAB_9a25:
  bVar7 = DAT_0aa6;
  if ((bVar7 & 8) != 0) {
    bVar7 = DAT_0aaa;
    if (bVar7 < DAT_4b01) {
      bVar7 = DAT_08e8._0_1_;
      if (DAT_4b02 <= bVar7) {
        DAT_0aaa = 0;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 4;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 & 0xf7;
      }
    }
    else {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xdf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xf7;
    }
  }
  bVar7 = DAT_0aa6;
  if ((bVar7 & 4) != 0) {
    bVar7 = DAT_0aa7;
    bVar19 = DAT_4b05;
    if ((bVar7 & 8) != 0) {
      bVar19 = DAT_4b04;
    }
    DAT_0aac = bVar19;
    bVar7 = DAT_08e8._0_1_;
    if ((bVar7 < DAT_4b02) || (bVar7 = DAT_0aaa, DAT_4b06 <= bVar7)) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 1;
      bVar7 = DAT_0aa7;
      DAT_0aa7 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfb;
    }
  }
  bVar7 = DAT_0aa6;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0aa6;
    if ((bVar7 & 1) != 0) {
      bVar7 = DAT_0aae;
      bVar7 = (bVar7 + 1) - (0xfe < bVar7);
      DAT_0aae = bVar7;
      if (DAT_4b07 <= bVar7) {
        DAT_0aae = 0;
        bVar7 = DAT_0aad;
        DAT_0aad = (bVar7 + 1) - (0xfe < bVar7);
        bVar7 = DAT_0aa7;
        if ((bVar7 & 2) != 0) {
          bVar7 = DAT_0aa7;
          bVar19 = DAT_4b05;
          if ((bVar7 & 8) != 0) {
            bVar19 = DAT_4b04;
          }
          bVar17 = DAT_0aad;
          bVar7 = bVar19 + bVar17;
          if (CARRY1(bVar19,bVar17)) {
            bVar7 = 0xff;
          }
          bVar19 = DAT_0a83;
          if (bVar7 < bVar19) {
            DAT_0aac = bVar7;
          }
          else {
            bVar7 = DAT_0aa7;
            DAT_0aa7 = bVar7 & 0xfd;
          }
        }
        bVar7 = DAT_0aa7;
        if ((~bVar7 & 2) != 0) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xfe;
          DAT_0aad = 0;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xf7;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xfb;
        }
      }
    }
    bVar7 = DAT_0aa6;
    if ((~bVar7 & 1) != 0) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  uVar14 = DAT_0ab4;
  DAT_0ab6 = uVar14;
  sVar8 = DAT_0ab0;
  DAT_0ab4 = sVar8;
  sVar5 = DAT_0ab6;
  sVar8 = sVar8 - sVar5;
  bVar7 = DAT_0ab2;
  if ((~bVar7 & 4) != 0) {
    sVar8 = 0;
  }
  if ((char)((ushort)sVar8 >> 8) != '\0') {
    sVar8 = 0xff;
  }
  DAT_0ab3 = (char)sVar8;
  bVar7 = DAT_0ab2;
  DAT_0ab2 = bVar7 | 4;
  bVar7 = DAT_0ab3;
  iVar2 = (uint)DAT_4bd4 * (uint)bVar7;
  DAT_0dde = (short)((uint)iVar2 >> 0x10);
  bVar7 = DAT_0aba;
  bVar17 = (byte)iVar2;
  bVar19 = (byte)((uint)iVar2 >> 8);
  DAT_0de0 = CONCAT11(bVar19 - (bVar17 < bVar7),bVar17 - bVar7);
  if (bVar19 < (bVar17 < bVar7)) {
    cVar18 = DAT_0dde._1_1_;
    if (cVar18 == '\x01') goto LAB_9b9a;
    if (cVar18 != '\0') goto LAB_9b48;
    uVar14 = DAT_0de0;
    iVar2 = (uint)DAT_4bd6 *
            (uint)CONCAT11((~(byte)((ushort)uVar14 >> 8) + 1) - ((char)-(char)uVar14 != '\0'),
                           -(char)uVar14);
    uVar14 = (undefined2)iVar2;
    if ((short)((uint)iVar2 >> 0x10) != 0) {
      uVar14 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar19 = (byte)((ushort)uVar14 >> 8);
    bVar17 = (byte)uVar14;
    if ((bVar7 & 1) == 0) {
      bVar3 = DAT_0ab8._1_1_;
      bVar7 = bVar19 - (bVar17 < bVar3);
      uVar14 = CONCAT11(bVar7,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_9b87;
      cVar18 = -(bVar17 - bVar3);
      uVar14 = CONCAT11((~bVar7 + 1) - (cVar18 != '\0'),cVar18);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar7 = DAT_0ab8._1_1_;
      uVar14 = CONCAT11(bVar19 + CARRY1(bVar17,bVar7),bVar17 + bVar7);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar7))) {
        uVar14 = 0xffff;
      }
LAB_9b87:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar14;
  }
  else {
    cVar18 = DAT_0dde._1_1_;
    if (cVar18 != '\0') {
LAB_9b48:
      DAT_0de0 = 0xffff;
    }
LAB_9b9a:
    uVar9 = DAT_0de0;
    uVar14 = (undefined2)((uint)DAT_4bd6 * (uint)uVar9);
    if ((short)((uint)DAT_4bd6 * (uint)uVar9 >> 0x10) != 0) {
      uVar14 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar19 = (byte)((ushort)uVar14 >> 8);
    bVar17 = (byte)uVar14;
    if ((bVar7 & 1) == 0) {
      bVar7 = DAT_0ab8._1_1_;
      uVar14 = CONCAT11(bVar19 + CARRY1(bVar17,bVar7),bVar17 + bVar7);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar7))) {
        uVar14 = 0xffff;
      }
LAB_9bcc:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar3 = DAT_0ab8._1_1_;
      bVar7 = bVar19 - (bVar17 < bVar3);
      uVar14 = CONCAT11(bVar7,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_9bcc;
      cVar18 = -(bVar17 - bVar3);
      uVar14 = CONCAT11((~bVar7 + 1) - (cVar18 != '\0'),cVar18);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar14;
  }
  bVar19 = DAT_0aba;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 1) == 0) {
    bVar7 = DAT_0ab8._0_1_;
    cVar18 = bVar19 + bVar7;
    if (CARRY1(bVar19,bVar7)) {
      cVar18 = -1;
    }
  }
  else {
    bVar7 = DAT_0ab8._0_1_;
    cVar18 = bVar19 - bVar7;
    if (bVar19 < bVar7) {
      cVar18 = '\0';
    }
  }
  DAT_0aba = cVar18;
  bVar7 = DAT_0aba;
  bVar19 = DAT_0abe;
  if (bVar7 < bVar19) {
    sVar8 = (ushort)(byte)-(bVar7 - bVar19) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar19 = (byte)((ushort)sVar8 >> 8);
    bVar17 = (byte)sVar8;
    if ((bVar7 & 2) == 0) {
      bVar3 = DAT_0abd;
      bVar7 = bVar19 - (bVar17 < bVar3);
      uVar14 = CONCAT11(bVar7,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_9c13;
      cVar18 = -(bVar17 - bVar3);
      uVar14 = CONCAT11((~bVar7 + 1) - (cVar18 != '\0'),cVar18);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar7 = DAT_0abd;
      uVar14 = CONCAT11(bVar19 + CARRY1(bVar17,bVar7),bVar17 + bVar7);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar7))) {
        uVar14 = 0xffff;
      }
LAB_9c13:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar14;
  }
  else {
    sVar8 = (ushort)(byte)(bVar7 - bVar19) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar19 = (byte)((ushort)sVar8 >> 8);
    bVar17 = (byte)sVar8;
    if ((bVar7 & 2) == 0) {
      bVar7 = DAT_0abd;
      uVar14 = CONCAT11(bVar19 + CARRY1(bVar17,bVar7),bVar17 + bVar7);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar7))) {
        uVar14 = 0xffff;
      }
LAB_9c4a:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar3 = DAT_0abd;
      bVar7 = bVar19 - (bVar17 < bVar3);
      uVar14 = CONCAT11(bVar7,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_9c4a;
      cVar18 = -(bVar17 - bVar3);
      uVar14 = CONCAT11((~bVar7 + 1) - (cVar18 != '\0'),cVar18);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar14;
  }
  bVar19 = DAT_0abe;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 2) == 0) {
    bVar7 = DAT_0abc;
    cVar18 = bVar19 + bVar7;
    if (CARRY1(bVar19,bVar7)) {
      cVar18 = -1;
    }
  }
  else {
    bVar7 = DAT_0abc;
    cVar18 = bVar19 - bVar7;
    if (bVar19 < bVar7) {
      cVar18 = '\0';
    }
  }
  DAT_0abe = cVar18;
  if ((DAT_4ba7 != -0x80) ||
     ((((cVar18 = DAT_0d87, cVar18 == '\t' && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) ||
       (bVar7 = DAT_0900._0_1_, DAT_4ba8 <= bVar7)) || (bVar7 = DAT_08ce._0_1_, DAT_4ba9 <= bVar7)))
     ) {
    DAT_0aaf = 0;
    bVar7 = DAT_088d;
    DAT_088d = bVar7 & 0xbf;
  }
  cVar18 = DAT_0af7;
  if (cVar18 == '\0') {
    bVar7 = DAT_0aaf;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0aaf = bVar7;
    if (DAT_4baa <= bVar7) {
      bVar7 = DAT_088d;
      DAT_088d = bVar7 | 0x40;
    }
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9cbd:
    cVar18 = DAT_0d87;
    if (cVar18 == '\t') {
      bVar7 = DAT_08f4;
      if (((bVar7 < DAT_4c03) || (uVar9 = DAT_0992, (ushort)DAT_4c04 << 8 < uVar9)) ||
         ((uVar9 = DAT_0982, DAT_4c06 < uVar9 || (bVar7 = DAT_0881, (~bVar7 & 0x20) == 0)))) {
LAB_9d2a:
        cVar18 = '\0';
LAB_9d2b:
        DAT_0acf = cVar18;
        bVar7 = DAT_09a1;
        if (((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08a0, (~bVar7 & 0x20) != 0)) &&
            (bVar7 = DAT_08b0, (~bVar7 & 0x10) != 0)) &&
           (((bVar7 = DAT_08b0, (~bVar7 & 4) != 0 && (bVar7 = DAT_08b0, (~bVar7 & 2) != 0)) &&
            ((bVar7 = DAT_08b1, (~bVar7 & 0x80) != 0 && (bVar7 = DAT_08b1, (~bVar7 & 0x40) != 0)))))
           ) goto LAB_9d51;
      }
      else {
        cVar18 = DAT_0d87;
        if ((cVar18 != '\t') || (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) {
          bVar7 = DAT_0898;
          if ((&DAT_4e11)[bVar7] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        cVar18 = DAT_0acd;
        if (cVar18 == '\0') goto LAB_9d2a;
        FUN_a3b4();
        cVar18 = DAT_0ace;
        if (cVar18 == '\0') goto LAB_9d2a;
        bVar7 = DAT_0acf;
        if (bVar7 < DAT_4c02) {
          cVar18 = (bVar7 + 1) - (0xfe < bVar7);
          goto LAB_9d2b;
        }
        DAT_0acf = (bVar7 + 1) - (0xfe < bVar7);
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 2;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 | 0x80;
    }
    else {
LAB_9d51:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xfd;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 & 0x7f;
    }
  }
  else {
    cVar18 = DAT_0bdd;
    cVar15 = DAT_0d49;
    if (cVar18 != cVar15) goto LAB_9cbd;
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9d6e:
    if ((DAT_4e1b == 0xff) || (uVar9 = DAT_0a2e, (ushort)DAT_4e1b << 8 < uVar9)) {
      cVar18 = '\0';
    }
    else {
      bVar7 = DAT_0b91;
      if (DAT_4e95 <= bVar7) {
        bVar19 = DAT_0b90;
        DAT_0b90 = bVar19 | 0x80;
      }
      cVar18 = (bVar7 + 1) - (0xfe < bVar7);
    }
    DAT_0b91 = cVar18;
    uVar9 = DAT_0a2e;
    if (((ushort)DAT_4e1a << 8 < uVar9) && (DAT_4e1a != 0xff)) {
      bVar7 = DAT_0b90;
      if ((bVar7 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        cVar18 = DAT_0d87;
        if ((cVar18 != '\t') && (bVar7 = DAT_088c, (bVar7 & 0x80) != 0)) {
          bVar7 = DAT_0b90;
          DAT_0b90 = bVar7 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        bVar7 = DAT_0880;
        if ((~bVar7 & 1) != 0) goto LAB_9dc5;
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xef;
    }
    else {
LAB_9dc5:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 0x10;
    }
  }
  else {
    cVar18 = DAT_0bdd;
    cVar15 = DAT_0d4c;
    if (cVar18 != cVar15) goto LAB_9d6e;
  }
  bVar7 = DAT_0880;
  if (((bVar7 & 1) == 0) ||
     ((((bVar7 = DAT_08af, (~bVar7 & 0x40) != 0 && (bVar7 = DAT_08af, (~bVar7 & 2) != 0)) &&
       ((cVar18 = DAT_0dd9, cVar18 == -0x80 || (bVar7 = DAT_08b0, (~bVar7 & 8) != 0)))) &&
      (((bVar7 = DAT_08b1, (~bVar7 & 0x10) != 0 && (bVar7 = DAT_08b2, (~bVar7 & 0x80) != 0)) &&
       (bVar7 = DAT_08b4, (~bVar7 & 8) != 0)))))) {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 & 0xdf;
  }
  else {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 | 0x20;
  }
  bVar7 = DAT_0884;
  if ((bVar7 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    bVar7 = DAT_0b6f;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b6f = bVar7;
    if (DAT_4e38 <= bVar7) {
      bVar7 = DAT_0888;
      if ((~bVar7 & 8) == 0) {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 & 0xf7;
      }
      else {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 | 8;
      }
      goto LAB_9e24;
    }
  }
  bVar7 = DAT_0889;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0bd1;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0bd1 = bVar7;
    if (DAT_4e66 <= bVar7) {
      DAT_0bd1 = 0;
      bVar7 = DAT_0b94;
      DAT_0b94 = (bVar7 + 1) - (0xfe < bVar7);
    }
  }
  cVar18 = DAT_0b9a;
  if ((cVar18 != -1) && (uVar9 = DAT_0b98, DAT_4e3a <= uVar9)) {
    DAT_0b98 = 0;
    bVar7 = DAT_0b9a;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b9a = bVar7;
    if (4 < bVar7) {
      uVar16 = DAT_08af;
      DAT_08b8 = uVar16;
      uVar16 = DAT_08b0;
      DAT_08b9 = uVar16;
      uVar16 = DAT_08b1;
      DAT_08ba = uVar16;
      uVar16 = DAT_08b2;
      DAT_08bb = uVar16;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 8;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 4;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 2;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 1;
      DAT_0b9a = 0xff;
    }
    bVar7 = DAT_0be8;
    DAT_0be8 = bVar7 | 0x40;
  }
  cVar18 = DAT_0dd5;
  if ((cVar18 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0a;
    DAT_0d0a = (bVar7 + 1) - (0xfe < bVar7);
  }
  cVar18 = DAT_0dd5;
  if ((cVar18 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0b;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0d0b = bVar7;
    if (bVar7 <= DAT_4f16) {
      bVar3 = DAT_0d09;
      bVar17 = DAT_0ab3;
      bVar19 = bVar3 + bVar17;
      if (CARRY1(bVar3,bVar17)) {
        bVar19 = 0xff;
      }
      DAT_0d09 = bVar19;
      if ((DAT_4f16 <= bVar7) && (bVar19 <= DAT_4e84)) {
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 1;
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 8;
      }
    }
  }
  bVar7 = DAT_08d9;
  uVar9 = (ushort)bVar7 * 0x100;
  bVar7 = DAT_0881;
  if ((~bVar7 & 0x10) != 0) {
    uVar11 = DAT_08da;
    uVar10 = uVar9 - uVar11;
    if (uVar9 < uVar11) {
      uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),
                                       -(char)uVar10),&UNK_18b2);
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    else {
      uVar9 = scale_u16_by_u8(uVar10,&UNK_18b2);
    }
    sVar8 = DAT_08da;
    uVar9 = uVar9 + sVar8;
  }
  DAT_08da = uVar9;
  cVar18 = DAT_0d87;
  if (cVar18 != '\t') {
    bVar7 = DAT_088d;
    if (((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
        ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
         ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
       ((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 &&
        ((((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar9 = DAT_0900, DAT_4e1e <= uVar9)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)) && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x80;
      bVar7 = DAT_0adc;
      if (DAT_4e2a <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x80;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0x7f;
      DAT_0adc = 0;
    }
  }
  cVar18 = DAT_0d87;
  if (cVar18 != '\t') {
    bVar7 = DAT_08ec;
    if ((DAT_4e28 < bVar7) || (bVar7 = DAT_0abe, DAT_4e2b < bVar7)) {
      bVar7 = DAT_0ada;
      DAT_0ada = bVar7 & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) != 0) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x20;
      }
      bVar7 = DAT_0ada;
      if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
         ((uVar9 = DAT_0900, DAT_4e20 <= uVar9 &&
          ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0xf3 | 0x70;
      }
      else {
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x10) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xef;
          DAT_0ae1 = 0;
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x40) != 0) {
          bVar7 = DAT_0ada;
          if ((~bVar7 & 8) != 0) {
            bVar7 = DAT_0ada;
            if (((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08b1, (bVar7 & 0x20) == 0)) ||
                (uVar9 = DAT_0900, DAT_4e22 < uVar9)) ||
               ((bVar7 = DAT_08af, (~bVar7 & 8) == 0 || (bVar7 = DAT_08af, (~bVar7 & 4) == 0))))
            goto LAB_a04f;
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 | 8;
          }
          bVar7 = DAT_0ada;
          if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
             ((uVar9 = DAT_0900, uVar9 < DAT_4e20 &&
              ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 & 0xef | 100;
            goto LAB_a04f;
          }
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 4) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xfb;
          DAT_0ae1 = 0;
        }
      }
    }
  }
LAB_a04f:
  cVar18 = DAT_0d87;
  if (cVar18 != '\t') {
    bVar7 = DAT_088d;
    if (((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
        ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
         ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
       (((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 &&
         (((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar9 = DAT_0900, uVar9 < DAT_4e24)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)))) &&
        (((bVar7 = DAT_08af, (~bVar7 & 4) != 0 && (sVar8 = DAT_0ad6, sVar8 == 0)) &&
         (cVar18 = DAT_0ad9, cVar18 == '\0')))))) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x40;
      bVar7 = DAT_0add;
      if (DAT_4e31 <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = 0;
        DAT_0ae1 = 0;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xbf;
      DAT_0add = 0;
    }
  }
  cVar18 = DAT_0d87;
  if (cVar18 != '\t') {
    cVar18 = DAT_0d5f;
    if (cVar18 != -0x80) {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) == 0) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 & 0xdf;
        DAT_0ade = 0;
      }
      else {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 0x20;
        bVar7 = DAT_0ade;
        if ((DAT_4e57 <= bVar7) && (bVar7 = DAT_08b1, (~bVar7 & 0x20) != 0)) {
          bVar7 = DAT_08b1;
          DAT_08b1 = bVar7 | 0x20;
          bVar7 = DAT_0bd2;
          DAT_0bd2 = bVar7 | 0x20;
          bVar7 = DAT_08ba;
          if ((~bVar7 & 0x20) != 0) {
            bVar7 = DAT_08ba;
            DAT_08ba = bVar7 | 0x20;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 2;
          }
        }
      }
    }
    bVar7 = DAT_0881;
    if ((bVar7 & 0x10) == 0) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x10;
      bVar7 = DAT_0adf;
      if (((DAT_4e57 <= bVar7) &&
          (((bVar7 = DAT_088d, (~bVar7 & 0x20) == 0 || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
           ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
            ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))))) &&
         (((bVar7 = DAT_0ada, (~bVar7 & 0x80) == 0 || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
          ((((((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 && (bVar7 = DAT_0abe, bVar7 <= DAT_4e29)) &&
              (uVar9 = DAT_0900, uVar9 < DAT_4e24)) &&
             ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))) &&
            (sVar8 = DAT_0ad6, sVar8 == 0)) && (cVar18 = DAT_0ad9, cVar18 == '\0')))))) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 8;
        bVar7 = DAT_0ae0;
        if (DAT_4e31 <= bVar7) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0x7f;
          cVar18 = DAT_0d5f;
          if ((cVar18 != -0x80) && (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) {
            bVar7 = DAT_08b1;
            DAT_08b1 = bVar7 & 0xdf;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 0x20;
          }
        }
        goto LAB_a1ae;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xef;
      DAT_0adf = 0;
    }
    bVar7 = DAT_0adb;
    DAT_0adb = bVar7 & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  FUN_5fc8();
  bVar7 = DAT_0891;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a1d9:
      bVar7 = DAT_0bd3;
      if (bVar7 == 0) {
LAB_a20e:
        bVar7 = DAT_0be9;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) != 0) goto LAB_a296;
          if ((bVar7 & 0x40) != 0) goto LAB_a2af;
          if ((bVar7 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
          FUN_b7b9();
        }
      }
      else {
        if ((bVar7 & 0x80) != 0) goto LAB_a282;
        if ((bVar7 & 0x40) != 0) goto LAB_a287;
        if ((bVar7 & 0x20) != 0) goto LAB_a28c;
        if ((bVar7 & 0x10) != 0) goto LAB_a291;
        if ((bVar7 & 8) != 0) goto LAB_a29b;
        if ((bVar7 & 4) != 0) goto LAB_a2a0;
        if ((bVar7 & 2) != 0) goto LAB_a2a5;
        if ((bVar7 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
        FUN_b721();
      }
    }
    else {
      bVar7 = DAT_0890;
      if ((~bVar7 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_0890;
        if ((~bVar7 & 0x40) != 0) goto LAB_a1d9;
        FUN_b4c6();
      }
    }
  }
  else {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a24a:
      bVar7 = DAT_0bd2;
      if (bVar7 == 0) {
LAB_a26f:
        bVar7 = DAT_0be8;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) == 0) {
            if ((bVar7 & 0x40) == 0) {
              if ((bVar7 & 4) != 0) goto LAB_a2b4;
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
      else if ((bVar7 & 0x80) == 0) {
        if ((bVar7 & 0x40) == 0) {
          if ((bVar7 & 0x20) == 0) {
            if ((bVar7 & 0x10) == 0) {
              if ((bVar7 & 8) == 0) {
                if ((bVar7 & 4) == 0) {
                  if ((bVar7 & 2) == 0) {
                    if ((bVar7 & 1) != 0) goto LAB_a2aa;
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
    else {
      bVar7 = DAT_088f;
      if ((~bVar7 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_088f;
        if ((~bVar7 & 0x40) != 0) goto LAB_a24a;
        FUN_b4c6();
      }
    }
  }
LAB_a2b9:
  bVar7 = DAT_0000;
  bVar7 = bVar7 & 0xe0;
  if (bVar7 == 0x80) {
    bVar7 = DAT_08b1;
    if (((bVar7 & 0x80) != 0x80) || (bVar7 = DAT_0000, (bVar7 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar7 != 0) {
    if (((bVar7 == 0x40) && (bVar7 = DAT_08b1, (bVar7 & 0x80) == 0x80)) &&
       (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  bVar7 = DAT_08b1;
  if (((bVar7 & 0x80) == 0x80) && (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  bVar7 = DAT_08bc;
  DAT_08bc = bVar7 & 0xf7;
  return;
}


/* Entry 96f7 */

void candidate_unreferenced_96f7(void)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  ushort uVar9;
  byte bVar12;
  undefined2 uVar10;
  char cVar13;
  short sVar11;
  byte bVar14;
  
  bVar8 = DAT_0880;
  DAT_0880 = bVar8 | 4;
  bVar8 = DAT_0b20;
  DAT_0b20 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b1e;
  DAT_0b1e = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b1f;
  DAT_0b1f = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b1d;
  DAT_0b1d = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0afd;
  DAT_0afd = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) == 0) {
    cVar13 = '\0';
  }
  else {
    bVar8 = DAT_0afe;
    cVar13 = (bVar8 + 1) - (0xfe < bVar8);
  }
  DAT_0afe = cVar13;
  bVar8 = DAT_0880;
  if (((~bVar8 & 1) == 0) || (bVar8 = DAT_0885, (~bVar8 & 0x40) == 0)) {
    bVar8 = DAT_0b5d;
    cVar13 = (bVar8 + 1) - (0xfe < bVar8);
  }
  else {
    cVar13 = '\0';
  }
  DAT_0b5d = cVar13;
  bVar8 = DAT_09a1;
  if ((~bVar8 & 1) == 0) {
    bVar8 = DAT_09aa;
    DAT_09aa = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09ab = 0;
  }
  else {
    bVar8 = DAT_09ab;
    DAT_09ab = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09aa = 0;
  }
  bVar8 = DAT_091b;
  DAT_091b = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091c;
  DAT_091c = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091d;
  DAT_091d = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091e;
  DAT_091e = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091f;
  DAT_091f = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0920;
  DAT_0920 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b09;
  DAT_0b09 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0893;
  if ((bVar8 & 0x80) == 0) {
LAB_9802:
    bVar8 = 0;
  }
  else {
    bVar8 = DAT_0be7;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    if (DAT_4f15 < bVar8) {
      bVar8 = DAT_0893;
      DAT_0893 = bVar8 & 0x7f;
      goto LAB_9802;
    }
  }
  DAT_0be7 = bVar8;
  bVar8 = DAT_0900._0_1_;
  uVar7 = DAT_4b9e;
  if (bVar8 < DAT_4b9c) {
    uVar7 = DAT_4b9d;
  }
  DAT_0a9f = uVar7;
  bVar8 = DAT_08ce._0_1_;
  bVar14 = DAT_0a9e;
  if ((bVar8 < bVar14) || ((byte)(bVar8 - bVar14) < DAT_4b99)) {
    DAT_0a9d = 0;
LAB_984d:
    cVar13 = DAT_0aa0;
    if ((cVar13 == '\0') || (DAT_0aa0 = cVar13 + -1, (char)(cVar13 + -1) == '\0')) {
      DAT_0aa0 = DAT_4b9a;
      bVar8 = DAT_0a9c;
      bVar14 = bVar8 - DAT_4b9b;
      if (bVar8 < DAT_4b9b) {
        bVar14 = 0;
      }
      goto LAB_986d;
    }
  }
  else {
    bVar12 = DAT_0a9f;
    sVar11 = (ushort)(byte)((bVar8 - bVar14) - DAT_4b99) * (ushort)bVar12;
    if ((char)((ushort)sVar11 >> 8) != '\0') {
      sVar11 = 0xff;
    }
    bVar14 = (byte)sVar11;
    DAT_0a9d = bVar14;
    bVar8 = DAT_0a9c;
    if ((bVar14 < bVar8) || (bVar14 == bVar8)) goto LAB_984d;
    if (DAT_4b9f <= bVar14) {
      bVar14 = DAT_4b9f;
    }
LAB_986d:
    DAT_0a9c = bVar14;
  }
  uVar7 = DAT_08ce._0_1_;
  DAT_0a9e = uVar7;
  uVar2 = DAT_0900;
  uVar3 = DAT_0aa8;
  uVar9 = uVar2 - uVar3;
  if (uVar2 < uVar3) {
    uVar9 = scale_u16_by_u8_rounded
                      (CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                -(char)uVar9),&UNK_4af6);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = scale_u16_by_u8_rounded(uVar9,&UNK_4af6);
  }
  sVar11 = DAT_0aa8;
  DAT_0aa8 = uVar9 + sVar11;
  bVar8 = DAT_0af7;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0aaa;
    DAT_0aaa = (bVar8 + 1) - (0xfe < bVar8);
    bVar8 = DAT_0aab;
    DAT_0aab = (bVar8 + 1) - (0xfe < bVar8);
  }
  bVar8 = DAT_0abe;
  if ((DAT_4af7 < bVar8) && (bVar8 < DAT_4af8)) {
    bVar8 = DAT_0aa6;
    DAT_0aa6 = bVar8 | 0x80;
  }
  else {
    bVar8 = DAT_0aa6;
    DAT_0aa6 = bVar8 & 0x7f;
    bVar8 = DAT_0aa6;
    if ((bVar8 & 0x40) != 0) {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xdf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  bVar8 = DAT_0aa6;
  if ((((~bVar8 & 8) != 0) && (bVar8 = DAT_0aa6, (~bVar8 & 4) != 0)) &&
     (bVar8 = DAT_0aa6, (~bVar8 & 2) != 0)) {
    cVar13 = DAT_0d87;
    if (cVar13 == '\t') {
      cVar13 = DAT_0898;
      if (cVar13 == DAT_4af9) {
        bVar8 = DAT_0aaa;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x20;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 8;
          FUN_997a();
          return;
        }
      }
      else {
        DAT_0aaa = 0;
        bVar8 = DAT_0aa6;
        if ((bVar8 & 0x20) != 0) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xdf;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xf7;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xbf;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 2;
          goto LAB_9a25;
        }
      }
    }
    else {
      bVar8 = DAT_0aa8._0_1_;
      if ((bVar8 < DAT_4afb) || (DAT_4afc <= bVar8)) {
        DAT_0aaa = 0;
        bVar8 = DAT_0aa6;
        if ((bVar8 & 0x20) != 0) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xdf;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xf7;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xbf;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 2;
          goto LAB_9a25;
        }
      }
      else {
        bVar8 = DAT_0aaa;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x20;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 8;
          FUN_997a();
          return;
        }
      }
    }
    cVar13 = DAT_0d87;
    if (cVar13 == '\t') {
      cVar13 = DAT_0898;
      if (cVar13 == DAT_4afa) {
        bVar8 = DAT_0aab;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x10;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 4;
        }
LAB_99b5:
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      bVar8 = DAT_0aa6;
      if ((bVar8 & 0x10) == 0) goto LAB_99b5;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      bVar8 = DAT_0aa7;
      DAT_0aa7 = bVar8 & 0xfb;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
    }
    else {
      bVar8 = DAT_0aa8._0_1_;
      if ((DAT_4afe <= bVar8) && (bVar8 < DAT_4aff)) {
        bVar8 = DAT_0aab;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x10;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 4;
        }
LAB_99f2:
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      bVar8 = DAT_0aa6;
      if ((bVar8 & 0x10) == 0) goto LAB_99f2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      bVar8 = DAT_0aa7;
      DAT_0aa7 = bVar8 & 0xfb;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
    }
  }
LAB_9a25:
  bVar8 = DAT_0aa6;
  if ((bVar8 & 8) != 0) {
    bVar8 = DAT_0aaa;
    if (bVar8 < DAT_4b01) {
      bVar8 = DAT_08e8._0_1_;
      if (DAT_4b02 <= bVar8) {
        DAT_0aaa = 0;
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 | 4;
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 & 0xf7;
      }
    }
    else {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xdf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xf7;
    }
  }
  bVar8 = DAT_0aa6;
  if ((bVar8 & 4) != 0) {
    bVar8 = DAT_0aa7;
    bVar14 = DAT_4b05;
    if ((bVar8 & 8) != 0) {
      bVar14 = DAT_4b04;
    }
    DAT_0aac = bVar14;
    bVar8 = DAT_08e8._0_1_;
    if ((bVar8 < DAT_4b02) || (bVar8 = DAT_0aaa, DAT_4b06 <= bVar8)) {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 1;
      bVar8 = DAT_0aa7;
      DAT_0aa7 = bVar8 | 2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xfb;
    }
  }
  bVar8 = DAT_0aa6;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0aa6;
    if ((bVar8 & 1) != 0) {
      bVar8 = DAT_0aae;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0aae = bVar8;
      if (DAT_4b07 <= bVar8) {
        DAT_0aae = 0;
        bVar8 = DAT_0aad;
        DAT_0aad = (bVar8 + 1) - (0xfe < bVar8);
        bVar8 = DAT_0aa7;
        if ((bVar8 & 2) != 0) {
          bVar8 = DAT_0aa7;
          bVar14 = DAT_4b05;
          if ((bVar8 & 8) != 0) {
            bVar14 = DAT_4b04;
          }
          bVar12 = DAT_0aad;
          bVar8 = bVar14 + bVar12;
          if (CARRY1(bVar14,bVar12)) {
            bVar8 = 0xff;
          }
          bVar14 = DAT_0a83;
          if (bVar8 < bVar14) {
            DAT_0aac = bVar8;
          }
          else {
            bVar8 = DAT_0aa7;
            DAT_0aa7 = bVar8 & 0xfd;
          }
        }
        bVar8 = DAT_0aa7;
        if ((~bVar8 & 2) != 0) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xfe;
          DAT_0aad = 0;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xf7;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xfb;
        }
      }
    }
    bVar8 = DAT_0aa6;
    if ((~bVar8 & 1) != 0) {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  uVar10 = DAT_0ab4;
  DAT_0ab6 = uVar10;
  sVar11 = DAT_0ab0;
  DAT_0ab4 = sVar11;
  sVar4 = DAT_0ab6;
  sVar11 = sVar11 - sVar4;
  bVar8 = DAT_0ab2;
  if ((~bVar8 & 4) != 0) {
    sVar11 = 0;
  }
  if ((char)((ushort)sVar11 >> 8) != '\0') {
    sVar11 = 0xff;
  }
  DAT_0ab3 = (char)sVar11;
  bVar8 = DAT_0ab2;
  DAT_0ab2 = bVar8 | 4;
  bVar8 = DAT_0ab3;
  iVar1 = (uint)DAT_4bd4 * (uint)bVar8;
  DAT_0dde = (short)((uint)iVar1 >> 0x10);
  bVar8 = DAT_0aba;
  bVar12 = (byte)iVar1;
  bVar14 = (byte)((uint)iVar1 >> 8);
  DAT_0de0 = CONCAT11(bVar14 - (bVar12 < bVar8),bVar12 - bVar8);
  if (bVar14 < (bVar12 < bVar8)) {
    cVar13 = DAT_0dde._1_1_;
    if (cVar13 == '\x01') goto LAB_9b9a;
    if (cVar13 != '\0') goto LAB_9b48;
    uVar10 = DAT_0de0;
    iVar1 = (uint)DAT_4bd6 *
            (uint)CONCAT11((~(byte)((ushort)uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),
                           -(char)uVar10);
    uVar10 = (undefined2)iVar1;
    if ((short)((uint)iVar1 >> 0x10) != 0) {
      uVar10 = 0xffff;
    }
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)uVar10 >> 8);
    bVar12 = (byte)uVar10;
    if ((bVar8 & 1) == 0) {
      bVar5 = DAT_0ab8._1_1_;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9b87;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfe;
    }
    else {
      bVar8 = DAT_0ab8._1_1_;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9b87:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 1;
    }
    DAT_0ab8 = uVar10;
  }
  else {
    cVar13 = DAT_0dde._1_1_;
    if (cVar13 != '\0') {
LAB_9b48:
      DAT_0de0 = 0xffff;
    }
LAB_9b9a:
    uVar9 = DAT_0de0;
    uVar10 = (undefined2)((uint)DAT_4bd6 * (uint)uVar9);
    if ((short)((uint)DAT_4bd6 * (uint)uVar9 >> 0x10) != 0) {
      uVar10 = 0xffff;
    }
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)uVar10 >> 8);
    bVar12 = (byte)uVar10;
    if ((bVar8 & 1) == 0) {
      bVar8 = DAT_0ab8._1_1_;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9bcc:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfe;
    }
    else {
      bVar5 = DAT_0ab8._1_1_;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9bcc;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 1;
    }
    DAT_0ab8 = uVar10;
  }
  bVar14 = DAT_0aba;
  bVar8 = DAT_0ab2;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0ab8._0_1_;
    cVar13 = bVar14 + bVar8;
    if (CARRY1(bVar14,bVar8)) {
      cVar13 = -1;
    }
  }
  else {
    bVar8 = DAT_0ab8._0_1_;
    cVar13 = bVar14 - bVar8;
    if (bVar14 < bVar8) {
      cVar13 = '\0';
    }
  }
  DAT_0aba = cVar13;
  bVar8 = DAT_0aba;
  bVar14 = DAT_0abe;
  if (bVar8 < bVar14) {
    sVar11 = (ushort)(byte)-(bVar8 - bVar14) * (ushort)DAT_4bd6;
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)sVar11 >> 8);
    bVar12 = (byte)sVar11;
    if ((bVar8 & 2) == 0) {
      bVar5 = DAT_0abd;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9c13;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfd;
    }
    else {
      bVar8 = DAT_0abd;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9c13:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 2;
    }
    RAM0abc = uVar10;
  }
  else {
    sVar11 = (ushort)(byte)(bVar8 - bVar14) * (ushort)DAT_4bd6;
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)sVar11 >> 8);
    bVar12 = (byte)sVar11;
    if ((bVar8 & 2) == 0) {
      bVar8 = DAT_0abd;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9c4a:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfd;
    }
    else {
      bVar5 = DAT_0abd;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9c4a;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 2;
    }
    RAM0abc = uVar10;
  }
  bVar14 = DAT_0abe;
  bVar8 = DAT_0ab2;
  if ((bVar8 & 2) == 0) {
    bVar8 = DAT_0abc;
    cVar13 = bVar14 + bVar8;
    if (CARRY1(bVar14,bVar8)) {
      cVar13 = -1;
    }
  }
  else {
    bVar8 = DAT_0abc;
    cVar13 = bVar14 - bVar8;
    if (bVar14 < bVar8) {
      cVar13 = '\0';
    }
  }
  DAT_0abe = cVar13;
  if ((DAT_4ba7 != -0x80) ||
     ((((cVar13 = DAT_0d87, cVar13 == '\t' && (bVar8 = DAT_0896._0_1_, (~bVar8 & 0x10) == 0)) ||
       (bVar8 = DAT_0900._0_1_, DAT_4ba8 <= bVar8)) || (bVar8 = DAT_08ce._0_1_, DAT_4ba9 <= bVar8)))
     ) {
    DAT_0aaf = 0;
    bVar8 = DAT_088d;
    DAT_088d = bVar8 & 0xbf;
  }
  cVar13 = DAT_0af7;
  if (cVar13 == '\0') {
    bVar8 = DAT_0aaf;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0aaf = bVar8;
    if (DAT_4baa <= bVar8) {
      bVar8 = DAT_088d;
      DAT_088d = bVar8 | 0x40;
    }
  }
  bVar8 = DAT_08a0;
  if ((bVar8 & 4) == 0) {
LAB_9cbd:
    cVar13 = DAT_0d87;
    if (cVar13 == '\t') {
      bVar8 = DAT_08f4;
      if (((bVar8 < DAT_4c03) || (uVar9 = DAT_0992, (ushort)DAT_4c04 << 8 < uVar9)) ||
         ((uVar9 = DAT_0982, DAT_4c06 < uVar9 || (bVar8 = DAT_0881, (~bVar8 & 0x20) == 0)))) {
LAB_9d2a:
        cVar13 = '\0';
LAB_9d2b:
        DAT_0acf = cVar13;
        bVar8 = DAT_09a1;
        if (((((~bVar8 & 0x80) != 0) && (bVar8 = DAT_08a0, (~bVar8 & 0x20) != 0)) &&
            (bVar8 = DAT_08b0, (~bVar8 & 0x10) != 0)) &&
           (((bVar8 = DAT_08b0, (~bVar8 & 4) != 0 && (bVar8 = DAT_08b0, (~bVar8 & 2) != 0)) &&
            ((bVar8 = DAT_08b1, (~bVar8 & 0x80) != 0 && (bVar8 = DAT_08b1, (~bVar8 & 0x40) != 0)))))
           ) goto LAB_9d51;
      }
      else {
        cVar13 = DAT_0d87;
        if ((cVar13 != '\t') || (bVar8 = DAT_0896._0_1_, (~bVar8 & 0x10) == 0)) {
          bVar8 = DAT_0898;
          if ((&DAT_4e11)[bVar8] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        cVar13 = DAT_0acd;
        if (cVar13 == '\0') goto LAB_9d2a;
        FUN_a3b4();
        cVar13 = DAT_0ace;
        if (cVar13 == '\0') goto LAB_9d2a;
        bVar8 = DAT_0acf;
        if (bVar8 < DAT_4c02) {
          cVar13 = (bVar8 + 1) - (0xfe < bVar8);
          goto LAB_9d2b;
        }
        DAT_0acf = (bVar8 + 1) - (0xfe < bVar8);
      }
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 | 2;
      bVar8 = DAT_0889;
      DAT_0889 = bVar8 | 0x80;
    }
    else {
LAB_9d51:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xfd;
      bVar8 = DAT_0889;
      DAT_0889 = bVar8 & 0x7f;
    }
  }
  else {
    cVar13 = DAT_0bdd;
    cVar6 = DAT_0d49;
    if (cVar13 != cVar6) goto LAB_9cbd;
  }
  bVar8 = DAT_08a0;
  if ((bVar8 & 4) == 0) {
LAB_9d6e:
    if ((DAT_4e1b == 0xff) || (uVar9 = DAT_0a2e, (ushort)DAT_4e1b << 8 < uVar9)) {
      cVar13 = '\0';
    }
    else {
      bVar8 = DAT_0b91;
      if (DAT_4e95 <= bVar8) {
        bVar14 = DAT_0b90;
        DAT_0b90 = bVar14 | 0x80;
      }
      cVar13 = (bVar8 + 1) - (0xfe < bVar8);
    }
    DAT_0b91 = cVar13;
    uVar9 = DAT_0a2e;
    if (((ushort)DAT_4e1a << 8 < uVar9) && (DAT_4e1a != 0xff)) {
      bVar8 = DAT_0b90;
      if ((bVar8 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        cVar13 = DAT_0d87;
        if ((cVar13 != '\t') && (bVar8 = DAT_088c, (bVar8 & 0x80) != 0)) {
          bVar8 = DAT_0b90;
          DAT_0b90 = bVar8 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        bVar8 = DAT_0880;
        if ((~bVar8 & 1) != 0) goto LAB_9dc5;
      }
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xef;
    }
    else {
LAB_9dc5:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 | 0x10;
    }
  }
  else {
    cVar13 = DAT_0bdd;
    cVar6 = DAT_0d4c;
    if (cVar13 != cVar6) goto LAB_9d6e;
  }
  bVar8 = DAT_0880;
  if (((bVar8 & 1) == 0) ||
     ((((bVar8 = DAT_08af, (~bVar8 & 0x40) != 0 && (bVar8 = DAT_08af, (~bVar8 & 2) != 0)) &&
       ((cVar13 = DAT_0dd9, cVar13 == -0x80 || (bVar8 = DAT_08b0, (~bVar8 & 8) != 0)))) &&
      (((bVar8 = DAT_08b1, (~bVar8 & 0x10) != 0 && (bVar8 = DAT_08b2, (~bVar8 & 0x80) != 0)) &&
       (bVar8 = DAT_08b4, (~bVar8 & 8) != 0)))))) {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 & 0xdf;
  }
  else {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 | 0x20;
  }
  bVar8 = DAT_0884;
  if ((bVar8 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    bVar8 = DAT_0b6f;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0b6f = bVar8;
    if (DAT_4e38 <= bVar8) {
      bVar8 = DAT_0888;
      if ((~bVar8 & 8) == 0) {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 & 0xf7;
      }
      else {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 | 8;
      }
      goto LAB_9e24;
    }
  }
  bVar8 = DAT_0889;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0bd1;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0bd1 = bVar8;
    if (DAT_4e66 <= bVar8) {
      DAT_0bd1 = 0;
      bVar8 = DAT_0b94;
      DAT_0b94 = (bVar8 + 1) - (0xfe < bVar8);
    }
  }
  cVar13 = DAT_0b9a;
  if ((cVar13 != -1) && (uVar9 = DAT_0b98, DAT_4e3a <= uVar9)) {
    DAT_0b98 = 0;
    bVar8 = DAT_0b9a;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0b9a = bVar8;
    if (4 < bVar8) {
      uVar7 = DAT_08af;
      DAT_08b8 = uVar7;
      uVar7 = DAT_08b0;
      DAT_08b9 = uVar7;
      uVar7 = DAT_08b1;
      DAT_08ba = uVar7;
      uVar7 = DAT_08b2;
      DAT_08bb = uVar7;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 8;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 4;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 2;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 1;
      DAT_0b9a = 0xff;
    }
    bVar8 = DAT_0be8;
    DAT_0be8 = bVar8 | 0x40;
  }
  cVar13 = DAT_0dd5;
  if ((cVar13 != -0x80) && (bVar8 = DAT_0d06, (~bVar8 & 0x80) != 0)) {
    bVar8 = DAT_0d0a;
    DAT_0d0a = (bVar8 + 1) - (0xfe < bVar8);
  }
  cVar13 = DAT_0dd5;
  if ((cVar13 != -0x80) && (bVar8 = DAT_0d06, (~bVar8 & 0x80) != 0)) {
    bVar8 = DAT_0d0b;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0d0b = bVar8;
    if (bVar8 <= DAT_4f16) {
      bVar5 = DAT_0d09;
      bVar12 = DAT_0ab3;
      bVar14 = bVar5 + bVar12;
      if (CARRY1(bVar5,bVar12)) {
        bVar14 = 0xff;
      }
      DAT_0d09 = bVar14;
      if ((DAT_4f16 <= bVar8) && (bVar14 <= DAT_4e84)) {
        bVar8 = DAT_0d08;
        DAT_0d08 = bVar8 | 1;
        bVar8 = DAT_0d08;
        DAT_0d08 = bVar8 | 8;
      }
    }
  }
  bVar8 = DAT_08d9;
  uVar9 = (ushort)bVar8 * 0x100;
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) != 0) {
    uVar3 = DAT_08da;
    uVar2 = uVar9 - uVar3;
    if (uVar9 < uVar3) {
      uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar2 >> 8) + 1) - ((char)-(char)uVar2 != '\0'),
                                       -(char)uVar2),&UNK_18b2);
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    else {
      uVar9 = scale_u16_by_u8(uVar2,&UNK_18b2);
    }
    sVar11 = DAT_08da;
    uVar9 = uVar9 + sVar11;
  }
  DAT_08da = uVar9;
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    bVar8 = DAT_088d;
    if (((((~bVar8 & 0x20) == 0) || (bVar8 = DAT_0885, (~bVar8 & 0x20) == 0)) ||
        ((bVar8 = DAT_0889, (~bVar8 & 2) != 0 &&
         ((bVar8 = DAT_0880, (~bVar8 & 4) != 0 && (bVar8 = DAT_0aa6, (~bVar8 & 4) != 0)))))) &&
       ((bVar8 = DAT_08ec, bVar8 <= DAT_4e28 &&
        ((((bVar8 = DAT_0abe, bVar8 <= DAT_4e29 && (uVar9 = DAT_0900, DAT_4e1e <= uVar9)) &&
          (bVar8 = DAT_08af, (~bVar8 & 8) != 0)) && (bVar8 = DAT_08af, (~bVar8 & 4) != 0)))))) {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 | 0x80;
      bVar8 = DAT_0adc;
      if (DAT_4e2a <= bVar8) {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 | 0x80;
      }
    }
    else {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 & 0x7f;
      DAT_0adc = 0;
    }
  }
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    bVar8 = DAT_08ec;
    if ((DAT_4e28 < bVar8) || (bVar8 = DAT_0abe, DAT_4e2b < bVar8)) {
      bVar8 = DAT_0ada;
      DAT_0ada = bVar8 & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      bVar8 = DAT_0ada;
      if ((bVar8 & 0x40) != 0) {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 | 0x20;
      }
      bVar8 = DAT_0ada;
      if ((((~bVar8 & 0x80) == 0) || (bVar8 = DAT_08b1, (bVar8 & 0x20) != 0)) &&
         ((uVar9 = DAT_0900, DAT_4e20 <= uVar9 &&
          ((bVar8 = DAT_08af, (~bVar8 & 8) != 0 && (bVar8 = DAT_08af, (~bVar8 & 4) != 0)))))) {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 & 0xf3 | 0x70;
      }
      else {
        bVar8 = DAT_0ada;
        if ((bVar8 & 0x10) != 0) {
          bVar8 = DAT_0ada;
          DAT_0ada = bVar8 & 0xef;
          DAT_0ae1 = 0;
        }
        bVar8 = DAT_0ada;
        if ((bVar8 & 0x40) != 0) {
          bVar8 = DAT_0ada;
          if ((~bVar8 & 8) != 0) {
            bVar8 = DAT_0ada;
            if (((((~bVar8 & 0x80) != 0) && (bVar8 = DAT_08b1, (bVar8 & 0x20) == 0)) ||
                (uVar9 = DAT_0900, DAT_4e22 < uVar9)) ||
               ((bVar8 = DAT_08af, (~bVar8 & 8) == 0 || (bVar8 = DAT_08af, (~bVar8 & 4) == 0))))
            goto LAB_a04f;
            bVar8 = DAT_0ada;
            DAT_0ada = bVar8 | 8;
          }
          bVar8 = DAT_0ada;
          if ((((~bVar8 & 0x80) == 0) || (bVar8 = DAT_08b1, (bVar8 & 0x20) != 0)) &&
             ((uVar9 = DAT_0900, uVar9 < DAT_4e20 &&
              ((bVar8 = DAT_08af, (~bVar8 & 8) != 0 && (bVar8 = DAT_08af, (~bVar8 & 4) != 0)))))) {
            bVar8 = DAT_0ada;
            DAT_0ada = bVar8 & 0xef | 100;
            goto LAB_a04f;
          }
        }
        bVar8 = DAT_0ada;
        if ((bVar8 & 4) != 0) {
          bVar8 = DAT_0ada;
          DAT_0ada = bVar8 & 0xfb;
          DAT_0ae1 = 0;
        }
      }
    }
  }
LAB_a04f:
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    bVar8 = DAT_088d;
    if (((((~bVar8 & 0x20) == 0) || (bVar8 = DAT_0885, (~bVar8 & 0x20) == 0)) ||
        ((bVar8 = DAT_0889, (~bVar8 & 2) != 0 &&
         ((bVar8 = DAT_0880, (~bVar8 & 4) != 0 && (bVar8 = DAT_0aa6, (~bVar8 & 4) != 0)))))) &&
       (((bVar8 = DAT_08ec, bVar8 <= DAT_4e28 &&
         (((bVar8 = DAT_0abe, bVar8 <= DAT_4e29 && (uVar9 = DAT_0900, uVar9 < DAT_4e24)) &&
          (bVar8 = DAT_08af, (~bVar8 & 8) != 0)))) &&
        (((bVar8 = DAT_08af, (~bVar8 & 4) != 0 && (sVar11 = DAT_0ad6, sVar11 == 0)) &&
         (cVar13 = DAT_0ad9, cVar13 == '\0')))))) {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 | 0x40;
      bVar8 = DAT_0add;
      if (DAT_4e31 <= bVar8) {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = 0;
        DAT_0ae1 = 0;
      }
    }
    else {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 & 0xbf;
      DAT_0add = 0;
    }
  }
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    cVar13 = DAT_0d5f;
    if (cVar13 != -0x80) {
      bVar8 = DAT_0ada;
      if ((bVar8 & 0x40) == 0) {
        bVar8 = DAT_0adb;
        DAT_0adb = bVar8 & 0xdf;
        DAT_0ade = 0;
      }
      else {
        bVar8 = DAT_0adb;
        DAT_0adb = bVar8 | 0x20;
        bVar8 = DAT_0ade;
        if ((DAT_4e57 <= bVar8) && (bVar8 = DAT_08b1, (~bVar8 & 0x20) != 0)) {
          bVar8 = DAT_08b1;
          DAT_08b1 = bVar8 | 0x20;
          bVar8 = DAT_0bd2;
          DAT_0bd2 = bVar8 | 0x20;
          bVar8 = DAT_08ba;
          if ((~bVar8 & 0x20) != 0) {
            bVar8 = DAT_08ba;
            DAT_08ba = bVar8 | 0x20;
            bVar8 = DAT_0bd2;
            DAT_0bd2 = bVar8 | 2;
          }
        }
      }
    }
    bVar8 = DAT_0881;
    if ((bVar8 & 0x10) == 0) {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 | 0x10;
      bVar8 = DAT_0adf;
      if ((DAT_4e57 <= bVar8) &&
         (((((bVar8 = DAT_088d, (~bVar8 & 0x20) == 0 || (bVar8 = DAT_0885, (~bVar8 & 0x20) == 0)) ||
            ((bVar8 = DAT_0889, (~bVar8 & 2) != 0 &&
             ((bVar8 = DAT_0880, (~bVar8 & 4) != 0 && (bVar8 = DAT_0aa6, (~bVar8 & 4) != 0)))))) &&
           ((bVar8 = DAT_0ada, (~bVar8 & 0x80) == 0 || (bVar8 = DAT_08b1, (bVar8 & 0x20) != 0)))) &&
          ((((((bVar8 = DAT_08ec, bVar8 <= DAT_4e28 && (bVar8 = DAT_0abe, bVar8 <= DAT_4e29)) &&
              (uVar9 = DAT_0900, uVar9 < DAT_4e24)) &&
             ((bVar8 = DAT_08af, (~bVar8 & 8) != 0 && (bVar8 = DAT_08af, (~bVar8 & 4) != 0)))) &&
            (sVar11 = DAT_0ad6, sVar11 == 0)) && (cVar13 = DAT_0ad9, cVar13 == '\0')))))) {
        bVar8 = DAT_0adb;
        DAT_0adb = bVar8 | 8;
        bVar8 = DAT_0ae0;
        if (DAT_4e31 <= bVar8) {
          bVar8 = DAT_0ada;
          DAT_0ada = bVar8 & 0x7f;
          cVar13 = DAT_0d5f;
          if ((cVar13 != -0x80) && (bVar8 = DAT_08b1, (bVar8 & 0x20) != 0)) {
            bVar8 = DAT_08b1;
            DAT_08b1 = bVar8 & 0xdf;
            bVar8 = DAT_0bd2;
            DAT_0bd2 = bVar8 | 0x20;
          }
        }
        goto LAB_a1ae;
      }
    }
    else {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 & 0xef;
      DAT_0adf = 0;
    }
    bVar8 = DAT_0adb;
    DAT_0adb = bVar8 & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  FUN_5fc8();
  bVar8 = DAT_0891;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0891;
    if ((bVar8 & 0x80) == 0) {
LAB_a1d9:
      bVar8 = DAT_0bd3;
      if (bVar8 == 0) {
LAB_a20e:
        bVar8 = DAT_0be9;
        if (bVar8 != 0) {
          if ((bVar8 & 0x80) != 0) goto LAB_a296;
          if ((bVar8 & 0x40) != 0) goto LAB_a2af;
          if ((bVar8 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
          FUN_b7b9();
        }
      }
      else {
        if ((bVar8 & 0x80) != 0) goto LAB_a282;
        if ((bVar8 & 0x40) != 0) goto LAB_a287;
        if ((bVar8 & 0x20) != 0) goto LAB_a28c;
        if ((bVar8 & 0x10) != 0) goto LAB_a291;
        if ((bVar8 & 8) != 0) goto LAB_a29b;
        if ((bVar8 & 4) != 0) goto LAB_a2a0;
        if ((bVar8 & 2) != 0) goto LAB_a2a5;
        if ((bVar8 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
        FUN_b721();
      }
    }
    else {
      bVar8 = DAT_0890;
      if ((~bVar8 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar8 = DAT_0890;
        if ((~bVar8 & 0x40) != 0) goto LAB_a1d9;
        FUN_b4c6();
      }
    }
  }
  else {
    bVar8 = DAT_0891;
    if ((bVar8 & 0x80) == 0) {
LAB_a24a:
      bVar8 = DAT_0bd2;
      if (bVar8 == 0) {
LAB_a26f:
        bVar8 = DAT_0be8;
        if (bVar8 != 0) {
          if ((bVar8 & 0x80) == 0) {
            if ((bVar8 & 0x40) == 0) {
              if ((bVar8 & 4) != 0) goto LAB_a2b4;
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
      else if ((bVar8 & 0x80) == 0) {
        if ((bVar8 & 0x40) == 0) {
          if ((bVar8 & 0x20) == 0) {
            if ((bVar8 & 0x10) == 0) {
              if ((bVar8 & 8) == 0) {
                if ((bVar8 & 4) == 0) {
                  if ((bVar8 & 2) == 0) {
                    if ((bVar8 & 1) != 0) goto LAB_a2aa;
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
    else {
      bVar8 = DAT_088f;
      if ((~bVar8 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar8 = DAT_088f;
        if ((~bVar8 & 0x40) != 0) goto LAB_a24a;
        FUN_b4c6();
      }
    }
  }
LAB_a2b9:
  bVar8 = DAT_0000;
  bVar8 = bVar8 & 0xe0;
  if (bVar8 == 0x80) {
    bVar8 = DAT_08b1;
    if (((bVar8 & 0x80) != 0x80) || (bVar8 = DAT_0000, (bVar8 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar8 != 0) {
    if (((bVar8 == 0x40) && (bVar8 = DAT_08b1, (bVar8 & 0x80) == 0x80)) &&
       (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  bVar8 = DAT_08b1;
  if (((bVar8 & 0x80) == 0x80) && (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  bVar8 = DAT_08bc;
  DAT_08bc = bVar8 & 0xf7;
  return;
}


/* Entry 96fd */

void candidate_unreferenced_96fd(void)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  ushort uVar9;
  byte bVar12;
  undefined2 uVar10;
  char cVar13;
  short sVar11;
  byte bVar14;
  
  bVar8 = DAT_0880;
  DAT_0880 = bVar8 & 0xfb;
  bVar8 = DAT_0b20;
  DAT_0b20 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b1e;
  DAT_0b1e = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b1f;
  DAT_0b1f = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b1d;
  DAT_0b1d = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0afd;
  DAT_0afd = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) == 0) {
    cVar13 = '\0';
  }
  else {
    bVar8 = DAT_0afe;
    cVar13 = (bVar8 + 1) - (0xfe < bVar8);
  }
  DAT_0afe = cVar13;
  bVar8 = DAT_0880;
  if (((~bVar8 & 1) == 0) || (bVar8 = DAT_0885, (~bVar8 & 0x40) == 0)) {
    bVar8 = DAT_0b5d;
    cVar13 = (bVar8 + 1) - (0xfe < bVar8);
  }
  else {
    cVar13 = '\0';
  }
  DAT_0b5d = cVar13;
  bVar8 = DAT_09a1;
  if ((~bVar8 & 1) == 0) {
    bVar8 = DAT_09aa;
    DAT_09aa = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09ab = 0;
  }
  else {
    bVar8 = DAT_09ab;
    DAT_09ab = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09aa = 0;
  }
  bVar8 = DAT_091b;
  DAT_091b = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091c;
  DAT_091c = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091d;
  DAT_091d = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091e;
  DAT_091e = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_091f;
  DAT_091f = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0920;
  DAT_0920 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b09;
  DAT_0b09 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0893;
  if ((bVar8 & 0x80) == 0) {
LAB_9802:
    bVar8 = 0;
  }
  else {
    bVar8 = DAT_0be7;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    if (DAT_4f15 < bVar8) {
      bVar8 = DAT_0893;
      DAT_0893 = bVar8 & 0x7f;
      goto LAB_9802;
    }
  }
  DAT_0be7 = bVar8;
  bVar8 = DAT_0900._0_1_;
  uVar7 = DAT_4b9e;
  if (bVar8 < DAT_4b9c) {
    uVar7 = DAT_4b9d;
  }
  DAT_0a9f = uVar7;
  bVar8 = DAT_08ce._0_1_;
  bVar14 = DAT_0a9e;
  if ((bVar8 < bVar14) || ((byte)(bVar8 - bVar14) < DAT_4b99)) {
    DAT_0a9d = 0;
LAB_984d:
    cVar13 = DAT_0aa0;
    if ((cVar13 == '\0') || (DAT_0aa0 = cVar13 + -1, (char)(cVar13 + -1) == '\0')) {
      DAT_0aa0 = DAT_4b9a;
      bVar8 = DAT_0a9c;
      bVar14 = bVar8 - DAT_4b9b;
      if (bVar8 < DAT_4b9b) {
        bVar14 = 0;
      }
      goto LAB_986d;
    }
  }
  else {
    bVar12 = DAT_0a9f;
    sVar11 = (ushort)(byte)((bVar8 - bVar14) - DAT_4b99) * (ushort)bVar12;
    if ((char)((ushort)sVar11 >> 8) != '\0') {
      sVar11 = 0xff;
    }
    bVar14 = (byte)sVar11;
    DAT_0a9d = bVar14;
    bVar8 = DAT_0a9c;
    if ((bVar14 < bVar8) || (bVar14 == bVar8)) goto LAB_984d;
    if (DAT_4b9f <= bVar14) {
      bVar14 = DAT_4b9f;
    }
LAB_986d:
    DAT_0a9c = bVar14;
  }
  uVar7 = DAT_08ce._0_1_;
  DAT_0a9e = uVar7;
  uVar2 = DAT_0900;
  uVar3 = DAT_0aa8;
  uVar9 = uVar2 - uVar3;
  if (uVar2 < uVar3) {
    uVar9 = scale_u16_by_u8_rounded
                      (CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                -(char)uVar9),&UNK_4af6);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = scale_u16_by_u8_rounded(uVar9,&UNK_4af6);
  }
  sVar11 = DAT_0aa8;
  DAT_0aa8 = uVar9 + sVar11;
  bVar8 = DAT_0af7;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0aaa;
    DAT_0aaa = (bVar8 + 1) - (0xfe < bVar8);
    bVar8 = DAT_0aab;
    DAT_0aab = (bVar8 + 1) - (0xfe < bVar8);
  }
  bVar8 = DAT_0abe;
  if ((DAT_4af7 < bVar8) && (bVar8 < DAT_4af8)) {
    bVar8 = DAT_0aa6;
    DAT_0aa6 = bVar8 | 0x80;
  }
  else {
    bVar8 = DAT_0aa6;
    DAT_0aa6 = bVar8 & 0x7f;
    bVar8 = DAT_0aa6;
    if ((bVar8 & 0x40) != 0) {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xdf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  bVar8 = DAT_0aa6;
  if ((((~bVar8 & 8) != 0) && (bVar8 = DAT_0aa6, (~bVar8 & 4) != 0)) &&
     (bVar8 = DAT_0aa6, (~bVar8 & 2) != 0)) {
    cVar13 = DAT_0d87;
    if (cVar13 == '\t') {
      cVar13 = DAT_0898;
      if (cVar13 == DAT_4af9) {
        bVar8 = DAT_0aaa;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x20;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 8;
          FUN_997a();
          return;
        }
      }
      else {
        DAT_0aaa = 0;
        bVar8 = DAT_0aa6;
        if ((bVar8 & 0x20) != 0) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xdf;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xf7;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xbf;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 2;
          goto LAB_9a25;
        }
      }
    }
    else {
      bVar8 = DAT_0aa8._0_1_;
      if ((bVar8 < DAT_4afb) || (DAT_4afc <= bVar8)) {
        DAT_0aaa = 0;
        bVar8 = DAT_0aa6;
        if ((bVar8 & 0x20) != 0) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xdf;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xf7;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xbf;
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 2;
          goto LAB_9a25;
        }
      }
      else {
        bVar8 = DAT_0aaa;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x20;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 8;
          FUN_997a();
          return;
        }
      }
    }
    cVar13 = DAT_0d87;
    if (cVar13 == '\t') {
      cVar13 = DAT_0898;
      if (cVar13 == DAT_4afa) {
        bVar8 = DAT_0aab;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x10;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 4;
        }
LAB_99b5:
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      bVar8 = DAT_0aa6;
      if ((bVar8 & 0x10) == 0) goto LAB_99b5;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      bVar8 = DAT_0aa7;
      DAT_0aa7 = bVar8 & 0xfb;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
    }
    else {
      bVar8 = DAT_0aa8._0_1_;
      if ((DAT_4afe <= bVar8) && (bVar8 < DAT_4aff)) {
        bVar8 = DAT_0aab;
        if (DAT_4afd <= bVar8) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 | 0x10;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 | 4;
        }
LAB_99f2:
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 | 0x40;
        FUN_99fd();
        return;
      }
      DAT_0aab = 0;
      bVar8 = DAT_0aa6;
      if ((bVar8 & 0x10) == 0) goto LAB_99f2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      bVar8 = DAT_0aa7;
      DAT_0aa7 = bVar8 & 0xfb;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
    }
  }
LAB_9a25:
  bVar8 = DAT_0aa6;
  if ((bVar8 & 8) != 0) {
    bVar8 = DAT_0aaa;
    if (bVar8 < DAT_4b01) {
      bVar8 = DAT_08e8._0_1_;
      if (DAT_4b02 <= bVar8) {
        DAT_0aaa = 0;
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 | 4;
        bVar8 = DAT_0aa6;
        DAT_0aa6 = bVar8 & 0xf7;
      }
    }
    else {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xbf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xdf;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xf7;
    }
  }
  bVar8 = DAT_0aa6;
  if ((bVar8 & 4) != 0) {
    bVar8 = DAT_0aa7;
    bVar14 = DAT_4b05;
    if ((bVar8 & 8) != 0) {
      bVar14 = DAT_4b04;
    }
    DAT_0aac = bVar14;
    bVar8 = DAT_08e8._0_1_;
    if ((bVar8 < DAT_4b02) || (bVar8 = DAT_0aaa, DAT_4b06 <= bVar8)) {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 | 1;
      bVar8 = DAT_0aa7;
      DAT_0aa7 = bVar8 | 2;
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xfb;
    }
  }
  bVar8 = DAT_0aa6;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0aa6;
    if ((bVar8 & 1) != 0) {
      bVar8 = DAT_0aae;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0aae = bVar8;
      if (DAT_4b07 <= bVar8) {
        DAT_0aae = 0;
        bVar8 = DAT_0aad;
        DAT_0aad = (bVar8 + 1) - (0xfe < bVar8);
        bVar8 = DAT_0aa7;
        if ((bVar8 & 2) != 0) {
          bVar8 = DAT_0aa7;
          bVar14 = DAT_4b05;
          if ((bVar8 & 8) != 0) {
            bVar14 = DAT_4b04;
          }
          bVar12 = DAT_0aad;
          bVar8 = bVar14 + bVar12;
          if (CARRY1(bVar14,bVar12)) {
            bVar8 = 0xff;
          }
          bVar14 = DAT_0a83;
          if (bVar8 < bVar14) {
            DAT_0aac = bVar8;
          }
          else {
            bVar8 = DAT_0aa7;
            DAT_0aa7 = bVar8 & 0xfd;
          }
        }
        bVar8 = DAT_0aa7;
        if ((~bVar8 & 2) != 0) {
          bVar8 = DAT_0aa6;
          DAT_0aa6 = bVar8 & 0xfe;
          DAT_0aad = 0;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xf7;
          bVar8 = DAT_0aa7;
          DAT_0aa7 = bVar8 & 0xfb;
        }
      }
    }
    bVar8 = DAT_0aa6;
    if ((~bVar8 & 1) != 0) {
      bVar8 = DAT_0aa6;
      DAT_0aa6 = bVar8 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  uVar10 = DAT_0ab4;
  DAT_0ab6 = uVar10;
  sVar11 = DAT_0ab0;
  DAT_0ab4 = sVar11;
  sVar4 = DAT_0ab6;
  sVar11 = sVar11 - sVar4;
  bVar8 = DAT_0ab2;
  if ((~bVar8 & 4) != 0) {
    sVar11 = 0;
  }
  if ((char)((ushort)sVar11 >> 8) != '\0') {
    sVar11 = 0xff;
  }
  DAT_0ab3 = (char)sVar11;
  bVar8 = DAT_0ab2;
  DAT_0ab2 = bVar8 | 4;
  bVar8 = DAT_0ab3;
  iVar1 = (uint)DAT_4bd4 * (uint)bVar8;
  DAT_0dde = (short)((uint)iVar1 >> 0x10);
  bVar8 = DAT_0aba;
  bVar12 = (byte)iVar1;
  bVar14 = (byte)((uint)iVar1 >> 8);
  DAT_0de0 = CONCAT11(bVar14 - (bVar12 < bVar8),bVar12 - bVar8);
  if (bVar14 < (bVar12 < bVar8)) {
    cVar13 = DAT_0dde._1_1_;
    if (cVar13 == '\x01') goto LAB_9b9a;
    if (cVar13 != '\0') goto LAB_9b48;
    uVar10 = DAT_0de0;
    iVar1 = (uint)DAT_4bd6 *
            (uint)CONCAT11((~(byte)((ushort)uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),
                           -(char)uVar10);
    uVar10 = (undefined2)iVar1;
    if ((short)((uint)iVar1 >> 0x10) != 0) {
      uVar10 = 0xffff;
    }
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)uVar10 >> 8);
    bVar12 = (byte)uVar10;
    if ((bVar8 & 1) == 0) {
      bVar5 = DAT_0ab8._1_1_;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9b87;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfe;
    }
    else {
      bVar8 = DAT_0ab8._1_1_;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9b87:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 1;
    }
    DAT_0ab8 = uVar10;
  }
  else {
    cVar13 = DAT_0dde._1_1_;
    if (cVar13 != '\0') {
LAB_9b48:
      DAT_0de0 = 0xffff;
    }
LAB_9b9a:
    uVar9 = DAT_0de0;
    uVar10 = (undefined2)((uint)DAT_4bd6 * (uint)uVar9);
    if ((short)((uint)DAT_4bd6 * (uint)uVar9 >> 0x10) != 0) {
      uVar10 = 0xffff;
    }
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)uVar10 >> 8);
    bVar12 = (byte)uVar10;
    if ((bVar8 & 1) == 0) {
      bVar8 = DAT_0ab8._1_1_;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9bcc:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfe;
    }
    else {
      bVar5 = DAT_0ab8._1_1_;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9bcc;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 1;
    }
    DAT_0ab8 = uVar10;
  }
  bVar14 = DAT_0aba;
  bVar8 = DAT_0ab2;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0ab8._0_1_;
    cVar13 = bVar14 + bVar8;
    if (CARRY1(bVar14,bVar8)) {
      cVar13 = -1;
    }
  }
  else {
    bVar8 = DAT_0ab8._0_1_;
    cVar13 = bVar14 - bVar8;
    if (bVar14 < bVar8) {
      cVar13 = '\0';
    }
  }
  DAT_0aba = cVar13;
  bVar8 = DAT_0aba;
  bVar14 = DAT_0abe;
  if (bVar8 < bVar14) {
    sVar11 = (ushort)(byte)-(bVar8 - bVar14) * (ushort)DAT_4bd6;
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)sVar11 >> 8);
    bVar12 = (byte)sVar11;
    if ((bVar8 & 2) == 0) {
      bVar5 = DAT_0abd;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9c13;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfd;
    }
    else {
      bVar8 = DAT_0abd;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9c13:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 2;
    }
    RAM0abc = uVar10;
  }
  else {
    sVar11 = (ushort)(byte)(bVar8 - bVar14) * (ushort)DAT_4bd6;
    bVar8 = DAT_0ab2;
    bVar14 = (byte)((ushort)sVar11 >> 8);
    bVar12 = (byte)sVar11;
    if ((bVar8 & 2) == 0) {
      bVar8 = DAT_0abd;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9c4a:
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 & 0xfd;
    }
    else {
      bVar5 = DAT_0abd;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9c4a;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ab2;
      DAT_0ab2 = bVar8 | 2;
    }
    RAM0abc = uVar10;
  }
  bVar14 = DAT_0abe;
  bVar8 = DAT_0ab2;
  if ((bVar8 & 2) == 0) {
    bVar8 = DAT_0abc;
    cVar13 = bVar14 + bVar8;
    if (CARRY1(bVar14,bVar8)) {
      cVar13 = -1;
    }
  }
  else {
    bVar8 = DAT_0abc;
    cVar13 = bVar14 - bVar8;
    if (bVar14 < bVar8) {
      cVar13 = '\0';
    }
  }
  DAT_0abe = cVar13;
  if ((DAT_4ba7 != -0x80) ||
     ((((cVar13 = DAT_0d87, cVar13 == '\t' && (bVar8 = DAT_0896._0_1_, (~bVar8 & 0x10) == 0)) ||
       (bVar8 = DAT_0900._0_1_, DAT_4ba8 <= bVar8)) || (bVar8 = DAT_08ce._0_1_, DAT_4ba9 <= bVar8)))
     ) {
    DAT_0aaf = 0;
    bVar8 = DAT_088d;
    DAT_088d = bVar8 & 0xbf;
  }
  cVar13 = DAT_0af7;
  if (cVar13 == '\0') {
    bVar8 = DAT_0aaf;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0aaf = bVar8;
    if (DAT_4baa <= bVar8) {
      bVar8 = DAT_088d;
      DAT_088d = bVar8 | 0x40;
    }
  }
  bVar8 = DAT_08a0;
  if ((bVar8 & 4) == 0) {
LAB_9cbd:
    cVar13 = DAT_0d87;
    if (cVar13 == '\t') {
      bVar8 = DAT_08f4;
      if (((bVar8 < DAT_4c03) || (uVar9 = DAT_0992, (ushort)DAT_4c04 << 8 < uVar9)) ||
         ((uVar9 = DAT_0982, DAT_4c06 < uVar9 || (bVar8 = DAT_0881, (~bVar8 & 0x20) == 0)))) {
LAB_9d2a:
        cVar13 = '\0';
LAB_9d2b:
        DAT_0acf = cVar13;
        bVar8 = DAT_09a1;
        if (((((~bVar8 & 0x80) != 0) && (bVar8 = DAT_08a0, (~bVar8 & 0x20) != 0)) &&
            (bVar8 = DAT_08b0, (~bVar8 & 0x10) != 0)) &&
           (((bVar8 = DAT_08b0, (~bVar8 & 4) != 0 && (bVar8 = DAT_08b0, (~bVar8 & 2) != 0)) &&
            ((bVar8 = DAT_08b1, (~bVar8 & 0x80) != 0 && (bVar8 = DAT_08b1, (~bVar8 & 0x40) != 0)))))
           ) goto LAB_9d51;
      }
      else {
        cVar13 = DAT_0d87;
        if ((cVar13 != '\t') || (bVar8 = DAT_0896._0_1_, (~bVar8 & 0x10) == 0)) {
          bVar8 = DAT_0898;
          if ((&DAT_4e11)[bVar8] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        cVar13 = DAT_0acd;
        if (cVar13 == '\0') goto LAB_9d2a;
        FUN_a3b4();
        cVar13 = DAT_0ace;
        if (cVar13 == '\0') goto LAB_9d2a;
        bVar8 = DAT_0acf;
        if (bVar8 < DAT_4c02) {
          cVar13 = (bVar8 + 1) - (0xfe < bVar8);
          goto LAB_9d2b;
        }
        DAT_0acf = (bVar8 + 1) - (0xfe < bVar8);
      }
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 | 2;
      bVar8 = DAT_0889;
      DAT_0889 = bVar8 | 0x80;
    }
    else {
LAB_9d51:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xfd;
      bVar8 = DAT_0889;
      DAT_0889 = bVar8 & 0x7f;
    }
  }
  else {
    cVar13 = DAT_0bdd;
    cVar6 = DAT_0d49;
    if (cVar13 != cVar6) goto LAB_9cbd;
  }
  bVar8 = DAT_08a0;
  if ((bVar8 & 4) == 0) {
LAB_9d6e:
    if ((DAT_4e1b == 0xff) || (uVar9 = DAT_0a2e, (ushort)DAT_4e1b << 8 < uVar9)) {
      cVar13 = '\0';
    }
    else {
      bVar8 = DAT_0b91;
      if (DAT_4e95 <= bVar8) {
        bVar14 = DAT_0b90;
        DAT_0b90 = bVar14 | 0x80;
      }
      cVar13 = (bVar8 + 1) - (0xfe < bVar8);
    }
    DAT_0b91 = cVar13;
    uVar9 = DAT_0a2e;
    if (((ushort)DAT_4e1a << 8 < uVar9) && (DAT_4e1a != 0xff)) {
      bVar8 = DAT_0b90;
      if ((bVar8 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        cVar13 = DAT_0d87;
        if ((cVar13 != '\t') && (bVar8 = DAT_088c, (bVar8 & 0x80) != 0)) {
          bVar8 = DAT_0b90;
          DAT_0b90 = bVar8 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        bVar8 = DAT_0880;
        if ((~bVar8 & 1) != 0) goto LAB_9dc5;
      }
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xef;
    }
    else {
LAB_9dc5:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 | 0x10;
    }
  }
  else {
    cVar13 = DAT_0bdd;
    cVar6 = DAT_0d4c;
    if (cVar13 != cVar6) goto LAB_9d6e;
  }
  bVar8 = DAT_0880;
  if (((bVar8 & 1) == 0) ||
     ((((bVar8 = DAT_08af, (~bVar8 & 0x40) != 0 && (bVar8 = DAT_08af, (~bVar8 & 2) != 0)) &&
       ((cVar13 = DAT_0dd9, cVar13 == -0x80 || (bVar8 = DAT_08b0, (~bVar8 & 8) != 0)))) &&
      (((bVar8 = DAT_08b1, (~bVar8 & 0x10) != 0 && (bVar8 = DAT_08b2, (~bVar8 & 0x80) != 0)) &&
       (bVar8 = DAT_08b4, (~bVar8 & 8) != 0)))))) {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 & 0xdf;
  }
  else {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 | 0x20;
  }
  bVar8 = DAT_0884;
  if ((bVar8 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    bVar8 = DAT_0b6f;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0b6f = bVar8;
    if (DAT_4e38 <= bVar8) {
      bVar8 = DAT_0888;
      if ((~bVar8 & 8) == 0) {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 & 0xf7;
      }
      else {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 | 8;
      }
      goto LAB_9e24;
    }
  }
  bVar8 = DAT_0889;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0bd1;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0bd1 = bVar8;
    if (DAT_4e66 <= bVar8) {
      DAT_0bd1 = 0;
      bVar8 = DAT_0b94;
      DAT_0b94 = (bVar8 + 1) - (0xfe < bVar8);
    }
  }
  cVar13 = DAT_0b9a;
  if ((cVar13 != -1) && (uVar9 = DAT_0b98, DAT_4e3a <= uVar9)) {
    DAT_0b98 = 0;
    bVar8 = DAT_0b9a;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0b9a = bVar8;
    if (4 < bVar8) {
      uVar7 = DAT_08af;
      DAT_08b8 = uVar7;
      uVar7 = DAT_08b0;
      DAT_08b9 = uVar7;
      uVar7 = DAT_08b1;
      DAT_08ba = uVar7;
      uVar7 = DAT_08b2;
      DAT_08bb = uVar7;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 8;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 4;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 2;
      bVar8 = DAT_0bd2;
      DAT_0bd2 = bVar8 | 1;
      DAT_0b9a = 0xff;
    }
    bVar8 = DAT_0be8;
    DAT_0be8 = bVar8 | 0x40;
  }
  cVar13 = DAT_0dd5;
  if ((cVar13 != -0x80) && (bVar8 = DAT_0d06, (~bVar8 & 0x80) != 0)) {
    bVar8 = DAT_0d0a;
    DAT_0d0a = (bVar8 + 1) - (0xfe < bVar8);
  }
  cVar13 = DAT_0dd5;
  if ((cVar13 != -0x80) && (bVar8 = DAT_0d06, (~bVar8 & 0x80) != 0)) {
    bVar8 = DAT_0d0b;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0d0b = bVar8;
    if (bVar8 <= DAT_4f16) {
      bVar5 = DAT_0d09;
      bVar12 = DAT_0ab3;
      bVar14 = bVar5 + bVar12;
      if (CARRY1(bVar5,bVar12)) {
        bVar14 = 0xff;
      }
      DAT_0d09 = bVar14;
      if ((DAT_4f16 <= bVar8) && (bVar14 <= DAT_4e84)) {
        bVar8 = DAT_0d08;
        DAT_0d08 = bVar8 | 1;
        bVar8 = DAT_0d08;
        DAT_0d08 = bVar8 | 8;
      }
    }
  }
  bVar8 = DAT_08d9;
  uVar9 = (ushort)bVar8 * 0x100;
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) != 0) {
    uVar3 = DAT_08da;
    uVar2 = uVar9 - uVar3;
    if (uVar9 < uVar3) {
      uVar9 = scale_u16_by_u8(CONCAT11((~(byte)(uVar2 >> 8) + 1) - ((char)-(char)uVar2 != '\0'),
                                       -(char)uVar2),&UNK_18b2);
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    else {
      uVar9 = scale_u16_by_u8(uVar2,&UNK_18b2);
    }
    sVar11 = DAT_08da;
    uVar9 = uVar9 + sVar11;
  }
  DAT_08da = uVar9;
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    bVar8 = DAT_088d;
    if (((((~bVar8 & 0x20) == 0) || (bVar8 = DAT_0885, (~bVar8 & 0x20) == 0)) ||
        ((bVar8 = DAT_0889, (~bVar8 & 2) != 0 &&
         ((bVar8 = DAT_0880, (~bVar8 & 4) != 0 && (bVar8 = DAT_0aa6, (~bVar8 & 4) != 0)))))) &&
       ((bVar8 = DAT_08ec, bVar8 <= DAT_4e28 &&
        ((((bVar8 = DAT_0abe, bVar8 <= DAT_4e29 && (uVar9 = DAT_0900, DAT_4e1e <= uVar9)) &&
          (bVar8 = DAT_08af, (~bVar8 & 8) != 0)) && (bVar8 = DAT_08af, (~bVar8 & 4) != 0)))))) {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 | 0x80;
      bVar8 = DAT_0adc;
      if (DAT_4e2a <= bVar8) {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 | 0x80;
      }
    }
    else {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 & 0x7f;
      DAT_0adc = 0;
    }
  }
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    bVar8 = DAT_08ec;
    if ((DAT_4e28 < bVar8) || (bVar8 = DAT_0abe, DAT_4e2b < bVar8)) {
      bVar8 = DAT_0ada;
      DAT_0ada = bVar8 & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      bVar8 = DAT_0ada;
      if ((bVar8 & 0x40) != 0) {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 | 0x20;
      }
      bVar8 = DAT_0ada;
      if ((((~bVar8 & 0x80) == 0) || (bVar8 = DAT_08b1, (bVar8 & 0x20) != 0)) &&
         ((uVar9 = DAT_0900, DAT_4e20 <= uVar9 &&
          ((bVar8 = DAT_08af, (~bVar8 & 8) != 0 && (bVar8 = DAT_08af, (~bVar8 & 4) != 0)))))) {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 & 0xf3 | 0x70;
      }
      else {
        bVar8 = DAT_0ada;
        if ((bVar8 & 0x10) != 0) {
          bVar8 = DAT_0ada;
          DAT_0ada = bVar8 & 0xef;
          DAT_0ae1 = 0;
        }
        bVar8 = DAT_0ada;
        if ((bVar8 & 0x40) != 0) {
          bVar8 = DAT_0ada;
          if ((~bVar8 & 8) != 0) {
            bVar8 = DAT_0ada;
            if (((((~bVar8 & 0x80) != 0) && (bVar8 = DAT_08b1, (bVar8 & 0x20) == 0)) ||
                (uVar9 = DAT_0900, DAT_4e22 < uVar9)) ||
               ((bVar8 = DAT_08af, (~bVar8 & 8) == 0 || (bVar8 = DAT_08af, (~bVar8 & 4) == 0))))
            goto LAB_a04f;
            bVar8 = DAT_0ada;
            DAT_0ada = bVar8 | 8;
          }
          bVar8 = DAT_0ada;
          if ((((~bVar8 & 0x80) == 0) || (bVar8 = DAT_08b1, (bVar8 & 0x20) != 0)) &&
             ((uVar9 = DAT_0900, uVar9 < DAT_4e20 &&
              ((bVar8 = DAT_08af, (~bVar8 & 8) != 0 && (bVar8 = DAT_08af, (~bVar8 & 4) != 0)))))) {
            bVar8 = DAT_0ada;
            DAT_0ada = bVar8 & 0xef | 100;
            goto LAB_a04f;
          }
        }
        bVar8 = DAT_0ada;
        if ((bVar8 & 4) != 0) {
          bVar8 = DAT_0ada;
          DAT_0ada = bVar8 & 0xfb;
          DAT_0ae1 = 0;
        }
      }
    }
  }
LAB_a04f:
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    bVar8 = DAT_088d;
    if (((((~bVar8 & 0x20) == 0) || (bVar8 = DAT_0885, (~bVar8 & 0x20) == 0)) ||
        ((bVar8 = DAT_0889, (~bVar8 & 2) != 0 &&
         ((bVar8 = DAT_0880, (~bVar8 & 4) != 0 && (bVar8 = DAT_0aa6, (~bVar8 & 4) != 0)))))) &&
       (((bVar8 = DAT_08ec, bVar8 <= DAT_4e28 &&
         (((bVar8 = DAT_0abe, bVar8 <= DAT_4e29 && (uVar9 = DAT_0900, uVar9 < DAT_4e24)) &&
          (bVar8 = DAT_08af, (~bVar8 & 8) != 0)))) &&
        (((bVar8 = DAT_08af, (~bVar8 & 4) != 0 && (sVar11 = DAT_0ad6, sVar11 == 0)) &&
         (cVar13 = DAT_0ad9, cVar13 == '\0')))))) {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 | 0x40;
      bVar8 = DAT_0add;
      if (DAT_4e31 <= bVar8) {
        bVar8 = DAT_0ada;
        DAT_0ada = bVar8 & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = 0;
        DAT_0ae1 = 0;
      }
    }
    else {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 & 0xbf;
      DAT_0add = 0;
    }
  }
  cVar13 = DAT_0d87;
  if (cVar13 != '\t') {
    cVar13 = DAT_0d5f;
    if (cVar13 != -0x80) {
      bVar8 = DAT_0ada;
      if ((bVar8 & 0x40) == 0) {
        bVar8 = DAT_0adb;
        DAT_0adb = bVar8 & 0xdf;
        DAT_0ade = 0;
      }
      else {
        bVar8 = DAT_0adb;
        DAT_0adb = bVar8 | 0x20;
        bVar8 = DAT_0ade;
        if ((DAT_4e57 <= bVar8) && (bVar8 = DAT_08b1, (~bVar8 & 0x20) != 0)) {
          bVar8 = DAT_08b1;
          DAT_08b1 = bVar8 | 0x20;
          bVar8 = DAT_0bd2;
          DAT_0bd2 = bVar8 | 0x20;
          bVar8 = DAT_08ba;
          if ((~bVar8 & 0x20) != 0) {
            bVar8 = DAT_08ba;
            DAT_08ba = bVar8 | 0x20;
            bVar8 = DAT_0bd2;
            DAT_0bd2 = bVar8 | 2;
          }
        }
      }
    }
    bVar8 = DAT_0881;
    if ((bVar8 & 0x10) == 0) {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 | 0x10;
      bVar8 = DAT_0adf;
      if ((DAT_4e57 <= bVar8) &&
         (((((bVar8 = DAT_088d, (~bVar8 & 0x20) == 0 || (bVar8 = DAT_0885, (~bVar8 & 0x20) == 0)) ||
            ((bVar8 = DAT_0889, (~bVar8 & 2) != 0 &&
             ((bVar8 = DAT_0880, (~bVar8 & 4) != 0 && (bVar8 = DAT_0aa6, (~bVar8 & 4) != 0)))))) &&
           ((bVar8 = DAT_0ada, (~bVar8 & 0x80) == 0 || (bVar8 = DAT_08b1, (bVar8 & 0x20) != 0)))) &&
          ((((((bVar8 = DAT_08ec, bVar8 <= DAT_4e28 && (bVar8 = DAT_0abe, bVar8 <= DAT_4e29)) &&
              (uVar9 = DAT_0900, uVar9 < DAT_4e24)) &&
             ((bVar8 = DAT_08af, (~bVar8 & 8) != 0 && (bVar8 = DAT_08af, (~bVar8 & 4) != 0)))) &&
            (sVar11 = DAT_0ad6, sVar11 == 0)) && (cVar13 = DAT_0ad9, cVar13 == '\0')))))) {
        bVar8 = DAT_0adb;
        DAT_0adb = bVar8 | 8;
        bVar8 = DAT_0ae0;
        if (DAT_4e31 <= bVar8) {
          bVar8 = DAT_0ada;
          DAT_0ada = bVar8 & 0x7f;
          cVar13 = DAT_0d5f;
          if ((cVar13 != -0x80) && (bVar8 = DAT_08b1, (bVar8 & 0x20) != 0)) {
            bVar8 = DAT_08b1;
            DAT_08b1 = bVar8 & 0xdf;
            bVar8 = DAT_0bd2;
            DAT_0bd2 = bVar8 | 0x20;
          }
        }
        goto LAB_a1ae;
      }
    }
    else {
      bVar8 = DAT_0adb;
      DAT_0adb = bVar8 & 0xef;
      DAT_0adf = 0;
    }
    bVar8 = DAT_0adb;
    DAT_0adb = bVar8 & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  FUN_5fc8();
  bVar8 = DAT_0891;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0891;
    if ((bVar8 & 0x80) == 0) {
LAB_a1d9:
      bVar8 = DAT_0bd3;
      if (bVar8 == 0) {
LAB_a20e:
        bVar8 = DAT_0be9;
        if (bVar8 != 0) {
          if ((bVar8 & 0x80) != 0) goto LAB_a296;
          if ((bVar8 & 0x40) != 0) goto LAB_a2af;
          if ((bVar8 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
          FUN_b7b9();
        }
      }
      else {
        if ((bVar8 & 0x80) != 0) goto LAB_a282;
        if ((bVar8 & 0x40) != 0) goto LAB_a287;
        if ((bVar8 & 0x20) != 0) goto LAB_a28c;
        if ((bVar8 & 0x10) != 0) goto LAB_a291;
        if ((bVar8 & 8) != 0) goto LAB_a29b;
        if ((bVar8 & 4) != 0) goto LAB_a2a0;
        if ((bVar8 & 2) != 0) goto LAB_a2a5;
        if ((bVar8 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
        FUN_b721();
      }
    }
    else {
      bVar8 = DAT_0890;
      if ((~bVar8 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar8 = DAT_0890;
        if ((~bVar8 & 0x40) != 0) goto LAB_a1d9;
        FUN_b4c6();
      }
    }
  }
  else {
    bVar8 = DAT_0891;
    if ((bVar8 & 0x80) == 0) {
LAB_a24a:
      bVar8 = DAT_0bd2;
      if (bVar8 == 0) {
LAB_a26f:
        bVar8 = DAT_0be8;
        if (bVar8 != 0) {
          if ((bVar8 & 0x80) == 0) {
            if ((bVar8 & 0x40) == 0) {
              if ((bVar8 & 4) != 0) goto LAB_a2b4;
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
      else if ((bVar8 & 0x80) == 0) {
        if ((bVar8 & 0x40) == 0) {
          if ((bVar8 & 0x20) == 0) {
            if ((bVar8 & 0x10) == 0) {
              if ((bVar8 & 8) == 0) {
                if ((bVar8 & 4) == 0) {
                  if ((bVar8 & 2) == 0) {
                    if ((bVar8 & 1) != 0) goto LAB_a2aa;
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
    else {
      bVar8 = DAT_088f;
      if ((~bVar8 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar8 = DAT_088f;
        if ((~bVar8 & 0x40) != 0) goto LAB_a24a;
        FUN_b4c6();
      }
    }
  }
LAB_a2b9:
  bVar8 = DAT_0000;
  bVar8 = bVar8 & 0xe0;
  if (bVar8 == 0x80) {
    bVar8 = DAT_08b1;
    if (((bVar8 & 0x80) != 0x80) || (bVar8 = DAT_0000, (bVar8 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar8 != 0) {
    if (((bVar8 == 0x40) && (bVar8 = DAT_08b1, (bVar8 & 0x80) == 0x80)) &&
       (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  bVar8 = DAT_08b1;
  if (((bVar8 & 0x80) == 0x80) && (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  bVar8 = DAT_08bc;
  DAT_08bc = bVar8 & 0xf7;
  return;
}


/* Entry 9973 */

void candidate_unreferenced_9973(void)

{
  int iVar1;
  ushort value;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar11;
  undefined2 uVar8;
  char cVar12;
  short sVar9;
  byte bVar13;
  ushort uVar10;
  
  DAT_0aaa = 0;
  bVar7 = DAT_0aa6;
  if ((bVar7 & 8) != 0) {
    bVar7 = DAT_0aaa;
    if (bVar7 < DAT_4b01) {
      bVar7 = DAT_08e8._0_1_;
      if (DAT_4b02 <= bVar7) {
        DAT_0aaa = 0;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 4;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 & 0xf7;
      }
    }
    else {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xdf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xf7;
    }
  }
  bVar7 = DAT_0aa6;
  if ((bVar7 & 4) != 0) {
    bVar7 = DAT_0aa7;
    bVar13 = DAT_4b05;
    if ((bVar7 & 8) != 0) {
      bVar13 = DAT_4b04;
    }
    DAT_0aac = bVar13;
    bVar7 = DAT_08e8._0_1_;
    if ((bVar7 < DAT_4b02) || (bVar7 = DAT_0aaa, DAT_4b06 <= bVar7)) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 1;
      bVar7 = DAT_0aa7;
      DAT_0aa7 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfb;
    }
  }
  bVar7 = DAT_0aa6;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0aa6;
    if ((bVar7 & 1) != 0) {
      bVar7 = DAT_0aae;
      bVar7 = (bVar7 + 1) - (0xfe < bVar7);
      DAT_0aae = bVar7;
      if (DAT_4b07 <= bVar7) {
        DAT_0aae = 0;
        bVar7 = DAT_0aad;
        DAT_0aad = (bVar7 + 1) - (0xfe < bVar7);
        bVar7 = DAT_0aa7;
        if ((bVar7 & 2) != 0) {
          bVar7 = DAT_0aa7;
          bVar13 = DAT_4b05;
          if ((bVar7 & 8) != 0) {
            bVar13 = DAT_4b04;
          }
          bVar11 = DAT_0aad;
          bVar7 = bVar13 + bVar11;
          if (CARRY1(bVar13,bVar11)) {
            bVar7 = 0xff;
          }
          bVar13 = DAT_0a83;
          if (bVar7 < bVar13) {
            DAT_0aac = bVar7;
          }
          else {
            bVar7 = DAT_0aa7;
            DAT_0aa7 = bVar7 & 0xfd;
          }
        }
        bVar7 = DAT_0aa7;
        if ((~bVar7 & 2) != 0) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xfe;
          DAT_0aad = 0;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xf7;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xfb;
        }
      }
    }
    bVar7 = DAT_0aa6;
    if ((~bVar7 & 1) != 0) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  uVar8 = DAT_0ab4;
  DAT_0ab6 = uVar8;
  sVar9 = DAT_0ab0;
  DAT_0ab4 = sVar9;
  sVar4 = DAT_0ab6;
  sVar9 = sVar9 - sVar4;
  bVar7 = DAT_0ab2;
  if ((~bVar7 & 4) != 0) {
    sVar9 = 0;
  }
  if ((char)((ushort)sVar9 >> 8) != '\0') {
    sVar9 = 0xff;
  }
  DAT_0ab3 = (char)sVar9;
  bVar7 = DAT_0ab2;
  DAT_0ab2 = bVar7 | 4;
  bVar7 = DAT_0ab3;
  iVar1 = (uint)DAT_4bd4 * (uint)bVar7;
  DAT_0dde = (short)((uint)iVar1 >> 0x10);
  bVar7 = DAT_0aba;
  bVar11 = (byte)iVar1;
  bVar13 = (byte)((uint)iVar1 >> 8);
  DAT_0de0 = CONCAT11(bVar13 - (bVar11 < bVar7),bVar11 - bVar7);
  if (bVar13 < (bVar11 < bVar7)) {
    cVar12 = DAT_0dde._1_1_;
    if (cVar12 == '\x01') goto LAB_9b9a;
    if (cVar12 != '\0') goto LAB_9b48;
    uVar8 = DAT_0de0;
    iVar1 = (uint)DAT_4bd6 *
            (uint)CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),
                           -(char)uVar8);
    uVar8 = (undefined2)iVar1;
    if ((short)((uint)iVar1 >> 0x10) != 0) {
      uVar8 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)uVar8 >> 8);
    bVar11 = (byte)uVar8;
    if ((bVar7 & 1) == 0) {
      bVar5 = DAT_0ab8._1_1_;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9b87;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar7 = DAT_0ab8._1_1_;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9b87:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar8;
  }
  else {
    cVar12 = DAT_0dde._1_1_;
    if (cVar12 != '\0') {
LAB_9b48:
      DAT_0de0 = 0xffff;
    }
LAB_9b9a:
    uVar10 = DAT_0de0;
    uVar8 = (undefined2)((uint)DAT_4bd6 * (uint)uVar10);
    if ((short)((uint)DAT_4bd6 * (uint)uVar10 >> 0x10) != 0) {
      uVar8 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)uVar8 >> 8);
    bVar11 = (byte)uVar8;
    if ((bVar7 & 1) == 0) {
      bVar7 = DAT_0ab8._1_1_;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9bcc:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar5 = DAT_0ab8._1_1_;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9bcc;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar8;
  }
  bVar13 = DAT_0aba;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 1) == 0) {
    bVar7 = DAT_0ab8._0_1_;
    cVar12 = bVar13 + bVar7;
    if (CARRY1(bVar13,bVar7)) {
      cVar12 = -1;
    }
  }
  else {
    bVar7 = DAT_0ab8._0_1_;
    cVar12 = bVar13 - bVar7;
    if (bVar13 < bVar7) {
      cVar12 = '\0';
    }
  }
  DAT_0aba = cVar12;
  bVar7 = DAT_0aba;
  bVar13 = DAT_0abe;
  if (bVar7 < bVar13) {
    sVar9 = (ushort)(byte)-(bVar7 - bVar13) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)sVar9 >> 8);
    bVar11 = (byte)sVar9;
    if ((bVar7 & 2) == 0) {
      bVar5 = DAT_0abd;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9c13;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar7 = DAT_0abd;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9c13:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar8;
  }
  else {
    sVar9 = (ushort)(byte)(bVar7 - bVar13) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)sVar9 >> 8);
    bVar11 = (byte)sVar9;
    if ((bVar7 & 2) == 0) {
      bVar7 = DAT_0abd;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9c4a:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar5 = DAT_0abd;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9c4a;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar8;
  }
  bVar13 = DAT_0abe;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 2) == 0) {
    bVar7 = DAT_0abc;
    cVar12 = bVar13 + bVar7;
    if (CARRY1(bVar13,bVar7)) {
      cVar12 = -1;
    }
  }
  else {
    bVar7 = DAT_0abc;
    cVar12 = bVar13 - bVar7;
    if (bVar13 < bVar7) {
      cVar12 = '\0';
    }
  }
  DAT_0abe = cVar12;
  if (((DAT_4ba7 != -0x80) ||
      (((cVar12 = DAT_0d87, cVar12 == '\t' && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) ||
       (bVar7 = DAT_0900._0_1_, DAT_4ba8 <= bVar7)))) || (bVar7 = DAT_08ce._0_1_, DAT_4ba9 <= bVar7)
     ) {
    DAT_0aaf = 0;
    bVar7 = DAT_088d;
    DAT_088d = bVar7 & 0xbf;
  }
  cVar12 = DAT_0af7;
  if (cVar12 == '\0') {
    bVar7 = DAT_0aaf;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0aaf = bVar7;
    if (DAT_4baa <= bVar7) {
      bVar7 = DAT_088d;
      DAT_088d = bVar7 | 0x40;
    }
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9cbd:
    cVar12 = DAT_0d87;
    if (cVar12 == '\t') {
      bVar7 = DAT_08f4;
      if (((bVar7 < DAT_4c03) || (uVar10 = DAT_0992, (ushort)DAT_4c04 << 8 < uVar10)) ||
         ((uVar10 = DAT_0982, DAT_4c06 < uVar10 || (bVar7 = DAT_0881, (~bVar7 & 0x20) == 0)))) {
LAB_9d2a:
        cVar12 = '\0';
LAB_9d2b:
        DAT_0acf = cVar12;
        bVar7 = DAT_09a1;
        if (((((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08a0, (~bVar7 & 0x20) != 0)) &&
              (bVar7 = DAT_08b0, (~bVar7 & 0x10) != 0)) &&
             ((bVar7 = DAT_08b0, (~bVar7 & 4) != 0 && (bVar7 = DAT_08b0, (~bVar7 & 2) != 0)))) &&
            (bVar7 = DAT_08b1, (~bVar7 & 0x80) != 0)) && (bVar7 = DAT_08b1, (~bVar7 & 0x40) != 0))
        goto LAB_9d51;
      }
      else {
        cVar12 = DAT_0d87;
        if ((cVar12 != '\t') || (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) {
          bVar7 = DAT_0898;
          if ((&DAT_4e11)[bVar7] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        cVar12 = DAT_0acd;
        if (cVar12 == '\0') goto LAB_9d2a;
        FUN_a3b4();
        cVar12 = DAT_0ace;
        if (cVar12 == '\0') goto LAB_9d2a;
        bVar7 = DAT_0acf;
        if (bVar7 < DAT_4c02) {
          cVar12 = (bVar7 + 1) - (0xfe < bVar7);
          goto LAB_9d2b;
        }
        DAT_0acf = (bVar7 + 1) - (0xfe < bVar7);
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 2;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 | 0x80;
    }
    else {
LAB_9d51:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xfd;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 & 0x7f;
    }
  }
  else {
    cVar12 = DAT_0bdd;
    cVar6 = DAT_0d49;
    if (cVar12 != cVar6) goto LAB_9cbd;
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9d6e:
    if ((DAT_4e1b == 0xff) || (uVar10 = DAT_0a2e, (ushort)DAT_4e1b << 8 < uVar10)) {
      cVar12 = '\0';
    }
    else {
      bVar7 = DAT_0b91;
      if (DAT_4e95 <= bVar7) {
        bVar13 = DAT_0b90;
        DAT_0b90 = bVar13 | 0x80;
      }
      cVar12 = (bVar7 + 1) - (0xfe < bVar7);
    }
    DAT_0b91 = cVar12;
    uVar10 = DAT_0a2e;
    if (((ushort)DAT_4e1a << 8 < uVar10) && (DAT_4e1a != 0xff)) {
      bVar7 = DAT_0b90;
      if ((bVar7 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        cVar12 = DAT_0d87;
        if ((cVar12 != '\t') && (bVar7 = DAT_088c, (bVar7 & 0x80) != 0)) {
          bVar7 = DAT_0b90;
          DAT_0b90 = bVar7 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        bVar7 = DAT_0880;
        if ((~bVar7 & 1) != 0) goto LAB_9dc5;
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xef;
    }
    else {
LAB_9dc5:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 0x10;
    }
  }
  else {
    cVar12 = DAT_0bdd;
    cVar6 = DAT_0d4c;
    if (cVar12 != cVar6) goto LAB_9d6e;
  }
  bVar7 = DAT_0880;
  if (((bVar7 & 1) == 0) ||
     ((((bVar7 = DAT_08af, (~bVar7 & 0x40) != 0 && (bVar7 = DAT_08af, (~bVar7 & 2) != 0)) &&
       ((cVar12 = DAT_0dd9, cVar12 == -0x80 || (bVar7 = DAT_08b0, (~bVar7 & 8) != 0)))) &&
      (((bVar7 = DAT_08b1, (~bVar7 & 0x10) != 0 && (bVar7 = DAT_08b2, (~bVar7 & 0x80) != 0)) &&
       (bVar7 = DAT_08b4, (~bVar7 & 8) != 0)))))) {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 & 0xdf;
  }
  else {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 | 0x20;
  }
  bVar7 = DAT_0884;
  if ((bVar7 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    bVar7 = DAT_0b6f;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b6f = bVar7;
    if (DAT_4e38 <= bVar7) {
      bVar7 = DAT_0888;
      if ((~bVar7 & 8) == 0) {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 & 0xf7;
      }
      else {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 | 8;
      }
      goto LAB_9e24;
    }
  }
  bVar7 = DAT_0889;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0bd1;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0bd1 = bVar7;
    if (DAT_4e66 <= bVar7) {
      DAT_0bd1 = 0;
      bVar7 = DAT_0b94;
      DAT_0b94 = (bVar7 + 1) - (0xfe < bVar7);
    }
  }
  cVar12 = DAT_0b9a;
  if ((cVar12 != -1) && (uVar10 = DAT_0b98, DAT_4e3a <= uVar10)) {
    DAT_0b98 = 0;
    bVar7 = DAT_0b9a;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b9a = bVar7;
    if (4 < bVar7) {
      uVar2 = DAT_08af;
      DAT_08b8 = uVar2;
      uVar2 = DAT_08b0;
      DAT_08b9 = uVar2;
      uVar2 = DAT_08b1;
      DAT_08ba = uVar2;
      uVar2 = DAT_08b2;
      DAT_08bb = uVar2;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 8;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 4;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 2;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 1;
      DAT_0b9a = 0xff;
    }
    bVar7 = DAT_0be8;
    DAT_0be8 = bVar7 | 0x40;
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0a;
    DAT_0d0a = (bVar7 + 1) - (0xfe < bVar7);
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0b;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0d0b = bVar7;
    if (bVar7 <= DAT_4f16) {
      bVar5 = DAT_0d09;
      bVar11 = DAT_0ab3;
      bVar13 = bVar5 + bVar11;
      if (CARRY1(bVar5,bVar11)) {
        bVar13 = 0xff;
      }
      DAT_0d09 = bVar13;
      if ((DAT_4f16 <= bVar7) && (bVar13 <= DAT_4e84)) {
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 1;
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 8;
      }
    }
  }
  bVar7 = DAT_08d9;
  uVar10 = (ushort)bVar7 * 0x100;
  bVar7 = DAT_0881;
  if ((~bVar7 & 0x10) != 0) {
    uVar3 = DAT_08da;
    value = uVar10 - uVar3;
    if (uVar10 < uVar3) {
      uVar10 = scale_u16_by_u8(CONCAT11((~(byte)(value >> 8) + 1) - ((char)-(char)value != '\0'),
                                        -(char)value),&UNK_18b2);
      uVar10 = CONCAT11((~(byte)(uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),-(char)uVar10);
    }
    else {
      uVar10 = scale_u16_by_u8(value,&UNK_18b2);
    }
    sVar9 = DAT_08da;
    uVar10 = uVar10 + sVar9;
  }
  DAT_08da = uVar10;
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_088d;
    if (((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
        ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
         ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
       ((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 &&
        ((((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar10 = DAT_0900, DAT_4e1e <= uVar10)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)) && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x80;
      bVar7 = DAT_0adc;
      if (DAT_4e2a <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x80;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0x7f;
      DAT_0adc = 0;
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_08ec;
    if ((DAT_4e28 < bVar7) || (bVar7 = DAT_0abe, DAT_4e2b < bVar7)) {
      bVar7 = DAT_0ada;
      DAT_0ada = bVar7 & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) != 0) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x20;
      }
      bVar7 = DAT_0ada;
      if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
         ((uVar10 = DAT_0900, DAT_4e20 <= uVar10 &&
          ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0xf3 | 0x70;
      }
      else {
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x10) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xef;
          DAT_0ae1 = 0;
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x40) != 0) {
          bVar7 = DAT_0ada;
          if ((~bVar7 & 8) != 0) {
            bVar7 = DAT_0ada;
            if (((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08b1, (bVar7 & 0x20) == 0)) ||
                (uVar10 = DAT_0900, DAT_4e22 < uVar10)) ||
               ((bVar7 = DAT_08af, (~bVar7 & 8) == 0 || (bVar7 = DAT_08af, (~bVar7 & 4) == 0))))
            goto LAB_a04f;
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 | 8;
          }
          bVar7 = DAT_0ada;
          if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
             ((uVar10 = DAT_0900, uVar10 < DAT_4e20 &&
              ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 & 0xef | 100;
            goto LAB_a04f;
          }
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 4) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xfb;
          DAT_0ae1 = 0;
        }
      }
    }
  }
LAB_a04f:
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_088d;
    if ((((((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
           ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
            ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
          (bVar7 = DAT_08ec, bVar7 <= DAT_4e28)) &&
         (((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar10 = DAT_0900, uVar10 < DAT_4e24)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)))) &&
        ((bVar7 = DAT_08af, (~bVar7 & 4) != 0 && (sVar9 = DAT_0ad6, sVar9 == 0)))) &&
       (cVar12 = DAT_0ad9, cVar12 == '\0')) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x40;
      bVar7 = DAT_0add;
      if (DAT_4e31 <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = 0;
        DAT_0ae1 = 0;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xbf;
      DAT_0add = 0;
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    cVar12 = DAT_0d5f;
    if (cVar12 != -0x80) {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) == 0) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 & 0xdf;
        DAT_0ade = 0;
      }
      else {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 0x20;
        bVar7 = DAT_0ade;
        if ((DAT_4e57 <= bVar7) && (bVar7 = DAT_08b1, (~bVar7 & 0x20) != 0)) {
          bVar7 = DAT_08b1;
          DAT_08b1 = bVar7 | 0x20;
          bVar7 = DAT_0bd2;
          DAT_0bd2 = bVar7 | 0x20;
          bVar7 = DAT_08ba;
          if ((~bVar7 & 0x20) != 0) {
            bVar7 = DAT_08ba;
            DAT_08ba = bVar7 | 0x20;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 2;
          }
        }
      }
    }
    bVar7 = DAT_0881;
    if ((bVar7 & 0x10) == 0) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x10;
      bVar7 = DAT_0adf;
      if ((((DAT_4e57 <= bVar7) &&
           (((bVar7 = DAT_088d, (~bVar7 & 0x20) == 0 || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
            ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
             ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0))))))))
          && ((bVar7 = DAT_0ada, (~bVar7 & 0x80) == 0 || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0))))
         && ((((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 && (bVar7 = DAT_0abe, bVar7 <= DAT_4e29)) &&
              (uVar10 = DAT_0900, uVar10 < DAT_4e24)) &&
             (((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)) &&
              ((sVar9 = DAT_0ad6, sVar9 == 0 && (cVar12 = DAT_0ad9, cVar12 == '\0')))))))) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 8;
        bVar7 = DAT_0ae0;
        if (DAT_4e31 <= bVar7) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0x7f;
          cVar12 = DAT_0d5f;
          if ((cVar12 != -0x80) && (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) {
            bVar7 = DAT_08b1;
            DAT_08b1 = bVar7 & 0xdf;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 0x20;
          }
        }
        goto LAB_a1ae;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xef;
      DAT_0adf = 0;
    }
    bVar7 = DAT_0adb;
    DAT_0adb = bVar7 & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  FUN_5fc8();
  bVar7 = DAT_0891;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a1d9:
      bVar7 = DAT_0bd3;
      if (bVar7 == 0) {
LAB_a20e:
        bVar7 = DAT_0be9;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) != 0) goto LAB_a296;
          if ((bVar7 & 0x40) != 0) goto LAB_a2af;
          if ((bVar7 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
          FUN_b7b9();
        }
      }
      else {
        if ((bVar7 & 0x80) != 0) goto LAB_a282;
        if ((bVar7 & 0x40) != 0) goto LAB_a287;
        if ((bVar7 & 0x20) != 0) goto LAB_a28c;
        if ((bVar7 & 0x10) != 0) goto LAB_a291;
        if ((bVar7 & 8) != 0) goto LAB_a29b;
        if ((bVar7 & 4) != 0) goto LAB_a2a0;
        if ((bVar7 & 2) != 0) goto LAB_a2a5;
        if ((bVar7 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
        FUN_b721();
      }
    }
    else {
      bVar7 = DAT_0890;
      if ((~bVar7 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_0890;
        if ((~bVar7 & 0x40) != 0) goto LAB_a1d9;
        FUN_b4c6();
      }
    }
  }
  else {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a24a:
      bVar7 = DAT_0bd2;
      if (bVar7 == 0) {
LAB_a26f:
        bVar7 = DAT_0be8;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) == 0) {
            if ((bVar7 & 0x40) == 0) {
              if ((bVar7 & 4) != 0) goto LAB_a2b4;
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
      else if ((bVar7 & 0x80) == 0) {
        if ((bVar7 & 0x40) == 0) {
          if ((bVar7 & 0x20) == 0) {
            if ((bVar7 & 0x10) == 0) {
              if ((bVar7 & 8) == 0) {
                if ((bVar7 & 4) == 0) {
                  if ((bVar7 & 2) == 0) {
                    if ((bVar7 & 1) != 0) goto LAB_a2aa;
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
    else {
      bVar7 = DAT_088f;
      if ((~bVar7 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_088f;
        if ((~bVar7 & 0x40) != 0) goto LAB_a24a;
        FUN_b4c6();
      }
    }
  }
LAB_a2b9:
  bVar7 = DAT_0000;
  bVar7 = bVar7 & 0xe0;
  if (bVar7 == 0x80) {
    bVar7 = DAT_08b1;
    if (((bVar7 & 0x80) != 0x80) || (bVar7 = DAT_0000, (bVar7 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar7 != 0) {
    if (((bVar7 == 0x40) && (bVar7 = DAT_08b1, (bVar7 & 0x80) == 0x80)) &&
       (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  bVar7 = DAT_08b1;
  if (((bVar7 & 0x80) == 0x80) && (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  bVar7 = DAT_08bc;
  DAT_08bc = bVar7 & 0xf7;
  return;
}


/* Entry 997a */

void FUN_997a(void)

{
  int iVar1;
  ushort value;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar11;
  undefined2 uVar8;
  char cVar12;
  short sVar9;
  byte bVar13;
  ushort uVar10;
  
  cVar12 = DAT_0d87;
  if (cVar12 == '\t') {
    cVar12 = DAT_0898;
    if (cVar12 == DAT_4afa) {
      bVar7 = DAT_0aab;
      if (DAT_4afd <= bVar7) {
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 0x10;
        bVar7 = DAT_0aa7;
        DAT_0aa7 = bVar7 | 4;
      }
LAB_99b5:
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 0x40;
      FUN_99fd();
      return;
    }
    DAT_0aab = 0;
    bVar7 = DAT_0aa6;
    if ((bVar7 & 0x10) == 0) goto LAB_99b5;
    bVar7 = DAT_0aa6;
    DAT_0aa6 = bVar7 & 0xef;
    bVar7 = DAT_0aa7;
    DAT_0aa7 = bVar7 & 0xfb;
    bVar7 = DAT_0aa6;
    DAT_0aa6 = bVar7 & 0xbf;
    bVar7 = DAT_0aa6;
    DAT_0aa6 = bVar7 | 2;
  }
  else {
    bVar7 = DAT_0aa8._0_1_;
    if ((DAT_4afe <= bVar7) && (bVar7 < DAT_4aff)) {
      bVar7 = DAT_0aab;
      if (DAT_4afd <= bVar7) {
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 0x10;
        bVar7 = DAT_0aa7;
        DAT_0aa7 = bVar7 | 4;
      }
LAB_99f2:
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 0x40;
      FUN_99fd();
      return;
    }
    DAT_0aab = 0;
    bVar7 = DAT_0aa6;
    if ((bVar7 & 0x10) == 0) goto LAB_99f2;
    bVar7 = DAT_0aa6;
    DAT_0aa6 = bVar7 & 0xef;
    bVar7 = DAT_0aa7;
    DAT_0aa7 = bVar7 & 0xfb;
    bVar7 = DAT_0aa6;
    DAT_0aa6 = bVar7 & 0xbf;
    bVar7 = DAT_0aa6;
    DAT_0aa6 = bVar7 | 2;
  }
  bVar7 = DAT_0aa6;
  if ((bVar7 & 8) != 0) {
    bVar7 = DAT_0aaa;
    if (bVar7 < DAT_4b01) {
      bVar7 = DAT_08e8._0_1_;
      if (DAT_4b02 <= bVar7) {
        DAT_0aaa = 0;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 4;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 & 0xf7;
      }
    }
    else {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xdf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xf7;
    }
  }
  bVar7 = DAT_0aa6;
  if ((bVar7 & 4) != 0) {
    bVar7 = DAT_0aa7;
    bVar13 = DAT_4b05;
    if ((bVar7 & 8) != 0) {
      bVar13 = DAT_4b04;
    }
    DAT_0aac = bVar13;
    bVar7 = DAT_08e8._0_1_;
    if ((bVar7 < DAT_4b02) || (bVar7 = DAT_0aaa, DAT_4b06 <= bVar7)) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 1;
      bVar7 = DAT_0aa7;
      DAT_0aa7 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfb;
    }
  }
  bVar7 = DAT_0aa6;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0aa6;
    if ((bVar7 & 1) != 0) {
      bVar7 = DAT_0aae;
      bVar7 = (bVar7 + 1) - (0xfe < bVar7);
      DAT_0aae = bVar7;
      if (DAT_4b07 <= bVar7) {
        DAT_0aae = 0;
        bVar7 = DAT_0aad;
        DAT_0aad = (bVar7 + 1) - (0xfe < bVar7);
        bVar7 = DAT_0aa7;
        if ((bVar7 & 2) != 0) {
          bVar7 = DAT_0aa7;
          bVar13 = DAT_4b05;
          if ((bVar7 & 8) != 0) {
            bVar13 = DAT_4b04;
          }
          bVar11 = DAT_0aad;
          bVar7 = bVar13 + bVar11;
          if (CARRY1(bVar13,bVar11)) {
            bVar7 = 0xff;
          }
          bVar13 = DAT_0a83;
          if (bVar7 < bVar13) {
            DAT_0aac = bVar7;
          }
          else {
            bVar7 = DAT_0aa7;
            DAT_0aa7 = bVar7 & 0xfd;
          }
        }
        bVar7 = DAT_0aa7;
        if ((~bVar7 & 2) != 0) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xfe;
          DAT_0aad = 0;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xf7;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xfb;
        }
      }
    }
    bVar7 = DAT_0aa6;
    if ((~bVar7 & 1) != 0) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  uVar8 = DAT_0ab4;
  DAT_0ab6 = uVar8;
  sVar9 = DAT_0ab0;
  DAT_0ab4 = sVar9;
  sVar4 = DAT_0ab6;
  sVar9 = sVar9 - sVar4;
  bVar7 = DAT_0ab2;
  if ((~bVar7 & 4) != 0) {
    sVar9 = 0;
  }
  if ((char)((ushort)sVar9 >> 8) != '\0') {
    sVar9 = 0xff;
  }
  DAT_0ab3 = (char)sVar9;
  bVar7 = DAT_0ab2;
  DAT_0ab2 = bVar7 | 4;
  bVar7 = DAT_0ab3;
  iVar1 = (uint)DAT_4bd4 * (uint)bVar7;
  DAT_0dde = (short)((uint)iVar1 >> 0x10);
  bVar7 = DAT_0aba;
  bVar11 = (byte)iVar1;
  bVar13 = (byte)((uint)iVar1 >> 8);
  DAT_0de0 = CONCAT11(bVar13 - (bVar11 < bVar7),bVar11 - bVar7);
  if (bVar13 < (bVar11 < bVar7)) {
    cVar12 = DAT_0dde._1_1_;
    if (cVar12 == '\x01') goto LAB_9b9a;
    if (cVar12 != '\0') goto LAB_9b48;
    uVar8 = DAT_0de0;
    iVar1 = (uint)DAT_4bd6 *
            (uint)CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),
                           -(char)uVar8);
    uVar8 = (undefined2)iVar1;
    if ((short)((uint)iVar1 >> 0x10) != 0) {
      uVar8 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)uVar8 >> 8);
    bVar11 = (byte)uVar8;
    if ((bVar7 & 1) == 0) {
      bVar5 = DAT_0ab8._1_1_;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9b87;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar7 = DAT_0ab8._1_1_;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9b87:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar8;
  }
  else {
    cVar12 = DAT_0dde._1_1_;
    if (cVar12 != '\0') {
LAB_9b48:
      DAT_0de0 = 0xffff;
    }
LAB_9b9a:
    uVar10 = DAT_0de0;
    uVar8 = (undefined2)((uint)DAT_4bd6 * (uint)uVar10);
    if ((short)((uint)DAT_4bd6 * (uint)uVar10 >> 0x10) != 0) {
      uVar8 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)uVar8 >> 8);
    bVar11 = (byte)uVar8;
    if ((bVar7 & 1) == 0) {
      bVar7 = DAT_0ab8._1_1_;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9bcc:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar5 = DAT_0ab8._1_1_;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9bcc;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar8;
  }
  bVar13 = DAT_0aba;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 1) == 0) {
    bVar7 = DAT_0ab8._0_1_;
    cVar12 = bVar13 + bVar7;
    if (CARRY1(bVar13,bVar7)) {
      cVar12 = -1;
    }
  }
  else {
    bVar7 = DAT_0ab8._0_1_;
    cVar12 = bVar13 - bVar7;
    if (bVar13 < bVar7) {
      cVar12 = '\0';
    }
  }
  DAT_0aba = cVar12;
  bVar7 = DAT_0aba;
  bVar13 = DAT_0abe;
  if (bVar7 < bVar13) {
    sVar9 = (ushort)(byte)-(bVar7 - bVar13) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)sVar9 >> 8);
    bVar11 = (byte)sVar9;
    if ((bVar7 & 2) == 0) {
      bVar5 = DAT_0abd;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9c13;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar7 = DAT_0abd;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9c13:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar8;
  }
  else {
    sVar9 = (ushort)(byte)(bVar7 - bVar13) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)sVar9 >> 8);
    bVar11 = (byte)sVar9;
    if ((bVar7 & 2) == 0) {
      bVar7 = DAT_0abd;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9c4a:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar5 = DAT_0abd;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9c4a;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar8;
  }
  bVar13 = DAT_0abe;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 2) == 0) {
    bVar7 = DAT_0abc;
    cVar12 = bVar13 + bVar7;
    if (CARRY1(bVar13,bVar7)) {
      cVar12 = -1;
    }
  }
  else {
    bVar7 = DAT_0abc;
    cVar12 = bVar13 - bVar7;
    if (bVar13 < bVar7) {
      cVar12 = '\0';
    }
  }
  DAT_0abe = cVar12;
  if (((DAT_4ba7 != -0x80) ||
      (((cVar12 = DAT_0d87, cVar12 == '\t' && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) ||
       (bVar7 = DAT_0900._0_1_, DAT_4ba8 <= bVar7)))) || (bVar7 = DAT_08ce._0_1_, DAT_4ba9 <= bVar7)
     ) {
    DAT_0aaf = 0;
    bVar7 = DAT_088d;
    DAT_088d = bVar7 & 0xbf;
  }
  cVar12 = DAT_0af7;
  if (cVar12 == '\0') {
    bVar7 = DAT_0aaf;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0aaf = bVar7;
    if (DAT_4baa <= bVar7) {
      bVar7 = DAT_088d;
      DAT_088d = bVar7 | 0x40;
    }
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9cbd:
    cVar12 = DAT_0d87;
    if (cVar12 == '\t') {
      bVar7 = DAT_08f4;
      if (((bVar7 < DAT_4c03) || (uVar10 = DAT_0992, (ushort)DAT_4c04 << 8 < uVar10)) ||
         ((uVar10 = DAT_0982, DAT_4c06 < uVar10 || (bVar7 = DAT_0881, (~bVar7 & 0x20) == 0)))) {
LAB_9d2a:
        cVar12 = '\0';
LAB_9d2b:
        DAT_0acf = cVar12;
        bVar7 = DAT_09a1;
        if (((((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08a0, (~bVar7 & 0x20) != 0)) &&
              (bVar7 = DAT_08b0, (~bVar7 & 0x10) != 0)) &&
             ((bVar7 = DAT_08b0, (~bVar7 & 4) != 0 && (bVar7 = DAT_08b0, (~bVar7 & 2) != 0)))) &&
            (bVar7 = DAT_08b1, (~bVar7 & 0x80) != 0)) && (bVar7 = DAT_08b1, (~bVar7 & 0x40) != 0))
        goto LAB_9d51;
      }
      else {
        cVar12 = DAT_0d87;
        if ((cVar12 != '\t') || (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) {
          bVar7 = DAT_0898;
          if ((&DAT_4e11)[bVar7] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        cVar12 = DAT_0acd;
        if (cVar12 == '\0') goto LAB_9d2a;
        FUN_a3b4();
        cVar12 = DAT_0ace;
        if (cVar12 == '\0') goto LAB_9d2a;
        bVar7 = DAT_0acf;
        if (bVar7 < DAT_4c02) {
          cVar12 = (bVar7 + 1) - (0xfe < bVar7);
          goto LAB_9d2b;
        }
        DAT_0acf = (bVar7 + 1) - (0xfe < bVar7);
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 2;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 | 0x80;
    }
    else {
LAB_9d51:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xfd;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 & 0x7f;
    }
  }
  else {
    cVar12 = DAT_0bdd;
    cVar6 = DAT_0d49;
    if (cVar12 != cVar6) goto LAB_9cbd;
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9d6e:
    if ((DAT_4e1b == 0xff) || (uVar10 = DAT_0a2e, (ushort)DAT_4e1b << 8 < uVar10)) {
      cVar12 = '\0';
    }
    else {
      bVar7 = DAT_0b91;
      if (DAT_4e95 <= bVar7) {
        bVar13 = DAT_0b90;
        DAT_0b90 = bVar13 | 0x80;
      }
      cVar12 = (bVar7 + 1) - (0xfe < bVar7);
    }
    DAT_0b91 = cVar12;
    uVar10 = DAT_0a2e;
    if (((ushort)DAT_4e1a << 8 < uVar10) && (DAT_4e1a != 0xff)) {
      bVar7 = DAT_0b90;
      if ((bVar7 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        cVar12 = DAT_0d87;
        if ((cVar12 != '\t') && (bVar7 = DAT_088c, (bVar7 & 0x80) != 0)) {
          bVar7 = DAT_0b90;
          DAT_0b90 = bVar7 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        bVar7 = DAT_0880;
        if ((~bVar7 & 1) != 0) goto LAB_9dc5;
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xef;
    }
    else {
LAB_9dc5:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 0x10;
    }
  }
  else {
    cVar12 = DAT_0bdd;
    cVar6 = DAT_0d4c;
    if (cVar12 != cVar6) goto LAB_9d6e;
  }
  bVar7 = DAT_0880;
  if (((bVar7 & 1) == 0) ||
     ((((bVar7 = DAT_08af, (~bVar7 & 0x40) != 0 && (bVar7 = DAT_08af, (~bVar7 & 2) != 0)) &&
       ((cVar12 = DAT_0dd9, cVar12 == -0x80 || (bVar7 = DAT_08b0, (~bVar7 & 8) != 0)))) &&
      (((bVar7 = DAT_08b1, (~bVar7 & 0x10) != 0 && (bVar7 = DAT_08b2, (~bVar7 & 0x80) != 0)) &&
       (bVar7 = DAT_08b4, (~bVar7 & 8) != 0)))))) {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 & 0xdf;
  }
  else {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 | 0x20;
  }
  bVar7 = DAT_0884;
  if ((bVar7 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    bVar7 = DAT_0b6f;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b6f = bVar7;
    if (DAT_4e38 <= bVar7) {
      bVar7 = DAT_0888;
      if ((~bVar7 & 8) == 0) {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 & 0xf7;
      }
      else {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 | 8;
      }
      goto LAB_9e24;
    }
  }
  bVar7 = DAT_0889;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0bd1;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0bd1 = bVar7;
    if (DAT_4e66 <= bVar7) {
      DAT_0bd1 = 0;
      bVar7 = DAT_0b94;
      DAT_0b94 = (bVar7 + 1) - (0xfe < bVar7);
    }
  }
  cVar12 = DAT_0b9a;
  if ((cVar12 != -1) && (uVar10 = DAT_0b98, DAT_4e3a <= uVar10)) {
    DAT_0b98 = 0;
    bVar7 = DAT_0b9a;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b9a = bVar7;
    if (4 < bVar7) {
      uVar2 = DAT_08af;
      DAT_08b8 = uVar2;
      uVar2 = DAT_08b0;
      DAT_08b9 = uVar2;
      uVar2 = DAT_08b1;
      DAT_08ba = uVar2;
      uVar2 = DAT_08b2;
      DAT_08bb = uVar2;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 8;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 4;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 2;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 1;
      DAT_0b9a = 0xff;
    }
    bVar7 = DAT_0be8;
    DAT_0be8 = bVar7 | 0x40;
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0a;
    DAT_0d0a = (bVar7 + 1) - (0xfe < bVar7);
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0b;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0d0b = bVar7;
    if (bVar7 <= DAT_4f16) {
      bVar5 = DAT_0d09;
      bVar11 = DAT_0ab3;
      bVar13 = bVar5 + bVar11;
      if (CARRY1(bVar5,bVar11)) {
        bVar13 = 0xff;
      }
      DAT_0d09 = bVar13;
      if ((DAT_4f16 <= bVar7) && (bVar13 <= DAT_4e84)) {
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 1;
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 8;
      }
    }
  }
  bVar7 = DAT_08d9;
  uVar10 = (ushort)bVar7 * 0x100;
  bVar7 = DAT_0881;
  if ((~bVar7 & 0x10) != 0) {
    uVar3 = DAT_08da;
    value = uVar10 - uVar3;
    if (uVar10 < uVar3) {
      uVar10 = scale_u16_by_u8(CONCAT11((~(byte)(value >> 8) + 1) - ((char)-(char)value != '\0'),
                                        -(char)value),&UNK_18b2);
      uVar10 = CONCAT11((~(byte)(uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),-(char)uVar10);
    }
    else {
      uVar10 = scale_u16_by_u8(value,&UNK_18b2);
    }
    sVar9 = DAT_08da;
    uVar10 = uVar10 + sVar9;
  }
  DAT_08da = uVar10;
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_088d;
    if (((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
        ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
         ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
       ((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 &&
        ((((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar10 = DAT_0900, DAT_4e1e <= uVar10)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)) && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x80;
      bVar7 = DAT_0adc;
      if (DAT_4e2a <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x80;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0x7f;
      DAT_0adc = 0;
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_08ec;
    if ((DAT_4e28 < bVar7) || (bVar7 = DAT_0abe, DAT_4e2b < bVar7)) {
      bVar7 = DAT_0ada;
      DAT_0ada = bVar7 & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) != 0) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x20;
      }
      bVar7 = DAT_0ada;
      if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
         ((uVar10 = DAT_0900, DAT_4e20 <= uVar10 &&
          ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0xf3 | 0x70;
      }
      else {
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x10) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xef;
          DAT_0ae1 = 0;
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x40) != 0) {
          bVar7 = DAT_0ada;
          if ((~bVar7 & 8) != 0) {
            bVar7 = DAT_0ada;
            if (((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08b1, (bVar7 & 0x20) == 0)) ||
                (uVar10 = DAT_0900, DAT_4e22 < uVar10)) ||
               ((bVar7 = DAT_08af, (~bVar7 & 8) == 0 || (bVar7 = DAT_08af, (~bVar7 & 4) == 0))))
            goto LAB_a04f;
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 | 8;
          }
          bVar7 = DAT_0ada;
          if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
             ((uVar10 = DAT_0900, uVar10 < DAT_4e20 &&
              ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 & 0xef | 100;
            goto LAB_a04f;
          }
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 4) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xfb;
          DAT_0ae1 = 0;
        }
      }
    }
  }
LAB_a04f:
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_088d;
    if ((((((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
           ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
            ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
          (bVar7 = DAT_08ec, bVar7 <= DAT_4e28)) &&
         (((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar10 = DAT_0900, uVar10 < DAT_4e24)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)))) &&
        ((bVar7 = DAT_08af, (~bVar7 & 4) != 0 && (sVar9 = DAT_0ad6, sVar9 == 0)))) &&
       (cVar12 = DAT_0ad9, cVar12 == '\0')) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x40;
      bVar7 = DAT_0add;
      if (DAT_4e31 <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = 0;
        DAT_0ae1 = 0;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xbf;
      DAT_0add = 0;
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    cVar12 = DAT_0d5f;
    if (cVar12 != -0x80) {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) == 0) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 & 0xdf;
        DAT_0ade = 0;
      }
      else {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 0x20;
        bVar7 = DAT_0ade;
        if ((DAT_4e57 <= bVar7) && (bVar7 = DAT_08b1, (~bVar7 & 0x20) != 0)) {
          bVar7 = DAT_08b1;
          DAT_08b1 = bVar7 | 0x20;
          bVar7 = DAT_0bd2;
          DAT_0bd2 = bVar7 | 0x20;
          bVar7 = DAT_08ba;
          if ((~bVar7 & 0x20) != 0) {
            bVar7 = DAT_08ba;
            DAT_08ba = bVar7 | 0x20;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 2;
          }
        }
      }
    }
    bVar7 = DAT_0881;
    if ((bVar7 & 0x10) == 0) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x10;
      bVar7 = DAT_0adf;
      if ((((DAT_4e57 <= bVar7) &&
           (((bVar7 = DAT_088d, (~bVar7 & 0x20) == 0 || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
            ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
             ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0))))))))
          && ((bVar7 = DAT_0ada, (~bVar7 & 0x80) == 0 || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0))))
         && ((((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 && (bVar7 = DAT_0abe, bVar7 <= DAT_4e29)) &&
              (uVar10 = DAT_0900, uVar10 < DAT_4e24)) &&
             (((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)) &&
              ((sVar9 = DAT_0ad6, sVar9 == 0 && (cVar12 = DAT_0ad9, cVar12 == '\0')))))))) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 8;
        bVar7 = DAT_0ae0;
        if (DAT_4e31 <= bVar7) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0x7f;
          cVar12 = DAT_0d5f;
          if ((cVar12 != -0x80) && (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) {
            bVar7 = DAT_08b1;
            DAT_08b1 = bVar7 & 0xdf;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 0x20;
          }
        }
        goto LAB_a1ae;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xef;
      DAT_0adf = 0;
    }
    bVar7 = DAT_0adb;
    DAT_0adb = bVar7 & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  FUN_5fc8();
  bVar7 = DAT_0891;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a1d9:
      bVar7 = DAT_0bd3;
      if (bVar7 == 0) {
LAB_a20e:
        bVar7 = DAT_0be9;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) != 0) goto LAB_a296;
          if ((bVar7 & 0x40) != 0) goto LAB_a2af;
          if ((bVar7 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
          FUN_b7b9();
        }
      }
      else {
        if ((bVar7 & 0x80) != 0) goto LAB_a282;
        if ((bVar7 & 0x40) != 0) goto LAB_a287;
        if ((bVar7 & 0x20) != 0) goto LAB_a28c;
        if ((bVar7 & 0x10) != 0) goto LAB_a291;
        if ((bVar7 & 8) != 0) goto LAB_a29b;
        if ((bVar7 & 4) != 0) goto LAB_a2a0;
        if ((bVar7 & 2) != 0) goto LAB_a2a5;
        if ((bVar7 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
        FUN_b721();
      }
    }
    else {
      bVar7 = DAT_0890;
      if ((~bVar7 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_0890;
        if ((~bVar7 & 0x40) != 0) goto LAB_a1d9;
        FUN_b4c6();
      }
    }
  }
  else {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a24a:
      bVar7 = DAT_0bd2;
      if (bVar7 == 0) {
LAB_a26f:
        bVar7 = DAT_0be8;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) == 0) {
            if ((bVar7 & 0x40) == 0) {
              if ((bVar7 & 4) != 0) goto LAB_a2b4;
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
      else if ((bVar7 & 0x80) == 0) {
        if ((bVar7 & 0x40) == 0) {
          if ((bVar7 & 0x20) == 0) {
            if ((bVar7 & 0x10) == 0) {
              if ((bVar7 & 8) == 0) {
                if ((bVar7 & 4) == 0) {
                  if ((bVar7 & 2) == 0) {
                    if ((bVar7 & 1) != 0) goto LAB_a2aa;
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
    else {
      bVar7 = DAT_088f;
      if ((~bVar7 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_088f;
        if ((~bVar7 & 0x40) != 0) goto LAB_a24a;
        FUN_b4c6();
      }
    }
  }
LAB_a2b9:
  bVar7 = DAT_0000;
  bVar7 = bVar7 & 0xe0;
  if (bVar7 == 0x80) {
    bVar7 = DAT_08b1;
    if (((bVar7 & 0x80) != 0x80) || (bVar7 = DAT_0000, (bVar7 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar7 != 0) {
    if (((bVar7 == 0x40) && (bVar7 = DAT_08b1, (bVar7 & 0x80) == 0x80)) &&
       (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  bVar7 = DAT_08b1;
  if (((bVar7 & 0x80) == 0x80) && (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  bVar7 = DAT_08bc;
  DAT_08bc = bVar7 & 0xf7;
  return;
}


/* Entry 99f8 */

void candidate_unreferenced_99f8(void)

{
  int iVar1;
  ushort value;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar11;
  undefined2 uVar8;
  char cVar12;
  short sVar9;
  byte bVar13;
  ushort uVar10;
  
  DAT_0aab = 0;
  bVar7 = DAT_0aa6;
  if ((bVar7 & 8) != 0) {
    bVar7 = DAT_0aaa;
    if (bVar7 < DAT_4b01) {
      bVar7 = DAT_08e8._0_1_;
      if (DAT_4b02 <= bVar7) {
        DAT_0aaa = 0;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 4;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 & 0xf7;
      }
    }
    else {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xdf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xf7;
    }
  }
  bVar7 = DAT_0aa6;
  if ((bVar7 & 4) != 0) {
    bVar7 = DAT_0aa7;
    bVar13 = DAT_4b05;
    if ((bVar7 & 8) != 0) {
      bVar13 = DAT_4b04;
    }
    DAT_0aac = bVar13;
    bVar7 = DAT_08e8._0_1_;
    if ((bVar7 < DAT_4b02) || (bVar7 = DAT_0aaa, DAT_4b06 <= bVar7)) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 1;
      bVar7 = DAT_0aa7;
      DAT_0aa7 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfb;
    }
  }
  bVar7 = DAT_0aa6;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0aa6;
    if ((bVar7 & 1) != 0) {
      bVar7 = DAT_0aae;
      bVar7 = (bVar7 + 1) - (0xfe < bVar7);
      DAT_0aae = bVar7;
      if (DAT_4b07 <= bVar7) {
        DAT_0aae = 0;
        bVar7 = DAT_0aad;
        DAT_0aad = (bVar7 + 1) - (0xfe < bVar7);
        bVar7 = DAT_0aa7;
        if ((bVar7 & 2) != 0) {
          bVar7 = DAT_0aa7;
          bVar13 = DAT_4b05;
          if ((bVar7 & 8) != 0) {
            bVar13 = DAT_4b04;
          }
          bVar11 = DAT_0aad;
          bVar7 = bVar13 + bVar11;
          if (CARRY1(bVar13,bVar11)) {
            bVar7 = 0xff;
          }
          bVar13 = DAT_0a83;
          if (bVar7 < bVar13) {
            DAT_0aac = bVar7;
          }
          else {
            bVar7 = DAT_0aa7;
            DAT_0aa7 = bVar7 & 0xfd;
          }
        }
        bVar7 = DAT_0aa7;
        if ((~bVar7 & 2) != 0) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xfe;
          DAT_0aad = 0;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xf7;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xfb;
        }
      }
    }
    bVar7 = DAT_0aa6;
    if ((~bVar7 & 1) != 0) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  uVar8 = DAT_0ab4;
  DAT_0ab6 = uVar8;
  sVar9 = DAT_0ab0;
  DAT_0ab4 = sVar9;
  sVar4 = DAT_0ab6;
  sVar9 = sVar9 - sVar4;
  bVar7 = DAT_0ab2;
  if ((~bVar7 & 4) != 0) {
    sVar9 = 0;
  }
  if ((char)((ushort)sVar9 >> 8) != '\0') {
    sVar9 = 0xff;
  }
  DAT_0ab3 = (char)sVar9;
  bVar7 = DAT_0ab2;
  DAT_0ab2 = bVar7 | 4;
  bVar7 = DAT_0ab3;
  iVar1 = (uint)DAT_4bd4 * (uint)bVar7;
  DAT_0dde = (short)((uint)iVar1 >> 0x10);
  bVar7 = DAT_0aba;
  bVar11 = (byte)iVar1;
  bVar13 = (byte)((uint)iVar1 >> 8);
  DAT_0de0 = CONCAT11(bVar13 - (bVar11 < bVar7),bVar11 - bVar7);
  if (bVar13 < (bVar11 < bVar7)) {
    cVar12 = DAT_0dde._1_1_;
    if (cVar12 == '\x01') goto LAB_9b9a;
    if (cVar12 != '\0') goto LAB_9b48;
    uVar8 = DAT_0de0;
    iVar1 = (uint)DAT_4bd6 *
            (uint)CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),
                           -(char)uVar8);
    uVar8 = (undefined2)iVar1;
    if ((short)((uint)iVar1 >> 0x10) != 0) {
      uVar8 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)uVar8 >> 8);
    bVar11 = (byte)uVar8;
    if ((bVar7 & 1) == 0) {
      bVar5 = DAT_0ab8._1_1_;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9b87;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar7 = DAT_0ab8._1_1_;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9b87:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar8;
  }
  else {
    cVar12 = DAT_0dde._1_1_;
    if (cVar12 != '\0') {
LAB_9b48:
      DAT_0de0 = 0xffff;
    }
LAB_9b9a:
    uVar10 = DAT_0de0;
    uVar8 = (undefined2)((uint)DAT_4bd6 * (uint)uVar10);
    if ((short)((uint)DAT_4bd6 * (uint)uVar10 >> 0x10) != 0) {
      uVar8 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)uVar8 >> 8);
    bVar11 = (byte)uVar8;
    if ((bVar7 & 1) == 0) {
      bVar7 = DAT_0ab8._1_1_;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9bcc:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar5 = DAT_0ab8._1_1_;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9bcc;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar8;
  }
  bVar13 = DAT_0aba;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 1) == 0) {
    bVar7 = DAT_0ab8._0_1_;
    cVar12 = bVar13 + bVar7;
    if (CARRY1(bVar13,bVar7)) {
      cVar12 = -1;
    }
  }
  else {
    bVar7 = DAT_0ab8._0_1_;
    cVar12 = bVar13 - bVar7;
    if (bVar13 < bVar7) {
      cVar12 = '\0';
    }
  }
  DAT_0aba = cVar12;
  bVar7 = DAT_0aba;
  bVar13 = DAT_0abe;
  if (bVar7 < bVar13) {
    sVar9 = (ushort)(byte)-(bVar7 - bVar13) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)sVar9 >> 8);
    bVar11 = (byte)sVar9;
    if ((bVar7 & 2) == 0) {
      bVar5 = DAT_0abd;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9c13;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar7 = DAT_0abd;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9c13:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar8;
  }
  else {
    sVar9 = (ushort)(byte)(bVar7 - bVar13) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)sVar9 >> 8);
    bVar11 = (byte)sVar9;
    if ((bVar7 & 2) == 0) {
      bVar7 = DAT_0abd;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9c4a:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar5 = DAT_0abd;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9c4a;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar8;
  }
  bVar13 = DAT_0abe;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 2) == 0) {
    bVar7 = DAT_0abc;
    cVar12 = bVar13 + bVar7;
    if (CARRY1(bVar13,bVar7)) {
      cVar12 = -1;
    }
  }
  else {
    bVar7 = DAT_0abc;
    cVar12 = bVar13 - bVar7;
    if (bVar13 < bVar7) {
      cVar12 = '\0';
    }
  }
  DAT_0abe = cVar12;
  if (((DAT_4ba7 != -0x80) ||
      (((cVar12 = DAT_0d87, cVar12 == '\t' && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) ||
       (bVar7 = DAT_0900._0_1_, DAT_4ba8 <= bVar7)))) || (bVar7 = DAT_08ce._0_1_, DAT_4ba9 <= bVar7)
     ) {
    DAT_0aaf = 0;
    bVar7 = DAT_088d;
    DAT_088d = bVar7 & 0xbf;
  }
  cVar12 = DAT_0af7;
  if (cVar12 == '\0') {
    bVar7 = DAT_0aaf;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0aaf = bVar7;
    if (DAT_4baa <= bVar7) {
      bVar7 = DAT_088d;
      DAT_088d = bVar7 | 0x40;
    }
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9cbd:
    cVar12 = DAT_0d87;
    if (cVar12 == '\t') {
      bVar7 = DAT_08f4;
      if (((bVar7 < DAT_4c03) || (uVar10 = DAT_0992, (ushort)DAT_4c04 << 8 < uVar10)) ||
         ((uVar10 = DAT_0982, DAT_4c06 < uVar10 || (bVar7 = DAT_0881, (~bVar7 & 0x20) == 0)))) {
LAB_9d2a:
        cVar12 = '\0';
LAB_9d2b:
        DAT_0acf = cVar12;
        bVar7 = DAT_09a1;
        if (((((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08a0, (~bVar7 & 0x20) != 0)) &&
              (bVar7 = DAT_08b0, (~bVar7 & 0x10) != 0)) &&
             ((bVar7 = DAT_08b0, (~bVar7 & 4) != 0 && (bVar7 = DAT_08b0, (~bVar7 & 2) != 0)))) &&
            (bVar7 = DAT_08b1, (~bVar7 & 0x80) != 0)) && (bVar7 = DAT_08b1, (~bVar7 & 0x40) != 0))
        goto LAB_9d51;
      }
      else {
        cVar12 = DAT_0d87;
        if ((cVar12 != '\t') || (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) {
          bVar7 = DAT_0898;
          if ((&DAT_4e11)[bVar7] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        cVar12 = DAT_0acd;
        if (cVar12 == '\0') goto LAB_9d2a;
        FUN_a3b4();
        cVar12 = DAT_0ace;
        if (cVar12 == '\0') goto LAB_9d2a;
        bVar7 = DAT_0acf;
        if (bVar7 < DAT_4c02) {
          cVar12 = (bVar7 + 1) - (0xfe < bVar7);
          goto LAB_9d2b;
        }
        DAT_0acf = (bVar7 + 1) - (0xfe < bVar7);
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 2;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 | 0x80;
    }
    else {
LAB_9d51:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xfd;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 & 0x7f;
    }
  }
  else {
    cVar12 = DAT_0bdd;
    cVar6 = DAT_0d49;
    if (cVar12 != cVar6) goto LAB_9cbd;
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9d6e:
    if ((DAT_4e1b == 0xff) || (uVar10 = DAT_0a2e, (ushort)DAT_4e1b << 8 < uVar10)) {
      cVar12 = '\0';
    }
    else {
      bVar7 = DAT_0b91;
      if (DAT_4e95 <= bVar7) {
        bVar13 = DAT_0b90;
        DAT_0b90 = bVar13 | 0x80;
      }
      cVar12 = (bVar7 + 1) - (0xfe < bVar7);
    }
    DAT_0b91 = cVar12;
    uVar10 = DAT_0a2e;
    if (((ushort)DAT_4e1a << 8 < uVar10) && (DAT_4e1a != 0xff)) {
      bVar7 = DAT_0b90;
      if ((bVar7 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        cVar12 = DAT_0d87;
        if ((cVar12 != '\t') && (bVar7 = DAT_088c, (bVar7 & 0x80) != 0)) {
          bVar7 = DAT_0b90;
          DAT_0b90 = bVar7 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        bVar7 = DAT_0880;
        if ((~bVar7 & 1) != 0) goto LAB_9dc5;
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xef;
    }
    else {
LAB_9dc5:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 0x10;
    }
  }
  else {
    cVar12 = DAT_0bdd;
    cVar6 = DAT_0d4c;
    if (cVar12 != cVar6) goto LAB_9d6e;
  }
  bVar7 = DAT_0880;
  if (((bVar7 & 1) == 0) ||
     ((((bVar7 = DAT_08af, (~bVar7 & 0x40) != 0 && (bVar7 = DAT_08af, (~bVar7 & 2) != 0)) &&
       ((cVar12 = DAT_0dd9, cVar12 == -0x80 || (bVar7 = DAT_08b0, (~bVar7 & 8) != 0)))) &&
      (((bVar7 = DAT_08b1, (~bVar7 & 0x10) != 0 && (bVar7 = DAT_08b2, (~bVar7 & 0x80) != 0)) &&
       (bVar7 = DAT_08b4, (~bVar7 & 8) != 0)))))) {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 & 0xdf;
  }
  else {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 | 0x20;
  }
  bVar7 = DAT_0884;
  if ((bVar7 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    bVar7 = DAT_0b6f;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b6f = bVar7;
    if (DAT_4e38 <= bVar7) {
      bVar7 = DAT_0888;
      if ((~bVar7 & 8) == 0) {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 & 0xf7;
      }
      else {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 | 8;
      }
      goto LAB_9e24;
    }
  }
  bVar7 = DAT_0889;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0bd1;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0bd1 = bVar7;
    if (DAT_4e66 <= bVar7) {
      DAT_0bd1 = 0;
      bVar7 = DAT_0b94;
      DAT_0b94 = (bVar7 + 1) - (0xfe < bVar7);
    }
  }
  cVar12 = DAT_0b9a;
  if ((cVar12 != -1) && (uVar10 = DAT_0b98, DAT_4e3a <= uVar10)) {
    DAT_0b98 = 0;
    bVar7 = DAT_0b9a;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b9a = bVar7;
    if (4 < bVar7) {
      uVar2 = DAT_08af;
      DAT_08b8 = uVar2;
      uVar2 = DAT_08b0;
      DAT_08b9 = uVar2;
      uVar2 = DAT_08b1;
      DAT_08ba = uVar2;
      uVar2 = DAT_08b2;
      DAT_08bb = uVar2;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 8;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 4;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 2;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 1;
      DAT_0b9a = 0xff;
    }
    bVar7 = DAT_0be8;
    DAT_0be8 = bVar7 | 0x40;
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0a;
    DAT_0d0a = (bVar7 + 1) - (0xfe < bVar7);
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0b;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0d0b = bVar7;
    if (bVar7 <= DAT_4f16) {
      bVar5 = DAT_0d09;
      bVar11 = DAT_0ab3;
      bVar13 = bVar5 + bVar11;
      if (CARRY1(bVar5,bVar11)) {
        bVar13 = 0xff;
      }
      DAT_0d09 = bVar13;
      if ((DAT_4f16 <= bVar7) && (bVar13 <= DAT_4e84)) {
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 1;
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 8;
      }
    }
  }
  bVar7 = DAT_08d9;
  uVar10 = (ushort)bVar7 * 0x100;
  bVar7 = DAT_0881;
  if ((~bVar7 & 0x10) != 0) {
    uVar3 = DAT_08da;
    value = uVar10 - uVar3;
    if (uVar10 < uVar3) {
      uVar10 = scale_u16_by_u8(CONCAT11((~(byte)(value >> 8) + 1) - ((char)-(char)value != '\0'),
                                        -(char)value),&UNK_18b2);
      uVar10 = CONCAT11((~(byte)(uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),-(char)uVar10);
    }
    else {
      uVar10 = scale_u16_by_u8(value,&UNK_18b2);
    }
    sVar9 = DAT_08da;
    uVar10 = uVar10 + sVar9;
  }
  DAT_08da = uVar10;
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_088d;
    if (((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
        ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
         ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
       ((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 &&
        ((((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar10 = DAT_0900, DAT_4e1e <= uVar10)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)) && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x80;
      bVar7 = DAT_0adc;
      if (DAT_4e2a <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x80;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0x7f;
      DAT_0adc = 0;
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_08ec;
    if ((DAT_4e28 < bVar7) || (bVar7 = DAT_0abe, DAT_4e2b < bVar7)) {
      bVar7 = DAT_0ada;
      DAT_0ada = bVar7 & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) != 0) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x20;
      }
      bVar7 = DAT_0ada;
      if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
         ((uVar10 = DAT_0900, DAT_4e20 <= uVar10 &&
          ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0xf3 | 0x70;
      }
      else {
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x10) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xef;
          DAT_0ae1 = 0;
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x40) != 0) {
          bVar7 = DAT_0ada;
          if ((~bVar7 & 8) != 0) {
            bVar7 = DAT_0ada;
            if (((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08b1, (bVar7 & 0x20) == 0)) ||
                (uVar10 = DAT_0900, DAT_4e22 < uVar10)) ||
               ((bVar7 = DAT_08af, (~bVar7 & 8) == 0 || (bVar7 = DAT_08af, (~bVar7 & 4) == 0))))
            goto LAB_a04f;
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 | 8;
          }
          bVar7 = DAT_0ada;
          if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
             ((uVar10 = DAT_0900, uVar10 < DAT_4e20 &&
              ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 & 0xef | 100;
            goto LAB_a04f;
          }
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 4) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xfb;
          DAT_0ae1 = 0;
        }
      }
    }
  }
LAB_a04f:
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_088d;
    if ((((((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
           ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
            ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
          (bVar7 = DAT_08ec, bVar7 <= DAT_4e28)) &&
         (((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar10 = DAT_0900, uVar10 < DAT_4e24)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)))) &&
        ((bVar7 = DAT_08af, (~bVar7 & 4) != 0 && (sVar9 = DAT_0ad6, sVar9 == 0)))) &&
       (cVar12 = DAT_0ad9, cVar12 == '\0')) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x40;
      bVar7 = DAT_0add;
      if (DAT_4e31 <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = 0;
        DAT_0ae1 = 0;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xbf;
      DAT_0add = 0;
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    cVar12 = DAT_0d5f;
    if (cVar12 != -0x80) {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) == 0) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 & 0xdf;
        DAT_0ade = 0;
      }
      else {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 0x20;
        bVar7 = DAT_0ade;
        if ((DAT_4e57 <= bVar7) && (bVar7 = DAT_08b1, (~bVar7 & 0x20) != 0)) {
          bVar7 = DAT_08b1;
          DAT_08b1 = bVar7 | 0x20;
          bVar7 = DAT_0bd2;
          DAT_0bd2 = bVar7 | 0x20;
          bVar7 = DAT_08ba;
          if ((~bVar7 & 0x20) != 0) {
            bVar7 = DAT_08ba;
            DAT_08ba = bVar7 | 0x20;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 2;
          }
        }
      }
    }
    bVar7 = DAT_0881;
    if ((bVar7 & 0x10) == 0) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x10;
      bVar7 = DAT_0adf;
      if ((((DAT_4e57 <= bVar7) &&
           (((bVar7 = DAT_088d, (~bVar7 & 0x20) == 0 || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
            ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
             ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0))))))))
          && ((bVar7 = DAT_0ada, (~bVar7 & 0x80) == 0 || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0))))
         && ((((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 && (bVar7 = DAT_0abe, bVar7 <= DAT_4e29)) &&
              (uVar10 = DAT_0900, uVar10 < DAT_4e24)) &&
             (((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)) &&
              ((sVar9 = DAT_0ad6, sVar9 == 0 && (cVar12 = DAT_0ad9, cVar12 == '\0')))))))) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 8;
        bVar7 = DAT_0ae0;
        if (DAT_4e31 <= bVar7) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0x7f;
          cVar12 = DAT_0d5f;
          if ((cVar12 != -0x80) && (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) {
            bVar7 = DAT_08b1;
            DAT_08b1 = bVar7 & 0xdf;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 0x20;
          }
        }
        goto LAB_a1ae;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xef;
      DAT_0adf = 0;
    }
    bVar7 = DAT_0adb;
    DAT_0adb = bVar7 & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  FUN_5fc8();
  bVar7 = DAT_0891;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a1d9:
      bVar7 = DAT_0bd3;
      if (bVar7 == 0) {
LAB_a20e:
        bVar7 = DAT_0be9;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) != 0) goto LAB_a296;
          if ((bVar7 & 0x40) != 0) goto LAB_a2af;
          if ((bVar7 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
          FUN_b7b9();
        }
      }
      else {
        if ((bVar7 & 0x80) != 0) goto LAB_a282;
        if ((bVar7 & 0x40) != 0) goto LAB_a287;
        if ((bVar7 & 0x20) != 0) goto LAB_a28c;
        if ((bVar7 & 0x10) != 0) goto LAB_a291;
        if ((bVar7 & 8) != 0) goto LAB_a29b;
        if ((bVar7 & 4) != 0) goto LAB_a2a0;
        if ((bVar7 & 2) != 0) goto LAB_a2a5;
        if ((bVar7 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
        FUN_b721();
      }
    }
    else {
      bVar7 = DAT_0890;
      if ((~bVar7 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_0890;
        if ((~bVar7 & 0x40) != 0) goto LAB_a1d9;
        FUN_b4c6();
      }
    }
  }
  else {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a24a:
      bVar7 = DAT_0bd2;
      if (bVar7 == 0) {
LAB_a26f:
        bVar7 = DAT_0be8;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) == 0) {
            if ((bVar7 & 0x40) == 0) {
              if ((bVar7 & 4) != 0) goto LAB_a2b4;
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
      else if ((bVar7 & 0x80) == 0) {
        if ((bVar7 & 0x40) == 0) {
          if ((bVar7 & 0x20) == 0) {
            if ((bVar7 & 0x10) == 0) {
              if ((bVar7 & 8) == 0) {
                if ((bVar7 & 4) == 0) {
                  if ((bVar7 & 2) == 0) {
                    if ((bVar7 & 1) != 0) goto LAB_a2aa;
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
    else {
      bVar7 = DAT_088f;
      if ((~bVar7 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_088f;
        if ((~bVar7 & 0x40) != 0) goto LAB_a24a;
        FUN_b4c6();
      }
    }
  }
LAB_a2b9:
  bVar7 = DAT_0000;
  bVar7 = bVar7 & 0xe0;
  if (bVar7 == 0x80) {
    bVar7 = DAT_08b1;
    if (((bVar7 & 0x80) != 0x80) || (bVar7 = DAT_0000, (bVar7 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar7 != 0) {
    if (((bVar7 == 0x40) && (bVar7 = DAT_08b1, (bVar7 & 0x80) == 0x80)) &&
       (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  bVar7 = DAT_08b1;
  if (((bVar7 & 0x80) == 0x80) && (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  bVar7 = DAT_08bc;
  DAT_08bc = bVar7 & 0xf7;
  return;
}


/* Entry 99fd */

void FUN_99fd(void)

{
  int iVar1;
  ushort value;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar11;
  undefined2 uVar8;
  char cVar12;
  short sVar9;
  byte bVar13;
  ushort uVar10;
  
  bVar7 = DAT_08e8._0_1_;
  if (DAT_4b00 <= bVar7) {
    DAT_0aaa = 0;
    DAT_0aab = 0;
    bVar7 = DAT_0aa6;
    if (((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0aa6, (bVar7 & 0x10) != 0)) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 8;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xdf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
    }
  }
  bVar7 = DAT_0aa6;
  if ((bVar7 & 8) != 0) {
    bVar7 = DAT_0aaa;
    if (bVar7 < DAT_4b01) {
      bVar7 = DAT_08e8._0_1_;
      if (DAT_4b02 <= bVar7) {
        DAT_0aaa = 0;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 | 4;
        bVar7 = DAT_0aa6;
        DAT_0aa6 = bVar7 & 0xf7;
      }
    }
    else {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xbf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xdf;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xef;
      DAT_0aaa = 0;
      DAT_0aab = 0;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xf7;
    }
  }
  bVar7 = DAT_0aa6;
  if ((bVar7 & 4) != 0) {
    bVar7 = DAT_0aa7;
    bVar13 = DAT_4b05;
    if ((bVar7 & 8) != 0) {
      bVar13 = DAT_4b04;
    }
    DAT_0aac = bVar13;
    bVar7 = DAT_08e8._0_1_;
    if ((bVar7 < DAT_4b02) || (bVar7 = DAT_0aaa, DAT_4b06 <= bVar7)) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 | 1;
      bVar7 = DAT_0aa7;
      DAT_0aa7 = bVar7 | 2;
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfb;
    }
  }
  bVar7 = DAT_0aa6;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0aa6;
    if ((bVar7 & 1) != 0) {
      bVar7 = DAT_0aae;
      bVar7 = (bVar7 + 1) - (0xfe < bVar7);
      DAT_0aae = bVar7;
      if (DAT_4b07 <= bVar7) {
        DAT_0aae = 0;
        bVar7 = DAT_0aad;
        DAT_0aad = (bVar7 + 1) - (0xfe < bVar7);
        bVar7 = DAT_0aa7;
        if ((bVar7 & 2) != 0) {
          bVar7 = DAT_0aa7;
          bVar13 = DAT_4b05;
          if ((bVar7 & 8) != 0) {
            bVar13 = DAT_4b04;
          }
          bVar11 = DAT_0aad;
          bVar7 = bVar13 + bVar11;
          if (CARRY1(bVar13,bVar11)) {
            bVar7 = 0xff;
          }
          bVar13 = DAT_0a83;
          if (bVar7 < bVar13) {
            DAT_0aac = bVar7;
          }
          else {
            bVar7 = DAT_0aa7;
            DAT_0aa7 = bVar7 & 0xfd;
          }
        }
        bVar7 = DAT_0aa7;
        if ((~bVar7 & 2) != 0) {
          bVar7 = DAT_0aa6;
          DAT_0aa6 = bVar7 & 0xfe;
          DAT_0aad = 0;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xf7;
          bVar7 = DAT_0aa7;
          DAT_0aa7 = bVar7 & 0xfb;
        }
      }
    }
    bVar7 = DAT_0aa6;
    if ((~bVar7 & 1) != 0) {
      bVar7 = DAT_0aa6;
      DAT_0aa6 = bVar7 & 0xfd;
      DAT_0aaa = 0;
      DAT_0aab = 0;
    }
  }
  uVar8 = DAT_0ab4;
  DAT_0ab6 = uVar8;
  sVar9 = DAT_0ab0;
  DAT_0ab4 = sVar9;
  sVar4 = DAT_0ab6;
  sVar9 = sVar9 - sVar4;
  bVar7 = DAT_0ab2;
  if ((~bVar7 & 4) != 0) {
    sVar9 = 0;
  }
  if ((char)((ushort)sVar9 >> 8) != '\0') {
    sVar9 = 0xff;
  }
  DAT_0ab3 = (char)sVar9;
  bVar7 = DAT_0ab2;
  DAT_0ab2 = bVar7 | 4;
  bVar7 = DAT_0ab3;
  iVar1 = (uint)DAT_4bd4 * (uint)bVar7;
  DAT_0dde = (short)((uint)iVar1 >> 0x10);
  bVar7 = DAT_0aba;
  bVar11 = (byte)iVar1;
  bVar13 = (byte)((uint)iVar1 >> 8);
  DAT_0de0 = CONCAT11(bVar13 - (bVar11 < bVar7),bVar11 - bVar7);
  if (bVar13 < (bVar11 < bVar7)) {
    cVar12 = DAT_0dde._1_1_;
    if (cVar12 == '\x01') goto LAB_9b9a;
    if (cVar12 != '\0') goto LAB_9b48;
    uVar8 = DAT_0de0;
    iVar1 = (uint)DAT_4bd6 *
            (uint)CONCAT11((~(byte)((ushort)uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),
                           -(char)uVar8);
    uVar8 = (undefined2)iVar1;
    if ((short)((uint)iVar1 >> 0x10) != 0) {
      uVar8 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)uVar8 >> 8);
    bVar11 = (byte)uVar8;
    if ((bVar7 & 1) == 0) {
      bVar5 = DAT_0ab8._1_1_;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9b87;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar7 = DAT_0ab8._1_1_;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9b87:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar8;
  }
  else {
    cVar12 = DAT_0dde._1_1_;
    if (cVar12 != '\0') {
LAB_9b48:
      DAT_0de0 = 0xffff;
    }
LAB_9b9a:
    uVar10 = DAT_0de0;
    uVar8 = (undefined2)((uint)DAT_4bd6 * (uint)uVar10);
    if ((short)((uint)DAT_4bd6 * (uint)uVar10 >> 0x10) != 0) {
      uVar8 = 0xffff;
    }
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)uVar8 >> 8);
    bVar11 = (byte)uVar8;
    if ((bVar7 & 1) == 0) {
      bVar7 = DAT_0ab8._1_1_;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9bcc:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfe;
    }
    else {
      bVar5 = DAT_0ab8._1_1_;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9bcc;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 1;
    }
    DAT_0ab8 = uVar8;
  }
  bVar13 = DAT_0aba;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 1) == 0) {
    bVar7 = DAT_0ab8._0_1_;
    cVar12 = bVar13 + bVar7;
    if (CARRY1(bVar13,bVar7)) {
      cVar12 = -1;
    }
  }
  else {
    bVar7 = DAT_0ab8._0_1_;
    cVar12 = bVar13 - bVar7;
    if (bVar13 < bVar7) {
      cVar12 = '\0';
    }
  }
  DAT_0aba = cVar12;
  bVar7 = DAT_0aba;
  bVar13 = DAT_0abe;
  if (bVar7 < bVar13) {
    sVar9 = (ushort)(byte)-(bVar7 - bVar13) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)sVar9 >> 8);
    bVar11 = (byte)sVar9;
    if ((bVar7 & 2) == 0) {
      bVar5 = DAT_0abd;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9c13;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar7 = DAT_0abd;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9c13:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar8;
  }
  else {
    sVar9 = (ushort)(byte)(bVar7 - bVar13) * (ushort)DAT_4bd6;
    bVar7 = DAT_0ab2;
    bVar13 = (byte)((ushort)sVar9 >> 8);
    bVar11 = (byte)sVar9;
    if ((bVar7 & 2) == 0) {
      bVar7 = DAT_0abd;
      uVar8 = CONCAT11(bVar13 + CARRY1(bVar11,bVar7),bVar11 + bVar7);
      if (CARRY1(bVar13,CARRY1(bVar11,bVar7))) {
        uVar8 = 0xffff;
      }
LAB_9c4a:
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 & 0xfd;
    }
    else {
      bVar5 = DAT_0abd;
      bVar7 = bVar13 - (bVar11 < bVar5);
      uVar8 = CONCAT11(bVar7,bVar11 - bVar5);
      if ((bVar11 < bVar5) <= bVar13) goto LAB_9c4a;
      cVar12 = -(bVar11 - bVar5);
      uVar8 = CONCAT11((~bVar7 + 1) - (cVar12 != '\0'),cVar12);
      bVar7 = DAT_0ab2;
      DAT_0ab2 = bVar7 | 2;
    }
    RAM0abc = uVar8;
  }
  bVar13 = DAT_0abe;
  bVar7 = DAT_0ab2;
  if ((bVar7 & 2) == 0) {
    bVar7 = DAT_0abc;
    cVar12 = bVar13 + bVar7;
    if (CARRY1(bVar13,bVar7)) {
      cVar12 = -1;
    }
  }
  else {
    bVar7 = DAT_0abc;
    cVar12 = bVar13 - bVar7;
    if (bVar13 < bVar7) {
      cVar12 = '\0';
    }
  }
  DAT_0abe = cVar12;
  if (((DAT_4ba7 != -0x80) ||
      (((cVar12 = DAT_0d87, cVar12 == '\t' && (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) ||
       (bVar7 = DAT_0900._0_1_, DAT_4ba8 <= bVar7)))) || (bVar7 = DAT_08ce._0_1_, DAT_4ba9 <= bVar7)
     ) {
    DAT_0aaf = 0;
    bVar7 = DAT_088d;
    DAT_088d = bVar7 & 0xbf;
  }
  cVar12 = DAT_0af7;
  if (cVar12 == '\0') {
    bVar7 = DAT_0aaf;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0aaf = bVar7;
    if (DAT_4baa <= bVar7) {
      bVar7 = DAT_088d;
      DAT_088d = bVar7 | 0x40;
    }
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9cbd:
    cVar12 = DAT_0d87;
    if (cVar12 == '\t') {
      bVar7 = DAT_08f4;
      if (((bVar7 < DAT_4c03) || (uVar10 = DAT_0992, (ushort)DAT_4c04 << 8 < uVar10)) ||
         ((uVar10 = DAT_0982, DAT_4c06 < uVar10 || (bVar7 = DAT_0881, (~bVar7 & 0x20) == 0)))) {
LAB_9d2a:
        cVar12 = '\0';
LAB_9d2b:
        DAT_0acf = cVar12;
        bVar7 = DAT_09a1;
        if (((((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08a0, (~bVar7 & 0x20) != 0)) &&
              (bVar7 = DAT_08b0, (~bVar7 & 0x10) != 0)) &&
             ((bVar7 = DAT_08b0, (~bVar7 & 4) != 0 && (bVar7 = DAT_08b0, (~bVar7 & 2) != 0)))) &&
            (bVar7 = DAT_08b1, (~bVar7 & 0x80) != 0)) && (bVar7 = DAT_08b1, (~bVar7 & 0x40) != 0))
        goto LAB_9d51;
      }
      else {
        cVar12 = DAT_0d87;
        if ((cVar12 != '\t') || (bVar7 = DAT_0896._0_1_, (~bVar7 & 0x10) == 0)) {
          bVar7 = DAT_0898;
          if ((&DAT_4e11)[bVar7] != '\0') goto LAB_9d03;
          goto LAB_9d2a;
        }
        if (DAT_4e10 == '\0') goto LAB_9d2a;
LAB_9d03:
        FUN_a363();
        cVar12 = DAT_0acd;
        if (cVar12 == '\0') goto LAB_9d2a;
        FUN_a3b4();
        cVar12 = DAT_0ace;
        if (cVar12 == '\0') goto LAB_9d2a;
        bVar7 = DAT_0acf;
        if (bVar7 < DAT_4c02) {
          cVar12 = (bVar7 + 1) - (0xfe < bVar7);
          goto LAB_9d2b;
        }
        DAT_0acf = (bVar7 + 1) - (0xfe < bVar7);
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 2;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 | 0x80;
    }
    else {
LAB_9d51:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xfd;
      bVar7 = DAT_0889;
      DAT_0889 = bVar7 & 0x7f;
    }
  }
  else {
    cVar12 = DAT_0bdd;
    cVar6 = DAT_0d49;
    if (cVar12 != cVar6) goto LAB_9cbd;
  }
  bVar7 = DAT_08a0;
  if ((bVar7 & 4) == 0) {
LAB_9d6e:
    if ((DAT_4e1b == 0xff) || (uVar10 = DAT_0a2e, (ushort)DAT_4e1b << 8 < uVar10)) {
      cVar12 = '\0';
    }
    else {
      bVar7 = DAT_0b91;
      if (DAT_4e95 <= bVar7) {
        bVar13 = DAT_0b90;
        DAT_0b90 = bVar13 | 0x80;
      }
      cVar12 = (bVar7 + 1) - (0xfe < bVar7);
    }
    DAT_0b91 = cVar12;
    uVar10 = DAT_0a2e;
    if (((ushort)DAT_4e1a << 8 < uVar10) && (DAT_4e1a != 0xff)) {
      bVar7 = DAT_0b90;
      if ((bVar7 & 0x80) == 0) {
LAB_9db7:
        if (DAT_4e1b == 0xff) goto LAB_9dc0;
      }
      else {
        cVar12 = DAT_0d87;
        if ((cVar12 != '\t') && (bVar7 = DAT_088c, (bVar7 & 0x80) != 0)) {
          bVar7 = DAT_0b90;
          DAT_0b90 = bVar7 & 0x7f;
          DAT_0b91 = 0;
          goto LAB_9db7;
        }
LAB_9dc0:
        bVar7 = DAT_0880;
        if ((~bVar7 & 1) != 0) goto LAB_9dc5;
      }
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xef;
    }
    else {
LAB_9dc5:
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 0x10;
    }
  }
  else {
    cVar12 = DAT_0bdd;
    cVar6 = DAT_0d4c;
    if (cVar12 != cVar6) goto LAB_9d6e;
  }
  bVar7 = DAT_0880;
  if (((bVar7 & 1) == 0) ||
     ((((bVar7 = DAT_08af, (~bVar7 & 0x40) != 0 && (bVar7 = DAT_08af, (~bVar7 & 2) != 0)) &&
       ((cVar12 = DAT_0dd9, cVar12 == -0x80 || (bVar7 = DAT_08b0, (~bVar7 & 8) != 0)))) &&
      (((bVar7 = DAT_08b1, (~bVar7 & 0x10) != 0 && (bVar7 = DAT_08b2, (~bVar7 & 0x80) != 0)) &&
       (bVar7 = DAT_08b4, (~bVar7 & 8) != 0)))))) {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 & 0xdf;
  }
  else {
    bVar7 = DAT_0884;
    DAT_0884 = bVar7 | 0x20;
  }
  bVar7 = DAT_0884;
  if ((bVar7 & 0x20) == 0) {
LAB_9e24:
    DAT_0b6f = 0;
  }
  else {
    bVar7 = DAT_0b6f;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b6f = bVar7;
    if (DAT_4e38 <= bVar7) {
      bVar7 = DAT_0888;
      if ((~bVar7 & 8) == 0) {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 & 0xf7;
      }
      else {
        bVar7 = DAT_0888;
        DAT_0888 = bVar7 | 8;
      }
      goto LAB_9e24;
    }
  }
  bVar7 = DAT_0889;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0bd1;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0bd1 = bVar7;
    if (DAT_4e66 <= bVar7) {
      DAT_0bd1 = 0;
      bVar7 = DAT_0b94;
      DAT_0b94 = (bVar7 + 1) - (0xfe < bVar7);
    }
  }
  cVar12 = DAT_0b9a;
  if ((cVar12 != -1) && (uVar10 = DAT_0b98, DAT_4e3a <= uVar10)) {
    DAT_0b98 = 0;
    bVar7 = DAT_0b9a;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0b9a = bVar7;
    if (4 < bVar7) {
      uVar2 = DAT_08af;
      DAT_08b8 = uVar2;
      uVar2 = DAT_08b0;
      DAT_08b9 = uVar2;
      uVar2 = DAT_08b1;
      DAT_08ba = uVar2;
      uVar2 = DAT_08b2;
      DAT_08bb = uVar2;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 8;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 4;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 2;
      bVar7 = DAT_0bd2;
      DAT_0bd2 = bVar7 | 1;
      DAT_0b9a = 0xff;
    }
    bVar7 = DAT_0be8;
    DAT_0be8 = bVar7 | 0x40;
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0a;
    DAT_0d0a = (bVar7 + 1) - (0xfe < bVar7);
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar7 = DAT_0d06, (~bVar7 & 0x80) != 0)) {
    bVar7 = DAT_0d0b;
    bVar7 = (bVar7 + 1) - (0xfe < bVar7);
    DAT_0d0b = bVar7;
    if (bVar7 <= DAT_4f16) {
      bVar5 = DAT_0d09;
      bVar11 = DAT_0ab3;
      bVar13 = bVar5 + bVar11;
      if (CARRY1(bVar5,bVar11)) {
        bVar13 = 0xff;
      }
      DAT_0d09 = bVar13;
      if ((DAT_4f16 <= bVar7) && (bVar13 <= DAT_4e84)) {
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 1;
        bVar7 = DAT_0d08;
        DAT_0d08 = bVar7 | 8;
      }
    }
  }
  bVar7 = DAT_08d9;
  uVar10 = (ushort)bVar7 * 0x100;
  bVar7 = DAT_0881;
  if ((~bVar7 & 0x10) != 0) {
    uVar3 = DAT_08da;
    value = uVar10 - uVar3;
    if (uVar10 < uVar3) {
      uVar10 = scale_u16_by_u8(CONCAT11((~(byte)(value >> 8) + 1) - ((char)-(char)value != '\0'),
                                        -(char)value),&UNK_18b2);
      uVar10 = CONCAT11((~(byte)(uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),-(char)uVar10);
    }
    else {
      uVar10 = scale_u16_by_u8(value,&UNK_18b2);
    }
    sVar9 = DAT_08da;
    uVar10 = uVar10 + sVar9;
  }
  DAT_08da = uVar10;
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_088d;
    if (((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
        ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
         ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
       ((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 &&
        ((((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar10 = DAT_0900, DAT_4e1e <= uVar10)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)) && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x80;
      bVar7 = DAT_0adc;
      if (DAT_4e2a <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x80;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0x7f;
      DAT_0adc = 0;
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_08ec;
    if ((DAT_4e28 < bVar7) || (bVar7 = DAT_0abe, DAT_4e2b < bVar7)) {
      bVar7 = DAT_0ada;
      DAT_0ada = bVar7 & 0xcb;
      DAT_0ae1 = 0;
    }
    else {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) != 0) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 | 0x20;
      }
      bVar7 = DAT_0ada;
      if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
         ((uVar10 = DAT_0900, DAT_4e20 <= uVar10 &&
          ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0xf3 | 0x70;
      }
      else {
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x10) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xef;
          DAT_0ae1 = 0;
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 0x40) != 0) {
          bVar7 = DAT_0ada;
          if ((~bVar7 & 8) != 0) {
            bVar7 = DAT_0ada;
            if (((((~bVar7 & 0x80) != 0) && (bVar7 = DAT_08b1, (bVar7 & 0x20) == 0)) ||
                (uVar10 = DAT_0900, DAT_4e22 < uVar10)) ||
               ((bVar7 = DAT_08af, (~bVar7 & 8) == 0 || (bVar7 = DAT_08af, (~bVar7 & 4) == 0))))
            goto LAB_a04f;
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 | 8;
          }
          bVar7 = DAT_0ada;
          if ((((~bVar7 & 0x80) == 0) || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) &&
             ((uVar10 = DAT_0900, uVar10 < DAT_4e20 &&
              ((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)))))) {
            bVar7 = DAT_0ada;
            DAT_0ada = bVar7 & 0xef | 100;
            goto LAB_a04f;
          }
        }
        bVar7 = DAT_0ada;
        if ((bVar7 & 4) != 0) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0xfb;
          DAT_0ae1 = 0;
        }
      }
    }
  }
LAB_a04f:
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    bVar7 = DAT_088d;
    if ((((((((~bVar7 & 0x20) == 0) || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
           ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
            ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0)))))) &&
          (bVar7 = DAT_08ec, bVar7 <= DAT_4e28)) &&
         (((bVar7 = DAT_0abe, bVar7 <= DAT_4e29 && (uVar10 = DAT_0900, uVar10 < DAT_4e24)) &&
          (bVar7 = DAT_08af, (~bVar7 & 8) != 0)))) &&
        ((bVar7 = DAT_08af, (~bVar7 & 4) != 0 && (sVar9 = DAT_0ad6, sVar9 == 0)))) &&
       (cVar12 = DAT_0ad9, cVar12 == '\0')) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x40;
      bVar7 = DAT_0add;
      if (DAT_4e31 <= bVar7) {
        bVar7 = DAT_0ada;
        DAT_0ada = bVar7 & 0x83;
        DAT_0ad6 = 0;
        DAT_0ad9 = 0;
        DAT_0ae1 = 0;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xbf;
      DAT_0add = 0;
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    cVar12 = DAT_0d5f;
    if (cVar12 != -0x80) {
      bVar7 = DAT_0ada;
      if ((bVar7 & 0x40) == 0) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 & 0xdf;
        DAT_0ade = 0;
      }
      else {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 0x20;
        bVar7 = DAT_0ade;
        if ((DAT_4e57 <= bVar7) && (bVar7 = DAT_08b1, (~bVar7 & 0x20) != 0)) {
          bVar7 = DAT_08b1;
          DAT_08b1 = bVar7 | 0x20;
          bVar7 = DAT_0bd2;
          DAT_0bd2 = bVar7 | 0x20;
          bVar7 = DAT_08ba;
          if ((~bVar7 & 0x20) != 0) {
            bVar7 = DAT_08ba;
            DAT_08ba = bVar7 | 0x20;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 2;
          }
        }
      }
    }
    bVar7 = DAT_0881;
    if ((bVar7 & 0x10) == 0) {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 | 0x10;
      bVar7 = DAT_0adf;
      if ((((DAT_4e57 <= bVar7) &&
           (((bVar7 = DAT_088d, (~bVar7 & 0x20) == 0 || (bVar7 = DAT_0885, (~bVar7 & 0x20) == 0)) ||
            ((bVar7 = DAT_0889, (~bVar7 & 2) != 0 &&
             ((bVar7 = DAT_0880, (~bVar7 & 4) != 0 && (bVar7 = DAT_0aa6, (~bVar7 & 4) != 0))))))))
          && ((bVar7 = DAT_0ada, (~bVar7 & 0x80) == 0 || (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0))))
         && ((((bVar7 = DAT_08ec, bVar7 <= DAT_4e28 && (bVar7 = DAT_0abe, bVar7 <= DAT_4e29)) &&
              (uVar10 = DAT_0900, uVar10 < DAT_4e24)) &&
             (((bVar7 = DAT_08af, (~bVar7 & 8) != 0 && (bVar7 = DAT_08af, (~bVar7 & 4) != 0)) &&
              ((sVar9 = DAT_0ad6, sVar9 == 0 && (cVar12 = DAT_0ad9, cVar12 == '\0')))))))) {
        bVar7 = DAT_0adb;
        DAT_0adb = bVar7 | 8;
        bVar7 = DAT_0ae0;
        if (DAT_4e31 <= bVar7) {
          bVar7 = DAT_0ada;
          DAT_0ada = bVar7 & 0x7f;
          cVar12 = DAT_0d5f;
          if ((cVar12 != -0x80) && (bVar7 = DAT_08b1, (bVar7 & 0x20) != 0)) {
            bVar7 = DAT_08b1;
            DAT_08b1 = bVar7 & 0xdf;
            bVar7 = DAT_0bd2;
            DAT_0bd2 = bVar7 | 0x20;
          }
        }
        goto LAB_a1ae;
      }
    }
    else {
      bVar7 = DAT_0adb;
      DAT_0adb = bVar7 & 0xef;
      DAT_0adf = 0;
    }
    bVar7 = DAT_0adb;
    DAT_0adb = bVar7 & 0xf7;
    DAT_0ae0 = 0;
  }
LAB_a1ae:
  FUN_5fc8();
  bVar7 = DAT_0891;
  if ((~bVar7 & 2) == 0) {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a1d9:
      bVar7 = DAT_0bd3;
      if (bVar7 == 0) {
LAB_a20e:
        bVar7 = DAT_0be9;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) != 0) goto LAB_a296;
          if ((bVar7 & 0x40) != 0) goto LAB_a2af;
          if ((bVar7 & 4) == 0) goto LAB_a2b9;
LAB_a2b4:
          FUN_b7b9();
        }
      }
      else {
        if ((bVar7 & 0x80) != 0) goto LAB_a282;
        if ((bVar7 & 0x40) != 0) goto LAB_a287;
        if ((bVar7 & 0x20) != 0) goto LAB_a28c;
        if ((bVar7 & 0x10) != 0) goto LAB_a291;
        if ((bVar7 & 8) != 0) goto LAB_a29b;
        if ((bVar7 & 4) != 0) goto LAB_a2a0;
        if ((bVar7 & 2) != 0) goto LAB_a2a5;
        if ((bVar7 & 1) == 0) goto LAB_a20e;
LAB_a2aa:
        FUN_b721();
      }
    }
    else {
      bVar7 = DAT_0890;
      if ((~bVar7 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_0890;
        if ((~bVar7 & 0x40) != 0) goto LAB_a1d9;
        FUN_b4c6();
      }
    }
  }
  else {
    bVar7 = DAT_0891;
    if ((bVar7 & 0x80) == 0) {
LAB_a24a:
      bVar7 = DAT_0bd2;
      if (bVar7 == 0) {
LAB_a26f:
        bVar7 = DAT_0be8;
        if (bVar7 != 0) {
          if ((bVar7 & 0x80) == 0) {
            if ((bVar7 & 0x40) == 0) {
              if ((bVar7 & 4) != 0) goto LAB_a2b4;
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
      else if ((bVar7 & 0x80) == 0) {
        if ((bVar7 & 0x40) == 0) {
          if ((bVar7 & 0x20) == 0) {
            if ((bVar7 & 0x10) == 0) {
              if ((bVar7 & 8) == 0) {
                if ((bVar7 & 4) == 0) {
                  if ((bVar7 & 2) == 0) {
                    if ((bVar7 & 1) != 0) goto LAB_a2aa;
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
    else {
      bVar7 = DAT_088f;
      if ((~bVar7 & 0x80) == 0) {
        FUN_b3ec();
      }
      else {
        bVar7 = DAT_088f;
        if ((~bVar7 & 0x40) != 0) goto LAB_a24a;
        FUN_b4c6();
      }
    }
  }
LAB_a2b9:
  bVar7 = DAT_0000;
  bVar7 = bVar7 & 0xe0;
  if (bVar7 == 0x80) {
    bVar7 = DAT_08b1;
    if (((bVar7 & 0x80) != 0x80) || (bVar7 = DAT_0000, (bVar7 & 0xe0) != 0x80)) goto LAB_a30f;
    FUN_a489();
  }
  else if (bVar7 != 0) {
    if (((bVar7 == 0x40) && (bVar7 = DAT_08b1, (bVar7 & 0x80) == 0x80)) &&
       (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0x40)) {
      FUN_a505();
      return;
    }
    goto LAB_a30f;
  }
  bVar7 = DAT_08b1;
  if (((bVar7 & 0x80) == 0x80) && (bVar7 = DAT_0000, (bVar7 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_a30f:
  bVar7 = DAT_08bc;
  DAT_08bc = bVar7 & 0xf7;
  return;
}


/* Entry a314 */

void FUN_a314(void)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  
  bVar4 = DAT_0886;
  if ((~bVar4 & 0x40) == 0) {
    bVar4 = DAT_08ec;
    bVar1 = DAT_0a05;
    if (bVar4 <= bVar1) {
      bVar1 = DAT_0a07;
      if (bVar4 == bVar1) {
        bVar4 = DAT_0b1a;
        bVar4 = (bVar4 + 1) - (0xfe < bVar4);
      }
      else {
        bVar4 = 0;
      }
      DAT_0b1a = bVar4;
      if (DAT_34a5 <= bVar4) {
        bVar1 = DAT_08ec;
        bVar4 = bVar1 + DAT_34a4;
        if (CARRY1(bVar1,DAT_34a4)) {
          bVar4 = 0xff;
        }
        bVar1 = DAT_0a06;
        if (bVar4 < bVar1) {
          DAT_0a06 = bVar4;
        }
      }
    }
  }
  else {
    bVar4 = DAT_0a05;
    cVar3 = bVar4 + DAT_34a4;
    if (CARRY1(bVar4,DAT_34a4)) {
      cVar3 = -1;
    }
    DAT_0a06 = cVar3;
    DAT_0b1a = 0;
  }
  uVar2 = DAT_08ec;
  DAT_0a07 = uVar2;
  return;
}


/* Entry a363 */

void FUN_a363(void)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  
  uVar2 = DAT_08e8;
  bVar6 = 0x10;
  do {
    if (*(ushort *)(&UNK_4c08 + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_a37e;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_a37e:
  uVar5 = CONCAT11(bVar6,0x24);
  uVar2 = DAT_0900;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_4c1c + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_a39b;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_a39b:
  RAM0ad0 = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_0ad1;
  bVar6 = DAT_0ad0;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_0acd = (&DAT_4c44)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


/* Entry a3b4 */

void FUN_a3b4(void)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  
  uVar2 = DAT_0c90;
  bVar6 = 0x10;
  do {
    if (*(ushort *)(&UNK_4d0c + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_a3cf;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_a3cf:
  uVar5 = CONCAT11(bVar6,0x24);
  uVar2 = DAT_0900;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_4d20 + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_a3ec;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_a3ec:
  RAM0ad2 = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_0ad3;
  bVar6 = DAT_0ad2;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_0ace = (&DAT_4d48)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


/* Entry a405 */

void FUN_a405(void)

{
  undefined2 uVar1;
  ushort uVar2;
  
  uVar1 = DAT_08e8;
  DAT_0ba2 = uVar1;
  DAT_0ba4 = 0x313a;
  uVar2 = axis_index_u16_ascending(':');
  DAT_09f8 = uVar2;
  uVar1 = DAT_0900;
  DAT_0ba2 = uVar1;
  DAT_0ba4 = 0x314e;
  uVar2 = axis_index_u16_ascending('N');
  DAT_09fa = uVar2;
  uVar1 = DAT_09fa;
  DAT_0dde = uVar1;
  uVar1 = DAT_09f8;
  DAT_0de0 = uVar1;
  uVar2 = bilinear_u8_grid(&UNK_3165,'\n');
  DAT_09d8 = (char)(uVar2 + 0x80 >> 8);
  return;
}


/* Entry a448 */

void FUN_a448(void)

{
  byte bVar1;
  ushort uVar2;
  byte *table;
  
  bVar1 = DAT_0898;
  if (DAT_31ea < bVar1) {
    table = &UNK_3200;
  }
  else {
    table = &UNK_31ec;
  }
  uVar2 = DAT_0900;
  uVar2 = lookup_u8_uniform_u16_axis(uVar2,table);
  DAT_09d9 = (char)(uVar2 >> 8);
  return;
}


/* Entry a462 */

void FUN_a462(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = DAT_09cf;
  if ((bVar1 & 0x10) != 0) {
    uVar2 = DAT_09d2;
    uVar3 = DAT_09da;
    if (uVar3 <= uVar2) {
      if (uVar2 != uVar3) goto LAB_a484;
      bVar1 = DAT_09de;
      bVar1 = (bVar1 + 1) - (0xfe < bVar1);
      DAT_09de = bVar1;
      if (bVar1 < DAT_3214) {
        return;
      }
    }
    bVar1 = DAT_09cf;
    DAT_09cf = bVar1 & 0xef;
  }
LAB_a484:
  DAT_09de = 0;
  return;
}


/* Entry a489 */

void FUN_a489(void)

{
  byte bVar1;
  short *psVar2;
  undefined2 uVar3;
  short sVar4;
  char cVar5;
  short *psVar6;
  
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0x7f;
  uVar3 = FUN_5fa4();
  DAT_0dde = uVar3;
  psVar6 = &DAT_1800;
  sVar4 = 0;
  do {
    sVar4 = sVar4 + *psVar6;
    if (((ushort)psVar6 & 0x1fff) == 0x1000) {
      sVar4 = FUN_5fa4(0x1000);
    }
    psVar6 = psVar6 + 1;
  } while ((psVar6 != (short *)0x0) && (psVar2 = (short *)DAT_0dde, psVar6 <= psVar2));
  cVar5 = '\0';
  if (sVar4 != -0x55ab) {
    cVar5 = -1;
  }
  DAT_0e66 = sVar4;
  if (cVar5 == '\0') {
    FUN_5fa4();
    cVar5 = DAT_0d65;
    if ((cVar5 != -0x80) && (bVar1 = DAT_08b2, (bVar1 & 0x80) != 0)) {
      bVar1 = DAT_08b2;
      DAT_08b2 = bVar1 & 0x7f;
      bVar1 = DAT_0bd2;
      DAT_0bd2 = bVar1 | 0x10;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 | 0x80;
  }
  else {
    cVar5 = DAT_0d65;
    if ((cVar5 != -0x80) && (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)) {
      bVar1 = DAT_08b2;
      DAT_08b2 = bVar1 | 0x80;
      bVar1 = DAT_0bd2;
      DAT_0bd2 = bVar1 | 0x10;
      bVar1 = DAT_08bb;
      if ((~bVar1 & 0x80) != 0) {
        bVar1 = DAT_08bb;
        DAT_08bb = bVar1 | 0x80;
        bVar1 = DAT_0bd2;
        DAT_0bd2 = bVar1 | 1;
      }
    }
  }
  FUN_5fa4();
  return;
}


/* Entry a505 */

void FUN_a505(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short *psVar4;
  
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0x7f;
  sVar3 = 0x5555;
  do {
    psVar4 = &DAT_0800;
    do {
      *psVar4 = sVar3;
      psVar4 = psVar4 + 1;
      if (psVar4 == (short *)0x0) break;
    } while (psVar4 < &UNK_0fff);
    psVar4 = &DAT_0800;
    do {
      if (sVar3 != *psVar4) {
        cVar2 = -1;
        goto LAB_a538;
      }
      psVar4 = psVar4 + 1;
    } while ((psVar4 != (short *)0x0) && (psVar4 < &UNK_0fff));
    sVar3 = CONCAT11(~(byte)((ushort)sVar3 >> 8),~(byte)sVar3);
  } while (sVar3 != 0x5555);
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


/* Entry a557 */

void FUN_a557(void)

{
  byte bVar1;
  
  bVar1 = DAT_0887;
  DAT_0887 = bVar1 & 0xdf;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 | 8;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 & 0xf7;
  return;
}


/* Entry a564 */

void FUN_a564(void)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  undefined2 uVar4;
  char cVar5;
  short sVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  byte bVar11;
  
  bVar11 = DAT_0882;
  DAT_0882 = bVar11 & 0xfb;
  bVar11 = DAT_08bf;
  DAT_08bf = bVar11 | 4;
  uVar8 = DAT_08f2;
  if (uVar8 < DAT_3586) {
    if (uVar8 <= DAT_3584) {
      bVar11 = DAT_09a2;
      DAT_09a2 = bVar11 & 0x7f;
    }
  }
  else {
    bVar11 = DAT_09a2;
    DAT_09a2 = bVar11 | 0x80;
  }
  bVar11 = DAT_0881;
  if ((bVar11 & 0x10) == 0) {
    uVar8 = lookup_u8_uniform_axis((uchar)uVar8,&UNK_36c4);
    bVar7 = (byte)(uVar8 >> 8);
    DAT_09b4 = bVar7;
    bVar11 = DAT_09b5;
    if ((bVar11 < bVar7) || (bVar11 = DAT_08f4, bVar11 < DAT_357e)) goto LAB_a632;
    FUN_abdd();
    cVar3 = DAT_09ae;
    if (cVar3 == '\0') goto LAB_a632;
    FUN_ac2e();
    cVar3 = DAT_09af;
    if ((((((((cVar3 == '\0') || (bVar11 = DAT_0886, (~bVar11 & 0x40) == 0)) ||
            (bVar11 = DAT_09a1, (bVar11 & 0x40) == 0)) ||
           ((sVar2 = DAT_0992, sVar2 != 0 || (cVar3 = DAT_097a, cVar3 != -0x80)))) ||
          ((cVar3 = DAT_0d87, cVar3 == '\t' && (bVar11 = DAT_0896._0_1_, (bVar11 & 0x10) == 0)))) ||
         ((((bVar11 = DAT_08af, (~bVar11 & 0x20) == 0 || (bVar11 = DAT_08af, (~bVar11 & 0x10) == 0))
           || (bVar11 = DAT_08af, (~bVar11 & 8) == 0)) ||
          (((bVar11 = DAT_08af, (~bVar11 & 4) == 0 || (bVar11 = DAT_08b0, (~bVar11 & 0x80) == 0)) ||
           (bVar11 = DAT_08b0, (~bVar11 & 0x40) == 0)))))) ||
        ((bVar11 = DAT_08b1, (~bVar11 & 0x80) == 0 || (bVar11 = DAT_08b1, (~bVar11 & 0x40) == 0))))
       || (((uVar8 = DAT_0982, uVar8 < DAT_3580 ||
            ((DAT_3582 < uVar8 || (bVar11 = DAT_09a2, (bVar11 & 0x80) == 0)))) ||
           (bVar11 = DAT_08a0, (~bVar11 & 0x20) == 0)))) goto LAB_a632;
    bVar11 = DAT_09ad;
    if (bVar11 < DAT_357d) {
      bVar11 = DAT_09a1;
      DAT_09a1 = bVar11 & 0x7f;
    }
    else {
      bVar11 = DAT_09a1;
      DAT_09a1 = bVar11 | 0x80;
    }
  }
  else {
LAB_a632:
    bVar11 = DAT_09a1;
    DAT_09a1 = bVar11 & 0x7f;
    DAT_09ad = 0;
  }
  FUN_aab6();
  bVar11 = DAT_09b6;
  if ((((((bVar11 & 4) == 0) || (bVar11 = DAT_09a1, (bVar11 & 0x80) == 0)) ||
       (bVar11 = DAT_08f4, bVar11 < DAT_36e0)) ||
      ((DAT_36e1 <= bVar11 || (bVar11 = DAT_08f5, bVar11 < DAT_36e2)))) ||
     ((DAT_36e3 <= bVar11 ||
      ((bVar11 = DAT_08ed, bVar11 < DAT_36e4 || (bVar11 = DAT_08ed, DAT_36e5 < bVar11)))))) {
LAB_a6a8:
    DAT_09ca = 0;
    bVar11 = DAT_09b6;
    DAT_09b6 = bVar11 & 0xf7;
LAB_a6af:
    bVar11 = DAT_09b6;
    DAT_09b6 = bVar11 & 0xef;
  }
  else {
    bVar11 = DAT_09b6;
    DAT_09b6 = bVar11 | 8;
    bVar11 = DAT_09ca;
    if ((bVar11 < DAT_36e6) || (DAT_36e7 != -0x80)) goto LAB_a6af;
    bVar11 = DAT_08b0;
    if ((((((~bVar11 & 0x10) == 0) || (bVar11 = DAT_08b0, (~bVar11 & 4) == 0)) ||
         (bVar11 = DAT_08b0, (~bVar11 & 2) == 0)) ||
        ((bVar11 = DAT_08b1, (~bVar11 & 8) == 0 || (bVar11 = DAT_08b1, (~bVar11 & 4) == 0)))) ||
       (bVar11 = DAT_08b1, (~bVar11 & 2) == 0)) goto LAB_a6a8;
    bVar11 = DAT_09b6;
    DAT_09b6 = bVar11 | 0x10;
  }
  uVar4 = DAT_097e;
  DAT_0ba8 = uVar4;
  bVar11 = DAT_09a1;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_09a1;
    if ((bVar11 & 2) == 0) {
      bVar11 = DAT_09a2;
      uVar8 = DAT_36a2;
      if ((bVar11 & 1) != 0) {
        FUN_ab66();
        FUN_ab90();
        uVar8 = DAT_0900;
        uVar8 = lookup_u8_uniform_u16_axis(uVar8,&UNK_36b2);
        DAT_09a8 = uVar8 & 0xff00;
        bVar11 = DAT_09a2;
        DAT_09a2 = bVar11 & 0xfe;
        uVar8 = uVar8 & 0xff00;
      }
      DAT_0dde = uVar8;
      uVar9 = DAT_097e;
      uVar10 = DAT_0dde;
      uVar8 = uVar9 + uVar10;
      if (CARRY2(uVar9,uVar10)) {
        uVar8 = 0xffff;
      }
    }
    else {
      bVar11 = DAT_09a2;
      uVar8 = DAT_36a0;
      if ((~bVar11 & 1) != 0) {
        FUN_ab66();
        FUN_ab90();
        uVar8 = DAT_0900;
        uVar8 = lookup_u8_uniform_u16_axis(uVar8,&UNK_36a4);
        DAT_09a6 = uVar8 & 0xff00;
        bVar11 = DAT_09a2;
        DAT_09a2 = bVar11 | 1;
        uVar8 = uVar8 & 0xff00;
      }
      DAT_0dde = uVar8;
      uVar9 = DAT_097e;
      uVar10 = DAT_0dde;
      uVar8 = uVar9 - uVar10;
      if (uVar9 < uVar10) {
        uVar8 = 0;
      }
    }
  }
  else {
    uVar8 = 0x8000;
  }
  uVar9 = DAT_36c0;
  if ((DAT_36c0 <= uVar8) && (uVar9 = uVar8, DAT_36c2 < uVar8)) {
    uVar9 = DAT_36c2;
  }
  DAT_097e = uVar9;
  cVar3 = DAT_0d5c;
  if ((((cVar3 != -0x80) && (cVar3 = DAT_0d87, cVar3 != '\t')) &&
      (bVar11 = DAT_08a0, (~bVar11 & 4) != 0)) && (bVar11 = DAT_08b2, (~bVar11 & 0x80) != 0)) {
    bVar11 = DAT_09a1;
    if ((bVar11 & 0x80) != 0) {
      uVar8 = DAT_097e;
      if (DAT_36c2 <= uVar8) {
        bVar11 = DAT_08b6;
        if ((bVar11 & 0x20) == 0) {
          bVar11 = DAT_08b6;
          DAT_08b6 = bVar11 | 0x20;
        }
        else {
          bVar11 = DAT_0b44;
          if ((DAT_4e52 < bVar11) && (bVar11 = DAT_08b0, (~bVar11 & 4) != 0)) {
            bVar11 = DAT_08b0;
            DAT_08b0 = bVar11 | 4;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x40;
            bVar11 = DAT_08b9;
            if ((~bVar11 & 4) != 0) {
              bVar11 = DAT_08b9;
              DAT_08b9 = bVar11 | 4;
              bVar11 = DAT_0bd2;
              DAT_0bd2 = bVar11 | 4;
            }
          }
        }
        goto LAB_a7b0;
      }
      uVar8 = DAT_097e;
      uVar9 = DAT_0ba8;
      if ((uVar8 < uVar9) && (bVar11 = DAT_08b0, (bVar11 & 4) != 0)) {
        bVar11 = DAT_08b0;
        DAT_08b0 = bVar11 & 0xfb;
        bVar11 = DAT_0bd2;
        DAT_0bd2 = bVar11 | 0x40;
      }
    }
    DAT_0b44 = 0;
    bVar11 = DAT_08b6;
    DAT_08b6 = bVar11 & 0xdf;
  }
LAB_a7b0:
  cVar3 = DAT_0d5d;
  if ((((cVar3 != -0x80) && (cVar3 = DAT_0d87, cVar3 != '\t')) &&
      (bVar11 = DAT_08a0, (~bVar11 & 4) != 0)) && (bVar11 = DAT_08b2, (~bVar11 & 0x80) != 0)) {
    bVar11 = DAT_09a1;
    if ((bVar11 & 0x80) != 0) {
      uVar8 = DAT_097e;
      if (uVar8 <= DAT_36c0) {
        bVar11 = DAT_08b6;
        if ((bVar11 & 0x10) == 0) {
          bVar11 = DAT_08b6;
          DAT_08b6 = bVar11 | 0x10;
        }
        else {
          bVar11 = DAT_0b45;
          if ((DAT_4e52 < bVar11) && (bVar11 = DAT_08b0, (~bVar11 & 2) != 0)) {
            bVar11 = DAT_08b0;
            DAT_08b0 = bVar11 | 2;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x40;
            bVar11 = DAT_08b9;
            if ((~bVar11 & 2) != 0) {
              bVar11 = DAT_08b9;
              DAT_08b9 = bVar11 | 2;
              bVar11 = DAT_0bd2;
              DAT_0bd2 = bVar11 | 4;
            }
          }
        }
        goto LAB_a823;
      }
      uVar9 = DAT_0ba8;
      uVar8 = DAT_097e;
      if ((uVar9 < uVar8) && (bVar11 = DAT_08b0, (bVar11 & 2) != 0)) {
        bVar11 = DAT_08b0;
        DAT_08b0 = bVar11 & 0xfd;
        bVar11 = DAT_0bd2;
        DAT_0bd2 = bVar11 | 0x40;
      }
    }
    DAT_0b45 = 0;
    bVar11 = DAT_08b6;
    DAT_08b6 = bVar11 & 0xef;
  }
LAB_a823:
  cVar3 = DAT_09cb;
  cVar5 = DAT_09cc;
  uVar10 = (ushort)*(byte *)((short)&DAT_09b7 + (ushort)(byte)(cVar3 * '\x04' + cVar5)) * 0x100;
  uVar9 = DAT_09c8;
  uVar8 = uVar10 - uVar9;
  if (uVar10 < uVar9) {
    uVar8 = scale_u16_by_u8(CONCAT11((~(byte)(uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),
                                     -(char)uVar8),&UNK_36ed);
    uVar8 = CONCAT11((~(byte)(uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8);
  }
  else {
    uVar8 = scale_u16_by_u8(uVar8,&UNK_36ed);
  }
  sVar2 = DAT_09c8;
  sVar2 = uVar8 + sVar2;
  DAT_09c8 = sVar2;
  bVar1 = 0x7f < (byte)sVar2;
  bVar11 = (byte)((ushort)sVar2 >> 8);
  DAT_0980 = (bVar11 + bVar1) - CARRY1(bVar11,bVar1);
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
  bVar11 = DAT_09cf;
  if ((bVar11 & 1) != 0) {
    bVar11 = DAT_09cf;
    if ((~bVar11 & 4) == 0) {
      uVar8 = DAT_09d2;
      uVar9 = DAT_09da;
      if (uVar9 <= uVar8) {
        bVar11 = DAT_09dd;
        bVar11 = (bVar11 + 1) - (0xfe < bVar11);
        DAT_09dd = bVar11;
        goto LAB_a8d3;
      }
      bVar11 = DAT_09cf;
      DAT_09cf = bVar11 & 0xfe;
      bVar11 = DAT_09cf;
      DAT_09cf = bVar11 & 0x7f;
      bVar11 = DAT_09cf;
      DAT_09cf = bVar11 & 0xbf;
      bVar11 = DAT_09cf;
      DAT_09cf = bVar11 & 0xfb;
      DAT_09dd = 0;
    }
    else {
      bVar11 = DAT_09cf;
      if (((~bVar11 & 8) != 0) && (bVar11 = DAT_09cf, (bVar11 & 2) != 0)) {
        bVar11 = DAT_09cf;
        DAT_09cf = bVar11 | 4;
        bVar11 = 0;
        DAT_09dd = 0;
LAB_a8d3:
        bVar7 = DAT_09d7;
        if (bVar7 <= bVar11) {
          bVar11 = DAT_09cf;
          DAT_09cf = bVar11 | 8;
          bVar11 = DAT_09cf;
          DAT_09cf = bVar11 & 0xfb;
        }
      }
    }
  }
  bVar11 = DAT_0bc8;
  DAT_0bc8 = (bVar11 + 1) - (0xfe < bVar11);
  if (DAT_4e91 == -0x80) {
    bVar11 = DAT_0884;
    DAT_0884 = bVar11 & 0xfd;
LAB_a983:
    bVar11 = DAT_0885;
    DAT_0885 = bVar11 & 0x7f;
    bVar11 = DAT_0881;
    if ((~bVar11 & 0x20) != 0) {
      bVar11 = DAT_0884;
      DAT_0884 = bVar11 & 0xfe;
    }
  }
  else {
    bVar11 = DAT_08dd;
    if ((bVar11 <= DAT_4e92) && (DAT_4e94 < bVar11)) {
      if (bVar11 < DAT_4e93) {
        uVar9 = DAT_0b0a;
        uVar8 = uVar9 - DAT_4be8;
        if (uVar9 < DAT_4be8) {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = DAT_0b0a;
        bVar11 = (byte)(uVar8 + 1);
        uVar8 = CONCAT11((char)(uVar8 + 1 >> 8) - (bVar11 < (0xfffe < uVar8)),
                         bVar11 - (0xfffe < uVar8));
        if (DAT_4be6 <= uVar8) {
          uVar8 = DAT_4be6;
        }
      }
      DAT_0b0a = uVar8;
      if (uVar8 < DAT_4bea) goto LAB_a983;
      bVar11 = DAT_0885;
      DAT_0885 = bVar11 | 0x80;
      cVar3 = DAT_0dd9;
      if (cVar3 == -0x80) {
        bVar11 = DAT_08a1;
        DAT_08a1 = bVar11 | 2;
      }
      else {
        bVar11 = DAT_0884;
        DAT_0884 = bVar11 | 1;
      }
      cVar3 = DAT_0d5b;
      if (((((cVar3 != -0x80) && (bVar11 = DAT_08a0, (~bVar11 & 4) != 0)) &&
           (bVar11 = DAT_08b2, (~bVar11 & 0x80) != 0)) &&
          ((cVar3 = DAT_0dd9, cVar3 == -0x80 || (bVar11 = DAT_0bc8, 0x1e < bVar11)))) &&
         (bVar11 = DAT_08b0, (~bVar11 & 8) != 0)) {
        bVar11 = DAT_08b0;
        DAT_08b0 = bVar11 | 8;
        bVar11 = DAT_0bd2;
        DAT_0bd2 = bVar11 | 0x40;
        bVar11 = DAT_08b9;
        if ((~bVar11 & 8) != 0) {
          bVar11 = DAT_08b9;
          DAT_08b9 = bVar11 | 8;
          bVar11 = DAT_0bd2;
          DAT_0bd2 = bVar11 | 4;
        }
      }
    }
  }
  bVar11 = DAT_0bf8;
  if ((bVar11 & 0x40) == 0) {
LAB_a9ac:
    DAT_0bfa = 0;
  }
  else {
    bVar11 = DAT_0bfa;
    if ((0xfe < bVar11) || (DAT_0bfa = bVar11 + 1, DAT_4bfc < (byte)(bVar11 + 1))) {
      bVar11 = DAT_0bf8;
      DAT_0bf8 = bVar11 & 0xbf;
      goto LAB_a9ac;
    }
  }
  cVar3 = DAT_0dd5;
  if (((cVar3 != -0x80) && (bVar11 = DAT_0d06, (~bVar11 & 2) == 0)) &&
     (bVar11 = DAT_0d08, (~bVar11 & 0x20) != 0)) {
    bVar11 = DAT_0d25;
    DAT_0dde._0_1_ = bVar11 & 0x3f;
    bVar11 = DAT_0d26;
    DAT_0dde._1_1_ = bVar11 & 0x3f;
    bVar11 = DAT_0d27;
    DAT_0de0._0_1_ = bVar11 & 0x3f;
    bVar11 = DAT_0dde._1_1_;
    bVar7 = DAT_0de0._0_1_;
    DAT_0d35._1_1_ = (byte)((ushort)bVar11 << 6) | bVar7;
    DAT_0dde._1_1_ = (char)(((ushort)bVar11 << 6) >> 8);
    bVar11 = DAT_0dde._0_1_;
    DAT_0d34 = (char)(((ushort)bVar11 << 4) >> 8);
    bVar7 = DAT_0dde._1_1_;
    DAT_0d35._0_1_ = (byte)((ushort)bVar11 << 4) | bVar7;
    DAT_0de0._1_1_ = 0;
    bVar11 = DAT_0d17;
    bVar7 = DAT_0d18;
    RAM0de2 = (ushort)bVar11 * (ushort)bVar7;
    bVar11 = DAT_0d18;
    bVar7 = DAT_0d19;
    uVar8 = RAM0de2;
    RAM0de2 = (ushort)bVar11 * (ushort)bVar7 + uVar8;
    cVar3 = DAT_0de0._1_1_;
    DAT_0de0._1_1_ = cVar3 + CARRY2((ushort)bVar11 * (ushort)bVar7,uVar8);
    bVar7 = DAT_0d19;
    bVar11 = DAT_0d17;
    uVar8 = RAM0de2;
    DAT_0d32 = (ushort)bVar7 * (ushort)bVar11 + uVar8;
    cVar3 = DAT_0de0._1_1_;
    DAT_0d31 = cVar3 + CARRY2((ushort)bVar7 * (ushort)bVar11,uVar8);
    sVar2 = DAT_0d32;
    sVar6 = DAT_0d35;
    if (sVar2 == sVar6) {
      cVar3 = DAT_0d31;
      cVar5 = DAT_0d34;
      if (cVar3 != cVar5) goto LAB_aa49;
      bVar11 = DAT_0d08;
      DAT_0d08 = bVar11 | 0x10;
    }
    else {
LAB_aa49:
      bVar11 = DAT_0d08;
      DAT_0d08 = bVar11 & 0xef;
    }
    bVar11 = DAT_0d08;
    DAT_0d08 = bVar11 | 0x20;
  }
  cVar3 = DAT_0dd5;
  if (((cVar3 == -0x80) || (bVar11 = DAT_0d06, (bVar11 & 4) == 0)) ||
     (bVar11 = DAT_0be8, (~bVar11 & 4) == 0)) goto LAB_aab1;
  sVar2 = DAT_0d28;
  sVar6 = DAT_0d2b;
  if ((sVar2 == sVar6) && (sVar6 = DAT_0d2e, sVar2 == sVar6)) {
    cVar3 = DAT_0d2a;
    cVar5 = DAT_0d2d;
    if ((cVar3 != cVar5) || (cVar5 = DAT_0d30, cVar3 != cVar5)) goto LAB_aaa5;
    bVar11 = DAT_0d07;
    DAT_0d07 = bVar11 & 0xef;
    bVar11 = DAT_0d08;
    if ((bVar11 & 0x10) == 0) {
      bVar11 = DAT_0be8;
      DAT_0be8 = bVar11 & 0xfb;
      bVar11 = DAT_0d08;
      DAT_0d08 = bVar11 & 0xbf;
      bVar11 = DAT_0d06;
      DAT_0d06 = bVar11 & 0xfb;
      DAT_0d37 = 0xffff;
      DAT_0d39 = 0xff;
      goto LAB_aab1;
    }
    bVar11 = DAT_0be8;
    DAT_0be8 = bVar11 | 4;
    DAT_0d15 = 0;
  }
  else {
LAB_aaa5:
    bVar11 = DAT_0d07;
    DAT_0d07 = bVar11 | 0x10;
    bVar11 = DAT_0be8;
    DAT_0be8 = bVar11 & 0xfb;
  }
  bVar11 = DAT_0d06;
  DAT_0d06 = bVar11 & 0xfb;
LAB_aab1:
  bVar11 = DAT_08bf;
  DAT_08bf = bVar11 & 0xfb;
  return;
}


/* Entry aab6 */

void FUN_aab6(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  
  bVar1 = DAT_0900._0_1_;
  if (bVar1 < DAT_36d6) {
    puVar4 = (undefined *)0x0;
LAB_aaee:
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 & 0xfd;
  }
  else {
    if (bVar1 < DAT_36d7) {
      puVar4 = (undefined *)0x1;
    }
    else if (bVar1 < DAT_36d8) {
      puVar4 = &UNK_0102;
    }
    else if (bVar1 < DAT_36d9) {
      puVar4 = &UNK_0203;
    }
    else {
      if (DAT_36da <= bVar1) {
        puVar4 = &UNK_0305;
        goto LAB_aaee;
      }
      puVar4 = &UNK_0304;
    }
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 | 2;
  }
  DAT_09cb = (char)((ushort)puVar4 >> 8);
  DAT_09cd = (char)puVar4;
  bVar1 = DAT_0c90._0_1_;
  if (DAT_36db < bVar1) {
    if (DAT_36dc < bVar1) {
      if (DAT_36dd < bVar1) {
        if (DAT_36de < bVar1) {
          if (DAT_36df < bVar1) {
            puVar4 = &UNK_0305;
            goto LAB_ab36;
          }
          puVar4 = &UNK_0304;
        }
        else {
          puVar4 = &UNK_0203;
        }
      }
      else {
        puVar4 = &UNK_0102;
      }
    }
    else {
      puVar4 = (undefined *)0x1;
    }
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 | 1;
  }
  else {
    puVar4 = (undefined *)0x0;
LAB_ab36:
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 & 0xfe;
  }
  DAT_09cc = (char)((ushort)puVar4 >> 8);
  DAT_09ce = (char)puVar4;
  bVar1 = DAT_09b6;
  if ((((bVar1 & 2) == 0) || (bVar1 = DAT_09b6, (bVar1 & 1) == 0)) &&
     (uVar2 = DAT_09cd, uVar3 = DAT_09ce, CONCAT11(uVar2,uVar3) != 0x100)) {
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 & 0xfb;
  }
  else {
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 | 4;
  }
  return;
}


/* Entry ab66 */

void FUN_ab66(void)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  char cVar6;
  ushort uVar7;
  
  uVar5 = DAT_09a4;
  uVar3 = DAT_097e;
  uVar7 = uVar5 + uVar3 >> 1;
  uVar7 = CONCAT11((byte)(uVar7 >> 8) | CARRY2(uVar5,uVar3) << 7,(char)uVar7);
  if (uVar7 < 0xc000) {
    if (uVar7 < 0x4000) {
      cVar6 = '\0';
    }
    else {
      bVar1 = 0x7f < (byte)((char)(uVar7 + 0xc000) * '\x02');
      bVar2 = (byte)((uVar7 + 0xc000 & 0x7fff) >> 7);
      cVar6 = (bVar2 + bVar1) - CARRY1(bVar2,bVar1);
    }
  }
  else {
    cVar6 = -1;
  }
  DAT_09c7 = cVar6;
  uVar4 = DAT_097e;
  DAT_09a4 = uVar4;
  return;
}


/* Entry ab90 */

void FUN_ab90(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  
  bVar3 = DAT_09b6;
  if ((bVar3 & 0x10) != 0) {
    cVar1 = DAT_09cb;
    cVar2 = DAT_09cc;
    pbVar5 = (byte *)((short)&DAT_09b7 + (ushort)(byte)(cVar1 * '\x04' + cVar2));
    bVar3 = DAT_09c7;
    if (DAT_36e8 < bVar3) {
      bVar3 = *pbVar5 + DAT_36ea;
      if (CARRY1(*pbVar5,DAT_36ea)) {
        bVar3 = 0xff;
      }
    }
    else if (bVar3 < DAT_36e9) {
      bVar3 = *pbVar5 - DAT_36ea;
      if (*pbVar5 < DAT_36ea) {
        bVar3 = 0;
      }
    }
    else {
      bVar3 = *pbVar5;
    }
    bVar4 = DAT_36eb;
    if ((DAT_36eb <= bVar3) && (bVar4 = bVar3, DAT_36ec < bVar3)) {
      bVar4 = DAT_36ec;
    }
    *pbVar5 = bVar4;
  }
  return;
}


/* Entry abdd */

void FUN_abdd(void)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  
  uVar2 = DAT_08e8;
  bVar6 = 0x10;
  do {
    if (*(ushort *)(&UNK_3588 + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_abf8;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_abf8:
  uVar5 = CONCAT11(bVar6,0x10);
  uVar2 = DAT_0900;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_359c + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_ac15;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_ac15:
  RAM09b0 = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_09b1;
  bVar6 = DAT_09b0;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_09ae = (&DAT_35b0)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


/* Entry ac2e */

void FUN_ac2e(void)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  
  uVar2 = DAT_0c90;
  bVar6 = 0x10;
  do {
    if (*(ushort *)(&UNK_3614 + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_ac49;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_ac49:
  uVar5 = CONCAT11(bVar6,0x10);
  uVar2 = DAT_0900;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_3628 + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_ac66;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_ac66:
  RAM09b2 = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_09b3;
  bVar6 = DAT_09b2;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_09af = (&DAT_363c)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


/* Entry ac7f */

void FUN_ac7f(void)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  
  bVar4 = DAT_088e;
  DAT_088e = bVar4 & 0x7f;
  bVar4 = DAT_08bf;
  DAT_08bf = bVar4 | 2;
  bVar4 = DAT_08a0;
  if ((~bVar4 & 4) != 0) {
    bVar4 = DAT_08b2;
    if ((~bVar4 & 0x80) == 0) {
LAB_ace6:
      bVar4 = DAT_0000;
      DAT_0000 = bVar4 & 0xfb;
    }
    else {
      bVar4 = DAT_0d08;
      if (((((~bVar4 & 1) == 0) || (bVar4 = DAT_0884, (~bVar4 & 2) == 0)) ||
          (bVar4 = DAT_0884, (~bVar4 & 1) == 0)) ||
         (((cVar1 = DAT_0dd9, cVar1 != -0x80 && (bVar4 = DAT_08b0, (~bVar4 & 8) == 0)) ||
          (bVar4 = DAT_08b1, (~bVar4 & 0x10) == 0)))) {
        DAT_0afb = 0xff;
        DAT_0afc = 0xff;
        goto LAB_ace6;
      }
      bVar4 = DAT_0afb;
      if (bVar4 < DAT_4e8f) {
        bVar4 = DAT_0afb;
        DAT_0afb = (bVar4 + 1) - (0xfe < bVar4);
      }
      else {
        bVar4 = DAT_0afc;
        if (DAT_4e8e <= bVar4) goto LAB_ace6;
      }
      bVar4 = DAT_0000;
      DAT_0000 = bVar4 | 4;
    }
    bVar4 = DAT_0afc;
    DAT_0afc = (bVar4 + 1) - (0xfe < bVar4);
  }
  bVar4 = DAT_08a0;
  if ((bVar4 & 4) == 0) {
LAB_ad00:
    cVar1 = DAT_0d87;
    if ((cVar1 == '\t') || (bVar4 = DAT_0900._0_1_, bVar4 <= DAT_4e1c)) {
      bVar4 = DAT_00f0;
      DAT_00f0 = bVar4 & 0xfe;
    }
    else if (DAT_4e1d <= bVar4) {
      bVar4 = DAT_00f0;
      DAT_00f0 = bVar4 | 1;
    }
  }
  else {
    cVar1 = DAT_0bdd;
    cVar2 = DAT_0d4d;
    if (cVar1 != cVar2) goto LAB_ad00;
  }
  bVar4 = DAT_08af;
  if ((((((~bVar4 & 8) == 0) || (bVar4 = DAT_08af, (~bVar4 & 4) == 0)) ||
       (bVar4 = DAT_08af, (~bVar4 & 0x20) == 0)) ||
      ((bVar4 = DAT_08af, (~bVar4 & 0x10) == 0 || (bVar4 = DAT_08b1, (bVar4 & 8) != 0)))) ||
     (bVar4 = DAT_08e8._0_1_, DAT_370e < bVar4)) goto LAB_ada9;
  bVar4 = DAT_0b80;
  if ((~bVar4 & 1) != 0) {
    bVar4 = DAT_0b80;
    if ((bVar4 & 4) == 0) {
      bVar4 = DAT_0b80;
      if ((bVar4 & 0x10) == 0) {
        bVar4 = DAT_0b80;
        if ((~bVar4 & 0x40) == 0) {
          uVar3 = DAT_0b8a;
          bVar4 = (byte)(uVar3 + 1);
          uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                           bVar4 - (0xfffe < uVar3));
          DAT_0b8a = uVar3;
          if (DAT_3710 < uVar3) goto LAB_ada9;
          bVar4 = DAT_0b80;
          if ((~bVar4 & 0x20) != 0) {
            uVar3 = DAT_0b84;
            bVar4 = (byte)(uVar3 + 1);
            uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                             bVar4 - (0xfffe < uVar3));
            DAT_0b84 = uVar3;
            if (uVar3 < DAT_36f6) goto LAB_af24;
            bVar4 = DAT_0b80;
            DAT_0b80 = bVar4 | 0x20;
            DAT_0b84 = 0;
          }
          bVar4 = DAT_0abe;
          if ((bVar4 < DAT_36f8) || (DAT_36f9 < bVar4)) {
            bVar4 = DAT_0b81;
            if ((bVar4 & 4) != 0) {
              uVar3 = DAT_0b84;
              if ((uVar3 < DAT_36fa) || (DAT_36fc < uVar3)) goto LAB_ada9;
              bVar4 = DAT_0b80;
              DAT_0b80 = bVar4 | 0x10;
              DAT_0b86 = 0;
            }
          }
          else {
            bVar4 = DAT_0b81;
            DAT_0b81 = bVar4 | 4;
            uVar3 = DAT_0b84;
            bVar4 = (byte)(uVar3 + 1);
            DAT_0b84 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                                bVar4 - (0xfffe < uVar3));
          }
        }
        else {
          DAT_0b8a = 0;
          cVar1 = DAT_0898;
          if (cVar1 == DAT_4e8d) {
            bVar4 = DAT_0abe;
            if ((bVar4 < DAT_36ef) || (DAT_36f0 < bVar4)) {
              bVar4 = DAT_0b81;
              if ((bVar4 & 8) != 0) {
                uVar3 = DAT_0b82;
                if ((uVar3 < DAT_36f2) || (DAT_36f4 < uVar3)) goto LAB_ada9;
                bVar4 = DAT_0b80;
                DAT_0b80 = bVar4 | 0x40;
                DAT_0b84 = 0;
              }
            }
            else {
              bVar4 = DAT_0b81;
              DAT_0b81 = bVar4 | 8;
              uVar3 = DAT_0b82;
              bVar4 = (byte)(uVar3 + 1);
              DAT_0b82 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                                  bVar4 - (0xfffe < uVar3));
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
      }
      else {
        uVar3 = DAT_0b8a;
        bVar4 = (byte)(uVar3 + 1);
        uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                         bVar4 - (0xfffe < uVar3));
        DAT_0b8a = uVar3;
        if (DAT_3710 < uVar3) goto LAB_ada9;
        bVar4 = DAT_0b80;
        if ((~bVar4 & 8) != 0) {
          uVar3 = DAT_0b86;
          bVar4 = (byte)(uVar3 + 1);
          uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                           bVar4 - (0xfffe < uVar3));
          DAT_0b86 = uVar3;
          if (uVar3 < DAT_36fe) goto LAB_af24;
          bVar4 = DAT_0b80;
          DAT_0b80 = bVar4 | 8;
          DAT_0b86 = 0;
        }
        bVar4 = DAT_0abe;
        if ((bVar4 < DAT_3700) || (DAT_3701 < bVar4)) {
          bVar4 = DAT_0b81;
          if ((bVar4 & 2) != 0) {
            uVar3 = DAT_0b86;
            if ((uVar3 < DAT_3702) || (DAT_3704 < uVar3)) goto LAB_ada9;
            bVar4 = DAT_0b80;
            DAT_0b80 = bVar4 | 4;
            DAT_0b88 = 0;
          }
        }
        else {
          bVar4 = DAT_0b81;
          DAT_0b81 = bVar4 | 2;
          uVar3 = DAT_0b86;
          bVar4 = (byte)(uVar3 + 1);
          DAT_0b86 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                              bVar4 - (0xfffe < uVar3));
        }
      }
    }
    else {
      uVar3 = DAT_0b8a;
      bVar4 = (byte)(uVar3 + 1);
      uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),bVar4 - (0xfffe < uVar3))
      ;
      DAT_0b8a = uVar3;
      if (DAT_3710 < uVar3) goto LAB_ada9;
      bVar4 = DAT_0b80;
      if ((~bVar4 & 2) != 0) {
        uVar3 = DAT_0b88;
        bVar4 = (byte)(uVar3 + 1);
        uVar3 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                         bVar4 - (0xfffe < uVar3));
        DAT_0b88 = uVar3;
        if (uVar3 < DAT_3706) goto LAB_af24;
        bVar4 = DAT_0b80;
        DAT_0b80 = bVar4 | 2;
        DAT_0b88 = 0;
      }
      bVar4 = DAT_0abe;
      if ((bVar4 < DAT_3708) || (DAT_3709 < bVar4)) {
        bVar4 = DAT_0b81;
        if ((bVar4 & 1) != 0) {
          uVar3 = DAT_0b88;
          if ((uVar3 < DAT_370a) || (DAT_370c < uVar3)) goto LAB_ada9;
          bVar4 = DAT_0b80;
          DAT_0b80 = bVar4 | 1;
        }
      }
      else {
        bVar4 = DAT_0b81;
        DAT_0b81 = bVar4 | 1;
        uVar3 = DAT_0b88;
        bVar4 = (byte)(uVar3 + 1);
        DAT_0b88 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar4 < (0xfffe < uVar3)),
                            bVar4 - (0xfffe < uVar3));
      }
    }
  }
LAB_af24:
  bVar4 = DAT_0893;
  if ((bVar4 & 0x20) == 0) goto LAB_af92;
  cVar1 = DAT_0bdd;
  cVar2 = DAT_0d46;
  if ((((cVar1 != cVar2) && (cVar2 = DAT_0d47, cVar1 != cVar2)) &&
      (cVar2 = DAT_0d48, cVar1 != cVar2)) &&
     ((cVar2 = DAT_0d49, cVar1 != cVar2 && (cVar2 = DAT_0d4a, cVar1 != cVar2)))) {
    cVar2 = DAT_0d4b;
    if ((cVar1 == cVar2) || (cVar2 = DAT_0d4c, cVar1 == cVar2)) {
      bVar4 = DAT_0be2;
      bVar4 = (bVar4 + 1) - (0xfe < bVar4);
      DAT_0be2 = bVar4;
      if (DAT_4f0c < bVar4) {
        bVar4 = DAT_0893;
        DAT_0893 = bVar4 & 0xdf;
        bVar4 = DAT_0893;
        DAT_0893 = bVar4 | 0x10;
        DAT_0be4 = DAT_4f0e;
      }
      goto LAB_af92;
    }
    cVar2 = DAT_0d4d;
    if (cVar1 != cVar2) goto LAB_af92;
  }
  bVar4 = DAT_0be2;
  bVar4 = (bVar4 + 1) - (0xfe < bVar4);
  DAT_0be2 = bVar4;
  if (DAT_4f0c < bVar4) {
    bVar4 = DAT_0893;
    DAT_0893 = bVar4 & 0xdf;
    bVar4 = DAT_0893;
    DAT_0893 = bVar4 | 0x10;
    DAT_0be4 = DAT_4f0d;
  }
LAB_af92:
  bVar4 = DAT_0893;
  if ((bVar4 & 0x10) != 0) {
    cVar1 = DAT_0bdd;
    cVar2 = DAT_0d46;
    if (cVar1 == cVar2) {
      FUN_b900();
    }
    else {
      cVar2 = DAT_0d47;
      if (cVar1 == cVar2) {
        FUN_b97f();
      }
      else {
        cVar2 = DAT_0d48;
        if (cVar1 == cVar2) {
          FUN_ba06();
        }
        else {
          cVar2 = DAT_0d49;
          if (cVar1 == cVar2) {
            FUN_ba8d();
          }
          else {
            cVar2 = DAT_0d4a;
            if (cVar1 == cVar2) {
              FUN_baed();
            }
            else {
              cVar2 = DAT_0d4b;
              if (cVar1 == cVar2) {
                FUN_bb45();
              }
              else {
                cVar2 = DAT_0d4c;
                if (cVar1 == cVar2) {
                  FUN_bba1();
                }
                else {
                  cVar2 = DAT_0d4d;
                  if (cVar1 == cVar2) {
                    FUN_bbfd();
                  }
                  else {
                    cVar2 = DAT_0d50;
                    if (cVar1 == cVar2) {
                      FUN_bc1b();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar4 = DAT_08bf;
  DAT_08bf = bVar4 & 0xfd;
  return;
}


/* Entry aff9 */

void FUN_aff9(void)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  
  bVar1 = DAT_0882;
  DAT_0882 = bVar1 & 0xdf;
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 | 4;
  bVar1 = DAT_0b02;
  DAT_0b02 = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_0884;
  if ((bVar1 & 4) != 0) {
    bVar1 = DAT_0aff;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0aff = bVar1;
    if (DAT_4bf9 <= bVar1) {
      bVar1 = DAT_0884;
      DAT_0884 = bVar1 & 0xfb;
      DAT_0aff = 0;
    }
  }
  bVar1 = DAT_0bf8;
  if ((bVar1 & 0x80) == 0) {
LAB_b046:
    DAT_0bf9 = 0;
  }
  else {
    bVar1 = DAT_0bf9;
    if ((0xfe < bVar1) || (DAT_0bf9 = bVar1 + 1, DAT_4bf9 < (byte)(bVar1 + 1))) {
      bVar1 = DAT_0bf8;
      DAT_0bf8 = bVar1 & 0x7f;
      goto LAB_b046;
    }
  }
  bVar1 = DAT_0b00;
  DAT_0b00 = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_00e1;
  if (((bVar1 & 8) != 0) && (cVar3 = DAT_0b00, cVar3 == '\b')) {
    bVar1 = DAT_0b01;
    DAT_0b01 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_088d;
  if (((~bVar1 & 0x80) == 0) || (bVar1 = DAT_0b01, DAT_4ba4 < bVar1)) {
    bVar1 = DAT_088d;
    DAT_088d = bVar1 | 0x80;
    bVar1 = DAT_0b00;
    if (DAT_4ba3 <= bVar1) goto LAB_b091;
  }
  else {
    bVar1 = DAT_0b00;
    if (DAT_4ba2 <= bVar1) {
LAB_b091:
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
      bVar1 = DAT_0a92;
      DAT_0a92 = bVar1 & 0xf7;
      bVar1 = DAT_0a92;
      DAT_0a92 = bVar1 & 0x7f;
    }
  }
  bVar1 = DAT_0900._0_1_;
  if (((DAT_4ba5 <= bVar1) || (bVar1 = DAT_0b5e, DAT_4ba6 <= bVar1)) ||
     (bVar1 = DAT_0b00, DAT_4ba6 <= bVar1)) {
    DAT_0b01 = 0;
    bVar1 = DAT_088d;
    DAT_088d = bVar1 & 0x7f;
  }
  bVar1 = DAT_0880;
  if ((~bVar1 & 1) == 0) {
    DAT_0b5e = 0;
  }
  else {
    bVar1 = DAT_0b5e;
    DAT_0b5e = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0b6b;
  DAT_0b6b = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_0b6e;
  DAT_0b6e = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_09ad;
  DAT_09ad = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_0880;
  if ((~bVar1 & 1) != 0) {
    bVar1 = DAT_0b6e;
    bVar4 = DAT_0d75;
    if (bVar1 < bVar4) goto LAB_b161;
  }
  bVar1 = DAT_08d9;
  if ((DAT_4e98 <= bVar1) && (bVar1 < 0xcd)) {
    bVar1 = DAT_0b56;
    if (bVar1 < DAT_4e99) {
      bVar1 = DAT_0b55;
      if (DAT_4e99 <= bVar1) {
        bVar1 = DAT_08b4;
        DAT_08b4 = bVar1 & 0x7f;
      }
    }
    else {
      bVar1 = DAT_08b4;
      DAT_08b4 = bVar1 | 0x80;
    }
    bVar1 = DAT_0b58;
    if (bVar1 < DAT_4e99) {
      bVar1 = DAT_0b57;
      if (DAT_4e99 <= bVar1) {
        bVar1 = DAT_08b4;
        DAT_08b4 = bVar1 & 0xbf;
      }
    }
    else {
      bVar1 = DAT_08b4;
      DAT_08b4 = bVar1 | 0x40;
    }
  }
LAB_b161:
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 & 0xfb;
  return;
}


/* Entry b166 */

void FUN_b166(uchar param_1)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  ushort uVar4;
  byte extraout_A;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  short sVar8;
  ushort uVar9;
  
  bVar1 = DAT_0882;
  DAT_0882 = bVar1 & 0xef;
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 | 2;
  uVar7 = lookup_u8_uniform_axis(param_1,&UNK_4234);
  sVar8 = (uVar7 >> 8) << 3;
  DAT_095e = sVar8;
  uVar7 = lookup_u8_uniform_axis((uchar)sVar8,&UNK_3220);
  DAT_0979 = (char)(uVar7 >> 8);
  uVar7 = lookup_u8_uniform_axis((uchar)uVar7,&UNK_3345);
  DAT_098f = (char)(uVar7 >> 8);
  uVar7 = lookup_u8_uniform_axis((uchar)uVar7,&UNK_3357);
  DAT_0990 = (char)(uVar7 >> 8);
  bVar1 = DAT_0881;
  if (((bVar1 & 0x20) == 0) || (bVar1 = DAT_0880, (~bVar1 & 8) == 0)) {
    DAT_0b3d = 0;
LAB_b1d7:
    bVar1 = DAT_089f;
    DAT_089f = bVar1 & 0x7f;
    bVar1 = DAT_089f;
    DAT_089f = bVar1 & 0xbf;
  }
  else {
    bVar1 = DAT_0b3d;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b3d = bVar1;
    if (bVar1 < DAT_18b0) goto LAB_b1d7;
    bVar1 = DAT_089f;
    DAT_089f = bVar1 | 0x80;
    bVar1 = DAT_089f;
    if ((~bVar1 & 0x40) != 0) {
      uVar2 = DAT_0ca2;
      DAT_0ca4 = uVar2;
      bVar1 = DAT_089f;
      DAT_089f = bVar1 | 0x40;
    }
  }
  bVar1 = DAT_089f;
  if ((bVar1 & 0x80) != 0) {
    uVar9 = DAT_0ca2;
    uVar4 = DAT_0ca4;
    uVar7 = uVar9 - uVar4;
    if (uVar9 < uVar4) {
      uVar7 = scale_u16_by_u8(CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),
                                       -(char)uVar7),&UNK_18b1);
      uVar7 = CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7);
    }
    else {
      uVar7 = scale_u16_by_u8(uVar7,&UNK_18b1);
    }
    sVar8 = DAT_0ca4;
    DAT_0ca4 = uVar7 + sVar8;
  }
  bVar1 = DAT_0bfe;
  if ((bVar1 & 0x80) != 0) {
    DAT_0cb2 = (&DAT_0c58)[DAT_1870];
  }
  bVar1 = DAT_08af;
  if (((((((~bVar1 & 0x20) == 0) || (bVar1 = DAT_08af, (~bVar1 & 0x10) == 0)) ||
        (bVar1 = DAT_08af, (~bVar1 & 8) == 0)) ||
       (((bVar1 = DAT_08af, (~bVar1 & 4) == 0 || (bVar1 = DAT_089f, (~bVar1 & 0x80) == 0)) ||
        ((bVar1 = DAT_0881, (~bVar1 & 0x10) == 0 ||
         ((uVar7 = DAT_08e8, uVar7 < DAT_1874 || (DAT_1876 < uVar7)))))))) ||
      (uVar7 = DAT_0900, uVar7 < DAT_1878)) ||
     (((DAT_187a < uVar7 || (uVar7 = DAT_0c90, uVar7 < DAT_187c)) || (DAT_187e < uVar7)))) {
    DAT_0b3a = 0;
  }
  else {
    cVar3 = DAT_0b3a;
    if ((cVar3 == -1) || (DAT_0b3a = cVar3 + 1U, DAT_1871 < (byte)(cVar3 + 1U))) {
      uVar7 = DAT_0900;
      uVar7 = lookup_u8_uniform_u16_axis(uVar7,&UNK_1880);
      extraout_A = (byte)(uVar7 >> 8);
      DAT_0cb0 = extraout_A;
      uVar9 = (ushort)extraout_A * 0x40;
      uVar7 = uVar9 + 0xe000;
      if (uVar9 < 0x2000) {
        uVar9 = DAT_0cb2;
        sVar8 = uVar7 + uVar9;
        if (!CARRY2(uVar7,uVar9)) {
          sVar8 = 0;
        }
      }
      else {
        uVar9 = DAT_0cb2;
        sVar8 = uVar7 + uVar9;
        if (CARRY2(uVar7,uVar9)) {
          sVar8 = -1;
        }
      }
      DAT_0cb4 = sVar8;
    }
  }
  uVar9 = DAT_0cb4;
  uVar4 = DAT_0cb6;
  uVar7 = uVar9 - uVar4;
  if (uVar9 < uVar4) {
    uVar7 = scale_u16_by_u8(CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),
                                     -(char)uVar7),&UNK_1872);
    uVar7 = CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7);
  }
  else {
    uVar7 = scale_u16_by_u8(uVar7,&UNK_1872);
  }
  sVar8 = DAT_0cb6;
  DAT_0cb6 = uVar7 + sVar8;
  bVar1 = DAT_0b1b;
  if ((DAT_1843 < bVar1) || (bVar1 = DAT_0880, (bVar1 & 8) == 0)) {
    bVar1 = DAT_089f;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_089f;
      DAT_089f = bVar1 & 0xef;
      goto LAB_b2f4;
    }
    bVar1 = DAT_08af;
    if (((~bVar1 & 0x20) == 0) || (bVar1 = DAT_08af, (~bVar1 & 0x10) == 0)) goto LAB_b2f4;
  }
  else {
    DAT_0b1b = 0xff;
LAB_b2f4:
    uVar2 = DAT_0da8;
    DAT_0c86 = uVar2;
  }
  bVar1 = DAT_0b1b;
  DAT_0b1b = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_0b3b;
  if ((DAT_1843 < bVar1) || (bVar1 = DAT_0880, (bVar1 & 8) == 0)) {
    bVar1 = DAT_089f;
    if ((bVar1 & 8) != 0) {
      bVar1 = DAT_089f;
      DAT_089f = bVar1 & 0xf7;
      goto LAB_b316;
    }
    bVar1 = DAT_08af;
    if (((((~bVar1 & 0x20) == 0) || (bVar1 = DAT_08af, (~bVar1 & 0x10) == 0)) ||
        (bVar1 = DAT_08af, (~bVar1 & 8) == 0)) || (bVar1 = DAT_08af, (~bVar1 & 4) == 0))
    goto LAB_b316;
    bVar1 = DAT_089f;
    if ((bVar1 & 0x80) == 0) {
      if (DAT_186f == -0x80) {
        uVar7 = DAT_0cc8;
      }
      else {
        uVar7 = DAT_0cb6;
      }
      goto LAB_b362;
    }
    uVar7 = DAT_0ca4;
  }
  else {
    DAT_0b3b = 0xff;
LAB_b316:
    uVar7 = DAT_0da8;
  }
  DAT_0cb4 = uVar7;
  DAT_0cb6 = uVar7;
  DAT_0cc6 = uVar7;
  DAT_0cca = uVar7;
  DAT_0cc8 = uVar7;
LAB_b362:
  uVar9 = DAT_18ac;
  if ((DAT_18ac <= uVar7) && (uVar9 = uVar7, DAT_18ae < uVar7)) {
    uVar9 = DAT_18ae;
  }
  DAT_08f2 = uVar9;
  bVar1 = DAT_0b3b;
  DAT_0b3b = (bVar1 + 1) - (0xfe < bVar1);
  uVar7 = DAT_08f2;
  uVar7 = lookup_u8_uniform_u16_axis(uVar7,&UNK_323c);
  DAT_0971 = (char)(uVar7 >> 8);
  uVar2 = DAT_0c90;
  DAT_0ba2 = uVar2;
  DAT_0ba4 = 0x3258;
  uVar7 = axis_index_u16_ascending('X');
  DAT_0974 = uVar7;
  uVar2 = DAT_0900;
  DAT_0ba2 = uVar2;
  DAT_0ba4 = 0x3270;
  uVar7 = axis_index_u16_ascending('p');
  DAT_0976 = uVar7;
  uVar2 = DAT_0976;
  DAT_0dde = uVar2;
  uVar2 = DAT_0974;
  DAT_0de0 = uVar2;
  uVar7 = bilinear_u8_grid(&UNK_327d,'\f');
  bVar5 = (byte)(uVar7 + 0x80 >> 8);
  DAT_0972 = bVar5;
  bVar1 = DAT_0971;
  sVar8 = (ushort)bVar5 * (ushort)bVar1;
  uVar6 = (undefined1)((ushort)(sVar8 * 2) >> 8);
  if (sVar8 < 0) {
    uVar6 = 0xff;
  }
  DAT_0970 = uVar6;
  uVar7 = DAT_08f2;
  uVar7 = lookup_u8_uniform_u16_axis(uVar7,&UNK_32e0);
  DAT_0978 = (char)(uVar7 >> 8);
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 & 0xfd;
  return;
}


/* Entry b3ec */

void FUN_b3ec(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 0x40) != 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) != 0) {
      bVar3 = DAT_088f;
      DAT_088f = bVar3 & 0x7f;
      bVar3 = DAT_0890;
      DAT_0890 = bVar3 | 0x80;
      uVar2 = DAT_0b30;
      bVar3 = (byte)(uVar2 + 1);
      DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),
                          bVar3 - (0xfffe < uVar2));
      uVar1 = DAT_09fc;
      FUN_57e9(&DAT_0a00);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 0x40;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 0x20) != 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) != 0) {
      uVar1 = DAT_09fc;
      FUN_57e9(&DAT_0a02);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 0x20;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 0x10) != 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) != 0) {
      uVar1 = DAT_09fc;
      FUN_57e9(&DAT_0a04);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 0x10;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 8) != 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) != 0) {
      uVar1 = DAT_0b30._0_1_;
      FUN_57e9(&DAT_0a06);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 8;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 4) != 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) == 0) {
      bVar3 = DAT_00e9;
      if ((bVar3 & 0x10) != 0) {
        bVar3 = DAT_00f0;
        DAT_00f0 = bVar3 & 0xf7;
        DAT_0891 = 0;
        bVar3 = DAT_0890;
        DAT_0890 = bVar3 & 0x7f;
      }
    }
    else {
      uVar1 = DAT_0b30._1_1_;
      FUN_57e9(&DAT_0a07);
    }
  }
  return;
}


/* Entry b4c6 */

void FUN_b4c6(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 0x40) != 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) != 0) {
      bVar3 = DAT_088f;
      DAT_088f = bVar3 & 0xbf;
      bVar3 = DAT_0890;
      DAT_0890 = bVar3 | 0x40;
      uVar2 = RAM0b32;
      bVar3 = (byte)(uVar2 + 1);
      RAM0b32 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),
                         bVar3 - (0xfffe < uVar2));
      uVar1 = DAT_0a00;
      FUN_57e9(&DAT_0a01);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 0x40;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 0x20) != 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) != 0) {
      uVar1 = DAT_0a00;
      FUN_57e9(&DAT_0a03);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 0x20;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 0x10) != 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) != 0) {
      uVar1 = DAT_0a00;
      FUN_57e9(&DAT_0a05);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 0x10;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 8) != 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) != 0) {
      uVar1 = DAT_0b32;
      FUN_57e9(&DAT_0a08);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 | 8;
    bVar3 = DAT_0891;
    DAT_0891 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0891;
  if ((~bVar3 & 4) != 0) {
    bVar3 = DAT_0891;
    if ((~bVar3 & 2) == 0) {
      bVar3 = DAT_00e9;
      if ((bVar3 & 0x10) != 0) {
        bVar3 = DAT_00f0;
        DAT_00f0 = bVar3 & 0xf7;
        DAT_0891 = 0;
        bVar3 = DAT_0890;
        DAT_0890 = bVar3 & 0xbf;
      }
    }
    else {
      uVar1 = DAT_0b33;
      FUN_57e9(&UNK_0a09);
    }
  }
  return;
}


/* Entry b5a0 */

void FUN_b5a0(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      bVar3 = DAT_0bd3;
      DAT_0bd3 = bVar3 & 0x7f;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bd2;
    DAT_0bd2 = bVar3 & 0x7f;
    bVar3 = DAT_0bd3;
    DAT_0bd3 = bVar3 | 0x80;
    uVar2 = DAT_0b30;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08af;
    FUN_57e9(&DAT_0a20);
  }
  return;
}


/* Entry b5d7 */

void FUN_b5d7(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      bVar3 = DAT_0bd3;
      DAT_0bd3 = bVar3 & 0xbf;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bd2;
    DAT_0bd2 = bVar3 & 0xbf;
    bVar3 = DAT_0bd3;
    DAT_0bd3 = bVar3 | 0x40;
    uVar2 = DAT_0b30;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b0;
    FUN_57e9(&DAT_0a21);
  }
  return;
}


/* Entry b60e */

void FUN_b60e(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      bVar3 = DAT_0bd3;
      DAT_0bd3 = bVar3 & 0xdf;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bd2;
    DAT_0bd2 = bVar3 & 0xdf;
    bVar3 = DAT_0bd3;
    DAT_0bd3 = bVar3 | 0x20;
    uVar2 = DAT_0b30;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b1;
    FUN_57e9(&DAT_0a22);
  }
  return;
}


/* Entry b645 */

void FUN_b645(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      bVar3 = DAT_0bd3;
      DAT_0bd3 = bVar3 & 0xef;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bd2;
    DAT_0bd2 = bVar3 & 0xef;
    bVar3 = DAT_0bd3;
    DAT_0bd3 = bVar3 | 0x10;
    uVar2 = DAT_0b30;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b2;
    FUN_57e9(0xa23);
  }
  return;
}


/* Entry b67c */

void FUN_b67c(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      bVar3 = DAT_0bd3;
      DAT_0bd3 = bVar3 & 0xf7;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bd2;
    DAT_0bd2 = bVar3 & 0xf7;
    bVar3 = DAT_0bd3;
    DAT_0bd3 = bVar3 | 8;
    uVar2 = DAT_0b30;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b8;
    FUN_57e9(&DAT_0a24);
  }
  return;
}


/* Entry b6b3 */

void FUN_b6b3(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      bVar3 = DAT_0bd3;
      DAT_0bd3 = bVar3 & 0xfb;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bd2;
    DAT_0bd2 = bVar3 & 0xfb;
    bVar3 = DAT_0bd3;
    DAT_0bd3 = bVar3 | 4;
    uVar2 = DAT_0b30;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b9;
    FUN_57e9(0xa25);
  }
  return;
}


/* Entry b6ea */

void FUN_b6ea(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      bVar3 = DAT_0bd3;
      DAT_0bd3 = bVar3 & 0xfd;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bd2;
    DAT_0bd2 = bVar3 & 0xfd;
    bVar3 = DAT_0bd3;
    DAT_0bd3 = bVar3 | 2;
    uVar2 = DAT_0b30;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08ba;
    FUN_57e9(&DAT_0a26);
  }
  return;
}


/* Entry b721 */

void FUN_b721(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      bVar3 = DAT_0bd3;
      DAT_0bd3 = bVar3 & 0xfe;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bd2;
    DAT_0bd2 = bVar3 & 0xfe;
    bVar3 = DAT_0bd3;
    DAT_0bd3 = bVar3 | 1;
    uVar2 = DAT_0b30;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08bb;
    FUN_57e9(0xa27);
  }
  return;
}


/* Entry b758 */

void FUN_b758(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      bVar3 = DAT_0be9;
      DAT_0be9 = bVar3 & 0x7f;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0be8;
    DAT_0be8 = bVar3 & 0x7f;
    bVar3 = DAT_0be9;
    DAT_0be9 = bVar3 | 0x80;
    uVar2 = DAT_0b30;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b4;
    FUN_57e9(&DAT_0a28);
  }
  return;
}


/* Entry b78f */

void FUN_b78f(void)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = DAT_0891;
  if ((~bVar1 & 2) == 0) {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      bVar1 = DAT_0be9;
      DAT_0be9 = bVar1 & 0xbf;
      bVar1 = DAT_0891;
      DAT_0891 = bVar1 & 0xfd;
    }
  }
  else {
    bVar1 = DAT_0be8;
    DAT_0be8 = bVar1 & 0xbf;
    bVar1 = DAT_0be9;
    DAT_0be9 = bVar1 | 0x40;
    uVar2 = DAT_0b9a;
    FUN_57e9(uVar2,&DAT_0a30);
  }
  return;
}


/* Entry b7b9 */

void FUN_b7b9(void)

{
  byte bVar1;
  
  bVar1 = DAT_0891;
  if ((~bVar1 & 2) == 0) {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
  }
  else {
    bVar1 = DAT_0be8;
    DAT_0be8 = bVar1 & 0xfb;
    bVar1 = DAT_0be9;
    DAT_0be9 = bVar1 | 4;
  }
  bVar1 = DAT_0d15;
  if (bVar1 < 0xb) {
    FUN_57e9(bVar1 + 0xa50);
    bVar1 = DAT_0d15;
    DAT_0d15 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    FUN_5e63();
    FUN_5f35();
    bVar1 = DAT_0d08;
    DAT_0d08 = bVar1 | 0x40;
    bVar1 = DAT_0be9;
    DAT_0be9 = bVar1 & 0xfb;
    bVar1 = DAT_0891;
    DAT_0891 = bVar1 & 0xfd;
  }
  return;
}


/* Entry b817 */

void FUN_b817(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  ushort uVar5;
  
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 | 1;
  bVar1 = DAT_0882;
  DAT_0882 = bVar1 & 0xf7;
  bVar1 = DAT_0881;
  if ((~bVar1 & 0x10) == 0) {
    cVar4 = '\0';
  }
  else {
    bVar1 = DAT_0afa;
    cVar4 = (bVar1 + 1) - (0xfe < bVar1);
  }
  DAT_0afa = cVar4;
  bVar1 = DAT_09a1;
  if ((bVar1 & 0x20) != 0) {
    bVar1 = DAT_09ac;
    DAT_09ac = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_09b6;
  if ((bVar1 & 8) != 0) {
    bVar1 = DAT_09ca;
    DAT_09ca = (bVar1 + 1) - (0xfe < bVar1);
  }
  uVar2 = DAT_08f4;
  DAT_0ba2._0_1_ = uVar2;
  DAT_0ba4 = 0x4a46;
  uVar5 = axis_index_u8_ascending('F');
  DAT_0a8e = uVar5;
  uVar2 = DAT_0900._0_1_;
  DAT_0ba2._0_1_ = uVar2;
  DAT_0ba4 = 0x4a56;
  uVar5 = axis_index_u8_ascending('V');
  DAT_0a90 = uVar5;
  uVar3 = DAT_0a90;
  DAT_0dde = uVar3;
  uVar3 = DAT_0a8e;
  DAT_0de0 = uVar3;
  uVar5 = bilinear_u8_grid(&UNK_4a5d,'\x0f');
  DAT_0a88 = (char)(uVar5 + 0x80 >> 8);
  uVar5 = lookup_u8_uniform_axis((uchar)(uVar5 + 0x80),&UNK_4a33);
  DAT_0a89 = (char)(uVar5 >> 8);
  uVar5 = lookup_u8_uniform_axis((uchar)uVar5,&UNK_3315);
  DAT_097b = (char)(uVar5 >> 8);
  uVar5 = lookup_u8_uniform_axis((uchar)uVar5,&UNK_3327);
  DAT_097c = (char)(uVar5 >> 8);
  uVar5 = lookup_u8_uniform_axis((uchar)uVar5,&UNK_34fd);
  DAT_0a0f = (char)(uVar5 >> 8);
  if (DAT_4243 == '\x02') {
    bVar1 = DAT_0884;
    DAT_0884 = bVar1 | 0x40;
  }
  else {
    bVar1 = DAT_0884;
    DAT_0884 = bVar1 & 0xbf;
  }
  uVar5 = DAT_08f2;
  uVar5 = lookup_u8_uniform_u16_axis(uVar5,&UNK_4bac);
  DAT_0d05 = (char)(uVar5 >> 8);
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 & 0xfe;
  return;
}


/* Entry b900 */

void FUN_b900(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  
  bVar1 = DAT_0be4;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0be4 = bVar1;
  if (DAT_4f0d <= bVar1) {
    bVar1 = DAT_0be3;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0be3 = bVar1;
    if (DAT_4f0b < bVar1) {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xef;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xbf;
      DAT_0be3 = 0;
    }
    else {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 4;
      sVar2 = DAT_0044;
      DAT_0056 = sVar2 + 2;
      bVar1 = DAT_004c;
      DAT_004c = bVar1 & 0xf7;
      bVar1 = DAT_0049;
      DAT_0049 = bVar1 | 0xc0;
      DAT_004e = 8;
      uVar3 = DAT_0044;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      uVar3 = DAT_0056;
      sVar2 = DAT_0056;
      DAT_0056 = DAT_4f12 + sVar2;
      bVar1 = DAT_004c;
      DAT_004c = bVar1 & 0xf7;
      bVar1 = DAT_0049;
      DAT_0049 = bVar1 & 0xbf | 0x80;
      DAT_004e = 8;
    }
    DAT_0be4 = 0;
  }
  return;
}


/* Entry b97f */

void FUN_b97f(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  
  bVar1 = DAT_0be4;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0be4 = bVar1;
  if (DAT_4f0d <= bVar1) {
    bVar1 = DAT_0be3;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0be3 = bVar1;
    if (DAT_4f0b < bVar1) {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xef;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xbf;
      DAT_0be3 = 0;
    }
    else {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 4;
      if (DAT_4e7b != 0) {
        sVar2 = DAT_0044;
        DAT_005c = sVar2 + 2;
        bVar1 = DAT_004c;
        DAT_004c = bVar1 & 0xbf;
        bVar1 = DAT_0048;
        DAT_0048 = bVar1 & 0xef | 0x20;
        DAT_004e = 0x40;
        uVar3 = DAT_0044;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        uVar3 = DAT_005c;
        sVar2 = DAT_005c;
        DAT_005c = (ushort)DAT_4e7b * 0xfa + sVar2;
        bVar1 = DAT_004c;
        DAT_004c = bVar1 & 0xbf;
        bVar1 = DAT_0048;
        DAT_0048 = bVar1 | 0x30;
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
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  
  bVar1 = DAT_0be4;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0be4 = bVar1;
  if (DAT_4f0d <= bVar1) {
    bVar1 = DAT_0be3;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0be3 = bVar1;
    if (DAT_4f0b < bVar1) {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xef;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xbf;
      DAT_0be3 = 0;
    }
    else {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 4;
      if (DAT_4e7b != 0) {
        sVar2 = DAT_0044;
        DAT_005e = sVar2 + 2;
        bVar1 = DAT_004c;
        DAT_004c = bVar1 & 0x7f;
        bVar1 = DAT_0048;
        DAT_0048 = bVar1 & 0xbf | 0x80;
        DAT_004e = 0x80;
        uVar3 = DAT_0044;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        uVar3 = DAT_005e;
        sVar2 = DAT_005e;
        DAT_005e = (ushort)DAT_4e7b * 0xfa + sVar2;
        bVar1 = DAT_004c;
        DAT_004c = bVar1 & 0x7f;
        bVar1 = DAT_0048;
        DAT_0048 = bVar1 | 0xc0;
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
  
  bVar1 = DAT_0be4;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0be4 = bVar1;
  if (DAT_4f0d <= bVar1) {
    bVar1 = DAT_0be3;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0be3 = bVar1;
    if (DAT_4f0b < bVar1) {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xef;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xbf;
      DAT_0be3 = 0;
    }
    else {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 4;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 8;
      DAT_0be5 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 2;
      bVar1 = DAT_0889;
      DAT_0889 = bVar1 | 0x80;
    }
    DAT_0be4 = 0;
  }
  bVar1 = DAT_0893;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0be5, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0be5 = bVar1, DAT_4f0f < bVar1)) {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xf7;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfd;
    bVar1 = DAT_0889;
    DAT_0889 = bVar1 & 0x7f;
  }
  return;
}


/* Entry baed */

void FUN_baed(void)

{
  byte bVar1;
  
  bVar1 = DAT_0be4;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0be4 = bVar1;
  if (DAT_4f0d <= bVar1) {
    bVar1 = DAT_0be3;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0be3 = bVar1;
    if (DAT_4f0b < bVar1) {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xef;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xbf;
      DAT_0be3 = 0;
    }
    else {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 4;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 8;
      DAT_0be5 = 0;
      bVar1 = DAT_0000;
      DAT_0000 = bVar1 & 0xfb;
    }
    DAT_0be4 = 0;
  }
  bVar1 = DAT_0893;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0be5, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0be5 = bVar1, DAT_4f0f < bVar1)) {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xf7;
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 | 4;
  }
  return;
}


/* Entry bb45 */

void FUN_bb45(void)

{
  byte bVar1;
  
  bVar1 = DAT_0be4;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0be4 = bVar1;
  if (DAT_4f0e <= bVar1) {
    bVar1 = DAT_0be3;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0be3 = bVar1;
    if (DAT_4f0b < bVar1) {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xef;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xbf;
      DAT_0be3 = 0;
    }
    else {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 4;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 8;
      DAT_0be5 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 4;
    }
    DAT_0be4 = 0;
  }
  bVar1 = DAT_0893;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0be5, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0be5 = bVar1, DAT_4f10 < bVar1)) {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xf7;
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xfb;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfb;
  }
  return;
}


/* Entry bba1 */

void FUN_bba1(void)

{
  byte bVar1;
  
  bVar1 = DAT_0be4;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0be4 = bVar1;
  if (DAT_4f0e <= bVar1) {
    bVar1 = DAT_0be3;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0be3 = bVar1;
    if (DAT_4f0b < bVar1) {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xef;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xbf;
      DAT_0be3 = 0;
    }
    else {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 4;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 8;
      DAT_0be5 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 0x10;
    }
    DAT_0be4 = 0;
  }
  bVar1 = DAT_0893;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0be5, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0be5 = bVar1, DAT_4f10 < bVar1)) {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xf7;
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xfb;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xef;
  }
  return;
}


/* Entry bbfd */

void FUN_bbfd(void)

{
  byte bVar1;
  
  bVar1 = DAT_0888;
  if ((~bVar1 & 2) == 0) {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 | 4;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 | 1;
  }
  else {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xfb;
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xef;
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xbf;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfe;
  }
  return;
}


/* Entry bc1b */

void FUN_bc1b(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_0891;
  if (((~bVar1 & 2) != 0) && (cVar2 = DAT_0bd2, cVar2 == '\0')) {
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xef;
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xbf;
  }
  return;
}


/* Entry bc2e */

void FUN_bc2e(void)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  byte bVar8;
  ushort uVar9;
  
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 | 1;
  bVar1 = DAT_0880;
  if ((bVar1 & 1) != 0) {
    bVar1 = DAT_0b5c;
    DAT_0b5c = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0880;
  if (((bVar1 & 1) == 0) || (bVar1 = DAT_0883, (~bVar1 & 4) == 0)) {
    DAT_0baa = 0;
  }
  else {
    bVar1 = DAT_0baa;
    DAT_0baa = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0883;
  DAT_0883 = bVar1 & 0xfb;
  bVar1 = DAT_0881;
  if ((~bVar1 & 0x10) == 0) {
    DAT_09b5 = 0;
  }
  else {
    bVar1 = DAT_09b5;
    DAT_09b5 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b5;
  if ((bVar1 & 0x40) == 0) {
    DAT_0b3e = 0;
    bVar1 = DAT_0b4b;
    DAT_0b4b = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b4b = 0;
    bVar1 = DAT_0b3e;
    DAT_0b3e = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0bfe;
  if ((bVar1 & 0x80) == 0) {
LAB_bcca:
    DAT_0b3f = 0;
    DAT_0b4c = 0;
    bVar1 = DAT_08b5;
    DAT_08b5 = bVar1 & 0xfb;
    bVar1 = DAT_08b5;
    DAT_08b5 = bVar1 & 0xfd;
  }
  else {
    bVar1 = DAT_08b5;
    if ((bVar1 & 4) == 0) {
      bVar1 = DAT_08b5;
      if ((bVar1 & 2) == 0) goto LAB_bcca;
      DAT_0b3f = 0;
      bVar1 = DAT_0b4c;
      DAT_0b4c = (bVar1 + 1) - (0xfe < bVar1);
    }
    else {
      DAT_0b4c = 0;
      bVar1 = DAT_0b3f;
      DAT_0b3f = (bVar1 + 1) - (0xfe < bVar1);
    }
  }
  bVar1 = DAT_08b5;
  if ((bVar1 & 0x80) == 0) {
    DAT_0b40 = 0;
    bVar1 = DAT_0b4d;
    DAT_0b4d = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b4d = 0;
    bVar1 = DAT_0b40;
    DAT_0b40 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b5;
  if ((bVar1 & 0x20) == 0) {
    DAT_0b42 = 0;
    bVar1 = DAT_0b4f;
    DAT_0b4f = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b4f = 0;
    bVar1 = DAT_0b42;
    DAT_0b42 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b5;
  if ((bVar1 & 0x10) == 0) {
    DAT_0b41 = 0;
    bVar1 = DAT_0b4e;
    DAT_0b4e = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b4e = 0;
    bVar1 = DAT_0b41;
    DAT_0b41 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b6;
  if ((bVar1 & 4) == 0) {
    DAT_0bc6 = 0;
    bVar1 = DAT_0bc7;
    DAT_0bc7 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0bc7 = 0;
    bVar1 = DAT_0bc6;
    DAT_0bc6 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b6;
  if ((((~bVar1 & 2) == 0) ||
      (((cVar2 = DAT_0d87, cVar2 == '\t' && (bVar1 = DAT_0896._0_1_, (bVar1 & 0x10) == 0)) ||
       (bVar1 = DAT_0881, (~bVar1 & 0x10) == 0)))) || (cVar2 = DAT_0bca, cVar2 == '\0')) {
    DAT_0bcd = 0;
  }
  else {
    bVar1 = DAT_0bcd;
    DAT_0bcd = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b7;
  if ((bVar1 & 0x80) == 0) {
    DAT_0b48 = 0;
    bVar1 = DAT_0b52;
    DAT_0b52 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b52 = 0;
  }
  bVar1 = DAT_08b7;
  if ((bVar1 & 0x40) == 0) {
    DAT_0b49 = 0;
    bVar1 = DAT_0b53;
    DAT_0b53 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b53 = 0;
    bVar1 = DAT_0b49;
    DAT_0b49 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b7;
  if ((bVar1 & 0x20) == 0) {
    DAT_0bcf = 0;
    bVar1 = DAT_0bd0;
    DAT_0bd0 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0bd0 = 0;
    bVar1 = DAT_0bcf;
    DAT_0bcf = (bVar1 + 1) - (0xfe < bVar1);
  }
  cVar2 = DAT_0d60;
  if (((cVar2 == -0x80) || (bVar1 = DAT_08a0, (~bVar1 & 4) == 0)) ||
     (bVar1 = DAT_08b2, (~bVar1 & 0x80) == 0)) goto LAB_be8a;
  if (DAT_4e91 != -0x80) {
    bVar1 = DAT_08dd;
    if ((DAT_4e96 <= bVar1) || (bVar1 <= DAT_4e97)) {
      bVar1 = DAT_08b6;
      if ((bVar1 & 8) == 0) {
        bVar1 = DAT_08b6;
        DAT_08b6 = bVar1 | 8;
        DAT_0b0c = 0;
      }
      else {
        bVar1 = DAT_0b0c;
        bVar1 = (bVar1 + 1) - (0xfe < bVar1);
        DAT_0b0c = bVar1;
        bVar8 = DAT_0d8a;
        if ((bVar8 <= bVar1) && (bVar1 = DAT_08b1, (~bVar1 & 0x10) != 0)) {
          bVar1 = DAT_08b1;
          DAT_08b1 = bVar1 | 0x10;
          bVar1 = DAT_0bd2;
          DAT_0bd2 = bVar1 | 0x20;
          bVar1 = DAT_08ba;
          if ((~bVar1 & 0x10) != 0) {
            bVar1 = DAT_08ba;
            DAT_08ba = bVar1 | 0x10;
            bVar1 = DAT_0bd2;
            DAT_0bd2 = bVar1 | 2;
          }
        }
      }
      goto LAB_be8a;
    }
    bVar1 = DAT_08b6;
    if ((~bVar1 & 8) == 0) {
      bVar1 = DAT_08b6;
      DAT_08b6 = bVar1 & 0xf7;
      DAT_0b0c = 0;
      goto LAB_be8a;
    }
    bVar1 = DAT_0b0c;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b0c = bVar1;
    bVar8 = DAT_0d8a;
    if (bVar1 < bVar8) goto LAB_be8a;
  }
  bVar1 = DAT_08b1;
  if ((bVar1 & 0x10) != 0) {
    bVar1 = DAT_08b1;
    DAT_08b1 = bVar1 & 0xef;
    bVar1 = DAT_0bd2;
    DAT_0bd2 = bVar1 | 0x20;
  }
LAB_be8a:
  cVar2 = DAT_0d52;
  if ((((cVar2 != -0x80) && (bVar1 = DAT_08a0, (~bVar1 & 4) != 0)) &&
      (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)) && (bVar1 = DAT_0baa, DAT_4e3c <= bVar1)) {
    bVar1 = DAT_08af;
    if ((~bVar1 & 0x40) != 0) {
      bVar1 = DAT_08af;
      DAT_08af = bVar1 | 0x40;
      bVar1 = DAT_0bd2;
      DAT_0bd2 = bVar1 | 0x80;
    }
    bVar1 = DAT_08b8;
    if ((~bVar1 & 0x40) != 0) {
      bVar1 = DAT_08b8;
      DAT_08b8 = bVar1 | 0x40;
      bVar1 = DAT_0bd2;
      DAT_0bd2 = bVar1 | 8;
    }
  }
  cVar2 = DAT_0d56;
  if (((cVar2 != -0x80) && (bVar1 = DAT_08af, (~bVar1 & 8) != 0)) &&
     ((bVar1 = DAT_08a0, (~bVar1 & 4) != 0 && (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)))) {
    uVar9 = DAT_0900;
    uVar3 = DAT_0b9c;
    if (uVar3 <= uVar9) {
      DAT_0b9c = uVar9;
      bVar1 = DAT_089e;
      DAT_089e = bVar1 | 0x80;
    }
    uVar3 = DAT_0b9c;
    uVar9 = uVar3 - DAT_4e44;
    if (uVar3 < DAT_4e44) {
      uVar9 = 0;
    }
    uVar3 = DAT_0900;
    if (uVar3 < uVar9) {
      sVar4 = DAT_0900;
      DAT_0b9c = sVar4 + DAT_4e44;
      bVar1 = DAT_089e;
      DAT_089e = bVar1 & 0x7f;
    }
    bVar1 = DAT_089e;
    if ((~bVar1 & 0x80) == 0) {
      bVar1 = DAT_089e;
      bVar1 = ~bVar1;
    }
    else {
      bVar1 = DAT_089e;
    }
    if (((bVar1 & 0x40) != 0) && (bVar1 = DAT_0b9e, bVar1 < DAT_4e46)) {
      DAT_0b9e = (bVar1 + 1) - (0xfe < bVar1);
    }
    uVar3 = DAT_0bb0;
    uVar7 = DAT_0bb2;
    uVar9 = uVar3 - uVar7;
    if (uVar3 < uVar7) {
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    if (DAT_4e48 <= uVar9) {
      bVar1 = DAT_0b9e;
      if ((bVar1 < DAT_4e46) && (bVar1 = DAT_08af, (bVar1 & 4) != 0)) {
        bVar1 = DAT_08af;
        DAT_08af = bVar1 & 0xfb;
        bVar1 = DAT_0bd2;
        DAT_0bd2 = bVar1 | 0x80;
        bVar1 = DAT_08af;
        if (((~bVar1 & 8) != 0) && (bVar1 = DAT_08b1, (~bVar1 & 8) != 0)) {
          bVar1 = DAT_0889;
          DAT_0889 = bVar1 | 2;
          DAT_0b94 = 0;
          uVar5 = DAT_0a83;
          DAT_0b92 = uVar5;
          DAT_0b95 = uVar5;
        }
      }
      DAT_0b9e = 0;
    }
    bVar1 = DAT_0b9e;
    if (bVar1 == DAT_4e46) {
      bVar1 = DAT_08af;
      if ((~bVar1 & 4) != 0) {
        bVar1 = DAT_08af;
        DAT_08af = bVar1 | 4;
        bVar1 = DAT_0bd2;
        DAT_0bd2 = bVar1 | 0x80;
        bVar1 = DAT_08b8;
        if ((~bVar1 & 4) != 0) {
          bVar1 = DAT_08b8;
          DAT_08b8 = bVar1 | 4;
          bVar1 = DAT_0bd2;
          DAT_0bd2 = bVar1 | 8;
        }
      }
      bVar1 = DAT_08b6;
      DAT_08b6 = bVar1 | 1;
      bVar1 = DAT_0889;
      DAT_0889 = bVar1 & 0xfd;
      DAT_0b92 = 0;
    }
    bVar1 = DAT_089e;
    if ((~bVar1 & 0x80) == 0) {
      bVar1 = DAT_089e;
      DAT_089e = bVar1 | 0x40;
    }
    else {
      bVar1 = DAT_089e;
      DAT_089e = bVar1 & 0xbf;
    }
    uVar6 = DAT_0bb0;
    DAT_0bb2 = uVar6;
  }
  cVar2 = DAT_08f8._0_1_;
  if (((cVar2 == '\n') && (bVar1 = DAT_0880, (~bVar1 & 1) != 0)) && (bVar1 = DAT_0bce, bVar1 < 0x10)
     ) {
    bVar1 = DAT_0b7e;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b7e = bVar1;
    if (0x1d < bVar1) {
      FUN_5843();
      return;
    }
  }
  else {
    DAT_0b7e = 0;
  }
  bVar1 = DAT_08a3;
  if (((~bVar1 & 0x80) != 0) && (bVar1 = DAT_08a2, (bVar1 & 0x80) != 0)) {
    bVar1 = DAT_0b34;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b34 = bVar1;
    if (DAT_4e32 <= bVar1) {
      bVar1 = DAT_08a3;
      DAT_08a3 = bVar1 | 0x80;
    }
  }
  cVar2 = DAT_0dd5;
  if ((cVar2 != -0x80) && (bVar1 = DAT_0d06, (~bVar1 & 0x80) != 0)) {
    bVar1 = DAT_0d0f;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0d0f = bVar1;
    if (DAT_4e83 <= bVar1) {
      bVar1 = DAT_0d08;
      DAT_0d08 = bVar1 | 1;
    }
  }
  cVar2 = DAT_0dd5;
  if ((((cVar2 != -0x80) && (bVar1 = DAT_0d06, (~bVar1 & 0x80) != 0)) &&
      (bVar1 = DAT_0d07, (bVar1 & 8) != 0)) && (bVar1 = DAT_0d07, (~bVar1 & 4) != 0)) {
    bVar1 = DAT_0d0d;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0d0d = bVar1;
    if (DAT_4e81 <= bVar1) {
      bVar1 = DAT_0d07;
      DAT_0d07 = bVar1 | 4;
      bVar1 = DAT_0d0e;
      bVar1 = (bVar1 + 1) - (0xfe < bVar1);
      DAT_0d0e = bVar1;
      if (DAT_4e82 <= bVar1) {
        bVar1 = DAT_0d08;
        DAT_0d08 = bVar1 | 1;
      }
    }
  }
  bVar1 = DAT_0882;
  DAT_0882 = bVar1 & 0xfd;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 & 0xfe;
  return;
}


/* Entry c063 */

void FUN_c063(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  
  bVar3 = DAT_08bf;
  DAT_08bf = bVar3 | 0x20;
  bVar3 = DAT_08b6;
  if ((bVar3 & 0x40) == 0) {
    DAT_0b43 = 0;
  }
  else {
    bVar3 = DAT_0b43;
    DAT_0b43 = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_08b6;
  if ((bVar3 & 0x20) == 0) {
    DAT_0b44 = 0;
  }
  else {
    bVar3 = DAT_0b44;
    DAT_0b44 = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_08b6;
  if ((bVar3 & 0x10) == 0) {
    DAT_0b45 = 0;
  }
  else {
    bVar3 = DAT_0b45;
    DAT_0b45 = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_08b7;
  if ((bVar3 & 0x80) == 0) {
    DAT_0b48 = 0;
  }
  else {
    DAT_0b52 = 0;
    bVar3 = DAT_0b48;
    DAT_0b48 = (bVar3 + 1) - (0xfe < bVar3);
  }
  cVar1 = DAT_0d7e;
  cVar2 = DAT_0d9d;
  bVar3 = cVar1 + cVar2;
  if (bVar3 == 0x17) {
    bVar3 = 0x16;
  }
  else if (0x16 < bVar3) {
    bVar3 = bVar3 - 0x18;
  }
  DAT_0cab = bVar3;
  bVar3 = DAT_08b7;
  if ((bVar3 & 0x10) == 0) {
    DAT_0b4a = 0;
  }
  else {
    DAT_0b54 = 0;
    bVar3 = DAT_0b4a;
    DAT_0b4a = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_08b7;
  if ((bVar3 & 8) == 0) {
    DAT_0b54 = 0;
  }
  else {
    DAT_0b4a = 0;
    bVar3 = DAT_0b54;
    DAT_0b54 = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0881;
  if ((~bVar3 & 0x10) == 0) {
    DAT_0caf = 0;
  }
  else {
    bVar3 = DAT_0caf;
    DAT_0caf = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0adb;
  if ((bVar3 & 0x80) == 0) {
    DAT_0adc = 0;
  }
  else {
    bVar3 = DAT_0adc;
    DAT_0adc = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0adb;
  if ((bVar3 & 0x40) == 0) {
    DAT_0add = 0;
  }
  else {
    bVar3 = DAT_0add;
    DAT_0add = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0adb;
  if ((bVar3 & 0x20) == 0) {
    DAT_0ade = 0;
  }
  else {
    bVar3 = DAT_0ade;
    DAT_0ade = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0adb;
  if ((bVar3 & 0x10) == 0) {
    DAT_0adf = 0;
  }
  else {
    bVar3 = DAT_0adf;
    DAT_0adf = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0adb;
  if ((bVar3 & 8) == 0) {
    DAT_0ae0 = 0;
  }
  else {
    bVar3 = DAT_0ae0;
    DAT_0ae0 = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0887;
  DAT_0887 = bVar3 & 0x7f;
  bVar3 = DAT_08bf;
  DAT_08bf = bVar3 & 0xdf;
  return;
}


/* Entry c199 */

void FUN_c199(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 | 0x10;
  bVar1 = DAT_08b6;
  if (((bVar1 & 2) == 0) ||
     (((cVar2 = DAT_0d87, cVar2 == '\t' && (bVar1 = DAT_0896._0_1_, (bVar1 & 0x10) == 0)) ||
      (cVar2 = DAT_0bca, cVar2 != '\0')))) {
    DAT_0bcc = 0;
  }
  else {
    bVar1 = DAT_0bcc;
    DAT_0bcc = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0887;
  DAT_0887 = bVar1 & 0xbf;
  bVar1 = DAT_08bf;
  DAT_08bf = bVar1 & 0xef;
  return;
}


/* Entry c1cd */

ushort lookup_u8_uniform_axis(uchar input_raw,byte *table)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  byte *pbVar6;
  
  bVar3 = input_raw - *table;
  if (input_raw < *table) {
    bVar3 = 0;
  }
  if (table[1] < bVar3) {
    bVar3 = table[1];
  }
  cVar2 = (char)((ushort)bVar3 * (ushort)table[2]);
  pbVar6 = table + ((ushort)bVar3 * (ushort)table[2] >> 8);
  sVar5 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = pbVar6[4] - pbVar6[3];
    uVar4 = CONCAT11(cVar2,cVar1);
    if (pbVar6[4] < pbVar6[3]) {
      uVar4 = CONCAT11(-cVar2,-cVar1);
      pbVar6 = pbVar6 + 1;
    }
    sVar5 = (uVar4 >> 8) * (uVar4 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar5 >> 8) + pbVar6[3],(char)sVar5);
}


/* Entry c1db */

ushort interp_u8_q8_index(ushort index_q8,byte *table)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  byte *pbVar5;
  
  cVar2 = (char)index_q8;
  pbVar5 = table + (index_q8 >> 8);
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = pbVar5[4] - pbVar5[3];
    uVar3 = CONCAT11(cVar2,cVar1);
    if (pbVar5[4] < pbVar5[3]) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      pbVar5 = pbVar5 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + pbVar5[3],(char)sVar4);
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

ushort lookup_u8_uniform_u16_axis(ushort input_raw,byte *table)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  byte *pbVar5;
  
  uVar3 = input_raw - *(ushort *)table;
  if (input_raw < *(ushort *)table) {
    uVar3 = 0;
  }
  if (*(ushort *)(table + 2) < uVar3) {
    uVar3 = *(ushort *)(table + 2);
  }
  uVar3 = multiply_u16_shift8_saturate(uVar3,*(ushort *)(table + 4));
  cVar2 = (char)uVar3;
  pbVar5 = table + (uVar3 >> 8);
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = pbVar5[7] - pbVar5[6];
    uVar3 = CONCAT11(cVar2,cVar1);
    if (pbVar5[7] < pbVar5[6]) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      pbVar5 = pbVar5 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + pbVar5[6],(char)sVar4);
}


/* Entry c21c */

ushort scale_u16_by_u8(ushort value,byte *scale_address)

{
  return (ushort)((uint)*scale_address * (uint)value >> 8);
}


/* Entry c227 */

ushort scale_u16_by_u8_rounded(ushort value,byte *scale_address)

{
  byte bVar2;
  ushort uVar1;
  
  uVar1 = (ushort)((uint)*scale_address * (uint)value);
  bVar2 = (byte)((uint)*scale_address * (uint)value >> 0x10);
  if (CARRY1(bVar2,0xff7f < uVar1)) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = CONCAT11(bVar2 + (0xff7f < uVar1),(char)(uVar1 + 0x80 >> 8));
  }
  return uVar1;
}


/* Entry c243 */

ushort multiply_u16_shift8_saturate(ushort value,ushort factor)

{
  ushort uVar1;
  
  if ((ushort)((uint)value * (uint)factor >> 0x10) < 0x100) {
    uVar1 = (ushort)((uint)value * (uint)factor >> 8);
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

ushort FUN_c276(ushort index_q8,byte *table_bias)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  byte *pbVar5;
  
  cVar2 = (char)index_q8;
  pbVar5 = table_bias + (index_q8 >> 8);
  sVar4 = CONCAT11(cVar2,cVar2);
  if (cVar2 != '\0') {
    cVar1 = pbVar5[4] - pbVar5[3];
    uVar3 = CONCAT11(cVar2,cVar1);
    if (pbVar5[4] < pbVar5[3]) {
      uVar3 = CONCAT11(-cVar2,-cVar1);
      pbVar5 = pbVar5 + 1;
    }
    sVar4 = (uVar3 >> 8) * (uVar3 & 0xff);
  }
  return CONCAT11((char)((ushort)sVar4 >> 8) + pbVar5[3],(char)sVar4);
}


/* Entry c28d */

short lookup_u8_grid_special(undefined2 param_1,short param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  byte *table;
  
  DAT_0de3 = (char)param_1;
  cVar4 = (char)((ushort)param_1 >> 8);
  DAT_0de2 = cVar4;
  bVar5 = DAT_0de2;
  sVar7 = param_2;
  for (; bVar1 = DAT_0de0._0_1_, bVar5 <= bVar1; bVar5 = bVar5 + cVar3) {
    sVar7 = (ushort)(byte)(cVar4 * (char)param_1) + sVar7;
    cVar3 = DAT_0de2;
  }
  cVar4 = DAT_0de2;
  DAT_0de2 = bVar5 - cVar4;
  cVar4 = DAT_0de0._0_1_;
  cVar3 = DAT_0de2;
  bVar5 = DAT_0de3;
  table = (byte *)(((ushort)(byte)(cVar4 - cVar3) * (ushort)bVar5 & 0xff) + sVar7);
  uVar6 = DAT_0dde;
  uVar6 = interp_u8_q8_index(uVar6,table);
  sVar7 = uVar6 + 0x80;
  cVar4 = DAT_0de0._1_1_;
  if (cVar4 != '\0') {
    DAT_0de2 = (char)((ushort)sVar7 >> 8);
    bVar5 = DAT_0de3;
    uVar6 = DAT_0dde;
    uVar6 = interp_u8_q8_index(uVar6,table + bVar5);
    DAT_0de3 = (char)(uVar6 + 0x80 >> 8);
    uVar2 = DAT_0de0._1_1_;
    sVar7 = FUN_c1e1(0xddf,param_2);
    sVar7 = sVar7 + 0x80;
  }
  return sVar7;
}


/* Entry c2e8 */

ushort candidate_unreferenced_c2e8(byte param_1,undefined2 param_2)

{
  byte bVar1;
  char cVar2;
  byte fraction;
  short sVar3;
  ushort uVar4;
  byte *table_bias;
  
  RAM0dee = param_2;
  bVar1 = DAT_0dea;
  sVar3 = RAM0dee;
  fraction = DAT_0dec;
  table_bias = (byte *)((ushort)fraction + (ushort)bVar1 * (ushort)param_1 + sVar3);
  uVar4 = interp_u8_q8_fraction(fraction,table_bias);
  cVar2 = DAT_0deb;
  if (cVar2 == '\0') {
    DAT_0df4 = uVar4;
    uVar4 = DAT_0df4;
  }
  else {
    DAT_0dee = (char)(uVar4 + 0x80 >> 8);
    uVar4 = interp_u8_q8_fraction(param_1,table_bias + param_1);
    DAT_0def = (char)(uVar4 + 0x80 >> 8);
    uVar4 = interp_u8_q8_fraction((uchar)(uVar4 + 0x80),&DAT_0deb);
  }
  return uVar4;
}


/* Entry c32d */

ushort bilinear_u8_grid(byte *table_bias,uchar columns)

{
  byte bVar1;
  char cVar2;
  byte fraction;
  short sVar3;
  ushort uVar4;
  byte *table_bias_00;
  
  RAM0de2 = table_bias;
  bVar1 = DAT_0dde._0_1_;
  sVar3 = RAM0de2;
  fraction = DAT_0de0._0_1_;
  table_bias_00 = (byte *)((ushort)fraction + (ushort)bVar1 * (ushort)columns + sVar3);
  uVar4 = interp_u8_q8_fraction(fraction,table_bias_00);
  cVar2 = DAT_0dde._1_1_;
  if (cVar2 == '\0') {
    RAM0de8 = uVar4;
    uVar4 = RAM0de8;
  }
  else {
    DAT_0de2 = (char)(uVar4 + 0x80 >> 8);
    uVar4 = interp_u8_q8_fraction(columns,table_bias_00 + columns);
    DAT_0de3 = (char)(uVar4 + 0x80 >> 8);
    uVar4 = interp_u8_q8_fraction((uchar)(uVar4 + 0x80),(byte *)((short)&DAT_0dde + 1));
  }
  return uVar4;
}


/* Entry c372 */

ushort interp_u8_q8_fraction(uchar fraction,byte *table_bias)

{
  byte bVar1;
  short sVar2;
  
  sVar2 = CONCAT11(fraction,fraction);
  if (fraction != '\0') {
    bVar1 = table_bias[4] - table_bias[3];
    if (table_bias[4] < table_bias[3]) {
      sVar2 = (ushort)(byte)-fraction * (ushort)(byte)-bVar1;
      return CONCAT11((char)((ushort)sVar2 >> 8) + table_bias[4],(char)sVar2);
    }
    sVar2 = (ushort)fraction * (ushort)bVar1;
  }
  return CONCAT11((char)((ushort)sVar2 >> 8) + table_bias[3],(char)sVar2);
}


/* Entry c386 */

short candidate_unreferenced_c386(undefined2 param_1,byte *param_2)

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
    uVar1 = *(ushort *)(param_2 + sVar2 + 5) - *(ushort *)(param_2 + sVar2 + 3);
    if (*(ushort *)(param_2 + sVar2 + 5) < *(ushort *)(param_2 + sVar2 + 3)) {
      return (short)((uint)(byte)-bVar4 * 0x100 *
                     (uint)CONCAT11((~(byte)(uVar1 >> 8) + 1) - ((char)-(char)uVar1 != '\0'),
                                    -(char)uVar1) >> 0x10) + *(short *)(param_2 + sVar2 + 5);
    }
    sVar5 = (short)((uint)bVar4 * 0x100 * (uint)uVar1 >> 0x10);
  }
  return sVar5 + *(short *)(param_2 + sVar2 + 3);
}


/* Entry c3c0 */

short candidate_unreferenced_c3c0(ushort param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  
  uVar5 = param_1 - *param_2;
  if (param_1 < *param_2) {
    uVar5 = 0;
  }
  if (param_2[1] < uVar5) {
    uVar5 = param_2[1];
  }
  uVar2 = (uint)param_2[2] * (uint)uVar5;
  DAT_0e10 = (short)(uVar2 >> 0x10) << 1;
  sVar4 = DAT_0e10;
  sVar6 = 0;
  if ((short)uVar2 != 0) {
    uVar5 = *(ushort *)((short)param_2 + sVar4 + 8);
    uVar1 = *(ushort *)((short)param_2 + sVar4 + 6);
    uVar3 = uVar5 - uVar1;
    if (uVar5 < uVar1) {
      return (short)((uint)CONCAT11((~(byte)(uVar3 >> 8) + 1) - ((char)-(char)uVar3 != '\0'),
                                    -(char)uVar3) *
                     (uint)CONCAT11((~(byte)(uVar2 >> 8) + 1) - ((char)-(char)uVar2 != '\0'),
                                    -(char)uVar2) >> 0x10) + *(short *)((short)param_2 + sVar4 + 8);
    }
    sVar6 = (short)((uVar2 & 0xffff) * (uint)uVar3 >> 0x10);
  }
  return sVar6 + *(short *)((short)param_2 + sVar4 + 6);
}


/* Entry c3e2 */

ushort interp_u16_q16_fraction(ushort fraction,byte *table_bias)

{
  ushort uVar1;
  short sVar2;
  
  sVar2 = 0;
  if (fraction != 0) {
    uVar1 = *(ushort *)(table_bias + 8) - *(ushort *)(table_bias + 6);
    if (*(ushort *)(table_bias + 8) < *(ushort *)(table_bias + 6)) {
      return (short)((uint)CONCAT11((~(byte)(uVar1 >> 8) + 1) - ((char)-(char)uVar1 != '\0'),
                                    -(char)uVar1) *
                     (uint)CONCAT11((~(byte)(fraction >> 8) + 1) - ((char)-(char)fraction != '\0'),
                                    -(char)fraction) >> 0x10) + *(short *)(table_bias + 8);
    }
    sVar2 = (short)((uint)fraction * (uint)uVar1 >> 0x10);
  }
  return sVar2 + *(short *)(table_bias + 6);
}


/* Entry c407 */

undefined2 FUN_c407(ushort param_1,ushort param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  
  DAT_0dde = param_2;
  uVar1 = DAT_0dde;
  if (param_1 < uVar1) {
    return 0;
  }
  DAT_0de0 = param_1 / param_2;
  uVar2 = DAT_0dde;
  uVar2 = DAT_0de0;
  return uVar2;
}


/* Entry c422 */

void candidate_unreferenced_c422(ushort *param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  byte *table_bias;
  
  uVar6 = DAT_0e16;
  if (param_1[8] <= uVar6) {
    uVar6 = param_1[8];
  }
  if (param_1[6] < uVar6) {
    uVar7 = uVar6 + param_1[6] >> 1;
    uVar5 = CONCAT11((byte)(uVar7 >> 8) | CARRY2(uVar6,param_1[6]) << 7,(char)uVar7);
    uVar6 = param_1[7] + param_1[6] >> 1;
    DAT_0e0c = CONCAT11((byte)(uVar6 >> 8) | CARRY2(param_1[7],param_1[6]) << 7,(char)uVar6);
    uVar7 = DAT_0e0c;
    uVar6 = uVar5 - uVar7;
    if (uVar7 <= uVar5) {
      uVar6 = uVar6 >> 1;
    }
    sVar3 = DAT_0e0c;
    uVar6 = uVar6 + sVar3;
  }
  uVar7 = uVar6 - param_1[5];
  if (uVar6 < param_1[5]) {
    uVar7 = 0;
  }
  DAT_0e08 = (short)((uint)param_1[9] * (uint)uVar7);
  DAT_0e06 = (char)((uint)param_1[9] * (uint)uVar7 >> 0x10);
  uVar6 = DAT_0e18;
  if (param_1[3] <= uVar6) {
    uVar6 = param_1[3];
  }
  if (param_1[1] < uVar6) {
    uVar7 = uVar6 + param_1[1] >> 1;
    uVar5 = CONCAT11((byte)(uVar7 >> 8) | CARRY2(uVar6,param_1[1]) << 7,(char)uVar7);
    uVar6 = param_1[2] + param_1[1] >> 1;
    DAT_0e0c = CONCAT11((byte)(uVar6 >> 8) | CARRY2(param_1[2],param_1[1]) << 7,(char)uVar6);
    uVar7 = DAT_0e0c;
    uVar6 = uVar5 - uVar7;
    if (uVar7 <= uVar5) {
      uVar6 = uVar6 >> 1;
    }
    sVar3 = DAT_0e0c;
    uVar6 = uVar6 + sVar3;
  }
  uVar7 = uVar6 - *param_1;
  if (uVar6 < *param_1) {
    uVar7 = 0;
  }
  DAT_0e0a = (short)((uint)param_1[4] * (uint)uVar7);
  bVar1 = *(byte *)(param_1 + 10);
  DAT_0e0e = (ushort)bVar1 * ((ushort)((uint)param_1[4] * (uint)uVar7 >> 0x10) & 0xff);
  sVar3 = DAT_0e0e;
  sVar4 = DAT_0e0e;
  bVar2 = DAT_0e06;
  table_bias = (byte *)((short)param_1 + (ushort)bVar2 + (ushort)bVar2 + sVar4 + sVar3 + 0xf);
  uVar6 = DAT_0e08;
  uVar6 = interp_u16_q16_fraction(uVar6,table_bias);
  sVar3 = DAT_0e0a;
  if (sVar3 == 0) {
    return;
  }
  RAM0e06 = uVar6;
  uVar6 = DAT_0e08;
  uVar6 = interp_u16_q16_fraction(uVar6,table_bias + (ushort)bVar1 + (ushort)bVar1);
  DAT_0e08 = uVar6;
  uVar6 = DAT_0e0a;
  interp_u16_q16_fraction(uVar6,&UNK_0e00);
  return;
}


/* Entry c499 */

ushort bilinear_u16_grid(byte *table_bias,uchar columns,uchar row_index)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  byte *table_bias_00;
  
  DAT_0e0e = (ushort)columns * (ushort)row_index;
  sVar2 = DAT_0e0e;
  sVar3 = DAT_0e0e;
  bVar1 = DAT_0e06;
  table_bias_00 = table_bias + (ushort)bVar1 + (ushort)bVar1 + sVar3 + sVar2 + 0xf;
  uVar4 = DAT_0e08;
  uVar4 = interp_u16_q16_fraction(uVar4,table_bias_00);
  sVar2 = DAT_0e0a;
  if (sVar2 == 0) {
    return uVar4;
  }
  RAM0e06 = uVar4;
  uVar4 = DAT_0e08;
  uVar4 = interp_u16_q16_fraction(uVar4,table_bias_00 + (ushort)columns + (ushort)columns);
  DAT_0e08 = uVar4;
  uVar4 = DAT_0e0a;
  uVar4 = interp_u16_q16_fraction(uVar4,&UNK_0e00);
  return uVar4;
}


/* Entry c4dc */

ushort bilinear_modulo24_grid(byte *table_bias,uchar columns)

{
  byte bVar1;
  char cVar2;
  byte fraction;
  short sVar3;
  ushort uVar4;
  byte *table_bias_00;
  
  RAM0de2 = table_bias;
  bVar1 = DAT_0dde._0_1_;
  sVar3 = RAM0de2;
  fraction = DAT_0de0._0_1_;
  table_bias_00 = (byte *)((ushort)fraction + (ushort)bVar1 * (ushort)columns + sVar3);
  uVar4 = interp_modulo24(fraction,table_bias_00);
  cVar2 = DAT_0dde._1_1_;
  if (cVar2 == '\0') {
    RAM0de8 = uVar4;
    uVar4 = RAM0de8;
  }
  else {
    DAT_0de2 = (char)(uVar4 + 0x80 >> 8);
    uVar4 = interp_modulo24(columns,table_bias_00 + columns);
    DAT_0de3 = (char)(uVar4 + 0x80 >> 8);
    uVar4 = interp_modulo24((uchar)(uVar4 + 0x80),(byte *)((short)&DAT_0dde + 1));
  }
  return uVar4;
}


/* Entry c521 */

ushort interp_modulo24(uchar fraction,byte *table_bias)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char cVar5;
  short sVar4;
  undefined1 uVar6;
  
  bVar1 = DAT_0d7e;
  cVar5 = table_bias[3] - bVar1;
  if (table_bias[3] < bVar1) {
    cVar5 = cVar5 + '\x18';
  }
  DAT_0de4 = cVar5;
  bVar1 = DAT_0d7e;
  cVar5 = table_bias[4] - bVar1;
  if (table_bias[4] < bVar1) {
    cVar5 = cVar5 + '\x18';
  }
  DAT_0de5._0_1_ = cVar5;
  sVar4 = CONCAT11(fraction,fraction);
  if (fraction != '\0') {
    bVar3 = DAT_0de5._0_1_;
    bVar1 = DAT_0de4;
    if (bVar3 < bVar1) {
      sVar4 = (ushort)(byte)-fraction * (ushort)(byte)-(bVar3 - bVar1);
      cVar5 = DAT_0de5._0_1_;
      cVar5 = (char)((ushort)sVar4 >> 8) + cVar5;
      uVar6 = (undefined1)sVar4;
      goto LAB_c551;
    }
    sVar4 = (ushort)fraction * (ushort)(byte)(bVar3 - bVar1);
  }
  cVar5 = DAT_0de4;
  cVar5 = (char)((ushort)sVar4 >> 8) + cVar5;
  uVar6 = (undefined1)sVar4;
LAB_c551:
  cVar2 = DAT_0d7e;
  bVar1 = cVar5 + cVar2;
  if (0x17 < bVar1) {
    bVar1 = bVar1 - 0x18;
  }
  return CONCAT11(bVar1,uVar6);
}


/* Entry c55b */

void FUN_c55b(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 | 0x10;
  bVar1 = DAT_0a16;
  if ((~bVar1 & 0x80) == 0) {
    DAT_004e = 0x40;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x40) != 0) {
      sVar3 = DAT_0044;
      sVar4 = DAT_005c;
      if (199 < (ushort)(sVar3 - sVar4)) {
        bVar1 = DAT_0000;
        if ((bVar1 & 1) == 0) {
          DAT_0b56 = 0;
          bVar1 = DAT_0b55;
          DAT_0b55 = (bVar1 + 1) - (0xfe < bVar1);
        }
        else {
          DAT_0b55 = 0;
          bVar1 = DAT_0b56;
          DAT_0b56 = (bVar1 + 1) - (0xfe < bVar1);
        }
      }
    }
  }
  bVar1 = DAT_0a17;
  if (((~bVar1 & 0x80) == 0) || (bVar1 = DAT_088b, (bVar1 & 0x80) == 0)) {
LAB_c5c8:
    sVar3 = DAT_0044;
    DAT_005c = sVar3 + 2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xef | 0x20;
    DAT_004e = 0x40;
    uVar7 = DAT_0044;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    uVar7 = DAT_005c;
    sVar4 = DAT_0b72;
    sVar3 = DAT_005c;
    DAT_005c = sVar4 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0x30;
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x40;
  }
  else {
    bVar1 = DAT_0a19;
    if ((bVar1 & 8) != 0) goto LAB_c70d;
    bVar1 = DAT_0a17;
    DAT_0a17 = bVar1 | 8;
    bVar1 = DAT_0a19;
    DAT_0a19 = bVar1 | 8;
    bVar1 = DAT_0a20;
    DAT_0a20 = (bVar1 + 1) - (0xfe < bVar1);
    sVar3 = DAT_0a22;
    if (sVar3 == 0) goto LAB_c5c8;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x40) == 0) {
      sVar4 = DAT_005c;
      sVar3 = DAT_0044;
      uVar2 = sVar4 - sVar3;
      if ((-1 < (short)uVar2) && (7 < uVar2)) {
        sVar3 = DAT_0a22;
        if ((short)(uVar2 - sVar3) < 0) {
          sVar4 = DAT_005c;
          sVar3 = DAT_0044;
          uVar2 = DAT_0a22;
          if ((ushort)((sVar4 - sVar3) + DAT_4f18) < uVar2) {
            bVar1 = DAT_004c;
            DAT_004c = bVar1 | 0x40;
            sVar3 = DAT_0a22;
            sVar4 = DAT_0af0;
            DAT_0a2a = sVar3 + sVar4;
            bVar1 = DAT_0cf2;
            if ((~bVar1 & 1) == 0) {
              bVar1 = DAT_0cf3;
              bVar1 = (bVar1 + 1) - (0xfe < bVar1);
              DAT_0cf3 = bVar1;
              bVar5 = DAT_0da4;
              if (bVar5 <= bVar1) {
                bVar1 = DAT_0cf2;
                DAT_0cf2 = bVar1 & 0xfe;
                cVar6 = DAT_0da5;
                if (cVar6 != '\0') {
                  DAT_0cf4 = 0;
                  bVar1 = DAT_0cf2;
                  DAT_0cf2 = bVar1 | 4;
                }
              }
              uVar7 = DAT_0cf6;
              DAT_092a = uVar7;
            }
            else {
              bVar1 = DAT_0cf2;
              if ((bVar1 & 4) != 0) {
                bVar1 = DAT_0cf4;
                bVar1 = (bVar1 + 1) - (0xfe < bVar1);
                DAT_0cf4 = bVar1;
                bVar5 = DAT_0da5;
                if (bVar5 <= bVar1) {
                  bVar1 = DAT_0cf2;
                  DAT_0cf2 = bVar1 & 0xfb;
                }
              }
              uVar7 = DAT_092a;
            }
            DAT_0b72 = uVar7;
            bVar1 = DAT_0a18;
            DAT_0a18 = bVar1 | 0x80;
            goto LAB_c70d;
          }
          bVar1 = DAT_0cf2;
          if ((~bVar1 & 1) == 0) {
            bVar1 = DAT_0cf3;
            bVar1 = (bVar1 + 1) - (0xfe < bVar1);
            DAT_0cf3 = bVar1;
            bVar5 = DAT_0da4;
            if (bVar5 <= bVar1) {
              bVar1 = DAT_0cf2;
              DAT_0cf2 = bVar1 & 0xfe;
              cVar6 = DAT_0da5;
              if (cVar6 != '\0') {
                DAT_0cf4 = 0;
                bVar1 = DAT_0cf2;
                DAT_0cf2 = bVar1 | 4;
              }
            }
            uVar7 = DAT_0cf6;
            DAT_092a = uVar7;
          }
          else {
            bVar1 = DAT_0cf2;
            if ((bVar1 & 4) != 0) {
              bVar1 = DAT_0cf4;
              bVar1 = (bVar1 + 1) - (0xfe < bVar1);
              DAT_0cf4 = bVar1;
              bVar5 = DAT_0da5;
              if (bVar5 <= bVar1) {
                bVar1 = DAT_0cf2;
                DAT_0cf2 = bVar1 & 0xfb;
              }
            }
            uVar7 = DAT_092a;
          }
          DAT_0b72 = uVar7;
        }
        goto LAB_c5c8;
      }
    }
    sVar4 = DAT_0af0;
    sVar3 = DAT_0a22;
    DAT_005c = sVar4 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xef | 0x20;
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x40;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 | 8;
    bVar1 = DAT_0a17;
    DAT_0a17 = bVar1 | 8;
  }
  bVar1 = DAT_0a16;
  DAT_0a16 = bVar1 | 0x80;
LAB_c70d:
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 & 0xef;
  return;
}


/* Entry c712 */

void FUN_c712(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 | 0x40;
  bVar1 = DAT_0a16;
  if ((~bVar1 & 0x20) == 0) {
    DAT_004e = 0x80;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x80) != 0) {
      sVar3 = DAT_0044;
      sVar4 = DAT_005e;
      if (199 < (ushort)(sVar3 - sVar4)) {
        bVar1 = DAT_0000;
        if ((bVar1 & 2) == 0) {
          DAT_0b58 = 0;
          bVar1 = DAT_0b57;
          DAT_0b57 = (bVar1 + 1) - (0xfe < bVar1);
        }
        else {
          DAT_0b57 = 0;
          bVar1 = DAT_0b58;
          DAT_0b58 = (bVar1 + 1) - (0xfe < bVar1);
        }
      }
    }
  }
  bVar1 = DAT_0a17;
  if (((~bVar1 & 0x20) == 0) || (bVar1 = DAT_088b, (bVar1 & 0x80) == 0)) {
LAB_c77f:
    sVar3 = DAT_0044;
    DAT_005e = sVar3 + 2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0x7f;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xbf | 0x80;
    DAT_004e = 0x80;
    uVar7 = DAT_0044;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    uVar7 = DAT_005e;
    sVar4 = DAT_0b74;
    sVar3 = DAT_005e;
    DAT_005e = sVar4 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0xc0;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
  }
  else {
    bVar1 = DAT_0a19;
    if ((bVar1 & 2) != 0) goto LAB_c8c4;
    bVar1 = DAT_0a17;
    DAT_0a17 = bVar1 | 2;
    bVar1 = DAT_0a19;
    DAT_0a19 = bVar1 | 2;
    bVar1 = DAT_0a21;
    DAT_0a21 = (bVar1 + 1) - (0xfe < bVar1);
    sVar3 = DAT_0a24;
    if (sVar3 == 0) goto LAB_c77f;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x80) == 0) {
      sVar4 = DAT_005e;
      sVar3 = DAT_0044;
      uVar2 = sVar4 - sVar3;
      if ((-1 < (short)uVar2) && (7 < uVar2)) {
        sVar3 = DAT_0a24;
        if ((short)(uVar2 - sVar3) < 0) {
          sVar4 = DAT_005e;
          sVar3 = DAT_0044;
          uVar2 = DAT_0a24;
          if ((ushort)((sVar4 - sVar3) + DAT_4f18) < uVar2) {
            bVar1 = DAT_004c;
            DAT_004c = bVar1 | 0x80;
            sVar3 = DAT_0a24;
            sVar4 = DAT_0af0;
            DAT_0a2c = sVar3 + sVar4;
            bVar1 = DAT_0cf2;
            if ((~bVar1 & 1) == 0) {
              bVar1 = DAT_0cf3;
              bVar1 = (bVar1 + 1) - (0xfe < bVar1);
              DAT_0cf3 = bVar1;
              bVar5 = DAT_0da4;
              if (bVar5 <= bVar1) {
                bVar1 = DAT_0cf2;
                DAT_0cf2 = bVar1 & 0xfe;
                cVar6 = DAT_0da5;
                if (cVar6 != '\0') {
                  DAT_0cf4 = 0;
                  bVar1 = DAT_0cf2;
                  DAT_0cf2 = bVar1 | 4;
                }
              }
              uVar7 = DAT_0cfc;
              DAT_092a = uVar7;
            }
            else {
              bVar1 = DAT_0cf2;
              if ((bVar1 & 4) != 0) {
                bVar1 = DAT_0cf4;
                bVar1 = (bVar1 + 1) - (0xfe < bVar1);
                DAT_0cf4 = bVar1;
                bVar5 = DAT_0da5;
                if (bVar5 <= bVar1) {
                  bVar1 = DAT_0cf2;
                  DAT_0cf2 = bVar1 & 0xfb;
                }
              }
              uVar7 = DAT_092c;
            }
            DAT_0b74 = uVar7;
            bVar1 = DAT_0a18;
            DAT_0a18 = bVar1 | 0x20;
            goto LAB_c8c4;
          }
          bVar1 = DAT_0cf2;
          if ((~bVar1 & 1) == 0) {
            bVar1 = DAT_0cf3;
            bVar1 = (bVar1 + 1) - (0xfe < bVar1);
            DAT_0cf3 = bVar1;
            bVar5 = DAT_0da4;
            if (bVar5 <= bVar1) {
              bVar1 = DAT_0cf2;
              DAT_0cf2 = bVar1 & 0xfe;
              cVar6 = DAT_0da5;
              if (cVar6 != '\0') {
                DAT_0cf4 = 0;
                bVar1 = DAT_0cf2;
                DAT_0cf2 = bVar1 | 4;
              }
            }
            uVar7 = DAT_0cfc;
            DAT_092a = uVar7;
          }
          else {
            bVar1 = DAT_0cf2;
            if ((bVar1 & 4) != 0) {
              bVar1 = DAT_0cf4;
              bVar1 = (bVar1 + 1) - (0xfe < bVar1);
              DAT_0cf4 = bVar1;
              bVar5 = DAT_0da5;
              if (bVar5 <= bVar1) {
                bVar1 = DAT_0cf2;
                DAT_0cf2 = bVar1 & 0xfb;
              }
            }
            uVar7 = DAT_092c;
          }
          DAT_0b74 = uVar7;
        }
        goto LAB_c77f;
      }
    }
    sVar4 = DAT_0af0;
    sVar3 = DAT_0a24;
    DAT_005e = sVar4 + sVar3;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xbf | 0x80;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 | 2;
    bVar1 = DAT_0a17;
    DAT_0a17 = bVar1 | 2;
  }
  bVar1 = DAT_0a16;
  DAT_0a16 = bVar1 | 0x20;
LAB_c8c4:
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 & 0xbf;
  return;
}


/* Entry c8c9 */

void FUN_c8c9(void)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar5;
  
  DAT_004e = 0x40;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x40) == 0) {
    sVar3 = DAT_005c;
    sVar5 = DAT_0044;
    if ((sVar3 - sVar5 < 0) || (sVar5 = (sVar3 - sVar5) - DAT_4f18, sVar5 < 0)) {
      sVar5 = 0;
    }
    DAT_0e02 = sVar5;
    sVar3 = DAT_0926;
    sVar1 = DAT_0b76;
    DAT_0b72 = (sVar5 + sVar3) - sVar1;
  }
  else {
    bVar2 = DAT_0a18;
    if ((bVar2 & 8) == 0) {
      uVar4 = DAT_0926;
      DAT_0b72 = uVar4;
    }
    else {
      sVar3 = DAT_005c;
      sVar5 = DAT_0044;
      if (((-1 < sVar3 - sVar5) && (sVar1 = DAT_0926, sVar1 = (sVar3 - sVar5) - sVar1, -1 < sVar1))
         && (-1 < sVar1 - DAT_4f18)) {
        uVar4 = DAT_005c;
        DAT_0a2a = uVar4;
        uVar4 = DAT_0926;
        DAT_0b72 = uVar4;
        FUN_c55b();
        bVar2 = DAT_004c;
        DAT_004c = bVar2 | 0x40;
        DAT_0b76 = 0;
        bVar2 = DAT_0a18;
        DAT_0a18 = bVar2 | 0x80;
        return;
      }
      sVar5 = DAT_0926;
      sVar3 = DAT_0b72;
      DAT_0b72 = sVar5 + sVar3;
    }
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
  undefined2 uVar4;
  short sVar5;
  
  DAT_004e = 0x80;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x80) == 0) {
    sVar3 = DAT_005e;
    sVar5 = DAT_0044;
    if ((sVar3 - sVar5 < 0) || (sVar5 = (sVar3 - sVar5) - DAT_4f18, sVar5 < 0)) {
      sVar5 = 0;
    }
    DAT_0e02 = sVar5;
    sVar3 = DAT_0928;
    sVar1 = DAT_0b78;
    DAT_0b74 = (sVar5 + sVar3) - sVar1;
  }
  else {
    bVar2 = DAT_0a18;
    if ((bVar2 & 2) == 0) {
      uVar4 = DAT_0928;
      DAT_0b74 = uVar4;
    }
    else {
      sVar3 = DAT_005e;
      sVar5 = DAT_0044;
      if (((-1 < sVar3 - sVar5) && (sVar1 = DAT_0928, sVar1 = (sVar3 - sVar5) - sVar1, -1 < sVar1))
         && (-1 < sVar1 - DAT_4f18)) {
        uVar4 = DAT_005e;
        DAT_0a2c = uVar4;
        uVar4 = DAT_0928;
        DAT_0b74 = uVar4;
        FUN_c712();
        bVar2 = DAT_004c;
        DAT_004c = bVar2 | 0x80;
        DAT_0b78 = 0;
        bVar2 = DAT_0a18;
        DAT_0a18 = bVar2 | 0x20;
        return;
      }
      sVar5 = DAT_0928;
      sVar3 = DAT_0b74;
      DAT_0b74 = sVar5 + sVar3;
    }
  }
  FUN_c712();
  DAT_0b78 = 0;
  return;
}


/* Entry c9a9 */

ushort axis_index_u8_ascending(uchar count)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  byte *pbVar8;
  short sVar9;
  ushort uVar10;
  
  DAT_0b9f = count + 0xff;
  DAT_0ba0 = 0;
  pbVar8 = (byte *)DAT_0ba4;
  bVar1 = DAT_0ba2._0_1_;
  if (*pbVar8 < bVar1) {
    bVar1 = DAT_0b9f;
    sVar9 = DAT_0ba4;
    bVar7 = DAT_0ba2._0_1_;
    if (bVar7 < *(byte *)((ushort)bVar1 + sVar9)) {
      while( true ) {
        cVar3 = DAT_0b9f;
        cVar4 = DAT_0ba0;
        if ((byte)(cVar3 - cVar4) == 1) break;
        cVar5 = DAT_0ba0;
        bVar1 = ((byte)(cVar3 - cVar4) >> 1) + cVar5;
        DAT_0ba1 = bVar1;
        sVar9 = DAT_0ba4;
        bVar7 = DAT_0ba2._0_1_;
        if (bVar7 < *(byte *)((ushort)bVar1 + sVar9)) {
          uVar6 = DAT_0ba1;
          DAT_0b9f = uVar6;
        }
        else {
          uVar6 = DAT_0ba1;
          DAT_0ba0 = uVar6;
        }
      }
      uVar6 = DAT_0ba0;
      DAT_0ba6._0_1_ = uVar6;
      bVar1 = DAT_0ba6._0_1_;
      sVar9 = DAT_0ba4;
      pcVar2 = (char *)((ushort)bVar1 + sVar9);
      DAT_0dde._0_1_ = *pcVar2;
      cVar3 = DAT_0dde._0_1_;
      DAT_0dde._0_1_ = pcVar2[1] - cVar3;
      cVar3 = DAT_0ba2._0_1_;
      uVar10 = DAT_0dde;
      uVar10 = (ushort)(((uint)(byte)(cVar3 - *pcVar2) << 0x18) / (uint)uVar10);
      if (0xff7f < uVar10) {
        cVar3 = DAT_0ba6._0_1_;
        DAT_0ba6._0_1_ = cVar3 + '\x01';
      }
      DAT_0ba6._1_1_ = (char)(uVar10 + 0x80 >> 8);
      uVar10 = DAT_0ba6;
    }
    else {
      bVar1 = DAT_0b9f;
      uVar10 = (ushort)bVar1 << 8;
    }
  }
  else {
    uVar10 = 0;
  }
  DAT_0ba6 = uVar10;
  return uVar10;
}


/* Entry ca49 */

ushort axis_index_u16_ascending(uchar count)

{
  char cVar1;
  short *psVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  short sVar7;
  ushort *puVar8;
  ushort uVar9;
  
  DAT_0b9f = count + 0xff;
  DAT_0ba0 = 0;
  puVar8 = (ushort *)DAT_0ba4;
  uVar9 = DAT_0ba2;
  if (*puVar8 < uVar9) {
    cVar3 = DAT_0b9f;
    sVar7 = DAT_0ba4;
    uVar9 = DAT_0ba2;
    if (uVar9 < *(ushort *)((ushort)(byte)(cVar3 << 1) + sVar7)) {
      while( true ) {
        cVar3 = DAT_0b9f;
        cVar5 = DAT_0ba0;
        if ((byte)(cVar3 - cVar5) == 1) break;
        cVar1 = DAT_0ba0;
        cVar1 = ((byte)(cVar3 - cVar5) >> 1) + cVar1;
        DAT_0ba1 = cVar1;
        sVar7 = DAT_0ba4;
        uVar9 = DAT_0ba2;
        if (uVar9 < *(ushort *)((ushort)(byte)(cVar1 * '\x02') + sVar7)) {
          uVar6 = DAT_0ba1;
          DAT_0b9f = uVar6;
        }
        else {
          uVar6 = DAT_0ba1;
          DAT_0ba0 = uVar6;
        }
      }
      uVar6 = DAT_0ba0;
      DAT_0ba6._0_1_ = uVar6;
      cVar3 = DAT_0ba6._0_1_;
      sVar7 = DAT_0ba4;
      psVar2 = (short *)((ushort)(byte)(cVar3 << 1) + sVar7);
      DAT_0dde = *psVar2;
      sVar7 = DAT_0dde;
      DAT_0dde = psVar2[1] - sVar7;
      sVar7 = DAT_0ba2;
      uVar9 = DAT_0dde;
      uVar9 = (ushort)(((uint)(ushort)(sVar7 - *psVar2) << 0x10) / (uint)uVar9);
      if (0xff7f < uVar9) {
        cVar3 = DAT_0ba6._0_1_;
        DAT_0ba6._0_1_ = cVar3 + '\x01';
      }
      DAT_0ba6._1_1_ = (char)(uVar9 + 0x80 >> 8);
      uVar9 = DAT_0ba6;
    }
    else {
      bVar4 = DAT_0b9f;
      uVar9 = (ushort)bVar4 << 8;
    }
  }
  else {
    uVar9 = 0;
  }
  DAT_0ba6 = uVar9;
  return uVar9;
}


/* Entry caea */

void candidate_unreferenced_caea(undefined2 param_1)

{
  char cVar1;
  short *psVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  ushort *puVar8;
  short sVar9;
  
  DAT_0b9f = (char)((ushort)param_1 >> 8) + -1;
  DAT_0ba0 = 0;
  puVar8 = (ushort *)DAT_0ba4;
  uVar3 = DAT_0ba2;
  if (uVar3 < *puVar8) {
    cVar4 = DAT_0b9f;
    sVar9 = DAT_0ba4;
    uVar3 = DAT_0ba2;
    if (*(ushort *)((ushort)(byte)(cVar4 << 1) + sVar9) < uVar3) {
      while( true ) {
        cVar4 = DAT_0b9f;
        cVar6 = DAT_0ba0;
        if ((byte)(cVar4 - cVar6) == 1) break;
        cVar1 = DAT_0ba0;
        cVar1 = ((byte)(cVar4 - cVar6) >> 1) + cVar1;
        DAT_0ba1 = cVar1;
        sVar9 = DAT_0ba4;
        uVar3 = DAT_0ba2;
        if (uVar3 < *(ushort *)((ushort)(byte)(cVar1 * '\x02') + sVar9)) {
          uVar7 = DAT_0ba1;
          DAT_0ba0 = uVar7;
        }
        else {
          uVar7 = DAT_0ba1;
          DAT_0b9f = uVar7;
        }
      }
      uVar7 = DAT_0ba0;
      DAT_0ba6._0_1_ = uVar7;
      cVar4 = DAT_0ba6._0_1_;
      sVar9 = DAT_0ba4;
      psVar2 = (short *)((ushort)(byte)(cVar4 << 1) + sVar9);
      DAT_0dde = psVar2[1];
      sVar9 = DAT_0dde;
      DAT_0dde = *psVar2 - sVar9;
      sVar9 = DAT_0ba2;
      uVar3 = DAT_0dde;
      uVar3 = (ushort)(((uint)(ushort)(*psVar2 - sVar9) << 0x10) / (uint)uVar3);
      if (0xff7f < uVar3) {
        cVar4 = DAT_0ba6._0_1_;
        DAT_0ba6._0_1_ = cVar4 + '\x01';
      }
      DAT_0ba6._1_1_ = (char)(uVar3 + 0x80 >> 8);
      sVar9 = DAT_0ba6;
    }
    else {
      bVar5 = DAT_0b9f;
      sVar9 = (ushort)bVar5 << 8;
    }
  }
  else {
    sVar9 = 0;
  }
  DAT_0ba6 = sVar9;
  return;
}


/* Entry cb8b */

void candidate_unreferenced_cb8b(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  
  bVar1 = DAT_0001;
  if ((~bVar1 & 0x80) == 0) {
    cVar2 = DAT_0b64;
    cVar4 = DAT_0b65;
    if (cVar2 == cVar4) {
      bVar1 = DAT_0001;
      DAT_0001 = bVar1 & 0x7f;
      bVar1 = DAT_0b64;
      if ((bVar1 & 0xf0) != 0) {
        cVar2 = DAT_0b64;
        DAT_0b64 = cVar2 + -0x10;
        DAT_0b66 = param_1[2];
        return;
      }
      cVar2 = DAT_0b64;
      DAT_0b64 = cVar2 + -1;
      DAT_0b66 = param_1[4];
      return;
    }
    DAT_0b66 = *param_1;
  }
  else {
    bVar1 = DAT_0001;
    DAT_0001 = bVar1 | 0x80;
    bVar1 = DAT_0b65;
    if ((bVar1 & 0xf0) == 0) {
      bVar1 = DAT_0b64;
      if ((bVar1 & 0xf) == 0) {
        DAT_0b65 = 0;
        return;
      }
      DAT_0b66 = param_1[3];
    }
    else {
      DAT_0b66 = param_1[1];
    }
  }
  uVar3 = DAT_0b64;
  DAT_0b65 = uVar3;
  return;
}


/* Entry cbef */

void FUN_cbef(void)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = DAT_0d87;
  if (cVar2 == '\t') {
    bVar1 = DAT_0896._0_1_;
    bVar1 = ~bVar1;
  }
  else {
    bVar1 = DAT_0896._0_1_;
  }
  if ((bVar1 & 2) == 0) {
    DAT_0b05 = 0;
    bVar1 = DAT_0b06;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b06 = bVar1;
    if (DAT_18d5 <= bVar1) {
      bVar1 = DAT_0880;
      DAT_0880 = bVar1 & 0xfe;
    }
  }
  else {
    DAT_0b06 = 0;
    bVar1 = DAT_0b05;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b05 = bVar1;
    if (DAT_18d4 <= bVar1) {
      bVar1 = DAT_0880;
      DAT_0880 = bVar1 | 1;
      return;
    }
  }
  return;
}


/* Entry cc30 */

void FUN_cc30(void)

{
  byte bVar1;
  
  bVar1 = DAT_0896._0_1_;
  if ((~bVar1 & 1) == 0) {
    bVar1 = DAT_0b07;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b07 = bVar1;
    DAT_0b08 = 0;
    if (DAT_4bfd <= bVar1) {
      bVar1 = DAT_088c;
      DAT_088c = bVar1 | 0x80;
    }
  }
  else {
    bVar1 = DAT_0b08;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b08 = bVar1;
    DAT_0b07 = 0;
    if (DAT_4bfd <= bVar1) {
      bVar1 = DAT_088c;
      DAT_088c = bVar1 & 0x7f;
      return;
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
  undefined1 uVar5;
  
  bVar1 = DAT_0020;
  if (((((bVar1 & 1) == 0) || (param_1 = DAT_0024, param_1 != 0xa55a)) &&
      (bVar1 = DAT_08ae, (bVar1 & 1) != 0)) && (bVar1 = DAT_08ae, (~bVar1 & 0x20) == 0)) {
    bVar1 = DAT_08ae;
    if ((~bVar1 & 4) == 0) {
      bVar1 = DAT_08a4;
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 8) == 0) {
            if ((bVar1 & 0x10) == 0) {
              if ((bVar1 & 0x20) == 0) {
                uVar2 = DAT_00d4;
                uVar4 = DAT_00d6._1_1_;
                uVar4 = DAT_08a6;
                DAT_00d6._1_1_ = uVar4;
                param_1 = CONCAT11(0x60,uVar4);
                DAT_08a4 = 0x60;
              }
              else {
                uVar3 = DAT_00d4;
                DAT_0e1c = uVar3;
                param_1 = uVar3 & 0x80ff;
                if ((uVar3 & 0x8000) != 0) {
                  bVar1 = DAT_0e1c._0_1_;
                  param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
                  if ((bVar1 & 0x40) != 0) {
                    uVar2 = DAT_00d4;
                    uVar4 = DAT_00d6._1_1_;
                    uVar5 = DAT_08a7;
                    param_1 = CONCAT11(uVar4,uVar5);
                    DAT_00d6._1_1_ = uVar5;
                    bVar1 = DAT_08a4;
                    DAT_08a4 = bVar1 | 0x10;
                  }
                }
              }
            }
            else {
              uVar3 = DAT_00d4;
              DAT_0e1c = uVar3;
              param_1 = uVar3 & 0x80ff;
              if ((uVar3 & 0x8000) != 0) {
                bVar1 = DAT_0e1c._0_1_;
                param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
                if ((bVar1 & 0x40) != 0) {
                  uVar2 = DAT_00d4;
                  uVar4 = DAT_00d6._1_1_;
                  uVar5 = DAT_08a8;
                  param_1 = CONCAT11(uVar4,uVar5);
                  DAT_00d6._1_1_ = uVar5;
                  bVar1 = DAT_08a4;
                  DAT_08a4 = bVar1 | 8;
                }
              }
            }
          }
          else {
            uVar3 = DAT_00d4;
            DAT_0e1c = uVar3;
            param_1 = uVar3 & 0x80ff;
            if ((uVar3 & 0x8000) != 0) {
              bVar1 = DAT_0e1c._0_1_;
              param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
              if ((bVar1 & 0x40) != 0) {
                uVar2 = DAT_00d4;
                uVar4 = DAT_00d6._1_1_;
                uVar5 = DAT_08a9;
                param_1 = CONCAT11(uVar4,uVar5);
                DAT_00d6._1_1_ = uVar5;
                bVar1 = DAT_08a4;
                DAT_08a4 = bVar1 | 4;
              }
            }
          }
        }
        else {
          uVar3 = DAT_00d4;
          DAT_0e1c = uVar3;
          param_1 = uVar3 & 0x80ff;
          if ((uVar3 & 0x8000) != 0) {
            bVar1 = DAT_0e1c._0_1_;
            param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
            if ((bVar1 & 0x40) != 0) {
              uVar2 = DAT_00d4;
              uVar4 = DAT_00d6._1_1_;
              uVar5 = DAT_08aa;
              param_1 = CONCAT11(uVar4,uVar5);
              DAT_00d6._1_1_ = uVar5;
              bVar1 = DAT_08a4;
              DAT_08a4 = bVar1 | 2;
            }
          }
        }
      }
      else {
        uVar3 = DAT_00d4;
        DAT_0e1c = uVar3;
        param_1 = uVar3 & 0x80ff;
        if ((uVar3 & 0x8000) != 0) {
          DAT_08a4 = 0x40;
          bVar1 = DAT_08ae;
          DAT_08ae = bVar1 & 0xdf;
          bVar1 = DAT_08ae;
          DAT_08ae = bVar1 | 0x40;
          bVar1 = DAT_08ae;
          DAT_08ae = bVar1 & 0xfe;
          bVar1 = DAT_08ae;
          DAT_08ae = bVar1 & 0xfb;
          uVar2 = DAT_00d4;
          uVar4 = DAT_00d6._1_1_;
          param_1 = CONCAT11(0x26,uVar4);
          DAT_00d2._1_1_ = 0x26;
        }
      }
    }
    else {
      bVar1 = DAT_08ae;
      DAT_08ae = bVar1 | 4;
    }
  }
  return param_1;
}


/* Entry cdc0 */

ushort FUN_cdc0(ushort param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  undefined1 uVar8;
  
  bVar1 = DAT_0020;
  if (((bVar1 & 1) == 0) || (param_1 = DAT_0024, param_1 != 0xa55a)) {
    bVar1 = DAT_08ae;
    if ((~bVar1 & 0x40) == 0) {
      uVar2 = DAT_0ae4;
      DAT_0ae6 = uVar2;
      sVar7 = DAT_0ab0;
      DAT_0ae4 = sVar7;
      sVar4 = DAT_0ae6;
      sVar7 = sVar7 - sVar4;
      bVar1 = DAT_08a2;
      if ((~bVar1 & 1) != 0) {
        sVar7 = 0;
      }
      if ((char)((ushort)sVar7 >> 8) != '\0') {
        sVar7 = 0xff;
      }
      DAT_0ae3 = (char)sVar7;
      bVar1 = DAT_08a2;
      DAT_08a2 = bVar1 | 1;
      uVar2 = DAT_00d4;
      DAT_0e1c = uVar2;
      uVar2 = DAT_00d2;
      DAT_0e1a = uVar2;
      uVar3 = DAT_00d6;
      bVar1 = DAT_0e1c._0_1_;
      param_1 = CONCAT11(bVar1,(char)uVar2) & 0x20ff;
      if ((bVar1 & 0x20) != 0) {
        bVar1 = DAT_0e1c._0_1_;
        param_1 = CONCAT11(bVar1,(char)param_1) & 0xaff;
        if ((bVar1 & 10) == 0) {
          DAT_0e1e = (char)uVar3;
          DAT_0d10 = (char)uVar3;
          cVar5 = DAT_0dd5;
          if ((cVar5 == -0x80) || (bVar1 = DAT_0d06, (~bVar1 & 0x80) == 0)) {
            uVar8 = FUN_ce51(param_1);
          }
          else {
            uVar8 = FUN_d36c();
          }
          DAT_00d2._1_1_ = 8;
          return CONCAT11(8,uVar8);
        }
      }
    }
    bVar1 = DAT_08ae;
    DAT_08ae = bVar1 | 0x40;
    uVar8 = DAT_00d4._0_1_;
    uVar8 = DAT_00d6._1_1_;
    uVar6 = CONCAT11(0x26,(char)param_1);
    DAT_00d2._1_1_ = 0x26;
  }
  else {
    uVar2 = DAT_00d4;
    bVar1 = DAT_00d6._1_1_;
    uVar6 = (ushort)bVar1;
    DAT_00d2._1_1_ = 0;
    DAT_08a0 = 0x80;
    DAT_08ae = 0x40;
  }
  return uVar6;
}


/* Entry ce51 */

void FUN_ce51(char param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  
  bVar5 = DAT_08a0;
  if ((bVar5 & 2) != 0) {
    if ((((param_1 == '\0') || (param_1 == '\x01')) || (param_1 == '\x02')) || (param_1 == -2)) {
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0xfe;
      bVar5 = DAT_0020;
      DAT_0020 = bVar5 | 4;
      DAT_00cb = 0;
      DAT_0e1f = param_1;
    }
    else {
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 | 1;
    }
  }
  bVar5 = DAT_08a0;
  if ((bVar5 & 0x80) != 0) {
    bVar5 = DAT_08a3;
    if ((~bVar5 & 0x80) == 0) {
      bVar5 = DAT_08a0;
      DAT_08a0 = bVar5 & 0x7f;
      bVar5 = DAT_08a0;
      DAT_08a0 = bVar5 | 0x40;
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0x7f;
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0xbf;
    }
    else {
      bVar5 = DAT_08a1;
      if ((~bVar5 & 0x80) == 0) {
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 & 0xfe;
        if (param_1 != '\x01') {
          if (param_1 == -0x33) {
            bVar5 = DAT_08a2;
            DAT_08a2 = bVar5 | 0x80;
            goto LAB_d355;
          }
          if (((param_1 != -0x34) && (param_1 != -0x35)) && (param_1 != -0x36)) {
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 | 1;
            DAT_0b34 = 0;
          }
        }
      }
      else if (param_1 == -2) {
        bVar5 = DAT_0020;
        DAT_0020 = bVar5 | 4;
        DAT_00cb = 0;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 0x80;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 & 0xfe;
        goto LAB_d355;
      }
      bVar5 = DAT_08a0;
      DAT_08a0 = bVar5 & 0x7f;
      bVar5 = DAT_08a0;
      DAT_08a0 = bVar5 | 2;
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0x7f;
    }
    goto LAB_d355;
  }
  bVar5 = DAT_08a0;
  if ((~bVar5 & 0x40) == 0) {
    bVar5 = DAT_08a2;
    if ((~bVar5 & 0x40) == 0) {
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0xfe;
      if ((param_1 == -0x35) || (param_1 == -0x34)) {
        DAT_0b38 = 0;
      }
      else if (param_1 == -0x36) {
        DAT_0b38 = 0;
        cVar1 = DAT_0e1f;
        if (cVar1 == -0x35) {
          bVar5 = DAT_08a1;
          if ((bVar5 & 0x40) == 0) {
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 | 0x40;
          }
          else {
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 & 0xbf;
          }
        }
      }
      else if (param_1 == -0x33) {
        bVar5 = DAT_0b38;
        bVar5 = (bVar5 + 1) - (0xfe < bVar5);
        DAT_0b38 = bVar5;
        if (0x7f < bVar5) {
          bVar5 = DAT_08a1;
          if ((bVar5 & 0x40) == 0) {
            bVar5 = DAT_0000;
            DAT_0000 = bVar5 & 0xfb;
            DAT_0bdd = 1;
            bVar5 = DAT_08a0;
            DAT_08a0 = bVar5 & 0xbf;
            bVar5 = DAT_08a0;
            DAT_08a0 = bVar5 | 4;
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 | 0x20;
          }
          else {
            bVar5 = DAT_08a0;
            DAT_08a0 = bVar5 & 0xbf;
            bVar5 = DAT_08a0;
            DAT_08a0 = bVar5 | 0x20;
            bVar5 = DAT_08a0;
            DAT_08a0 = bVar5 | 0x10;
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 | 0x20;
            bVar5 = DAT_08a1;
            DAT_08a1 = bVar5 | 0x10;
          }
          DAT_0b38 = 0;
        }
      }
      else {
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 1;
      }
    }
    else if (param_1 == -0x36) {
      bVar5 = DAT_08a2;
      DAT_08a2 = bVar5 | 0x40;
    }
    goto LAB_d355;
  }
  bVar5 = DAT_08a0;
  if ((bVar5 & 4) != 0) {
    uVar3 = DAT_0bdd;
    DAT_0bde = uVar3;
    bVar5 = DAT_08a1;
    DAT_08a1 = bVar5 & 0xfe;
    if (param_1 == -0x36) {
      DAT_0b35 = 0;
      DAT_0b36 = 0;
      DAT_0b37 = 0;
      DAT_0b38 = 0;
      bVar5 = DAT_08a2;
      DAT_08a2 = bVar5 | 8;
    }
    else if (param_1 == -0x35) {
      DAT_0b35 = 0;
      DAT_0b37 = 0;
      DAT_0b38 = 0;
      cVar1 = DAT_0e1f;
      if (cVar1 == -0x36) {
        cVar1 = DAT_0bdc;
        bVar5 = cVar1 + 1;
        bVar4 = DAT_0d3c;
        if (bVar4 <= bVar5) {
          bVar5 = 0;
        }
        cVar1 = DAT_0d87;
        if (cVar1 == '\t') {
          if ((bVar5 == 0xb) || (bVar5 == 0x10)) {
LAB_d23a:
            bVar5 = bVar5 + 1;
          }
        }
        else if ((bVar5 == 0xc) || (bVar5 == 8)) goto LAB_d23a;
        DAT_0bdc = bVar5;
        bVar5 = DAT_0bdc;
        DAT_0bdd = (&DAT_0d3d)[bVar5];
        bVar5 = DAT_0b36;
        DAT_0b36 = (bVar5 + 1) - (0xfe < bVar5);
      }
      else {
        bVar5 = DAT_08a2;
        if ((~bVar5 & 8) != 0) goto LAB_d34e;
        bVar5 = DAT_0b36;
        bVar5 = (bVar5 + 1) - (0xfe < bVar5);
        if (0x3f < bVar5) {
          cVar1 = DAT_0bdc;
          bVar5 = cVar1 + 1;
          bVar4 = DAT_0d3c;
          if (bVar4 <= bVar5) {
            bVar5 = 0;
          }
          cVar1 = DAT_0d87;
          if (cVar1 == '\t') {
            if ((bVar5 == 0xb) || (bVar5 == 0x10)) {
LAB_d293:
              bVar5 = bVar5 + 1;
            }
          }
          else if ((bVar5 == 0xc) || (bVar5 == 8)) goto LAB_d293;
          DAT_0bdc = bVar5;
          bVar5 = DAT_0bdc;
          DAT_0bdd = (&DAT_0d3d)[bVar5];
          bVar5 = cVar1 - 0x10;
        }
        DAT_0b36 = bVar5;
      }
    }
    else if (param_1 == -0x34) {
      DAT_0b35 = 0;
      DAT_0b36 = 0;
      DAT_0b38 = 0;
      cVar1 = DAT_0e1f;
      if (cVar1 == -0x36) {
        cVar1 = DAT_0bdc;
        if (cVar1 == '\0') {
          cVar1 = DAT_0d3c;
        }
        cVar6 = cVar1 + -1;
        cVar2 = DAT_0d87;
        if (cVar2 == '\t') {
          if ((cVar6 == '\v') || (cVar6 == '\x10')) {
LAB_d2e4:
            cVar6 = cVar1 + -2;
          }
        }
        else if ((cVar6 == '\f') || (cVar6 == '\b')) goto LAB_d2e4;
        DAT_0bdc = cVar6;
        bVar5 = DAT_0bdc;
        DAT_0bdd = (&DAT_0d3d)[bVar5];
        bVar5 = DAT_0b37;
        DAT_0b37 = (bVar5 + 1) - (0xfe < bVar5);
      }
      else {
        bVar5 = DAT_08a2;
        if ((bVar5 & 8) != 0) {
          bVar5 = DAT_0b37;
          bVar5 = (bVar5 + 1) - (0xfe < bVar5);
          if (0x3f < bVar5) {
            cVar1 = DAT_0bdc;
            if (cVar1 == '\0') {
              cVar1 = DAT_0d3c;
            }
            cVar6 = cVar1 + -1;
            cVar2 = DAT_0d87;
            if (cVar2 == '\t') {
              if ((cVar6 == '\v') || (cVar6 == '\x10')) {
LAB_d337:
                cVar6 = cVar1 + -2;
              }
            }
            else if ((cVar6 == '\f') || (cVar6 == '\b')) goto LAB_d337;
            DAT_0bdc = cVar6;
            bVar5 = DAT_0bdc;
            DAT_0bdd = (&DAT_0d3d)[bVar5];
            bVar5 = cVar2 - 0x10;
          }
          DAT_0b37 = bVar5;
        }
      }
    }
    else {
      if (param_1 != -0x33) {
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 1;
        goto LAB_d355;
      }
      DAT_0b35 = 0;
      DAT_0b36 = 0;
      DAT_0b37 = 0;
      DAT_0b38 = 0;
    }
LAB_d34e:
    FUN_d6a3();
    goto LAB_d15f;
  }
  bVar5 = DAT_08a0;
  if ((~bVar5 & 0x10) == 0) {
    bVar5 = DAT_08a2;
    if ((~bVar5 & 0x20) == 0) {
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0xfe;
      if (param_1 == -0x36) {
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        cVar1 = DAT_0e1f;
        if (cVar1 == -0x35) {
          bVar5 = DAT_08a1;
          DAT_08a1 = bVar5 | 8;
        }
        else if (cVar1 == -0x34) {
          bVar5 = DAT_08a1;
          DAT_08a1 = bVar5 | 4;
        }
        else {
          bVar5 = DAT_08a1;
          DAT_08a1 = bVar5 & 0xf7;
          bVar5 = DAT_08a1;
          DAT_08a1 = bVar5 & 0xfb;
        }
      }
      else if (param_1 == -0x35) {
        DAT_0b35 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        bVar4 = DAT_0b36;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 & 0xf7;
        DAT_0b36 = (bVar4 + 1) - (0xfe < bVar4);
      }
      else if (param_1 == -0x34) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b38 = 0;
        bVar4 = DAT_0b37;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 & 0xfb;
        DAT_0b37 = (bVar4 + 1) - (0xfe < bVar4);
      }
      else if (param_1 == -0x33) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        bVar5 = DAT_0b38;
        bVar5 = (bVar5 + 1) - (0xfe < bVar5);
        DAT_0b38 = bVar5;
        if (0x7f < bVar5) {
          bVar5 = DAT_08a0;
          DAT_08a0 = bVar5 & 0xef;
          bVar5 = DAT_08a0;
          DAT_08a0 = bVar5 | 8;
          bVar5 = DAT_08a1;
          DAT_08a1 = bVar5 & 0xdf;
          bVar5 = DAT_08a2;
          DAT_08a2 = bVar5 & 0xef;
          DAT_0b38 = 0;
          DAT_0b39 = 0;
          cVar1 = DAT_0aee;
          if (cVar1 == -0x3f) {
            uVar3 = DAT_09fc;
          }
          else {
            uVar3 = DAT_0a00;
          }
          DAT_0aed = uVar3;
        }
      }
      else {
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 1;
      }
    }
    else if (param_1 == -0x36) {
      bVar5 = DAT_08a2;
      DAT_08a2 = bVar5 | 0x20;
    }
    goto LAB_d355;
  }
  bVar5 = DAT_08a2;
  if ((~bVar5 & 0x10) != 0) {
    if (param_1 == -0x36) {
      bVar5 = DAT_08a2;
      DAT_08a2 = bVar5 | 0x10;
    }
    goto LAB_d355;
  }
  bVar5 = DAT_08a1;
  DAT_08a1 = bVar5 & 0xfe;
  if (param_1 == -0x36) {
    DAT_0b36 = 0;
    DAT_0b37 = 0;
    DAT_0b38 = 0;
    cVar1 = DAT_0e1f;
    if (cVar1 == -0x35) {
      cVar1 = DAT_0aed;
      bVar5 = cVar1 + 1;
      if (0xfd < bVar5) {
        bVar5 = 0xfe;
      }
      DAT_0aed = bVar5;
    }
    else {
      if (cVar1 != -0x34) goto LAB_d15f;
      cVar1 = DAT_0aed;
      DAT_0aed = cVar1 + -1 + (cVar1 == '\0');
    }
    cVar1 = DAT_0aee;
    if (cVar1 == -0x3f) {
      uVar3 = DAT_0aed;
      DAT_09fc = uVar3;
      bVar5 = DAT_088f;
      DAT_088f = bVar5 | 0x80;
    }
    else {
      uVar3 = DAT_0aed;
      DAT_0a00 = uVar3;
      bVar5 = DAT_088f;
      DAT_088f = bVar5 | 0x40;
    }
    bVar5 = DAT_0891;
    DAT_0891 = bVar5 | 0x80;
  }
  else if (param_1 == -0x35) {
    DAT_0b35 = 0;
    DAT_0b37 = 0;
    DAT_0b38 = 0;
    bVar5 = DAT_0b36;
    bVar5 = (bVar5 + 1) - (0xfe < bVar5);
    if (0x1f < bVar5) {
      cVar1 = DAT_0aed;
      bVar4 = cVar1 + 1;
      if (0xfd < bVar4) {
        bVar4 = 0xfe;
      }
      DAT_0aed = bVar4;
      bVar5 = bVar5 - 8;
    }
    DAT_0b36 = bVar5;
  }
  else {
    if (param_1 != -0x34) {
      if (param_1 == -0x33) {
        DAT_0b35 = 0;
        DAT_0b36 = 0;
        DAT_0b37 = 0;
        DAT_0b38 = 0;
        DAT_0b39 = 0;
        bVar5 = DAT_08a0;
        DAT_08a0 = bVar5 | 0x10;
        bVar5 = DAT_08a0;
        DAT_08a0 = bVar5 & 0xf7;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 0x20;
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 0x10;
        bVar5 = DAT_08a2;
        DAT_08a2 = bVar5 & 0xdf;
      }
      else {
        bVar5 = DAT_08a1;
        DAT_08a1 = bVar5 | 1;
      }
      goto LAB_d355;
    }
    DAT_0b35 = 0;
    DAT_0b36 = 0;
    DAT_0b38 = 0;
    bVar5 = DAT_0b37;
    bVar5 = (bVar5 + 1) - (0xfe < bVar5);
    if (0x1f < bVar5) {
      cVar1 = DAT_0aed;
      DAT_0aed = cVar1 + -1 + (cVar1 == '\0');
      bVar5 = bVar5 - 8;
    }
    DAT_0b37 = bVar5;
  }
LAB_d15f:
  bVar5 = DAT_0b39;
  bVar5 = (bVar5 + 1) - (0xfe < bVar5);
  DAT_0b39 = bVar5;
  bVar4 = DAT_08a1;
  if ((~bVar4 & 0x20) == 0) {
    if (bVar5 != 0) {
      bVar5 = DAT_08a1;
      DAT_08a1 = bVar5 & 0xdf;
      DAT_0b39 = 0;
    }
  }
  else if (6 < bVar5) {
    bVar5 = DAT_08a1;
    DAT_08a1 = bVar5 | 0x20;
    DAT_0b39 = 0;
  }
LAB_d355:
  bVar5 = DAT_08ae;
  DAT_08ae = bVar5 | 0x80;
  bVar5 = DAT_08ae;
  DAT_08ae = bVar5 & 0xbf;
  bVar5 = DAT_08ae;
  DAT_08ae = bVar5 | 0x20;
  bVar5 = DAT_08ae;
  DAT_08ae = bVar5 | 2;
  uVar3 = DAT_0e1e;
  DAT_0e1f = uVar3;
  return;
}


/* Entry d36c */

void FUN_d36c(byte param_1)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  
  if (param_1 == 0x3e) {
    bVar6 = DAT_0020;
    DAT_0020 = bVar6 | 4;
    DAT_00cb = 0;
    DAT_0d0f = 0;
    DAT_0d3b = 0;
    DAT_0d0c = 0;
    DAT_0d0e = 0;
    DAT_0d06 = 0x40;
    DAT_0d11 = 1;
    DAT_0d07 = 0;
    DAT_0d13 = 0;
    DAT_0d12 = 0;
    DAT_0d14 = 0;
    bVar6 = DAT_0d08;
    DAT_0d08 = bVar6 & 0x89;
    cVar7 = DAT_0044._1_1_;
    DAT_0d3a = cVar7;
    cVar7 = cVar7 * '\x13' + '\x13';
    DAT_0d17 = cVar7;
    DAT_08a6 = cVar7;
    cVar7 = cVar7 * '\x13' + '\x13';
    DAT_0d18 = cVar7;
    DAT_08a7 = cVar7;
    cVar8 = cVar7 * '\x13' + '\x13';
    DAT_0d19 = cVar8;
    DAT_08a9 = cVar8;
    DAT_08a8 = 0x43;
    cVar8 = DAT_08a6;
    cVar1 = DAT_08a7;
    DAT_08aa = cVar7 * '\x13' + 'V' + cVar8 + cVar1;
    bVar6 = DAT_0d06;
    DAT_0d06 = bVar6 | 0x20;
    goto LAB_d696;
  }
  if (param_1 == 0x3d) {
    DAT_0d0f = 0;
    bVar6 = DAT_0d06;
    if ((~bVar6 & 0x40) == 0) {
      bVar6 = DAT_0d07;
      DAT_0d07 = bVar6 & 0xf7;
      DAT_0d0e = 0;
      cVar7 = DAT_0d11;
      if (cVar7 == '\x01') {
        DAT_0d11 = 2;
        DAT_0d0c = 0;
        bVar6 = DAT_0d08;
        if ((bVar6 & 0x80) == 0) {
          RAM08a6 = 0x4a4a;
          RAM08a8 = 0x4a4a;
          DAT_08aa = 0x28;
          bVar6 = DAT_0d06;
          DAT_0d06 = bVar6 | 0x10;
        }
        else {
          uVar3 = DAT_0d37;
          RAM08a6 = uVar3;
          cVar7 = DAT_0d39;
          DAT_08a9 = cVar7;
          DAT_08a8 = 0x4b;
          DAT_08aa = (char)((ushort)uVar3 >> 8) + (char)uVar3 + cVar7 + 'K';
          bVar6 = DAT_0d06;
          DAT_0d06 = bVar6 | 0x10;
        }
        goto LAB_d696;
      }
LAB_d430:
      bVar6 = DAT_0d07;
      DAT_0d07 = bVar6 & 0xf7;
      DAT_0d0e = 0;
      bVar6 = DAT_0d0c;
      bVar6 = (bVar6 + 1) - (0xfe < bVar6);
      DAT_0d0c = bVar6;
      if (DAT_4e80 <= bVar6) {
        bVar6 = DAT_0d08;
        DAT_0d08 = bVar6 | 1;
      }
      bVar6 = DAT_0d06;
      DAT_0d06 = bVar6 & 0x7f;
      DAT_0d11 = 0;
      DAT_0d12 = 0;
      DAT_0d13 = 0;
      DAT_08a6 = 0;
      RAM08a7 = 0x38;
      RAM08a9 = 0x38;
      goto LAB_d696;
    }
  }
  else {
    uVar4 = CONCAT11(param_1,param_1) & 0xc0ff;
    if ((char)(uVar4 >> 8) == -0x80) {
      DAT_0d0f = 0;
      bVar6 = DAT_0d06;
      if ((~bVar6 & 0x40) == 0) {
        bVar6 = DAT_0d07;
        DAT_0d07 = bVar6 & 0xf7;
        DAT_0d0e = 0;
        cVar7 = DAT_0d11;
        bVar6 = DAT_0d13;
        if (bVar6 == 0) {
          cVar7 = cVar7 + '\x01';
          DAT_0d11 = cVar7;
        }
        if ((cVar7 == '\x03') && (bVar6 < 3)) {
          if (bVar6 == 2) {
            bVar2 = DAT_0d06;
            DAT_0d06 = bVar2 | 2;
          }
          DAT_0d0c = 0;
          bVar2 = DAT_0d13;
          uVar5 = DAT_0d10;
          (&DAT_0d25)[bVar2] = uVar5;
          DAT_0d13 = bVar6 + 1;
          RAM08a6 = 0x4747;
          RAM08a8 = 0x4747;
          DAT_08aa = 0x1c;
          goto LAB_d696;
        }
        DAT_0d3b = 0x30;
        goto LAB_d430;
      }
    }
    else {
      uVar5 = (undefined1)uVar4;
      uVar4 = CONCAT11(uVar5,uVar5) & 0xc0ff;
      if ((char)(uVar4 >> 8) == '@') {
        DAT_0d0f = 0;
        bVar6 = DAT_0d06;
        if ((~bVar6 & 0x40) == 0) {
          bVar6 = DAT_0d07;
          DAT_0d07 = bVar6 & 0xf7;
          DAT_0d0e = 0;
          bVar6 = DAT_0d08;
          if ((~bVar6 & 0x80) != 0) {
            cVar7 = DAT_0d11;
            bVar6 = DAT_0d12;
            if (bVar6 == 0) {
              cVar7 = cVar7 + '\x01';
              DAT_0d11 = cVar7;
            }
            if ((cVar7 == '\x04') && (bVar6 < 9)) {
              if (bVar6 == 8) {
                bVar2 = DAT_0d06;
                DAT_0d06 = bVar2 | 8;
                bVar2 = DAT_0d06;
                DAT_0d06 = bVar2 | 4;
              }
              DAT_0d0c = 0;
              bVar2 = DAT_0d12;
              uVar5 = DAT_0d10;
              *(undefined1 *)((short)&DAT_0d28 + (ushort)bVar2) = uVar5;
              DAT_0d12 = bVar6 + 1;
              RAM08a6 = 0x4949;
              RAM08a8 = 0x4949;
              DAT_08aa = 0x24;
              goto LAB_d696;
            }
          }
          DAT_0d3b = 0x40;
          goto LAB_d430;
        }
      }
      else {
        bVar6 = (byte)uVar4;
        if (bVar6 == 0x3f) {
          DAT_0d0f = 0;
          bVar6 = DAT_0d06;
          if ((~bVar6 & 0x40) == 0) {
            bVar6 = DAT_0d07;
            DAT_0d07 = bVar6 & 0xf7;
            DAT_0d0e = 0;
            bVar6 = DAT_0d11;
            if ((2 < bVar6) && (bVar6 < 5)) {
              bVar6 = DAT_0d07;
              if ((~bVar6 & 0x10) == 0) goto LAB_d430;
              DAT_0d0c = 0;
              bVar6 = DAT_0d06;
              if ((((bVar6 & 8) != 0) && (bVar6 = DAT_0d08, (bVar6 & 0x40) == 0)) ||
                 (bVar6 = DAT_0d08, (bVar6 & 0x20) == 0)) {
                RAM08a6 = 0x4949;
                RAM08a8 = 0x4949;
                DAT_08aa = 0x24;
                goto LAB_d696;
              }
              bVar6 = DAT_0d08;
              if ((bVar6 & 0x10) == 0) {
                bVar6 = DAT_0d08;
                DAT_0d08 = bVar6 | 1;
                RAM08a6 = 0x4646;
                RAM08a8 = 0x4646;
                DAT_08aa = 0x18;
                goto LAB_d696;
              }
              bVar6 = DAT_0d14;
              bVar6 = (bVar6 + 1) - (0xfe < bVar6);
              DAT_0d14 = bVar6;
              if (bVar6 < 5) {
                if (3 < bVar6) {
                  bVar6 = DAT_0d06;
                  DAT_0d06 = bVar6 | 0x80;
                  bVar6 = DAT_0d08;
                  if ((bVar6 & 1) != 0) {
                    bVar6 = DAT_0d08;
                    DAT_0d08 = bVar6 & 0xfe;
                    DAT_0afc = 0;
                    bVar6 = DAT_0881;
                    if ((~bVar6 & 0x20) != 0) {
                      bVar6 = DAT_0d08;
                      DAT_0d08 = bVar6 | 2;
                    }
                  }
                }
                RAM08a6 = 0x4545;
                RAM08a8 = 0x4545;
                DAT_08aa = 0x14;
                goto LAB_d696;
              }
            }
            RAM08a6 = 0x4444;
            RAM08a8 = 0x4444;
            DAT_08aa = 0x10;
            goto LAB_d696;
          }
        }
        else if ((bVar6 < 0x33) || (0x37 < bVar6)) {
          if ((bVar6 != 0xfe) &&
             ((((bVar6 != 1 && (bVar6 != 2)) && (bVar6 != 5)) &&
              (bVar6 = DAT_0d06, (bVar6 & 0x40) != 0)))) {
            bVar6 = DAT_0d07;
            DAT_0d07 = bVar6 | 0x40;
            DAT_0d3b = 0xff;
            goto LAB_d430;
          }
        }
        else {
          DAT_0d3b = 0xe0;
          DAT_0d0f = 0;
          if ((bVar6 == 0x37) || (bVar6 = DAT_0d06, (bVar6 & 0x40) != 0)) {
            bVar6 = DAT_0d07;
            DAT_0d07 = bVar6 & 0xf7;
            DAT_0d0e = 0;
            bVar6 = DAT_0d0c;
            bVar6 = (bVar6 + 1) - (0xfe < bVar6);
            DAT_0d0c = bVar6;
            if (DAT_4e80 <= bVar6) {
              bVar6 = DAT_0d08;
              DAT_0d08 = bVar6 | 1;
            }
            bVar6 = DAT_0d07;
            DAT_0d07 = bVar6 | 0x80;
            bVar6 = DAT_0d06;
            DAT_0d06 = bVar6 & 0x7f;
            DAT_0d11 = 0;
            DAT_0d12 = 0;
            DAT_0d13 = 0;
            DAT_08a6 = 0;
            RAM08a7 = (ushort)param_1;
            RAM08a9 = (ushort)param_1;
            goto LAB_d696;
          }
        }
      }
    }
  }
  bVar6 = DAT_0020;
  DAT_0020 = bVar6 | 4;
  DAT_00cb = 0;
  bVar6 = DAT_0d07;
  DAT_0d07 = bVar6 | 8;
  bVar6 = DAT_0d07;
  DAT_0d07 = bVar6 & 0xfb;
  DAT_0d0d = 0;
  DAT_08a6 = 0;
  RAM08a7 = 0x48;
  RAM08a9 = 0x48;
LAB_d696:
  bVar6 = DAT_08ae;
  DAT_08ae = bVar6 & 0xbf;
  bVar6 = DAT_08ae;
  DAT_08ae = bVar6 | 0x20;
  bVar6 = DAT_08ae;
  DAT_08ae = bVar6 | 1;
  return;
}


/* Entry d6a3 */

void FUN_d6a3(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = DAT_0bdd;
  cVar3 = DAT_0bde;
  if (cVar2 != cVar3) {
    DAT_0893 = 0;
    DAT_0be3 = 0;
    DAT_0be6 = 0;
    DAT_0be5 = 0;
    DAT_0be2 = 0;
    DAT_0be4 = 0;
    DAT_0bdf = 0;
    DAT_0be0 = 0;
    DAT_0b71 = 0;
    bVar1 = DAT_0892;
    DAT_0892 = bVar1 & 0xef;
    cVar2 = DAT_0d43;
    if (cVar3 == cVar2) {
      FUN_d7c4();
    }
    else {
      cVar2 = DAT_0d46;
      if (cVar3 == cVar2) {
        FUN_d7d0();
      }
      else {
        cVar2 = DAT_0d47;
        if (cVar3 == cVar2) {
          FUN_d7eb();
        }
        else {
          cVar2 = DAT_0d48;
          if (cVar3 == cVar2) {
            FUN_d804();
          }
          else {
            cVar2 = DAT_0d49;
            if (cVar3 == cVar2) {
              FUN_d81d();
            }
            else {
              cVar2 = DAT_0d4a;
              if (cVar3 == cVar2) {
                FUN_d830();
              }
              else {
                cVar2 = DAT_0d4b;
                if (cVar3 == cVar2) {
                  FUN_d83c();
                }
                else {
                  cVar2 = DAT_0d4c;
                  if (cVar3 == cVar2) {
                    FUN_d84b();
                  }
                  else {
                    cVar2 = DAT_0d4d;
                    if (cVar3 == cVar2) {
                      FUN_d85a();
                    }
                    else {
                      cVar2 = DAT_0d4e;
                      if (cVar3 == cVar2) {
                        FUN_d862();
                      }
                      else {
                        cVar2 = DAT_0d4f;
                        if (cVar3 == cVar2) {
                          FUN_d864();
                        }
                        else {
                          cVar2 = DAT_0d50;
                          if (cVar3 == cVar2) {
                            FUN_d86d();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    cVar2 = DAT_0bdd;
    cVar3 = DAT_0d43;
    if (cVar2 == cVar3) {
      FUN_d7c0();
    }
    else {
      cVar3 = DAT_0d46;
      if (cVar2 == cVar3) {
        FUN_d7c8();
      }
      else {
        cVar3 = DAT_0d47;
        if (cVar2 == cVar3) {
          FUN_d7e3();
        }
        else {
          cVar3 = DAT_0d48;
          if (cVar2 == cVar3) {
            FUN_d7fc();
          }
          else {
            cVar3 = DAT_0d49;
            if (cVar2 == cVar3) {
              FUN_d815();
            }
            else {
              cVar3 = DAT_0d4a;
              if (cVar2 == cVar3) {
                FUN_d828();
              }
              else {
                cVar3 = DAT_0d4b;
                if (cVar2 == cVar3) {
                  FUN_d834();
                }
                else {
                  cVar3 = DAT_0d4c;
                  if (cVar2 == cVar3) {
                    FUN_d843();
                  }
                  else {
                    cVar3 = DAT_0d4d;
                    if (cVar2 == cVar3) {
                      FUN_d852();
                    }
                    else {
                      cVar3 = DAT_0d4e;
                      if (cVar2 == cVar3) {
                        FUN_d861();
                      }
                      else {
                        cVar3 = DAT_0d4f;
                        if (cVar2 == cVar3) {
                          FUN_d863();
                        }
                        else {
                          cVar3 = DAT_0d50;
                          if (cVar2 == cVar3) {
                            FUN_d865();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
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
  
  bVar1 = DAT_0893;
  DAT_0893 = bVar1 | 0x80;
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
  
  bVar1 = DAT_0893;
  DAT_0893 = bVar1 | 0x80;
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
  
  bVar1 = DAT_0893;
  DAT_0893 = bVar1 | 0x80;
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
  
  bVar1 = DAT_0893;
  DAT_0893 = bVar1 | 0x80;
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
  bVar1 = DAT_0889;
  DAT_0889 = bVar1 & 0x7f;
  return;
}


/* Entry d828 */

void FUN_d828(void)

{
  byte bVar1;
  
  bVar1 = DAT_0893;
  DAT_0893 = bVar1 | 0x80;
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
  
  bVar1 = DAT_0893;
  DAT_0893 = bVar1 | 0x80;
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
  
  bVar1 = DAT_0893;
  DAT_0893 = bVar1 | 0x80;
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
  
  bVar1 = DAT_0893;
  DAT_0893 = bVar1 | 0x80;
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
  
  bVar1 = DAT_0893;
  DAT_0893 = bVar1 | 0x80;
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

void FUN_d871(void)

{
  ushort *puVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined1 extraout_A;
  short sVar12;
  byte bVar16;
  char cVar17;
  undefined1 uVar18;
  undefined2 uVar13;
  undefined *puVar14;
  ushort uVar15;
  undefined2 *puVar19;
  undefined2 *puVar20;
  
  bVar9 = DAT_08be;
  DAT_08be = bVar9 | 0x80;
  DAT_004e = 2;
  bVar9 = DAT_00e1;
  if ((bVar9 & 2) != 0) {
    bVar9 = DAT_08be;
    DAT_08be = bVar9 | 0x40;
    bVar9 = DAT_004b;
    DAT_004b = bVar9 & 0xfb | 8;
    goto LAB_dc06;
  }
  bVar9 = DAT_08be;
  DAT_08be = bVar9 | 0x20;
  bVar9 = DAT_0883;
  DAT_0883 = bVar9 | 4;
  bVar9 = DAT_0880;
  DAT_0880 = bVar9 | 8;
  DAT_0b62 = 0;
  DAT_0bc8 = 0;
  cVar17 = DAT_0d52;
  if ((((cVar17 != -0x80) && (bVar9 = DAT_08a0, (~bVar9 & 4) != 0)) &&
      (bVar9 = DAT_08b2, (~bVar9 & 0x80) != 0)) && (bVar9 = DAT_08af, (bVar9 & 0x40) != 0)) {
    bVar9 = DAT_08af;
    DAT_08af = bVar9 & 0xbf;
    bVar9 = DAT_0bd2;
    DAT_0bd2 = bVar9 | 0x80;
  }
  bVar9 = DAT_0afd;
  bVar8 = DAT_0d66;
  if (bVar8 <= bVar9) {
    DAT_0afb = 0;
  }
  uVar18 = DAT_0c07;
  DAT_0c0f = uVar18;
  uVar13 = DAT_0c08;
  DAT_0c10 = uVar13;
  sVar12 = DAT_0052;
  sVar3 = DAT_0af0;
  DAT_0c08 = sVar12 - sVar3;
  uVar13 = DAT_0052;
  DAT_0af0 = uVar13;
  bVar9 = DAT_0c02;
  if ((short)((ushort)bVar9 << 8) < 0) {
    bVar9 = 0xff;
  }
  else if (bVar9 < 8) {
    bVar9 = 0;
  }
  else {
    bVar8 = DAT_0c08._0_1_;
    bVar9 = (byte)(bVar9 + ((byte)~bVar8 >> 4)) >> 4;
  }
  DAT_0c07 = bVar9;
  uVar13 = DAT_0044;
  DAT_0c00 = uVar13;
  DAT_0c02 = 0;
  bVar9 = DAT_0d08;
  if (((~bVar9 & 1) != 0) && (bVar9 = DAT_0880, (bVar9 & 1) != 0)) {
    bVar9 = DAT_0caa;
    bVar9 = (bVar9 + 1) - (0xfe < bVar9);
    DAT_0caa = bVar9;
    bVar8 = DAT_0d67;
    if ((bVar8 <= bVar9) &&
       ((bVar9 = DAT_0c03, 0xbf < bVar9 || (bVar9 = DAT_0d08, (bVar9 & 2) != 0)))) {
      bVar9 = DAT_0883;
      DAT_0883 = bVar9 | 0x10;
      bVar9 = DAT_0d08;
      DAT_0d08 = bVar9 & 0xfd;
    }
  }
  uVar4 = DAT_0daa;
  DAT_0c2e = uVar4;
  uVar15 = DAT_0c2e;
  sVar12 = uVar4 + uVar15;
  if (CARRY2(uVar4,uVar15)) {
    sVar12 = -1;
  }
  DAT_0c30 = sVar12;
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    FUN_f147();
  }
  else {
    bVar9 = DAT_0884;
    if (((~bVar9 & 4) != 0) && (bVar9 = DAT_0bf8, (~bVar9 & 0x80) != 0)) {
      FUN_f043();
    }
  }
  DAT_0b09 = 0;
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    uVar18 = DAT_0c27;
    DAT_0c23 = uVar18;
    uVar13 = DAT_0c28;
    DAT_0c24 = uVar13;
    bVar9 = DAT_0c03;
    if ((bVar9 & 0x1f) == 10) {
      cVar17 = DAT_0c07;
      if ((cVar17 == '\0') && (uVar15 = DAT_0c08, uVar15 < 0x100)) goto LAB_dc06;
      uVar18 = DAT_0c07;
      DAT_0c2b = uVar18;
      uVar13 = DAT_0c08;
      DAT_0c2c = uVar13;
      bVar9 = DAT_0c07;
      DAT_0c27 = bVar9 >> 1;
      uVar13 = DAT_0c08;
      bVar8 = (byte)((ushort)uVar13 >> 8);
      DAT_0c28 = CONCAT11(bVar8 >> 1 | bVar9 << 7,(byte)uVar13 >> 1 | bVar8 << 7);
    }
    else {
      cVar17 = DAT_0c07;
      if ((cVar17 == '\0') && (uVar15 = DAT_0c08, uVar15 < 0x80)) goto LAB_dc06;
      uVar18 = DAT_0c07;
      DAT_0c27 = uVar18;
      uVar15 = DAT_0c08;
      DAT_0c28 = uVar15;
      uVar4 = DAT_0c24;
      DAT_0c2c = uVar15 + uVar4;
      cVar6 = DAT_0c27;
      cVar17 = DAT_0c23;
      DAT_0c2b = cVar6 + cVar17 + CARRY2(uVar15,uVar4);
    }
    bVar9 = DAT_0c03;
    bVar9 = bVar9 & 0x1f;
    if (bVar9 == 0) {
      uVar13 = DAT_0c28;
      cVar17 = DAT_0c27;
      if (cVar17 != '\0') {
        uVar13 = 0xffff;
      }
      DAT_0a2e = uVar13;
      DAT_0a38 = uVar13;
      bVar9 = DAT_0e21;
      if ((bVar9 & 0x80) != 0) {
        uVar18 = DAT_091b;
        DAT_0921 = uVar18;
      }
      DAT_091b = 0;
      cVar17 = DAT_0c2b;
      if (cVar17 == '\0') {
        uVar15 = DAT_0c2c;
      }
      else {
        uVar15 = 0xffff;
      }
LAB_db96:
      uVar4 = DAT_0a2e;
      sVar12 = uVar15 + uVar4;
      if (CARRY2(uVar15,uVar4)) {
        sVar12 = -1;
      }
    }
    else {
      if (bVar9 == 1) {
LAB_da48:
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a3a = uVar13;
        bVar9 = DAT_0e21;
        if ((bVar9 & 0x80) != 0) {
          uVar18 = DAT_091c;
          DAT_0921 = uVar18;
        }
        DAT_091c = 0;
        uVar4 = DAT_0a38;
        uVar5 = DAT_0a42;
        uVar15 = uVar4 + uVar5;
        if (CARRY2(uVar4,uVar5)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 2) {
LAB_da79:
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a3c = uVar13;
        bVar9 = DAT_0e21;
        if ((bVar9 & 0x80) != 0) {
          uVar18 = DAT_091d;
          DAT_0921 = uVar18;
        }
        DAT_091d = 0;
        uVar5 = DAT_0a3a;
        uVar4 = DAT_0a38;
        uVar15 = uVar5 + uVar4;
        if (CARRY2(uVar5,uVar4)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 3) {
LAB_daaa:
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a3e = uVar13;
        bVar9 = DAT_0e21;
        if ((bVar9 & 0x80) != 0) {
          uVar18 = DAT_091e;
          DAT_0921 = uVar18;
        }
        DAT_091e = 0;
        uVar5 = DAT_0a3c;
        uVar4 = DAT_0a3a;
        uVar15 = uVar5 + uVar4;
        if (CARRY2(uVar5,uVar4)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 4) {
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a40 = uVar13;
        bVar9 = DAT_0e21;
        if ((bVar9 & 0x80) != 0) {
          bVar9 = DAT_091f;
          DAT_0921 = (char)(((ushort)bVar9 << 7) >> 8);
        }
        DAT_091f = 0;
        uVar5 = DAT_0a3e;
        uVar4 = DAT_0a3c;
        uVar15 = uVar5 + uVar4;
        if (CARRY2(uVar5,uVar4)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 5) {
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a42 = uVar13;
        bVar9 = DAT_0e21;
        if ((bVar9 & 0x80) != 0) {
          uVar18 = DAT_0920;
          DAT_0921 = uVar18;
        }
        DAT_0920 = 0;
        bVar9 = DAT_0e21;
        DAT_0e21 = bVar9 | 0x80;
        uVar4 = DAT_0a3e;
        uVar5 = DAT_0a40;
        uVar15 = uVar4 + uVar5;
        if (CARRY2(uVar4,uVar5)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 6) {
        uVar13 = DAT_0c28;
        cVar17 = DAT_0c27;
        if (cVar17 != '\0') {
          uVar13 = 0xffff;
        }
        DAT_0a2e = uVar13;
        DAT_0a38 = uVar13;
        uVar18 = DAT_091b;
        DAT_0921 = uVar18;
        DAT_091b = 0;
        uVar5 = DAT_0a42;
        uVar4 = DAT_0a40;
        uVar15 = uVar5 + uVar4;
        if (CARRY2(uVar5,uVar4)) {
          uVar15 = 0xffff;
        }
        goto LAB_db96;
      }
      if (bVar9 == 7) goto LAB_da48;
      if (bVar9 == 8) goto LAB_da79;
      if (bVar9 == 9) goto LAB_daaa;
      uVar13 = DAT_0c28;
      cVar17 = DAT_0c27;
      if (cVar17 != '\0') {
        uVar13 = 0xffff;
      }
      DAT_0a2e = uVar13;
      DAT_0a42 = uVar13;
      DAT_0a40 = uVar13;
      uVar18 = DAT_0920;
      DAT_0921 = uVar18;
      DAT_0920 = 0;
      cVar17 = DAT_0c2b;
      if (cVar17 == '\0') {
        uVar15 = DAT_0a3e;
        uVar4 = DAT_0c2c;
        sVar12 = uVar15 + uVar4;
        if (CARRY2(uVar15,uVar4)) goto LAB_db91;
      }
      else {
LAB_db91:
        sVar12 = -1;
      }
    }
    DAT_0a34 = sVar12;
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    cVar17 = DAT_0c03;
    bVar9 = cVar17 + 1;
    if (10 < bVar9) {
      bVar9 = 0;
    }
    DAT_0c03 = bVar9;
    DAT_0c04 = bVar9 & 0x1f;
    bVar9 = DAT_0884;
    if (((~bVar9 & 4) == 0) || (bVar9 = DAT_0bf8, (~bVar9 & 0x80) == 0)) {
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
    bVar9 = DAT_0922;
    if (bVar9 < 0x16) {
      sVar12 = DAT_0b60;
      DAT_0b60 = sVar12 + 1;
      if (bVar9 == 10) {
        bVar9 = 0xb;
      }
      uVar15 = (ushort)(byte)(bVar9 + 1) << 8;
    }
    else {
      bVar9 = DAT_0922;
      if (0xbf < bVar9) {
        DAT_0922 = (bVar9 + 1) - (0xfe < bVar9);
        goto LAB_dbf1;
      }
      sVar12 = DAT_0b60;
      DAT_0b60 = sVar12 + 1;
      cVar17 = DAT_0922;
      cVar17 = cVar17 + '\x01';
      if (cVar17 == '\v') {
        cVar17 = '\f';
      }
      uVar15 = CONCAT11(cVar17,cVar17) & 0xff1f;
      if (0x16 < (byte)uVar15) {
        uVar15 = (ushort)(byte)((char)(uVar15 >> 8) - 0x17) << 8;
      }
    }
    DAT_0922 = (char)(uVar15 >> 8);
    bVar9 = DAT_0922;
    DAT_0923 = bVar9 & 0x1f;
  }
  uVar18 = DAT_0085;
  DAT_08c4 = uVar18;
  bVar9 = DAT_088d;
  DAT_088d = bVar9 | 1;
  DAT_0085 = 1;
  sVar12 = DAT_0044;
  DAT_08c8 = sVar12 + 0x4b;
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    bVar8 = DAT_0c04;
    bVar9 = DAT_0921;
    if (0x33 < bVar9) {
      DAT_0a2e = 0xffff;
    }
    bVar10 = DAT_0a2e._0_1_;
    bVar9 = DAT_0880;
    if ((~bVar9 & 1) == 0) {
      bVar9 = DAT_0d73;
      if (bVar9 <= bVar10) {
        bVar9 = DAT_0b5d;
        bVar10 = DAT_0d74;
        if (bVar9 < bVar10) {
          bVar9 = DAT_0885;
          DAT_0885 = bVar9 | 0x40;
          goto LAB_dcfa;
        }
      }
      bVar9 = DAT_0885;
      DAT_0885 = bVar9 & 0xbf;
      bVar9 = DAT_0884;
      DAT_0884 = bVar9 & 0xfb;
    }
    else {
      bVar9 = DAT_0880;
      if (((bVar9 & 2) != 0) && ((byte)(&DAT_0d68)[bVar8] <= bVar10)) {
        bVar9 = DAT_0884;
        DAT_0884 = bVar9 | 4;
        DAT_0aff = 0;
        FUN_721f();
        bVar9 = DAT_088d;
        if ((bVar9 & 1) != 0) {
          bVar9 = DAT_088d;
          DAT_088d = bVar9 & 0xfe;
          FUN_f39d();
        }
        goto LAB_dc06;
      }
      bVar9 = DAT_0b5d;
      bVar10 = DAT_0d74;
      if (bVar10 <= bVar9) {
        bVar9 = DAT_0885;
        DAT_0885 = bVar9 & 0xbf;
      }
    }
LAB_dcfa:
    bVar9 = DAT_0bf8;
    if (((((~bVar9 & 0x80) != 0) && (bVar9 = DAT_0bf8, (bVar9 & 0x40) != 0)) &&
        (bVar9 = DAT_0a2e._0_1_, (byte)(&DAT_0d68)[bVar8] <= bVar9)) &&
       (bVar9 = DAT_0bf8, (~bVar9 & 0x20) != 0)) {
      bVar9 = DAT_0bf8;
      DAT_0bf8 = bVar9 | 0x80;
      DAT_0bf9 = 0;
      FUN_721f();
      bVar9 = DAT_088d;
      if ((bVar9 & 1) != 0) {
        bVar9 = DAT_088d;
        DAT_088d = bVar9 & 0xfe;
        FUN_f39d();
      }
LAB_dc06:
      DAT_0b00 = 0;
      DAT_004e = 2;
      bVar9 = DAT_08be;
      DAT_08be = bVar9 & 0xdf;
      bVar9 = DAT_08be;
      DAT_08be = bVar9 & 0xbf;
      bVar9 = DAT_08be;
      DAT_08be = bVar9 & 0x7f;
      return;
    }
    bVar9 = DAT_0882;
    DAT_0882 = bVar9 | 0x80;
  }
  DAT_0b00 = 0;
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    cVar17 = DAT_0d5e;
    if (((cVar17 != -0x80) && (bVar9 = DAT_08a0, (~bVar9 & 4) != 0)) &&
       (bVar9 = DAT_08b2, (~bVar9 & 0x80) != 0)) {
      bVar9 = DAT_0880;
      if ((~bVar9 & 1) == 0) {
LAB_dd63:
        cVar17 = DAT_0d5e;
        if (((cVar17 != -0x80) && (bVar9 = DAT_0880, (~bVar9 & 0x80) != 0)) &&
           ((((bVar9 = DAT_0d08, (~bVar9 & 1) != 0 &&
              (((bVar9 = DAT_0884, (~bVar9 & 2) != 0 && (bVar9 = DAT_0884, (~bVar9 & 4) != 0)) &&
               (bVar9 = DAT_088c, (~bVar9 & 0x80) != 0)))) &&
             ((bVar9 = DAT_0885, (~bVar9 & 0x40) != 0 && (bVar9 = DAT_0bf8, (~bVar9 & 0x80) != 0))))
            && (bVar9 = DAT_089b, (~bVar9 & 0x80) != 0)))) {
          cVar17 = DAT_0c04;
          bVar9 = DAT_088c;
          if ((((~bVar9 & 2) == 0) || (bVar9 = DAT_089a, (~bVar9 & 2) == 0)) || (cVar17 != '\b'))
          goto LAB_de0b;
          bVar9 = DAT_0a92;
          if ((bVar9 & 8) != 0) {
            bVar9 = DAT_004e;
            if ((bVar9 & 0x20) == 0) {
              DAT_0b50 = 0;
              bVar9 = DAT_0b46;
              bVar9 = (bVar9 + 1) - (0xfe < bVar9);
              DAT_0b46 = bVar9;
              bVar8 = DAT_0d78;
              if ((bVar8 <= bVar9) && (bVar9 = DAT_08b1, (~bVar9 & 0x80) != 0)) {
                bVar9 = DAT_08b1;
                DAT_08b1 = bVar9 | 0x80;
                bVar9 = DAT_0bd2;
                DAT_0bd2 = bVar9 | 0x20;
                bVar9 = DAT_08ba;
                if ((~bVar9 & 0x80) != 0) {
                  bVar9 = DAT_08ba;
                  DAT_08ba = bVar9 | 0x80;
                  bVar9 = DAT_0bd2;
                  DAT_0bd2 = bVar9 | 2;
                }
              }
            }
            else {
              DAT_0b46 = 0;
              bVar9 = DAT_0b50;
              bVar9 = (bVar9 + 1) - (0xfe < bVar9);
              DAT_0b50 = bVar9;
              bVar8 = DAT_0d76;
              if ((bVar8 <= bVar9) && (bVar9 = DAT_08b1, (bVar9 & 0x80) != 0)) {
                bVar9 = DAT_08b1;
                DAT_08b1 = bVar9 & 0x7f;
                bVar9 = DAT_0bd2;
                DAT_0bd2 = bVar9 | 0x20;
              }
            }
          }
        }
      }
      else {
        bVar9 = DAT_0b6e;
        bVar8 = DAT_0d75;
        if (bVar8 <= bVar9) {
          bVar9 = DAT_0bce;
          bVar8 = DAT_0d77;
          if (bVar8 <= bVar9) goto LAB_dd63;
        }
      }
    }
    uVar18 = DAT_0c04;
    DAT_004e = 0x20;
  }
LAB_de0b:
  bVar9 = DAT_0bfe;
  if (((~bVar9 & 0x80) == 0) && (cVar17 = DAT_0c04, cVar17 == '\n')) {
    bVar9 = DAT_0a92;
    DAT_0a92 = bVar9 & 0x77;
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    bVar9 = DAT_0a2e._0_1_;
    bVar8 = DAT_0d79;
    if (bVar9 < bVar8) {
      bVar8 = DAT_0d7a;
      if (bVar9 < bVar8) {
        uVar18 = DAT_0881;
        bVar9 = DAT_0881;
        DAT_0881 = bVar9 & 0xef;
      }
    }
    else {
      bVar9 = DAT_0881;
      DAT_0881 = bVar9 | 0x10;
      uVar18 = DAT_0d7b;
      DAT_0a1a = uVar18;
    }
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    bVar9 = DAT_0a2e._0_1_;
    bVar8 = DAT_0d7d;
    if (((bVar9 < bVar8) || (bVar8 = DAT_0880, (~bVar8 & 1) != 0)) &&
       (bVar8 = DAT_0d7c, bVar9 < bVar8)) {
      cVar17 = DAT_0c04;
      if (cVar17 == '\0') {
        bVar8 = DAT_0880;
        DAT_0880 = bVar8 & 0xbf;
      }
      bVar8 = DAT_0d7c;
      if (bVar8 <= bVar9) goto LAB_de81;
      if (cVar17 == '\0') {
        bVar9 = DAT_0880;
        DAT_0880 = bVar9 & 0xfb;
      }
    }
    else {
      bVar9 = DAT_0880;
      DAT_0880 = bVar9 | 0x40;
LAB_de81:
      bVar9 = DAT_0880;
      DAT_0880 = bVar9 | 4;
      DAT_0a86 = 0x80;
    }
    bVar9 = DAT_0881;
    DAT_0881 = bVar9 & 0xdf;
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    FUN_ed29();
    FUN_ed6d();
  }
  bVar9 = DAT_0bfe;
  if (((~bVar9 & 0x80) == 0) && (cVar17 = DAT_0c04, cVar17 == '\0')) {
    bVar9 = DAT_0887;
    DAT_0887 = bVar9 | 2;
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    cVar17 = DAT_0923;
    if (((cVar17 == '\0') || (cVar17 == '\x06')) || ((cVar17 == '\f' || (cVar17 == '\x12')))) {
      bVar9 = DAT_0881;
      DAT_0881 = bVar9 | 4;
      bVar9 = DAT_0887;
      DAT_0887 = bVar9 | 1;
    }
    bVar9 = DAT_0ca8;
    if (((bVar9 & 1) != 0) && (cVar6 = DAT_0da6, cVar17 == (char)(cVar6 + '\x04'))) {
      bVar9 = DAT_0881;
      DAT_0881 = bVar9 | 2;
    }
    bVar9 = DAT_088b;
    if ((bVar9 & 0x80) == 0) {
      bVar8 = DAT_0c04;
      bVar9 = DAT_0d7e;
      bVar9 = bVar9 & 0x1f;
      if (0xb < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
        bVar9 = DAT_0a17;
        DAT_0a17 = bVar9 & 0xf7;
        bVar9 = DAT_0a19;
        DAT_0a19 = bVar9 & 0xf7;
        bVar9 = DAT_088b;
        DAT_088b = bVar9 | 0x40;
        uVar18 = DAT_0a26._0_1_;
        DAT_0a22._0_1_ = uVar18;
        uVar18 = DAT_0a26._1_1_;
        DAT_0a22._1_1_ = uVar18;
        uVar18 = DAT_0a1e;
        DAT_0a1c = uVar18;
      }
      bVar9 = DAT_0cab;
      bVar9 = bVar9 & 0x1f;
      if (0xb < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
        bVar9 = DAT_0a17;
        DAT_0a17 = bVar9 & 0xfd;
        bVar9 = DAT_0a19;
        DAT_0a19 = bVar9 & 0xfd;
        uVar18 = DAT_0a28._0_1_;
        DAT_0a24._0_1_ = uVar18;
        uVar18 = DAT_0a28._1_1_;
        DAT_0a24._1_1_ = uVar18;
        uVar18 = DAT_0a1f;
        DAT_0a1d = uVar18;
      }
    }
    else {
      bVar9 = DAT_0923;
      bVar8 = DAT_0d7e;
      if (bVar9 == (bVar8 & 0x1f)) {
        bVar8 = DAT_0a17;
        DAT_0a17 = bVar8 & 0xf7;
        bVar8 = DAT_0a19;
        DAT_0a19 = bVar8 & 0xf7;
        bVar8 = DAT_088b;
        DAT_088b = bVar8 | 0x40;
        uVar18 = DAT_0a26._0_1_;
        DAT_0a22._0_1_ = uVar18;
        uVar18 = DAT_0a26._1_1_;
        DAT_0a22._1_1_ = uVar18;
        uVar18 = DAT_0a1e;
        DAT_0a1c = uVar18;
      }
      uVar18 = DAT_0cab;
      uVar15 = CONCAT11(bVar9,uVar18) & 0xff1f;
      if ((char)(uVar15 >> 8) == (char)uVar15) {
        bVar9 = DAT_0a17;
        DAT_0a17 = bVar9 & 0xfd;
        bVar9 = DAT_0a19;
        DAT_0a19 = bVar9 & 0xfd;
        uVar18 = DAT_0a28._0_1_;
        DAT_0a24._0_1_ = uVar18;
        uVar18 = DAT_0a28._1_1_;
        DAT_0a24._1_1_ = uVar18;
        uVar18 = DAT_0a1f;
        DAT_0a1d = uVar18;
      }
    }
    FUN_f49f();
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    bVar9 = DAT_0ca8;
    if ((~bVar9 & 1) == 0) {
      bVar9 = DAT_0923;
      bVar8 = DAT_0d7e;
      if (bVar9 == (bVar8 & 0x1f)) {
        bVar8 = DAT_088b;
        if ((~bVar8 & 0x80) == 0) {
          cVar17 = DAT_0a20;
          DAT_0a20 = cVar17 + -1 + (cVar17 == '\0');
        }
        else {
          DAT_0a20 = 0;
        }
      }
      bVar8 = DAT_0cab;
      if (bVar9 == (bVar8 & 0x1f)) {
        bVar8 = DAT_088b;
        if ((~bVar8 & 0x80) == 0) {
          cVar17 = DAT_0a21;
          DAT_0a21 = cVar17 + -1 + (cVar17 == '\0');
        }
        else {
          DAT_0a21 = 0;
        }
      }
      uVar18 = DAT_0a1c;
      uVar15 = CONCAT11(bVar9,uVar18) & 0xff1f;
      if (((char)(uVar15 >> 8) == (char)uVar15) && (bVar9 = DAT_0a19, (bVar9 & 8) != 0)) {
        FUN_ec98();
      }
      uVar18 = DAT_0923;
      uVar11 = DAT_0a1d;
      uVar15 = CONCAT11(uVar18,uVar11) & 0xff1f;
      if (((char)(uVar15 >> 8) == (char)uVar15) && (bVar9 = DAT_0a19, (bVar9 & 2) != 0)) {
        FUN_ed11();
      }
      uVar18 = DAT_0923;
      uVar11 = DAT_0d7e;
      uVar15 = CONCAT11(uVar18,uVar11) & 0xff1f;
      cVar17 = (char)(uVar15 >> 8);
      if (cVar17 == (char)uVar15) {
        bVar9 = DAT_0881;
        DAT_0881 = bVar9 & 0x7f;
      }
      uVar18 = DAT_0cab;
      uVar15 = CONCAT11(cVar17,uVar18) & 0xff1f;
      if ((char)(uVar15 >> 8) == (char)uVar15) {
        bVar9 = DAT_0881;
        DAT_0881 = bVar9 & 0xbf;
      }
    }
    else {
      bVar8 = DAT_0c04;
      bVar9 = DAT_0d7e;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
        bVar9 = DAT_088b;
        if ((~bVar9 & 0x80) == 0) {
          cVar17 = DAT_0a20;
          DAT_0a20 = cVar17 + -1 + (cVar17 == '\0');
        }
        else {
          DAT_0a20 = 0;
        }
      }
      bVar9 = DAT_0cab;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
        bVar9 = DAT_088b;
        if ((~bVar9 & 0x80) == 0) {
          cVar17 = DAT_0a21;
          DAT_0a21 = cVar17 + -1 + (cVar17 == '\0');
        }
        else {
          DAT_0a21 = 0;
        }
      }
      bVar9 = DAT_0a1c;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if ((bVar8 == bVar9) && (bVar9 = DAT_0a19, (bVar9 & 8) != 0)) {
        FUN_ec98();
      }
      bVar8 = DAT_0c04;
      bVar9 = DAT_0a1d;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if ((bVar8 == bVar9) && (bVar9 = DAT_0a19, (bVar9 & 2) != 0)) {
        FUN_ed11();
      }
      bVar8 = DAT_0c04;
      bVar9 = DAT_0d7e;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
        bVar9 = DAT_0881;
        DAT_0881 = bVar9 & 0x7f;
      }
      bVar9 = DAT_0cab;
      bVar9 = bVar9 & 0x1f;
      if (bVar9 == 0xb) {
        bVar9 = 10;
      }
      else if (10 < bVar9) {
        bVar9 = bVar9 - 0xc;
      }
      if (bVar8 == bVar9) {
        bVar9 = DAT_0881;
        DAT_0881 = bVar9 & 0xbf;
      }
    }
  }
  bVar9 = DAT_0bfe;
  if ((~bVar9 & 0x80) == 0) {
    bVar9 = DAT_0922;
    if (((bVar9 & 0x1f) == 0) || ((bVar9 & 0x1f) == 0xc)) {
      uVar13 = DAT_0ac2;
      DAT_0ac4 = uVar13;
      sVar12 = DAT_0ab0;
      DAT_0ac2 = sVar12;
      sVar3 = DAT_0ac4;
      sVar12 = sVar12 - sVar3;
      bVar9 = DAT_0abf;
      if ((~bVar9 & 4) != 0) {
        sVar12 = 0;
      }
      if ((char)((ushort)sVar12 >> 8) != '\0') {
        sVar12 = 0xff;
      }
      DAT_0ac0 = (char)sVar12;
      bVar9 = DAT_0abf;
      DAT_0abf = bVar9 | 4;
      bVar9 = DAT_0ac0;
      bVar10 = DAT_0d7f;
      bVar8 = DAT_0ac8;
      bVar16 = (byte)((ushort)bVar9 * (ushort)bVar10);
      bVar10 = (byte)((ushort)bVar9 * (ushort)bVar10 >> 8);
      bVar9 = bVar10 - (bVar16 < bVar8);
      if (bVar10 < (bVar16 < bVar8)) {
        cVar17 = -(bVar16 - bVar8);
        bVar8 = DAT_0d80;
        iVar2 = (uint)bVar8 * (uint)CONCAT11((~bVar9 + 1) - (cVar17 != '\0'),cVar17);
        uVar13 = (undefined2)iVar2;
        if ((short)((uint)iVar2 >> 0x10) != 0) {
          uVar13 = 0xffff;
        }
        bVar9 = DAT_0abf;
        bVar8 = (byte)((ushort)uVar13 >> 8);
        bVar10 = (byte)uVar13;
        if ((bVar9 & 1) == 0) {
          bVar16 = DAT_0ac6._1_1_;
          bVar9 = bVar8 - (bVar10 < bVar16);
          uVar13 = CONCAT11(bVar9,bVar10 - bVar16);
          if ((bVar10 < bVar16) <= bVar8) goto LAB_e16b;
          cVar17 = -(bVar10 - bVar16);
          uVar13 = CONCAT11((~bVar9 + 1) - (cVar17 != '\0'),cVar17);
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 & 0xfe;
        }
        else {
          bVar9 = DAT_0ac6._1_1_;
          uVar13 = CONCAT11(bVar8 + CARRY1(bVar10,bVar9),bVar10 + bVar9);
          if (CARRY1(bVar8,CARRY1(bVar10,bVar9))) {
            uVar13 = 0xffff;
          }
LAB_e16b:
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 | 1;
        }
        DAT_0ac6 = uVar13;
      }
      else {
        bVar10 = DAT_0d80;
        iVar2 = (uint)bVar10 * (uint)CONCAT11(bVar9,bVar16 - bVar8);
        uVar13 = (undefined2)iVar2;
        if ((short)((uint)iVar2 >> 0x10) != 0) {
          uVar13 = 0xffff;
        }
        bVar9 = DAT_0abf;
        bVar8 = (byte)((ushort)uVar13 >> 8);
        bVar10 = (byte)uVar13;
        if ((bVar9 & 1) == 0) {
          bVar9 = DAT_0ac6._1_1_;
          uVar13 = CONCAT11(bVar8 + CARRY1(bVar10,bVar9),bVar10 + bVar9);
          if (CARRY1(bVar8,CARRY1(bVar10,bVar9))) {
            uVar13 = 0xffff;
          }
LAB_e1ad:
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 & 0xfe;
        }
        else {
          bVar16 = DAT_0ac6._1_1_;
          bVar9 = bVar8 - (bVar10 < bVar16);
          uVar13 = CONCAT11(bVar9,bVar10 - bVar16);
          if ((bVar10 < bVar16) <= bVar8) goto LAB_e1ad;
          cVar17 = -(bVar10 - bVar16);
          uVar13 = CONCAT11((~bVar9 + 1) - (cVar17 != '\0'),cVar17);
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 | 1;
        }
        DAT_0ac6 = uVar13;
      }
      bVar8 = DAT_0ac8;
      bVar9 = DAT_0abf;
      if ((bVar9 & 1) == 0) {
        bVar9 = DAT_0ac6._0_1_;
        cVar17 = bVar8 + bVar9;
        if (CARRY1(bVar8,bVar9)) {
          cVar17 = -1;
        }
      }
      else {
        bVar9 = DAT_0ac6._0_1_;
        cVar17 = bVar8 - bVar9;
        if (bVar8 < bVar9) {
          cVar17 = '\0';
        }
      }
      DAT_0ac8 = cVar17;
      bVar9 = DAT_0ac8;
      bVar8 = DAT_0acc;
      if (bVar9 < bVar8) {
        bVar10 = DAT_0d80;
        sVar12 = (ushort)(byte)-(bVar9 - bVar8) * (ushort)bVar10;
        bVar9 = DAT_0abf;
        bVar8 = (byte)((ushort)sVar12 >> 8);
        bVar10 = (byte)sVar12;
        if ((bVar9 & 2) == 0) {
          bVar16 = DAT_0aca._1_1_;
          bVar9 = bVar8 - (bVar10 < bVar16);
          uVar13 = CONCAT11(bVar9,bVar10 - bVar16);
          if ((bVar10 < bVar16) <= bVar8) goto LAB_e1f4;
          cVar17 = -(bVar10 - bVar16);
          uVar13 = CONCAT11((~bVar9 + 1) - (cVar17 != '\0'),cVar17);
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 & 0xfd;
        }
        else {
          bVar9 = DAT_0aca._1_1_;
          uVar13 = CONCAT11(bVar8 + CARRY1(bVar10,bVar9),bVar10 + bVar9);
          if (CARRY1(bVar8,CARRY1(bVar10,bVar9))) {
            uVar13 = 0xffff;
          }
LAB_e1f4:
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 | 2;
        }
        DAT_0aca = uVar13;
      }
      else {
        bVar10 = DAT_0d80;
        sVar12 = (ushort)(byte)(bVar9 - bVar8) * (ushort)bVar10;
        bVar9 = DAT_0abf;
        bVar8 = (byte)((ushort)sVar12 >> 8);
        bVar10 = (byte)sVar12;
        if ((bVar9 & 2) == 0) {
          bVar9 = DAT_0aca._1_1_;
          uVar13 = CONCAT11(bVar8 + CARRY1(bVar10,bVar9),bVar10 + bVar9);
          if (CARRY1(bVar8,CARRY1(bVar10,bVar9))) {
            uVar13 = 0xffff;
          }
LAB_e22b:
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 & 0xfd;
        }
        else {
          bVar16 = DAT_0aca._1_1_;
          bVar9 = bVar8 - (bVar10 < bVar16);
          uVar13 = CONCAT11(bVar9,bVar10 - bVar16);
          if ((bVar10 < bVar16) <= bVar8) goto LAB_e22b;
          cVar17 = -(bVar10 - bVar16);
          uVar13 = CONCAT11((~bVar9 + 1) - (cVar17 != '\0'),cVar17);
          bVar9 = DAT_0abf;
          DAT_0abf = bVar9 | 2;
        }
        DAT_0aca = uVar13;
      }
      bVar8 = DAT_0acc;
      bVar9 = DAT_0abf;
      if ((bVar9 & 2) == 0) {
        bVar9 = DAT_0aca._0_1_;
        cVar17 = bVar8 + bVar9;
        if (CARRY1(bVar8,bVar9)) {
          cVar17 = -1;
        }
      }
      else {
        bVar9 = DAT_0aca._0_1_;
        cVar17 = bVar8 - bVar9;
        if (bVar8 < bVar9) {
          cVar17 = '\0';
        }
      }
      DAT_0acc = cVar17;
      cVar17 = DAT_0d87;
      if (cVar17 == '\t') {
        bVar9 = DAT_0acc;
        bVar8 = DAT_0d81;
        if (bVar9 < bVar8) {
          puVar14 = (undefined *)0x100;
        }
        else {
          bVar8 = DAT_0d82;
          if (bVar9 < bVar8) {
            puVar14 = &UNK_0201;
          }
          else {
            bVar8 = DAT_0d83;
            if (bVar9 < bVar8) {
              puVar14 = &UNK_0402;
            }
            else {
              bVar8 = DAT_0d84;
              if (bVar9 < bVar8) {
                puVar14 = (undefined *)0x803;
              }
              else {
                bVar8 = DAT_0d85;
                if (bVar8 <= bVar9) goto LAB_e28e;
                puVar14 = &UNK_1004;
              }
            }
          }
        }
      }
      else {
LAB_e28e:
        puVar14 = &UNK_2005;
      }
      DAT_0bcb = (char)((ushort)puVar14 >> 8);
      DAT_0bca = (char)puVar14;
      cVar17 = DAT_0d61;
      if ((((cVar17 != -0x80) && (cVar17 = DAT_0d87, cVar17 == '\t')) &&
          (bVar9 = DAT_08a0, (~bVar9 & 4) != 0)) && (bVar9 = DAT_08b2, (~bVar9 & 0x80) != 0)) {
        cVar17 = DAT_0d87;
        if (((cVar17 == '\t') && (bVar9 = DAT_0896._0_1_, (bVar9 & 0x10) == 0)) ||
           (bVar9 = DAT_0881, (~bVar9 & 0x10) == 0)) {
          DAT_0bcc = 0;
          DAT_0bcd = 0;
        }
        else {
          cVar17 = DAT_0bca;
          if (cVar17 == '\0') {
            bVar9 = DAT_08b6;
            if ((bVar9 & 2) != 0) {
              bVar9 = DAT_0bcc;
              bVar8 = DAT_0d88;
              if (bVar9 <= bVar8) goto LAB_e34d;
              bVar9 = DAT_08b1;
              if ((~bVar9 & 8) != 0) {
                bVar9 = DAT_08b1;
                DAT_08b1 = bVar9 | 8;
                bVar9 = DAT_0bd2;
                DAT_0bd2 = bVar9 | 0x20;
                bVar9 = DAT_08ba;
                if ((~bVar9 & 8) != 0) {
                  bVar9 = DAT_08ba;
                  DAT_08ba = bVar9 | 8;
                  bVar9 = DAT_0bd2;
                  DAT_0bd2 = bVar9 | 2;
                }
              }
              bVar9 = DAT_0889;
              DAT_0889 = bVar9 & 0xfd;
              DAT_0b92 = 0;
            }
            bVar9 = DAT_08b6;
            DAT_08b6 = bVar9 | 2;
          }
          else {
            bVar9 = DAT_08b6;
            if ((bVar9 & 2) == 0) {
              bVar9 = DAT_0bcd;
              bVar8 = DAT_0d8a;
              if ((bVar8 < bVar9) && (bVar9 = DAT_08b1, (bVar9 & 8) != 0)) {
                bVar9 = DAT_08b1;
                DAT_08b1 = bVar9 & 0xf7;
                bVar9 = DAT_0bd2;
                DAT_0bd2 = bVar9 | 0x20;
                bVar9 = DAT_08af;
                if (((~bVar9 & 8) != 0) && (bVar9 = DAT_08af, (~bVar9 & 4) != 0)) {
                  bVar9 = DAT_0889;
                  DAT_0889 = bVar9 | 2;
                  DAT_0b94 = 0;
                  uVar18 = DAT_0a83;
                  DAT_0b92 = uVar18;
                  DAT_0b95 = uVar18;
                }
              }
            }
            else {
              bVar9 = DAT_08b6;
              DAT_08b6 = bVar9 & 0xfd;
            }
          }
        }
      }
LAB_e34d:
      bVar9 = DAT_08b1;
      if ((bVar9 & 8) == 0) {
        uVar11 = DAT_0bcb;
        uVar18 = DAT_0bca;
      }
      else {
        uVar11 = 0x20;
        uVar18 = 5;
      }
      DAT_0899 = uVar11;
      DAT_0898 = uVar18;
    }
  }
  do {
    bVar9 = DAT_008b;
    if ((~bVar9 & 2) == 0) {
      uVar13 = DAT_0092;
      DAT_08cc = uVar13;
      bVar9 = DAT_088d;
      DAT_088d = bVar9 & 0xfd;
      goto LAB_e37e;
    }
    sVar12 = DAT_0044;
    sVar3 = DAT_08c8;
  } while (sVar12 - sVar3 < 0);
  bVar9 = DAT_088d;
  DAT_088d = bVar9 | 2;
LAB_e37e:
  bVar9 = DAT_088d;
  DAT_088d = bVar9 & 0xfe;
  FUN_f39d();
  bVar9 = DAT_088d;
  if ((~bVar9 & 2) != 0) {
    puVar20 = &DAT_0c42;
    puVar19 = &DAT_0c58;
    bVar9 = DAT_0bfe;
    if ((bVar9 & 0x80) != 0) {
      bVar9 = DAT_0c04;
      puVar20 = &DAT_0c42 + bVar9;
      bVar9 = DAT_0922;
      puVar19 = &DAT_0c58 + (bVar9 & 0xff1f);
    }
    uVar13 = DAT_08cc;
    *puVar20 = uVar13;
    *puVar19 = uVar13;
    DAT_0c40 = uVar13;
    DAT_08c2 = 0x40;
    DAT_08c3 = 0;
  }
  cVar17 = DAT_0d53;
  if (((cVar17 != -0x80) && (bVar9 = DAT_08a0, (~bVar9 & 4) != 0)) &&
     (bVar9 = DAT_08b2, (~bVar9 & 0x80) != 0)) {
    uVar13 = DAT_0c40;
    bVar9 = (byte)((ushort)uVar13 >> 8);
    if ((bVar9 < 0x1a) || (0xf5 < bVar9)) {
      bVar9 = DAT_08b5;
      if ((bVar9 & 0x40) == 0) {
        bVar9 = DAT_08b5;
        DAT_08b5 = bVar9 | 0x40;
        bVar9 = DAT_0bab;
        DAT_0bab = bVar9 | 0x20;
      }
      else {
        bVar9 = DAT_0b3e;
        bVar8 = DAT_0d89;
        if ((bVar8 < bVar9) && (bVar9 = DAT_08af, (~bVar9 & 0x20) != 0)) {
          bVar9 = DAT_08af;
          DAT_08af = bVar9 | 0x20;
          bVar9 = DAT_0bd2;
          DAT_0bd2 = bVar9 | 0x80;
          bVar9 = DAT_08b8;
          if ((~bVar9 & 0x20) != 0) {
            bVar9 = DAT_08b8;
            DAT_08b8 = bVar9 | 0x20;
            bVar9 = DAT_0bd2;
            DAT_0bd2 = bVar9 | 8;
          }
        }
      }
    }
    else {
      bVar9 = DAT_08b5;
      if ((bVar9 & 0x40) == 0) {
        bVar9 = DAT_0b4b;
        bVar8 = DAT_0d8a;
        if (bVar8 < bVar9) {
          bVar9 = DAT_08af;
          if ((bVar9 & 0x20) != 0) {
            bVar9 = DAT_08af;
            DAT_08af = bVar9 & 0xdf;
            bVar9 = DAT_0bd2;
            DAT_0bd2 = bVar9 | 0x80;
          }
          bVar9 = DAT_0bab;
          DAT_0bab = bVar9 & 0xdf;
        }
      }
      else {
        bVar9 = DAT_08b5;
        DAT_08b5 = bVar9 & 0xbf;
      }
    }
  }
  cVar17 = DAT_0c04;
  cVar6 = DAT_0d8b;
  if (cVar6 == -0x80) {
    if (cVar17 == '\x01') {
      uVar13 = DAT_0c9a;
      DAT_0c9c = uVar13;
      uVar13 = DAT_0c44;
      DAT_0c9a = uVar13;
      goto LAB_e461;
    }
  }
  else if (cVar17 == '\0') {
    uVar13 = DAT_0c9a;
    DAT_0c9c = uVar13;
    uVar13 = DAT_0c42;
    DAT_0c9a = uVar13;
LAB_e461:
    bVar9 = DAT_08af;
    if (((~bVar9 & 0x20) == 0) || (bVar9 = DAT_08af, (bVar9 & 0x10) != 0)) {
      uVar13 = DAT_0da8;
      DAT_0c8a = uVar13;
    }
    else {
      bVar9 = DAT_0ca8;
      if ((~bVar9 & 1) == 0) {
        cVar17 = DAT_0d8d;
        if (cVar17 == '\x01') {
LAB_e491:
          bVar9 = DAT_0d94;
          DAT_0c8a = (&DAT_0c58)[bVar9];
          DAT_0c94 = (&DAT_0c58)[bVar9];
        }
        else if (cVar17 == '\x02') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar8 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar8];
          bVar9 = DAT_0d8e;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar8 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d8f;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 2;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 2),uVar18) / 2);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar17 == '\x03') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar8 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar8];
          bVar9 = DAT_0d8e;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar8 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d8f;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d90;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 3;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 3),uVar18) / 3);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar17 == '\x04') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar8 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar8];
          bVar9 = DAT_0d8e;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar8 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d8f;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d90;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d91;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 4;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 4),uVar18) / 4);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar17 == '\x05') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar8 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar8];
          bVar9 = DAT_0d8e;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar8 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d8f;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d90;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d91;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d98;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d92;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 5;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 5),uVar18) / 5);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else {
          if (cVar17 != '\x06') goto LAB_e491;
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar8 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar8];
          bVar9 = DAT_0d8e;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar8 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d8f;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d90;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d91;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d98;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d92;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar8 = DAT_0d99;
          uVar15 = (&DAT_0c58)[bVar8];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar9 = DAT_0d93;
          iVar2 = (uint)bVar9 * (uint)(ushort)(&DAT_0c58)[bVar8];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 6;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 6),uVar18) / 6);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
      }
      else {
        uVar13 = DAT_0c88;
        DAT_0c8a = uVar13;
        DAT_0c94 = uVar13;
      }
    }
    uVar13 = DAT_08f2;
    FUN_f3b7();
    DAT_0c93 = extraout_A;
    bVar9 = DAT_0c93;
    puVar7 = (undefined *)DAT_0c8a;
    puVar14 = puVar7 + -0x1eb7;
    if (puVar7 < &UNK_1eb7) {
      iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar14 >> 8) + 1) - ((char)-(char)puVar14 != '\0'),
                             -(char)puVar14) * (uint)bVar9 * 2;
      uVar15 = (ushort)iVar2;
      bVar9 = (byte)((uint)iVar2 >> 0x10);
      cVar17 = bVar9 + (0xff7f < uVar15);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar9,0xff7f < uVar15),cVar17) < 0x100) {
        DAT_0e04._0_1_ = cVar17;
        RAM0e05 = uVar15 + 0x80;
        puVar7 = (undefined *)DAT_0e04;
        puVar14 = &UNK_1eb7 + -(short)puVar7;
        if (puVar7 < &UNK_1eb8) goto LAB_ea7c;
      }
      puVar14 = (undefined *)0x0;
    }
    else {
      iVar2 = ZEXT24(puVar14) * (uint)bVar9 * 2;
      uVar15 = (ushort)iVar2;
      bVar9 = (byte)((uint)iVar2 >> 0x10);
      cVar17 = bVar9 + (0xff7f < uVar15);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar9,0xff7f < uVar15),cVar17) < 0x100) {
        DAT_0e04._0_1_ = cVar17;
        RAM0e05 = uVar15 + 0x80;
        uVar15 = DAT_0e04;
        puVar14 = &UNK_1eb7 + uVar15;
        if (uVar15 < 0xe149) goto LAB_ea7c;
      }
      puVar14 = (undefined *)0xffff;
    }
LAB_ea7c:
    DAT_0c8c = puVar14;
    bVar9 = DAT_0ca8;
    if ((~bVar9 & 1) != 0) {
      bVar9 = DAT_0ca8;
      if ((bVar9 & 2) == 0) {
LAB_eaa2:
        bVar9 = DAT_0ca8;
        if ((~bVar9 & 2) != 0) {
          uVar15 = DAT_0c9a;
          uVar4 = DAT_0c9c;
          if ((uVar4 < uVar15) && (uVar5 = DAT_0dac, uVar5 <= uVar15 - uVar4)) {
            bVar9 = DAT_0ca8;
            DAT_0ca8 = bVar9 | 2;
            cVar17 = DAT_0c03;
            DAT_0922 = cVar17 + '\f';
            goto LAB_eac0;
          }
        }
        DAT_0ca9 = 0;
      }
      else {
        uVar4 = DAT_0c9c;
        uVar15 = DAT_0c9a;
        if ((uVar4 <= uVar15) || (uVar5 = DAT_0dac, uVar4 - uVar15 < uVar5)) goto LAB_eaa2;
        bVar9 = DAT_0ca8;
        DAT_0ca8 = bVar9 & 0xfd;
        uVar18 = DAT_0c03;
        DAT_0922 = uVar18;
LAB_eac0:
        bVar9 = DAT_0ca9;
        bVar9 = (bVar9 + 1) - (0xfe < bVar9);
        DAT_0ca9 = bVar9;
        bVar8 = DAT_0d9a;
        if (bVar8 <= bVar9) {
          bVar9 = DAT_0ca8;
          DAT_0ca8 = bVar9 | 1;
        }
      }
    }
  }
  bVar9 = DAT_0bfe;
  if ((bVar9 & 0x80) != 0) {
    uVar15 = DAT_0c9a;
    uVar4 = DAT_0c9c;
    if (uVar15 < uVar4) {
      cVar17 = DAT_0c04;
      cVar6 = DAT_0d8c;
      if (cVar17 == cVar6) {
        uVar13 = DAT_0c40;
        DAT_0c88 = uVar13;
      }
    }
  }
  bVar9 = DAT_0889;
  if ((((~bVar9 & 4) != 0) && (bVar9 = DAT_0885, (~bVar9 & 0x80) != 0)) &&
     (bVar9 = DAT_0889, (bVar9 & 0x10) != 0)) {
    bVar9 = DAT_0889;
    DAT_0889 = bVar9 | 8;
    bVar9 = DAT_0889;
    DAT_0889 = bVar9 | 4;
  }
  bVar9 = DAT_0a53;
  puVar1 = (ushort *)(&DAT_0a54 + (ushort)bVar9 * 2);
  bVar9 = DAT_0a52;
  bVar9 = (bVar9 + 1) - (0xfe < bVar9);
  DAT_0a52 = bVar9;
  if (bVar9 < 0x18) {
    if (1 < bVar9) {
      uVar18 = DAT_0a4f._0_1_;
      DAT_0df6 = uVar18;
      uVar13 = RAM0a50;
      DAT_0df7 = uVar13;
      goto LAB_eb49;
    }
  }
  else {
    uVar15 = RAM0a50;
    DAT_0df7 = uVar15 - *puVar1;
    cVar17 = DAT_0a4f._0_1_;
    DAT_0df6 = cVar17 - (uVar15 < *puVar1);
LAB_eb49:
    cVar17 = DAT_0c07;
    if (cVar17 == '\0') {
      uVar15 = DAT_0c08;
    }
    else {
      uVar15 = 0xffff;
    }
    *puVar1 = uVar15;
    uVar15 = DAT_0df7;
    sVar12 = uVar15 + *puVar1;
    RAM0a50 = sVar12;
    DAT_0df7 = sVar12;
    cVar17 = DAT_0df6;
    cVar17 = cVar17 + CARRY2(uVar15,*puVar1);
    DAT_0a4f._0_1_ = cVar17;
    DAT_0df6 = cVar17;
    bVar9 = DAT_0a52;
    if (bVar9 < 0x17) {
      cVar17 = DAT_0a52;
      bVar9 = cVar17 - 1;
      DAT_0df9 = bVar9;
      uVar15 = DAT_0a4f;
      RAM0df6 = uVar15 / bVar9;
      uVar18 = DAT_0a51;
      bVar8 = DAT_0df9;
      DAT_0df7._1_1_ = (char)(CONCAT11((char)(uVar15 % (ushort)bVar9),uVar18) / (ushort)bVar8);
      uVar15 = DAT_0df7;
      DAT_0df7 = (short)((uint)uVar15 * 0x16);
      DAT_0df6 = (char)((uint)uVar15 * 0x16 >> 0x10);
    }
    uVar18 = DAT_0df6;
    DAT_0a4b._0_1_ = uVar18;
    uVar13 = DAT_0df7;
    RAM0a4c = uVar13;
    cVar17 = DAT_0a53;
    bVar9 = cVar17 + 1;
    if (0x15 < bVar9) {
      bVar9 = 0;
    }
    DAT_0a53 = bVar9;
  }
  cVar17 = DAT_0dd5;
  if ((cVar17 != -0x80) && (bVar9 = DAT_0d06, (~bVar9 & 0x80) != 0)) {
    bVar9 = DAT_0a2e._0_1_;
    bVar8 = DAT_0dd8;
    if (bVar9 < bVar8) {
      bVar8 = DAT_0dd7;
      if (bVar9 < bVar8) {
        bVar9 = DAT_0d0a;
        bVar8 = DAT_0dd6;
        if ((bVar9 < bVar8) && (bVar9 = DAT_0d08, (~bVar9 & 8) != 0)) {
          bVar9 = DAT_0d08;
          DAT_0d08 = bVar9 & 0xfe;
          DAT_0afc = 0;
          bVar9 = DAT_0d08;
          DAT_0d08 = bVar9 | 8;
        }
      }
    }
    else {
      bVar9 = DAT_0d08;
      DAT_0d08 = bVar9 | 1;
    }
  }
  cVar17 = DAT_0d87;
  if (cVar17 != '\t') {
    cVar17 = DAT_0c04;
    if (cVar17 != '\0') goto LAB_ec8f;
    bVar9 = DAT_0ada;
    if (((~bVar9 & 0x10) == 0) || (bVar9 = DAT_0ada, (bVar9 & 4) != 0)) {
      bVar9 = DAT_0ae1;
      bVar9 = (bVar9 + 1) - (0xfe < bVar9);
      DAT_0ae1 = bVar9;
      bVar8 = DAT_0ddb;
      if (bVar8 <= bVar9) {
        DAT_0ae1 = 0;
        bVar9 = DAT_0ada;
        if ((bVar9 & 0x10) == 0) {
          uVar15 = DAT_0ad6;
          uVar4 = DAT_0db8;
          sVar12 = uVar15 - uVar4;
          if (uVar15 < uVar4) {
            sVar12 = 0;
          }
          DAT_0ad6 = sVar12;
          bVar9 = DAT_0ad9;
          bVar8 = DAT_0dda;
          cVar17 = bVar9 - bVar8;
          if (bVar9 < bVar8) {
            cVar17 = '\0';
          }
          DAT_0ad9 = cVar17;
        }
        else {
          uVar4 = DAT_0ad6;
          uVar5 = DAT_0db8;
          uVar15 = uVar4 + uVar5;
          if ((CARRY2(uVar4,uVar5)) || (0x200 < uVar15)) {
            uVar15 = 0x200;
          }
          DAT_0ad6 = uVar15;
          bVar8 = DAT_0ad9;
          bVar10 = DAT_0dda;
          bVar9 = bVar8 + bVar10;
          if ((CARRY1(bVar8,bVar10)) || (bVar8 = DAT_0ddc, bVar8 < bVar9)) {
            bVar9 = DAT_0ddc;
          }
          DAT_0ad9 = bVar9;
        }
      }
    }
    bVar9 = DAT_0ada;
    if ((bVar9 & 0x20) != 0) {
      uVar13 = DAT_0ad6;
      DAT_0ad4 = uVar13;
      uVar18 = DAT_0ad9;
      DAT_0ad8 = uVar18;
      goto LAB_ec8f;
    }
  }
  DAT_0ad4 = 0;
  DAT_0ad8 = 0;
LAB_ec8f:
  bVar9 = DAT_08be;
  DAT_08be = bVar9 & 0xdf;
  bVar9 = DAT_08be;
  DAT_08be = bVar9 & 0x7f;
  return;
}


/* Entry dc39 */

void candidate_unreferenced_dc39(void)

{
  ushort *puVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  undefined *puVar5;
  char cVar6;
  ushort uVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 extraout_A;
  byte bVar16;
  char cVar17;
  undefined1 uVar18;
  undefined2 uVar12;
  undefined *puVar13;
  ushort uVar14;
  short sVar15;
  undefined2 *puVar19;
  undefined2 *puVar20;
  
  DAT_0b60 = 0;
  bVar11 = DAT_0922;
  if (0xbf < bVar11) {
    bVar11 = DAT_0880;
    DAT_0880 = bVar11 | 0x80;
    bVar11 = DAT_088c;
    DAT_088c = bVar11 | 0x20;
    bVar11 = DAT_088c;
    DAT_088c = bVar11 | 0x10;
  }
  DAT_0922 = 0;
  bVar11 = DAT_0922;
  DAT_0923 = bVar11 & 0x1f;
  uVar18 = DAT_0085;
  DAT_08c4 = uVar18;
  bVar11 = DAT_088d;
  DAT_088d = bVar11 | 1;
  DAT_0085 = 1;
  sVar15 = DAT_0044;
  DAT_08c8 = sVar15 + 0x4b;
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) == 0) {
    bVar9 = DAT_0c04;
    bVar11 = DAT_0921;
    if (0x33 < bVar11) {
      DAT_0a2e = 0xffff;
    }
    bVar8 = DAT_0a2e._0_1_;
    bVar11 = DAT_0880;
    if ((~bVar11 & 1) == 0) {
      bVar11 = DAT_0d73;
      if (bVar11 <= bVar8) {
        bVar11 = DAT_0b5d;
        bVar8 = DAT_0d74;
        if (bVar11 < bVar8) {
          bVar11 = DAT_0885;
          DAT_0885 = bVar11 | 0x40;
          goto LAB_dcfa;
        }
      }
      bVar11 = DAT_0885;
      DAT_0885 = bVar11 & 0xbf;
      bVar11 = DAT_0884;
      DAT_0884 = bVar11 & 0xfb;
    }
    else {
      bVar11 = DAT_0880;
      if (((bVar11 & 2) != 0) && ((byte)(&DAT_0d68)[bVar9] <= bVar8)) {
        bVar11 = DAT_0884;
        DAT_0884 = bVar11 | 4;
        DAT_0aff = 0;
        FUN_721f();
        bVar11 = DAT_088d;
        if ((bVar11 & 1) != 0) {
          bVar11 = DAT_088d;
          DAT_088d = bVar11 & 0xfe;
          FUN_f39d();
        }
        goto LAB_dc06;
      }
      bVar11 = DAT_0b5d;
      bVar8 = DAT_0d74;
      if (bVar8 <= bVar11) {
        bVar11 = DAT_0885;
        DAT_0885 = bVar11 & 0xbf;
      }
    }
LAB_dcfa:
    bVar11 = DAT_0bf8;
    if (((((~bVar11 & 0x80) != 0) && (bVar11 = DAT_0bf8, (bVar11 & 0x40) != 0)) &&
        (bVar11 = DAT_0a2e._0_1_, (byte)(&DAT_0d68)[bVar9] <= bVar11)) &&
       (bVar11 = DAT_0bf8, (~bVar11 & 0x20) != 0)) {
      bVar11 = DAT_0bf8;
      DAT_0bf8 = bVar11 | 0x80;
      DAT_0bf9 = 0;
      FUN_721f();
      bVar11 = DAT_088d;
      if ((bVar11 & 1) != 0) {
        bVar11 = DAT_088d;
        DAT_088d = bVar11 & 0xfe;
        FUN_f39d();
      }
LAB_dc06:
      DAT_0b00 = 0;
      DAT_004e = 2;
      bVar11 = DAT_08be;
      DAT_08be = bVar11 & 0xdf;
      bVar11 = DAT_08be;
      DAT_08be = bVar11 & 0xbf;
      bVar11 = DAT_08be;
      DAT_08be = bVar11 & 0x7f;
      return;
    }
    bVar11 = DAT_0882;
    DAT_0882 = bVar11 | 0x80;
  }
  DAT_0b00 = 0;
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) == 0) {
    cVar17 = DAT_0d5e;
    if (((cVar17 != -0x80) && (bVar11 = DAT_08a0, (~bVar11 & 4) != 0)) &&
       (bVar11 = DAT_08b2, (~bVar11 & 0x80) != 0)) {
      bVar11 = DAT_0880;
      if ((~bVar11 & 1) == 0) {
LAB_dd63:
        cVar17 = DAT_0d5e;
        if (((cVar17 != -0x80) && (bVar11 = DAT_0880, (~bVar11 & 0x80) != 0)) &&
           ((((bVar11 = DAT_0d08, (~bVar11 & 1) != 0 &&
              (((bVar11 = DAT_0884, (~bVar11 & 2) != 0 && (bVar11 = DAT_0884, (~bVar11 & 4) != 0))
               && (bVar11 = DAT_088c, (~bVar11 & 0x80) != 0)))) &&
             ((bVar11 = DAT_0885, (~bVar11 & 0x40) != 0 &&
              (bVar11 = DAT_0bf8, (~bVar11 & 0x80) != 0)))) &&
            (bVar11 = DAT_089b, (~bVar11 & 0x80) != 0)))) {
          cVar17 = DAT_0c04;
          bVar11 = DAT_088c;
          if ((((~bVar11 & 2) == 0) || (bVar11 = DAT_089a, (~bVar11 & 2) == 0)) || (cVar17 != '\b'))
          goto LAB_de0b;
          bVar11 = DAT_0a92;
          if ((bVar11 & 8) != 0) {
            bVar11 = DAT_004e;
            if ((bVar11 & 0x20) == 0) {
              DAT_0b50 = 0;
              bVar11 = DAT_0b46;
              bVar11 = (bVar11 + 1) - (0xfe < bVar11);
              DAT_0b46 = bVar11;
              bVar9 = DAT_0d78;
              if ((bVar9 <= bVar11) && (bVar11 = DAT_08b1, (~bVar11 & 0x80) != 0)) {
                bVar11 = DAT_08b1;
                DAT_08b1 = bVar11 | 0x80;
                bVar11 = DAT_0bd2;
                DAT_0bd2 = bVar11 | 0x20;
                bVar11 = DAT_08ba;
                if ((~bVar11 & 0x80) != 0) {
                  bVar11 = DAT_08ba;
                  DAT_08ba = bVar11 | 0x80;
                  bVar11 = DAT_0bd2;
                  DAT_0bd2 = bVar11 | 2;
                }
              }
            }
            else {
              DAT_0b46 = 0;
              bVar11 = DAT_0b50;
              bVar11 = (bVar11 + 1) - (0xfe < bVar11);
              DAT_0b50 = bVar11;
              bVar9 = DAT_0d76;
              if ((bVar9 <= bVar11) && (bVar11 = DAT_08b1, (bVar11 & 0x80) != 0)) {
                bVar11 = DAT_08b1;
                DAT_08b1 = bVar11 & 0x7f;
                bVar11 = DAT_0bd2;
                DAT_0bd2 = bVar11 | 0x20;
              }
            }
          }
        }
      }
      else {
        bVar11 = DAT_0b6e;
        bVar9 = DAT_0d75;
        if (bVar9 <= bVar11) {
          bVar11 = DAT_0bce;
          bVar9 = DAT_0d77;
          if (bVar9 <= bVar11) goto LAB_dd63;
        }
      }
    }
    uVar18 = DAT_0c04;
    DAT_004e = 0x20;
  }
LAB_de0b:
  bVar11 = DAT_0bfe;
  if (((~bVar11 & 0x80) == 0) && (cVar17 = DAT_0c04, cVar17 == '\n')) {
    bVar11 = DAT_0a92;
    DAT_0a92 = bVar11 & 0x77;
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_0a2e._0_1_;
    bVar9 = DAT_0d79;
    if (bVar11 < bVar9) {
      bVar9 = DAT_0d7a;
      if (bVar11 < bVar9) {
        uVar18 = DAT_0881;
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0xef;
      }
    }
    else {
      bVar11 = DAT_0881;
      DAT_0881 = bVar11 | 0x10;
      uVar18 = DAT_0d7b;
      DAT_0a1a = uVar18;
    }
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_0a2e._0_1_;
    bVar9 = DAT_0d7d;
    if (((bVar11 < bVar9) || (bVar9 = DAT_0880, (~bVar9 & 1) != 0)) &&
       (bVar9 = DAT_0d7c, bVar11 < bVar9)) {
      cVar17 = DAT_0c04;
      if (cVar17 == '\0') {
        bVar9 = DAT_0880;
        DAT_0880 = bVar9 & 0xbf;
      }
      bVar9 = DAT_0d7c;
      if (bVar9 <= bVar11) goto LAB_de81;
      if (cVar17 == '\0') {
        bVar11 = DAT_0880;
        DAT_0880 = bVar11 & 0xfb;
      }
    }
    else {
      bVar11 = DAT_0880;
      DAT_0880 = bVar11 | 0x40;
LAB_de81:
      bVar11 = DAT_0880;
      DAT_0880 = bVar11 | 4;
      DAT_0a86 = 0x80;
    }
    bVar11 = DAT_0881;
    DAT_0881 = bVar11 & 0xdf;
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) == 0) {
    FUN_ed29();
    FUN_ed6d();
  }
  bVar11 = DAT_0bfe;
  if (((~bVar11 & 0x80) == 0) && (cVar17 = DAT_0c04, cVar17 == '\0')) {
    bVar11 = DAT_0887;
    DAT_0887 = bVar11 | 2;
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) == 0) {
    cVar17 = DAT_0923;
    if (((cVar17 == '\0') || (cVar17 == '\x06')) || ((cVar17 == '\f' || (cVar17 == '\x12')))) {
      bVar11 = DAT_0881;
      DAT_0881 = bVar11 | 4;
      bVar11 = DAT_0887;
      DAT_0887 = bVar11 | 1;
    }
    bVar11 = DAT_0ca8;
    if (((bVar11 & 1) != 0) && (cVar6 = DAT_0da6, cVar17 == (char)(cVar6 + '\x04'))) {
      bVar11 = DAT_0881;
      DAT_0881 = bVar11 | 2;
    }
    bVar11 = DAT_088b;
    if ((bVar11 & 0x80) == 0) {
      bVar9 = DAT_0c04;
      bVar11 = DAT_0d7e;
      bVar11 = bVar11 & 0x1f;
      if (0xb < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_0a17;
        DAT_0a17 = bVar11 & 0xf7;
        bVar11 = DAT_0a19;
        DAT_0a19 = bVar11 & 0xf7;
        bVar11 = DAT_088b;
        DAT_088b = bVar11 | 0x40;
        uVar18 = DAT_0a26._0_1_;
        DAT_0a22._0_1_ = uVar18;
        uVar18 = DAT_0a26._1_1_;
        DAT_0a22._1_1_ = uVar18;
        uVar18 = DAT_0a1e;
        DAT_0a1c = uVar18;
      }
      bVar11 = DAT_0cab;
      bVar11 = bVar11 & 0x1f;
      if (0xb < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_0a17;
        DAT_0a17 = bVar11 & 0xfd;
        bVar11 = DAT_0a19;
        DAT_0a19 = bVar11 & 0xfd;
        uVar18 = DAT_0a28._0_1_;
        DAT_0a24._0_1_ = uVar18;
        uVar18 = DAT_0a28._1_1_;
        DAT_0a24._1_1_ = uVar18;
        uVar18 = DAT_0a1f;
        DAT_0a1d = uVar18;
      }
    }
    else {
      bVar11 = DAT_0923;
      bVar9 = DAT_0d7e;
      if (bVar11 == (bVar9 & 0x1f)) {
        bVar9 = DAT_0a17;
        DAT_0a17 = bVar9 & 0xf7;
        bVar9 = DAT_0a19;
        DAT_0a19 = bVar9 & 0xf7;
        bVar9 = DAT_088b;
        DAT_088b = bVar9 | 0x40;
        uVar18 = DAT_0a26._0_1_;
        DAT_0a22._0_1_ = uVar18;
        uVar18 = DAT_0a26._1_1_;
        DAT_0a22._1_1_ = uVar18;
        uVar18 = DAT_0a1e;
        DAT_0a1c = uVar18;
      }
      uVar18 = DAT_0cab;
      uVar14 = CONCAT11(bVar11,uVar18) & 0xff1f;
      if ((char)(uVar14 >> 8) == (char)uVar14) {
        bVar11 = DAT_0a17;
        DAT_0a17 = bVar11 & 0xfd;
        bVar11 = DAT_0a19;
        DAT_0a19 = bVar11 & 0xfd;
        uVar18 = DAT_0a28._0_1_;
        DAT_0a24._0_1_ = uVar18;
        uVar18 = DAT_0a28._1_1_;
        DAT_0a24._1_1_ = uVar18;
        uVar18 = DAT_0a1f;
        DAT_0a1d = uVar18;
      }
    }
    FUN_f49f();
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_0ca8;
    if ((~bVar11 & 1) == 0) {
      bVar11 = DAT_0923;
      bVar9 = DAT_0d7e;
      if (bVar11 == (bVar9 & 0x1f)) {
        bVar9 = DAT_088b;
        if ((~bVar9 & 0x80) == 0) {
          cVar17 = DAT_0a20;
          DAT_0a20 = cVar17 + -1 + (cVar17 == '\0');
        }
        else {
          DAT_0a20 = 0;
        }
      }
      bVar9 = DAT_0cab;
      if (bVar11 == (bVar9 & 0x1f)) {
        bVar9 = DAT_088b;
        if ((~bVar9 & 0x80) == 0) {
          cVar17 = DAT_0a21;
          DAT_0a21 = cVar17 + -1 + (cVar17 == '\0');
        }
        else {
          DAT_0a21 = 0;
        }
      }
      uVar18 = DAT_0a1c;
      uVar14 = CONCAT11(bVar11,uVar18) & 0xff1f;
      if (((char)(uVar14 >> 8) == (char)uVar14) && (bVar11 = DAT_0a19, (bVar11 & 8) != 0)) {
        FUN_ec98();
      }
      uVar18 = DAT_0923;
      uVar10 = DAT_0a1d;
      uVar14 = CONCAT11(uVar18,uVar10) & 0xff1f;
      if (((char)(uVar14 >> 8) == (char)uVar14) && (bVar11 = DAT_0a19, (bVar11 & 2) != 0)) {
        FUN_ed11();
      }
      uVar18 = DAT_0923;
      uVar10 = DAT_0d7e;
      uVar14 = CONCAT11(uVar18,uVar10) & 0xff1f;
      cVar17 = (char)(uVar14 >> 8);
      if (cVar17 == (char)uVar14) {
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0x7f;
      }
      uVar18 = DAT_0cab;
      uVar14 = CONCAT11(cVar17,uVar18) & 0xff1f;
      if ((char)(uVar14 >> 8) == (char)uVar14) {
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0xbf;
      }
    }
    else {
      bVar9 = DAT_0c04;
      bVar11 = DAT_0d7e;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_088b;
        if ((~bVar11 & 0x80) == 0) {
          cVar17 = DAT_0a20;
          DAT_0a20 = cVar17 + -1 + (cVar17 == '\0');
        }
        else {
          DAT_0a20 = 0;
        }
      }
      bVar11 = DAT_0cab;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_088b;
        if ((~bVar11 & 0x80) == 0) {
          cVar17 = DAT_0a21;
          DAT_0a21 = cVar17 + -1 + (cVar17 == '\0');
        }
        else {
          DAT_0a21 = 0;
        }
      }
      bVar11 = DAT_0a1c;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if ((bVar9 == bVar11) && (bVar11 = DAT_0a19, (bVar11 & 8) != 0)) {
        FUN_ec98();
      }
      bVar9 = DAT_0c04;
      bVar11 = DAT_0a1d;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if ((bVar9 == bVar11) && (bVar11 = DAT_0a19, (bVar11 & 2) != 0)) {
        FUN_ed11();
      }
      bVar9 = DAT_0c04;
      bVar11 = DAT_0d7e;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0x7f;
      }
      bVar11 = DAT_0cab;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar9 == bVar11) {
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0xbf;
      }
    }
  }
  bVar11 = DAT_0bfe;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_0922;
    if (((bVar11 & 0x1f) == 0) || ((bVar11 & 0x1f) == 0xc)) {
      uVar12 = DAT_0ac2;
      DAT_0ac4 = uVar12;
      sVar15 = DAT_0ab0;
      DAT_0ac2 = sVar15;
      sVar3 = DAT_0ac4;
      sVar15 = sVar15 - sVar3;
      bVar11 = DAT_0abf;
      if ((~bVar11 & 4) != 0) {
        sVar15 = 0;
      }
      if ((char)((ushort)sVar15 >> 8) != '\0') {
        sVar15 = 0xff;
      }
      DAT_0ac0 = (char)sVar15;
      bVar11 = DAT_0abf;
      DAT_0abf = bVar11 | 4;
      bVar11 = DAT_0ac0;
      bVar8 = DAT_0d7f;
      bVar9 = DAT_0ac8;
      bVar16 = (byte)((ushort)bVar11 * (ushort)bVar8);
      bVar8 = (byte)((ushort)bVar11 * (ushort)bVar8 >> 8);
      bVar11 = bVar8 - (bVar16 < bVar9);
      if (bVar8 < (bVar16 < bVar9)) {
        cVar17 = -(bVar16 - bVar9);
        bVar9 = DAT_0d80;
        iVar2 = (uint)bVar9 * (uint)CONCAT11((~bVar11 + 1) - (cVar17 != '\0'),cVar17);
        uVar12 = (undefined2)iVar2;
        if ((short)((uint)iVar2 >> 0x10) != 0) {
          uVar12 = 0xffff;
        }
        bVar11 = DAT_0abf;
        bVar9 = (byte)((ushort)uVar12 >> 8);
        bVar8 = (byte)uVar12;
        if ((bVar11 & 1) == 0) {
          bVar16 = DAT_0ac6._1_1_;
          bVar11 = bVar9 - (bVar8 < bVar16);
          uVar12 = CONCAT11(bVar11,bVar8 - bVar16);
          if ((bVar8 < bVar16) <= bVar9) goto LAB_e16b;
          cVar17 = -(bVar8 - bVar16);
          uVar12 = CONCAT11((~bVar11 + 1) - (cVar17 != '\0'),cVar17);
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 & 0xfe;
        }
        else {
          bVar11 = DAT_0ac6._1_1_;
          uVar12 = CONCAT11(bVar9 + CARRY1(bVar8,bVar11),bVar8 + bVar11);
          if (CARRY1(bVar9,CARRY1(bVar8,bVar11))) {
            uVar12 = 0xffff;
          }
LAB_e16b:
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 | 1;
        }
        DAT_0ac6 = uVar12;
      }
      else {
        bVar8 = DAT_0d80;
        iVar2 = (uint)bVar8 * (uint)CONCAT11(bVar11,bVar16 - bVar9);
        uVar12 = (undefined2)iVar2;
        if ((short)((uint)iVar2 >> 0x10) != 0) {
          uVar12 = 0xffff;
        }
        bVar11 = DAT_0abf;
        bVar9 = (byte)((ushort)uVar12 >> 8);
        bVar8 = (byte)uVar12;
        if ((bVar11 & 1) == 0) {
          bVar11 = DAT_0ac6._1_1_;
          uVar12 = CONCAT11(bVar9 + CARRY1(bVar8,bVar11),bVar8 + bVar11);
          if (CARRY1(bVar9,CARRY1(bVar8,bVar11))) {
            uVar12 = 0xffff;
          }
LAB_e1ad:
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 & 0xfe;
        }
        else {
          bVar16 = DAT_0ac6._1_1_;
          bVar11 = bVar9 - (bVar8 < bVar16);
          uVar12 = CONCAT11(bVar11,bVar8 - bVar16);
          if ((bVar8 < bVar16) <= bVar9) goto LAB_e1ad;
          cVar17 = -(bVar8 - bVar16);
          uVar12 = CONCAT11((~bVar11 + 1) - (cVar17 != '\0'),cVar17);
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 | 1;
        }
        DAT_0ac6 = uVar12;
      }
      bVar9 = DAT_0ac8;
      bVar11 = DAT_0abf;
      if ((bVar11 & 1) == 0) {
        bVar11 = DAT_0ac6._0_1_;
        cVar17 = bVar9 + bVar11;
        if (CARRY1(bVar9,bVar11)) {
          cVar17 = -1;
        }
      }
      else {
        bVar11 = DAT_0ac6._0_1_;
        cVar17 = bVar9 - bVar11;
        if (bVar9 < bVar11) {
          cVar17 = '\0';
        }
      }
      DAT_0ac8 = cVar17;
      bVar11 = DAT_0ac8;
      bVar9 = DAT_0acc;
      if (bVar11 < bVar9) {
        bVar8 = DAT_0d80;
        sVar15 = (ushort)(byte)-(bVar11 - bVar9) * (ushort)bVar8;
        bVar11 = DAT_0abf;
        bVar9 = (byte)((ushort)sVar15 >> 8);
        bVar8 = (byte)sVar15;
        if ((bVar11 & 2) == 0) {
          bVar16 = DAT_0aca._1_1_;
          bVar11 = bVar9 - (bVar8 < bVar16);
          uVar12 = CONCAT11(bVar11,bVar8 - bVar16);
          if ((bVar8 < bVar16) <= bVar9) goto LAB_e1f4;
          cVar17 = -(bVar8 - bVar16);
          uVar12 = CONCAT11((~bVar11 + 1) - (cVar17 != '\0'),cVar17);
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 & 0xfd;
        }
        else {
          bVar11 = DAT_0aca._1_1_;
          uVar12 = CONCAT11(bVar9 + CARRY1(bVar8,bVar11),bVar8 + bVar11);
          if (CARRY1(bVar9,CARRY1(bVar8,bVar11))) {
            uVar12 = 0xffff;
          }
LAB_e1f4:
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 | 2;
        }
        DAT_0aca = uVar12;
      }
      else {
        bVar8 = DAT_0d80;
        sVar15 = (ushort)(byte)(bVar11 - bVar9) * (ushort)bVar8;
        bVar11 = DAT_0abf;
        bVar9 = (byte)((ushort)sVar15 >> 8);
        bVar8 = (byte)sVar15;
        if ((bVar11 & 2) == 0) {
          bVar11 = DAT_0aca._1_1_;
          uVar12 = CONCAT11(bVar9 + CARRY1(bVar8,bVar11),bVar8 + bVar11);
          if (CARRY1(bVar9,CARRY1(bVar8,bVar11))) {
            uVar12 = 0xffff;
          }
LAB_e22b:
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 & 0xfd;
        }
        else {
          bVar16 = DAT_0aca._1_1_;
          bVar11 = bVar9 - (bVar8 < bVar16);
          uVar12 = CONCAT11(bVar11,bVar8 - bVar16);
          if ((bVar8 < bVar16) <= bVar9) goto LAB_e22b;
          cVar17 = -(bVar8 - bVar16);
          uVar12 = CONCAT11((~bVar11 + 1) - (cVar17 != '\0'),cVar17);
          bVar11 = DAT_0abf;
          DAT_0abf = bVar11 | 2;
        }
        DAT_0aca = uVar12;
      }
      bVar9 = DAT_0acc;
      bVar11 = DAT_0abf;
      if ((bVar11 & 2) == 0) {
        bVar11 = DAT_0aca._0_1_;
        cVar17 = bVar9 + bVar11;
        if (CARRY1(bVar9,bVar11)) {
          cVar17 = -1;
        }
      }
      else {
        bVar11 = DAT_0aca._0_1_;
        cVar17 = bVar9 - bVar11;
        if (bVar9 < bVar11) {
          cVar17 = '\0';
        }
      }
      DAT_0acc = cVar17;
      cVar17 = DAT_0d87;
      if (cVar17 == '\t') {
        bVar11 = DAT_0acc;
        bVar9 = DAT_0d81;
        if (bVar11 < bVar9) {
          puVar13 = (undefined *)0x100;
        }
        else {
          bVar9 = DAT_0d82;
          if (bVar11 < bVar9) {
            puVar13 = &UNK_0201;
          }
          else {
            bVar9 = DAT_0d83;
            if (bVar11 < bVar9) {
              puVar13 = &UNK_0402;
            }
            else {
              bVar9 = DAT_0d84;
              if (bVar11 < bVar9) {
                puVar13 = (undefined *)0x803;
              }
              else {
                bVar9 = DAT_0d85;
                if (bVar9 <= bVar11) goto LAB_e28e;
                puVar13 = &UNK_1004;
              }
            }
          }
        }
      }
      else {
LAB_e28e:
        puVar13 = &UNK_2005;
      }
      DAT_0bcb = (char)((ushort)puVar13 >> 8);
      DAT_0bca = (char)puVar13;
      cVar17 = DAT_0d61;
      if ((((cVar17 != -0x80) && (cVar17 = DAT_0d87, cVar17 == '\t')) &&
          (bVar11 = DAT_08a0, (~bVar11 & 4) != 0)) && (bVar11 = DAT_08b2, (~bVar11 & 0x80) != 0)) {
        cVar17 = DAT_0d87;
        if (((cVar17 == '\t') && (bVar11 = DAT_0896._0_1_, (bVar11 & 0x10) == 0)) ||
           (bVar11 = DAT_0881, (~bVar11 & 0x10) == 0)) {
          DAT_0bcc = 0;
          DAT_0bcd = 0;
        }
        else {
          cVar17 = DAT_0bca;
          if (cVar17 == '\0') {
            bVar11 = DAT_08b6;
            if ((bVar11 & 2) != 0) {
              bVar11 = DAT_0bcc;
              bVar9 = DAT_0d88;
              if (bVar11 <= bVar9) goto LAB_e34d;
              bVar11 = DAT_08b1;
              if ((~bVar11 & 8) != 0) {
                bVar11 = DAT_08b1;
                DAT_08b1 = bVar11 | 8;
                bVar11 = DAT_0bd2;
                DAT_0bd2 = bVar11 | 0x20;
                bVar11 = DAT_08ba;
                if ((~bVar11 & 8) != 0) {
                  bVar11 = DAT_08ba;
                  DAT_08ba = bVar11 | 8;
                  bVar11 = DAT_0bd2;
                  DAT_0bd2 = bVar11 | 2;
                }
              }
              bVar11 = DAT_0889;
              DAT_0889 = bVar11 & 0xfd;
              DAT_0b92 = 0;
            }
            bVar11 = DAT_08b6;
            DAT_08b6 = bVar11 | 2;
          }
          else {
            bVar11 = DAT_08b6;
            if ((bVar11 & 2) == 0) {
              bVar11 = DAT_0bcd;
              bVar9 = DAT_0d8a;
              if ((bVar9 < bVar11) && (bVar11 = DAT_08b1, (bVar11 & 8) != 0)) {
                bVar11 = DAT_08b1;
                DAT_08b1 = bVar11 & 0xf7;
                bVar11 = DAT_0bd2;
                DAT_0bd2 = bVar11 | 0x20;
                bVar11 = DAT_08af;
                if (((~bVar11 & 8) != 0) && (bVar11 = DAT_08af, (~bVar11 & 4) != 0)) {
                  bVar11 = DAT_0889;
                  DAT_0889 = bVar11 | 2;
                  DAT_0b94 = 0;
                  uVar18 = DAT_0a83;
                  DAT_0b92 = uVar18;
                  DAT_0b95 = uVar18;
                }
              }
            }
            else {
              bVar11 = DAT_08b6;
              DAT_08b6 = bVar11 & 0xfd;
            }
          }
        }
      }
LAB_e34d:
      bVar11 = DAT_08b1;
      if ((bVar11 & 8) == 0) {
        uVar10 = DAT_0bcb;
        uVar18 = DAT_0bca;
      }
      else {
        uVar10 = 0x20;
        uVar18 = 5;
      }
      DAT_0899 = uVar10;
      DAT_0898 = uVar18;
    }
  }
  do {
    bVar11 = DAT_008b;
    if ((~bVar11 & 2) == 0) {
      uVar12 = DAT_0092;
      DAT_08cc = uVar12;
      bVar11 = DAT_088d;
      DAT_088d = bVar11 & 0xfd;
      goto LAB_e37e;
    }
    sVar15 = DAT_0044;
    sVar3 = DAT_08c8;
  } while (sVar15 - sVar3 < 0);
  bVar11 = DAT_088d;
  DAT_088d = bVar11 | 2;
LAB_e37e:
  bVar11 = DAT_088d;
  DAT_088d = bVar11 & 0xfe;
  FUN_f39d();
  bVar11 = DAT_088d;
  if ((~bVar11 & 2) != 0) {
    puVar20 = &DAT_0c42;
    puVar19 = &DAT_0c58;
    bVar11 = DAT_0bfe;
    if ((bVar11 & 0x80) != 0) {
      bVar11 = DAT_0c04;
      puVar20 = &DAT_0c42 + bVar11;
      bVar11 = DAT_0922;
      puVar19 = &DAT_0c58 + (bVar11 & 0xff1f);
    }
    uVar12 = DAT_08cc;
    *puVar20 = uVar12;
    *puVar19 = uVar12;
    DAT_0c40 = uVar12;
    DAT_08c2 = 0x40;
    DAT_08c3 = 0;
  }
  cVar17 = DAT_0d53;
  if (((cVar17 != -0x80) && (bVar11 = DAT_08a0, (~bVar11 & 4) != 0)) &&
     (bVar11 = DAT_08b2, (~bVar11 & 0x80) != 0)) {
    uVar12 = DAT_0c40;
    bVar11 = (byte)((ushort)uVar12 >> 8);
    if ((bVar11 < 0x1a) || (0xf5 < bVar11)) {
      bVar11 = DAT_08b5;
      if ((bVar11 & 0x40) == 0) {
        bVar11 = DAT_08b5;
        DAT_08b5 = bVar11 | 0x40;
        bVar11 = DAT_0bab;
        DAT_0bab = bVar11 | 0x20;
      }
      else {
        bVar11 = DAT_0b3e;
        bVar9 = DAT_0d89;
        if ((bVar9 < bVar11) && (bVar11 = DAT_08af, (~bVar11 & 0x20) != 0)) {
          bVar11 = DAT_08af;
          DAT_08af = bVar11 | 0x20;
          bVar11 = DAT_0bd2;
          DAT_0bd2 = bVar11 | 0x80;
          bVar11 = DAT_08b8;
          if ((~bVar11 & 0x20) != 0) {
            bVar11 = DAT_08b8;
            DAT_08b8 = bVar11 | 0x20;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 8;
          }
        }
      }
    }
    else {
      bVar11 = DAT_08b5;
      if ((bVar11 & 0x40) == 0) {
        bVar11 = DAT_0b4b;
        bVar9 = DAT_0d8a;
        if (bVar9 < bVar11) {
          bVar11 = DAT_08af;
          if ((bVar11 & 0x20) != 0) {
            bVar11 = DAT_08af;
            DAT_08af = bVar11 & 0xdf;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x80;
          }
          bVar11 = DAT_0bab;
          DAT_0bab = bVar11 & 0xdf;
        }
      }
      else {
        bVar11 = DAT_08b5;
        DAT_08b5 = bVar11 & 0xbf;
      }
    }
  }
  cVar17 = DAT_0c04;
  cVar6 = DAT_0d8b;
  if (cVar6 == -0x80) {
    if (cVar17 == '\x01') {
      uVar12 = DAT_0c9a;
      DAT_0c9c = uVar12;
      uVar12 = DAT_0c44;
      DAT_0c9a = uVar12;
      goto LAB_e461;
    }
  }
  else if (cVar17 == '\0') {
    uVar12 = DAT_0c9a;
    DAT_0c9c = uVar12;
    uVar12 = DAT_0c42;
    DAT_0c9a = uVar12;
LAB_e461:
    bVar11 = DAT_08af;
    if (((~bVar11 & 0x20) == 0) || (bVar11 = DAT_08af, (bVar11 & 0x10) != 0)) {
      uVar12 = DAT_0da8;
      DAT_0c8a = uVar12;
    }
    else {
      bVar11 = DAT_0ca8;
      if ((~bVar11 & 1) == 0) {
        cVar17 = DAT_0d8d;
        if (cVar17 == '\x01') {
LAB_e491:
          bVar11 = DAT_0d94;
          DAT_0c8a = (&DAT_0c58)[bVar11];
          DAT_0c94 = (&DAT_0c58)[bVar11];
        }
        else if (cVar17 == '\x02') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar9 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar9];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar12 = DAT_0df7;
          DAT_0ca0 = uVar12;
          bVar9 = DAT_0d95;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          uVar14 = RAM0c9f;
          DAT_0dfa = uVar14 / 2;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar14 % 2),uVar18) / 2);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar12 = RAM0dfb;
          }
          else {
            uVar12 = 0xffff;
          }
          DAT_0c8a = uVar12;
          DAT_0c94 = uVar12;
        }
        else if (cVar17 == '\x03') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar9 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar9];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar12 = DAT_0df7;
          DAT_0ca0 = uVar12;
          bVar9 = DAT_0d95;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d96;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          uVar14 = RAM0c9f;
          DAT_0dfa = uVar14 / 3;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar14 % 3),uVar18) / 3);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar12 = RAM0dfb;
          }
          else {
            uVar12 = 0xffff;
          }
          DAT_0c8a = uVar12;
          DAT_0c94 = uVar12;
        }
        else if (cVar17 == '\x04') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar9 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar9];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar12 = DAT_0df7;
          DAT_0ca0 = uVar12;
          bVar9 = DAT_0d95;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d96;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d97;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          uVar14 = RAM0c9f;
          DAT_0dfa = uVar14 / 4;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar14 % 4),uVar18) / 4);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar12 = RAM0dfb;
          }
          else {
            uVar12 = 0xffff;
          }
          DAT_0c8a = uVar12;
          DAT_0c94 = uVar12;
        }
        else if (cVar17 == '\x05') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar9 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar9];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar12 = DAT_0df7;
          DAT_0ca0 = uVar12;
          bVar9 = DAT_0d95;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d96;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d97;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d98;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d92;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          uVar14 = RAM0c9f;
          DAT_0dfa = uVar14 / 5;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar14 % 5),uVar18) / 5);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar12 = RAM0dfb;
          }
          else {
            uVar12 = 0xffff;
          }
          DAT_0c8a = uVar12;
          DAT_0c94 = uVar12;
        }
        else {
          if (cVar17 != '\x06') goto LAB_e491;
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar9 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar9];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar12 = DAT_0df7;
          DAT_0ca0 = uVar12;
          bVar9 = DAT_0d95;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d96;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d97;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d98;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d92;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          bVar9 = DAT_0d99;
          uVar14 = (&DAT_0c58)[bVar9];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar14 + uVar4;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar14,uVar4)),
                              (byte)uVar12 + CARRY2(uVar14,uVar4));
          bVar11 = DAT_0d93;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar9];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar14 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar14;
          uVar12 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar12 >> 8) +
                              CARRY1((byte)uVar12,CARRY2(uVar4,uVar14)),
                              (byte)uVar12 + CARRY2(uVar4,uVar14));
          uVar14 = RAM0c9f;
          DAT_0dfa = uVar14 / 6;
          uVar18 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar14 % 6),uVar18) / 6);
          cVar17 = DAT_0dfa._0_1_;
          if (cVar17 == '\0') {
            uVar12 = RAM0dfb;
          }
          else {
            uVar12 = 0xffff;
          }
          DAT_0c8a = uVar12;
          DAT_0c94 = uVar12;
        }
      }
      else {
        uVar12 = DAT_0c88;
        DAT_0c8a = uVar12;
        DAT_0c94 = uVar12;
      }
    }
    uVar12 = DAT_08f2;
    FUN_f3b7();
    DAT_0c93 = extraout_A;
    bVar11 = DAT_0c93;
    puVar5 = (undefined *)DAT_0c8a;
    puVar13 = puVar5 + -0x1eb7;
    if (puVar5 < &UNK_1eb7) {
      iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar13 >> 8) + 1) - ((char)-(char)puVar13 != '\0'),
                             -(char)puVar13) * (uint)bVar11 * 2;
      uVar14 = (ushort)iVar2;
      bVar11 = (byte)((uint)iVar2 >> 0x10);
      cVar17 = bVar11 + (0xff7f < uVar14);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar11,0xff7f < uVar14),cVar17) < 0x100) {
        DAT_0e04._0_1_ = cVar17;
        RAM0e05 = uVar14 + 0x80;
        puVar5 = (undefined *)DAT_0e04;
        puVar13 = &UNK_1eb7 + -(short)puVar5;
        if (puVar5 < &UNK_1eb8) goto LAB_ea7c;
      }
      puVar13 = (undefined *)0x0;
    }
    else {
      iVar2 = ZEXT24(puVar13) * (uint)bVar11 * 2;
      uVar14 = (ushort)iVar2;
      bVar11 = (byte)((uint)iVar2 >> 0x10);
      cVar17 = bVar11 + (0xff7f < uVar14);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar11,0xff7f < uVar14),cVar17) < 0x100) {
        DAT_0e04._0_1_ = cVar17;
        RAM0e05 = uVar14 + 0x80;
        uVar14 = DAT_0e04;
        puVar13 = &UNK_1eb7 + uVar14;
        if (uVar14 < 0xe149) goto LAB_ea7c;
      }
      puVar13 = (undefined *)0xffff;
    }
LAB_ea7c:
    DAT_0c8c = puVar13;
    bVar11 = DAT_0ca8;
    if ((~bVar11 & 1) != 0) {
      bVar11 = DAT_0ca8;
      if ((bVar11 & 2) == 0) {
LAB_eaa2:
        bVar11 = DAT_0ca8;
        if ((~bVar11 & 2) != 0) {
          uVar14 = DAT_0c9a;
          uVar4 = DAT_0c9c;
          if ((uVar4 < uVar14) && (uVar7 = DAT_0dac, uVar7 <= uVar14 - uVar4)) {
            bVar11 = DAT_0ca8;
            DAT_0ca8 = bVar11 | 2;
            cVar17 = DAT_0c03;
            DAT_0922 = cVar17 + '\f';
            goto LAB_eac0;
          }
        }
        DAT_0ca9 = 0;
      }
      else {
        uVar4 = DAT_0c9c;
        uVar14 = DAT_0c9a;
        if ((uVar4 <= uVar14) || (uVar7 = DAT_0dac, uVar4 - uVar14 < uVar7)) goto LAB_eaa2;
        bVar11 = DAT_0ca8;
        DAT_0ca8 = bVar11 & 0xfd;
        uVar18 = DAT_0c03;
        DAT_0922 = uVar18;
LAB_eac0:
        bVar11 = DAT_0ca9;
        bVar11 = (bVar11 + 1) - (0xfe < bVar11);
        DAT_0ca9 = bVar11;
        bVar9 = DAT_0d9a;
        if (bVar9 <= bVar11) {
          bVar11 = DAT_0ca8;
          DAT_0ca8 = bVar11 | 1;
        }
      }
    }
  }
  bVar11 = DAT_0bfe;
  if ((bVar11 & 0x80) != 0) {
    uVar14 = DAT_0c9a;
    uVar4 = DAT_0c9c;
    if (uVar14 < uVar4) {
      cVar17 = DAT_0c04;
      cVar6 = DAT_0d8c;
      if (cVar17 == cVar6) {
        uVar12 = DAT_0c40;
        DAT_0c88 = uVar12;
      }
    }
  }
  bVar11 = DAT_0889;
  if ((((~bVar11 & 4) != 0) && (bVar11 = DAT_0885, (~bVar11 & 0x80) != 0)) &&
     (bVar11 = DAT_0889, (bVar11 & 0x10) != 0)) {
    bVar11 = DAT_0889;
    DAT_0889 = bVar11 | 8;
    bVar11 = DAT_0889;
    DAT_0889 = bVar11 | 4;
  }
  bVar11 = DAT_0a53;
  puVar1 = (ushort *)(&DAT_0a54 + (ushort)bVar11 * 2);
  bVar11 = DAT_0a52;
  bVar11 = (bVar11 + 1) - (0xfe < bVar11);
  DAT_0a52 = bVar11;
  if (bVar11 < 0x18) {
    if (1 < bVar11) {
      uVar18 = DAT_0a4f._0_1_;
      DAT_0df6 = uVar18;
      uVar12 = RAM0a50;
      DAT_0df7 = uVar12;
      goto LAB_eb49;
    }
  }
  else {
    uVar14 = RAM0a50;
    DAT_0df7 = uVar14 - *puVar1;
    cVar17 = DAT_0a4f._0_1_;
    DAT_0df6 = cVar17 - (uVar14 < *puVar1);
LAB_eb49:
    cVar17 = DAT_0c07;
    if (cVar17 == '\0') {
      uVar14 = DAT_0c08;
    }
    else {
      uVar14 = 0xffff;
    }
    *puVar1 = uVar14;
    uVar14 = DAT_0df7;
    sVar15 = uVar14 + *puVar1;
    RAM0a50 = sVar15;
    DAT_0df7 = sVar15;
    cVar17 = DAT_0df6;
    cVar17 = cVar17 + CARRY2(uVar14,*puVar1);
    DAT_0a4f._0_1_ = cVar17;
    DAT_0df6 = cVar17;
    bVar11 = DAT_0a52;
    if (bVar11 < 0x17) {
      cVar17 = DAT_0a52;
      bVar11 = cVar17 - 1;
      DAT_0df9 = bVar11;
      uVar14 = DAT_0a4f;
      RAM0df6 = uVar14 / bVar11;
      uVar18 = DAT_0a51;
      bVar9 = DAT_0df9;
      DAT_0df7._1_1_ = (char)(CONCAT11((char)(uVar14 % (ushort)bVar11),uVar18) / (ushort)bVar9);
      uVar14 = DAT_0df7;
      DAT_0df7 = (short)((uint)uVar14 * 0x16);
      DAT_0df6 = (char)((uint)uVar14 * 0x16 >> 0x10);
    }
    uVar18 = DAT_0df6;
    DAT_0a4b._0_1_ = uVar18;
    uVar12 = DAT_0df7;
    RAM0a4c = uVar12;
    cVar17 = DAT_0a53;
    bVar11 = cVar17 + 1;
    if (0x15 < bVar11) {
      bVar11 = 0;
    }
    DAT_0a53 = bVar11;
  }
  cVar17 = DAT_0dd5;
  if ((cVar17 != -0x80) && (bVar11 = DAT_0d06, (~bVar11 & 0x80) != 0)) {
    bVar11 = DAT_0a2e._0_1_;
    bVar9 = DAT_0dd8;
    if (bVar11 < bVar9) {
      bVar9 = DAT_0dd7;
      if (bVar11 < bVar9) {
        bVar11 = DAT_0d0a;
        bVar9 = DAT_0dd6;
        if ((bVar11 < bVar9) && (bVar11 = DAT_0d08, (~bVar11 & 8) != 0)) {
          bVar11 = DAT_0d08;
          DAT_0d08 = bVar11 & 0xfe;
          DAT_0afc = 0;
          bVar11 = DAT_0d08;
          DAT_0d08 = bVar11 | 8;
        }
      }
    }
    else {
      bVar11 = DAT_0d08;
      DAT_0d08 = bVar11 | 1;
    }
  }
  cVar17 = DAT_0d87;
  if (cVar17 != '\t') {
    cVar17 = DAT_0c04;
    if (cVar17 != '\0') goto LAB_ec8f;
    bVar11 = DAT_0ada;
    if (((~bVar11 & 0x10) == 0) || (bVar11 = DAT_0ada, (bVar11 & 4) != 0)) {
      bVar11 = DAT_0ae1;
      bVar11 = (bVar11 + 1) - (0xfe < bVar11);
      DAT_0ae1 = bVar11;
      bVar9 = DAT_0ddb;
      if (bVar9 <= bVar11) {
        DAT_0ae1 = 0;
        bVar11 = DAT_0ada;
        if ((bVar11 & 0x10) == 0) {
          uVar14 = DAT_0ad6;
          uVar4 = DAT_0db8;
          sVar15 = uVar14 - uVar4;
          if (uVar14 < uVar4) {
            sVar15 = 0;
          }
          DAT_0ad6 = sVar15;
          bVar11 = DAT_0ad9;
          bVar9 = DAT_0dda;
          cVar17 = bVar11 - bVar9;
          if (bVar11 < bVar9) {
            cVar17 = '\0';
          }
          DAT_0ad9 = cVar17;
        }
        else {
          uVar4 = DAT_0ad6;
          uVar7 = DAT_0db8;
          uVar14 = uVar4 + uVar7;
          if ((CARRY2(uVar4,uVar7)) || (0x200 < uVar14)) {
            uVar14 = 0x200;
          }
          DAT_0ad6 = uVar14;
          bVar9 = DAT_0ad9;
          bVar8 = DAT_0dda;
          bVar11 = bVar9 + bVar8;
          if ((CARRY1(bVar9,bVar8)) || (bVar9 = DAT_0ddc, bVar9 < bVar11)) {
            bVar11 = DAT_0ddc;
          }
          DAT_0ad9 = bVar11;
        }
      }
    }
    bVar11 = DAT_0ada;
    if ((bVar11 & 0x20) != 0) {
      uVar12 = DAT_0ad6;
      DAT_0ad4 = uVar12;
      uVar18 = DAT_0ad9;
      DAT_0ad8 = uVar18;
      goto LAB_ec8f;
    }
  }
  DAT_0ad4 = 0;
  DAT_0ad8 = 0;
LAB_ec8f:
  bVar11 = DAT_08be;
  DAT_08be = bVar11 & 0xdf;
  bVar11 = DAT_08be;
  DAT_08be = bVar11 & 0x7f;
  return;
}


/* Entry e294 */

void candidate_unreferenced_e294(void)

{
  ushort *puVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  byte bVar5;
  undefined *puVar6;
  char cVar7;
  ushort uVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 extraout_A;
  char cVar12;
  undefined1 uVar17;
  undefined2 uVar13;
  undefined *puVar14;
  ushort uVar15;
  short sVar16;
  undefined2 *puVar18;
  undefined2 *puVar19;
  
  DAT_0bcb = 0x40;
  DAT_0bca = 6;
  cVar12 = DAT_0d61;
  if ((((cVar12 != -0x80) && (cVar12 = DAT_0d87, cVar12 == '\t')) &&
      (bVar11 = DAT_08a0, (~bVar11 & 4) != 0)) && (bVar11 = DAT_08b2, (~bVar11 & 0x80) != 0)) {
    cVar12 = DAT_0d87;
    if (((cVar12 == '\t') && (bVar11 = DAT_0896._0_1_, (bVar11 & 0x10) == 0)) ||
       (bVar11 = DAT_0881, (~bVar11 & 0x10) == 0)) {
      DAT_0bcc = 0;
      DAT_0bcd = 0;
    }
    else {
      cVar12 = DAT_0bca;
      if (cVar12 == '\0') {
        bVar11 = DAT_08b6;
        if ((bVar11 & 2) != 0) {
          bVar11 = DAT_0bcc;
          bVar5 = DAT_0d88;
          if (bVar11 <= bVar5) goto LAB_e34d;
          bVar11 = DAT_08b1;
          if ((~bVar11 & 8) != 0) {
            bVar11 = DAT_08b1;
            DAT_08b1 = bVar11 | 8;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x20;
            bVar11 = DAT_08ba;
            if ((~bVar11 & 8) != 0) {
              bVar11 = DAT_08ba;
              DAT_08ba = bVar11 | 8;
              bVar11 = DAT_0bd2;
              DAT_0bd2 = bVar11 | 2;
            }
          }
          bVar11 = DAT_0889;
          DAT_0889 = bVar11 & 0xfd;
          DAT_0b92 = 0;
        }
        bVar11 = DAT_08b6;
        DAT_08b6 = bVar11 | 2;
      }
      else {
        bVar11 = DAT_08b6;
        if ((bVar11 & 2) == 0) {
          bVar11 = DAT_0bcd;
          bVar5 = DAT_0d8a;
          if ((bVar5 < bVar11) && (bVar11 = DAT_08b1, (bVar11 & 8) != 0)) {
            bVar11 = DAT_08b1;
            DAT_08b1 = bVar11 & 0xf7;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x20;
            bVar11 = DAT_08af;
            if (((~bVar11 & 8) != 0) && (bVar11 = DAT_08af, (~bVar11 & 4) != 0)) {
              bVar11 = DAT_0889;
              DAT_0889 = bVar11 | 2;
              DAT_0b94 = 0;
              uVar17 = DAT_0a83;
              DAT_0b92 = uVar17;
              DAT_0b95 = uVar17;
            }
          }
        }
        else {
          bVar11 = DAT_08b6;
          DAT_08b6 = bVar11 & 0xfd;
        }
      }
    }
  }
LAB_e34d:
  bVar11 = DAT_08b1;
  if ((bVar11 & 8) == 0) {
    uVar10 = DAT_0bcb;
    uVar17 = DAT_0bca;
  }
  else {
    uVar10 = 0x20;
    uVar17 = 5;
  }
  DAT_0899 = uVar10;
  DAT_0898 = uVar17;
  do {
    bVar11 = DAT_008b;
    if ((~bVar11 & 2) == 0) {
      uVar13 = DAT_0092;
      DAT_08cc = uVar13;
      bVar11 = DAT_088d;
      DAT_088d = bVar11 & 0xfd;
      goto LAB_e37e;
    }
    sVar16 = DAT_0044;
    sVar3 = DAT_08c8;
  } while (sVar16 - sVar3 < 0);
  bVar11 = DAT_088d;
  DAT_088d = bVar11 | 2;
LAB_e37e:
  bVar11 = DAT_088d;
  DAT_088d = bVar11 & 0xfe;
  FUN_f39d();
  bVar11 = DAT_088d;
  if ((~bVar11 & 2) != 0) {
    puVar19 = &DAT_0c42;
    puVar18 = &DAT_0c58;
    bVar11 = DAT_0bfe;
    if ((bVar11 & 0x80) != 0) {
      bVar11 = DAT_0c04;
      puVar19 = &DAT_0c42 + bVar11;
      bVar11 = DAT_0922;
      puVar18 = &DAT_0c58 + (bVar11 & 0xff1f);
    }
    uVar13 = DAT_08cc;
    *puVar19 = uVar13;
    *puVar18 = uVar13;
    DAT_0c40 = uVar13;
    DAT_08c2 = 0x40;
    DAT_08c3 = 0;
  }
  cVar12 = DAT_0d53;
  if (((cVar12 != -0x80) && (bVar11 = DAT_08a0, (~bVar11 & 4) != 0)) &&
     (bVar11 = DAT_08b2, (~bVar11 & 0x80) != 0)) {
    uVar13 = DAT_0c40;
    bVar11 = (byte)((ushort)uVar13 >> 8);
    if ((bVar11 < 0x1a) || (0xf5 < bVar11)) {
      bVar11 = DAT_08b5;
      if ((bVar11 & 0x40) == 0) {
        bVar11 = DAT_08b5;
        DAT_08b5 = bVar11 | 0x40;
        bVar11 = DAT_0bab;
        DAT_0bab = bVar11 | 0x20;
      }
      else {
        bVar11 = DAT_0b3e;
        bVar5 = DAT_0d89;
        if ((bVar5 < bVar11) && (bVar11 = DAT_08af, (~bVar11 & 0x20) != 0)) {
          bVar11 = DAT_08af;
          DAT_08af = bVar11 | 0x20;
          bVar11 = DAT_0bd2;
          DAT_0bd2 = bVar11 | 0x80;
          bVar11 = DAT_08b8;
          if ((~bVar11 & 0x20) != 0) {
            bVar11 = DAT_08b8;
            DAT_08b8 = bVar11 | 0x20;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 8;
          }
        }
      }
    }
    else {
      bVar11 = DAT_08b5;
      if ((bVar11 & 0x40) == 0) {
        bVar11 = DAT_0b4b;
        bVar5 = DAT_0d8a;
        if (bVar5 < bVar11) {
          bVar11 = DAT_08af;
          if ((bVar11 & 0x20) != 0) {
            bVar11 = DAT_08af;
            DAT_08af = bVar11 & 0xdf;
            bVar11 = DAT_0bd2;
            DAT_0bd2 = bVar11 | 0x80;
          }
          bVar11 = DAT_0bab;
          DAT_0bab = bVar11 & 0xdf;
        }
      }
      else {
        bVar11 = DAT_08b5;
        DAT_08b5 = bVar11 & 0xbf;
      }
    }
  }
  cVar12 = DAT_0c04;
  cVar7 = DAT_0d8b;
  if (cVar7 == -0x80) {
    if (cVar12 == '\x01') {
      uVar13 = DAT_0c9a;
      DAT_0c9c = uVar13;
      uVar13 = DAT_0c44;
      DAT_0c9a = uVar13;
      goto LAB_e461;
    }
  }
  else if (cVar12 == '\0') {
    uVar13 = DAT_0c9a;
    DAT_0c9c = uVar13;
    uVar13 = DAT_0c42;
    DAT_0c9a = uVar13;
LAB_e461:
    bVar11 = DAT_08af;
    if (((~bVar11 & 0x20) == 0) || (bVar11 = DAT_08af, (bVar11 & 0x10) != 0)) {
      uVar13 = DAT_0da8;
      DAT_0c8a = uVar13;
    }
    else {
      bVar11 = DAT_0ca8;
      if ((~bVar11 & 1) == 0) {
        cVar12 = DAT_0d8d;
        if (cVar12 == '\x01') {
LAB_e491:
          bVar11 = DAT_0d94;
          DAT_0c8a = (&DAT_0c58)[bVar11];
          DAT_0c94 = (&DAT_0c58)[bVar11];
        }
        else if (cVar12 == '\x02') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar5 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar5];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar5 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 2;
          uVar17 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 2),uVar17) / 2);
          cVar12 = DAT_0dfa._0_1_;
          if (cVar12 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar12 == '\x03') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar5 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar5];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar5 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 3;
          uVar17 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 3),uVar17) / 3);
          cVar12 = DAT_0dfa._0_1_;
          if (cVar12 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar12 == '\x04') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar5 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar5];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar5 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 4;
          uVar17 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 4),uVar17) / 4);
          cVar12 = DAT_0dfa._0_1_;
          if (cVar12 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else if (cVar12 == '\x05') {
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar5 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar5];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar5 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d98;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d92;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 5;
          uVar17 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 5),uVar17) / 5);
          cVar12 = DAT_0dfa._0_1_;
          if (cVar12 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
        else {
          if (cVar12 != '\x06') goto LAB_e491;
          DAT_0c9e = 0;
          DAT_0ca0 = 0;
          bVar5 = DAT_0d94;
          DAT_0ca0 = (&DAT_0c58)[bVar5];
          bVar11 = DAT_0d8e;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar13 = DAT_0df7;
          DAT_0ca0 = uVar13;
          bVar5 = DAT_0d95;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d8f;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d96;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d90;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d97;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d91;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d98;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d92;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          bVar5 = DAT_0d99;
          uVar15 = (&DAT_0c58)[bVar5];
          uVar4 = DAT_0ca0;
          DAT_0ca0 = uVar15 + uVar4;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar15,uVar4)),
                              (byte)uVar13 + CARRY2(uVar15,uVar4));
          bVar11 = DAT_0d93;
          iVar2 = (uint)bVar11 * (uint)(ushort)(&DAT_0c58)[bVar5];
          RAM0df6 = (short)((uint)iVar2 >> 0x10);
          RAM0df8 = (short)iVar2;
          uVar4 = DAT_0df7;
          uVar15 = DAT_0ca0;
          DAT_0ca0 = uVar4 + uVar15;
          uVar13 = DAT_0c9e;
          DAT_0c9e = CONCAT11((char)((ushort)uVar13 >> 8) +
                              CARRY1((byte)uVar13,CARRY2(uVar4,uVar15)),
                              (byte)uVar13 + CARRY2(uVar4,uVar15));
          uVar15 = RAM0c9f;
          DAT_0dfa = uVar15 / 6;
          uVar17 = DAT_0ca0._1_1_;
          DAT_0dfc = (char)(CONCAT11((char)(uVar15 % 6),uVar17) / 6);
          cVar12 = DAT_0dfa._0_1_;
          if (cVar12 == '\0') {
            uVar13 = RAM0dfb;
          }
          else {
            uVar13 = 0xffff;
          }
          DAT_0c8a = uVar13;
          DAT_0c94 = uVar13;
        }
      }
      else {
        uVar13 = DAT_0c88;
        DAT_0c8a = uVar13;
        DAT_0c94 = uVar13;
      }
    }
    uVar13 = DAT_08f2;
    FUN_f3b7();
    DAT_0c93 = extraout_A;
    bVar11 = DAT_0c93;
    puVar6 = (undefined *)DAT_0c8a;
    puVar14 = puVar6 + -0x1eb7;
    if (puVar6 < &UNK_1eb7) {
      iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar14 >> 8) + 1) - ((char)-(char)puVar14 != '\0'),
                             -(char)puVar14) * (uint)bVar11 * 2;
      uVar15 = (ushort)iVar2;
      bVar11 = (byte)((uint)iVar2 >> 0x10);
      cVar12 = bVar11 + (0xff7f < uVar15);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar11,0xff7f < uVar15),cVar12) < 0x100) {
        DAT_0e04._0_1_ = cVar12;
        RAM0e05 = uVar15 + 0x80;
        puVar6 = (undefined *)DAT_0e04;
        puVar14 = &UNK_1eb7 + -(short)puVar6;
        if (puVar6 < &UNK_1eb8) goto LAB_ea7c;
      }
      puVar14 = (undefined *)0x0;
    }
    else {
      iVar2 = ZEXT24(puVar14) * (uint)bVar11 * 2;
      uVar15 = (ushort)iVar2;
      bVar11 = (byte)((uint)iVar2 >> 0x10);
      cVar12 = bVar11 + (0xff7f < uVar15);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar11,0xff7f < uVar15),cVar12) < 0x100) {
        DAT_0e04._0_1_ = cVar12;
        RAM0e05 = uVar15 + 0x80;
        uVar15 = DAT_0e04;
        puVar14 = &UNK_1eb7 + uVar15;
        if (uVar15 < 0xe149) goto LAB_ea7c;
      }
      puVar14 = (undefined *)0xffff;
    }
LAB_ea7c:
    DAT_0c8c = puVar14;
    bVar11 = DAT_0ca8;
    if ((~bVar11 & 1) != 0) {
      bVar11 = DAT_0ca8;
      if ((bVar11 & 2) == 0) {
LAB_eaa2:
        bVar11 = DAT_0ca8;
        if ((~bVar11 & 2) != 0) {
          uVar15 = DAT_0c9a;
          uVar4 = DAT_0c9c;
          if ((uVar4 < uVar15) && (uVar8 = DAT_0dac, uVar8 <= uVar15 - uVar4)) {
            bVar11 = DAT_0ca8;
            DAT_0ca8 = bVar11 | 2;
            cVar12 = DAT_0c03;
            DAT_0922 = cVar12 + '\f';
            goto LAB_eac0;
          }
        }
        DAT_0ca9 = 0;
      }
      else {
        uVar4 = DAT_0c9c;
        uVar15 = DAT_0c9a;
        if ((uVar4 <= uVar15) || (uVar8 = DAT_0dac, uVar4 - uVar15 < uVar8)) goto LAB_eaa2;
        bVar11 = DAT_0ca8;
        DAT_0ca8 = bVar11 & 0xfd;
        uVar17 = DAT_0c03;
        DAT_0922 = uVar17;
LAB_eac0:
        bVar11 = DAT_0ca9;
        bVar11 = (bVar11 + 1) - (0xfe < bVar11);
        DAT_0ca9 = bVar11;
        bVar5 = DAT_0d9a;
        if (bVar5 <= bVar11) {
          bVar11 = DAT_0ca8;
          DAT_0ca8 = bVar11 | 1;
        }
      }
    }
  }
  bVar11 = DAT_0bfe;
  if ((bVar11 & 0x80) != 0) {
    uVar15 = DAT_0c9a;
    uVar4 = DAT_0c9c;
    if (uVar15 < uVar4) {
      cVar12 = DAT_0c04;
      cVar7 = DAT_0d8c;
      if (cVar12 == cVar7) {
        uVar13 = DAT_0c40;
        DAT_0c88 = uVar13;
      }
    }
  }
  bVar11 = DAT_0889;
  if ((((~bVar11 & 4) != 0) && (bVar11 = DAT_0885, (~bVar11 & 0x80) != 0)) &&
     (bVar11 = DAT_0889, (bVar11 & 0x10) != 0)) {
    bVar11 = DAT_0889;
    DAT_0889 = bVar11 | 8;
    bVar11 = DAT_0889;
    DAT_0889 = bVar11 | 4;
  }
  bVar11 = DAT_0a53;
  puVar1 = (ushort *)(&DAT_0a54 + (ushort)bVar11 * 2);
  bVar11 = DAT_0a52;
  bVar11 = (bVar11 + 1) - (0xfe < bVar11);
  DAT_0a52 = bVar11;
  if (bVar11 < 0x18) {
    if (1 < bVar11) {
      uVar17 = DAT_0a4f._0_1_;
      DAT_0df6 = uVar17;
      uVar13 = RAM0a50;
      DAT_0df7 = uVar13;
      goto LAB_eb49;
    }
  }
  else {
    uVar15 = RAM0a50;
    DAT_0df7 = uVar15 - *puVar1;
    cVar12 = DAT_0a4f._0_1_;
    DAT_0df6 = cVar12 - (uVar15 < *puVar1);
LAB_eb49:
    cVar12 = DAT_0c07;
    if (cVar12 == '\0') {
      uVar15 = DAT_0c08;
    }
    else {
      uVar15 = 0xffff;
    }
    *puVar1 = uVar15;
    uVar15 = DAT_0df7;
    sVar16 = uVar15 + *puVar1;
    RAM0a50 = sVar16;
    DAT_0df7 = sVar16;
    cVar12 = DAT_0df6;
    cVar12 = cVar12 + CARRY2(uVar15,*puVar1);
    DAT_0a4f._0_1_ = cVar12;
    DAT_0df6 = cVar12;
    bVar11 = DAT_0a52;
    if (bVar11 < 0x17) {
      cVar12 = DAT_0a52;
      bVar11 = cVar12 - 1;
      DAT_0df9 = bVar11;
      uVar15 = DAT_0a4f;
      RAM0df6 = uVar15 / bVar11;
      uVar17 = DAT_0a51;
      bVar5 = DAT_0df9;
      DAT_0df7._1_1_ = (char)(CONCAT11((char)(uVar15 % (ushort)bVar11),uVar17) / (ushort)bVar5);
      uVar15 = DAT_0df7;
      DAT_0df7 = (short)((uint)uVar15 * 0x16);
      DAT_0df6 = (char)((uint)uVar15 * 0x16 >> 0x10);
    }
    uVar17 = DAT_0df6;
    DAT_0a4b._0_1_ = uVar17;
    uVar13 = DAT_0df7;
    RAM0a4c = uVar13;
    cVar12 = DAT_0a53;
    bVar11 = cVar12 + 1;
    if (0x15 < bVar11) {
      bVar11 = 0;
    }
    DAT_0a53 = bVar11;
  }
  cVar12 = DAT_0dd5;
  if ((cVar12 != -0x80) && (bVar11 = DAT_0d06, (~bVar11 & 0x80) != 0)) {
    bVar11 = DAT_0a2e._0_1_;
    bVar5 = DAT_0dd8;
    if (bVar11 < bVar5) {
      bVar5 = DAT_0dd7;
      if (bVar11 < bVar5) {
        bVar11 = DAT_0d0a;
        bVar5 = DAT_0dd6;
        if ((bVar11 < bVar5) && (bVar11 = DAT_0d08, (~bVar11 & 8) != 0)) {
          bVar11 = DAT_0d08;
          DAT_0d08 = bVar11 & 0xfe;
          DAT_0afc = 0;
          bVar11 = DAT_0d08;
          DAT_0d08 = bVar11 | 8;
        }
      }
    }
    else {
      bVar11 = DAT_0d08;
      DAT_0d08 = bVar11 | 1;
    }
  }
  cVar12 = DAT_0d87;
  if (cVar12 != '\t') {
    cVar12 = DAT_0c04;
    if (cVar12 != '\0') goto LAB_ec8f;
    bVar11 = DAT_0ada;
    if (((~bVar11 & 0x10) == 0) || (bVar11 = DAT_0ada, (bVar11 & 4) != 0)) {
      bVar11 = DAT_0ae1;
      bVar11 = (bVar11 + 1) - (0xfe < bVar11);
      DAT_0ae1 = bVar11;
      bVar5 = DAT_0ddb;
      if (bVar5 <= bVar11) {
        DAT_0ae1 = 0;
        bVar11 = DAT_0ada;
        if ((bVar11 & 0x10) == 0) {
          uVar15 = DAT_0ad6;
          uVar4 = DAT_0db8;
          sVar16 = uVar15 - uVar4;
          if (uVar15 < uVar4) {
            sVar16 = 0;
          }
          DAT_0ad6 = sVar16;
          bVar11 = DAT_0ad9;
          bVar5 = DAT_0dda;
          cVar12 = bVar11 - bVar5;
          if (bVar11 < bVar5) {
            cVar12 = '\0';
          }
          DAT_0ad9 = cVar12;
        }
        else {
          uVar4 = DAT_0ad6;
          uVar8 = DAT_0db8;
          uVar15 = uVar4 + uVar8;
          if ((CARRY2(uVar4,uVar8)) || (0x200 < uVar15)) {
            uVar15 = 0x200;
          }
          DAT_0ad6 = uVar15;
          bVar5 = DAT_0ad9;
          bVar9 = DAT_0dda;
          bVar11 = bVar5 + bVar9;
          if ((CARRY1(bVar5,bVar9)) || (bVar5 = DAT_0ddc, bVar5 < bVar11)) {
            bVar11 = DAT_0ddc;
          }
          DAT_0ad9 = bVar11;
        }
      }
    }
    bVar11 = DAT_0ada;
    if ((bVar11 & 0x20) != 0) {
      uVar13 = DAT_0ad6;
      DAT_0ad4 = uVar13;
      uVar17 = DAT_0ad9;
      DAT_0ad8 = uVar17;
      goto LAB_ec8f;
    }
  }
  DAT_0ad4 = 0;
  DAT_0ad8 = 0;
LAB_ec8f:
  bVar11 = DAT_08be;
  DAT_08be = bVar11 & 0xdf;
  bVar11 = DAT_08be;
  DAT_08be = bVar11 & 0x7f;
  return;
}


/* Entry ec98 */

void FUN_ec98(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  byte bVar5;
  char cVar6;
  
  cVar6 = DAT_0d9b;
  if (cVar6 == -0x80) {
    bVar1 = DAT_0a1b;
    bVar2 = DAT_0d7e;
    bVar5 = bVar1 - bVar2;
    if (bVar1 < bVar2) {
      bVar5 = bVar5 + 0x18;
    }
    DAT_0cad = bVar5;
    bVar1 = DAT_0a1a;
    bVar2 = DAT_0d7e;
    cVar6 = bVar1 - bVar2;
    if (bVar1 < bVar2) {
      cVar6 = cVar6 + '\x18';
    }
    DAT_0cac = cVar6;
    bVar2 = DAT_0cac;
    bVar1 = bVar5 - bVar2;
    if (bVar1 == 0) goto LAB_ecfb;
    if (bVar2 <= bVar5) {
      bVar5 = DAT_0d9c;
      if (bVar5 < bVar1) {
        cVar6 = DAT_0a1a;
        cVar3 = DAT_0d9c;
        bVar5 = cVar6 + cVar3;
        if (0x16 < bVar5) {
          if (bVar5 == 0x17) {
            bVar5 = 0;
            goto LAB_ecfe;
          }
          bVar5 = bVar5 - 0x18;
        }
        if (bVar5 == 0xb) {
          bVar5 = 0xc;
        }
        goto LAB_ed04;
      }
      goto LAB_ecfb;
    }
    bVar5 = DAT_0d9c;
    if ((byte)-bVar1 <= bVar5) goto LAB_ecfb;
    bVar1 = DAT_0a1a;
    bVar2 = DAT_0d9c;
    bVar5 = bVar1 - bVar2;
    if ((bVar1 < bVar2) && (bVar5 = bVar5 + 0x18, bVar5 == 0x17)) {
      bVar5 = 0x16;
    }
  }
  else {
LAB_ecfb:
    bVar5 = DAT_0a1b;
  }
LAB_ecfe:
  if (bVar5 == 0xb) {
    bVar5 = 10;
  }
LAB_ed04:
  DAT_0a1a = bVar5;
  DAT_0a1e = bVar5;
  uVar4 = DAT_0dae;
  DAT_0a26 = uVar4;
  return;
}


/* Entry ed11 */

void FUN_ed11(void)

{
  char cVar1;
  undefined2 uVar2;
  byte bVar3;
  
  bVar3 = DAT_0a1a;
  cVar1 = DAT_0d9d;
  bVar3 = (bVar3 & 0x1f) + cVar1;
  if (0x16 < bVar3) {
    bVar3 = bVar3 - 0x18;
  }
  DAT_0a1f = bVar3;
  uVar2 = DAT_0dae;
  DAT_0a28 = uVar2;
  return;
}


/* Entry ed29 */

void FUN_ed29(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_0880;
  if ((bVar1 & 0x44) == 0) {
    FUN_ee78();
    bVar1 = DAT_0c04;
    if ((bVar1 == 6) &&
       ((bVar2 = DAT_088d, (~bVar2 & 0x20) == 0 ||
        ((bVar2 = DAT_0a82, 0x40 < bVar2 && (bVar2 = DAT_0a92, (bVar2 & 8) != 0)))))) {
      FUN_edc3();
    }
    else if ((2 < bVar1) && (bVar1 < 7)) {
      FUN_ef6d();
    }
    return;
  }
  bVar1 = DAT_0880;
  if ((~bVar1 & 0x40) != 0) {
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
  short sVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  
  bVar1 = DAT_0885;
  if (((~bVar1 & 0x40) != 0) && (bVar1 = DAT_0884, (bVar1 & 2) == 0)) {
    cVar4 = DAT_0c04;
    if (cVar4 != '\a') {
      return;
    }
    bVar1 = DAT_0880;
    if ((((~bVar1 & 0x40) == 0) || (bVar1 = DAT_0a2e._0_1_, bVar5 = DAT_0d9e, bVar1 < bVar5)) ||
       (sVar6 = DAT_0044, sVar3 = DAT_0b7a, sVar2 = DAT_0a9a, -1 < (sVar6 - sVar3) - sVar2)) {
      bVar1 = DAT_0a93;
      DAT_0a93 = bVar1 & 0xfd;
      sVar6 = DAT_0044;
    }
    else {
      bVar1 = DAT_0a93;
      DAT_0a93 = bVar1 | 2;
      sVar6 = DAT_0b7a;
      sVar2 = DAT_0a9a;
      sVar6 = sVar6 + sVar2;
    }
    DAT_0056 = sVar6 + 10;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xf7;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
    bVar1 = DAT_0a92;
    DAT_0a92 = bVar1 | 0x80;
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
  short sVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  
  bVar1 = DAT_0885;
  if (((~bVar1 & 0x40) != 0) && (bVar1 = DAT_0884, (bVar1 & 2) == 0)) {
    cVar4 = DAT_0c04;
    if (cVar4 != '\x06') {
      return;
    }
    bVar1 = DAT_0880;
    if ((((~bVar1 & 0x40) == 0) || (bVar1 = DAT_0a2e._0_1_, bVar5 = DAT_0d9e, bVar1 < bVar5)) ||
       (sVar6 = DAT_0044, sVar3 = DAT_0b7a, sVar2 = DAT_0a9a, -1 < (sVar6 - sVar3) - sVar2)) {
      bVar1 = DAT_0a93;
      DAT_0a93 = bVar1 & 0xfd;
      sVar6 = DAT_0044;
    }
    else {
      bVar1 = DAT_0a93;
      DAT_0a93 = bVar1 | 2;
      sVar6 = DAT_0b7a;
      sVar2 = DAT_0a9a;
      sVar6 = sVar6 + sVar2;
    }
    DAT_0056 = sVar6 + 10;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xf7;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
    bVar1 = DAT_0a92;
    DAT_0a92 = bVar1 | 0x80;
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
  char cVar3;
  
  bVar2 = DAT_08a0;
  if ((((((~bVar2 & 4) != 0) && (bVar2 = DAT_08b2, (~bVar2 & 0x80) != 0)) &&
       (bVar2 = DAT_0880, (~bVar2 & 0x80) != 0)) &&
      ((bVar2 = DAT_0884, (~bVar2 & 4) != 0 && (bVar2 = DAT_0d08, (~bVar2 & 1) != 0)))) &&
     (((bVar2 = DAT_0884, (~bVar2 & 2) != 0 &&
       ((bVar2 = DAT_088c, (~bVar2 & 0x80) != 0 && (bVar2 = DAT_0885, (~bVar2 & 0x40) != 0)))) &&
      (bVar2 = DAT_0bf8, (~bVar2 & 0x80) != 0)))) {
    cVar3 = DAT_0c04;
    bVar2 = DAT_088c;
    if ((((~bVar2 & 2) == 0) || (bVar2 = DAT_089a, (~bVar2 & 2) == 0)) ||
       ((cVar3 != '\x04' && (cVar3 != '\x05')))) {
      return;
    }
    sVar1 = DAT_0044;
    DAT_0b7a = sVar1 + 10;
    DAT_0056 = sVar1 + 10;
    bVar2 = DAT_004c;
    DAT_004c = bVar2 & 0xf7;
    bVar2 = DAT_0049;
    DAT_0049 = bVar2 | 0xc0;
    DAT_004e = 8;
    bVar2 = DAT_0a92;
    DAT_0a92 = bVar2 | 8;
  }
  return;
}


/* Entry ee78 */

void FUN_ee78(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  byte bVar4;
  short sVar5;
  
  bVar1 = DAT_08a0;
  if ((~bVar1 & 4) == 0) {
    return;
  }
  bVar1 = DAT_08b2;
  if ((~bVar1 & 0x80) == 0) {
    return;
  }
  bVar1 = DAT_00e1;
  if ((bVar1 & 8) != 0) {
    return;
  }
  bVar1 = DAT_0a92;
  if ((~bVar1 & 8) == 0) {
    return;
  }
  bVar1 = DAT_0884;
  if ((~bVar1 & 4) == 0) {
    return;
  }
  bVar1 = DAT_0d08;
  if ((~bVar1 & 1) == 0) {
    return;
  }
  bVar1 = DAT_0884;
  if ((~bVar1 & 2) == 0) {
    return;
  }
  bVar1 = DAT_088c;
  if ((~bVar1 & 0x80) == 0) {
    return;
  }
  bVar1 = DAT_0885;
  if ((~bVar1 & 0x40) == 0) {
    return;
  }
  bVar1 = DAT_0bf8;
  if ((~bVar1 & 0x80) == 0) {
    return;
  }
  bVar1 = DAT_088c;
  if ((~bVar1 & 2) == 0) {
    return;
  }
  bVar1 = DAT_089a;
  if ((~bVar1 & 2) == 0) {
    return;
  }
  bVar4 = DAT_0c04;
  bVar1 = DAT_0925;
  if (bVar4 == bVar1) {
    bVar1 = DAT_089b;
    if ((bVar1 & 0x20) != 0) {
      bVar1 = DAT_089b;
      if ((bVar1 & 0x10) == 0) {
        bVar1 = DAT_089b;
        if ((bVar1 & 2) == 0) {
          bVar4 = DAT_0b2a;
          bVar1 = DAT_0b28;
          if (bVar1 <= bVar4) {
            bVar1 = DAT_089b;
            DAT_089b = bVar1 | 2;
            DAT_0b2a = 0;
            cVar2 = DAT_0b29;
            DAT_0b29 = cVar2 + '\x01';
            return;
          }
          cVar2 = DAT_0b2a;
          DAT_0b2a = cVar2 + '\x01';
          goto LAB_ef50;
        }
      }
      else {
        bVar1 = DAT_089b;
        DAT_089b = bVar1 & 0xef;
        bVar1 = DAT_089b;
        DAT_089b = bVar1 | 8;
        bVar1 = DAT_089b;
        DAT_089b = bVar1 | 2;
      }
      bVar4 = DAT_0b29;
      bVar1 = DAT_0b27;
      if (bVar4 < bVar1) {
        cVar2 = DAT_0b29;
        DAT_0b29 = cVar2 + '\x01';
        return;
      }
      bVar1 = DAT_089b;
      DAT_089b = bVar1 & 0xfd;
      cVar2 = DAT_0b2a;
      DAT_0b2a = cVar2 + '\x01';
      DAT_0b29 = 0;
    }
LAB_ef50:
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 | 0xc0;
    DAT_004e = 8;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 8;
    sVar5 = DAT_0af0;
    sVar3 = DAT_0aa2;
    sVar5 = sVar5 + sVar3;
    goto LAB_ef63;
  }
  if (bVar4 == 0) {
    cVar2 = DAT_0925;
    if ((cVar2 != '\n') && (cVar2 != '\t')) {
      return;
    }
LAB_eee7:
    bVar1 = DAT_089b;
    if ((bVar1 & 0x20) != 0) {
      return;
    }
  }
  else {
    if (6 < bVar4) {
      if (bVar4 != 10) {
        return;
      }
      cVar2 = DAT_0925;
      if (cVar2 != '\t') {
        return;
      }
      goto LAB_eee7;
    }
    bVar1 = DAT_0925;
    if ((bVar4 < bVar1) || (bVar1 = DAT_089b, (bVar1 & 0x20) != 0)) {
      return;
    }
  }
  bVar1 = DAT_0049;
  DAT_0049 = bVar1 | 0xc0;
  DAT_004e = 8;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 8;
  sVar5 = DAT_0044;
  sVar5 = sVar5 + 10;
LAB_ef63:
  DAT_0b7a = sVar5;
  DAT_0056 = sVar5;
  bVar1 = DAT_0a92;
  DAT_0a92 = bVar1 | 8;
  return;
}


/* Entry ef6d */

void FUN_ef6d(byte param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  undefined2 uVar5;
  short sVar6;
  
  bVar1 = DAT_08a0;
  if (((~bVar1 & 4) == 0) || (bVar1 = DAT_08b2, (~bVar1 & 0x80) == 0)) {
    return;
  }
  bVar1 = DAT_0924;
  if (param_1 != bVar1) {
    if (param_1 < bVar1) {
      return;
    }
    bVar1 = DAT_0a92;
    if ((~bVar1 & 0x80) == 0) {
      return;
    }
    uVar5 = DAT_0db4;
    DAT_0aa4 = uVar5;
  }
  bVar1 = DAT_00e1;
  if ((bVar1 & 8) == 0) {
    bVar1 = DAT_088c;
    if ((((((~bVar1 & 2) != 0) && (bVar1 = DAT_089a, (~bVar1 & 2) != 0)) &&
         (bVar1 = DAT_089b, (~bVar1 & 0x80) != 0)) &&
        (((bVar1 = DAT_0884, (~bVar1 & 4) != 0 && (bVar1 = DAT_0d08, (~bVar1 & 1) != 0)) &&
         ((bVar1 = DAT_0884, (~bVar1 & 2) != 0 &&
          ((bVar1 = DAT_088c, (~bVar1 & 0x80) != 0 && (bVar1 = DAT_0885, (~bVar1 & 0x40) != 0)))))))
        ) && ((bVar1 = DAT_0bf8, (~bVar1 & 0x80) != 0 && (bVar1 = DAT_0a92, (~bVar1 & 8) != 0)))) {
      sVar6 = DAT_0af0;
      sVar2 = DAT_0db0;
      DAT_0b7a = sVar6 + sVar2;
      DAT_0056 = sVar6 + sVar2;
      bVar1 = DAT_0049;
      DAT_0049 = bVar1 | 0xc0;
      DAT_004e = 8;
      bVar1 = DAT_004c;
      DAT_004c = bVar1 | 8;
      bVar1 = DAT_0a92;
      DAT_0a92 = bVar1 | 8;
    }
    return;
  }
  bVar1 = DAT_0884;
  if ((((((~bVar1 & 4) == 0) || (bVar1 = DAT_0884, (~bVar1 & 2) == 0)) ||
       (bVar1 = DAT_0885, (~bVar1 & 0x40) == 0)) ||
      ((bVar1 = DAT_0bf8, (~bVar1 & 0x80) == 0 || (bVar1 = DAT_088d, (~bVar1 & 0x20) == 0)))) ||
     (bVar1 = DAT_0880, (bVar1 & 4) != 0)) {
    return;
  }
  bVar1 = DAT_0a2e._0_1_;
  bVar4 = DAT_0d9e;
  if (bVar4 <= bVar1) {
    sVar3 = DAT_0af0;
    sVar2 = DAT_0aa4;
    sVar6 = DAT_0b7a;
    sVar6 = (sVar3 + sVar2) - sVar6;
    DAT_0e2a = sVar6;
    sVar2 = DAT_0a9a;
    if (sVar6 - sVar2 < 0) {
      bVar1 = DAT_0a93;
      DAT_0a93 = bVar1 | 2;
      sVar6 = DAT_0b7a;
      sVar2 = DAT_0a9a;
      sVar6 = sVar6 + sVar2;
      goto LAB_efde;
    }
  }
  bVar1 = DAT_0a93;
  DAT_0a93 = bVar1 & 0xfd;
  sVar6 = DAT_0af0;
  sVar2 = DAT_0aa4;
  sVar6 = sVar6 + sVar2;
LAB_efde:
  DAT_0056 = sVar6;
  bVar1 = DAT_0049;
  DAT_0049 = bVar1 & 0xbf | 0x80;
  DAT_004e = 8;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 8;
  bVar1 = DAT_0a92;
  DAT_0a92 = bVar1 | 0x80;
  return;
}


/* Entry f043 */

void FUN_f043(void)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  
  cVar1 = DAT_0c05;
  if (cVar1 != '\0') {
    uVar3 = RAM0c07;
    uVar5 = DAT_0c30;
    if (uVar5 <= uVar3) {
LAB_f071:
      FUN_721f();
      return;
    }
    uVar5 = DAT_0c2e;
    if (uVar5 <= uVar3) {
      cVar9 = DAT_0c33;
      if (cVar9 == '\0') {
        cVar9 = '\x01';
      }
      else {
        cVar6 = DAT_0c32;
        if ((cVar1 != cVar6) && ((char)(cVar1 - cVar6) != '\v')) goto LAB_f071;
      }
      DAT_0c33 = cVar9;
      uVar2 = DAT_0c05;
      DAT_0c32 = uVar2;
    }
    uVar2 = DAT_0c1b;
    DAT_0c1f = uVar2;
    uVar4 = DAT_0c1c;
    DAT_0c20 = uVar4;
    uVar2 = DAT_0c17;
    DAT_0c1b = uVar2;
    uVar4 = DAT_0c18;
    DAT_0c1c = uVar4;
    uVar2 = DAT_0c07;
    DAT_0c17 = uVar2;
    uVar4 = DAT_0c08;
    DAT_0c18 = uVar4;
    bVar8 = DAT_0c05;
    if (3 < bVar8) {
      bVar8 = DAT_0d9f;
      DAT_0c36 = (ushort)bVar8 << 2;
      cVar1 = DAT_0c17;
      cVar9 = DAT_0c1b;
      cVar6 = DAT_0c1f;
      if ((cVar1 == '\0' && cVar9 == '\0') && cVar6 == '\0') {
        FUN_f1ce();
      }
      else {
        uVar3 = RAM0c1b;
        DAT_0df7._1_1_ = (char)(uVar3 >> 2);
        uVar3 = RAM0c1f;
        DAT_0df6 = (char)(uVar3 >> 2);
        uVar4 = RAM0c17;
        uVar2 = DAT_0df6;
        FUN_f26e();
      }
      bVar8 = DAT_0bfe;
      if ((bVar8 & 0x40) != 0) {
        DAT_0c03 = 0;
        DAT_0c04 = 0;
        DAT_0922 = 0;
        DAT_0923 = 0;
        bVar8 = DAT_0bfe;
        DAT_0bfe = bVar8 | 0x80;
        bVar8 = DAT_0880;
        DAT_0880 = bVar8 & 0x7f;
        bVar8 = DAT_0881;
        DAT_0881 = bVar8 & 0x7f;
        bVar8 = DAT_088c;
        DAT_088c = bVar8 & 0xdf;
        uVar3 = DAT_0c08;
        uVar5 = DAT_0c0c;
        DAT_0c14 = uVar3 + uVar5;
        cVar1 = DAT_0c07;
        cVar9 = DAT_0c0b;
        DAT_0c13 = cVar1 + cVar9 + CARRY2(uVar3,uVar5);
        cVar1 = DAT_0c07;
        if (cVar1 == '\0') {
          uVar3 = DAT_0c08;
          uVar5 = DAT_0db6;
          if (uVar3 < uVar5) {
            DAT_0c1f = 0xff;
            return;
          }
        }
        bVar7 = DAT_0c1f;
        bVar8 = DAT_0c1b;
        DAT_0c1f = bVar7 | bVar8;
        return;
      }
    }
    uVar2 = DAT_0c07;
    DAT_0c0b = uVar2;
    uVar4 = DAT_0c08;
    DAT_0c0c = uVar4;
  }
  cVar1 = DAT_0c05;
  bVar8 = cVar1 + 1;
  if (0xe < bVar8) {
    bVar8 = 1;
  }
  DAT_0c05 = bVar8;
  return;
}


/* Entry f147 */

void FUN_f147(void)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  short sVar7;
  ushort uVar8;
  
  cVar2 = DAT_0c03;
  if (cVar2 == '\t') {
    cVar2 = DAT_0c07;
    if (cVar2 == '\0') {
      uVar5 = DAT_0c08;
      uVar8 = DAT_0db6;
      if (uVar5 < uVar8) {
        DAT_0c1f = 0xff;
        return;
      }
    }
    uVar3 = DAT_0c07;
    DAT_0c1f = uVar3;
    uVar6 = DAT_0c08;
    DAT_0c20 = uVar6;
  }
  else if (cVar2 == '\n') {
    bVar1 = DAT_0c1f;
    if (-1 < (short)((ushort)bVar1 << 8)) {
      bVar4 = DAT_0c07;
      DAT_0c1f = bVar1 | bVar4;
    }
    uVar6 = DAT_0c08;
    DAT_0c1c = uVar6;
  }
  else if (cVar2 == '\0') {
    bVar1 = DAT_0c1f;
    if ((short)((ushort)bVar1 << 8) < 0) {
      uVar5 = DAT_0c08;
      sVar7 = DAT_0c08;
      uVar8 = DAT_0c1c;
      if ((uVar5 >> 2) + sVar7 < uVar8) {
        return;
      }
    }
    else {
      cVar2 = DAT_0c07;
      if (bVar1 != 0 || cVar2 != '\0') {
        return;
      }
      bVar1 = DAT_0da3;
      DAT_0c36 = (ushort)bVar1 << 2;
      FUN_f1ce();
      bVar1 = DAT_0bfe;
      if ((bVar1 & 0x40) != 0) {
        DAT_0c35 = 0;
        return;
      }
    }
    bVar1 = DAT_0c35;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0c35 = bVar1;
    bVar4 = DAT_0da2;
    if (bVar4 <= bVar1) {
      FUN_721f();
    }
  }
  return;
}


/* Entry f1ce */

void FUN_f1ce(void)

{
  undefined2 uVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  short sVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  
  uVar1 = DAT_0c1c;
  RAM0df9 = uVar1;
  uVar1 = DAT_0c20;
  RAM0dfb = uVar1;
  uVar1 = DAT_0c08;
  RAM0dfd = uVar1;
  bVar10 = DAT_0c20._0_1_;
  bVar9 = DAT_0c1c._0_1_;
  bVar9 = (byte)((ushort)uVar1 >> 8) | bVar10 | bVar9;
  if ((bVar9 & 0xf8) == 0) {
    uVar4 = RAM0df9;
    RAM0df9 = uVar4 >> 3;
    uVar4 = RAM0dfb;
    RAM0dfb = uVar4 >> 3;
    uVar4 = RAM0dfd;
    RAM0dfd = uVar4 >> 3;
    uVar2 = DAT_0dfa._0_1_;
    DAT_0df7._1_1_ = uVar2;
    uVar2 = DAT_0dfc;
    uVar8 = DAT_0dfe;
    FUN_f26e(CONCAT11(uVar2,uVar8));
    return;
  }
  if (bVar9 < 0x10) {
    DAT_0c34 = 4;
  }
  else if (bVar9 < 0x20) {
    DAT_0c34 = 3;
  }
  else if (bVar9 < 0x40) {
    DAT_0c34 = 2;
  }
  else if (bVar9 < 0x80) {
    DAT_0c34 = 1;
  }
  else {
    DAT_0c34 = 0;
  }
  while (cVar3 = DAT_0c34, cVar3 != '\0') {
    cVar3 = DAT_0c34;
    DAT_0c34 = cVar3 + -1;
    sVar7 = RAM0df9;
    RAM0df9 = sVar7 << 1;
    sVar7 = RAM0dfb;
    RAM0dfb = sVar7 << 1;
    sVar7 = RAM0dfd;
    RAM0dfd = sVar7 << 1;
  }
  uVar2 = DAT_0df9;
  DAT_0df7._1_1_ = uVar2;
  bVar9 = DAT_0dfa._1_1_;
  bVar10 = DAT_0dfd;
  RAM0df6 = (ushort)bVar9 * (ushort)bVar10;
  bVar9 = DAT_0df7._1_1_;
  bVar10 = DAT_0df7._1_1_;
  uVar11 = (ushort)bVar9 * (ushort)bVar10;
  uVar4 = RAM0df6;
  if (uVar4 <= uVar11) {
    uVar4 = RAM0df6;
    DAT_0dfa = uVar11 / uVar4;
    uVar5 = RAM0df6;
    RAM0dfc = (short)(((uint)(uVar11 % uVar4) << 0x10) / (uint)uVar5);
    cVar3 = DAT_0dfa._0_1_;
    if (cVar3 != '\0') {
LAB_f392:
      bVar9 = DAT_0bfe;
      DAT_0bfe = bVar9 | 0x40;
      return;
    }
    uVar11 = RAM0dfb;
    DAT_0c3c = uVar11;
    uVar4 = DAT_0c36;
    if (uVar4 <= uVar11) {
      bVar9 = DAT_0bfe;
      if ((bVar9 & 0x80) != 0) goto LAB_f392;
      bVar9 = DAT_0c17;
      bVar10 = DAT_0c1f;
      if ((bVar9 | bVar10) == 0) {
        uVar1 = DAT_0c18;
        RAM0df6 = uVar1;
        uVar1 = DAT_0c20;
        RAM0df8 = uVar1;
      }
      else if (((bVar9 | bVar10) & 0xf0) == 0) {
        uVar2 = DAT_0c17;
        DAT_0df6 = uVar2;
        uVar1 = DAT_0c18;
        DAT_0df7 = uVar1;
        uVar2 = DAT_0c1f;
        DAT_0df9 = uVar2;
        uVar1 = DAT_0c20;
        DAT_0dfa = uVar1;
        do {
          bVar9 = DAT_0df6;
          DAT_0df6 = bVar9 >> 1;
          uVar1 = DAT_0df7;
          bVar10 = (byte)((ushort)uVar1 >> 8);
          DAT_0df7 = CONCAT11(bVar10 >> 1 | bVar9 << 7,(byte)uVar1 >> 1 | bVar10 << 7);
          bVar9 = DAT_0df9;
          DAT_0df9 = bVar9 >> 1;
          uVar1 = DAT_0dfa;
          bVar10 = (byte)((ushort)uVar1 >> 8);
          DAT_0dfa = CONCAT11(bVar10 >> 1 | bVar9 << 7,(byte)uVar1 >> 1 | bVar10 << 7);
          cVar3 = DAT_0df6;
          cVar6 = DAT_0df9;
        } while (cVar3 != '\0' || cVar6 != '\0');
        uVar1 = DAT_0df7;
        RAM0df6 = uVar1;
        uVar1 = DAT_0dfa;
        RAM0df8 = uVar1;
      }
      else {
        uVar1 = RAM0c17;
        RAM0df6 = uVar1;
        uVar2 = DAT_0c18._1_1_;
        DAT_0df7._1_1_ = uVar2;
        uVar1 = RAM0c1f;
        RAM0df9 = uVar1;
        uVar2 = DAT_0c20._1_1_;
        DAT_0dfa._1_1_ = uVar2;
        do {
          bVar9 = DAT_0df7._1_1_;
          DAT_0df7._1_1_ = bVar9 << 1;
          uVar1 = RAM0df6;
          RAM0df6 = CONCAT11((char)((ushort)uVar1 >> 8) << 1 | (byte)uVar1 >> 7,
                             (byte)uVar1 << 1 | bVar9 >> 7);
          bVar9 = DAT_0dfa._1_1_;
          DAT_0dfa._1_1_ = bVar9 << 1;
          uVar1 = RAM0df9;
          bVar10 = (char)((ushort)uVar1 >> 8) << 1 | (byte)uVar1 >> 7;
          RAM0df9 = CONCAT11(bVar10,(byte)uVar1 << 1 | bVar9 >> 7);
          bVar9 = DAT_0df6;
        } while ((bVar10 | bVar9) < 0x80);
        uVar1 = RAM0df9;
        RAM0df8 = uVar1;
      }
      uVar4 = RAM0df6;
      uVar11 = RAM0df8;
      DAT_0dfa = uVar4 / uVar11;
      uVar5 = RAM0df8;
      RAM0dfc = (short)(((uint)(uVar4 % uVar11) << 0x10) / (uint)uVar5);
      cVar3 = DAT_0dfa._0_1_;
      if (cVar3 == '\0') {
        uVar1 = RAM0dfb;
        DAT_0c3e = uVar1;
        bVar9 = DAT_0da0;
        DAT_0c38 = (ushort)bVar9 << 2;
        uVar4 = DAT_0c3e;
        if ((ushort)bVar9 << 2 < uVar4) {
          bVar9 = DAT_0da1;
          uVar11 = (ushort)bVar9 * 4;
          DAT_0c3a = uVar11;
          uVar4 = DAT_0c3e;
          if (uVar4 <= uVar11 && uVar11 - uVar4 != 0) goto LAB_f392;
        }
      }
    }
  }
  bVar9 = DAT_0bfe;
  DAT_0bfe = bVar9 & 0xbf;
  return;
}


/* Entry f26e */

void FUN_f26e(ushort param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  char cVar5;
  ushort uVar6;
  char cVar7;
  byte bVar8;
  ushort uVar9;
  
  RAM0df6 = (param_1 >> 8) * (param_1 & 0xff);
  bVar1 = DAT_0df7._1_1_;
  bVar8 = DAT_0df7._1_1_;
  uVar9 = (ushort)bVar1 * (ushort)bVar8;
  uVar4 = RAM0df6;
  if (uVar4 <= uVar9) {
    uVar4 = RAM0df6;
    DAT_0dfa = uVar9 / uVar4;
    uVar6 = RAM0df6;
    RAM0dfc = (short)(((uint)(uVar9 % uVar4) << 0x10) / (uint)uVar6);
    cVar5 = DAT_0dfa._0_1_;
    if (cVar5 != '\0') {
LAB_f392:
      bVar1 = DAT_0bfe;
      DAT_0bfe = bVar1 | 0x40;
      return;
    }
    uVar9 = RAM0dfb;
    DAT_0c3c = uVar9;
    uVar4 = DAT_0c36;
    if (uVar4 <= uVar9) {
      bVar1 = DAT_0bfe;
      if ((bVar1 & 0x80) != 0) goto LAB_f392;
      bVar1 = DAT_0c17;
      bVar8 = DAT_0c1f;
      if ((bVar1 | bVar8) == 0) {
        uVar3 = DAT_0c18;
        RAM0df6 = uVar3;
        uVar3 = DAT_0c20;
        RAM0df8 = uVar3;
      }
      else if (((bVar1 | bVar8) & 0xf0) == 0) {
        uVar2 = DAT_0c17;
        DAT_0df6 = uVar2;
        uVar3 = DAT_0c18;
        DAT_0df7 = uVar3;
        uVar2 = DAT_0c1f;
        DAT_0df9 = uVar2;
        uVar3 = DAT_0c20;
        DAT_0dfa = uVar3;
        do {
          bVar1 = DAT_0df6;
          DAT_0df6 = bVar1 >> 1;
          uVar3 = DAT_0df7;
          bVar8 = (byte)((ushort)uVar3 >> 8);
          DAT_0df7 = CONCAT11(bVar8 >> 1 | bVar1 << 7,(byte)uVar3 >> 1 | bVar8 << 7);
          bVar1 = DAT_0df9;
          DAT_0df9 = bVar1 >> 1;
          uVar3 = DAT_0dfa;
          bVar8 = (byte)((ushort)uVar3 >> 8);
          DAT_0dfa = CONCAT11(bVar8 >> 1 | bVar1 << 7,(byte)uVar3 >> 1 | bVar8 << 7);
          cVar5 = DAT_0df6;
          cVar7 = DAT_0df9;
        } while (cVar5 != '\0' || cVar7 != '\0');
        uVar3 = DAT_0df7;
        RAM0df6 = uVar3;
        uVar3 = DAT_0dfa;
        RAM0df8 = uVar3;
      }
      else {
        uVar3 = RAM0c17;
        RAM0df6 = uVar3;
        uVar2 = DAT_0c18._1_1_;
        DAT_0df7._1_1_ = uVar2;
        uVar3 = RAM0c1f;
        RAM0df9 = uVar3;
        uVar2 = DAT_0c20._1_1_;
        DAT_0dfa._1_1_ = uVar2;
        do {
          bVar1 = DAT_0df7._1_1_;
          DAT_0df7._1_1_ = bVar1 << 1;
          uVar3 = RAM0df6;
          RAM0df6 = CONCAT11((char)((ushort)uVar3 >> 8) << 1 | (byte)uVar3 >> 7,
                             (byte)uVar3 << 1 | bVar1 >> 7);
          bVar1 = DAT_0dfa._1_1_;
          DAT_0dfa._1_1_ = bVar1 << 1;
          uVar3 = RAM0df9;
          bVar8 = (char)((ushort)uVar3 >> 8) << 1 | (byte)uVar3 >> 7;
          RAM0df9 = CONCAT11(bVar8,(byte)uVar3 << 1 | bVar1 >> 7);
          bVar1 = DAT_0df6;
        } while ((bVar8 | bVar1) < 0x80);
        uVar3 = RAM0df9;
        RAM0df8 = uVar3;
      }
      uVar4 = RAM0df6;
      uVar9 = RAM0df8;
      DAT_0dfa = uVar4 / uVar9;
      uVar6 = RAM0df8;
      RAM0dfc = (short)(((uint)(uVar4 % uVar9) << 0x10) / (uint)uVar6);
      cVar5 = DAT_0dfa._0_1_;
      if (cVar5 == '\0') {
        uVar3 = RAM0dfb;
        DAT_0c3e = uVar3;
        bVar1 = DAT_0da0;
        DAT_0c38 = (ushort)bVar1 << 2;
        uVar4 = DAT_0c3e;
        if ((ushort)bVar1 << 2 < uVar4) {
          bVar1 = DAT_0da1;
          uVar9 = (ushort)bVar1 * 4;
          DAT_0c3a = uVar9;
          uVar4 = DAT_0c3e;
          if (uVar4 <= uVar9 && uVar9 - uVar4 != 0) goto LAB_f392;
        }
      }
    }
  }
  bVar1 = DAT_0bfe;
  DAT_0bfe = bVar1 & 0xbf;
  return;
}


/* Entry f39d */

void FUN_f39d(void)

{
  undefined1 uVar1;
  
  uVar1 = DAT_08c4;
  DAT_0085 = uVar1;
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
  short sVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_08be;
  DAT_08be = bVar3 | 0x10;
  DAT_004e = 4;
  bVar3 = DAT_00e1;
  if ((bVar3 & 4) == 0) {
    sVar1 = DAT_0ab0;
    DAT_0ab0 = sVar1 + 1;
    uVar2 = DAT_0b98;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b98 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
  }
  else {
    bVar3 = DAT_004b;
    DAT_004b = bVar3 & 0xef | 0x20;
  }
  bVar3 = DAT_08be;
  DAT_08be = bVar3 & 0xef;
  return;
}


/* Entry f424 */

void FUN_f424(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  short sVar5;
  
  bVar1 = DAT_004c;
  if ((bVar1 & 8) == 0) {
LAB_f486:
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xf7;
    bVar1 = DAT_0049;
    DAT_0049 = bVar1 & 0xbf | 0x80;
    DAT_004e = 8;
  }
  else {
    bVar1 = DAT_0880;
    if ((((~bVar1 & 0x40) != 0) && (bVar1 = DAT_0880, (~bVar1 & 4) != 0)) &&
       (bVar1 = DAT_088d, (~bVar1 & 0x20) != 0)) {
      bVar1 = DAT_00e1;
      if ((bVar1 & 8) == 0) goto LAB_f498;
      bVar4 = DAT_0c03;
      bVar1 = DAT_0924;
      if ((bVar4 & 0x1f) != bVar1) goto LAB_f495;
      bVar1 = DAT_0a2e._0_1_;
      bVar4 = DAT_0d9e;
      if (bVar1 < bVar4) {
LAB_f476:
        bVar1 = DAT_0a93;
        DAT_0a93 = bVar1 & 0xfd;
        sVar5 = DAT_0af0;
        sVar2 = DAT_0aa4;
        sVar5 = sVar5 + sVar2;
      }
      else {
        sVar3 = DAT_0af0;
        sVar2 = DAT_0aa4;
        sVar5 = DAT_0b7a;
        sVar5 = (sVar3 + sVar2) - sVar5;
        DAT_0e32 = sVar5;
        sVar2 = DAT_0a9a;
        if (-1 < sVar5 - sVar2) goto LAB_f476;
        bVar1 = DAT_0a93;
        DAT_0a93 = bVar1 | 2;
        sVar5 = DAT_0b7a;
        sVar2 = DAT_0a9a;
        sVar5 = sVar5 + sVar2;
      }
      DAT_0056 = sVar5;
      bVar1 = DAT_0a92;
      DAT_0a92 = bVar1 | 0x80;
      goto LAB_f486;
    }
  }
LAB_f495:
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0xf7;
LAB_f498:
  DAT_004e = 8;
  return;
}


/* Entry f49f */

void FUN_f49f(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = DAT_088c;
  if ((((((((~bVar1 & 0x20) != 0) && (bVar1 = DAT_08a0, (~bVar1 & 4) != 0)) &&
         (bVar1 = DAT_08b2, (~bVar1 & 0x80) != 0)) &&
        ((bVar1 = DAT_088c, (~bVar1 & 0x80) != 0 && (bVar1 = DAT_0d08, (~bVar1 & 1) != 0)))) &&
       ((bVar1 = DAT_0884, (bVar1 & 7) == 0 &&
        ((bVar1 = DAT_0885, (~bVar1 & 0x40) != 0 && (bVar1 = DAT_0bf8, (~bVar1 & 0x80) != 0)))))) &&
      ((cVar3 = DAT_0dd9, cVar3 == -0x80 || (bVar1 = DAT_08b0, (~bVar1 & 8) != 0)))) &&
     ((bVar1 = DAT_08b1, (~bVar1 & 0x10) != 0 && (bVar1 = DAT_0886, (bVar1 & 0xc1) == 0)))) {
    bVar1 = DAT_0886;
    if ((~bVar1 & 4) != 0) {
      bVar1 = DAT_088b;
      if ((~bVar1 & 0x80) == 0) {
        cVar3 = DAT_0923;
      }
      else {
        cVar3 = DAT_0c04;
      }
      cVar2 = DAT_0a1c;
      if (cVar3 == cVar2) {
        FUN_f519();
      }
    }
    bVar1 = DAT_0886;
    if ((~bVar1 & 2) != 0) {
      bVar1 = DAT_088b;
      if ((~bVar1 & 0x80) == 0) {
        cVar3 = DAT_0923;
      }
      else {
        cVar3 = DAT_0c04;
      }
      cVar2 = DAT_0a1d;
      if (cVar3 == cVar2) {
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
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  
  bVar2 = DAT_088c;
  if (((~bVar2 & 8) == 0) || (bVar2 = DAT_089a, (~bVar2 & 8) == 0)) {
    return;
  }
  bVar2 = DAT_08b1;
  if ((bVar2 & 0x80) != 0) {
    bVar2 = DAT_088c;
    DAT_088c = bVar2 & 0xdf;
    bVar2 = DAT_088c;
    DAT_088c = bVar2 & 0xef;
    return;
  }
  bVar2 = DAT_088c;
  DAT_088c = bVar2 & 0xdf;
  bVar2 = DAT_088c;
  DAT_088c = bVar2 & 0xef;
  bVar2 = DAT_09cf;
  if ((bVar2 & 1) != 0) {
    bVar2 = DAT_09cf;
    DAT_09cf = bVar2 | 2;
  }
  bVar2 = DAT_08c1;
  DAT_08c1 = bVar2 | 1;
  DAT_004e = 0x40;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x40) != 0) {
    uVar3 = DAT_092a;
    DAT_0b72 = uVar3;
    DAT_0b76 = 0;
    goto LAB_f58a;
  }
  sVar1 = DAT_005c;
  sVar7 = DAT_0044;
  if (sVar1 - sVar7 < 0) {
LAB_f56a:
    uVar6 = 0;
  }
  else {
    sVar5 = DAT_0db2;
    uVar6 = (sVar1 - sVar7) - sVar5;
    if ((short)uVar6 < 0) goto LAB_f56a;
  }
  DAT_0e02 = uVar6;
  uVar4 = DAT_0b76;
  if ((uVar6 <= uVar4) || (sVar7 = DAT_0b76, sVar7 == 0)) {
    sVar7 = DAT_0e02;
    DAT_0b76 = sVar7;
  }
  sVar1 = DAT_092a;
  DAT_0b72 = sVar7 + sVar1;
  bVar2 = DAT_0a18;
  DAT_0a18 = bVar2 & 0x7f;
LAB_f58a:
  FUN_c55b();
  bVar2 = DAT_08c1;
  DAT_08c1 = bVar2 & 0xfe;
  return;
}


/* Entry f592 */

void FUN_f592(void)

{
  short sVar1;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  char cVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  
  cVar5 = DAT_0d87;
  if ((((cVar5 == '\t') || (bVar2 = DAT_088c, (~bVar2 & 0x10) == 0)) ||
      (bVar2 = DAT_088c, (~bVar2 & 4) == 0)) ||
     ((bVar2 = DAT_089a, (~bVar2 & 4) == 0 || (bVar2 = DAT_08b1, (bVar2 & 0x80) != 0)))) {
    return;
  }
  bVar2 = DAT_09cf;
  if ((bVar2 & 1) != 0) {
    bVar2 = DAT_09cf;
    DAT_09cf = bVar2 | 2;
  }
  bVar2 = DAT_08c1;
  DAT_08c1 = bVar2 | 4;
  DAT_004e = 0x80;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x80) != 0) {
    uVar3 = DAT_092c;
    DAT_0b74 = uVar3;
    DAT_0b78 = 0;
    goto LAB_f5ff;
  }
  sVar1 = DAT_005e;
  sVar8 = DAT_0044;
  if (sVar1 - sVar8 < 0) {
LAB_f5df:
    uVar7 = 0;
  }
  else {
    sVar6 = DAT_0db2;
    uVar7 = (sVar1 - sVar8) - sVar6;
    if ((short)uVar7 < 0) goto LAB_f5df;
  }
  DAT_0e02 = uVar7;
  uVar4 = DAT_0b78;
  if ((uVar7 <= uVar4) || (sVar8 = DAT_0b78, sVar8 == 0)) {
    sVar8 = DAT_0e02;
    DAT_0b78 = sVar8;
  }
  sVar1 = DAT_092c;
  DAT_0b74 = sVar8 + sVar1;
  bVar2 = DAT_0a18;
  DAT_0a18 = bVar2 & 0xdf;
LAB_f5ff:
  FUN_c712();
  bVar2 = DAT_08c1;
  DAT_08c1 = bVar2 & 0xfb;
  return;
}


/* Entry f607 */

void FUN_f607(void)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  
  DAT_004e = 0x40;
  bVar1 = DAT_00e1;
  if ((bVar1 & 0x40) == 0) {
    bVar1 = DAT_0a18;
    if ((~bVar1 & 0x80) == 0) {
      bVar1 = DAT_0a18;
      DAT_0a18 = bVar1 & 0x7f;
      sVar5 = DAT_092a;
    }
    else {
      sVar5 = DAT_0b72;
    }
    bVar1 = DAT_0cf2;
    if ((~bVar1 & 1) == 0) {
      bVar1 = DAT_0cf3;
      bVar1 = (bVar1 + 1) - (0xfe < bVar1);
      DAT_0cf3 = bVar1;
      bVar3 = DAT_0da4;
      if (bVar3 <= bVar1) {
        bVar1 = DAT_0cf2;
        DAT_0cf2 = bVar1 & 0xfe;
        cVar4 = DAT_0da5;
        if (cVar4 != '\0') {
          DAT_0cf4 = 0;
          bVar1 = DAT_0cf2;
          DAT_0cf2 = bVar1 | 4;
        }
      }
      sVar5 = DAT_0cf6;
    }
    else {
      bVar1 = DAT_0cf2;
      if ((bVar1 & 4) != 0) {
        bVar1 = DAT_0cf4;
        bVar1 = (bVar1 + 1) - (0xfe < bVar1);
        DAT_0cf4 = bVar1;
        bVar3 = DAT_0da5;
        if (bVar3 <= bVar1) {
          bVar1 = DAT_0cf2;
          DAT_0cf2 = bVar1 & 0xfb;
        }
      }
    }
    sVar2 = DAT_005c;
    DAT_005c = sVar5 + sVar2;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0x30;
    DAT_004e = 0x40;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 & 0xf7;
    return;
  }
  bVar1 = DAT_0a18;
  if ((bVar1 & 0x80) == 0) {
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 & 0xf7;
    return;
  }
  sVar2 = DAT_0a2a;
  sVar5 = DAT_0044;
  if ((sVar2 + -5) - sVar5 < 0) {
    sVar5 = DAT_0044;
    sVar5 = sVar5 + 5;
  }
  else {
    sVar5 = DAT_0a2a;
  }
  DAT_005c = sVar5;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 & 0xef | 0x20;
  DAT_004e = 0x40;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 0x40;
  bVar1 = DAT_0a18;
  DAT_0a18 = bVar1 | 8;
  bVar1 = DAT_0a17;
  DAT_0a17 = bVar1 | 8;
  bVar1 = DAT_0a19;
  DAT_0a19 = bVar1 | 8;
  return;
}


/* Entry f6c0 */

void FUN_f6c0(void)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  
  DAT_004e = 0x80;
  bVar1 = DAT_00e1;
  if ((bVar1 & 0x80) == 0) {
    bVar1 = DAT_0a18;
    if ((~bVar1 & 0x20) == 0) {
      bVar1 = DAT_0a18;
      DAT_0a18 = bVar1 & 0xdf;
      sVar5 = DAT_092c;
    }
    else {
      sVar5 = DAT_0b74;
    }
    bVar1 = DAT_0cf2;
    if ((~bVar1 & 1) == 0) {
      bVar1 = DAT_0cf3;
      bVar1 = (bVar1 + 1) - (0xfe < bVar1);
      DAT_0cf3 = bVar1;
      bVar3 = DAT_0da4;
      if (bVar3 <= bVar1) {
        bVar1 = DAT_0cf2;
        DAT_0cf2 = bVar1 & 0xfe;
        cVar4 = DAT_0da5;
        if (cVar4 != '\0') {
          DAT_0cf4 = 0;
          bVar1 = DAT_0cf2;
          DAT_0cf2 = bVar1 | 4;
        }
      }
      sVar5 = DAT_0cfc;
    }
    else {
      bVar1 = DAT_0cf2;
      if ((bVar1 & 4) != 0) {
        bVar1 = DAT_0cf4;
        bVar1 = (bVar1 + 1) - (0xfe < bVar1);
        DAT_0cf4 = bVar1;
        bVar3 = DAT_0da5;
        if (bVar3 <= bVar1) {
          bVar1 = DAT_0cf2;
          DAT_0cf2 = bVar1 & 0xfb;
        }
      }
    }
    sVar2 = DAT_005e;
    DAT_005e = sVar5 + sVar2;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0xc0;
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x80;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 & 0xfd;
    return;
  }
  bVar1 = DAT_0a18;
  if ((bVar1 & 0x20) == 0) {
    DAT_004e = 0x80;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0x7f;
    bVar1 = DAT_0a18;
    DAT_0a18 = bVar1 & 0xfd;
    return;
  }
  sVar2 = DAT_0a2c;
  sVar5 = DAT_0044;
  if ((sVar2 + -5) - sVar5 < 0) {
    sVar5 = DAT_0044;
    sVar5 = sVar5 + 5;
  }
  else {
    sVar5 = DAT_0a2c;
  }
  DAT_005e = sVar5;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 & 0xbf | 0x80;
  DAT_004e = 0x80;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 0x80;
  bVar1 = DAT_0a18;
  DAT_0a18 = bVar1 | 2;
  bVar1 = DAT_0a17;
  DAT_0a17 = bVar1 | 2;
  bVar1 = DAT_0a19;
  DAT_0a19 = bVar1 | 2;
  return;
}


/* Entry f7a0 */

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
    if ((~bVar6 & 0x80) == 0) {
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
      if ((((((~bVar6 & 4) != 0) && (bVar6 = DAT_08b2, (~bVar6 & 0x80) != 0)) &&
           (puVar2 = (undefined *)DAT_08f8, puVar2 < &UNK_2800)) &&
          ((((bVar6 = DAT_0884, (~bVar6 & 4) != 0 && (bVar6 = DAT_0d08, (~bVar6 & 1) != 0)) &&
            ((bVar6 = DAT_0884, (~bVar6 & 2) != 0 &&
             ((bVar6 = DAT_088c, (~bVar6 & 0x80) != 0 && (bVar6 = DAT_0885, (~bVar6 & 0x40) != 0))))
            )) && (bVar6 = DAT_0bf8, (~bVar6 & 0x80) != 0)))) &&
         (((bVar6 = DAT_089b, (~bVar6 & 0x80) != 0 && (bVar6 = DAT_089b, (~bVar6 & 8) != 0)) &&
          (bVar6 = DAT_0880, (~bVar6 & 0x40) != 0)))) {
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


