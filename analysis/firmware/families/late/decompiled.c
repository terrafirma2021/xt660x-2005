/* Approximate CPU12 pseudocode, not original source. See raw p-code and unresolved ranges. */
/* Entry 4800 */

/* WARNING: This function may have set the stack pointer */

void application_init(void)

{
  undefined1 uVar1;
  short sVar2;
  undefined *puVar3;
  char cVar4;
  byte extraout_A;
  byte bVar5;
  byte extraout_A_00;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  
  DAT_00f8 = 0xc0;
  DAT_0082 = 0;
  DAT_0082 = 0x80;
  DAT_0083 = 0x40;
  DAT_0084 = 99;
  DAT_0085 = 0x10;
  DAT_0000 = 0xf8;
  DAT_0002 = 0x1f;
  DAT_0001 = 0x1f;
  DAT_0003 = 0xec;
  DAT_00f0 = 0xa0;
  DAT_00f2 = 0xff;
  DAT_00e0 = 0xf6;
  DAT_00e2 = 0xd9;
  DAT_00e8 = 0xff;
  DAT_00ea = 0xea;
  DAT_0009 = 0x9f;
  DAT_0033 = 0x80;
  DAT_0046 = 0x80;
  DAT_004d = 5;
  DAT_0040 = 0xd8;
  DAT_0048 = 0x30;
  DAT_0049 = 0x80;
  DAT_0041 = 0x48;
  bVar5 = DAT_00ee;
  DAT_00ee = bVar5 | 10;
  RAM00d0 = 0x40;
  DAT_00d2._1_1_ = 0x24;
  DAT_00d8 = 0x50;
  DAT_00da = 3;
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  if (DAT_1841 == '@') {
    DAT_00a1 = 0;
    DAT_00a3 = 7;
    DAT_00a5 = 0x10;
    DAT_00b4 = 0xff;
    DAT_00b5 = 0xff;
    DAT_00bc = 0xff;
    DAT_00bd = 0xff;
    DAT_00a0 = 2;
  }
  prefix_candidate_5fa4();
  bVar5 = DAT_0008;
  DAT_0008 = bVar5 & 0xf3;
  uVar1 = DAT_0001;
  DAT_0898 = CONCAT11(uVar1,uVar1);
  uVar1 = DAT_0000;
  DAT_0896 = CONCAT11(uVar1,uVar1);
  DAT_0880 = 0x44;
  DAT_0881 = 0xb0;
  DAT_0888 = 0x10;
  FUN_56d5();
  DAT_0941 = 0xff;
  DAT_093b = 0xff;
  DAT_093c = 0xff;
  DAT_093d = 0xff;
  DAT_093e = 0xff;
  DAT_093f = 0xff;
  DAT_0940 = 0xff;
  DAT_0b40 = 0xff;
  DAT_0b30 = 0xff;
  DAT_0b58 = 0xff;
  DAT_0b38 = 0xff;
  DAT_0b39 = 0xff;
  DAT_0ba0 = 0xff;
  DAT_0b35 = 0xff;
  DAT_0b36 = 0xff;
  DAT_0a06 = 0xff;
  DAT_0b9f = 0xff;
  DAT_0a42 = 0xffff;
  DAT_0a44 = 0xffff;
  DAT_0a46 = 0xffff;
  DAT_0a48 = 0xffff;
  DAT_0a4a = 0xffff;
  DAT_0a4c = 0xffff;
  DAT_0a38 = 0xffff;
  DAT_0a3e = 0xffff;
  DAT_0a3c = 0xffff;
  DAT_0a3a = 0xffff;
  DAT_0a40 = 0xffff;
  DAT_0a50 = 0xffff;
  DAT_0a52 = 0xffff;
  DAT_0a4e = 0xffff;
  DAT_0a55 = 0xffff;
  DAT_0a57 = 0xff;
  DAT_0a8a = 0xffff;
  DAT_0d6c = 0xffff;
  DAT_097c = 0x8000;
  DAT_0980 = 0x8000;
  DAT_08e6 = 0x80;
  DAT_09bb = 0x8080;
  DAT_09bd = 0x8080;
  DAT_09bf = 0x8080;
  DAT_09c1 = 0x8080;
  DAT_09c3 = 0x8080;
  DAT_09c5 = 0x8080;
  DAT_09c7 = 0x8080;
  DAT_09c9 = 0x8080;
  DAT_0964 = 0x80;
  DAT_0979 = 0x80;
  DAT_097a = 0x80;
  DAT_0952 = 0x80;
  DAT_0970 = 0x80;
  DAT_0978 = 0x80;
  DAT_0a8e = 0x80;
  DAT_08fa = 0x80;
  DAT_0bdd = 0x80;
  DAT_0ad7 = 0x80;
  DAT_0942 = 0xc0;
  DAT_0c25 = 0xc0;
  DAT_08ea = DAT_4440;
  DAT_0bd6 = DAT_4440;
  bVar5 = DAT_0889;
  DAT_0889 = bVar5 | 0x20;
  uVar8 = DAT_08ec;
  DAT_08ee = uVar8;
  DAT_08c7 = 0x7f;
  DAT_0b29 = 0x7b;
  DAT_0b59 = 1;
  DAT_0944 = 6;
  DAT_0966 = 0x1e0;
  DAT_0948 = 0x9c4;
  DAT_0a32 = 0;
  DAT_0a34 = 0;
  bVar5 = DAT_18ba;
  if (0x16 < DAT_18ba) {
    bVar5 = 0x16;
  }
  if (bVar5 < 0xc) {
    if (bVar5 == 0xb) {
      bVar5 = 10;
    }
  }
  else {
    bVar5 = bVar5 - 0xc;
  }
  DAT_0a2e = bVar5;
  DAT_0a2f = bVar5;
  bVar5 = DAT_0dd8;
  if (bVar5 < 0x17) {
    if (bVar5 == 0xb) {
      bVar5 = 10;
    }
  }
  else {
    bVar5 = 0x16;
  }
  DAT_0a2c = bVar5;
  if (DAT_3866 == '\x02') {
    bVar5 = DAT_0884;
    DAT_0884 = bVar5 | 0x40;
  }
  bVar5 = DAT_0893;
  DAT_0893 = bVar5 | 4;
  bVar5 = DAT_08a3;
  DAT_08a3 = bVar5 | 0x80;
  bVar5 = DAT_08b0;
  DAT_08b0 = bVar5 | 0x40;
  bVar5 = DAT_0880;
  DAT_0880 = bVar5 | 0x80;
  bVar5 = DAT_088c;
  DAT_088c = bVar5 | 0x20;
  bVar5 = DAT_08a0;
  DAT_08a0 = bVar5 | 0x80;
  bVar5 = DAT_08a0;
  DAT_08a0 = bVar5 | 0x40;
  cVar4 = DAT_0e55;
  if (cVar4 == '@') {
    bVar5 = DAT_0ab0;
    DAT_0ab0 = bVar5 | 0x80;
  }
  FUN_4f29();
  uVar8 = DAT_0ed2;
  DAT_08f2 = uVar8;
  DAT_08f4 = uVar8;
  if ((char)((ushort)uVar8 >> 8) == -1) {
    uVar8 = 0xfe00;
  }
  DAT_0b0d = (char)((ushort)uVar8 >> 8);
  uVar6 = DAT_0ed2;
  uVar6 = uVar6 >> 6;
  DAT_08d6 = uVar6;
  DAT_08e8 = uVar6;
  DAT_0bd2 = uVar6;
  DAT_0bd4 = uVar6;
  DAT_08f0 = uVar6;
  DAT_09d4 = uVar6;
  DAT_0b46 = uVar6;
  DAT_0b48 = uVar6;
  DAT_0b4a = uVar6;
  DAT_0b4c = uVar6;
  DAT_0be0 = uVar6;
  DAT_0be2 = uVar6;
  DAT_0be4 = uVar6;
  DAT_0be6 = uVar6;
  uVar8 = DAT_0ed4;
  DAT_0ca8 = uVar8;
  bVar5 = DAT_0880;
  DAT_0880 = bVar5 | 0x20;
  DAT_0900 = uVar8;
  DAT_0ce2 = uVar8;
  DAT_0ce4 = uVar8;
  DAT_0ce0 = uVar8;
  uVar1 = DAT_0ed8;
  DAT_08de = uVar1;
  bVar5 = DAT_0eda;
  DAT_08df = bVar5;
  DAT_0bf0 = bVar5;
  DAT_08e0 = (ushort)bVar5 << 8;
  uVar7 = (ushort)bVar5 << 8;
  uVar6 = uVar7 / 0xf0;
  if (0xfe < uVar6) {
    uVar6 = 0xfe;
  }
  DAT_0b10 = (char)uVar6;
  uVar1 = DAT_0edc;
  DAT_08e3 = uVar1;
  uVar1 = DAT_0ede;
  DAT_08dc = uVar1;
  uVar1 = DAT_0ee6;
  DAT_08e4 = uVar1;
  DAT_0085 = 0;
  prefix_candidate_5fa4(uVar7 % 0xf0);
  bVar5 = DAT_08dc;
  uVar6 = FUN_bbb8((ushort)bVar5 * 0x20,(byte *)((short)&DAT_46ee + 1));
  extraout_A = (byte)(uVar6 >> 8);
  DAT_0914 = extraout_A;
  DAT_0916 = extraout_A;
  bVar5 = (byte)((ushort)extraout_A * 0xa0 >> 8);
  if (0x95 < bVar5) {
    bVar5 = 0x95;
  }
  DAT_0b0c = bVar5;
  bVar5 = DAT_08de;
  uVar6 = FUN_bbb8((ushort)bVar5 * 0x20,(byte *)((short)&DAT_46ee + 1));
  extraout_A_00 = (byte)(uVar6 >> 8);
  DAT_0915 = extraout_A_00;
  bVar5 = (byte)((ushort)extraout_A_00 * 0xa0 >> 8);
  if (0x95 < bVar5) {
    bVar5 = 0x95;
  }
  DAT_0b0f = bVar5;
  bVar5 = DAT_0888;
  DAT_0888 = bVar5 & 0xef;
  bVar5 = DAT_0008;
  DAT_0008 = bVar5 & 0xf3;
  DAT_0eb4 = DAT_f770;
  DAT_0eb6 = DAT_f772;
  DAT_0eb8 = DAT_f774;
  DAT_0eba = DAT_f776;
  if (DAT_4622 == 0x55aa) {
    FUN_502d();
  }
  if (DAT_4624 == -0x55ab) {
    FUN_5309();
    FUN_5454();
  }
  FUN_5471();
  FUN_53ce();
  FUN_5085();
  bVar5 = DAT_0bf7;
  if ((bVar5 & 8) != 0) {
    bVar5 = DAT_0bf4;
    DAT_0bf4 = bVar5 | 0x40;
  }
  cVar4 = DAT_0e4d;
  if (cVar4 != -0x80) {
    bVar5 = DAT_0d21;
    DAT_0d21 = bVar5 | 1;
    FUN_55fe();
  }
  FUN_971d();
  bVar5 = DAT_08b4;
  if ((bVar5 & 0x80) != 0) {
    bVar5 = DAT_08a3;
    DAT_08a3 = bVar5 & 0x7f;
    bVar5 = DAT_08a3;
    DAT_08a3 = bVar5 | 2;
  }
  prefix_candidate_5fbf();
  uVar1 = DAT_0914;
  uVar8 = prefix_candidate_c386();
  DAT_09b4 = uVar8;
  cVar4 = DAT_0d9c;
  if ((cVar4 != -0x80) && (bVar5 = DAT_08b4, (bVar5 & 0x40) != 0)) {
    bVar5 = DAT_08b4;
    DAT_08b4 = bVar5 & 0xbf;
    bVar5 = DAT_0bf4;
    DAT_0bf4 = bVar5 | 0x10;
  }
  FUN_5f95();
  FUN_56c7();
  bVar5 = DAT_004a;
  DAT_004a = bVar5 & 0xfb | 8;
  bVar5 = DAT_004b;
  DAT_004b = bVar5 & 0xeb | 0x28;
  bVar5 = DAT_004c;
  DAT_004c = bVar5 | 6;
  uVar8 = DAT_0044;
  DAT_0b26 = uVar8;
  DAT_0b24 = uVar8;
  uVar1 = DAT_0001;
  DAT_0898 = CONCAT11(uVar1,uVar1);
  do {
    bVar5 = DAT_08be;
    DAT_08be = bVar5 ^ 0x80;
    DAT_0ffc = 0x4bd5;
    FUN_56b0();
    do {
      bVar5 = DAT_0037;
    } while ((bVar5 & 8) == 0);
    bVar5 = DAT_0020;
    if (((bVar5 & 1) != 0) && (sVar2 = DAT_0024, sVar2 == -0x5aa6)) {
      uVar8 = DAT_00d4;
      uVar1 = DAT_00d6._1_1_;
      DAT_00d2._1_1_ = 0;
      DAT_08a3 = 0x80;
      DAT_08b0 = 0x40;
    }
    bVar5 = DAT_0020;
    if ((bVar5 & 4) != 0) {
      DAT_00cb = 0;
    }
    DAT_0ffc = 0x4c03;
    FUN_5a2f();
    DAT_0ffc = 0x4c06;
    FUN_5fb2();
    DAT_0ffc = 0x4c09;
    FUN_f8a0();
    DAT_0ffc = 0x4c0c;
    FUN_5a5b();
    bVar5 = DAT_0881;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4c14;
      FUN_7a56();
    }
    bVar5 = DAT_0881;
    if ((bVar5 & 2) != 0) {
      DAT_0ffc = 0x4c1c;
      FUN_7a63();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 2) != 0) {
      DAT_0ffc = 0x4c24;
      FUN_7bac();
    }
    bVar5 = DAT_0882;
    if ((~bVar5 & 0x80) == 0) {
      DAT_0ffc = 0x4c30;
      FUN_6b36();
      uVar8 = DAT_0a38;
      DAT_0a3a = uVar8;
      uVar6 = DAT_0a3e;
      DAT_0a40 = uVar6;
      DAT_0a3c = uVar6 >> 2;
      bVar5 = DAT_0c25;
      if (((bVar5 & 0x1f) < 2) || (5 < (bVar5 & 0x1f))) {
        uVar1 = DAT_0a8c;
        DAT_0ffc = 0x4c5a;
        FUN_4d49();
        uVar1 = DAT_0e67._0_1_;
        DAT_0944 = uVar1;
        uVar8 = RAM0e69;
        DAT_0a9a = uVar8;
        uVar8 = DAT_0e6b;
        DAT_0aaa = uVar8;
        DAT_0ffc = 0x4c73;
        FUN_4e0f();
      }
      bVar5 = DAT_08a3;
      if ((((((~bVar5 & 4) != 0) && (bVar5 = DAT_08b4, (~bVar5 & 0x80) != 0)) &&
           (puVar3 = (undefined *)RAM0918, puVar3 < &UNK_2800)) &&
          (((bVar5 = DAT_0884, (~bVar5 & 4) != 0 && (bVar5 = DAT_0d21, (~bVar5 & 1) != 0)) &&
           ((bVar5 = DAT_0884, (~bVar5 & 2) != 0 &&
            ((bVar5 = DAT_088c, (~bVar5 & 0x80) != 0 && (bVar5 = DAT_0d71, (~bVar5 & 0x80) != 0)))))
           ))) && ((bVar5 = DAT_0885, (~bVar5 & 0x40) != 0 &&
                   ((((bVar5 = DAT_0c1a, (~bVar5 & 0x80) != 0 &&
                      (bVar5 = DAT_089d, (~bVar5 & 0x80) != 0)) &&
                     (bVar5 = DAT_089d, (~bVar5 & 8) != 0)) &&
                    (bVar5 = DAT_0880, (~bVar5 & 0x40) != 0)))))) {
        DAT_0ffc = 0x4cba;
        FUN_4ecf();
      }
      bVar5 = DAT_0882;
      DAT_0882 = bVar5 & 0x7f;
    }
    DAT_0ffc = 0x4cc1;
    FUN_79a5();
    DAT_0ffc = 0x4cc4;
    FUN_6c49();
    DAT_0ffc = 0x4cc7;
    FUN_5fb2();
    bVar5 = DAT_0887;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4ccf;
      FUN_aebd();
    }
    bVar5 = DAT_0881;
    if ((bVar5 & 0x80) == 0) {
      bVar5 = DAT_0a28;
      DAT_0a28 = bVar5 | 1;
      DAT_0ffc = 0x4cdd;
      FUN_6cda();
    }
    DAT_0ffc = 0x4ce0;
    FUN_5fb2();
    bVar5 = DAT_0887;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4ce8;
      FUN_aebd();
    }
    DAT_0ffc = 0x4ceb;
    FUN_5a5b();
    bVar5 = DAT_0882;
    if ((bVar5 & 0x40) != 0) {
      DAT_0ffc = 0x4cf3;
      FUN_7e9e();
    }
    DAT_0ffc = 0x4cf6;
    FUN_5fb2();
    bVar5 = DAT_0887;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4cfe;
      FUN_aebd();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 0x20) != 0) {
      DAT_0ffc = 0x4d06;
      FUN_97eb();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4d0e;
      FUN_97f8();
    }
    bVar5 = DAT_088e;
    if ((bVar5 & 0x80) != 0) {
      DAT_0ffc = 0x4d16;
      FUN_9fc1();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 0x20) != 0) {
      DAT_0ffc = 0x4d1e;
      FUN_a6eb();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 0x10) != 0) {
      DAT_0ffc = 0x4d26;
      FUN_a963();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 8) != 0) {
      DAT_0ffc = 0x4d2e;
      FUN_b02b();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 2) != 0) {
      DAT_0ffc = 0x4d36;
      FUN_b600();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 0x80) != 0) {
      DAT_0ffc = 0x4d3e;
      FUN_ba36();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 0x40) != 0) {
      DAT_0ffc = 0x4d46;
      FUN_bb7d();
    }
  } while( true );
}


/* Entry 4acb */

/* WARNING: This function may have set the stack pointer */

void FUN_4acb(void)

{
  undefined1 uVar1;
  short sVar2;
  undefined *puVar3;
  char cVar4;
  byte extraout_A;
  byte bVar5;
  byte extraout_A_00;
  undefined2 uVar7;
  ushort uVar6;
  
  prefix_candidate_5fa4();
  bVar5 = DAT_08dc;
  uVar6 = FUN_bbb8((ushort)bVar5 * 0x20,(byte *)((short)&DAT_46ee + 1));
  extraout_A = (byte)(uVar6 >> 8);
  DAT_0914 = extraout_A;
  DAT_0916 = extraout_A;
  bVar5 = (byte)((ushort)extraout_A * 0xa0 >> 8);
  if (0x95 < bVar5) {
    bVar5 = 0x95;
  }
  DAT_0b0c = bVar5;
  bVar5 = DAT_08de;
  uVar6 = FUN_bbb8((ushort)bVar5 * 0x20,(byte *)((short)&DAT_46ee + 1));
  extraout_A_00 = (byte)(uVar6 >> 8);
  DAT_0915 = extraout_A_00;
  bVar5 = (byte)((ushort)extraout_A_00 * 0xa0 >> 8);
  if (0x95 < bVar5) {
    bVar5 = 0x95;
  }
  DAT_0b0f = bVar5;
  bVar5 = DAT_0888;
  DAT_0888 = bVar5 & 0xef;
  bVar5 = DAT_0008;
  DAT_0008 = bVar5 & 0xf3;
  DAT_0eb4 = DAT_f770;
  DAT_0eb6 = DAT_f772;
  DAT_0eb8 = DAT_f774;
  DAT_0eba = DAT_f776;
  if (DAT_4622 == 0x55aa) {
    FUN_502d();
  }
  if (DAT_4624 == -0x55ab) {
    FUN_5309();
    FUN_5454();
  }
  FUN_5471();
  FUN_53ce();
  FUN_5085();
  bVar5 = DAT_0bf7;
  if ((bVar5 & 8) != 0) {
    bVar5 = DAT_0bf4;
    DAT_0bf4 = bVar5 | 0x40;
  }
  cVar4 = DAT_0e4d;
  if (cVar4 != -0x80) {
    bVar5 = DAT_0d21;
    DAT_0d21 = bVar5 | 1;
    FUN_55fe();
  }
  FUN_971d();
  bVar5 = DAT_08b4;
  if ((bVar5 & 0x80) != 0) {
    bVar5 = DAT_08a3;
    DAT_08a3 = bVar5 & 0x7f;
    bVar5 = DAT_08a3;
    DAT_08a3 = bVar5 | 2;
  }
  prefix_candidate_5fbf();
  uVar1 = DAT_0914;
  uVar7 = prefix_candidate_c386();
  DAT_09b4 = uVar7;
  cVar4 = DAT_0d9c;
  if ((cVar4 != -0x80) && (bVar5 = DAT_08b4, (bVar5 & 0x40) != 0)) {
    bVar5 = DAT_08b4;
    DAT_08b4 = bVar5 & 0xbf;
    bVar5 = DAT_0bf4;
    DAT_0bf4 = bVar5 | 0x10;
  }
  FUN_5f95();
  FUN_56c7();
  bVar5 = DAT_004a;
  DAT_004a = bVar5 & 0xfb | 8;
  bVar5 = DAT_004b;
  DAT_004b = bVar5 & 0xeb | 0x28;
  bVar5 = DAT_004c;
  DAT_004c = bVar5 | 6;
  uVar7 = DAT_0044;
  DAT_0b26 = uVar7;
  DAT_0b24 = uVar7;
  uVar1 = DAT_0001;
  DAT_0898 = CONCAT11(uVar1,uVar1);
  do {
    bVar5 = DAT_08be;
    DAT_08be = bVar5 ^ 0x80;
    DAT_0ffc = 0x4bd5;
    FUN_56b0();
    do {
      bVar5 = DAT_0037;
    } while ((bVar5 & 8) == 0);
    bVar5 = DAT_0020;
    if (((bVar5 & 1) != 0) && (sVar2 = DAT_0024, sVar2 == -0x5aa6)) {
      uVar7 = DAT_00d4;
      uVar1 = DAT_00d6._1_1_;
      DAT_00d2._1_1_ = 0;
      DAT_08a3 = 0x80;
      DAT_08b0 = 0x40;
    }
    bVar5 = DAT_0020;
    if ((bVar5 & 4) != 0) {
      DAT_00cb = 0;
    }
    DAT_0ffc = 0x4c03;
    FUN_5a2f();
    DAT_0ffc = 0x4c06;
    FUN_5fb2();
    DAT_0ffc = 0x4c09;
    FUN_f8a0();
    DAT_0ffc = 0x4c0c;
    FUN_5a5b();
    bVar5 = DAT_0881;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4c14;
      FUN_7a56();
    }
    bVar5 = DAT_0881;
    if ((bVar5 & 2) != 0) {
      DAT_0ffc = 0x4c1c;
      FUN_7a63();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 2) != 0) {
      DAT_0ffc = 0x4c24;
      FUN_7bac();
    }
    bVar5 = DAT_0882;
    if ((~bVar5 & 0x80) == 0) {
      DAT_0ffc = 0x4c30;
      FUN_6b36();
      uVar7 = DAT_0a38;
      DAT_0a3a = uVar7;
      uVar6 = DAT_0a3e;
      DAT_0a40 = uVar6;
      DAT_0a3c = uVar6 >> 2;
      bVar5 = DAT_0c25;
      if (((bVar5 & 0x1f) < 2) || (5 < (bVar5 & 0x1f))) {
        uVar1 = DAT_0a8c;
        DAT_0ffc = 0x4c5a;
        FUN_4d49();
        uVar1 = DAT_0e67._0_1_;
        DAT_0944 = uVar1;
        uVar7 = RAM0e69;
        DAT_0a9a = uVar7;
        uVar7 = DAT_0e6b;
        DAT_0aaa = uVar7;
        DAT_0ffc = 0x4c73;
        FUN_4e0f();
      }
      bVar5 = DAT_08a3;
      if ((((((~bVar5 & 4) != 0) && (bVar5 = DAT_08b4, (~bVar5 & 0x80) != 0)) &&
           (puVar3 = (undefined *)RAM0918, puVar3 < &UNK_2800)) &&
          (((bVar5 = DAT_0884, (~bVar5 & 4) != 0 && (bVar5 = DAT_0d21, (~bVar5 & 1) != 0)) &&
           ((bVar5 = DAT_0884, (~bVar5 & 2) != 0 &&
            ((bVar5 = DAT_088c, (~bVar5 & 0x80) != 0 && (bVar5 = DAT_0d71, (~bVar5 & 0x80) != 0)))))
           ))) && ((bVar5 = DAT_0885, (~bVar5 & 0x40) != 0 &&
                   ((((bVar5 = DAT_0c1a, (~bVar5 & 0x80) != 0 &&
                      (bVar5 = DAT_089d, (~bVar5 & 0x80) != 0)) &&
                     (bVar5 = DAT_089d, (~bVar5 & 8) != 0)) &&
                    (bVar5 = DAT_0880, (~bVar5 & 0x40) != 0)))))) {
        DAT_0ffc = 0x4cba;
        FUN_4ecf();
      }
      bVar5 = DAT_0882;
      DAT_0882 = bVar5 & 0x7f;
    }
    DAT_0ffc = 0x4cc1;
    FUN_79a5();
    DAT_0ffc = 0x4cc4;
    FUN_6c49();
    DAT_0ffc = 0x4cc7;
    FUN_5fb2();
    bVar5 = DAT_0887;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4ccf;
      FUN_aebd();
    }
    bVar5 = DAT_0881;
    if ((bVar5 & 0x80) == 0) {
      bVar5 = DAT_0a28;
      DAT_0a28 = bVar5 | 1;
      DAT_0ffc = 0x4cdd;
      FUN_6cda();
    }
    DAT_0ffc = 0x4ce0;
    FUN_5fb2();
    bVar5 = DAT_0887;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4ce8;
      FUN_aebd();
    }
    DAT_0ffc = 0x4ceb;
    FUN_5a5b();
    bVar5 = DAT_0882;
    if ((bVar5 & 0x40) != 0) {
      DAT_0ffc = 0x4cf3;
      FUN_7e9e();
    }
    DAT_0ffc = 0x4cf6;
    FUN_5fb2();
    bVar5 = DAT_0887;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4cfe;
      FUN_aebd();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 0x20) != 0) {
      DAT_0ffc = 0x4d06;
      FUN_97eb();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4d0e;
      FUN_97f8();
    }
    bVar5 = DAT_088e;
    if ((bVar5 & 0x80) != 0) {
      DAT_0ffc = 0x4d16;
      FUN_9fc1();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 0x20) != 0) {
      DAT_0ffc = 0x4d1e;
      FUN_a6eb();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 0x10) != 0) {
      DAT_0ffc = 0x4d26;
      FUN_a963();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 8) != 0) {
      DAT_0ffc = 0x4d2e;
      FUN_b02b();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 2) != 0) {
      DAT_0ffc = 0x4d36;
      FUN_b600();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 0x80) != 0) {
      DAT_0ffc = 0x4d3e;
      FUN_ba36();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 0x40) != 0) {
      DAT_0ffc = 0x4d46;
      FUN_bb7d();
    }
  } while( true );
}


/* Entry 4d49 */

void FUN_4d49(undefined2 param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  
  uVar3 = (undefined1)((ushort)param_1 >> 8);
  DAT_0e62 = uVar3;
  DAT_0e63._0_1_ = uVar3;
  uVar4 = DAT_0a40;
  uVar4 = FUN_bbf9(uVar4,(byte *)&DAT_0e63);
  RAM0e64 = uVar4;
  bVar2 = DAT_0a93;
  uVar6 = RAM0e64;
  uVar4 = bVar2 + uVar6;
  if (CARRY2((ushort)bVar2,uVar6)) {
    uVar4 = 0xffff;
  }
  sVar5 = uVar4 - DAT_474e;
  if (uVar4 < DAT_474e) {
    sVar5 = 0;
  }
  RAM0e69 = sVar5;
  uVar4 = DAT_0a3c;
  uVar6 = RAM0e69;
  if ((uVar4 < uVar6) || (uVar1 = DAT_0e1c, uVar4 - uVar6 < uVar1)) {
    uVar1 = DAT_0a3c;
    uVar6 = DAT_0a3a;
    uVar4 = uVar1 + uVar6;
    if (CARRY2(uVar1,uVar6)) {
      uVar4 = 0xffff;
    }
    uVar1 = RAM0e69;
    uVar6 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      uVar1 = DAT_0a3c;
      uVar6 = DAT_0a3a;
      uVar4 = uVar1 + uVar6;
      if (CARRY2(uVar1,uVar6)) {
        uVar4 = 0xffff;
      }
      uVar1 = DAT_0a3a;
      uVar6 = uVar4 + uVar1;
      if (CARRY2(uVar4,uVar1)) {
        uVar6 = 0xffff;
      }
      uVar1 = RAM0e69;
      uVar4 = uVar6 - uVar1;
      if (uVar6 < uVar1) {
        uVar6 = DAT_0a3c;
        uVar1 = DAT_0a40;
        uVar4 = uVar6 + uVar1;
        if (CARRY2(uVar6,uVar1)) {
          uVar4 = 0xffff;
        }
        uVar1 = RAM0e69;
        uVar6 = uVar4 - uVar1;
        if ((uVar4 < uVar1) || (uVar4 = DAT_0e1c, uVar6 < uVar4)) {
          uVar6 = DAT_0e1c;
        }
        DAT_0e6b = uVar6;
        DAT_0e67._0_1_ = 3;
      }
      else {
        uVar6 = DAT_0e1c;
        if (uVar4 < uVar6) {
          sVar5 = DAT_0a3a;
          DAT_0e6b = uVar4 + sVar5;
          DAT_0e67._0_1_ = 3;
        }
        else {
          DAT_0e6b = uVar4;
          DAT_0e67._0_1_ = 4;
        }
      }
    }
    else {
      uVar4 = DAT_0e1c;
      if (uVar6 < uVar4) {
        sVar5 = DAT_0a3a;
        DAT_0e6b = uVar6 + sVar5;
        DAT_0e67._0_1_ = 4;
      }
      else {
        DAT_0e6b = uVar6;
        DAT_0e67._0_1_ = 5;
      }
    }
  }
  else {
    DAT_0e6b = uVar4 - uVar6;
    DAT_0e67._0_1_ = 6;
  }
  return;
}


/* Entry 4e0f */

void FUN_4e0f(void)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  short sVar7;
  
  DAT_0e62 = 1;
  sVar2 = DAT_0a9c;
  DAT_0e63 = sVar2;
  sVar7 = DAT_0a9a;
  uVar1 = sVar2 + sVar7;
  uVar3 = DAT_0a3c;
  if (uVar1 < uVar3) {
    DAT_0e65 = uVar1;
    sVar7 = DAT_0a3c;
    sVar2 = DAT_0e65;
    uVar1 = sVar7 - sVar2;
    uVar3 = DAT_0e18;
    if (uVar1 < uVar3) {
      sVar7 = DAT_0a3a;
      DAT_0aa8 = uVar1 + sVar7;
      DAT_0945 = 5;
      return;
    }
    DAT_0aa8 = uVar1;
    DAT_0945 = 6;
    return;
  }
  sVar7 = DAT_0a3c;
  DAT_0e65 = uVar1 - sVar7;
  sVar2 = DAT_0e65;
  sVar7 = DAT_0e18;
  DAT_0e67 = -sVar7 - sVar2;
  do {
    uVar3 = DAT_0e67;
    uVar1 = DAT_0a3a;
    sVar7 = uVar3 + uVar1;
    if (CARRY2(uVar3,uVar1)) goto LAB_4e81;
    DAT_0e67 = sVar7;
    cVar5 = DAT_0e62;
    DAT_0e62 = cVar5 + 1U;
  } while ((byte)(cVar5 + 1U) < 9);
  uVar3 = DAT_0e67;
  uVar1 = DAT_0a3a;
  sVar7 = uVar3 + uVar1;
  if (!CARRY2(uVar3,uVar1)) {
    sVar7 = 0;
  }
LAB_4e81:
  sVar2 = DAT_0e18;
  DAT_0aa8 = sVar7 + sVar2;
  bVar4 = DAT_0e62;
  if (bVar4 < 7) {
    cVar5 = DAT_0e62;
    DAT_0945 = 6U - cVar5 & 0x1f;
  }
  else {
    if (bVar4 == 7) {
      uVar3 = DAT_0aa8;
      uVar1 = DAT_0a3a;
      sVar7 = uVar3 + uVar1;
      if (CARRY2(uVar3,uVar1)) {
        sVar7 = DAT_0e18;
        sVar2 = DAT_0a3a;
        sVar7 = sVar7 + sVar2;
      }
      DAT_0aa8 = sVar7;
      bVar4 = DAT_0cca;
      if ((bVar4 & 1) == 0) {
        uVar6 = 10;
      }
      else {
        uVar6 = 0x16;
      }
    }
    else {
      bVar4 = DAT_0cca;
      if ((bVar4 & 1) == 0) {
        uVar6 = 10;
      }
      else {
        uVar6 = 0x16;
      }
    }
    DAT_0945 = uVar6;
  }
  return;
}


/* Entry 4ecf */

void FUN_4ecf(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  short sVar5;
  
  bVar4 = DAT_088c;
  if ((((~bVar4 & 2) != 0) && (bVar4 = DAT_089c, (~bVar4 & 2) != 0)) &&
     (bVar4 = DAT_00e1, (bVar4 & 8) == 0)) {
    bVar4 = DAT_0cca;
    if ((bVar4 & 1) == 0) {
      bVar4 = DAT_0c25;
      bVar4 = bVar4 & 0x1f;
    }
    else {
      bVar4 = DAT_0942;
    }
    bVar1 = DAT_0945;
    if (bVar4 == bVar1) {
      sVar5 = DAT_0044;
      RAM0e62 = sVar5 + DAT_46ec;
      sVar3 = DAT_0b22;
      sVar2 = DAT_0aa8;
      sVar5 = RAM0e62;
      sVar5 = (sVar3 + sVar2) - sVar5;
      if (sVar5 < 0) {
        sVar5 = RAM0e62;
      }
      else {
        sVar2 = RAM0e62;
        sVar5 = sVar5 + sVar2;
      }
      DAT_0ba8 = sVar5;
      DAT_0056 = sVar5;
      bVar4 = DAT_0049;
      DAT_0049 = bVar4 | 0xc0;
      DAT_004e = 8;
      bVar4 = DAT_004c;
      DAT_004c = bVar4 | 8;
      bVar4 = DAT_0a98;
      DAT_0a98 = bVar4 | 8;
    }
  }
  return;
}


/* Entry 4f29 */

void FUN_4f29(void)

{
  FUN_4f31();
  FUN_4f52();
  FUN_4f31();
  return;
}


/* Entry 4f31 */

void FUN_4f31(void)

{
  DAT_0083 = 0x40;
  DAT_0084 = 99;
  DAT_0085 = 0x10;
  return;
}


/* Entry 4f4e */

void FUN_4f4e(void)

{
  return;
}


/* Entry 4f52 */

void FUN_4f52(void)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  
  while (bVar1 = DAT_0086, (~bVar1 & 0x80) != 0) {
    sVar3 = DAT_0ed0;
    DAT_0ed0 = sVar3 + 1;
  }
  uVar2 = DAT_0090;
  DAT_0ed2 = uVar2;
  uVar2 = DAT_0092;
  DAT_0ed4 = uVar2;
  uVar2 = DAT_0094;
  DAT_0ed6 = uVar2;
  uVar2 = DAT_0096;
  RAM0ed8 = uVar2;
  uVar2 = DAT_0098;
  RAM0eda = uVar2;
  uVar2 = DAT_009a;
  RAM0edc = uVar2;
  uVar2 = DAT_009c;
  RAM0ede = uVar2;
  uVar2 = DAT_009e;
  RAM0ee6 = uVar2;
  return;
}


/* Entry 4f8a */

undefined2 prefix_candidate_57b4(undefined2 param_1)

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


/* Entry 4fbf */

undefined2 FUN_4fbf(undefined2 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  
  DAT_0e62 = (char)((ushort)param_1 >> 8);
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
  uVar3 = DAT_0e62;
  DAT_00dd = uVar3;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 & 0xf7;
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 | 8;
  bVar2 = DAT_0892;
  DAT_0892 = bVar2 | 2;
  return CONCAT11(uVar1,uVar3);
}


/* Entry 5019 */

void FUN_5019(void)

{
  FUN_502d();
  FUN_5114();
  FUN_5309();
  FUN_5454();
  FUN_5481();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Entry 502d */

void FUN_502d(void)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  
  uVar4 = CONCAT11(DAT_348d,DAT_4629);
  puVar6 = (undefined2 *)&DAT_0e56;
  puVar7 = &DAT_4667;
  do {
    bVar1 = DAT_088d;
    puVar8 = puVar7;
    if ((~bVar1 & 0x10) != 0) {
      puVar8 = puVar7 + 1;
      uVar4 = *puVar7;
    }
    puVar5 = puVar6 + 1;
    *puVar6 = uVar4;
    puVar6 = puVar5;
    puVar7 = puVar8;
  } while (puVar5 < &UNK_0e5b);
  puVar9 = &DAT_466d;
  do {
    puVar6 = (undefined2 *)((short)puVar5 + 1);
    *(undefined1 *)puVar5 = *puVar9;
    puVar5 = puVar6;
    puVar9 = puVar9 + 1;
  } while (puVar6 < &DAT_0e60);
  puVar6 = (undefined2 *)&DAT_0a00;
  DAT_0e60 = 0;
  do {
    uVar2 = DAT_0e60;
    FUN_4fbf(puVar6);
    do {
      bVar1 = DAT_00e9;
    } while ((bVar1 & 0x10) == 0);
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
    prefix_candidate_5fa4();
    puVar6 = (undefined2 *)((short)puVar6 + 1);
    cVar3 = DAT_0e60;
    DAT_0e60 = cVar3 + '\x01';
  } while (puVar6 < &DAT_0a0a);
  FUN_ae9a();
  bVar1 = DAT_0892;
  DAT_0892 = bVar1 & 0xfd;
  return;
}


/* Entry 5085 */

void FUN_5085(void)

{
  byte bVar1;
  char cVar2;
  undefined1 extraout_B;
  undefined1 extraout_B_00;
  char extraout_B_01;
  char cVar3;
  undefined1 extraout_B_02;
  undefined1 extraout_B_03;
  
  prefix_candidate_57b4();
  DAT_0a01 = extraout_B;
  prefix_candidate_57b4();
  DAT_0a02 = extraout_B_00;
  prefix_candidate_57b4();
  DAT_0a03 = extraout_B_01;
  cVar2 = DAT_0a01;
  cVar3 = extraout_B_01;
  if (((extraout_B_01 == cVar2) || (cVar2 = DAT_0a02, extraout_B_01 == cVar2)) ||
     (cVar3 = DAT_0a02, cVar2 = DAT_0a01, cVar3 == cVar2)) {
    bVar1 = DAT_08b6;
    DAT_08b6 = bVar1 & 0xfd;
  }
  else {
    bVar1 = DAT_08b6;
    DAT_08b6 = bVar1 | 2;
    cVar3 = -0x80;
  }
  DAT_0a00 = cVar3;
  prefix_candidate_5fa4();
  cVar2 = DAT_0d99;
  if ((cVar2 != -0x80) && (bVar1 = DAT_08b4, (~bVar1 & 0x80) != 0)) {
    bVar1 = DAT_08b6;
    if ((~bVar1 & 2) == 0) {
      bVar1 = DAT_08b3;
      if ((~bVar1 & 2) != 0) {
        bVar1 = DAT_08b3;
        DAT_08b3 = bVar1 | 2;
        bVar1 = DAT_0bf4;
        DAT_0bf4 = bVar1 | 0x20;
        bVar1 = DAT_08bc;
        if ((~bVar1 & 2) != 0) {
          bVar1 = DAT_08bc;
          DAT_08bc = bVar1 | 2;
          bVar1 = DAT_0bf4;
          DAT_0bf4 = bVar1 | 2;
        }
      }
    }
    else {
      bVar1 = DAT_08b3;
      if ((bVar1 & 2) != 0) {
        bVar1 = DAT_08b3;
        DAT_08b3 = bVar1 & 0xfd;
        bVar1 = DAT_0bf4;
        DAT_0bf4 = bVar1 | 0x20;
      }
    }
  }
  prefix_candidate_57b4(&DAT_0c06);
  DAT_0b64._0_1_ = extraout_B_02;
  prefix_candidate_57b4(&DAT_0c07);
  DAT_0b64._1_1_ = extraout_B_03;
  prefix_candidate_5fa4();
  return;
}


/* Entry 5114 */

void FUN_5114(void)

{
  byte bVar1;
  
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_ae9a();
  prefix_candidate_5fa4();
  bVar1 = DAT_0892;
  DAT_0892 = bVar1 & 0xfd;
  return;
}


/* Entry 526c */

void candidate_unreferenced_526c(void)

{
  undefined1 uVar1;
  
  uVar1 = prefix_candidate_57b4(&DAT_0c10);
  DAT_09bb._0_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c11);
  DAT_09bb._1_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c12);
  DAT_09bd._0_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c13);
  DAT_09bd._1_1_ = uVar1;
  prefix_candidate_5fa4();
  uVar1 = prefix_candidate_57b4(&DAT_0c14);
  DAT_09bf._0_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c15);
  DAT_09bf._1_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c16);
  DAT_09c1._0_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c17);
  DAT_09c1._1_1_ = uVar1;
  prefix_candidate_5fa4();
  uVar1 = prefix_candidate_57b4(&DAT_0c18);
  DAT_09c3._0_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&UNK_0c19);
  DAT_09c3._1_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c1a);
  DAT_09c5._0_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c1b);
  DAT_09c5._1_1_ = uVar1;
  prefix_candidate_5fa4();
  uVar1 = prefix_candidate_57b4(&DAT_0c1c);
  DAT_09c7._0_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&UNK_0c1d);
  DAT_09c7._1_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&UNK_0c1e);
  DAT_09c9._0_1_ = uVar1;
  uVar1 = prefix_candidate_57b4(&UNK_0c1f);
  DAT_09c9._1_1_ = uVar1;
  prefix_candidate_5fa4();
  return;
}


/* Entry 5309 */

void FUN_5309(void)

{
  byte bVar1;
  
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_ae9a();
  prefix_candidate_5fa4();
  bVar1 = DAT_0892;
  DAT_0892 = bVar1 & 0xfd;
  return;
}


/* Entry 53ce */

void FUN_53ce(void)

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
  
  prefix_candidate_57b4();
  DAT_0bf6 = extraout_B;
  DAT_08b1 = extraout_B;
  prefix_candidate_57b4();
  DAT_0bf8 = extraout_B_00;
  DAT_08b3 = extraout_B_00;
  prefix_candidate_57b4();
  DAT_0bf7 = extraout_B_01;
  cVar2 = DAT_0d92;
  bVar3 = extraout_B_01;
  if ((cVar2 != -0x80) && (bVar1 = DAT_08b4, (~bVar1 & 0x80) != 0)) {
    bVar3 = extraout_B_01 & 0xf7;
  }
  DAT_08b2 = bVar3;
  prefix_candidate_57b4(0xc23);
  DAT_0bf9 = extraout_B_02;
  DAT_08b4 = extraout_B_02;
  prefix_candidate_5fa4();
  prefix_candidate_57b4(&UNK_0c28);
  DAT_0c0c = extraout_B_03;
  DAT_08b6 = extraout_B_03 & 0x30;
  prefix_candidate_5fa4();
  prefix_candidate_57b4(&DAT_0c24);
  DAT_0bfa = extraout_B_04;
  DAT_08ba = extraout_B_04;
  prefix_candidate_57b4(&DAT_0c25);
  DAT_0bfb = extraout_B_05;
  DAT_08bb = extraout_B_05;
  prefix_candidate_57b4(&DAT_0c26);
  DAT_0bfc = extraout_B_06;
  DAT_08bc = extraout_B_06;
  prefix_candidate_57b4(&DAT_0c27);
  DAT_0bfd = extraout_B_07;
  DAT_08bd = extraout_B_07;
  prefix_candidate_5fa4();
  return;
}


/* Entry 5454 */

void FUN_5454(void)

{
  byte bVar1;
  
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_ae9a();
  prefix_candidate_5fa4();
  bVar1 = DAT_0892;
  DAT_0892 = bVar1 & 0xfd;
  return;
}


/* Entry 5471 */

void FUN_5471(void)

{
  undefined1 uVar1;
  
  uVar1 = prefix_candidate_57b4(&UNK_0c30);
  DAT_0c0d = uVar1;
  DAT_0bb2 = uVar1;
  prefix_candidate_5fa4();
  return;
}


/* Entry 5481 */

void FUN_5481(void)

{
  byte bVar1;
  
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  prefix_candidate_5fa4();
  FUN_4fbf();
  do {
    bVar1 = DAT_00e9;
  } while ((bVar1 & 0x10) == 0);
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xf7;
  FUN_ae9a();
  prefix_candidate_5fa4();
  bVar1 = DAT_0892;
  DAT_0892 = bVar1 & 0xfd;
  return;
}


/* Entry 5570 */

void FUN_5570(void)

{
  undefined1 uVar1;
  
  uVar1 = prefix_candidate_57b4(&DAT_0c50);
  DAT_0c0e = uVar1;
  DAT_0d33 = uVar1;
  uVar1 = prefix_candidate_57b4(0xc51);
  DAT_0c0f = uVar1;
  DAT_0d34 = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c52);
  DAT_0c10 = uVar1;
  DAT_0d35 = uVar1;
  uVar1 = prefix_candidate_57b4(0xc53);
  DAT_0c11 = uVar1;
  DAT_0d36 = uVar1;
  prefix_candidate_5fa4();
  uVar1 = prefix_candidate_57b4(&DAT_0c54);
  DAT_0c12 = uVar1;
  DAT_0d37 = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c55);
  DAT_0c13 = uVar1;
  DAT_0d38 = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c56);
  DAT_0c14 = uVar1;
  DAT_0d39 = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c57);
  DAT_0c15 = uVar1;
  DAT_0d3a = uVar1;
  prefix_candidate_5fa4();
  uVar1 = prefix_candidate_57b4(&DAT_0c58);
  DAT_0c16 = uVar1;
  DAT_0d3b = uVar1;
  uVar1 = prefix_candidate_57b4(0xc59);
  DAT_0c17 = uVar1;
  DAT_0d3c = uVar1;
  uVar1 = prefix_candidate_57b4(&DAT_0c5a);
  DAT_0c18 = uVar1;
  DAT_0d3d = uVar1;
  prefix_candidate_5fa4();
  return;
}


/* Entry 55fe */

void FUN_55fe(undefined1 param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  
  cVar2 = DAT_0e4d;
  sVar3 = CONCAT11(cVar2,param_1);
  if (cVar2 != -0x40) {
    FUN_5570();
    sVar3 = RAM0d3c;
    if (sVar3 == 0x5aa5) {
      FUN_5642();
      return;
    }
  }
  bVar1 = DAT_0d21;
  DAT_0d21 = bVar1 & 0x7f;
  if ((sVar3 == -1) && (sVar3 = RAM0d33, sVar3 == -1)) {
    DAT_0d50 = 0xff;
    DAT_0d52 = 0;
  }
  else {
    FUN_5481();
    FUN_5570();
    DAT_0d50 = 0xff0;
    DAT_0d52 = 0xf;
  }
  return;
}


/* Entry 5642 */

void FUN_5642(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = DAT_0d33;
  cVar2 = DAT_0d36;
  if (((cVar3 == cVar2) || (cVar2 = DAT_0d39, cVar3 == cVar2)) ||
     (cVar3 = DAT_0d36, cVar2 = DAT_0d39, cVar3 == cVar2)) {
    DAT_0d50._0_1_ = cVar3;
    cVar3 = DAT_0d34;
    cVar2 = DAT_0d37;
    if (((cVar3 == cVar2) || (cVar2 = DAT_0d3a, cVar3 == cVar2)) ||
       (cVar3 = DAT_0d37, cVar2 = DAT_0d3a, cVar3 == cVar2)) {
      do {
        DAT_0d50._1_1_ = 0;
        cVar3 = DAT_0d35;
        cVar2 = DAT_0d38;
        if ((cVar3 == cVar2) || (cVar2 = DAT_0d3b, cVar3 == cVar2)) {
          DAT_0d52 = cVar3;
          goto LAB_56ab;
        }
        cVar3 = DAT_0d38;
        cVar2 = DAT_0d3b;
      } while (cVar3 == cVar2);
      DAT_0d50 = 0xff00;
      DAT_0d52 = 0xff;
    }
    else {
      DAT_0d50 = 0xff00;
      DAT_0d52 = 0xff;
    }
  }
  else {
    DAT_0d50 = 0xff00;
    DAT_0d52 = 0xff;
  }
LAB_56ab:
  bVar1 = DAT_0d21;
  DAT_0d21 = bVar1 | 0x80;
  return;
}


/* Entry 56b0 */

void FUN_56b0(void)

{
  return;
}


/* Entry 56b1 */

undefined2 prefix_candidate_5fa4(undefined2 param_1)

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


/* Entry 56c7 */

void FUN_56c7(void)

{
  DAT_004e = 0xff;
  return;
}


/* Entry 56cc */

undefined1 prefix_candidate_5fbf(void)

{
  DAT_003b = 0x14;
  DAT_0038 = 0x80;
  return 0x80;
}


/* Entry 56d5 */

void FUN_56d5(void)

{
  bool bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  DAT_0d72 = DAT_46c1;
  puVar3 = &DAT_46c2;
  puVar4 = &DAT_0d73;
  cVar2 = DAT_46c1;
  do {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    bVar1 = cVar2 != '\0';
    if ((char)(cVar2 + -1) == '\0') break;
    cVar2 = cVar2 + -1;
  } while (bVar1);
  DAT_0d89 = DAT_4603;
  DAT_0d8a = DAT_4604;
  DAT_0d8b = DAT_4605;
  DAT_0d8c = DAT_4606;
  DAT_0d8d = DAT_4607;
  DAT_0d8e = DAT_4608;
  DAT_0d8f = DAT_4609;
  DAT_0d90 = DAT_460a;
  DAT_0d91 = DAT_460b;
  DAT_0d92 = DAT_460c;
  DAT_0d93 = DAT_460d;
  DAT_0d94 = DAT_460e;
  DAT_0d95 = DAT_460f;
  DAT_0d96 = DAT_4610;
  DAT_0d97 = DAT_4611;
  DAT_0d98 = DAT_4612;
  DAT_0d99 = DAT_4613;
  DAT_0d9a = DAT_4614;
  DAT_0d9b = DAT_4615;
  DAT_0d9c = DAT_4616;
  DAT_0d9d = DAT_462c;
  DAT_0d9e = DAT_18b8;
  DAT_0d9f = DAT_18ba;
  DAT_0dc5 = DAT_4216;
  DAT_0dc6 = DAT_4217;
  DAT_0dc7 = DAT_4218;
  DAT_0dc8 = DAT_4219;
  DAT_0dc9 = DAT_421a;
  DAT_0dca = DAT_421b;
  DAT_0dcb = DAT_421c;
  DAT_0dcc = DAT_421d;
  DAT_0dcd = DAT_421e;
  DAT_0dce = DAT_421f;
  DAT_0dcf = DAT_4220;
  DAT_0dd0 = DAT_4222;
  DAT_0dd1 = DAT_4223;
  DAT_0dd2 = DAT_45f3;
  DAT_0dd3 = DAT_45f2;
  DAT_0dd4 = DAT_45f4;
  DAT_0dd5 = DAT_45f1;
  DAT_0dd6 = DAT_18b6;
  DAT_0dd7 = DAT_18b7;
  DAT_0dd8 = DAT_18bd;
  DAT_0dd9 = DAT_3861;
  DAT_0dda = DAT_3862;
  DAT_0ddb = DAT_18bb;
  DAT_0ddc = DAT_41ff;
  DAT_0ddd = DAT_4200;
  DAT_0dde = DAT_4201;
  DAT_0ddf = DAT_4202;
  DAT_0de0 = DAT_4203;
  DAT_0de1 = DAT_4204;
  DAT_0de2 = DAT_4205;
  DAT_0de3 = DAT_4206;
  DAT_0de4 = DAT_45f5;
  DAT_0de6 = DAT_45dd;
  DAT_0de5 = DAT_45db;
  DAT_0de7 = DAT_18a8;
  DAT_0de8 = DAT_184b;
  DAT_0de9 = DAT_184c;
  DAT_0dea = DAT_184d;
  DAT_0deb = DAT_184e;
  DAT_0dec = DAT_184f;
  DAT_0ded = DAT_1850;
  DAT_0dee = DAT_1851;
  DAT_0def = DAT_1852;
  DAT_0df0 = DAT_1853;
  DAT_0df1 = DAT_1854;
  DAT_0df2 = DAT_1855;
  DAT_0df3 = DAT_1856;
  DAT_0df4 = DAT_1857;
  DAT_0df5 = DAT_18ac;
  DAT_0df6 = DAT_18bc;
  DAT_0df7 = DAT_18be;
  DAT_0df8 = DAT_41c8;
  DAT_0df9 = DAT_18a3;
  DAT_0dfa = DAT_18a4;
  DAT_0dfb = DAT_18a5;
  DAT_0dfc = DAT_18a6;
  DAT_0dfd = DAT_18a7;
  DAT_0dfe = DAT_368c;
  DAT_0dff = DAT_368d;
  DAT_0e00 = DAT_1875;
  DAT_0e4d = DAT_4619;
  DAT_0e4e = DAT_461a;
  DAT_0e4f = DAT_461b;
  DAT_0e50 = DAT_461c;
  DAT_0e51 = DAT_4621;
  DAT_0e52 = DAT_420d;
  DAT_0e53 = DAT_422a;
  DAT_0da0 = DAT_32c8;
  DAT_0e01 = DAT_45d1;
  DAT_0e02 = DAT_444a;
  DAT_0e03 = DAT_444b;
  DAT_0e04 = DAT_444c;
  DAT_0e05 = DAT_1846;
  DAT_0e06 = DAT_1847;
  DAT_0e07 = DAT_1848;
  DAT_0e08 = DAT_1849;
  DAT_0e09 = DAT_3552;
  DAT_0e0a = DAT_3553;
  DAT_0e0b = DAT_3554;
  DAT_0e0c = DAT_3555;
  DAT_0e0d = DAT_3556;
  DAT_0e0e = DAT_3557;
  DAT_0e54 = DAT_1840;
  DAT_0e55 = DAT_1841;
  DAT_0e12 = DAT_18b4;
  DAT_0e10 = DAT_45fa;
  DAT_0e14 = DAT_18aa;
  DAT_0e16 = DAT_46e8;
  DAT_0e18 = DAT_46ea;
  DAT_0e1a = DAT_46e6;
  DAT_0e1c = DAT_46ee;
  DAT_0e1e = DAT_4626;
  DAT_0e20 = DAT_3558;
  DAT_0e22 = DAT_355a;
  DAT_0e24 = DAT_355c;
  DAT_0e26 = DAT_46e4;
  DAT_0e28 = DAT_45fc;
  puVar3 = &DAT_185a;
  puVar4 = &DAT_0e32;
  cVar2 = '\x1b';
  do {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    bVar1 = cVar2 != '\0';
    if ((char)(cVar2 + -1) == '\0') break;
    cVar2 = cVar2 + -1;
  } while (bVar1);
  puVar3 = &DAT_32c9;
  puVar4 = &DAT_0da1;
  cVar2 = '\x12';
  do {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    bVar1 = cVar2 != '\0';
    if ((char)(cVar2 + -1) == '\0') break;
    cVar2 = cVar2 + -1;
  } while (bVar1);
  puVar3 = &DAT_32db;
  puVar4 = &DAT_0db3;
  cVar2 = '\x12';
  do {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    bVar1 = cVar2 != '\0';
    if ((char)(cVar2 + -1) == '\0') break;
    cVar2 = cVar2 + -1;
  } while (bVar1);
  cVar2 = DAT_0e55;
  if (cVar2 == '@') {
    DAT_0e2a = DAT_4456;
    DAT_0e2c = DAT_4458;
    DAT_0e2e = DAT_445a;
    DAT_0e30 = DAT_445c;
    DAT_0e0f = DAT_4455;
    cVar2 = DAT_0de7;
    DAT_0ace = cVar2 == -0x80;
  }
  return;
}


/* Entry 5a2f */

void FUN_5a2f(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = DAT_0aee;
  if (bVar2 < DAT_4208) {
    if (bVar2 < DAT_4207) {
      bVar1 = DAT_089c;
      DAT_089c = bVar1 & 0xf7;
    }
  }
  else {
    bVar1 = DAT_089c;
    DAT_089c = bVar1 | 8;
  }
  if (bVar2 < DAT_420a) {
    if (bVar2 < DAT_4209) {
      bVar2 = DAT_089c;
      DAT_089c = bVar2 & 0xfd;
    }
  }
  else {
    bVar2 = DAT_089c;
    DAT_089c = bVar2 | 2;
  }
  return;
}


/* Entry 5a5b */

void FUN_5a5b(void)

{
  byte bVar1;
  
  bVar1 = DAT_08b0;
  if ((bVar1 & 2) != 0) {
    FUN_5a6c();
    bVar1 = DAT_08b0;
    DAT_08b0 = bVar1 & 0xfd;
    bVar1 = DAT_08b0;
    DAT_08b0 = bVar1 | 1;
  }
  return;
}


/* Entry 5a6c */

void FUN_5a6c(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  
  bVar1 = DAT_08a3;
  if ((bVar1 & 4) == 0) {
    bVar1 = DAT_08b1;
    bVar2 = DAT_08ba;
    DAT_08ba = bVar1 | bVar2;
    bVar1 = DAT_08b2;
    bVar2 = DAT_08bb;
    DAT_08bb = bVar1 | bVar2;
    bVar1 = DAT_08b3;
    bVar2 = DAT_08bc;
    DAT_08bc = bVar1 | bVar2;
    bVar1 = DAT_08b4;
    bVar2 = DAT_08bd;
    DAT_08bd = bVar1 | bVar2;
    uVar6 = RAM08b1;
    if (((((char)((ushort)uVar6 >> 8) == '\0') && ((char)uVar6 == '\0')) &&
        (uVar6 = RAM08b3, (char)((ushort)uVar6 >> 8) == '\0')) && ((char)uVar6 == '\0')) {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 0x80;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xbf;
    }
    else {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0x7f;
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 0x40;
    }
    uVar6 = RAM08ba;
    if ((((char)((ushort)uVar6 >> 8) == '\0') && ((char)uVar6 == '\0')) &&
       ((uVar6 = RAM08bc, (char)((ushort)uVar6 >> 8) == '\0' && ((char)uVar6 == '\0')))) {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 & 0xfd;
    }
    else {
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 2;
    }
  }
  uVar7 = DAT_0b05;
  DAT_08a8 = uVar7;
  uVar7 = DAT_0b06;
  DAT_08a9 = uVar7;
  bVar1 = DAT_08a4;
  if ((bVar1 & 1) == 0) {
    FUN_5c5b();
    uVar7 = DAT_0b98;
    uVar7 = DAT_08a3;
    bVar1 = DAT_08a3;
    if (((~bVar1 & 4) == 0) || (bVar1 = DAT_08a3, (bVar1 & 0x20) != 0)) {
      uVar7 = DAT_08a4;
    }
    bVar1 = DAT_08a3;
    if ((bVar1 & 4) == 0) {
      bVar1 = DAT_0884;
      if ((~bVar1 & 0x20) == 0) {
        bVar1 = DAT_0888;
        bVar1 = ~bVar1 & 8;
      }
      else {
        bVar1 = DAT_0893;
        if (((~bVar1 & 0x40) == 0) || (bVar1 = DAT_0880, (~bVar1 & 1) == 0)) goto LAB_5ba6;
        bVar1 = DAT_08a4;
        bVar1 = ~bVar1 & 2;
      }
      if (bVar1 == 0) {
LAB_5ba6:
        uVar7 = 0x80;
        goto LAB_5ba8;
      }
    }
    else {
      bVar1 = DAT_0894;
      if ((bVar1 & 4) != 0) {
        cVar3 = DAT_0bff;
        cVar4 = DAT_0d7c;
        if ((((cVar3 != cVar4) && (cVar4 = DAT_0d7d, cVar3 != cVar4)) &&
            (cVar4 = DAT_0d7e, cVar3 != cVar4)) &&
           ((cVar4 = DAT_0d7f, cVar3 != cVar4 && (cVar4 = DAT_0d80, cVar3 != cVar4)))) {
          cVar4 = DAT_0d81;
          if ((cVar3 == cVar4) || (cVar4 = DAT_0d82, cVar3 == cVar4)) goto LAB_5ba6;
          cVar4 = DAT_0d83;
          if (cVar3 != cVar4) goto LAB_5ba2;
        }
        bVar1 = DAT_0c08;
        bVar1 = (bVar1 + 1) - (0xfe < bVar1);
        DAT_0c08 = bVar1;
        if (bVar1 <= DAT_46e0) goto LAB_5ba6;
        bVar1 = DAT_0894;
        DAT_0894 = bVar1 & 0xfb;
        DAT_0c08 = 0;
      }
    }
LAB_5ba2:
    uVar7 = 0;
  }
  else {
    uVar7 = 0x40;
  }
LAB_5ba8:
  DAT_08aa = uVar7;
  bVar1 = DAT_08a4;
  if (((bVar1 & 1) != 0) || (cVar3 = DAT_0eac, cVar3 == -3)) goto LAB_5c4b;
  bVar2 = DAT_08a3;
  if ((bVar2 & 2) == 0) {
    if ((bVar2 & 0x80) == 0) {
      if ((bVar2 & 0x40) != 0) goto LAB_5c4b;
      if ((bVar2 & 0x20) != 0) {
        if ((bVar2 & 8) == 0) {
          uVar7 = DAT_0b12;
          if (((bVar1 & 8) == 0) && ((bVar1 & 4) == 0)) {
            if ((bVar1 & 0x10) == 0) goto LAB_5c4b;
            bVar1 = DAT_08a4;
            DAT_08a4 = bVar1 & 0xef;
          }
          DAT_0b12 = 0xc1;
        }
        else {
          bVar1 = DAT_08a4;
          if ((bVar1 & 0x20) == 0) {
            uVar7 = DAT_0b11;
          }
          else {
            uVar7 = DAT_0b12;
          }
        }
        goto LAB_5c4b;
      }
      if ((bVar2 & 4) != 0) {
        FUN_5cd0();
        goto LAB_5c4b;
      }
      goto LAB_5bd5;
    }
    if ((bVar1 & 0x80) != 0) goto LAB_5c4b;
  }
  else {
LAB_5bd5:
    cVar3 = DAT_0ead;
    if (cVar3 != '\x01') {
      if (((cVar3 != '\x02') && (cVar3 != '\0')) && (cVar3 == '\x05')) {
        uVar7 = DAT_0b0f;
      }
      goto LAB_5c4b;
    }
  }
  uVar7 = DAT_0b0c;
LAB_5c4b:
  DAT_08ab = 0;
  cVar5 = DAT_08aa;
  cVar4 = DAT_08a9;
  cVar3 = DAT_08a8;
  DAT_08ac = cVar5 + cVar4 + cVar3;
  return;
}


/* Entry 5c5b */

void FUN_5c5b(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  
  bVar1 = DAT_08a3;
  if ((((bVar1 & 2) == 0) || (bVar1 = DAT_0893, (bVar1 & 0x40) == 0)) ||
     (bVar1 = DAT_0881, (bVar1 & 0x20) == 0)) {
    DAT_0b98 = 0;
  }
  else {
    bVar1 = DAT_0893;
    if (((bVar1 & 0x10) == 0) || (cVar4 = DAT_0b99, cVar4 == '\0')) {
      uVar2 = DAT_08b1;
      uVar3 = DAT_08b2;
      RAM0b9a = CONCAT11(uVar2,uVar3);
      uVar2 = DAT_08b3;
      uVar3 = DAT_08b4;
      RAM0b9c = CONCAT11(uVar2,uVar3);
      cVar4 = DAT_0b9a;
      cVar5 = DAT_0b9b;
      if (cVar4 == '\0' && cVar5 == '\0') {
        cVar4 = DAT_0b9c;
        cVar5 = DAT_0b9d;
        if (cVar4 == '\0' && cVar5 == '\0') {
          return;
        }
      }
      FUN_5ea1();
      bVar1 = DAT_0ba3;
      DAT_0b98 = (&DAT_4695)[bVar1];
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 0x10;
      DAT_0b99 = DAT_46b6;
    }
    else {
      cVar4 = DAT_0b99;
      DAT_0b99 = cVar4 + -1;
    }
  }
  return;
}


/* Entry 5cd0 */

void FUN_5cd0(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  bVar1 = DAT_08a4;
  if ((bVar1 & 0x20) == 0) {
    cVar2 = DAT_0bff;
    cVar4 = DAT_0d73;
    if (cVar2 == cVar4) {
      cVar4 = DAT_0b0d;
    }
    else {
      cVar4 = DAT_0d74;
      if (cVar2 == cVar4) {
        cVar4 = DAT_0b0e;
      }
      else {
        cVar4 = DAT_0d75;
        if (cVar2 == cVar4) {
          cVar4 = DAT_0b0f;
        }
        else {
          cVar4 = DAT_0d76;
          if (cVar2 == cVar4) {
            cVar4 = DAT_0b0c;
          }
          else {
            cVar4 = DAT_0d77;
            if (cVar2 == cVar4) {
              cVar4 = DAT_0b06;
              if (cVar4 == -1) {
                cVar4 = -2;
              }
            }
            else {
              cVar4 = DAT_0d78;
              if (cVar2 == cVar4) {
                cVar4 = DAT_08e3;
                if (cVar4 == -1) {
                  cVar4 = -2;
                }
              }
              else {
                cVar4 = DAT_0d79;
                if (cVar2 == cVar4) {
                  cVar4 = DAT_0b10;
                }
                else {
                  cVar4 = DAT_0d7a;
                  if (cVar2 == cVar4) {
                    bVar1 = DAT_088f;
                    if ((bVar1 & 0x40) == 0) {
                      cVar4 = -0x10;
                    }
                    else {
                      cVar4 = '\0';
                    }
                  }
                  else {
                    cVar4 = DAT_0d7b;
                    if (cVar2 == cVar4) {
                      bVar1 = DAT_088f;
                      if ((bVar1 & 0x80) == 0) {
                        cVar4 = -0x10;
                      }
                      else {
                        cVar4 = '\0';
                      }
                    }
                    else {
                      cVar4 = DAT_0d7c;
                      if (cVar2 == cVar4) {
                        cVar4 = '\0';
                      }
                      else {
                        cVar4 = DAT_0d7d;
                        if (cVar2 == cVar4) {
                          cVar4 = '\0';
                        }
                        else {
                          cVar4 = DAT_0d7e;
                          if (cVar2 == cVar4) {
                            cVar4 = '\0';
                          }
                          else {
                            cVar4 = DAT_0d7f;
                            if (cVar2 == cVar4) {
                              cVar4 = '\0';
                            }
                            else {
                              cVar4 = DAT_0d80;
                              if (cVar2 == cVar4) {
                                cVar4 = '\0';
                              }
                              else {
                                cVar4 = DAT_0d81;
                                if (cVar2 == cVar4) {
                                  cVar4 = '\0';
                                }
                                else {
                                  cVar4 = DAT_0d82;
                                  if (cVar2 == cVar4) {
                                    cVar4 = '\0';
                                  }
                                  else {
                                    cVar4 = DAT_0d83;
                                    if (cVar2 == cVar4) {
                                      cVar4 = '\0';
                                    }
                                    else {
                                      cVar4 = DAT_0d84;
                                      if (cVar2 == cVar4) {
                                        FUN_5dfb();
                                        cVar4 = DAT_0c01;
                                      }
                                      else {
                                        cVar4 = DAT_0d85;
                                        if (cVar2 == cVar4) {
                                          FUN_5e3d();
                                          cVar4 = DAT_0c01;
                                        }
                                        else {
                                          cVar4 = DAT_0d86;
                                          if (cVar2 == cVar4) {
                                            FUN_5ef1();
                                            cVar4 = DAT_0c01;
                                          }
                                          else {
                                            cVar4 = DAT_0d87;
                                            if (cVar2 == cVar4) {
                                              FUN_5f3d();
                                              cVar4 = DAT_0c01;
                                            }
                                            else {
                                              cVar3 = DAT_0d88;
                                              cVar4 = DAT_4618;
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
  }
  else {
    cVar4 = DAT_0bff;
  }
  DAT_0c03 = cVar4;
  return;
}


/* Entry 5dfb */

void FUN_5dfb(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_0893;
  if (((bVar1 & 0x10) == 0) || (cVar2 = DAT_0b99, cVar2 == '\0')) {
    bVar1 = DAT_08b6;
    DAT_0b9a = bVar1 & 2;
    DAT_0b9b = 0;
    DAT_0b9c = 0;
    DAT_0b9d = 0;
    cVar2 = DAT_0b9a;
    if (cVar2 != '\0') {
      FUN_5ea1();
      bVar1 = DAT_0ba3;
      DAT_0c01 = (&DAT_46b7)[bVar1];
      bVar1 = DAT_0893;
      DAT_0893 = bVar1 | 0x10;
      DAT_0b99 = DAT_46c0;
    }
  }
  else {
    cVar2 = DAT_0b99;
    DAT_0b99 = cVar2 + -1;
  }
  return;
}


/* Entry 5e3d */

void FUN_5e3d(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  
  bVar1 = DAT_0893;
  if (((bVar1 & 0x10) == 0) || (cVar3 = DAT_0b99, cVar3 == '\0')) {
    bVar1 = DAT_08b1;
    bVar2 = DAT_08ba;
    DAT_0b9a = ~bVar1 & bVar2;
    bVar1 = DAT_08b2;
    bVar2 = DAT_08bb;
    DAT_0b9b = ~bVar1 & bVar2;
    bVar1 = DAT_08b3;
    bVar2 = DAT_08bc;
    DAT_0b9c = ~bVar1 & bVar2;
    bVar1 = DAT_08b4;
    bVar2 = DAT_08bd;
    DAT_0b9d = ~bVar1 & bVar2;
    cVar3 = DAT_0b9a;
    cVar4 = DAT_0b9b;
    if (cVar3 == '\0' && cVar4 == '\0') {
      cVar3 = DAT_0b9c;
      cVar4 = DAT_0b9d;
      if (cVar3 == '\0' && cVar4 == '\0') {
        return;
      }
    }
    FUN_5ea1();
    bVar1 = DAT_0ba3;
    DAT_0c01 = (&DAT_4695)[bVar1];
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 | 0x10;
    DAT_0b99 = DAT_46b7;
  }
  else {
    cVar3 = DAT_0b99;
    DAT_0b99 = cVar3 + -1;
  }
  return;
}


/* Entry 5ea1 */

undefined2 FUN_5ea1(void)

{
  char cVar1;
  char cVar2;
  short sVar3;
  byte bVar5;
  short sVar4;
  byte bVar6;
  ushort uVar7;
  
  do {
    cVar1 = DAT_0ba3;
    uVar7 = (ushort)(byte)(cVar1 + 1);
    sVar4 = RAM0b9a;
    sVar3 = RAM0b9c;
    while (uVar7 = uVar7 - 1, uVar7 != 0) {
      bVar6 = -(char)(sVar3 >> 0xf);
      sVar3 = sVar3 << 1;
      bVar5 = (byte)(sVar4 << 1);
      sVar4 = CONCAT11((char)((ushort)(sVar4 << 1) >> 8) + CARRY1(bVar5,bVar6),bVar5 + bVar6);
    }
    do {
      cVar1 = DAT_0ba3;
      DAT_0ba3 = cVar1 + '\x01';
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
    DAT_0ba3 = 0;
  } while( true );
}


/* Entry 5ef1 */

void FUN_5ef1(void)

{
  undefined2 uVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  
  uVar1 = RAM08ba;
  RAM0b9a = uVar1;
  uVar1 = RAM08bc;
  RAM0b9c = uVar1;
  cVar2 = DAT_0b9a;
  cVar3 = DAT_0b9b;
  if (cVar2 == '\0' && cVar3 == '\0') {
    cVar2 = DAT_0b9c;
    cVar3 = DAT_0b9d;
    if (cVar2 == '\0' && cVar3 == '\0') {
      uVar5 = 0;
      goto LAB_5f39;
    }
  }
  sVar7 = 0x20;
  DAT_0ba3 = 0;
  sVar6 = RAM0b9a;
  sVar8 = RAM0b9c;
  do {
    uVar4 = (ushort)sVar6 >> 0xf;
    sVar6 = sVar6 << 1;
    if (sVar8 < 0) {
      cVar2 = DAT_0ba3;
      DAT_0ba3 = cVar2 + '\x01';
    }
    sVar7 = sVar7 + -1;
    sVar8 = CONCAT11((char)((ushort)sVar8 >> 8) << 1 | (byte)sVar8 >> 7,
                     (byte)sVar8 << 1 | (byte)uVar4);
  } while (sVar7 != 0);
  uVar5 = DAT_0ba3;
LAB_5f39:
  DAT_0c01 = uVar5;
  return;
}


/* Entry 5f3d */

void FUN_5f3d(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = DAT_0893;
  if (((bVar1 & 0x10) == 0) || (cVar2 = DAT_0b99, cVar2 == '\0')) {
    DAT_0b9a = 0;
    bVar1 = DAT_08b2;
    DAT_0b9b = bVar1 & 0x16;
    DAT_0b9c = 0;
    DAT_0b9d = 0;
    cVar2 = DAT_0b9a;
    cVar3 = DAT_0b9b;
    if (cVar2 == '\0' && cVar3 == '\0') {
      cVar2 = DAT_0b9c;
      cVar3 = DAT_0b9d;
      if (cVar2 == '\0' && cVar3 == '\0') {
        DAT_0c01 = 0;
        return;
      }
    }
    FUN_5ea1();
    bVar1 = DAT_0ba3;
    DAT_0c01 = (&DAT_4695)[bVar1];
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 | 0x10;
    DAT_0b99 = DAT_46b7;
  }
  else {
    cVar2 = DAT_0b99;
    DAT_0b99 = cVar2 + -1;
  }
  return;
}


/* Entry 5f95 */

void FUN_5f95(void)

{
  byte bVar1;
  undefined1 uVar2;
  
  uVar2 = DAT_44ea;
  if (DAT_44e8 != -0x80) {
    bVar1 = DAT_0d59;
    DAT_0d59 = bVar1 | 4;
    uVar2 = DAT_44e9;
  }
  DAT_0d5b = uVar2;
  DAT_0d5a = uVar2;
  FUN_96ea();
  return;
}


/* Entry 5fb2 */

undefined * FUN_5fb2(void)

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
  sVar5 = DAT_0c22;
  if (-1 < sVar1 - sVar5) {
    sVar1 = DAT_0c22;
    DAT_0c22 = sVar1 + 0x1000;
    cVar4 = DAT_0c24;
    DAT_0c24 = cVar4 + '\x01';
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 | 0x20;
    cVar4 = DAT_0c24;
    if (-1 < (char)(cVar4 + -0x40)) {
      cVar4 = DAT_0c24;
      DAT_0c24 = cVar4 + -1;
    }
  }
  sVar1 = DAT_0044;
  sVar5 = DAT_0b26;
  if (0x9c3 < (ushort)(sVar1 - sVar5)) {
    sVar1 = DAT_0b26;
    DAT_0b26 = sVar1 + 0x9c4;
    bVar6 = DAT_0882;
    DAT_0882 = bVar6 | 0x40;
    cVar4 = DAT_0b29;
    DAT_0b29 = cVar4 + '\x01';
    bVar6 = DAT_0b29;
    if ((bVar6 & 1) == 0) {
      bVar6 = DAT_0882;
      DAT_0882 = bVar6 | 4;
    }
    bVar6 = DAT_0b29;
    if ((bVar6 & 3) == 0) {
      bVar6 = DAT_088e;
      DAT_088e = bVar6 | 0x80;
    }
    cVar4 = DAT_0b5d;
    bVar6 = cVar4 + 1;
    if (0x13 < bVar6) {
      bVar6 = DAT_0882;
      DAT_0882 = bVar6 | 2;
      bVar6 = 0;
    }
    DAT_0b5d = bVar6;
    cVar4 = DAT_0b5e;
    bVar6 = cVar4 + 1;
    if (199 < bVar6) {
      bVar6 = DAT_0887;
      DAT_0887 = bVar6 | 0x80;
      cVar4 = DAT_0beb;
      DAT_0beb = cVar4 + '\x01';
      bVar6 = DAT_0beb;
      if ((bVar6 & 1) == 0) {
        bVar6 = DAT_0887;
        DAT_0887 = bVar6 | 0x40;
      }
      bVar6 = 0;
    }
    DAT_0b5e = bVar6;
    bVar6 = DAT_0b29;
    if ((bVar6 & 7) == 2) {
      bVar7 = DAT_0882;
      DAT_0882 = bVar7 | 0x20;
    }
    if ((bVar6 & 7) == 6) {
      bVar6 = DAT_0882;
      DAT_0882 = bVar6 | 0x10;
    }
    bVar6 = DAT_0b29;
    if ((bVar6 & 0xf) == 8) {
      bVar6 = DAT_0882;
      DAT_0882 = bVar6 | 8;
    }
    bVar6 = DAT_0b29;
    if ((bVar6 & 0x1f) == 0) {
      bVar6 = DAT_0882;
      DAT_0882 = bVar6 | 1;
    }
    bVar6 = DAT_0cca;
    if ((bVar6 & 1) == 0) {
      bVar6 = DAT_0b40;
      if (bVar6 < 0xc) goto LAB_60bd;
      bVar6 = DAT_004c;
      DAT_004c = bVar6 & 0xf7;
      bVar6 = DAT_0880;
      DAT_0880 = bVar6 | 0x44;
      bVar6 = DAT_0b40;
    }
    else {
      bVar6 = DAT_0940;
      if (bVar6 < 0xc) goto LAB_60bd;
      bVar6 = DAT_004c;
      DAT_004c = bVar6 & 0xf7;
      bVar6 = DAT_0880;
      DAT_0880 = bVar6 | 0x44;
      bVar6 = DAT_0940;
    }
    if (DAT_18b3 <= bVar6) {
      bVar6 = DAT_0881;
      DAT_0881 = bVar6 | 0x20;
      FUN_f3a8();
      bVar6 = DAT_0880;
      DAT_0880 = bVar6 | 0x80;
      bVar6 = DAT_088c;
      DAT_088c = bVar6 | 0x20;
    }
  }
LAB_60bd:
  sVar1 = DAT_0044;
  sVar5 = DAT_0b24;
  if ((undefined *)(sVar1 - sVar5) < &UNK_01f4) {
    return (undefined *)(sVar1 - sVar5);
  }
  sVar1 = DAT_0b24;
  DAT_0b24 = &UNK_01f4 + sVar1;
  cVar4 = DAT_0b28;
  DAT_0b28 = cVar4 + 1U;
  if ((cVar4 + 1U & 1) != 0) {
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 | 4;
  }
  bVar6 = DAT_08c2;
  DAT_08c2 = bVar6 | 0x10;
  bVar6 = DAT_008b;
  if ((~bVar6 & 8) == 0) {
LAB_612c:
    DAT_08c8 = 0;
    uVar3 = DAT_0096;
    RAM08d0 = uVar3;
    uVar2 = DAT_008b;
    bVar6 = DAT_0085;
    uVar3 = RAM08d0;
    (**(code **)(&DAT_61b6 + (byte)((bVar6 & 7) << 1)))();
    cVar4 = DAT_08c7;
    DAT_08c7 = cVar4 + '\x01';
    bVar6 = DAT_08c7;
    puVar8 = (undefined *)CONCAT11(bVar6 & 3,4);
    if (((bVar6 & 3) != 0) && (puVar8 = (undefined *)((ushort)(bVar6 & 3) << 8), (bVar6 & 3) != 1))
    {
      bVar6 = DAT_08c7;
      bVar7 = bVar6 & 7;
      puVar8 = (undefined *)CONCAT11(bVar7,2);
      if ((bVar7 != 2) &&
         ((puVar8 = (undefined *)(CONCAT11(bVar6,5) & 0x7ff), bVar7 != 6 &&
          (puVar8 = (undefined *)(CONCAT11(bVar6,7) & 0x7ff), bVar7 != 7)))) {
        bVar6 = DAT_08c7;
        puVar8 = (undefined *)CONCAT11(bVar6 & 0xf,1);
        if ((bVar6 & 0xf) != 3) {
          bVar6 = DAT_08c7;
          bVar7 = bVar6 & 0x1f;
          puVar8 = (undefined *)CONCAT11(bVar7,3);
          if ((bVar7 != 0xb) && (puVar8 = (undefined *)(CONCAT11(bVar6,6) & 0x1fff), bVar7 != 0x1b))
          {
            puVar8 = (undefined *)((bVar6 & 0x1f) << 8);
          }
        }
      }
    }
    DAT_0085 = (char)puVar8;
  }
  else {
    cVar4 = DAT_08c8;
    DAT_08c8 = cVar4 + '\x01';
    if ((char)(cVar4 + '\x01') < '\0') {
      DAT_08c8 = 0;
      DAT_0083 = 0x20;
      DAT_0084 = 99;
      DAT_0085 = 0;
    }
    sVar1 = DAT_0044;
    puVar8 = (undefined *)(sVar1 + 0x19);
    DAT_08ca = puVar8;
    do {
      bVar6 = DAT_008b;
      if ((~bVar6 & 8) == 0) goto LAB_612c;
      sVar1 = DAT_0044;
    } while (-1 < (short)puVar8 - sVar1);
  }
  bVar6 = DAT_08c2;
  DAT_08c2 = bVar6 & 0xef;
  return puVar8;
}


/* Entry 6111 */

ushort FUN_6111(void)

{
  short sVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  
  sVar1 = DAT_0044;
  uVar7 = sVar1 + 0x19;
  DAT_08ca = uVar7;
  do {
    bVar2 = DAT_008b;
    if ((~bVar2 & 8) == 0) {
      DAT_08c8 = 0;
      uVar4 = DAT_0096;
      RAM08d0 = uVar4;
      uVar3 = DAT_008b;
      bVar2 = DAT_0085;
      uVar4 = RAM08d0;
      (**(code **)(&DAT_61b6 + (byte)((bVar2 & 7) << 1)))();
      cVar5 = DAT_08c7;
      DAT_08c7 = cVar5 + '\x01';
      bVar2 = DAT_08c7;
      uVar7 = CONCAT11(bVar2 & 3,4);
      if (((bVar2 & 3) != 0) && (uVar7 = (ushort)(bVar2 & 3) << 8, (bVar2 & 3) != 1)) {
        bVar2 = DAT_08c7;
        bVar6 = bVar2 & 7;
        uVar7 = CONCAT11(bVar6,2);
        if ((bVar6 != 2) &&
           ((uVar7 = CONCAT11(bVar2,5) & 0x7ff, bVar6 != 6 &&
            (uVar7 = CONCAT11(bVar2,7) & 0x7ff, bVar6 != 7)))) {
          bVar2 = DAT_08c7;
          uVar7 = CONCAT11(bVar2 & 0xf,1);
          if ((bVar2 & 0xf) != 3) {
            bVar2 = DAT_08c7;
            bVar6 = bVar2 & 0x1f;
            uVar7 = CONCAT11(bVar6,3);
            if ((bVar6 != 0xb) && (uVar7 = CONCAT11(bVar2,6) & 0x1fff, bVar6 != 0x1b)) {
              uVar7 = (bVar2 & 0x1f) << 8;
            }
          }
        }
      }
      DAT_0085 = (char)uVar7;
      break;
    }
    sVar1 = DAT_0044;
  } while (-1 < (short)(uVar7 - sVar1));
  bVar2 = DAT_08c2;
  DAT_08c2 = bVar2 & 0xef;
  return uVar7;
}


/* Entry 6192 */

void candidate_unreferenced_6192(undefined1 param_1)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = 'd';
  do {
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  DAT_0085 = param_1;
  bVar1 = DAT_08c2;
  DAT_08c2 = bVar1 & 0xef;
  return;
}


/* Entry 61ac */

void FUN_61ac(void)

{
  byte bVar1;
  
  bVar1 = DAT_08c2;
  DAT_08c2 = bVar1 & 0xef;
  return;
}


/* Entry 61d6 */

void adc_alternate_dispatch_a(void)

{
  byte bVar1;
  char in_CCR;
  
  bVar1 = DAT_0008;
  (**(code **)(&DAT_61c6 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7)))
            (*(code **)(&DAT_61c6 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7)));
  return;
}


/* Entry 61e5 */

void adc_alternate_dispatch_b(void)

{
  byte bVar1;
  char in_CCR;
  
  bVar1 = DAT_0008;
  (**(code **)(&DAT_61ce + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7)))
            (*(code **)(&DAT_61ce + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7)));
  return;
}


/* Entry 61f4 */

void adc_dispatch_15(void)

{
  return;
}


/* Entry 61f5 */

void adc_dispatch_0(undefined2 param_1)

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
  DAT_0b0d = cVar6;
  uVar1 = RAM08d0;
  DAT_0bd2 = uVar1 >> 6;
  cVar6 = DAT_0d8c;
  if (cVar6 != -0x80) {
    uVar2 = RAM08d0;
    bVar7 = DAT_08a3;
    if (((~bVar7 & 4) != 0) && (bVar7 = DAT_08b4, (~bVar7 & 0x80) != 0)) {
      bVar7 = (byte)((ushort)uVar2 >> 8);
      if ((bVar7 < 10) || (0xf5 < bVar7)) {
        bVar7 = DAT_08b7;
        if ((~bVar7 & 0x80) == 0) {
          bVar7 = DAT_0b77;
          bVar5 = DAT_0de6;
          if (bVar5 < bVar7) {
            bVar7 = DAT_08b1;
            if ((~bVar7 & 8) != 0) {
              bVar7 = DAT_08b1;
              DAT_08b1 = bVar7 | 8;
              bVar7 = DAT_0bf4;
              DAT_0bf4 = bVar7 | 0x80;
              bVar7 = DAT_08ba;
              if ((~bVar7 & 8) != 0) {
                bVar7 = DAT_08ba;
                DAT_08ba = bVar7 | 8;
                bVar7 = DAT_0bf4;
                DAT_0bf4 = bVar7 | 8;
              }
            }
            bVar7 = DAT_08b7;
            DAT_08b7 = bVar7 | 1;
            bVar7 = DAT_0889;
            DAT_0889 = bVar7 & 0xfd;
            DAT_0bad = 0;
          }
        }
        else {
          bVar7 = DAT_08b7;
          DAT_08b7 = bVar7 | 0x80;
          bVar7 = DAT_0bcd;
          DAT_0bcd = bVar7 | 8;
        }
      }
      else {
        bVar7 = DAT_08b7;
        if ((bVar7 & 0x80) == 0) {
          bVar7 = DAT_0b84;
          bVar5 = DAT_0de6;
          if (bVar5 < bVar7) {
            bVar7 = DAT_08b1;
            if ((bVar7 & 8) != 0) {
              bVar7 = DAT_08b1;
              DAT_08b1 = bVar7 & 0xf7;
              bVar7 = DAT_0bf4;
              DAT_0bf4 = bVar7 | 0x80;
              bVar7 = DAT_08b1;
              if (((~bVar7 & 4) != 0) && (bVar7 = DAT_08b3, (~bVar7 & 8) != 0)) {
                bVar7 = DAT_0889;
                DAT_0889 = bVar7 | 2;
                DAT_0bae = 0;
                uVar4 = DAT_0a8d;
                DAT_0bad = uVar4;
                DAT_0baf = uVar4;
              }
            }
            bVar7 = DAT_0bcd;
            DAT_0bcd = bVar7 & 0xf7;
            bVar7 = DAT_08b7;
            if ((bVar7 & 1) == 0) {
              bVar7 = DAT_08b8;
              if ((bVar7 & 1) == 0) goto LAB_62c7;
              bVar7 = DAT_08b8;
              DAT_08b8 = bVar7 & 0xfe;
            }
            else {
              bVar7 = DAT_08b7;
              DAT_08b7 = bVar7 & 0xfe;
            }
            DAT_08ea = DAT_4440;
          }
        }
        else {
          bVar7 = DAT_08b7;
          DAT_08b7 = bVar7 & 0x7f;
        }
      }
    }
  }
LAB_62c7:
  bVar7 = DAT_08b1;
  if (((~bVar7 & 8) == 0) || (bVar7 = DAT_08b1, (~bVar7 & 4) == 0)) {
    DAT_08d6 = DAT_45fc;
    DAT_08d4 = DAT_45fc << 6;
  }
  else {
    uVar1 = RAM08d0;
    DAT_08d6 = uVar1 >> 6;
    sVar3 = DAT_08ec;
    DAT_08d4 = sVar3 << 6;
  }
  DAT_08c4 = 0x80;
  DAT_08c5 = 0;
  return;
}


/* Entry 6304 */

void adc_dispatch_1(undefined *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  undefined *puVar5;
  short sVar6;
  ushort uVar7;
  
  DAT_0cc4 = param_1;
  puVar5 = param_1 + -0x1ec0;
  if (param_1 < &UNK_1ec0) {
    puVar5 = (undefined *)0x0;
  }
  cVar4 = -0x3e;
  sVar6 = FUN_bd9e(puVar5);
  if ((sVar6 != 0) || (cVar4 == -1)) {
    cVar4 = -2;
  }
  DAT_0b0e = cVar4;
  bVar1 = DAT_08a1;
  if ((~bVar1 & 0x20) != 0) {
    uVar3 = DAT_0cc4;
    DAT_0cc8 = uVar3;
    uVar2 = DAT_0ca8;
    uVar7 = uVar3 - uVar2;
    if (uVar3 < uVar2) {
      uVar7 = CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7);
    }
    if (0xc0 < uVar7) {
      bVar1 = DAT_08a1;
      DAT_08a1 = bVar1 | 0x10;
      bVar1 = DAT_08a1;
      DAT_08a1 = bVar1 | 8;
    }
    bVar1 = DAT_08a1;
    DAT_08a1 = bVar1 | 0x20;
  }
  DAT_08c4 = 0x40;
  DAT_08c5 = 0;
  return;
}


/* Entry 6353 */

void adc_dispatch_2(undefined2 param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte extraout_A;
  ushort uVar4;
  
  bVar3 = (byte)((ushort)param_1 >> 8);
  DAT_08e2 = bVar3;
  if (bVar3 < 0x17) {
    bVar1 = DAT_099f;
    DAT_099f = bVar1 & 0xfe;
  }
  else {
    bVar1 = DAT_099f;
    DAT_099f = bVar1 | 1;
  }
  if (bVar3 < 0x1c) {
    bVar3 = DAT_099f;
    DAT_099f = bVar3 | 4;
    bVar3 = DAT_099f;
    DAT_099f = bVar3 & 0xef;
    bVar3 = DAT_099f;
    DAT_099f = bVar3 & 0xf7;
  }
  else {
    bVar3 = DAT_099f;
    if ((bVar3 & 8) != 0) {
      bVar3 = DAT_099f;
      DAT_099f = bVar3 | 0x10;
    }
    bVar3 = DAT_099f;
    DAT_099f = bVar3 | 8;
    bVar3 = DAT_099f;
    DAT_099f = bVar3 & 0xfb;
  }
  bVar3 = DAT_099f;
  if ((~bVar3 & 1) == 0) {
    bVar3 = DAT_09a8;
    if (DAT_188d <= bVar3) {
      bVar3 = DAT_099f;
      DAT_099f = bVar3 | 2;
    }
  }
  else {
    bVar3 = DAT_09a9;
    if (DAT_188e <= bVar3) {
      bVar3 = DAT_099f;
      DAT_099f = bVar3 & 0xfd;
    }
  }
  bVar3 = DAT_0881;
  if ((~bVar3 & 0x10) != 0) {
    bVar3 = DAT_099f;
    if ((~bVar3 & 0x10) == 0) {
LAB_63c8:
      bVar3 = DAT_099f;
      if ((~bVar3 & 0x40) != 0) {
        bVar3 = DAT_099f;
        DAT_099f = bVar3 | 0x40;
      }
    }
    else if (DAT_188f != -0x80) {
      uVar4 = FUN_bbaa((uchar)param_1,&UNK_1890);
      extraout_A = (byte)(uVar4 >> 8);
      DAT_0ccf = extraout_A;
      bVar3 = DAT_0cd0;
      if (extraout_A <= bVar3) goto LAB_63c8;
    }
  }
  bVar3 = DAT_099f;
  if ((((bVar3 & 0x80) == 0) || (bVar3 = DAT_099f, (bVar3 & 4) == 0)) ||
     (bVar3 = DAT_099f, (bVar3 & 0x40) == 0)) {
    bVar3 = DAT_099f;
    DAT_099f = bVar3 & 0xdf;
    DAT_09aa = 0;
LAB_6400:
    bVar3 = DAT_0881;
    if ((~bVar3 & 0x20) == 0) goto LAB_63ec;
  }
  else {
    bVar3 = DAT_099f;
    DAT_099f = bVar3 | 0x20;
    bVar3 = DAT_09aa;
    if (bVar3 < DAT_18a2) goto LAB_6400;
LAB_63ec:
    bVar3 = DAT_099f;
    DAT_099f = bVar3 & 0xbf;
    bVar3 = DAT_099f;
    DAT_099f = bVar3 & 0xdf;
    DAT_09aa = 0;
  }
  cVar2 = DAT_0d91;
  if (((cVar2 != -0x80) && (DAT_368e == -0x80)) &&
     ((bVar3 = DAT_08a3, (~bVar3 & 4) != 0 && (bVar3 = DAT_08b4, (~bVar3 & 0x80) != 0)))) {
    bVar3 = DAT_08b2;
    if ((~bVar3 & 0x10) == 0) {
      bVar3 = DAT_099f;
      if (((bVar3 & 2) != 0) && (bVar3 = DAT_08b2, (bVar3 & 0x10) != 0)) {
        bVar3 = DAT_08b2;
        DAT_08b2 = bVar3 & 0xef;
        bVar3 = DAT_0bf4;
        DAT_0bf4 = bVar3 | 0x40;
      }
    }
    else {
      bVar3 = DAT_0914;
      if ((((((DAT_45ea <= bVar3) && (uVar4 = DAT_0920, DAT_45ec <= uVar4)) &&
            (uVar4 = DAT_08f2, DAT_45ee <= uVar4)) &&
           ((cVar2 = DAT_0e53, cVar2 != -0x80 || (bVar3 = DAT_0889, (bVar3 & 0x80) != 0)))) &&
          ((bVar3 = DAT_0bcd, (~bVar3 & 8) != 0 &&
           ((bVar3 = DAT_08b1, (~bVar3 & 4) != 0 && (bVar3 = DAT_0bce, (~bVar3 & 0x80) != 0)))))) &&
         (bVar3 = DAT_099f, (~bVar3 & 2) != 0)) {
        bVar3 = DAT_099f;
        if ((bVar3 & 0x80) == 0) {
          bVar3 = DAT_08b8;
          if ((bVar3 & 0x40) == 0) {
            bVar3 = DAT_08b8;
            DAT_08b8 = bVar3 | 0x40;
          }
          else {
            bVar3 = DAT_0b7a;
            if ((DAT_45e9 < bVar3) && (bVar3 = DAT_08b2, (~bVar3 & 0x10) != 0)) {
              bVar3 = DAT_08b2;
              DAT_08b2 = bVar3 | 0x10;
              bVar3 = DAT_0bf4;
              DAT_0bf4 = bVar3 | 0x40;
              bVar3 = DAT_08bb;
              if ((~bVar3 & 0x10) != 0) {
                bVar3 = DAT_08bb;
                DAT_08bb = bVar3 | 0x10;
                bVar3 = DAT_0bf4;
                DAT_0bf4 = bVar3 | 4;
              }
            }
          }
        }
        goto LAB_64b0;
      }
    }
    DAT_0b7a = 0;
    bVar3 = DAT_08b8;
    DAT_08b8 = bVar3 & 0xbf;
  }
LAB_64b0:
  DAT_08c4 = 0x20;
  DAT_08c5 = 0;
  return;
}


/* Entry 64ba */

void adc_dispatch_4(undefined2 param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  
  bVar4 = (byte)((ushort)param_1 >> 8);
  DAT_0bf0 = bVar4;
  uVar6 = ((ushort)bVar4 << 8) / 0xf0;
  if (0xfe < uVar6) {
    uVar6 = 0xfe;
  }
  DAT_0b10 = (char)uVar6;
  bVar4 = DAT_08a3;
  if ((bVar4 & 4) != 0) {
    cVar1 = DAT_0bff;
    cVar2 = DAT_0d80;
    if ((cVar1 != cVar2) || (bVar4 = DAT_0894, (bVar4 & 0x10) == 0)) goto LAB_64e5;
    goto LAB_660d;
  }
LAB_64e5:
  bVar4 = DAT_0bf0;
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
        goto LAB_660d;
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
          bVar4 = DAT_08a3;
          if (((bVar4 & 4) != 0) && (bVar4 = DAT_0894, (~bVar4 & 0x80) != 0)) {
            cVar1 = DAT_0bff;
            cVar2 = DAT_0d86;
            if (cVar1 == cVar2) {
              bVar4 = DAT_0894;
              if ((bVar4 & 0x40) != 0) goto LAB_65d5;
              bVar4 = DAT_0894;
              DAT_0894 = bVar4 | 0x40;
              bVar4 = DAT_0894;
              DAT_0894 = bVar4 | 0x10;
              uVar5 = DAT_08b1;
              DAT_08ba = uVar5;
              uVar5 = DAT_08b2;
              DAT_08bb = uVar5;
              uVar5 = DAT_08b3;
              DAT_08bc = uVar5;
              uVar5 = DAT_08b4;
              DAT_08bd = uVar5;
              bVar4 = DAT_0bf4;
              DAT_0bf4 = bVar4 | 8;
              bVar4 = DAT_0bf4;
              DAT_0bf4 = bVar4 | 4;
              bVar4 = DAT_0bf4;
              DAT_0bf4 = bVar4 | 2;
              bVar4 = DAT_0bf4;
              DAT_0bf4 = bVar4 | 1;
            }
            else {
              cVar2 = DAT_0d87;
              if (cVar1 == cVar2) {
                bVar4 = DAT_0894;
                if ((~bVar4 & 0x40) == 0) {
LAB_65d5:
                  bVar4 = DAT_0894;
                  if ((~bVar4 & 0x40) != 0) {
                    bVar4 = DAT_0894;
                    DAT_0894 = bVar4 | 0x40;
                    bVar4 = DAT_0894;
                    DAT_0894 = bVar4 | 0x20;
                    DAT_0c04 = 0;
                  }
                }
                else {
                  bVar4 = DAT_0894;
                  DAT_0894 = bVar4 | 0x40;
                  bVar4 = DAT_0894;
                  DAT_0894 = bVar4 | 0x10;
                  bVar4 = DAT_08b2;
                  if ((bVar4 & 0x10) != 0) {
                    bVar4 = DAT_08b2;
                    DAT_08b2 = bVar4 & 0xef;
                    bVar4 = DAT_08bb;
                    DAT_08bb = bVar4 & 0xef;
                    bVar4 = DAT_0bf4;
                    DAT_0bf4 = bVar4 | 0x40;
                    bVar4 = DAT_0bf4;
                    DAT_0bf4 = bVar4 | 4;
                  }
                  bVar4 = DAT_08b2;
                  if ((bVar4 & 4) != 0) {
                    bVar4 = DAT_08b2;
                    DAT_08b2 = bVar4 & 0xfb;
                    bVar4 = DAT_08bb;
                    DAT_08bb = bVar4 & 0xfb;
                    bVar4 = DAT_0bf4;
                    DAT_0bf4 = bVar4 | 0x40;
                    bVar4 = DAT_0bf4;
                    DAT_0bf4 = bVar4 | 4;
                  }
                  bVar4 = DAT_08b2;
                  if ((bVar4 & 2) != 0) {
                    bVar4 = DAT_08b2;
                    DAT_08b2 = bVar4 & 0xfd;
                    bVar4 = DAT_08bb;
                    DAT_08bb = bVar4 & 0xfd;
                    bVar4 = DAT_0bf4;
                    DAT_0bf4 = bVar4 | 0x40;
                    bVar4 = DAT_0bf4;
                    DAT_0bf4 = bVar4 | 4;
                  }
                }
              }
              else {
                cVar2 = DAT_0d7c;
                if ((((((cVar1 == cVar2) || (cVar2 = DAT_0d7d, cVar1 == cVar2)) ||
                      (cVar2 = DAT_0d7e, cVar1 == cVar2)) ||
                     ((cVar2 = DAT_0d7f, cVar1 == cVar2 || (cVar2 = DAT_0d80, cVar1 == cVar2)))) ||
                    (cVar2 = DAT_0d81, cVar1 == cVar2)) ||
                   ((cVar2 = DAT_0d82, cVar1 == cVar2 || (cVar2 = DAT_0d83, cVar1 == cVar2))))
                goto LAB_65d5;
              }
            }
          }
        }
LAB_660d:
        bVar4 = DAT_0888;
        DAT_0888 = bVar4 & 0xfe;
        goto LAB_6611;
      }
    }
    else {
      bVar4 = DAT_0888;
      DAT_0888 = bVar4 | 0x80;
    }
    bVar4 = DAT_0888;
    DAT_0888 = bVar4 | 1;
  }
LAB_6611:
  cVar1 = DAT_0d98;
  if (((cVar1 != -0x80) && (bVar4 = DAT_08a3, (~bVar4 & 4) != 0)) &&
     (bVar4 = DAT_08b4, (~bVar4 & 0x80) != 0)) {
    bVar4 = DAT_08b3;
    if ((~bVar4 & 4) == 0) {
      bVar4 = DAT_08b6;
      if ((bVar4 & 0x20) == 0) {
        bVar4 = DAT_08b6;
        if ((bVar4 & 0x10) == 0) {
LAB_6769:
          DAT_0b7f = 0;
          DAT_0b80 = 0;
        }
        else {
          bVar4 = DAT_0000;
          if (((~bVar4 & 4) == 0) || (bVar4 = DAT_0888, (bVar4 & 2) != 0)) {
            bVar4 = DAT_08b9;
            DAT_08b9 = bVar4 | 0x40;
            DAT_0b8a = 0;
          }
          else {
            bVar4 = DAT_08b9;
            if ((bVar4 & 0x40) == 0) {
              bVar4 = DAT_0b8a;
              bVar3 = DAT_0de6;
              if (bVar3 < bVar4) {
                bVar4 = DAT_08b6;
                if ((bVar4 & 0x10) != 0) {
                  bVar4 = DAT_08b6;
                  DAT_08b6 = bVar4 & 0xef;
                  bVar4 = DAT_0c0a;
                  DAT_0c0a = bVar4 | 0x80;
                }
                bVar4 = DAT_08b3;
                if ((bVar4 & 4) != 0) {
                  bVar4 = DAT_08b3;
                  DAT_08b3 = bVar4 & 0xfb;
                  bVar4 = DAT_0bf4;
                  DAT_0bf4 = bVar4 | 0x20;
                }
                goto LAB_6769;
              }
            }
            else {
              bVar4 = DAT_08b9;
              DAT_08b9 = bVar4 & 0xbf;
            }
          }
        }
      }
      else {
        bVar4 = DAT_0000;
        if (((bVar4 & 4) == 0) || (bVar4 = DAT_0888, (~bVar4 & 2) != 0)) {
          bVar4 = DAT_08b9;
          DAT_08b9 = bVar4 | 0x80;
          DAT_0b89 = 0;
        }
        else {
          bVar4 = DAT_08b9;
          if ((bVar4 & 0x80) == 0) {
            bVar4 = DAT_0b89;
            bVar3 = DAT_0de6;
            if (bVar3 < bVar4) {
              bVar4 = DAT_08b6;
              if ((bVar4 & 0x20) != 0) {
                bVar4 = DAT_08b6;
                DAT_08b6 = bVar4 & 0xdf;
                bVar4 = DAT_0c0a;
                DAT_0c0a = bVar4 | 0x80;
              }
              bVar4 = DAT_08b3;
              if ((bVar4 & 4) != 0) {
                bVar4 = DAT_08b3;
                DAT_08b3 = bVar4 & 0xfb;
                bVar4 = DAT_0bf4;
                DAT_0bf4 = bVar4 | 0x20;
              }
              goto LAB_6769;
            }
          }
          else {
            bVar4 = DAT_08b9;
            DAT_08b9 = bVar4 & 0x7f;
          }
        }
      }
    }
    else {
      bVar4 = DAT_0000;
      if (((bVar4 & 4) == 0) || (bVar4 = DAT_0888, (bVar4 & 2) != 0)) {
        bVar4 = DAT_08b9;
        DAT_08b9 = bVar4 & 0x7f;
        DAT_0b7f = 0;
      }
      else {
        bVar4 = DAT_08b9;
        if ((bVar4 & 0x80) == 0) {
          bVar4 = DAT_08b9;
          DAT_08b9 = bVar4 | 0x80;
        }
        else {
          bVar4 = DAT_0b7f;
          if (DAT_45f6 < bVar4) {
            bVar4 = DAT_08b6;
            if ((~bVar4 & 0x20) != 0) {
              bVar4 = DAT_08b6;
              DAT_08b6 = bVar4 | 0x20;
              bVar4 = DAT_0c0a;
              DAT_0c0a = bVar4 | 0x80;
            }
            bVar4 = DAT_08b3;
            if ((~bVar4 & 4) != 0) {
              bVar4 = DAT_08b3;
              DAT_08b3 = bVar4 | 4;
              bVar4 = DAT_0bf4;
              DAT_0bf4 = bVar4 | 0x20;
              bVar4 = DAT_08bc;
              if ((~bVar4 & 4) != 0) {
                bVar4 = DAT_08bc;
                DAT_08bc = bVar4 | 4;
                bVar4 = DAT_0bf4;
                DAT_0bf4 = bVar4 | 2;
              }
            }
            goto LAB_6770;
          }
        }
      }
      bVar4 = DAT_0000;
      if (((~bVar4 & 4) == 0) || (bVar4 = DAT_0888, (~bVar4 & 2) != 0)) {
        bVar4 = DAT_08b9;
        DAT_08b9 = bVar4 & 0xbf;
        DAT_0b80 = 0;
      }
      else {
        bVar4 = DAT_08b9;
        if ((bVar4 & 0x40) == 0) {
          bVar4 = DAT_08b9;
          DAT_08b9 = bVar4 | 0x40;
        }
        else {
          bVar4 = DAT_0b80;
          bVar3 = DAT_0de6;
          if (bVar3 < bVar4) {
            bVar4 = DAT_08b6;
            if ((~bVar4 & 0x10) != 0) {
              bVar4 = DAT_08b6;
              DAT_08b6 = bVar4 | 0x10;
              bVar4 = DAT_0c0a;
              DAT_0c0a = bVar4 | 0x80;
            }
            bVar4 = DAT_08b3;
            if ((~bVar4 & 4) != 0) {
              bVar4 = DAT_08b3;
              DAT_08b3 = bVar4 | 4;
              bVar4 = DAT_0bf4;
              DAT_0bf4 = bVar4 | 0x20;
              bVar4 = DAT_08bc;
              if ((~bVar4 & 4) != 0) {
                bVar4 = DAT_08bc;
                DAT_08bc = bVar4 | 4;
                bVar4 = DAT_0bf4;
                DAT_0bf4 = bVar4 | 2;
              }
            }
          }
        }
      }
    }
  }
LAB_6770:
  bVar4 = DAT_08b3;
  if ((~bVar4 & 4) == 0) {
    uVar5 = 0x9a;
  }
  else {
    uVar5 = DAT_0bf0;
  }
  DAT_08df = uVar5;
  bVar4 = DAT_08b6;
  if ((bVar4 & 8) == 0) {
    bVar4 = DAT_0889;
    if ((~bVar4 & 8) == 0) {
      bVar4 = DAT_0888;
      if ((bVar4 & 2) == 0) {
        bVar4 = DAT_08b9;
        if ((bVar4 & 0x20) == 0) {
          bVar4 = DAT_08b9;
          DAT_08b9 = bVar4 | 0x20;
        }
        else {
          bVar4 = DAT_0bf1;
          if (DAT_45d5 < bVar4) {
            bVar4 = DAT_08b6;
            DAT_08b6 = bVar4 | 8;
            bVar4 = DAT_0889;
            DAT_0889 = bVar4 & 0xf7;
          }
        }
      }
      else {
        bVar4 = DAT_08b9;
        DAT_08b9 = bVar4 & 0xdf;
        bVar4 = DAT_0889;
        DAT_0889 = bVar4 & 0xf7;
        DAT_0bf1 = 0;
      }
    }
  }
  else {
    bVar4 = DAT_0888;
    if ((~bVar4 & 2) == 0) {
      bVar4 = DAT_08b9;
      DAT_08b9 = bVar4 & 0xdf;
      bVar4 = DAT_08b6;
      DAT_08b6 = bVar4 & 0xf7;
      DAT_0bf1 = 0;
    }
    else {
      bVar4 = DAT_08b9;
      DAT_08b9 = bVar4 | 0x20;
      DAT_0bf2 = 0;
    }
  }
  cVar1 = DAT_0d9a;
  if (((cVar1 == -0x80) || (bVar4 = DAT_08a3, (~bVar4 & 4) == 0)) ||
     (bVar4 = DAT_08b4, (~bVar4 & 0x80) == 0)) goto LAB_686d;
  bVar4 = DAT_0881;
  if ((bVar4 & 0x10) == 0) {
    bVar4 = DAT_0bf0;
    if ((bVar4 < DAT_45f8) || (DAT_45f9 < bVar4)) {
      bVar4 = DAT_0888;
      if ((bVar4 & 2) == 0) goto LAB_67f0;
      bVar4 = DAT_08b9;
      if ((~bVar4 & 0x10) == 0) {
        bVar4 = DAT_0b81;
        if (DAT_45f7 < bVar4) {
          bVar4 = DAT_08b3;
          if ((~bVar4 & 1) != 0) {
            bVar4 = DAT_08b3;
            DAT_08b3 = bVar4 | 1;
            bVar4 = DAT_0bf4;
            DAT_0bf4 = bVar4 | 0x20;
          }
          bVar4 = DAT_08bc;
          if ((~bVar4 & 1) != 0) {
            bVar4 = DAT_08bc;
            DAT_08bc = bVar4 | 1;
            bVar4 = DAT_0bf4;
            DAT_0bf4 = bVar4 | 2;
          }
        }
        goto LAB_686d;
      }
      bVar4 = DAT_08b9;
      DAT_08b9 = bVar4 | 0x10;
      bVar4 = DAT_08b9;
      DAT_08b9 = bVar4 & 0xf7;
    }
    else {
      bVar4 = DAT_08b9;
      if ((~bVar4 & 8) == 0) {
        bVar4 = DAT_0b8b;
        if ((DAT_45f7 < bVar4) && (bVar4 = DAT_08b3, (bVar4 & 1) != 0)) {
          bVar4 = DAT_08b3;
          DAT_08b3 = bVar4 & 0xfe;
          bVar4 = DAT_0bf4;
          DAT_0bf4 = bVar4 | 0x20;
        }
        goto LAB_686d;
      }
      bVar4 = DAT_08b9;
      DAT_08b9 = bVar4 | 8;
      bVar4 = DAT_08b9;
      DAT_08b9 = bVar4 & 0xef;
    }
  }
  else {
LAB_67f0:
    bVar4 = DAT_08b9;
    DAT_08b9 = bVar4 & 0xef;
    bVar4 = DAT_08b9;
    DAT_08b9 = bVar4 & 0xf7;
  }
  DAT_0b81 = 0;
  DAT_0b8b = 0;
LAB_686d:
  DAT_08c4 = 8;
  DAT_08c5 = 0;
  return;
}


/* Entry 6877 */

void adc_dispatch_3(undefined2 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  byte extraout_A;
  byte bVar4;
  ushort uVar5;
  
  cVar3 = DAT_0d90;
  bVar4 = (byte)((ushort)param_1 >> 8);
  if (((cVar3 != -0x80) && (bVar1 = DAT_08a3, (~bVar1 & 4) != 0)) &&
     (bVar1 = DAT_08b4, (~bVar1 & 0x80) != 0)) {
    if ((bVar4 < 7) || (0xf7 < bVar4)) {
      bVar4 = DAT_08b7;
      if ((bVar4 & 0x20) == 0) {
        bVar4 = DAT_08b7;
        DAT_08b7 = bVar4 | 0x20;
      }
      else {
        bVar4 = DAT_0b79;
        bVar1 = DAT_0de6;
        if ((bVar1 < bVar4) && (bVar4 = DAT_08b2, (~bVar4 & 0x40) != 0)) {
          bVar4 = DAT_08b2;
          DAT_08b2 = bVar4 | 0x40;
          bVar4 = DAT_0bf4;
          DAT_0bf4 = bVar4 | 0x40;
          bVar4 = DAT_08bb;
          if ((~bVar4 & 0x40) != 0) {
            bVar4 = DAT_08bb;
            DAT_08bb = bVar4 | 0x40;
            bVar4 = DAT_0bf4;
            DAT_0bf4 = bVar4 | 4;
          }
        }
      }
    }
    else {
      bVar4 = DAT_08b7;
      if ((bVar4 & 0x20) == 0) {
        bVar4 = DAT_0b86;
        bVar1 = DAT_0de6;
        if ((bVar1 < bVar4) && (bVar4 = DAT_08b2, (bVar4 & 0x40) != 0)) {
          bVar4 = DAT_08b2;
          DAT_08b2 = bVar4 & 0xbf;
          bVar4 = DAT_0bf4;
          DAT_0bf4 = bVar4 | 0x40;
        }
      }
      else {
        bVar4 = DAT_08b7;
        DAT_08b7 = bVar4 & 0xdf;
      }
    }
  }
  bVar4 = DAT_08a3;
  if (((~bVar4 & 4) == 0) || (bVar4 = DAT_08b2, (~bVar4 & 0x40) != 0)) {
    bVar4 = DAT_08d0;
    DAT_08de = bVar4;
    uVar5 = (ushort)bVar4;
    if (false) {
      uVar5 = 0;
    }
    uVar5 = FUN_bbb8(uVar5 * 0x20,(byte *)((short)&DAT_46ee + 1));
    extraout_A = (byte)(uVar5 >> 8);
    DAT_0915 = extraout_A;
    bVar4 = (byte)((ushort)extraout_A * 0xa0 >> 8);
    if (0x95 < bVar4) {
      bVar4 = 0x95;
    }
    DAT_0b0f = bVar4;
  }
  else {
    uVar2 = DAT_08d0;
    DAT_08de = uVar2;
    DAT_0915 = DAT_4601;
    bVar4 = (byte)((ushort)DAT_4601 * 0xa0 >> 8);
    if (0x95 < bVar4) {
      bVar4 = 0x95;
    }
    DAT_0b0f = bVar4;
  }
  DAT_08c4 = 0x10;
  DAT_08c5 = 0;
  return;
}


/* Entry 6931 */

void adc_dispatch_6(undefined2 param_1)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte extraout_A;
  undefined1 uVar6;
  ushort uVar7;
  
  cVar3 = DAT_0d8f;
  bVar5 = (byte)((ushort)param_1 >> 8);
  if (((cVar3 != -0x80) && (bVar1 = DAT_08a3, (~bVar1 & 4) != 0)) &&
     (bVar1 = DAT_08b4, (~bVar1 & 0x80) != 0)) {
    if ((bVar5 < 7) || (0xf7 < bVar5)) {
      bVar5 = DAT_08b7;
      if ((bVar5 & 0x10) == 0) {
        bVar5 = DAT_08b7;
        DAT_08b7 = bVar5 | 0x10;
        bVar5 = DAT_0bce;
        DAT_0bce = bVar5 | 0x80;
      }
      else {
        bVar5 = DAT_0b78;
        bVar1 = DAT_0de6;
        if ((bVar1 < bVar5) && (bVar5 = DAT_08b2, (~bVar5 & 0x80) != 0)) {
          bVar5 = DAT_08b2;
          DAT_08b2 = bVar5 | 0x80;
          bVar5 = DAT_0bf4;
          DAT_0bf4 = bVar5 | 0x40;
          bVar5 = DAT_08bb;
          if ((~bVar5 & 0x80) != 0) {
            bVar5 = DAT_08bb;
            DAT_08bb = bVar5 | 0x80;
            bVar5 = DAT_0bf4;
            DAT_0bf4 = bVar5 | 4;
          }
        }
      }
    }
    else {
      bVar5 = DAT_08b7;
      if ((bVar5 & 0x10) == 0) {
        bVar5 = DAT_0b85;
        bVar1 = DAT_0de6;
        if (bVar1 < bVar5) {
          bVar5 = DAT_08b2;
          if ((bVar5 & 0x80) != 0) {
            bVar5 = DAT_08b2;
            DAT_08b2 = bVar5 & 0x7f;
            bVar5 = DAT_0bf4;
            DAT_0bf4 = bVar5 | 0x40;
          }
          bVar5 = DAT_0bce;
          DAT_0bce = bVar5 & 0x7f;
        }
      }
      else {
        bVar5 = DAT_08b7;
        DAT_08b7 = bVar5 & 0xef;
      }
    }
  }
  uVar2 = RAM08d0;
  RAM08dc = uVar2;
  uVar2 = RAM08dc;
  (*(code *)0xbc52)();
  DAT_0916 = extraout_A;
  uVar7 = (ushort)extraout_A * 0xa0;
  if (0x95ff < uVar7) {
    uVar7 = CONCAT11(0x95,(char)uVar7);
  }
  DAT_0b0c = (char)(uVar7 >> 8);
  bVar5 = DAT_08a3;
  if (((~bVar5 & 4) == 0) || (bVar5 = DAT_08b2, uVar6 = DAT_4600, (bVar5 & 0x80) == 0)) {
    uVar6 = DAT_0916;
  }
  DAT_0914 = uVar6;
  bVar5 = DAT_0883;
  if ((~bVar5 & 0x20) != 0) {
    bVar5 = DAT_0883;
    DAT_0883 = bVar5 | 0x20;
    uVar7 = FUN_bbaa((uchar)uVar7,&UNK_1970);
    DAT_0a08 = (char)(uVar7 >> 8);
    bVar5 = DAT_0884;
    if ((~bVar5 & 8) != 0) {
      bVar5 = DAT_0884;
      DAT_0884 = bVar5 | 8;
      uVar7 = FUN_bbaa((uchar)uVar7,&DAT_0da1);
      DAT_0992 = uVar7;
      uVar7 = FUN_bbaa((uchar)uVar7,&DAT_0db3);
      DAT_0994 = uVar7;
    }
  }
  bVar5 = DAT_08a3;
  if ((bVar5 & 4) == 0) {
    bVar5 = DAT_08b2;
    if (((bVar5 & 0x80) == 0) || (bVar5 = DAT_0881, (~bVar5 & 0x10) == 0)) {
      bVar5 = DAT_0914;
      if (DAT_4226 <= bVar5) {
        if ((bVar5 == DAT_4227) || (bVar5 < DAT_4227)) goto LAB_6a5d;
        goto LAB_6a55;
      }
    }
    else {
      bVar5 = DAT_0aee;
      if (bVar5 < DAT_4228) {
LAB_6a55:
        bVar5 = DAT_00f0;
        DAT_00f0 = bVar5 | 4;
        goto LAB_6a5d;
      }
      if (bVar5 <= DAT_4229) goto LAB_6a5d;
    }
  }
  else {
    cVar3 = DAT_0bff;
    cVar4 = DAT_0d81;
    if (cVar3 == cVar4) goto LAB_6a5d;
  }
  bVar5 = DAT_00f0;
  DAT_00f0 = bVar5 & 0xfb;
LAB_6a5d:
  cVar3 = DAT_0e55;
  if (cVar3 == '@') {
    uVar6 = DAT_0914;
    DAT_0bba = uVar6;
    DAT_0bbc = 0x445e;
    uVar7 = FUN_c122('^');
    DAT_0e93._0_1_ = (char)(uVar7 >> 8);
    DAT_0e95 = uVar7 << 8;
    DAT_0e97 = 0;
    uVar7 = FUN_be30(&DAT_4455,'\0','\0');
    DAT_0ab2 = uVar7;
    uVar6 = DAT_0914;
    DAT_0bba = uVar6;
    DAT_0bbc = 0x4480;
    uVar7 = FUN_c122(0x80);
    DAT_0e93._0_1_ = (char)(uVar7 >> 8);
    DAT_0e95 = uVar7 << 8;
    DAT_0e97 = 0;
    uVar7 = FUN_be30(&UNK_4477,'\0','\0');
    DAT_0ab4 = uVar7;
    uVar6 = DAT_0914;
    DAT_0bba = uVar6;
    DAT_0bbc = 0x44a2;
    uVar7 = FUN_c122(0xa2);
    DAT_0e93._0_1_ = (char)(uVar7 >> 8);
    DAT_0e95 = uVar7 << 8;
    DAT_0e97 = 0;
    uVar7 = FUN_be30(&UNK_4499,'\0','\0');
    DAT_0ab6 = uVar7;
    uVar6 = DAT_0914;
    DAT_0bba = uVar6;
    DAT_0bbc = 0x44c4;
    uVar7 = FUN_c122((uchar)uVar7);
    DAT_0e93._0_1_ = (char)(uVar7 >> 8);
    DAT_0e95 = uVar7 << 8;
    DAT_0e97 = 0;
    uVar7 = FUN_be30(&UNK_44bb,'\0','\0');
    DAT_0ab8 = uVar7;
  }
  DAT_08c4 = 1;
  DAT_08c5 = 0;
  return;
}


/* Entry 6b1c */

void adc_dispatch_5(undefined2 param_1)

{
  DAT_08e3 = (char)((ushort)param_1 >> 8);
  DAT_08c4 = 2;
  DAT_08c5 = 0;
  return;
}


/* Entry 6b29 */

void adc_dispatch_7(undefined2 param_1)

{
  DAT_08e4 = (char)((ushort)param_1 >> 8);
  DAT_08c4 = 4;
  DAT_08c5 = 0;
  return;
}


/* Entry 6b36 */

void FUN_6b36(void)

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
  
  bVar2 = DAT_08be;
  DAT_08be = bVar2 | 0x10;
  bVar2 = DAT_0941;
  if (0x3f < bVar2) {
    DAT_0a4e = 0xffff;
    uVar5 = 0x1e0;
    goto LAB_6ba7;
  }
  uVar5 = DAT_0a42;
  uVar9 = DAT_0a44;
  if (CARRY2(uVar5,uVar9)) {
LAB_6b55:
    sVar6 = -1;
  }
  else {
    uVar3 = DAT_0a46;
    uVar1 = uVar5 + uVar9 + uVar3;
    if (CARRY2(uVar5 + uVar9,uVar3)) goto LAB_6b55;
    uVar9 = DAT_0a48;
    uVar5 = uVar1 + uVar9;
    if (CARRY2(uVar1,uVar9)) goto LAB_6b55;
    uVar1 = DAT_0a4a;
    uVar9 = uVar5 + uVar1;
    if (CARRY2(uVar5,uVar1)) goto LAB_6b55;
    uVar5 = DAT_0a4c;
    sVar6 = uVar9 + uVar5;
    if (CARRY2(uVar9,uVar5)) goto LAB_6b55;
  }
  DAT_0a4e = sVar6;
  sVar7 = sVar6 << 1;
  if (sVar6 < 0) {
    sVar7 = -1;
  }
  DAT_0a50 = sVar7;
  uVar9 = DAT_0a4e;
  uVar5 = DAT_0a3e;
  sVar6 = uVar9 + uVar5;
  if (CARRY2(uVar9,uVar5)) {
    sVar6 = -1;
  }
  DAT_0a52 = sVar6;
  uVar5 = DAT_0a4e;
  RAM0e62 = 0x927c / uVar5;
  uVar9 = DAT_0a4e;
  bVar2 = DAT_0e63._0_1_;
  uVar5 = CONCAT11(bVar2,(char)(((uint)(0x927c % uVar5) << 0x10) / (uint)uVar9 >> 8)) << 3;
  if ((bVar2 & 0x3f) >> 5 != 0) {
    uVar5 = 0xffff;
  }
LAB_6ba7:
  if (0xfdff < uVar5) {
    uVar5 = 0xfe00;
  }
  RAM0918 = uVar5;
  if (DAT_4214 <= uVar5) {
    bVar2 = DAT_0880;
    DAT_0880 = bVar2 | 2;
    bVar2 = DAT_0c1a;
    DAT_0c1a = bVar2 | 0x20;
  }
  bVar2 = DAT_0a55._0_1_;
  if (bVar2 < 4) {
    DAT_0e62 = bVar2 >> 1;
    uVar8 = RAM0a56;
    bVar4 = (byte)((ushort)uVar8 >> 8);
    DAT_0e63 = CONCAT11(bVar4 >> 1 | bVar2 << 7,(byte)uVar8 >> 1 | bVar4 << 7);
    bVar2 = DAT_0e62;
    DAT_0e62 = bVar2 >> 1;
    uVar8 = DAT_0e63;
    bVar4 = (byte)((ushort)uVar8 >> 8);
    uVar8 = CONCAT11(bVar4 >> 1 | bVar2 << 7,(byte)uVar8 >> 1 | bVar4 << 7);
    DAT_0e63 = uVar8;
  }
  else {
    uVar8 = 0xffff;
  }
  DAT_0a8a = uVar8;
  uVar5 = DAT_0a8a;
  RAM0e62 = 0x927c / uVar5;
  uVar9 = DAT_0a8a;
  bVar2 = DAT_0e63._0_1_;
  uVar5 = CONCAT11(bVar2,(char)(((uint)(0x927c % uVar5) << 0x10) / (uint)uVar9 >> 8)) << 3;
  if ((bVar2 & 0x3f) >> 5 != 0) {
    uVar5 = 0xffff;
  }
  if (0xfdff < uVar5) {
    uVar5 = 0xfe00;
  }
  DAT_0926 = uVar5;
  if (DAT_18b2 == '\0') {
    uVar8 = DAT_091e;
    DAT_0922 = uVar8;
    uVar5 = RAM0918;
    DAT_0920 = uVar5;
  }
  else {
    uVar5 = DAT_0926;
    DAT_0920 = uVar5;
    DAT_0922 = uVar5;
  }
  uVar9 = DAT_45d2;
  if (DAT_45d2 == 0) {
    uVar9 = 1;
  }
  uVar5 = uVar5 / uVar9;
  if ((char)(uVar5 >> 8) != '\0') {
    uVar5 = 0xff;
  }
  DAT_0b05 = (char)uVar5;
  bVar2 = DAT_08be;
  DAT_08be = bVar2 & 0xef;
  return;
}


/* Entry 6c49 */

void FUN_6c49(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = DAT_0e54;
  if (cVar2 != '@') {
    return;
  }
  bVar1 = DAT_08a3;
  if ((bVar1 & 4) != 0) {
    cVar2 = DAT_0bff;
    cVar3 = DAT_0d7f;
    if (cVar2 == cVar3) {
      return;
    }
    goto LAB_6cd2;
  }
  bVar1 = DAT_0920._0_1_;
  if (bVar1 < DAT_4454) {
    if (bVar1 < DAT_4451) {
LAB_6c97:
      DAT_0aad = 0;
      goto LAB_6ca3;
    }
    if (bVar1 < DAT_4452) {
      cVar2 = DAT_0aad;
      if (cVar2 == '\0') goto LAB_6c97;
    }
    else if ((DAT_4453 <= bVar1) && (bVar1 = DAT_0aad, 3 < bVar1)) goto LAB_6c9e;
    DAT_0aad = 2;
    bVar1 = DAT_0aac;
    DAT_0aac = bVar1 | 2;
  }
  else {
LAB_6c9e:
    DAT_0aad = 4;
LAB_6ca3:
    bVar1 = DAT_0aac;
    DAT_0aac = bVar1 & 0xfd;
  }
  bVar1 = DAT_0aac;
  if ((((((bVar1 & 2) != 0) && (bVar1 = DAT_0aac, (bVar1 & 4) != 0)) &&
       (bVar1 = DAT_08b1, (~bVar1 & 8) != 0)) && (bVar1 = DAT_08b1, (~bVar1 & 4) != 0)) ||
     ((DAT_4450 == -0x80 && (bVar1 = DAT_0acf, (bVar1 & 4) != 0)))) {
    bVar1 = DAT_00e0;
    DAT_00e0 = bVar1 & 0x7f;
    bVar1 = DAT_0aac;
    DAT_0aac = bVar1 | 1;
    return;
  }
LAB_6cd2:
  bVar1 = DAT_00e0;
  DAT_00e0 = bVar1 | 0x80;
  bVar1 = DAT_0aac;
  DAT_0aac = bVar1 & 0xfe;
  return;
}


/* Entry 6cda */

void FUN_6cda(uchar param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  byte extraout_A;
  byte extraout_A_00;
  byte extraout_A_01;
  byte extraout_A_02;
  uchar uVar4;
  undefined1 extraout_A_03;
  ushort uVar5;
  byte bVar11;
  undefined2 uVar6;
  short sVar7;
  byte bVar12;
  char cVar13;
  ushort uVar8;
  undefined2 uVar9;
  undefined1 uVar14;
  short sVar10;
  byte *pbVar15;
  ushort uVar16;
  
  bVar11 = DAT_08be;
  DAT_08be = bVar11 | 0x40;
  uVar5 = FUN_bbaa(param_1,&UNK_3857);
  DAT_0966 = (uVar5 >> 8) << 3;
  cVar13 = DAT_0d8b;
  if (((cVar13 != -0x80) && (bVar11 = DAT_08a3, (~bVar11 & 4) != 0)) &&
     (bVar11 = DAT_08b4, (~bVar11 & 0x80) != 0)) {
    bVar11 = DAT_0c20;
    if ((bVar11 & 0x80) == 0) {
LAB_6d41:
      bVar11 = DAT_08b7;
      DAT_08b7 = bVar11 & 0xfb;
      bVar11 = DAT_08b7;
      DAT_08b7 = bVar11 & 0xfd;
    }
    else {
      uVar16 = DAT_0cbe;
      uVar8 = DAT_0cbc;
      uVar5 = uVar16 - uVar8;
      if (uVar16 < uVar8) {
        uVar5 = CONCAT11((~(byte)(uVar5 >> 8) + 1) - ((char)-(char)uVar5 != '\0'),-(char)uVar5);
      }
      if (DAT_45e0 < uVar5) {
        bVar11 = DAT_08b7;
        if ((~bVar11 & 2) == 0) {
          bVar11 = DAT_0b83;
          bVar12 = DAT_0de6;
          if (bVar12 < bVar11) {
            bVar11 = DAT_08b1;
            if ((bVar11 & 0x10) != 0) {
              bVar11 = DAT_08b1;
              DAT_08b1 = bVar11 & 0xef;
              bVar11 = DAT_0bf4;
              DAT_0bf4 = bVar11 | 0x80;
            }
            bVar11 = DAT_0bcd;
            DAT_0bcd = bVar11 & 0xef;
          }
        }
        else {
          bVar11 = DAT_08b7;
          DAT_08b7 = bVar11 | 2;
          bVar11 = DAT_08b7;
          DAT_08b7 = bVar11 & 0xfb;
        }
      }
      else {
        bVar11 = DAT_0881;
        if (((((~bVar11 & 0x10) == 0) || (bVar11 = DAT_0920._0_1_, DAT_45de < bVar11)) ||
            ((bVar11 = DAT_08f2._0_1_, DAT_45df < bVar11 ||
             ((bVar11 = DAT_0bcd, (~bVar11 & 0x20) == 0 || (bVar11 = DAT_0bcd, (~bVar11 & 8) == 0)))
             ))) || (bVar11 = DAT_08b1, (~bVar11 & 4) == 0)) goto LAB_6d41;
        bVar11 = DAT_08b7;
        if ((bVar11 & 4) == 0) {
          bVar11 = DAT_08b7;
          DAT_08b7 = bVar11 | 4;
          bVar11 = DAT_08b7;
          DAT_08b7 = bVar11 & 0xfd;
          bVar11 = DAT_0bcd;
          DAT_0bcd = bVar11 | 0x10;
        }
        else {
          bVar11 = DAT_0b76;
          if ((DAT_45dc < bVar11) && (bVar11 = DAT_08b1, (~bVar11 & 0x10) != 0)) {
            bVar11 = DAT_08b1;
            DAT_08b1 = bVar11 | 0x10;
            bVar11 = DAT_0bf4;
            DAT_0bf4 = bVar11 | 0x80;
            bVar11 = DAT_08ba;
            if ((~bVar11 & 0x10) != 0) {
              bVar11 = DAT_08ba;
              DAT_08ba = bVar11 | 0x10;
              bVar11 = DAT_0bf4;
              DAT_0bf4 = bVar11 | 8;
            }
          }
        }
      }
    }
  }
  uVar5 = DAT_0a4e;
  if (DAT_41f2 < uVar5) {
    if (DAT_41f0 <= uVar5) {
      bVar11 = DAT_088c;
      DAT_088c = bVar11 & 0xf7;
    }
  }
  else {
    bVar11 = DAT_088c;
    DAT_088c = bVar11 | 8;
  }
  if (DAT_41f6 < uVar5) {
    if (DAT_41f4 <= uVar5) {
      bVar11 = DAT_088c;
      DAT_088c = bVar11 & 0xfd;
    }
  }
  else {
    bVar11 = DAT_088c;
    DAT_088c = bVar11 | 2;
  }
  bVar11 = DAT_08b1;
  if (((~bVar11 & 8) != 0) && (bVar11 = DAT_08b1, (~bVar11 & 4) != 0)) {
    bVar11 = DAT_0886;
    if ((~bVar11 & 0x10) == 0) {
      bVar11 = DAT_0b51;
      if (DAT_345b <= bVar11) {
        bVar11 = DAT_0886;
        if (((bVar11 & 0x40) != 0) && (bVar11 = DAT_0886, (bVar11 & 0x10) != 0)) {
          bVar11 = DAT_088a;
          DAT_088a = bVar11 | 0x20;
          bVar11 = DAT_088a;
          DAT_088a = bVar11 | 2;
        }
        bVar11 = DAT_0886;
        DAT_0886 = bVar11 & 0xef;
      }
    }
    else {
      bVar11 = DAT_0b50;
      if (DAT_345a <= bVar11) {
        bVar11 = DAT_0886;
        DAT_0886 = bVar11 | 0x10;
      }
    }
  }
  bVar11 = DAT_08b1;
  if (((~bVar11 & 0x20) == 0) || (bVar11 = DAT_08b1, (~bVar11 & 0x10) == 0)) {
LAB_6e67:
    bVar11 = DAT_0886;
    DAT_0886 = bVar11 & 0xf7;
  }
  else {
    bVar11 = DAT_08b1;
    if (((~bVar11 & 8) == 0) || (bVar11 = DAT_08b1, (~bVar11 & 4) == 0)) {
LAB_6e2c:
      bVar11 = DAT_0cb2._0_1_;
      if (DAT_3459 < bVar11) {
        if ((DAT_3458 <= bVar11) && (bVar11 = DAT_0886, (bVar11 & 8) != 0)) {
          bVar11 = DAT_0886;
          if ((bVar11 & 0x40) != 0) {
            bVar11 = DAT_088a;
            DAT_088a = bVar11 | 0x40;
            bVar11 = DAT_088a;
            DAT_088a = bVar11 | 4;
          }
          goto LAB_6e67;
        }
      }
      else {
        bVar11 = DAT_0886;
        DAT_0886 = bVar11 | 8;
      }
    }
    else {
      bVar11 = DAT_08f6;
      bVar12 = DAT_0a06;
      if (bVar11 < bVar12) goto LAB_6e2c;
      bVar11 = DAT_0886;
      if ((bVar11 & 8) != 0) {
        bVar11 = DAT_0886;
        if ((bVar11 & 0x40) != 0) {
          bVar11 = DAT_088a;
          DAT_088a = bVar11 | 0x20;
          bVar11 = DAT_088a;
          DAT_088a = bVar11 | 2;
        }
        goto LAB_6e67;
      }
    }
  }
  bVar12 = DAT_0914;
  bVar11 = DAT_0886;
  if ((~bVar11 & 0x40) == 0) {
    if (DAT_3456 < bVar12) goto LAB_6e83;
LAB_6efe:
    bVar11 = DAT_0886;
    if ((bVar11 & 0x40) != 0) {
LAB_6f8f:
      DAT_0b4e = 0;
    }
LAB_6f92:
    bVar11 = DAT_0886;
    DAT_0886 = bVar11 & 0xef;
    bVar11 = DAT_0886;
    DAT_0886 = bVar11 & 0xf7;
LAB_6f9a:
    bVar11 = DAT_0886;
    DAT_0886 = bVar11 & 0xbf;
    DAT_088a = 0;
    bVar11 = DAT_0920._0_1_;
    if (((bVar11 < DAT_3450) || (bVar11 = DAT_0914, bVar11 <= DAT_3456)) ||
       (bVar11 = DAT_088f, (bVar11 & 0x80) != 0)) {
      DAT_097a = 0x80;
    }
  }
  else {
    if (bVar12 < DAT_3457) goto LAB_6efe;
LAB_6e83:
    bVar11 = DAT_0b2d;
    if ((bVar11 <= DAT_3451) || (bVar11 = DAT_088d, (bVar11 & 4) == 0)) goto LAB_6efe;
    bVar12 = DAT_0920._0_1_;
    bVar11 = DAT_0886;
    if ((~bVar11 & 0x40) == 0) {
      if (DAT_3454 <= bVar12) goto LAB_6eb3;
      bVar11 = DAT_0886;
      if ((bVar11 & 0x40) == 0) goto LAB_6f92;
      bVar11 = DAT_088a;
      DAT_088a = bVar11 | 0x80;
      bVar11 = DAT_088a;
      DAT_088a = bVar11 | 8;
LAB_6f12:
      cVar13 = DAT_097a;
      if ((cVar13 == '\0') &&
         ((((bVar11 = DAT_088a, uVar14 = DAT_3449, uVar3 = DAT_344c, (~bVar11 & 0x80) == 0 ||
            (bVar11 = DAT_088a, (~bVar11 & 0x40) == 0)) ||
           (bVar11 = DAT_088a, uVar14 = DAT_344a, uVar3 = DAT_344d, (~bVar11 & 0x20) == 0)) ||
          (bVar11 = DAT_088a, uVar14 = DAT_344b, uVar3 = DAT_344e, (~bVar11 & 0x10) == 0)))) {
        DAT_097a = uVar14;
        DAT_0a04 = uVar3;
      }
      cVar13 = DAT_0a8e;
      if ((cVar13 == -0x80) &&
         (((bVar11 = DAT_088a, bVar12 = DAT_4131, uVar14 = DAT_4134, (~bVar11 & 8) == 0 ||
           ((DAT_4130 != '\0' &&
            (((bVar11 = DAT_088a, (~bVar11 & 4) == 0 ||
              (bVar11 = DAT_088a, bVar12 = DAT_4132, uVar14 = DAT_4135, (~bVar11 & 2) == 0)) ||
             (bVar11 = DAT_088a, bVar12 = DAT_4133, uVar14 = DAT_4136, (~bVar11 & 1) == 0)))))) &&
          (DAT_0a8e = bVar12, bVar12 < 0x80)))) {
        DAT_0a8f = uVar14;
      }
      goto LAB_6f8f;
    }
    if (bVar12 <= DAT_3455) goto LAB_6f92;
LAB_6eb3:
    bVar11 = DAT_0886;
    if (((((bVar11 & 0x10) == 0) || (bVar11 = DAT_08b1, (~bVar11 & 8) == 0)) ||
        (bVar11 = DAT_08b1, (~bVar11 & 4) == 0)) &&
       (((bVar11 = DAT_08b1, (~bVar11 & 0x20) == 0 || (bVar11 = DAT_08b1, (~bVar11 & 0x10) == 0)) ||
        (bVar11 = DAT_0886, (bVar11 & 8) == 0)))) {
      bVar11 = DAT_0886;
      if ((bVar11 & 0x40) != 0) goto LAB_6f12;
      goto LAB_6f92;
    }
    bVar11 = DAT_0b4e;
    if (bVar11 <= DAT_346e) goto LAB_6f9a;
    bVar11 = DAT_0b4f;
    if ((bVar11 < DAT_3453) || (bVar11 = DAT_088f, (~bVar11 & 0x80) == 0)) {
      bVar11 = DAT_0886;
      if ((bVar11 & 0x40) != 0) {
        bVar11 = DAT_088a;
        DAT_088a = bVar11 | 0x10;
        bVar11 = DAT_088a;
        DAT_088a = bVar11 | 1;
        goto LAB_6f12;
      }
      goto LAB_6f92;
    }
    bVar11 = DAT_0886;
    DAT_0886 = bVar11 | 0x40;
    DAT_097a = 0;
    DAT_0a04 = 0;
  }
  bVar11 = DAT_0a38._0_1_;
  bVar12 = DAT_0dd9;
  if ((bVar12 <= bVar11) || (bVar11 = DAT_0920._0_1_, bVar11 < DAT_4139)) {
    DAT_0a8e = 0x80;
  }
  bVar11 = DAT_08b3;
  if ((~bVar11 & 8) == 0) {
    uVar5 = DAT_0a4e;
    if (DAT_3472 < uVar5) {
      if (DAT_3470 < uVar5) {
        bVar11 = DAT_0886;
        DAT_0886 = bVar11 & 0xfb;
      }
    }
    else {
      bVar11 = DAT_0886;
      DAT_0886 = bVar11 | 4;
    }
  }
  else {
    bVar11 = DAT_0886;
    DAT_0886 = bVar11 & 0xfb;
  }
  uVar8 = DAT_08d4;
  uVar16 = DAT_08f2;
  uVar5 = uVar8 - uVar16;
  if (uVar8 < uVar16) {
    uVar5 = FUN_bbf9(CONCAT11((~(byte)(uVar5 >> 8) + 1) - ((char)-(char)uVar5 != '\0'),-(char)uVar5)
                     ,&UNK_1844);
    uVar5 = CONCAT11((~(byte)(uVar5 >> 8) + 1) - ((char)-(char)uVar5 != '\0'),-(char)uVar5);
  }
  else {
    uVar5 = FUN_bbf9(uVar5,&UNK_1844);
  }
  sVar7 = DAT_08f2;
  DAT_08f2 = uVar5 + sVar7;
  bVar11 = DAT_0b36;
  if (bVar11 < DAT_19b2) {
    uVar6 = DAT_08d4;
    DAT_08f2 = uVar6;
  }
  bVar11 = DAT_0b31;
  if (bVar11 < 100) {
    uVar6 = DAT_0cae;
    DAT_08fe = uVar6;
  }
  else {
    bVar11 = DAT_088f;
    if ((~bVar11 & 0x80) == 0) {
      pbVar15 = &UNK_330b;
    }
    else {
      pbVar15 = &UNK_330a;
    }
    uVar16 = DAT_0cae;
    uVar8 = DAT_08fe;
    uVar5 = uVar16 - uVar8;
    if (uVar16 < uVar8) {
      uVar5 = FUN_bbf9(CONCAT11((~(byte)(uVar5 >> 8) + 1) - ((char)-(char)uVar5 != '\0'),
                                -(char)uVar5),pbVar15);
      uVar5 = CONCAT11((~(byte)(uVar5 >> 8) + 1) - ((char)-(char)uVar5 != '\0'),-(char)uVar5);
    }
    else {
      uVar5 = FUN_bbf9(uVar5,pbVar15);
    }
    sVar7 = DAT_08fe;
    DAT_08fe = uVar5 + sVar7;
  }
  bVar2 = DAT_0cae._0_1_;
  bVar12 = DAT_08fe._0_1_;
  bVar11 = bVar2 - bVar12;
  if (bVar2 < bVar12) {
    bVar11 = -bVar11;
    DAT_0e62 = 0x80;
  }
  else {
    DAT_0e62 = 0;
  }
  if (0x7f < bVar11) {
    bVar11 = 0x7f;
  }
  DAT_0e63._0_1_ = bVar11;
  uVar5 = RAM0e62;
  if ((uVar5 & 0x8000) == 0) {
    cVar13 = (char)uVar5;
  }
  else {
    cVar13 = DAT_0e63._0_1_;
    cVar13 = -cVar13;
  }
  DAT_0986 = cVar13 + -0x80;
  bVar11 = DAT_0e63._0_1_;
  if (DAT_330c < bVar11) {
    DAT_0987 = cVar13 + -0x80;
  }
  else {
    DAT_0987 = 0x80;
    DAT_0e63._0_1_ = 0;
  }
  uVar6 = DAT_0920;
  uVar6 = prefix_candidate_cc7b();
  RAM0e6c = uVar6;
  bVar11 = DAT_0987;
  if ((short)((ushort)bVar11 << 8) < 0) {
    bVar11 = DAT_088f;
    if ((bVar11 & 0x80) == 0) {
      bVar11 = DAT_089a;
      if (DAT_33bd < bVar11) {
        pbVar15 = &UNK_33ea;
      }
      else {
        pbVar15 = &UNK_33d3;
      }
    }
    else {
      pbVar15 = &UNK_33bc;
    }
  }
  else {
    bVar11 = DAT_088f;
    if ((bVar11 & 0x80) == 0) {
      bVar11 = DAT_089a;
      if (DAT_33be < bVar11) {
        pbVar15 = &UNK_342f;
      }
      else {
        pbVar15 = &UNK_3418;
      }
    }
    else {
      pbVar15 = &UNK_3401;
    }
  }
  uVar5 = RAM0e6c;
  uVar5 = FUN_bbb8(uVar5,pbVar15);
  extraout_A = (byte)(uVar5 >> 8);
  DAT_098c = extraout_A;
  bVar11 = DAT_0e63._0_1_;
  DAT_0e63 = (ushort)extraout_A * (ushort)bVar11;
  bVar11 = DAT_0e62;
  if ((bVar11 & 0x80) == 0) {
    uVar5 = DAT_0e63;
    sVar7 = uVar5 + 0x8000;
    if (0x7fff < uVar5) {
      sVar7 = -1;
    }
  }
  else {
    uVar5 = DAT_0e63;
    sVar7 = -0x8000 - uVar5;
    if (0x8000 < uVar5) {
      sVar7 = 0;
    }
  }
  DAT_0988 = sVar7;
  bVar11 = DAT_088f;
  uVar14 = DAT_3301;
  if ((~bVar11 & 0x80) != 0) {
    uVar14 = DAT_3302;
  }
  DAT_0e65._0_1_ = uVar14;
  uVar8 = DAT_08d4;
  uVar16 = DAT_08f4;
  uVar5 = uVar8 - uVar16;
  if (uVar8 < uVar16) {
    uVar5 = FUN_bbf9(CONCAT11((~(byte)(uVar5 >> 8) + 1) - ((char)-(char)uVar5 != '\0'),-(char)uVar5)
                     ,(byte *)&DAT_0e65);
    uVar5 = CONCAT11((~(byte)(uVar5 >> 8) + 1) - ((char)-(char)uVar5 != '\0'),-(char)uVar5);
  }
  else {
    uVar5 = FUN_bbf9(uVar5,(byte *)&DAT_0e65);
  }
  sVar7 = DAT_08f4;
  DAT_08f4 = uVar5 + sVar7;
  bVar11 = DAT_0b35;
  if ((byte)(DAT_3307 - 1U) < bVar11) {
    bVar11 = DAT_0885;
    DAT_0885 = bVar11 & 0xfd;
    bVar11 = DAT_08f2._0_1_;
    if (bVar11 <= DAT_3303) {
      bVar11 = DAT_08fa;
      if (DAT_3304 <= bVar11) {
        DAT_0b35 = 0;
        DAT_0b37 = 0;
        goto LAB_7199;
      }
      goto LAB_719d;
    }
LAB_71ae:
    bVar11 = DAT_08f4._0_1_;
  }
  else {
    bVar11 = DAT_0b37;
    if (DAT_3305 <= (byte)((bVar11 + 1) - (0xfe < bVar11))) goto LAB_71ae;
    bVar11 = DAT_0b37;
    DAT_0b37 = (bVar11 + 1) - (0xfe < bVar11);
LAB_7199:
    bVar11 = DAT_0885;
    DAT_0885 = bVar11 | 2;
LAB_719d:
    bVar11 = DAT_0885;
    if ((bVar11 & 2) == 0) goto LAB_71ae;
    bVar12 = DAT_08f4._0_1_;
    bVar11 = bVar12 - DAT_3306;
    if (bVar12 < DAT_3306) {
      bVar11 = 0;
    }
  }
  bVar2 = DAT_08f2._0_1_;
  bVar12 = bVar2 - bVar11;
  if (bVar2 < bVar11) {
    bVar12 = -bVar12;
    DAT_0e65._0_1_ = 0x80;
  }
  else {
    DAT_0e65._0_1_ = 0;
  }
  if (0x7f < bVar12) {
    bVar12 = 0x7f;
  }
  DAT_0e65._1_1_ = bVar12;
  uVar5 = DAT_0e65;
  if ((uVar5 & 0x8000) == 0) {
    cVar13 = (char)uVar5;
  }
  else {
    cVar13 = DAT_0e65._1_1_;
    cVar13 = -cVar13;
  }
  DAT_0982 = cVar13 + -0x80;
  bVar11 = DAT_08f2._0_1_;
  if ((DAT_3308 <= bVar11) || (bVar11 = DAT_0b31, bVar11 < 100)) {
    DAT_0e65._1_1_ = 0;
    DAT_0982 = 0x80;
  }
  bVar11 = DAT_0e65._1_1_;
  if (DAT_3309 < bVar11) {
    uVar14 = DAT_0982;
    DAT_0983 = uVar14;
  }
  else {
    DAT_0983 = 0x80;
    DAT_0e65._1_1_ = 0;
  }
  uVar6 = DAT_0920;
  uVar6 = prefix_candidate_cc7b();
  RAM0e6c = uVar6;
  bVar11 = DAT_0983;
  if ((short)((ushort)bVar11 << 8) < 0) {
    bVar11 = DAT_088f;
    if ((bVar11 & 0x80) == 0) {
      bVar11 = DAT_089a;
      if (DAT_3331 < bVar11) {
        pbVar15 = &UNK_335e;
      }
      else {
        pbVar15 = &UNK_3347;
      }
    }
    else {
      pbVar15 = &UNK_3330;
    }
  }
  else {
    bVar11 = DAT_088f;
    if ((bVar11 & 0x80) == 0) {
      bVar11 = DAT_089a;
      if (DAT_3332 < bVar11) {
        pbVar15 = &UNK_33a3;
      }
      else {
        pbVar15 = &UNK_338c;
      }
    }
    else {
      pbVar15 = &UNK_3375;
    }
  }
  uVar5 = RAM0e6c;
  uVar5 = FUN_bbb8(uVar5,pbVar15);
  extraout_A_00 = (byte)(uVar5 >> 8);
  DAT_098b = extraout_A_00;
  bVar11 = DAT_0e65._1_1_;
  RAM0e66 = (ushort)extraout_A_00 * (ushort)bVar11;
  bVar11 = DAT_0e65._0_1_;
  if ((bVar11 & 0x80) == 0) {
    uVar5 = RAM0e66;
    sVar7 = uVar5 + 0x8000;
    if (0x7fff < uVar5) {
      sVar7 = -1;
    }
  }
  else {
    uVar5 = RAM0e66;
    sVar7 = -0x8000 - uVar5;
    if (0x8000 < uVar5) {
      sVar7 = 0;
    }
  }
  DAT_0984 = sVar7;
  bVar11 = DAT_0e65._0_1_;
  if ((bVar11 & 0x80) == 0) {
    bVar11 = DAT_0e62;
    if ((bVar11 & 0x80) == 0) {
      sVar7 = DAT_0e63;
      sVar10 = RAM0e66;
      sVar7 = sVar7 + sVar10;
      if (0x7f < (byte)((ushort)sVar7 >> 8)) {
        sVar7 = 0x7fff;
      }
    }
    else {
      uVar8 = RAM0e66;
      uVar5 = DAT_0e63;
      sVar7 = uVar8 - uVar5;
      if (uVar8 < uVar5) {
        sVar7 = CONCAT11((~(byte)((ushort)sVar7 >> 8) + 1) - ((char)-(char)sVar7 != '\0'),
                         -(char)sVar7);
        goto LAB_72e0;
      }
    }
LAB_72d8:
    RAM0e69 = sVar7;
    DAT_0e67._1_1_ = 0;
    uVar5 = RAM0e69;
    uVar5 = FUN_bbf9(uVar5,&DAT_098d);
    sVar7 = uVar5 + 0x8000;
    if (0x7fff < uVar5) {
      sVar7 = -1;
    }
  }
  else {
    bVar11 = DAT_0e62;
    if ((bVar11 & 0x80) == 0) {
      uVar5 = DAT_0e63;
      uVar8 = RAM0e66;
      sVar7 = uVar5 - uVar8;
      if (uVar8 <= uVar5) goto LAB_72d8;
      sVar7 = CONCAT11((~(byte)((ushort)sVar7 >> 8) + 1) - ((char)-(char)sVar7 != '\0'),-(char)sVar7
                      );
    }
    else {
      sVar7 = DAT_0e63;
      sVar10 = RAM0e66;
      sVar7 = sVar7 + sVar10;
      if (0x7f < (byte)((ushort)sVar7 >> 8)) {
        sVar7 = -0x8000;
      }
    }
LAB_72e0:
    RAM0e69 = sVar7;
    DAT_0e67._1_1_ = 0x80;
    uVar5 = RAM0e69;
    uVar5 = FUN_bbf9(uVar5,&DAT_098e);
    if (7 < (byte)(uVar5 >> 8)) {
      uVar5 = 0x800;
    }
    DAT_0e6b = uVar5;
    sVar7 = DAT_0e6b;
    sVar7 = -0x8000 - sVar7;
  }
  DAT_0980 = sVar7;
  bVar11 = DAT_0e67._1_1_;
  if ((bVar11 & 0x80) == 0) {
    sVar7 = RAM0e69;
    uVar14 = (undefined1)((ushort)(sVar7 + -0x8000) >> 8);
  }
  else {
    sVar7 = RAM0e69;
    uVar14 = (undefined1)((ushort)(-0x8000 - sVar7) >> 8);
  }
  DAT_098a = uVar14;
  uVar6 = DAT_0920;
  RAM0bba = uVar6;
  DAT_0bbc = 0x18d4;
  uVar5 = FUN_c1c2(0xd4);
  DAT_0928 = uVar5;
  uVar6 = DAT_08f2;
  RAM0bba = uVar6;
  DAT_0bbc = 0x18c0;
  uVar5 = FUN_c1c2(0xc0);
  DAT_092e = uVar5;
  uVar6 = DAT_0928;
  RAM0e64 = uVar6;
  uVar6 = DAT_092e;
  RAM0e62 = uVar6;
  uVar5 = FUN_be73(&UNK_18eb,'\r');
  extraout_A_01 = (byte)(uVar5 >> 8);
  if (extraout_A_01 < 0x17) {
    bVar11 = extraout_A_01;
    if (extraout_A_01 == 0xb) {
      bVar11 = 10;
    }
  }
  else {
    bVar11 = 0x16;
  }
  DAT_0a2d = bVar11;
  bVar11 = DAT_0881;
  if ((~bVar11 & 0x10) == 0) {
    uVar5 = DAT_0900;
    uVar5 = FUN_bbcf(uVar5,&UNK_19a0);
    DAT_0952 = (char)(uVar5 >> 8);
    uVar5 = FUN_bbaa((uchar)uVar5,&UNK_1970);
    DAT_094e = uVar5;
    bVar11 = DAT_08b1;
    if (((~bVar11 & 8) == 0) || (bVar11 = DAT_08b1, (~bVar11 & 4) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = DAT_08d4;
    }
    uVar5 = FUN_bbcf(uVar5,&UNK_1994);
    DAT_0951 = (char)(uVar5 >> 8);
    uVar5 = DAT_0920;
    uVar5 = FUN_bbcf(uVar5,&UNK_1982);
    extraout_A_02 = (byte)(uVar5 >> 8);
    DAT_0950 = extraout_A_02;
    bVar11 = DAT_0951;
    bVar12 = DAT_0979;
    uVar5 = FUN_bc20(bVar12 + 0x180,(ushort)extraout_A_02 * (ushort)bVar11);
    bVar11 = DAT_0952;
    uVar8 = FUN_bc20((ushort)bVar11,uVar5);
    uVar5 = DAT_094e;
    uVar16 = (ushort)((uint)uVar8 * (uint)uVar5 >> 0x10);
    if (uVar16 < 0x4000) {
      sVar7 = (ushort)(byte)((byte)((uint)uVar8 * (uint)uVar5 >> 8) >> 6) + uVar16 * 4;
    }
    else {
      sVar7 = -1;
    }
    DAT_094c = sVar7;
    uVar6 = DAT_08d4;
    DAT_08f2 = uVar6;
    DAT_08f4 = uVar6;
    uVar8 = DAT_0966;
    uVar5 = DAT_094c;
    sVar7 = uVar8 + uVar5;
    if (CARRY2(uVar8,uVar5)) {
      sVar7 = -1;
    }
    DAT_0948 = sVar7;
    DAT_094a = sVar7;
    bVar11 = DAT_0881;
    DAT_0881 = bVar11 | 0x80;
    bVar11 = DAT_0a28;
    DAT_0a28 = bVar11 & 0xfe;
    bVar11 = DAT_088b;
    if ((~bVar11 & 0x80) != 0) {
      DAT_0a34 = 0;
      bVar11 = DAT_0d9f;
      if (0x16 < bVar11) {
        bVar11 = 0x16;
      }
      if (bVar11 < 0xc) {
        if (bVar11 == 0xb) {
          bVar11 = 10;
        }
      }
      else {
        bVar11 = bVar11 - 0xc;
      }
      DAT_0a2f = bVar11;
    }
    goto LAB_79a0;
  }
  uVar6 = DAT_0920;
  RAM0bba = uVar6;
  DAT_0bbc = 0x1ae6;
  uVar5 = FUN_c1c2(0xe6);
  DAT_092a = uVar5;
  uVar6 = DAT_0cb2;
  RAM0bba = uVar6;
  DAT_0bbc = 0x1aaa;
  uVar5 = FUN_c1c2(0xaa);
  DAT_0930 = uVar5;
  sVar7 = DAT_0930;
  DAT_0e93._0_1_ = (char)((ushort)sVar7 >> 8);
  DAT_0e95 = sVar7 << 8;
  sVar7 = DAT_092a;
  uVar4 = (uchar)((ushort)sVar7 >> 8);
  DAT_0e97 = sVar7 << 8;
  uVar5 = FUN_be30(&UNK_1b2b,uVar4,uVar4);
  DAT_0960 = uVar5;
  uVar6 = DAT_0920;
  RAM0bba = uVar6;
  DAT_0bbc = 0x2608;
  uVar5 = FUN_c1c2('\b');
  DAT_092c = uVar5;
  uVar6 = DAT_08f2;
  bVar11 = DAT_08b1;
  if (((((~bVar11 & 8) == 0) || (bVar11 = DAT_08b1, uVar9 = uVar6, (~bVar11 & 4) == 0)) &&
      (bVar11 = DAT_08b1, uVar9 = DAT_45fe, (~bVar11 & 0x20) != 0)) &&
     (bVar11 = DAT_08b1, (~bVar11 & 0x10) != 0)) {
    uVar9 = uVar6;
  }
  RAM0bba = uVar9;
  DAT_0bbc = 0x25cc;
  uVar5 = FUN_c1c2(0xcc);
  DAT_0932 = uVar5;
  sVar7 = DAT_0932;
  DAT_0e93._0_1_ = (char)((ushort)sVar7 >> 8);
  DAT_0e95 = sVar7 << 8;
  sVar7 = DAT_092c;
  uVar4 = (uchar)((ushort)sVar7 >> 8);
  DAT_0e97 = sVar7 << 8;
  uVar5 = FUN_be30(&UNK_264d,uVar4,uVar4);
  DAT_0962 = uVar5;
  uVar6 = DAT_0920;
  RAM0bba = uVar6;
  DAT_0bbc = 0x30f4;
  uVar5 = FUN_c1c2(0xf4);
  DAT_0cf0 = uVar5;
  uVar6 = DAT_0cb2;
  RAM0bba = uVar6;
  DAT_0bbc = 0x30f0;
  uVar5 = FUN_c1c2(0xf0);
  DAT_0cf2 = uVar5;
  uVar6 = DAT_0cf0;
  RAM0e62 = uVar6;
  uVar6 = DAT_0cf2;
  RAM0e64 = uVar6;
  uVar5 = FUN_bcc4(&UNK_30f5,'\x02');
  DAT_0cec = (char)(uVar5 + 0x80 >> 8);
  uVar6 = DAT_0920;
  RAM0bba = uVar6;
  DAT_0bbc = 0x3100;
  uVar5 = FUN_c1c2('\0');
  DAT_0cf4 = uVar5;
  uVar6 = DAT_08f2;
  RAM0bba = uVar6;
  DAT_0bbc = 0x30fc;
  uVar5 = FUN_c1c2(0xfc);
  DAT_0cf6 = uVar5;
  uVar6 = DAT_0cf4;
  RAM0e62 = uVar6;
  uVar6 = DAT_0cf6;
  RAM0e64 = uVar6;
  uVar5 = FUN_bcc4(&UNK_3101,'\x02');
  DAT_0ced = (char)(uVar5 + 0x80 >> 8);
  if (DAT_30ee == -0x80) {
    bVar11 = DAT_0cec;
  }
  else {
    bVar11 = DAT_0ced;
  }
  DAT_0ceb = bVar11;
  bVar2 = DAT_0cee;
  bVar12 = bVar2 + 0x80;
  if (bVar2 < 0x80) {
    cVar13 = bVar11 + bVar12;
    if (!CARRY1(bVar11,bVar12)) {
      cVar13 = '\0';
    }
  }
  else {
    cVar13 = bVar11 + bVar12;
    if (CARRY1(bVar11,bVar12)) {
      cVar13 = -1;
    }
  }
  DAT_0cea = cVar13;
  uVar14 = DAT_0cea;
  DAT_0bba = uVar14;
  DAT_0bbc = 0x31f4;
  uVar5 = FUN_c122(0xf4);
  DAT_0cf8 = uVar5;
  uVar6 = DAT_0cb2;
  RAM0bba = uVar6;
  DAT_0bbc = 0x31f0;
  uVar5 = FUN_c1c2(0xf0);
  DAT_0cfa = uVar5;
  uVar6 = DAT_0cf8;
  RAM0e62 = uVar6;
  uVar6 = DAT_0cfa;
  RAM0e64 = uVar6;
  uVar5 = FUN_bcc4(&UNK_31f3,'\x02');
  DAT_0cef = (char)(uVar5 + 0x80 >> 8);
  bVar11 = DAT_0cea;
  if (bVar11 == 0) {
LAB_763f:
    uVar8 = 0x100;
  }
  else {
    bVar12 = DAT_0cef;
    if (bVar12 == 0) goto LAB_763f;
    iVar1 = (uint)bVar12 * 2 * (uint)(bVar11 + 0x80);
    uVar5 = (ushort)iVar1;
    bVar11 = (byte)((uint)iVar1 >> 0x10);
    uVar6 = CONCAT11(CARRY1(bVar11,0xff7f < uVar5),bVar11 + (0xff7f < uVar5));
    RAM0e62 = uVar6;
    DAT_0e63._1_1_ = (char)(uVar5 + 0x80 >> 8);
    uVar5 = DAT_0e63;
    if ((uVar5 == 0) || (DAT_1aa8 == 0)) goto LAB_763f;
    uVar6 = FUN_bd9e(DAT_1aa8 + 0x80,uVar6);
    if ((char)((ushort)uVar6 >> 8) == '\0') {
      DAT_0e62 = (char)uVar6;
      bVar11 = DAT_0e62;
      uVar8 = CONCAT11(bVar11 + (0xff7f < uVar5),(char)(uVar5 + 0x80 >> 8));
      if (CARRY1(bVar11,0xff7f < uVar5)) goto LAB_763a;
    }
    else {
LAB_763a:
      uVar8 = 0xffff;
    }
  }
  DAT_0cfc = uVar8;
  uVar5 = DAT_0960;
  uVar5 = FUN_bc20(uVar8,uVar5);
  DAT_0cfe = uVar5;
  uVar8 = DAT_0cfc;
  uVar5 = DAT_0962;
  uVar5 = FUN_bc20(uVar8,uVar5);
  DAT_0d00 = uVar5;
  uVar5 = DAT_0992;
  bVar12 = (byte)(uVar5 >> 1);
  bVar11 = (byte)(uVar5 >> 9);
  sVar7 = CONCAT11(bVar11 - (bVar12 < DAT_32ed),bVar12 - DAT_32ed);
  if (bVar11 < (bVar12 < DAT_32ed)) {
    sVar7 = 0;
  }
  DAT_0992 = sVar7 << 1;
  uVar5 = DAT_0994;
  bVar12 = (byte)(uVar5 >> 1);
  bVar11 = (byte)(uVar5 >> 9);
  sVar7 = CONCAT11(bVar11 - (bVar12 < DAT_32ee),bVar12 - DAT_32ee);
  if (bVar11 < (bVar12 < DAT_32ee)) {
    sVar7 = 0;
  }
  DAT_0994 = sVar7 << 1;
  uVar5 = DAT_0992;
  if ((ushort)(sVar7 << 1) < uVar5) {
    uVar6 = DAT_0992;
  }
  else {
    uVar6 = DAT_0994;
  }
  DAT_0990 = uVar6;
  uVar5 = DAT_0920;
  uVar5 = FUN_bbcf(uVar5,&UNK_3478);
  DAT_099e = (char)(uVar5 >> 8);
  uVar14 = DAT_0a00;
  FUN_7a2b();
  DAT_0964 = extraout_A_03;
  if (DAT_19b8 == '\x01') {
    DAT_0968 = 0x100;
    DAT_096a = 0x100;
    uVar8 = (ushort)DAT_19b9 << 5;
    uVar5 = DAT_19b6;
    if ((uVar8 < DAT_19b6) && (uVar5 = uVar8, uVar8 < DAT_19b4)) {
      uVar5 = DAT_19b4;
    }
    DAT_095a = uVar5;
    DAT_0956 = uVar5;
    bVar11 = DAT_0cca;
    if ((bVar11 & 1) == 0) {
      uVar8 = (ushort)DAT_19ae << 2;
LAB_7702:
      iVar1 = (uint)uVar8 * (uint)uVar5;
      uVar5 = (ushort)iVar1;
      bVar11 = (byte)((uint)iVar1 >> 0x10);
      cVar13 = bVar11 + (0xff7f < uVar5);
      if (CONCAT11((char)((uint)iVar1 >> 0x18) + CARRY1(bVar11,0xff7f < uVar5),cVar13) < 0x100) {
        DAT_0e62 = cVar13;
        DAT_0e63 = uVar5 + 0x80;
        uVar5 = RAM0e62;
      }
      else {
        uVar5 = 0xffff;
      }
    }
    else if ((DAT_4124 == -0x80) &&
            ((bVar11 = DAT_0acf, (~bVar11 & 4) == 0 || (bVar11 = DAT_0ad0, (bVar11 & 0x20) != 0))))
    {
      bVar11 = DAT_0ad7;
      uVar8 = (ushort)bVar11 << 1;
      goto LAB_7702;
    }
    DAT_0958 = uVar5;
    uVar8 = DAT_0966;
    sVar7 = uVar5 + uVar8;
    if (CARRY2(uVar5,uVar8)) {
      sVar7 = -1;
    }
    DAT_0954 = sVar7;
    DAT_0948 = sVar7;
    bVar11 = DAT_0a28;
    DAT_0a28 = bVar11 & 0xfe;
    bVar11 = DAT_0881;
    DAT_0881 = bVar11 | 0x80;
    goto LAB_79a0;
  }
  bVar11 = DAT_19b0;
  if (8 < DAT_19b0) {
    bVar11 = 8;
  }
  bVar11 = bVar11 << 1;
  bVar2 = DAT_08f2._0_1_;
  bVar12 = DAT_08b1;
  if (((~bVar12 & 0x20) == 0) || (bVar12 = DAT_08b1, (~bVar12 & 0x10) == 0)) {
LAB_77c2:
    bVar11 = DAT_0b36;
    uVar14 = 0xff;
    DAT_0b36 = (bVar11 + 1) - (0xfe < bVar11);
  }
  else {
    bVar12 = DAT_08b1;
    if (((~bVar12 & 8) == 0) || (bVar12 = DAT_08b1, (~bVar12 & 4) == 0)) {
      bVar11 = DAT_08b1;
      if (((~bVar11 & 0x20) == 0) || (bVar11 = DAT_08b1, (~bVar11 & 0x10) == 0)) goto LAB_77c2;
      uVar14 = 0;
    }
    else {
      bVar12 = DAT_088d;
      if ((~bVar12 & 4) == 0) {
        if (bVar2 < DAT_19af) {
          bVar2 = DAT_08f2._0_1_;
          bVar12 = bVar2 + (&UNK_bc32)[bVar11];
          if (CARRY1(bVar2,(&UNK_bc32)[bVar11])) {
            DAT_0e63._0_1_ = bVar12;
            DAT_0e62 = 1;
            DAT_0e63._1_1_ = 0;
            DAT_0e65._0_1_ = DAT_19af;
            sVar7 = RAM0e62;
            sVar10 = RAM0e64;
            sVar7 = (ushort)(byte)(&UNK_bc33)[bVar11] * (sVar7 - sVar10 & 0xffU);
            if ((char)((ushort)sVar7 >> 8) != '\0') {
              sVar7 = 0xff;
            }
          }
          else if (bVar12 < DAT_19af) {
            sVar7 = 0;
          }
          else {
            sVar7 = (ushort)(byte)(bVar12 - DAT_19af) * (ushort)(byte)(&UNK_bc33)[bVar11];
            if ((char)((ushort)sVar7 >> 8) != '\0') {
              sVar7 = 0xff;
            }
          }
          bVar11 = DAT_0b36;
          uVar14 = (undefined1)sVar7;
          if (DAT_19b2 <= bVar11) goto LAB_77ce;
        }
        goto LAB_77c2;
      }
      uVar14 = 0;
    }
  }
LAB_77ce:
  DAT_0996 = uVar14;
  if (DAT_19b8 == '\x02') {
    DAT_0968 = (ushort)DAT_19bb << 1;
    DAT_096a = (ushort)DAT_19bb << 1;
  }
  else if (DAT_19b8 == '\x04') {
    DAT_0968 = (ushort)DAT_19bc << 1;
    DAT_096a = (ushort)DAT_19bc << 1;
  }
  else {
    bVar11 = DAT_0990._0_1_;
    sVar7 = CONCAT11(0xdf < bVar11,bVar11 + 0x20) << 2;
    bVar11 = DAT_097b;
    bVar12 = (byte)sVar7;
    sVar7 = CONCAT11((char)((ushort)sVar7 >> 8) + CARRY1(bVar12,bVar11),bVar12 + bVar11) * 4 + -0x80
    ;
    bVar11 = DAT_097e;
    bVar12 = (byte)sVar7;
    sVar10 = CONCAT11((char)((ushort)sVar7 >> 8) + CARRY1(bVar12,bVar11),bVar12 + bVar11) << 2;
    sVar7 = DAT_0980;
    RAM0e62 = CONCAT11((char)((ushort)sVar10 >> 8) + -0x80,(char)sVar10) + sVar7;
    uVar5 = DAT_097c;
    sVar7 = RAM0e62;
    uVar5 = ((uVar5 >> 5) + sVar7) - 0x400 >> 1;
    DAT_096e = uVar5;
    bVar11 = DAT_0979;
    uVar5 = FUN_bc20(bVar11 + 0x180,uVar5);
    bVar11 = DAT_097a;
    uVar5 = FUN_bc20((ushort)bVar11,uVar5 >> 1);
    DAT_096c = uVar5;
    bVar11 = DAT_0978;
    uVar5 = FUN_bc20((ushort)bVar11,uVar5);
    DAT_096a = uVar5;
    uVar5 = DAT_096c;
    bVar11 = DAT_0970;
    uVar5 = FUN_bc20((ushort)bVar11,uVar5);
    DAT_0968 = uVar5;
    bVar11 = DAT_097a;
    if (bVar11 == 0x80) {
LAB_787c:
      DAT_0a04 = 0;
      bVar12 = 0x80;
    }
    else if (bVar11 < 0x80) {
      bVar2 = DAT_0a04;
      bVar12 = bVar11 + bVar2;
      if ((CARRY1(bVar11,bVar2)) || (0x7f < bVar12)) goto LAB_787c;
    }
    else {
      bVar2 = DAT_0a04;
      bVar12 = bVar11 - bVar2;
      if ((bVar11 < bVar2) || (bVar12 < 0x80)) goto LAB_787c;
    }
    DAT_097a = bVar12;
  }
  bVar11 = DAT_0964;
  if (bVar11 < 0x80) {
    RAM0e62 = (ushort)(byte)(0x80 - bVar11) << 2;
    uVar8 = DAT_0cfe;
    uVar16 = RAM0e62;
    uVar5 = uVar8 - uVar16;
    if (uVar8 < uVar16) {
      uVar5 = 0;
    }
  }
  else {
    RAM0e62 = (ushort)(byte)(bVar11 + 0x80) << 2;
    uVar8 = DAT_0cfe;
    uVar16 = RAM0e62;
    uVar5 = uVar8 + uVar16;
    if (CARRY2(uVar8,uVar16)) {
      uVar5 = 0xffff;
    }
  }
  uVar8 = DAT_0968;
  uVar5 = FUN_bc20(uVar8,uVar5);
  DAT_095c = uVar5;
  bVar11 = DAT_0964;
  if (bVar11 < 0x80) {
    RAM0e62 = (ushort)(byte)(0x80 - bVar11) << 2;
    uVar8 = DAT_0d00;
    uVar16 = RAM0e62;
    uVar5 = uVar8 - uVar16;
    if (uVar8 < uVar16) {
      uVar5 = 0;
    }
  }
  else {
    RAM0e62 = (ushort)(byte)(bVar11 + 0x80) << 2;
    uVar8 = DAT_0d00;
    uVar16 = RAM0e62;
    uVar5 = uVar8 + uVar16;
    if (CARRY2(uVar8,uVar16)) {
      uVar5 = 0xffff;
    }
  }
  uVar8 = DAT_096a;
  uVar5 = FUN_bc20(uVar8,uVar5);
  DAT_095e = uVar5;
  uVar5 = DAT_095e;
  uVar5 = FUN_bbf9(uVar5,&DAT_0996);
  DAT_0e63 = uVar5;
  bVar11 = DAT_0996;
  DAT_0e62 = ~bVar11;
  uVar5 = DAT_095c;
  uVar5 = FUN_bbf9(uVar5,&DAT_0e62);
  sVar7 = DAT_0e63;
  uVar5 = uVar5 + sVar7;
  uVar8 = DAT_19b6;
  if ((uVar5 < DAT_19b6) && (uVar8 = uVar5, uVar5 < DAT_19b4)) {
    uVar8 = DAT_19b4;
  }
  DAT_095a = uVar8;
  DAT_0956 = uVar8;
  bVar11 = DAT_0cca;
  if ((bVar11 & 1) == 0) {
    uVar5 = (ushort)DAT_19ae << 2;
LAB_7967:
    iVar1 = (uint)uVar5 * (uint)uVar8;
    uVar5 = (ushort)iVar1;
    bVar11 = (byte)((uint)iVar1 >> 0x10);
    cVar13 = bVar11 + (0xff7f < uVar5);
    if (CONCAT11((char)((uint)iVar1 >> 0x18) + CARRY1(bVar11,0xff7f < uVar5),cVar13) < 0x100) {
      DAT_0e62 = cVar13;
      DAT_0e63 = uVar5 + 0x80;
      uVar8 = RAM0e62;
    }
    else {
      uVar8 = 0xffff;
    }
  }
  else if ((DAT_4124 == -0x80) &&
          ((bVar11 = DAT_0acf, (~bVar11 & 4) == 0 || (bVar11 = DAT_0ad0, (bVar11 & 0x20) != 0)))) {
    bVar11 = DAT_0ad7;
    uVar5 = (ushort)bVar11 << 1;
    goto LAB_7967;
  }
  DAT_0958 = uVar8;
  uVar5 = DAT_0966;
  sVar7 = uVar8 + uVar5;
  if (CARRY2(uVar8,uVar5)) {
    sVar7 = -1;
  }
  DAT_0954 = sVar7;
  DAT_0948 = sVar7;
  bVar11 = DAT_0881;
  DAT_0881 = bVar11 | 0x80;
  bVar11 = DAT_0a28;
  DAT_0a28 = bVar11 & 0xfe;
LAB_79a0:
  bVar11 = DAT_08be;
  DAT_08be = bVar11 & 0xbf;
  return;
}


/* Entry 79a5 */

void FUN_79a5(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  byte bVar3;
  
  bVar3 = DAT_088b;
  if ((~bVar3 & 0x40) == 0) {
    bVar3 = DAT_088b;
    DAT_088b = bVar3 & 0xbf;
    bVar3 = DAT_0cca;
    if (((bVar3 & 1) != 0) && (bVar3 = DAT_0881, (~bVar3 & 0x10) != 0)) {
      bVar3 = DAT_088b;
      if ((~bVar3 & 0x80) == 0) {
        return;
      }
      bVar3 = DAT_088b;
      DAT_088b = bVar3 | 0x80;
      FUN_e6ff();
      uVar2 = DAT_0a34;
      DAT_0a32 = uVar2;
      uVar1 = DAT_0a2f;
      DAT_0a2e = uVar1;
      return;
    }
    bVar3 = DAT_088b;
    if ((bVar3 & 0x80) != 0) {
      bVar3 = DAT_088b;
      DAT_088b = bVar3 & 0x7f;
      DAT_0a32 = 0;
      bVar3 = DAT_0d9f;
      if (0x16 < bVar3) {
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
      DAT_0a2e = bVar3;
    }
  }
  else {
    bVar3 = DAT_088b;
    if ((bVar3 & 0x80) != 0) {
      return;
    }
  }
  DAT_0a34 = 0;
  bVar3 = DAT_0d9f;
  if (0x16 < bVar3) {
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
  DAT_0a2f = bVar3;
  return;
}


/* Entry 7a2b */

void FUN_7a2b(byte param_1)

{
  undefined1 uVar1;
  
  if (param_1 < 0x80) {
    uVar1 = DAT_099e;
  }
  else {
    uVar1 = DAT_099e;
  }
  return;
}


/* Entry 7a56 */

void FUN_7a56(void)

{
  byte bVar1;
  
  bVar1 = DAT_0881;
  DAT_0881 = bVar1 & 0xfb;
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 | 0x80;
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 & 0x7f;
  return;
}


/* Entry 7a63 */

void FUN_7a63(void)

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
  bVar1 = DAT_08c2;
  DAT_08c2 = bVar1 | 0x20;
  puVar10 = &DAT_0c7a + DAT_1875;
  puVar12 = &DAT_0cd2;
  DAT_0b71 = 0;
  while( true ) {
    *puVar12 = *puVar10;
    bVar1 = DAT_0b71;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b71 = bVar1;
    if (4 < bVar1) break;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar11 = &DAT_0cd2;
  uVar2 = DAT_0cd2;
  DAT_0ce6 = uVar2;
  DAT_0ce8 = uVar2;
  DAT_0b71 = 0;
  while( true ) {
    bVar1 = DAT_0b71;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b71 = bVar1;
    if (4 < bVar1) break;
    puVar11 = puVar11 + 1;
    uVar9 = *puVar11;
    uVar5 = DAT_0ce6;
    if (uVar9 < uVar5) {
      uVar5 = DAT_0ce8;
      if (uVar9 < uVar5) {
        DAT_0ce8 = uVar9;
      }
    }
    else {
      DAT_0ce6 = uVar9;
    }
  }
  uVar2 = DAT_0ce6;
  DAT_0cdc = uVar2;
  uVar2 = DAT_0ce8;
  DAT_0cde = uVar2;
  bVar1 = DAT_08b1;
  if (((((~bVar1 & 0x20) != 0) && (bVar1 = DAT_08b1, (~bVar1 & 0x10) != 0)) &&
      (bVar1 = DAT_08b1, (~bVar1 & 8) != 0)) &&
     ((bVar1 = DAT_08b1, (~bVar1 & 4) != 0 && (bVar1 = DAT_08a1, (~bVar1 & 0x80) != 0)))) {
    sVar3 = DAT_0cdc;
    sVar4 = DAT_0cde;
    if (((((ushort)(sVar3 - sVar4) <= DAT_1876) &&
         ((bVar1 = DAT_0881, (~bVar1 & 0x10) != 0 && (uVar9 = DAT_08f2, DAT_187a <= uVar9)))) &&
        ((uVar9 <= DAT_187c &&
         (((uVar9 = DAT_0920, DAT_187e <= uVar9 && (uVar9 <= DAT_1880)) &&
          (uVar9 = DAT_0cb2, DAT_1882 <= uVar9)))))) && (uVar9 <= DAT_1884)) {
      puVar11 = &DAT_0cd2;
      DAT_0b71 = 0;
      DAT_0e62 = 0;
      DAT_0e63 = 0;
      while( true ) {
        uVar9 = DAT_0e63;
        DAT_0e63 = *puVar11 + uVar9;
        cVar7 = DAT_0e62;
        DAT_0e62 = cVar7 + CARRY2(*puVar11,uVar9);
        bVar1 = DAT_0b71;
        bVar1 = (bVar1 + 1) - (0xfe < bVar1);
        DAT_0b71 = bVar1;
        if (4 < bVar1) break;
        puVar11 = puVar11 + 1;
      }
      uVar9 = RAM0e62;
      DAT_0e65 = uVar9 / 5;
      uVar8 = DAT_0e63._1_1_;
      DAT_0e67._0_1_ = (char)(CONCAT11((char)(uVar9 % 5),uVar8) / 5);
      uVar2 = RAM0e66;
      DAT_0ce0 = uVar2;
      uVar5 = DAT_0ce0;
      uVar6 = DAT_0ce4;
      uVar9 = uVar5 - uVar6;
      if (uVar5 < uVar6) {
        uVar9 = FUN_bbf9(CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                  -(char)uVar9),&UNK_1878);
        uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
      }
      else {
        uVar9 = FUN_bbf9(uVar9,&UNK_1878);
      }
      sVar3 = DAT_0ce4;
      DAT_0ce4 = uVar9 + sVar3;
      DAT_0ce2 = uVar9 + sVar3;
    }
  }
  bVar1 = DAT_08c2;
  DAT_08c2 = bVar1 & 0xdf;
  return;
}


/* Entry 7bac */

void FUN_7bac(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 extraout_A;
  byte bVar6;
  byte extraout_A_00;
  byte bVar7;
  ushort uVar8;
  undefined2 uVar9;
  short sVar10;
  byte *table_bias;
  
  bVar6 = DAT_08be;
  DAT_08be = bVar6 | 0x20;
  uVar2 = DAT_091a;
  uVar1 = RAM0918;
  uVar8 = uVar2 + uVar1;
  if (CARRY2(uVar2,uVar1)) {
    uVar8 = CONCAT11((byte)(uVar8 >> 9),(char)(uVar8 >> 1)) | 0x8000;
  }
  else {
    uVar8 = uVar8 >> 1;
  }
  DAT_091c = uVar8;
  uVar9 = RAM0918;
  DAT_091a = uVar9;
  uVar1 = DAT_091c;
  uVar2 = DAT_091e;
  uVar8 = uVar1 - uVar2;
  if (uVar1 < uVar2) {
    uVar8 = FUN_bbf9(CONCAT11((~(byte)(uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8)
                     ,&UNK_18b1);
    uVar8 = CONCAT11((~(byte)(uVar8 >> 8) + 1) - ((char)-(char)uVar8 != '\0'),-(char)uVar8);
  }
  else {
    uVar8 = FUN_bbf9(uVar8,&UNK_18b1);
  }
  sVar10 = DAT_091e;
  DAT_091e = uVar8 + sVar10;
  uVar9 = DAT_0922;
  RAM0bba = uVar9;
  DAT_0bbc = 0x3892;
  uVar8 = FUN_c1c2(0x92);
  DAT_0934 = uVar8;
  uVar9 = RAM0918;
  uVar9 = prefix_candidate_cc63();
  DAT_0938 = uVar9;
  bVar6 = DAT_0880;
  if ((~bVar6 & 0x40) == 0) {
    DAT_0a8c = 0x40;
    DAT_0a8e = 0x80;
    bVar6 = DAT_0887;
    DAT_0887 = bVar6 & 0xfd;
  }
  else {
    uVar9 = DAT_08f2;
    bVar6 = DAT_088d;
    if ((~bVar6 & 4) != 0) {
      uVar9 = 0xd000;
    }
    RAM0bba = uVar9;
    DAT_0bbc = 0x386a;
    uVar8 = FUN_c1c2('j');
    DAT_0936 = uVar8;
    uVar9 = DAT_0934;
    RAM0e62 = uVar9;
    uVar9 = DAT_0936;
    RAM0e64 = uVar9;
    bVar6 = DAT_088f;
    if ((bVar6 & 0x80) == 0) {
      bVar6 = DAT_089a;
      if (DAT_3868 < bVar6) {
        table_bias = &UNK_3dcf;
      }
      else {
        table_bias = &UNK_3b4f;
      }
    }
    else {
      table_bias = &UNK_38cf;
    }
    uVar8 = FUN_bcc4(table_bias,'\x14');
    DAT_0a8d = (char)(uVar8 + 0x80 >> 8);
    bVar6 = DAT_0889;
    if ((bVar6 & 2) != 0) {
      bVar6 = DAT_0bad;
      bVar7 = DAT_0bae;
      if ((CARRY1(bVar6,bVar7)) || (bVar3 = DAT_0a8d, bVar3 < (byte)(bVar6 + bVar7))) {
        bVar6 = DAT_0889;
        DAT_0889 = bVar6 & 0xfd;
        DAT_0bad = 0;
      }
      else {
        DAT_0baf = bVar6 + bVar7;
      }
    }
    uVar9 = DAT_0938;
    RAM0e62 = uVar9;
    RAM0e64 = 0;
    FUN_bc69();
    DAT_0a93 = extraout_A;
    bVar6 = DAT_0880;
    if ((bVar6 & 4) == 0) {
      if (DAT_3866 == '\x01') {
        bVar6 = DAT_3867;
        if (DAT_3865 <= DAT_3867) {
          bVar6 = DAT_3865;
        }
        DAT_0a8c = bVar6;
        bVar6 = DAT_0887;
        DAT_0887 = bVar6 & 0xfd;
      }
      else {
        bVar6 = DAT_0889;
        if ((~bVar6 & 2) == 0) {
          bVar6 = DAT_0a8e;
          if (bVar6 < 0x80) {
            bVar7 = DAT_0888;
            if ((bVar7 & 0x40) != 0) {
              DAT_0a8f = DAT_4138;
            }
            cVar5 = DAT_0a8f;
            bVar6 = bVar6 + cVar5;
            if (0x7f < bVar6) {
              bVar6 = 0x80;
            }
            DAT_0a8e = bVar6;
          }
          bVar6 = DAT_0a8e;
          bVar7 = DAT_0baf;
          uVar8 = (ushort)bVar6 * (ushort)bVar7 >> 7;
          RAM0e62 = uVar8;
          if (((short)((ushort)bVar6 * (ushort)bVar7) < 0) || (DAT_3865 <= (byte)uVar8)) {
            uVar8 = (ushort)DAT_3865;
          }
          DAT_0a8c = (char)uVar8;
          bVar6 = DAT_0887;
          DAT_0887 = bVar6 & 0xfd;
          bVar6 = DAT_0880;
          if ((bVar6 & 4) != 0) {
            DAT_0a8e = 0x80;
          }
        }
        else {
          bVar6 = DAT_0885;
          if ((bVar6 & 0x20) == 0) {
            bVar6 = DAT_0a8e;
            if (bVar6 < 0x80) {
              bVar7 = DAT_0888;
              if ((bVar7 & 0x40) != 0) {
                DAT_0a8f = DAT_4138;
              }
              cVar5 = DAT_0a8f;
              bVar6 = bVar6 + cVar5;
              if (0x7f < bVar6) {
                bVar6 = 0x80;
              }
              DAT_0a8e = bVar6;
            }
            if ((DAT_4123 == -0x80) &&
               ((bVar6 = DAT_0acf, (~bVar6 & 4) == 0 || (bVar6 = DAT_0ad0, (bVar6 & 2) != 0)))) {
              bVar6 = DAT_0ad6;
              uVar8 = (ushort)bVar6;
            }
            else {
              bVar6 = DAT_0a8d;
              bVar7 = DAT_0d1e;
              if (bVar6 < bVar7) {
                bVar6 = DAT_0d1e;
              }
              bVar7 = DAT_0a8e;
              uVar8 = (ushort)bVar6 * (ushort)bVar7 >> 7;
              RAM0e62 = uVar8;
              if (((short)((ushort)bVar6 * (ushort)bVar7) < 0) || (DAT_3865 <= (byte)uVar8)) {
                uVar8 = (ushort)DAT_3865;
              }
            }
            DAT_0a8c = (char)uVar8;
            bVar6 = DAT_0887;
            DAT_0887 = bVar6 & 0xfd;
            bVar6 = DAT_0880;
            if ((bVar6 & 4) != 0) {
              DAT_0a8e = 0x80;
            }
          }
          else {
            bVar6 = DAT_0a8e;
            if (bVar6 < 0x80) {
              bVar7 = DAT_0888;
              if ((bVar7 & 0x40) != 0) {
                DAT_0a8f = DAT_4138;
              }
              cVar5 = DAT_0a8f;
              bVar6 = bVar6 + cVar5;
              if (0x7f < bVar6) {
                bVar6 = 0x80;
              }
              DAT_0a8e = bVar6;
            }
            bVar7 = DAT_0a90;
            bVar6 = DAT_0920._0_1_;
            if ((bVar6 <= DAT_3864) && (bVar6 = DAT_0d1e, bVar7 < bVar6)) {
              uVar4 = DAT_0d1e;
            }
            uVar4 = DAT_0a8e;
            RAM0e62 = 0;
            if ((false) || (bVar6 = 0, DAT_3865 == 0)) {
              bVar6 = DAT_3865;
            }
            DAT_0a8c = bVar6;
            bVar6 = DAT_0887;
            DAT_0887 = bVar6 & 0xfd;
          }
        }
      }
    }
    else {
      DAT_0a8c = 0x40;
      bVar6 = DAT_0887;
      DAT_0887 = bVar6 & 0xfd;
    }
  }
  bVar6 = DAT_0880;
  if ((bVar6 & 0x40) == 0) {
    bVar6 = DAT_08df;
    if (bVar6 < 0x1a) {
      bVar6 = 0xb3;
    }
    if (bVar6 < 0x53) {
      sVar10 = 0;
    }
    else if ((byte)(bVar6 + 0xad) < 0x80) {
      sVar10 = (ushort)(byte)(bVar6 + 0xad) << 4;
    }
    else {
      sVar10 = 0x800;
    }
    RAM0e62 = sVar10;
    uVar8 = DAT_0920;
    if (uVar8 < 0x1000) {
      uVar8 = 0;
    }
    else if (uVar8 - 0x1000 < 0xe000) {
      uVar8 = uVar8 - 0x1000 >> 4;
    }
    else {
      uVar8 = 0xe00;
    }
    RAM0e64 = uVar8;
    FUN_bc69();
    bVar6 = DAT_088d;
    bVar7 = extraout_A_00;
    if ((bVar6 & 0x40) != 0) {
      bVar7 = DAT_41d3;
    }
    DAT_0a9e = (ushort)bVar7 << 5;
    bVar6 = DAT_0aa2;
    sVar10 = DAT_0a9e;
    uVar8 = (ushort)bVar6 * 0x20 + sVar10;
    bVar6 = DAT_0880;
    if ((~bVar6 & 0x40) == 0) {
      RAM0e62 = uVar8;
      DAT_0aa6 = DAT_41c2;
      uVar9 = RAM0e62;
      RAM0e62 = uVar9;
      uVar8 = DAT_0a38;
      uVar1 = RAM0e62;
      if (uVar1 <= uVar8) {
        uVar8 = RAM0e62;
      }
    }
    else {
      uVar1 = DAT_0a52;
      if (uVar1 <= uVar8) {
        uVar8 = DAT_0a52;
      }
    }
  }
  else {
    uVar8 = DAT_0a38;
  }
  DAT_0a9c = uVar8;
  uVar8 = FUN_bbf9(uVar8,&UNK_41c9);
  DAT_0aa0 = uVar8 << 1;
  bVar6 = DAT_08be;
  DAT_08be = bVar6 & 0xdf;
  return;
}


/* Entry 7e9e */

void FUN_7e9e(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uchar uVar4;
  short sVar5;
  undefined *puVar6;
  char cVar7;
  byte bVar8;
  undefined *puVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  undefined1 uVar16;
  ushort uVar13;
  ushort uVar14;
  byte bVar17;
  undefined2 uVar15;
  char cVar18;
  byte bVar19;
  ushort *puVar20;
  byte *pbVar21;
  
  bVar8 = DAT_0882;
  DAT_0882 = bVar8 & 0xbf;
  bVar8 = DAT_08be;
  DAT_08be = bVar8 | 8;
  prefix_candidate_5fa4();
  uVar16 = DAT_0898._0_1_;
  DAT_0e62 = uVar16;
  bVar8 = DAT_0001;
  bVar17 = DAT_0898._1_1_;
  bVar19 = DAT_0898._0_1_;
  bVar3 = DAT_0898._1_1_;
  DAT_0898 = CONCAT11(((bVar8 ^ bVar17) & bVar19) + (~(bVar8 ^ bVar17) & bVar3),bVar8);
  bVar8 = DAT_0000;
  bVar17 = DAT_0896._1_1_;
  bVar19 = DAT_0896._0_1_;
  bVar3 = DAT_0896._1_1_;
  DAT_0896 = CONCAT11(((bVar8 ^ bVar17) & bVar19) + (~(bVar8 ^ bVar17) & bVar3),bVar8);
  bVar8 = DAT_0898._0_1_;
  if ((~bVar8 & 1) == 0) {
    bVar8 = DAT_0b3b;
    if (DAT_18af <= bVar8) {
      bVar19 = DAT_088f;
      DAT_088f = bVar19 & 0xbf;
    }
    DAT_0b3a = 0;
    DAT_0b3b = (bVar8 + 1) - (0xfe < bVar8);
  }
  else {
    bVar8 = DAT_0b3a;
    if (DAT_18af <= bVar8) {
      bVar19 = DAT_088f;
      DAT_088f = bVar19 | 0x40;
    }
    DAT_0b3b = 0;
    DAT_0b3a = (bVar8 + 1) - (0xfe < bVar8);
  }
  bVar8 = DAT_0898._0_1_;
  if ((~bVar8 & 0x10) == 0) {
    bVar8 = DAT_0b3d;
    if (DAT_18b0 <= bVar8) {
      bVar19 = DAT_088f;
      DAT_088f = bVar19 & 0x7f;
    }
    DAT_0b3c = 0;
    DAT_0b3d = (bVar8 + 1) - (0xfe < bVar8);
  }
  else {
    bVar8 = DAT_0b3c;
    if (DAT_18b0 <= bVar8) {
      bVar19 = DAT_088f;
      DAT_088f = bVar19 | 0x80;
    }
    DAT_0b3d = 0;
    DAT_0b3c = (bVar8 + 1) - (0xfe < bVar8);
  }
  cVar18 = DAT_0d8e;
  if (((cVar18 != -0x80) && (bVar8 = DAT_08a3, (~bVar8 & 4) != 0)) &&
     (bVar8 = DAT_08b4, (~bVar8 & 0x80) != 0)) {
    bVar8 = DAT_088f;
    if ((~bVar8 & 0x40) == 0) {
      bVar8 = DAT_08b8;
      if ((bVar8 & 4) == 0) {
        bVar8 = DAT_0be9;
        bVar19 = DAT_0de6;
        if ((bVar19 < bVar8) && (bVar8 = DAT_08b1, (bVar8 & 2) != 0)) {
          bVar8 = DAT_08b1;
          DAT_08b1 = bVar8 & 0xfd;
          bVar8 = DAT_0bf4;
          DAT_0bf4 = bVar8 | 0x80;
        }
      }
      else {
        bVar8 = DAT_08b8;
        DAT_08b8 = bVar8 & 0xfb;
      }
    }
    else {
      bVar8 = DAT_0920._0_1_;
      if ((bVar8 < DAT_45e8) || (bVar8 = DAT_0880, (~bVar8 & 1) != 0)) {
        bVar8 = DAT_08b8;
        DAT_08b8 = bVar8 & 0xfb;
        DAT_0be8 = 0;
        DAT_0be9 = 0;
      }
      else {
        bVar8 = DAT_08b8;
        if ((bVar8 & 4) != 0) {
          bVar8 = DAT_0be8;
          bVar19 = DAT_0de6;
          if (bVar8 <= bVar19) goto LAB_7fbc;
          bVar8 = DAT_08b1;
          if ((~bVar8 & 2) != 0) {
            bVar8 = DAT_08b1;
            DAT_08b1 = bVar8 | 2;
            bVar8 = DAT_0bf4;
            DAT_0bf4 = bVar8 | 0x80;
            bVar8 = DAT_08ba;
            if ((~bVar8 & 2) != 0) {
              bVar8 = DAT_08ba;
              DAT_08ba = bVar8 | 2;
              bVar8 = DAT_0bf4;
              DAT_0bf4 = bVar8 | 8;
            }
          }
        }
        bVar8 = DAT_08b8;
        DAT_08b8 = bVar8 | 4;
      }
    }
  }
LAB_7fbc:
  uVar13 = DAT_08d6;
  uVar12 = DAT_08e8;
  uVar11 = uVar13 - uVar12;
  if (uVar13 < uVar12) {
    puVar9 = (undefined *)(uVar11 + 0x80);
    if (uVar11 < 0xff80) {
      puVar9 = (undefined *)0x0;
    }
  }
  else {
    puVar9 = (undefined *)(uVar11 + 0x80);
    if ((0xff7f < uVar11) || (&UNK_047f < puVar9)) {
      puVar9 = &UNK_047f;
    }
  }
  DAT_08e6 = puVar9;
  uVar15 = DAT_08d6;
  DAT_08e8 = uVar15;
  bVar8 = DAT_0889;
  if ((bVar8 & 0x20) == 0) {
LAB_7ff8:
    bVar8 = 0;
  }
  else {
    bVar8 = DAT_0bd1;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    if (0x32 < bVar8) {
      bVar8 = DAT_0889;
      DAT_0889 = bVar8 & 0xdf;
      goto LAB_7ff8;
    }
  }
  DAT_0bd1 = bVar8;
  uVar11 = DAT_0bd2;
  uVar13 = DAT_0bd6;
  if (uVar11 < uVar13) {
    bVar8 = DAT_0bdc;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
  }
  else {
    bVar8 = 0;
  }
  DAT_0bdc = bVar8;
  if (3 < bVar8) {
    sVar10 = DAT_0bd6;
    bVar8 = (byte)(sVar10 + -1);
    DAT_0bd6 = CONCAT11((char)((ushort)(sVar10 + -1) >> 8) + CARRY1(bVar8,sVar10 == 0),
                        bVar8 + (sVar10 == 0));
    DAT_0bdc = 0;
  }
  uVar11 = DAT_0bd2;
  uVar13 = DAT_0bd6;
  sVar10 = uVar11 - uVar13;
  if (uVar11 < uVar13) {
    sVar10 = 0;
  }
  DAT_0bd8 = sVar10;
  uVar11 = DAT_08e6;
  sVar10 = uVar11 - 0x80;
  if (uVar11 < 0x80) {
    sVar10 = CONCAT11((~(byte)((ushort)sVar10 >> 8) + 1) - ((char)-(char)sVar10 != '\0'),
                      -(char)sVar10);
  }
  RAM0e62 = sVar10;
  uVar11 = DAT_4442 - 0x80;
  if (DAT_4442 < 0x80) {
    uVar11 = 0;
  }
  uVar13 = RAM0e62;
  if ((uVar11 <= uVar13) || (bVar8 = DAT_0b2c, bVar8 < DAT_4444)) {
LAB_8091:
    DAT_08fc = 0;
  }
  else {
    uVar12 = DAT_08d6;
    uVar14 = DAT_08ea;
    if (uVar14 <= uVar12) goto LAB_8091;
    bVar8 = DAT_08fc;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_08fc = bVar8;
    if (3 < bVar8) {
      sVar10 = DAT_08ea;
      bVar8 = (byte)(sVar10 + -1);
      uVar12 = CONCAT11((char)((ushort)(sVar10 + -1) >> 8) + CARRY1(bVar8,sVar10 == 0),
                        bVar8 + (sVar10 == 0));
      if (uVar12 < DAT_4446) {
        uVar12 = DAT_4446;
      }
      DAT_08ea = uVar12;
      goto LAB_8091;
    }
  }
  if (uVar11 <= uVar13) {
    cVar18 = '\0';
  }
  else {
    bVar8 = DAT_0b2c;
    cVar18 = (bVar8 + 1) - (0xfe < bVar8);
  }
  DAT_0b2c = cVar18;
  uVar11 = DAT_08d6;
  uVar13 = DAT_08ea;
  sVar10 = uVar11 - uVar13;
  if (uVar11 < uVar13) {
    sVar10 = 0;
  }
  DAT_08ec = sVar10;
  uVar12 = DAT_08ee;
  uVar13 = DAT_08ec;
  uVar11 = uVar12 - uVar13;
  if (uVar12 < uVar13) {
    uVar11 = CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),-(char)uVar11);
  }
  if (uVar11 < 8) {
    bVar8 = DAT_088d;
    DAT_088d = bVar8 & 0xf7;
  }
  else {
    bVar8 = DAT_088d;
    DAT_088d = bVar8 | 8;
    bVar8 = DAT_088d;
    DAT_088d = bVar8 | 4;
    uVar15 = DAT_08ec;
    DAT_08ee = uVar15;
  }
  uVar13 = DAT_08ec;
  uVar12 = DAT_08f0;
  uVar11 = uVar13 - uVar12;
  if (uVar13 < uVar12) {
    uVar11 = FUN_bbf9(CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                               -(char)uVar11),&UNK_1843);
    uVar11 = CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),-(char)uVar11);
  }
  else {
    uVar11 = FUN_bbf9(uVar11,&UNK_1843);
  }
  sVar10 = DAT_08f0;
  DAT_08f0 = uVar11 + sVar10;
  uVar13 = DAT_0bd8;
  uVar12 = DAT_0bda;
  uVar11 = uVar13 - uVar12;
  if (uVar13 < uVar12) {
    uVar11 = FUN_bbf9(CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                               -(char)uVar11),&UNK_1843);
    uVar11 = CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),-(char)uVar11);
  }
  else {
    uVar11 = FUN_bbf9(uVar11,&UNK_1843);
  }
  sVar10 = DAT_0bda;
  DAT_0bda = uVar11 + sVar10;
  uVar13 = DAT_08ec;
  uVar12 = DAT_09d4;
  uVar11 = uVar13 - uVar12;
  if (uVar13 < uVar12) {
    uVar11 = FUN_bbf9(CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                               -(char)uVar11),&UNK_3108);
    uVar11 = CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),-(char)uVar11);
  }
  else {
    uVar11 = FUN_bbf9(uVar11,&UNK_3108);
  }
  sVar10 = DAT_09d4;
  DAT_09d4 = uVar11 + sVar10;
  cVar18 = DAT_09e3;
  DAT_09e3 = cVar18 + '\x01';
  bVar8 = DAT_3109;
  if (9 < DAT_3109) {
    bVar8 = 10;
  }
  DAT_0e65._1_1_ = bVar8;
  bVar8 = DAT_09e3;
  bVar19 = DAT_0e65._1_1_;
  if (bVar19 <= bVar8) {
    bVar8 = DAT_09e4;
    DAT_09e4 = bVar8 | 1;
    DAT_09e3 = 0;
  }
  bVar8 = DAT_09e3;
  puVar20 = &DAT_09e6 + bVar8;
  uVar11 = DAT_09d4;
  *puVar20 = uVar11;
  bVar8 = DAT_09e4;
  if ((~bVar8 & 1) == 0) {
    uVar15 = DAT_09d6;
    DAT_09de = uVar15;
    RAM0e62 = 0;
    RAM0e64 = 0;
    puVar20 = &DAT_09e6;
    do {
      uVar11 = DAT_0e63;
      DAT_0e63 = *puVar20 + uVar11;
      cVar18 = DAT_0e62;
      DAT_0e62 = cVar18 + CARRY2(*puVar20,uVar11);
      puVar20 = puVar20 + 1;
      cVar18 = DAT_0e65._0_1_;
      DAT_0e65._0_1_ = cVar18 + 1U;
      bVar8 = DAT_0e65._1_1_;
    } while ((byte)(cVar18 + 1U) < bVar8);
    cVar18 = DAT_0e65._1_1_;
    if (cVar18 == '\0') {
      uVar15 = DAT_09e6;
      DAT_0e67 = uVar15;
    }
    else {
      bVar8 = DAT_0e65._0_1_;
      uVar11 = RAM0e62;
      RAM0e66 = uVar11 / bVar8;
      uVar16 = DAT_0e63._1_1_;
      uVar11 = CONCAT11((char)(uVar11 % (ushort)bVar8),uVar16);
      bVar8 = DAT_0e65._0_1_;
      puVar20 = (ushort *)(uVar11 % (ushort)bVar8);
      DAT_0e67._1_1_ = (char)(uVar11 / bVar8);
      uVar15 = DAT_0e67;
    }
    DAT_09d6 = uVar15;
  }
  FUN_9666(puVar20);
  FUN_96a9();
  FUN_96c3();
  bVar8 = DAT_09d3;
  if ((~bVar8 & 0x40) == 0) {
LAB_823a:
    if (((DAT_310a != -0x80) || (bVar8 = DAT_08b1, (~bVar8 & 8) == 0)) ||
       ((bVar8 = DAT_08b1, (~bVar8 & 4) == 0 ||
        (((bVar8 = DAT_0881, (~bVar8 & 0x10) == 0 || (bVar8 = DAT_088f, (~bVar8 & 0x80) == 0)) ||
         (bVar8 = DAT_09d3, (~bVar8 & 0x10) == 0)))))) goto LAB_8271;
    bVar8 = DAT_09d3;
    if ((~bVar8 & 1) != 0) {
      bVar8 = DAT_09d3;
      DAT_09d3 = bVar8 | 1;
      uVar16 = DAT_09dc;
      DAT_09da = uVar16;
      uVar16 = DAT_09dd;
      DAT_09db = uVar16;
    }
  }
  else {
    bVar8 = DAT_09d3;
    if ((~bVar8 & 0x80) == 0) {
LAB_8212:
      uVar11 = DAT_09d6;
      uVar13 = DAT_09de;
      if (uVar13 <= uVar11) {
        bVar8 = DAT_09e0;
        bVar8 = (bVar8 + 1) - (0xfe < bVar8);
        DAT_09e0 = bVar8;
        if (bVar8 < DAT_3110) goto LAB_8281;
        uVar11 = DAT_09d6;
        uVar13 = DAT_09d8;
        if ((uVar13 < uVar11) && (uVar11 - uVar13 <= DAT_3112)) {
          bVar8 = DAT_09d3;
          DAT_09d3 = bVar8 | 0x40;
          goto LAB_823a;
        }
      }
    }
    else {
      uVar11 = DAT_09d6;
      uVar13 = DAT_09de;
      if (((uVar13 <= uVar11) && (DAT_310c <= uVar11 - uVar13)) && (uVar11 - uVar13 <= DAT_310e)) {
        uVar15 = DAT_09de;
        DAT_09d8 = uVar15;
        bVar8 = DAT_09d3;
        DAT_09d3 = bVar8 | 0x80;
        goto LAB_8212;
      }
    }
LAB_8271:
    bVar8 = DAT_09d3;
    DAT_09d3 = bVar8 & 0x7f;
    bVar8 = DAT_09d3;
    DAT_09d3 = bVar8 & 0xbf;
    bVar8 = DAT_09d3;
    DAT_09d3 = bVar8 & 0xfe;
    DAT_09e0 = 0;
  }
LAB_8281:
  bVar8 = DAT_09d3;
  if ((bVar8 & 1) == 0) {
LAB_82c7:
    bVar8 = DAT_09d3;
    DAT_09d3 = bVar8 & 0xf7;
    bVar8 = DAT_09d3;
    DAT_09d3 = bVar8 & 0xfe;
    bVar8 = DAT_09d3;
    DAT_09d3 = bVar8 & 0xfd;
    bVar8 = DAT_09d3;
    DAT_09d3 = bVar8 & 0xfb;
    bVar8 = 0x80;
  }
  else {
    bVar8 = DAT_09d3;
    if ((~bVar8 & 8) != 0) {
      uVar11 = DAT_09d6;
      uVar13 = DAT_09de;
      if (uVar13 <= uVar11) {
        bVar8 = DAT_09da;
        goto LAB_82d9;
      }
LAB_82bb:
      bVar8 = DAT_09d3;
      DAT_09d3 = bVar8 & 0xbf;
      bVar8 = DAT_09d3;
      DAT_09d3 = bVar8 & 0x7f;
      DAT_09e0 = 0;
      goto LAB_82c7;
    }
    bVar19 = DAT_0cee;
    if (bVar19 < 0x80) {
      bVar8 = bVar19 + DAT_31ed;
      if (((CARRY1(bVar19,DAT_31ed)) || (bVar8 == 0x80)) || (0x7f < bVar8)) {
LAB_82b7:
        bVar8 = DAT_09d3;
        DAT_09d3 = bVar8 | 0x10;
        goto LAB_82bb;
      }
    }
    else {
      bVar8 = bVar19 - DAT_31ed;
      if (((bVar19 < DAT_31ed) || (bVar8 == 0x80)) || (bVar8 < 0x80)) goto LAB_82b7;
    }
  }
LAB_82d9:
  DAT_0cee = bVar8;
  bVar8 = DAT_0b45;
  uVar12 = DAT_08f0;
  uVar11 = *(ushort *)((short)&DAT_0b46 + (ushort)bVar8);
  uVar13 = uVar12 - uVar11;
  if (uVar12 < uVar11) {
    puVar9 = (undefined *)(uVar13 + 0x80);
    if (uVar13 < 0xff80) {
      puVar9 = (undefined *)0x0;
    }
  }
  else {
    puVar9 = (undefined *)(uVar13 + 0x80);
    if ((0xff7f < uVar13) || (&UNK_047f < puVar9)) {
      puVar9 = &UNK_047f;
    }
  }
  DAT_08f8 = puVar9;
  if ((undefined *)0xff < puVar9) {
    puVar9 = (undefined *)0xff;
  }
  DAT_08fa = (byte)puVar9;
  bVar19 = DAT_0881;
  if ((bVar19 & 0x10) == 0) {
    if (DAT_19b1 <= (byte)puVar9) {
      DAT_0b36 = 0;
    }
  }
  else {
    DAT_0b36 = 0xff;
  }
  bVar19 = DAT_08fa;
  if (DAT_3452 < bVar19) {
    DAT_0b4f = 0;
  }
  else {
    bVar19 = DAT_0b4f;
    DAT_0b4f = (bVar19 + 1) - (0xfe < bVar19);
  }
  uVar11 = DAT_08f0;
  *(ushort *)((short)&DAT_0b46 + (ushort)bVar8) = uVar11;
  cVar18 = DAT_0b45;
  DAT_0b45 = cVar18 + 2U & DAT_1845;
  bVar8 = DAT_0a8e;
  if (bVar8 < 0x80) {
    bVar8 = DAT_08fa;
    if (DAT_4137 <= bVar8) {
      bVar8 = DAT_0888;
      DAT_0888 = bVar8 | 0x40;
    }
  }
  else {
    bVar8 = DAT_0888;
    DAT_0888 = bVar8 & 0xbf;
  }
  bVar8 = DAT_0bde;
  uVar12 = DAT_0bda;
  uVar11 = *(ushort *)((short)&DAT_0be0 + (ushort)bVar8);
  uVar13 = uVar12 - uVar11;
  cVar18 = (char)uVar13;
  cVar7 = (char)(uVar13 >> 8);
  if (uVar12 < uVar11) {
    bVar19 = cVar7 + 0x80;
    if ((bVar19 < 0x80) && (0x7f7f < CONCAT11(bVar19,cVar18))) {
      cVar18 = cVar18 + -0x80;
    }
    else {
      cVar18 = '\0';
    }
  }
  else if ((uVar13 < 0x8000) && (CONCAT11(cVar7 + -0x80,cVar18) < 0x8080)) {
    cVar18 = cVar18 + -0x80;
  }
  else {
    cVar18 = -1;
  }
  DAT_0bdd = cVar18;
  uVar11 = DAT_0bda;
  *(ushort *)((short)&DAT_0be0 + (ushort)bVar8) = uVar11;
  cVar18 = DAT_0bde;
  DAT_0bde = cVar18 + 2U & DAT_1845;
  cVar18 = DAT_08f0._0_1_;
  if (cVar18 == '\0') {
    uVar15 = DAT_08f0;
    uVar16 = (undefined1)uVar15;
  }
  else {
    uVar16 = 0xff;
  }
  DAT_08f6 = uVar16;
  uVar11 = DAT_0920;
  uVar11 = FUN_bbcf(uVar11,&UNK_345c);
  DAT_0a05 = (char)(uVar11 >> 8);
  FUN_9575();
  bVar8 = DAT_08b1;
  if (((~bVar8 & 8) != 0) && (bVar8 = DAT_08b1, (~bVar8 & 4) != 0)) {
    bVar8 = DAT_08f6;
    bVar19 = DAT_0a05;
    if (bVar19 < bVar8) {
      cVar18 = '\0';
    }
    else {
      bVar8 = DAT_0b50;
      cVar18 = (bVar8 + 1) - (0xfe < bVar8);
    }
    DAT_0b50 = cVar18;
    bVar8 = DAT_0886;
    if ((bVar8 & 0x10) == 0) {
LAB_8406:
      cVar18 = '\0';
    }
    else {
      bVar8 = DAT_08f6;
      bVar19 = DAT_0a06;
      if (bVar8 < bVar19) goto LAB_8406;
      bVar8 = DAT_0b51;
      cVar18 = (bVar8 + 1) - (0xfe < bVar8);
    }
    DAT_0b51 = cVar18;
  }
  bVar8 = DAT_0b4e;
  DAT_0b4e = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0eae;
  bVar8 = (bVar8 + 1) - (0xfe < bVar8);
  DAT_0eae = bVar8;
  if (DAT_4628 <= bVar8) {
    FUN_c263();
    bVar8 = DAT_0883;
    if ((~bVar8 & 2) == 0) {
      bVar8 = DAT_0880;
      if ((~bVar8 & 1) != 0) {
        DAT_0ba0 = 0;
        bVar8 = DAT_0883;
        DAT_0883 = bVar8 & 0xfd;
        bVar8 = DAT_0c1a;
        DAT_0c1a = bVar8 | 0x40;
      }
    }
    else {
      bVar8 = DAT_0880;
      if ((bVar8 & 1) != 0) {
        bVar8 = DAT_0883;
        DAT_0883 = bVar8 | 2;
        bVar8 = DAT_0889;
        DAT_0889 = bVar8 | 0x10;
        bVar8 = DAT_0c1a;
        DAT_0c1a = bVar8 & 0xdf;
      }
    }
  }
  bVar8 = DAT_0880;
  if ((~bVar8 & 1) == 0) {
    bVar8 = DAT_0a38._0_1_;
    bVar19 = DAT_0dda;
    if (bVar19 <= bVar8) {
      bVar8 = DAT_0880;
      DAT_0880 = bVar8 | 0x44;
    }
    bVar8 = DAT_0d21;
    if ((((((((~bVar8 & 1) != 0) && (bVar8 = DAT_0884, (~bVar8 & 2) != 0)) &&
           (bVar8 = DAT_0884, (~bVar8 & 1) != 0)) &&
          ((bVar8 = DAT_088c, (~bVar8 & 0x80) != 0 && (bVar8 = DAT_0d71, (~bVar8 & 0x80) != 0)))) &&
         (bVar8 = DAT_0883, (bVar8 & 0x10) != 0)) && (bVar8 = DAT_0881, (~bVar8 & 8) != 0)) &&
       (((cVar18 = DAT_0e52, cVar18 == -0x80 || (bVar8 = DAT_08b2, (~bVar8 & 8) != 0)) &&
        ((bVar8 = DAT_08b3, (~bVar8 & 0x10) != 0 &&
         ((bVar8 = DAT_08a3, (~bVar8 & 4) != 0 && (DAT_18b9 != -0x80)))))))) {
      bVar8 = DAT_093b;
      if (0xbf < bVar8) {
        DAT_093b = 0xc0;
      }
      bVar8 = DAT_093c;
      if (0xbf < bVar8) {
        DAT_093c = 0xc0;
      }
      bVar8 = DAT_093d;
      if (0xbf < bVar8) {
        DAT_093d = 0xc0;
      }
      bVar8 = DAT_093e;
      if (0xbf < bVar8) {
        DAT_093e = 0xc0;
      }
      uVar15 = DAT_0966;
      bVar8 = DAT_0a08;
      bVar19 = (byte)((ushort)uVar15 >> 8);
      uVar15 = CONCAT11(bVar19 + bVar8,(char)uVar15);
      if (CARRY1(bVar19,bVar8)) {
        uVar15 = 0xffff;
      }
      DAT_0946 = uVar15;
      bVar8 = DAT_0a29;
      DAT_0a29 = bVar8 | 0x80;
      FUN_c0a5();
      bVar8 = DAT_0a29;
      DAT_0a29 = bVar8 & 0x7f;
      bVar8 = DAT_0881;
      DAT_0881 = bVar8 | 8;
    }
  }
  else {
    DAT_0b91 = 0;
  }
  bVar8 = DAT_0886;
  if ((((bVar8 & 0x40) == 0) || (uVar11 = DAT_08f8, uVar11 < DAT_349a)) ||
     (bVar8 = DAT_0b56, bVar8 < DAT_3551)) {
    sVar10 = 0;
  }
  else {
    bVar8 = DAT_0881;
    DAT_0881 = bVar8 | 1;
    DAT_0b56 = 0;
    if (((DAT_4130 != '\0') && (cVar18 = DAT_0a8e, cVar18 == -0x80)) &&
       (DAT_0a8e = DAT_4133, DAT_4133 < 0x80)) {
      DAT_0a8f = DAT_4136;
    }
    cVar18 = DAT_097a;
    if ((cVar18 == '\0') && (DAT_097a = DAT_344b, DAT_344b != -0x80)) {
      DAT_0a04 = DAT_344e;
    }
    bVar8 = DAT_088f;
    bVar19 = DAT_3544;
    if (((((bVar8 & 0x80) == 0) && (bVar8 = DAT_089b, bVar19 = DAT_3545, (bVar8 & 2) == 0)) &&
        (bVar8 = DAT_089b, bVar19 = DAT_3546, (bVar8 & 4) == 0)) &&
       (((bVar8 = DAT_089b, bVar19 = DAT_3547, (bVar8 & 8) == 0 &&
         (bVar8 = DAT_089b, bVar19 = DAT_3548, (bVar8 & 0x10) == 0)) &&
        (bVar8 = DAT_089b, bVar19 = DAT_354a, (bVar8 & 0x20) != 0)))) {
      bVar19 = DAT_3549;
    }
    sVar10 = (ushort)bVar19 << 5;
  }
  DAT_0a18 = sVar10;
  cVar18 = DAT_0b59;
  if (cVar18 == '\x01') {
    if (((DAT_348e != -0x80) && ((DAT_348e != -0x40 || (bVar8 = DAT_0a27, (~bVar8 & 0x10) == 0))))
       || ((bVar8 = DAT_0886, (~bVar8 & 0x40) == 0 ||
           (((bVar8 = DAT_0881, (~bVar8 & 0x10) == 0 || (bVar8 = DAT_0920._0_1_, bVar8 < DAT_348f))
            || (DAT_3490 < bVar8)))))) goto LAB_87a0;
    sVar10 = DAT_08f0;
    bVar8 = (byte)((ushort)(sVar10 << 6) >> 8);
    if ((bVar8 < DAT_3491) || (DAT_3492 < bVar8)) goto LAB_87a0;
    bVar8 = DAT_088f;
    if ((~bVar8 & 0x80) == 0) {
      uVar11 = DAT_08f8;
      if (DAT_3496 <= uVar11) goto LAB_8602;
      goto LAB_87a0;
    }
    uVar11 = DAT_08f8;
    if (uVar11 < DAT_3498) goto LAB_87a0;
LAB_8602:
    uVar11 = DAT_0900;
    uVar11 = FUN_bbcf(uVar11,&UNK_351e);
    bVar19 = (byte)(uVar11 >> 8);
    DAT_0a0d = bVar19;
    bVar8 = DAT_0a0f;
    uVar11 = (ushort)bVar19 * (ushort)bVar8;
    uVar4 = DAT_0915;
    uVar13 = FUN_bbaa(uVar4,&UNK_3501);
    bVar8 = (byte)(uVar13 >> 8);
    DAT_0a10 = bVar8;
    uVar11 = FUN_bc20(bVar8 + 0x180,uVar11);
    RAM0e68 = uVar11;
    uVar15 = DAT_0920;
    RAM0bba = uVar15;
    DAT_0bbc = 0x352c;
    uVar11 = FUN_c1c2('\b');
    DAT_0a16 = uVar11;
    RAM0e62 = 0;
    uVar15 = DAT_0a16;
    RAM0e64 = uVar15;
    uVar11 = FUN_bcc4(&UNK_3539,'\b');
    bVar8 = (byte)(uVar11 + 0x80 >> 8);
    DAT_0a11 = bVar8;
    uVar11 = RAM0e68;
    uVar11 = FUN_bc20(uVar11,(ushort)bVar8);
    RAM0e68 = uVar11;
    uVar15 = DAT_08f8;
    RAM0bba = uVar15;
    DAT_0bbc = 0x349e;
    uVar11 = FUN_c1c2('\b');
    DAT_0a12 = uVar11;
    bVar8 = DAT_088f;
    if ((bVar8 & 0x80) == 0) {
      bVar8 = DAT_089a;
      if (DAT_349c < bVar8) {
        pbVar21 = &UNK_34bb;
      }
      else {
        pbVar21 = &UNK_34b3;
      }
    }
    else {
      pbVar21 = &UNK_34ab;
    }
    RAM0e62 = 0;
    uVar15 = DAT_0a12;
    RAM0e64 = uVar15;
    uVar11 = FUN_bcc4(pbVar21,'\b');
    DAT_0a0c = (char)(uVar11 + 0x80 >> 8);
    uVar15 = DAT_08d4;
    RAM0bba = uVar15;
    DAT_0bbc = 0x34c6;
    uVar11 = FUN_c1c2('\t');
    DAT_0a14 = uVar11;
    RAM0e62 = 0;
    uVar15 = DAT_0a14;
    RAM0e64 = uVar15;
    uVar11 = FUN_bcc4(&UNK_34d5,'\t');
    bVar19 = (byte)(uVar11 + 0x80 >> 8);
    DAT_0a0e = bVar19;
    bVar8 = DAT_0a0c;
    uVar11 = RAM0e68;
    uVar1 = (uint)((ushort)bVar19 * (ushort)bVar8) * (uint)uVar11;
    if (uVar1 < 0x20000000) {
      bVar8 = (byte)(uVar1 >> 0x10);
      uVar11 = CONCAT11((((char)(uVar1 >> 0x18) << 1 | bVar8 >> 7) << 1 | (bVar8 & 0x7f) >> 6) << 1
                        | (bVar8 << 1 & 0x7f) >> 6,
                        ((bVar8 << 1 | (byte)(uVar1 >> 8) >> 7) << 1 |
                        (byte)((ushort)((short)uVar1 << 1) >> 0xf)) << 1 |
                        (byte)((ushort)((short)uVar1 << 2) >> 0xf));
      if (uVar11 <= DAT_3494) goto LAB_87a0;
    }
    else {
      uVar11 = 0xffff;
    }
    DAT_0a0a = uVar11;
    do {
      bVar8 = DAT_0b59;
      RAM0e62 = (ushort)bVar8 * 0x9c4;
      uVar12 = DAT_0a0a;
      uVar13 = DAT_0966;
      uVar11 = uVar12 + uVar13;
      if (CARRY2(uVar12,uVar13)) {
        uVar11 = 0xffff;
      }
      uVar13 = RAM0e62;
      if (uVar11 < uVar13) break;
      bVar8 = DAT_0b59;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0b59 = bVar8;
    } while (bVar8 < 0x1b);
    bVar19 = DAT_0b59;
    bVar8 = DAT_088f;
    bVar17 = DAT_354b;
    if ((~bVar8 & 0x80) != 0) {
      bVar17 = DAT_354c;
    }
    if (bVar19 < bVar17) {
      DAT_0b59 = bVar17;
    }
    bVar8 = DAT_088f;
    if ((~bVar8 & 0x80) == 0) {
      bVar8 = DAT_0b58;
      bVar19 = DAT_354f;
      if (bVar8 < DAT_354d) goto LAB_877f;
      DAT_0b58 = 0;
      DAT_0b54 = 0;
    }
    else {
      bVar8 = DAT_0b58;
      bVar19 = DAT_3550;
      if (bVar8 < DAT_354e) {
LAB_877f:
        bVar8 = DAT_0b54;
        if (bVar19 <= bVar8) goto LAB_87a0;
        bVar8 = DAT_0b54;
        DAT_0b54 = (bVar8 + 1) - (0xfe < bVar8);
      }
      else {
        DAT_0b58 = 0;
        DAT_0b54 = 0;
      }
    }
    bVar8 = DAT_0881;
    DAT_0881 = bVar8 | 1;
    if (DAT_344f == -0x80) {
      DAT_097a = 0x80;
    }
  }
  else {
    cVar18 = DAT_0b59;
    DAT_0b59 = cVar18 + -1;
LAB_87a0:
    DAT_0a0a = 0;
  }
  bVar8 = DAT_0881;
  if ((((bVar8 & 1) != 0) && (bVar8 = DAT_0d21, (~bVar8 & 1) != 0)) &&
     (((bVar8 = DAT_0884, (~bVar8 & 2) != 0 &&
       ((((bVar8 = DAT_0884, (~bVar8 & 1) != 0 && (bVar8 = DAT_088c, (~bVar8 & 0x80) != 0)) &&
         (bVar8 = DAT_0d71, (~bVar8 & 0x80) != 0)) && (bVar8 = DAT_08a3, (~bVar8 & 4) != 0)))) &&
      (((cVar18 = DAT_0e52, cVar18 == -0x80 || (bVar8 = DAT_08b2, (~bVar8 & 8) != 0)) &&
       (bVar8 = DAT_08b3, (bVar8 & 0x10) == 0)))))) {
    uVar13 = DAT_0a0a;
    uVar12 = DAT_0a18;
    uVar11 = uVar13 + uVar12;
    if ((CARRY2(uVar13,uVar12)) || (24999 < uVar11)) {
      uVar11 = 25000;
    }
    DAT_0a1a = uVar11;
    uVar13 = DAT_0966;
    sVar10 = uVar11 + uVar13;
    if (CARRY2(uVar11,uVar13)) {
      sVar10 = -1;
    }
    DAT_0946 = sVar10;
    bVar8 = DAT_08b3;
    if ((~bVar8 & 0x80) != 0) {
      bVar8 = DAT_0a29;
      DAT_0a29 = bVar8 | 0x80;
      FUN_c0a5();
      bVar8 = DAT_0a29;
      DAT_0a29 = bVar8 & 0x7f;
    }
  }
  bVar8 = DAT_0881;
  DAT_0881 = bVar8 & 0xfe;
  bVar8 = DAT_08c2;
  DAT_08c2 = bVar8 | 0x40;
  bVar8 = DAT_0886;
  if (((((~bVar8 & 0x40) == 0) || (bVar8 = DAT_0881, (~bVar8 & 0x10) == 0)) ||
      (bVar8 = DAT_0920._0_1_, bVar8 < DAT_3621)) || (DAT_3622 < bVar8)) {
LAB_885e:
    bVar8 = DAT_0d08;
    DAT_0d08 = bVar8 & 0xfd;
    bVar8 = DAT_0d08;
    if ((~bVar8 & 1) == 0) goto LAB_886d;
    uVar11 = 0;
  }
  else {
    sVar10 = DAT_08f0;
    bVar8 = (byte)((ushort)(sVar10 << 6) >> 8);
    if ((bVar8 < DAT_3623) || (DAT_3624 < bVar8)) goto LAB_885e;
    bVar8 = DAT_088f;
    if ((~bVar8 & 0x80) == 0) {
      uVar11 = DAT_08f8;
      if (uVar11 < DAT_3626) goto LAB_885e;
    }
    else {
      uVar11 = DAT_08f8;
      if (uVar11 < DAT_3628) goto LAB_885e;
    }
    bVar8 = DAT_0d08;
    DAT_0d08 = bVar8 | 2;
LAB_886d:
    uVar11 = DAT_0900;
    uVar11 = FUN_bbcf(uVar11,&UNK_351e);
    bVar19 = (byte)(uVar11 >> 8);
    DAT_0a0d = bVar19;
    bVar8 = DAT_0a0f;
    uVar11 = (ushort)bVar19 * (ushort)bVar8;
    uVar4 = DAT_0915;
    uVar13 = FUN_bbaa(uVar4,&UNK_3501);
    bVar8 = (byte)(uVar13 >> 8);
    DAT_0a10 = bVar8;
    uVar11 = FUN_bc20(bVar8 + 0x180,uVar11);
    RAM0e68 = uVar11;
    uVar15 = DAT_0920;
    RAM0bba = uVar15;
    DAT_0bbc = 0x3674;
    uVar11 = FUN_c1c2('\b');
    DAT_0d1c = uVar11;
    RAM0e62 = 0;
    uVar15 = DAT_0d1c;
    RAM0e64 = uVar15;
    uVar11 = FUN_bcc4(&UNK_3681,'\b');
    bVar8 = (byte)(uVar11 + 0x80 >> 8);
    DAT_0d16 = bVar8;
    uVar11 = RAM0e68;
    uVar11 = FUN_bc20(uVar11,(ushort)bVar8);
    RAM0e68 = uVar11;
    uVar15 = DAT_08f8;
    RAM0bba = uVar15;
    DAT_0bbc = 0x3630;
    uVar11 = FUN_c1c2('\b');
    DAT_0d18 = uVar11;
    bVar8 = DAT_088f;
    if ((bVar8 & 0x80) == 0) {
      bVar8 = DAT_089a;
      if (DAT_362e < bVar8) {
        pbVar21 = &UNK_364d;
      }
      else {
        pbVar21 = &UNK_3645;
      }
    }
    else {
      pbVar21 = &UNK_363d;
    }
    RAM0e62 = 0;
    uVar15 = DAT_0d18;
    RAM0e64 = uVar15;
    uVar11 = FUN_bcc4(pbVar21,'\b');
    DAT_0d14 = (char)(uVar11 + 0x80 >> 8);
    uVar15 = DAT_08d4;
    RAM0bba = uVar15;
    DAT_0bbc = 0x3658;
    uVar11 = FUN_c1c2('\t');
    DAT_0d1a = uVar11;
    RAM0e62 = 0;
    uVar15 = DAT_0d1a;
    RAM0e64 = uVar15;
    uVar11 = FUN_bcc4(&UNK_3667,'\t');
    bVar19 = (byte)(uVar11 + 0x80 >> 8);
    DAT_0d15 = bVar19;
    bVar8 = DAT_0d14;
    uVar11 = RAM0e68;
    uVar1 = (uint)((ushort)bVar19 * (ushort)bVar8) * (uint)uVar11;
    if (uVar1 < 0x20000000) {
      bVar8 = (byte)(uVar1 >> 0x10);
      uVar11 = CONCAT11((((char)(uVar1 >> 0x18) << 1 | bVar8 >> 7) << 1 | (bVar8 & 0x7f) >> 6) << 1
                        | (bVar8 << 1 & 0x7f) >> 6,
                        ((bVar8 << 1 | (byte)(uVar1 >> 8) >> 7) << 1 |
                        (byte)((ushort)((short)uVar1 << 1) >> 0xf)) << 1 |
                        (byte)((ushort)((short)uVar1 << 2) >> 0xf));
    }
    else {
      uVar11 = 0xffff;
    }
  }
  DAT_0d12 = uVar11;
  DAT_0d10 = uVar11;
  uVar12 = DAT_095a;
  uVar13 = uVar11 + uVar12;
  uVar14 = DAT_19b6;
  if (((!CARRY2(uVar11,uVar12)) && (uVar13 < DAT_19b6)) && (uVar14 = uVar13, uVar13 < DAT_19b4)) {
    uVar14 = DAT_19b4;
  }
  DAT_0d0e = uVar14;
  uVar11 = DAT_0966;
  sVar10 = uVar14 + uVar11;
  if (CARRY2(uVar14,uVar11)) {
    sVar10 = -1;
  }
  DAT_0d0c = sVar10;
  bVar8 = DAT_0d21;
  if (((((~bVar8 & 1) == 0) || (bVar8 = DAT_0884, (~bVar8 & 2) == 0)) ||
      (bVar8 = DAT_0884, (~bVar8 & 1) == 0)) || (bVar8 = DAT_088c, (~bVar8 & 0x80) == 0)) {
LAB_89e0:
    bVar8 = DAT_0d08;
    DAT_0d08 = bVar8 & 0xfe;
  }
  else {
    bVar8 = DAT_088f;
    if ((~bVar8 & 0x80) == 0) {
      uVar11 = DAT_08f8;
      if (DAT_362a <= uVar11) goto LAB_89c5;
      goto LAB_89e0;
    }
    uVar11 = DAT_08f8;
    if (uVar11 < DAT_362c) goto LAB_89e0;
LAB_89c5:
    cVar18 = DAT_0e52;
    if (((cVar18 != -0x80) && (bVar8 = DAT_08b2, (~bVar8 & 8) == 0)) ||
       ((bVar8 = DAT_08b3, (~bVar8 & 0x10) == 0 ||
        ((bVar8 = DAT_0cca, (bVar8 & 1) == 0 || (bVar8 = DAT_08b3, (bVar8 & 0x80) != 0))))))
    goto LAB_89e0;
    bVar8 = DAT_0d08;
    if (((((~bVar8 & 1) != 0) && (bVar8 = DAT_0d08, (bVar8 & 2) != 0)) &&
        (bVar8 = DAT_0d08, (~bVar8 & 4) != 0)) && (cVar18 = DAT_0dfe, cVar18 != '\0')) {
      DAT_0d09 = 0;
      bVar8 = DAT_0d08;
      DAT_0d08 = bVar8 | 1;
    }
  }
  bVar8 = DAT_08c2;
  DAT_08c2 = bVar8 & 0xbf;
  uVar13 = DAT_0cac;
  uVar12 = DAT_0cb0;
  uVar11 = uVar13 - uVar12;
  if (uVar13 < uVar12) {
    uVar11 = FUN_bbf9(CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                               -(char)uVar11),&UNK_1858);
    uVar11 = CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),-(char)uVar11);
  }
  else {
    uVar11 = FUN_bbf9(uVar11,&UNK_1858);
  }
  sVar10 = DAT_0cb0;
  DAT_0cb0 = uVar11 + sVar10;
  bVar8 = DAT_0cca;
  if ((bVar8 & 1) == 0) {
    uVar15 = DAT_0cba;
    DAT_0cb8 = uVar15;
  }
  else {
    uVar13 = DAT_0cb6;
    uVar12 = DAT_0cb8;
    uVar11 = uVar13 - uVar12;
    if (uVar13 < uVar12) {
      uVar11 = FUN_bbf9(CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                                 -(char)uVar11),&UNK_1858);
      uVar11 = CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),-(char)uVar11);
    }
    else {
      uVar11 = FUN_bbf9(uVar11,&UNK_1858);
    }
    sVar10 = DAT_0cb8;
    DAT_0cb8 = uVar11 + sVar10;
  }
  uVar11 = DAT_0900;
  uVar11 = FUN_bbcf(uVar11,&DAT_0e32);
  DAT_0cb4 = (char)(uVar11 >> 8);
  bVar8 = DAT_0cb4;
  puVar6 = (undefined *)DAT_0cb0;
  puVar9 = puVar6 + -0x1eb7;
  if (puVar6 < &UNK_1eb7) {
    iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar9 >> 8) + 1) - ((char)-(char)puVar9 != '\0'),
                           -(char)puVar9) * (uint)bVar8 * 2;
    uVar11 = (ushort)iVar2;
    bVar8 = (byte)((uint)iVar2 >> 0x10);
    cVar18 = bVar8 + (0xff7f < uVar11);
    if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar8,0xff7f < uVar11),cVar18) < 0x100) {
      DAT_0e62 = cVar18;
      DAT_0e63 = uVar11 + 0x80;
      puVar6 = (undefined *)RAM0e62;
      puVar9 = &UNK_1eb7 + -(short)puVar6;
      if (puVar6 < &UNK_1eb8) goto LAB_8abd;
    }
    puVar9 = (undefined *)0x0;
  }
  else {
    iVar2 = ZEXT24(puVar9) * (uint)bVar8 * 2;
    uVar11 = (ushort)iVar2;
    bVar8 = (byte)((uint)iVar2 >> 0x10);
    cVar18 = bVar8 + (0xff7f < uVar11);
    if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar8,0xff7f < uVar11),cVar18) < 0x100) {
      DAT_0e62 = cVar18;
      DAT_0e63 = uVar11 + 0x80;
      uVar11 = RAM0e62;
      puVar9 = &UNK_1eb7 + uVar11;
      if (uVar11 < 0xe149) goto LAB_8abd;
    }
    puVar9 = (undefined *)0xffff;
  }
LAB_8abd:
  DAT_0cb2 = puVar9;
  FUN_c296();
  bVar8 = DAT_0914;
  if (DAT_4055 < bVar8) {
    if (DAT_4056 <= bVar8) {
      bVar8 = DAT_0885;
      DAT_0885 = bVar8 & 0xfb;
    }
  }
  else {
    bVar8 = DAT_0885;
    DAT_0885 = bVar8 | 4;
  }
  bVar8 = DAT_0a38._0_1_;
  bVar19 = DAT_0dd9;
  if (bVar8 < bVar19) {
    if ((bVar8 < DAT_3863) || (cVar18 = DAT_0a8c, cVar18 != '@')) {
      bVar19 = DAT_088d;
      DAT_088d = bVar19 & 0xdf;
    }
    else {
      bVar19 = DAT_088d;
      DAT_088d = bVar19 | 0x20;
    }
    if (bVar8 < DAT_4054) {
      bVar8 = DAT_0880;
      DAT_0880 = bVar8 & 0xfb;
      goto LAB_8b49;
    }
    bVar8 = DAT_08fa;
    if (DAT_4052 < bVar8) {
      DAT_0a92 = 0;
      goto LAB_8b49;
    }
    bVar8 = DAT_0a92;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0a92 = bVar8;
    if (bVar8 <= DAT_4053) goto LAB_8b49;
    bVar19 = DAT_0a91;
    bVar8 = DAT_08f6;
    if (((bVar19 < bVar8) || (bVar8 = DAT_08b1, (~bVar8 & 8) == 0)) ||
       ((bVar8 = DAT_08b1, (~bVar8 & 4) == 0 ||
        ((bVar8 = DAT_088f, (bVar8 & 0x80) == 0 || (bVar8 = DAT_0885, (bVar8 & 4) == 0))))))
    goto LAB_8b49;
    bVar8 = DAT_0885;
    DAT_0885 = bVar8 | 0x20;
  }
  else {
    bVar8 = DAT_0880;
    DAT_0880 = bVar8 | 4;
    bVar8 = DAT_088d;
    DAT_088d = bVar8 & 0xdf;
LAB_8b49:
    bVar8 = DAT_0885;
    DAT_0885 = bVar8 & 0xdf;
  }
  bVar8 = DAT_0b58;
  DAT_0b58 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b56;
  DAT_0b56 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b57;
  DAT_0b57 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b55;
  DAT_0b55 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b30;
  DAT_0b30 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) == 0) {
    cVar18 = '\0';
  }
  else {
    bVar8 = DAT_0b31;
    cVar18 = (bVar8 + 1) - (0xfe < bVar8);
  }
  DAT_0b31 = cVar18;
  bVar8 = DAT_0880;
  if (((~bVar8 & 1) == 0) || (bVar8 = DAT_0885, (~bVar8 & 0x40) == 0)) {
    bVar8 = DAT_0b92;
    cVar18 = (bVar8 + 1) - (0xfe < bVar8);
  }
  else {
    cVar18 = '\0';
  }
  DAT_0b92 = cVar18;
  bVar8 = DAT_099f;
  if ((~bVar8 & 1) == 0) {
    bVar8 = DAT_09a8;
    DAT_09a8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09a9 = 0;
  }
  else {
    bVar8 = DAT_09a9;
    DAT_09a9 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09a8 = 0;
  }
  bVar8 = DAT_093b;
  DAT_093b = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093c;
  DAT_093c = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093d;
  DAT_093d = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093e;
  DAT_093e = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093f;
  DAT_093f = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0940;
  DAT_0940 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b40;
  DAT_0b40 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0894;
  if ((bVar8 & 0x80) == 0) {
LAB_8c5a:
    bVar8 = 0;
  }
  else {
    bVar8 = DAT_0c09;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    if (DAT_46e1 < bVar8) {
      bVar8 = DAT_0894;
      DAT_0894 = bVar8 & 0x7f;
      goto LAB_8c5a;
    }
  }
  DAT_0c09 = bVar8;
  bVar8 = DAT_0920._0_1_;
  uVar16 = DAT_41c6;
  if (bVar8 < DAT_41c4) {
    uVar16 = DAT_41c5;
  }
  DAT_0aa5 = uVar16;
  bVar8 = DAT_08d4._0_1_;
  bVar19 = DAT_0aa4;
  if ((bVar8 < bVar19) || ((byte)(bVar8 - bVar19) < DAT_41c1)) {
    DAT_0aa3 = 0;
LAB_8ca5:
    cVar18 = DAT_0aa6;
    if ((cVar18 == '\0') || (DAT_0aa6 = cVar18 + -1, (char)(cVar18 + -1) == '\0')) {
      DAT_0aa6 = DAT_41c2;
      bVar8 = DAT_0aa2;
      bVar19 = bVar8 - DAT_41c3;
      if (bVar8 < DAT_41c3) {
        bVar19 = 0;
      }
      goto LAB_8cc5;
    }
  }
  else {
    bVar17 = DAT_0aa5;
    sVar10 = (ushort)(byte)((bVar8 - bVar19) - DAT_41c1) * (ushort)bVar17;
    if ((char)((ushort)sVar10 >> 8) != '\0') {
      sVar10 = 0xff;
    }
    bVar19 = (byte)sVar10;
    DAT_0aa3 = bVar19;
    bVar8 = DAT_0aa2;
    if ((bVar19 < bVar8) || (bVar19 == bVar8)) goto LAB_8ca5;
    if (DAT_41c7 <= bVar19) {
      bVar19 = DAT_41c7;
    }
LAB_8cc5:
    DAT_0aa2 = bVar19;
  }
  uVar16 = DAT_08d4._0_1_;
  DAT_0aa4 = uVar16;
  uVar13 = DAT_0920;
  uVar12 = DAT_0ad2;
  uVar11 = uVar13 - uVar12;
  if (uVar13 < uVar12) {
    uVar11 = prefix_candidate_c227
                       (CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),
                                 -(char)uVar11),&UNK_411a);
    uVar11 = CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),-(char)uVar11);
  }
  else {
    uVar11 = prefix_candidate_c227(uVar11,&UNK_411a);
  }
  sVar10 = DAT_0ad2;
  DAT_0ad2 = uVar11 + sVar10;
  bVar8 = DAT_0b29;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0ad4;
    DAT_0ad4 = (bVar8 + 1) - (0xfe < bVar8);
    bVar8 = DAT_0ad5;
    DAT_0ad5 = (bVar8 + 1) - (0xfe < bVar8);
  }
  bVar8 = DAT_0aee;
  if ((DAT_411b < bVar8) && (bVar8 < DAT_411c)) {
    bVar8 = DAT_0acf;
    DAT_0acf = bVar8 | 0x80;
  }
  else {
    bVar8 = DAT_0acf;
    DAT_0acf = bVar8 & 0x7f;
    bVar8 = DAT_0acf;
    if ((bVar8 & 0x40) != 0) {
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xbf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xdf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xef;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xf7;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xfb;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xbf;
      DAT_0ad4 = 0;
      DAT_0ad5 = 0;
    }
  }
  bVar8 = DAT_0acf;
  if ((((~bVar8 & 8) != 0) && (bVar8 = DAT_0acf, (~bVar8 & 4) != 0)) &&
     (bVar8 = DAT_0acf, (~bVar8 & 2) != 0)) {
    cVar18 = DAT_089a;
    if (cVar18 == DAT_411d) {
      bVar8 = DAT_0ad4;
      if (DAT_411f <= bVar8) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 0x20;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 8;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 0x40;
      }
    }
    else {
      DAT_0ad4 = 0;
      bVar8 = DAT_0acf;
      if ((bVar8 & 0x20) != 0) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xdf;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xf7;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xbf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 2;
        goto LAB_8dfb;
      }
    }
    cVar18 = DAT_089a;
    if (cVar18 == DAT_411e) {
      bVar8 = DAT_0ad5;
      if (DAT_411f <= bVar8) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 0x10;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 4;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 0x40;
      }
    }
    else {
      DAT_0ad5 = 0;
      bVar8 = DAT_0acf;
      if ((bVar8 & 0x10) != 0) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xef;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xfb;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xbf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 2;
        goto LAB_8dfb;
      }
    }
    bVar8 = DAT_0acf;
    DAT_0acf = bVar8 | 0x40;
    bVar8 = DAT_08f2._0_1_;
    if (DAT_4120 <= bVar8) {
      DAT_0ad4 = 0;
      DAT_0ad5 = 0;
      bVar8 = DAT_0acf;
      if (((~bVar8 & 0x20) == 0) || (bVar8 = DAT_0acf, (bVar8 & 0x10) != 0)) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 8;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xbf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xdf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xef;
      }
    }
  }
LAB_8dfb:
  bVar8 = DAT_0acf;
  if ((bVar8 & 8) != 0) {
    bVar8 = DAT_0ad4;
    if (bVar8 < DAT_4121) {
      bVar8 = DAT_08f2._0_1_;
      if (DAT_4122 <= bVar8) {
        DAT_0ad4 = 0;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 4;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xf7;
      }
    }
    else {
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xbf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xdf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xef;
      DAT_0ad4 = 0;
      DAT_0ad5 = 0;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 | 2;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xf7;
    }
  }
  bVar8 = DAT_0acf;
  if ((bVar8 & 4) != 0) {
    bVar8 = DAT_0ad0;
    if ((bVar8 & 8) == 0) {
      DAT_0ad7 = DAT_4129;
      bVar8 = DAT_412a;
      bVar19 = DAT_4128;
    }
    else {
      DAT_0ad7 = DAT_4126;
      bVar8 = DAT_4127;
      bVar19 = DAT_4125;
    }
    DAT_0ad6 = bVar19;
    DAT_0ad8 = bVar8;
    bVar8 = DAT_0ad0;
    DAT_0ad0 = bVar8 & 0xbf;
    bVar8 = DAT_08f2._0_1_;
    if ((bVar8 < DAT_4122) || (bVar8 = DAT_0ad4, DAT_412b <= bVar8)) {
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 | 2;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 | 1;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 | 2;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 | 0x80;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 | 0x20;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xfb;
    }
  }
  bVar8 = DAT_0acf;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0acf;
    if ((bVar8 & 1) != 0) {
      bVar8 = DAT_0adc;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0adc = bVar8;
      if (DAT_412c <= bVar8) {
        DAT_0adc = 0;
        bVar8 = DAT_0ad9;
        DAT_0ad9 = (bVar8 + 1) - (0xfe < bVar8);
        bVar8 = DAT_0ad0;
        if ((bVar8 & 2) != 0) {
          bVar8 = DAT_0ad0;
          bVar19 = DAT_4128;
          if ((bVar8 & 8) != 0) {
            bVar19 = DAT_4125;
          }
          bVar17 = DAT_0ad9;
          bVar8 = bVar19 + bVar17;
          if (CARRY1(bVar19,bVar17)) {
            bVar8 = 0xff;
          }
          bVar19 = DAT_0a8d;
          if (bVar8 < bVar19) {
            DAT_0ad6 = bVar8;
          }
          else {
            bVar8 = DAT_0ad0;
            DAT_0ad0 = bVar8 & 0xfd;
          }
        }
        bVar8 = DAT_0ad0;
        if ((~bVar8 & 2) != 0) {
          bVar8 = DAT_0acf;
          DAT_0acf = bVar8 & 0xfe;
          DAT_0ad9 = 0;
        }
      }
    }
    bVar8 = DAT_0ad0;
    if ((bVar8 & 0x80) != 0) {
      bVar8 = DAT_0ade;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0ade = bVar8;
      if (DAT_412e <= bVar8) {
        DAT_0ade = 0;
        bVar8 = DAT_0adb;
        cVar18 = bVar8 + DAT_412f;
        if (CARRY1(bVar8,DAT_412f)) {
          cVar18 = -1;
        }
        DAT_0adb = cVar18;
        bVar8 = DAT_0ad0;
        bVar19 = DAT_412a;
        if ((bVar8 & 8) != 0) {
          bVar19 = DAT_4127;
        }
        bVar17 = DAT_0adb;
        bVar8 = bVar19 + bVar17;
        if (CARRY1(bVar19,bVar17)) {
          bVar8 = 0xff;
        }
        bVar19 = DAT_0d5c;
        if (bVar19 <= bVar8) {
          bVar8 = DAT_0d5c;
          bVar19 = DAT_0ad0;
          DAT_0ad0 = bVar19 & 0x7f;
          DAT_0adb = 0;
        }
        DAT_0ad8 = bVar8;
      }
    }
    bVar8 = DAT_0ad0;
    if ((bVar8 & 0x20) != 0) {
      bVar8 = DAT_0add;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0add = bVar8;
      if (DAT_412c <= bVar8) {
        DAT_0add = 0;
        bVar8 = DAT_0ada;
        cVar18 = bVar8 + DAT_412d;
        if (CARRY1(bVar8,DAT_412d)) {
          cVar18 = -1;
        }
        DAT_0ada = cVar18;
        bVar8 = DAT_0ad0;
        bVar19 = DAT_4129;
        if ((bVar8 & 8) != 0) {
          bVar19 = DAT_4126;
        }
        if (bVar19 < 0x80) {
          bVar17 = DAT_0ada;
          bVar8 = bVar19 + bVar17;
          if ((CARRY1(bVar19,bVar17)) || (0x7f < bVar8)) {
LAB_8f7c:
            bVar8 = 0x80;
            bVar19 = DAT_0ad0;
            DAT_0ad0 = bVar19 & 0xdf;
            DAT_0ada = 0;
          }
        }
        else {
          bVar17 = DAT_0ada;
          bVar8 = bVar19 - bVar17;
          if ((bVar19 < bVar17) || (bVar8 < 0x81)) goto LAB_8f7c;
        }
        DAT_0ad7 = bVar8;
      }
    }
    bVar8 = DAT_0ad0;
    if ((~bVar8 & 0x80) != 0) {
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xbf;
      bVar8 = DAT_0ad0;
      if (((~bVar8 & 0x20) != 0) && (bVar8 = DAT_0acf, (~bVar8 & 1) != 0)) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xfd;
        DAT_0ad4 = 0;
        DAT_0ad5 = 0;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xf7;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xfb;
      }
    }
  }
  uVar15 = DAT_0ae4;
  DAT_0ae6 = uVar15;
  sVar10 = DAT_0ae0;
  DAT_0ae4 = sVar10;
  sVar5 = DAT_0ae6;
  sVar10 = sVar10 - sVar5;
  bVar8 = DAT_0ae2;
  if ((~bVar8 & 4) != 0) {
    sVar10 = 0;
  }
  if ((char)((ushort)sVar10 >> 8) != '\0') {
    sVar10 = 0xff;
  }
  DAT_0ae3 = (char)sVar10;
  bVar8 = DAT_0ae2;
  DAT_0ae2 = bVar8 | 4;
  bVar8 = DAT_0ae3;
  iVar2 = (uint)DAT_41fc * (uint)bVar8;
  RAM0e62 = (short)((uint)iVar2 >> 0x10);
  bVar8 = DAT_0aea;
  bVar17 = (byte)iVar2;
  bVar19 = (byte)((uint)iVar2 >> 8);
  RAM0e64 = CONCAT11(bVar19 - (bVar17 < bVar8),bVar17 - bVar8);
  if (bVar19 < (bVar17 < bVar8)) {
    cVar18 = DAT_0e63._0_1_;
    if (cVar18 == '\x01') goto LAB_903e;
    if (cVar18 != '\0') goto LAB_8fec;
    uVar15 = RAM0e64;
    iVar2 = (uint)DAT_41fe *
            (uint)CONCAT11((~(byte)((ushort)uVar15 >> 8) + 1) - ((char)-(char)uVar15 != '\0'),
                           -(char)uVar15);
    uVar15 = (undefined2)iVar2;
    if ((short)((uint)iVar2 >> 0x10) != 0) {
      uVar15 = 0xffff;
    }
    bVar8 = DAT_0ae2;
    bVar19 = (byte)((ushort)uVar15 >> 8);
    bVar17 = (byte)uVar15;
    if ((bVar8 & 1) == 0) {
      bVar3 = DAT_0ae8._1_1_;
      bVar8 = bVar19 - (bVar17 < bVar3);
      uVar15 = CONCAT11(bVar8,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_902b;
      cVar18 = -(bVar17 - bVar3);
      uVar15 = CONCAT11((~bVar8 + 1) - (cVar18 != '\0'),cVar18);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfe;
    }
    else {
      bVar8 = DAT_0ae8._1_1_;
      uVar15 = CONCAT11(bVar19 + CARRY1(bVar17,bVar8),bVar17 + bVar8);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar8))) {
        uVar15 = 0xffff;
      }
LAB_902b:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 1;
    }
    DAT_0ae8 = uVar15;
  }
  else {
    cVar18 = DAT_0e63._0_1_;
    if (cVar18 != '\0') {
LAB_8fec:
      RAM0e64 = 0xffff;
    }
LAB_903e:
    uVar11 = RAM0e64;
    uVar15 = (undefined2)((uint)DAT_41fe * (uint)uVar11);
    if ((short)((uint)DAT_41fe * (uint)uVar11 >> 0x10) != 0) {
      uVar15 = 0xffff;
    }
    bVar8 = DAT_0ae2;
    bVar19 = (byte)((ushort)uVar15 >> 8);
    bVar17 = (byte)uVar15;
    if ((bVar8 & 1) == 0) {
      bVar8 = DAT_0ae8._1_1_;
      uVar15 = CONCAT11(bVar19 + CARRY1(bVar17,bVar8),bVar17 + bVar8);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar8))) {
        uVar15 = 0xffff;
      }
LAB_9070:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfe;
    }
    else {
      bVar3 = DAT_0ae8._1_1_;
      bVar8 = bVar19 - (bVar17 < bVar3);
      uVar15 = CONCAT11(bVar8,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_9070;
      cVar18 = -(bVar17 - bVar3);
      uVar15 = CONCAT11((~bVar8 + 1) - (cVar18 != '\0'),cVar18);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 1;
    }
    DAT_0ae8 = uVar15;
  }
  bVar19 = DAT_0aea;
  bVar8 = DAT_0ae2;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0ae8._0_1_;
    cVar18 = bVar19 + bVar8;
    if (CARRY1(bVar19,bVar8)) {
      cVar18 = -1;
    }
  }
  else {
    bVar8 = DAT_0ae8._0_1_;
    cVar18 = bVar19 - bVar8;
    if (bVar19 < bVar8) {
      cVar18 = '\0';
    }
  }
  DAT_0aea = cVar18;
  bVar8 = DAT_0aea;
  bVar19 = DAT_0aee;
  if (bVar8 < bVar19) {
    sVar10 = (ushort)(byte)-(bVar8 - bVar19) * (ushort)DAT_41fe;
    bVar8 = DAT_0ae2;
    bVar19 = (byte)((ushort)sVar10 >> 8);
    bVar17 = (byte)sVar10;
    if ((bVar8 & 2) == 0) {
      bVar3 = DAT_0aed;
      bVar8 = bVar19 - (bVar17 < bVar3);
      uVar15 = CONCAT11(bVar8,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_90b7;
      cVar18 = -(bVar17 - bVar3);
      uVar15 = CONCAT11((~bVar8 + 1) - (cVar18 != '\0'),cVar18);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfd;
    }
    else {
      bVar8 = DAT_0aed;
      uVar15 = CONCAT11(bVar19 + CARRY1(bVar17,bVar8),bVar17 + bVar8);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar8))) {
        uVar15 = 0xffff;
      }
LAB_90b7:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 2;
    }
    RAM0aec = uVar15;
  }
  else {
    sVar10 = (ushort)(byte)(bVar8 - bVar19) * (ushort)DAT_41fe;
    bVar8 = DAT_0ae2;
    bVar19 = (byte)((ushort)sVar10 >> 8);
    bVar17 = (byte)sVar10;
    if ((bVar8 & 2) == 0) {
      bVar8 = DAT_0aed;
      uVar15 = CONCAT11(bVar19 + CARRY1(bVar17,bVar8),bVar17 + bVar8);
      if (CARRY1(bVar19,CARRY1(bVar17,bVar8))) {
        uVar15 = 0xffff;
      }
LAB_90ee:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfd;
    }
    else {
      bVar3 = DAT_0aed;
      bVar8 = bVar19 - (bVar17 < bVar3);
      uVar15 = CONCAT11(bVar8,bVar17 - bVar3);
      if ((bVar17 < bVar3) <= bVar19) goto LAB_90ee;
      cVar18 = -(bVar17 - bVar3);
      uVar15 = CONCAT11((~bVar8 + 1) - (cVar18 != '\0'),cVar18);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 2;
    }
    RAM0aec = uVar15;
  }
  bVar19 = DAT_0aee;
  bVar8 = DAT_0ae2;
  if ((bVar8 & 2) == 0) {
    bVar8 = DAT_0aec;
    cVar18 = bVar19 + bVar8;
    if (CARRY1(bVar19,bVar8)) {
      cVar18 = -1;
    }
  }
  else {
    bVar8 = DAT_0aec;
    cVar18 = bVar19 - bVar8;
    if (bVar19 < bVar8) {
      cVar18 = '\0';
    }
  }
  DAT_0aee = cVar18;
  if ((((DAT_41cf != -0x80) || (bVar8 = DAT_088f, (bVar8 & 0x80) == 0)) ||
      (bVar8 = DAT_0920._0_1_, DAT_41d0 <= bVar8)) || (bVar8 = DAT_08d4._0_1_, DAT_41d1 <= bVar8)) {
    DAT_0adf = 0;
    bVar8 = DAT_088d;
    DAT_088d = bVar8 & 0xbf;
  }
  cVar18 = DAT_0b29;
  if (cVar18 == '\0') {
    bVar8 = DAT_0adf;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0adf = bVar8;
    if (DAT_41d2 <= bVar8) {
      bVar8 = DAT_088d;
      DAT_088d = bVar8 | 0x40;
    }
  }
  bVar8 = DAT_08a3;
  if ((bVar8 & 4) == 0) {
    cVar18 = DAT_0e53;
    if (cVar18 != -0x80) goto LAB_91e6;
    bVar8 = DAT_0914;
    if (((bVar8 < DAT_422c) || (uVar11 = DAT_0990, (ushort)DAT_422d << 8 < uVar11)) ||
       ((uVar11 = DAT_0980, DAT_422e < uVar11 || (bVar8 = DAT_0881, (~bVar8 & 0x20) == 0)))) {
LAB_91c4:
      cVar18 = '\0';
LAB_91c5:
      DAT_0aff = cVar18;
      bVar8 = DAT_099f;
      if ((((~bVar8 & 0x80) != 0) && (bVar8 = DAT_08a3, (~bVar8 & 0x20) != 0)) &&
         ((bVar8 = DAT_08b2, (~bVar8 & 0x10) != 0 &&
          (((bVar8 = DAT_08b2, (~bVar8 & 4) != 0 && (bVar8 = DAT_08b2, (~bVar8 & 2) != 0)) &&
           (bVar8 = DAT_08b3, (~bVar8 & 0x80) != 0)))))) goto LAB_91e6;
    }
    else {
      bVar8 = DAT_088f;
      if ((bVar8 & 0x80) == 0) {
        bVar8 = DAT_089a;
        if ((&DAT_4439)[bVar8] != '\0') goto LAB_919d;
        goto LAB_91c4;
      }
      if (DAT_4438 == '\0') goto LAB_91c4;
LAB_919d:
      FUN_95c4();
      cVar18 = DAT_0afd;
      if (cVar18 == '\0') goto LAB_91c4;
      FUN_9615();
      cVar18 = DAT_0afe;
      if (cVar18 == '\0') goto LAB_91c4;
      bVar8 = DAT_0aff;
      if (bVar8 < DAT_422b) {
        cVar18 = (bVar8 + 1) - (0xfe < bVar8);
        goto LAB_91c5;
      }
      DAT_0aff = (bVar8 + 1) - (0xfe < bVar8);
    }
    bVar8 = DAT_00f0;
    DAT_00f0 = bVar8 | 1;
    bVar8 = DAT_0889;
    DAT_0889 = bVar8 | 0x80;
  }
  else {
    cVar18 = DAT_0bff;
    cVar7 = DAT_0d7e;
    if (cVar18 != cVar7) {
LAB_91e6:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xfe;
      bVar8 = DAT_0889;
      DAT_0889 = bVar8 & 0x7f;
    }
  }
  bVar8 = DAT_08a3;
  if ((bVar8 & 4) == 0) {
    if ((DAT_4449 == 0xff) || (uVar11 = DAT_0a38, (ushort)DAT_4449 << 8 < uVar11)) {
      cVar18 = '\0';
    }
    else {
      bVar8 = DAT_0bac;
      if (DAT_4631 <= bVar8) {
        bVar19 = DAT_0bab;
        DAT_0bab = bVar19 | 0x80;
      }
      cVar18 = (bVar8 + 1) - (0xfe < bVar8);
    }
    DAT_0bac = cVar18;
    uVar11 = DAT_0a38;
    if ((((ushort)DAT_4448 << 8 < uVar11) && (DAT_4448 != 0xff)) &&
       (((bVar8 = DAT_0bab, (~bVar8 & 0x80) != 0 && (DAT_4449 != 0xff)) ||
        (bVar8 = DAT_0880, (~bVar8 & 1) == 0)))) goto LAB_924d;
    bVar8 = DAT_00f0;
    DAT_00f0 = bVar8 | 0x10;
  }
  else {
    cVar18 = DAT_0bff;
    cVar7 = DAT_0d82;
    if (cVar18 != cVar7) {
LAB_924d:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xef;
    }
  }
  bVar8 = DAT_0880;
  if (((bVar8 & 1) == 0) ||
     ((((bVar8 = DAT_08b1, (~bVar8 & 0x40) != 0 && (bVar8 = DAT_08b1, (~bVar8 & 2) != 0)) &&
       ((cVar18 = DAT_0e52, cVar18 == -0x80 || (bVar8 = DAT_08b2, (~bVar8 & 8) != 0)))) &&
      (((bVar8 = DAT_08b3, (~bVar8 & 0x10) != 0 && (bVar8 = DAT_08b4, (~bVar8 & 0x80) != 0)) &&
       (bVar8 = DAT_08b6, (~bVar8 & 8) != 0)))))) {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 & 0xdf;
  }
  else {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 | 0x20;
  }
  bVar8 = DAT_0884;
  if ((bVar8 & 0x20) == 0) {
LAB_92a7:
    DAT_0ba1 = 0;
  }
  else {
    bVar8 = DAT_0ba1;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0ba1 = bVar8;
    if (DAT_45d6 <= bVar8) {
      bVar8 = DAT_0888;
      if ((~bVar8 & 8) == 0) {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 & 0xf7;
      }
      else {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 | 8;
      }
      goto LAB_92a7;
    }
  }
  bVar8 = DAT_0889;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0bf3;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0bf3 = bVar8;
    if (DAT_4602 <= bVar8) {
      DAT_0bf3 = 0;
      bVar8 = DAT_0bae;
      DAT_0bae = (bVar8 + 1) - (0xfe < bVar8);
    }
  }
  cVar18 = DAT_0bb2;
  if ((cVar18 != -1) && (uVar11 = DAT_0bb0, DAT_45d8 <= uVar11)) {
    DAT_0bb0 = 0;
    bVar8 = DAT_0bb2;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0bb2 = bVar8;
    if (4 < bVar8) {
      uVar16 = DAT_08b1;
      DAT_08ba = uVar16;
      uVar16 = DAT_08b2;
      DAT_08bb = uVar16;
      uVar16 = DAT_08b3;
      DAT_08bc = uVar16;
      uVar16 = DAT_08b4;
      DAT_08bd = uVar16;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 8;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 4;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 2;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 1;
      DAT_0bb2 = 0xff;
    }
    bVar8 = DAT_0c0a;
    DAT_0c0a = bVar8 | 0x40;
  }
  cVar18 = DAT_0e4d;
  if ((cVar18 != -0x80) && (bVar8 = DAT_0d1f, (~bVar8 & 0x80) != 0)) {
    bVar8 = DAT_0d23;
    DAT_0d23 = (bVar8 + 1) - (0xfe < bVar8);
  }
  cVar18 = DAT_0e4d;
  if ((cVar18 != -0x80) && (bVar8 = DAT_0d1f, (~bVar8 & 0x80) != 0)) {
    bVar8 = DAT_0d24;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0d24 = bVar8;
    if (bVar8 <= DAT_46e2) {
      bVar3 = DAT_0d22;
      bVar17 = DAT_0ae3;
      bVar19 = bVar3 + bVar17;
      if (CARRY1(bVar3,bVar17)) {
        bVar19 = 0xff;
      }
      DAT_0d22 = bVar19;
      if ((DAT_46e2 <= bVar8) && (bVar19 <= DAT_4620)) {
        bVar8 = DAT_0d21;
        DAT_0d21 = bVar8 | 1;
        bVar8 = DAT_0d21;
        DAT_0d21 = bVar8 | 8;
      }
    }
  }
  bVar8 = DAT_08df;
  uVar11 = (ushort)bVar8 * 0x100;
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) != 0) {
    uVar12 = DAT_08e0;
    uVar13 = uVar11 - uVar12;
    if (uVar11 < uVar12) {
      uVar11 = FUN_bbf9(CONCAT11((~(byte)(uVar13 >> 8) + 1) - ((char)-(char)uVar13 != '\0'),
                                 -(char)uVar13),&UNK_188c);
      uVar11 = CONCAT11((~(byte)(uVar11 >> 8) + 1) - ((char)-(char)uVar11 != '\0'),-(char)uVar11);
    }
    else {
      uVar11 = FUN_bbf9(uVar13,&UNK_188c);
    }
    sVar10 = DAT_08e0;
    uVar11 = uVar11 + sVar10;
  }
  DAT_08e0 = uVar11;
  uVar15 = DAT_0920;
  RAM0bba = uVar15;
  DAT_0bbc = 0x4504;
  uVar11 = FUN_c1c2('\f');
  DAT_0d68 = uVar11;
  uVar15 = DAT_08f0;
  RAM0bba = uVar15;
  DAT_0bbc = 0x44ec;
  uVar11 = FUN_c1c2('\f');
  DAT_0d6a = uVar11;
  uVar15 = DAT_0d68;
  RAM0e62 = uVar15;
  uVar15 = DAT_0d6a;
  RAM0e64 = uVar15;
  uVar11 = FUN_bcc4(&UNK_4519,'\f');
  DAT_0d5c = (char)(uVar11 + 0x80 >> 8);
  uVar16 = DAT_44ea;
  if (DAT_44e8 == -0x80) {
LAB_941e:
    DAT_0d5b = uVar16;
    DAT_0d5a = uVar16;
  }
  else {
    bVar8 = DAT_0d59;
    if ((bVar8 & 4) != 0) {
      bVar8 = DAT_0d55;
      uVar16 = DAT_44e9;
      if ((~bVar8 & 1) != 0) goto LAB_941e;
      bVar8 = DAT_0d59;
      DAT_0d59 = bVar8 & 0xfb;
    }
    bVar8 = DAT_0881;
    uVar16 = DAT_44eb;
    if ((bVar8 & 0x20) != 0) goto LAB_941e;
    bVar8 = DAT_0ad0;
    if ((~bVar8 & 0x40) != 0) {
      bVar8 = DAT_0acf;
      if (((~bVar8 & 4) == 0) || (bVar8 = DAT_0ad0, (bVar8 & 0x80) != 0)) {
        uVar16 = DAT_0ad8;
      }
      else {
        uVar16 = DAT_0d5c;
      }
      goto LAB_941e;
    }
  }
  FUN_96ea();
  FUN_56d5();
  bVar8 = DAT_0892;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0892;
    if (((bVar8 & 0x80) == 0) || (bVar8 = DAT_0891, (~bVar8 & 0x80) != 0)) {
      bVar8 = DAT_0bf5;
      if (bVar8 != 0) {
        if ((bVar8 & 0x80) != 0) goto LAB_94e3;
        if ((bVar8 & 0x40) != 0) goto LAB_94e8;
        if ((bVar8 & 0x20) != 0) goto LAB_94ed;
        if ((bVar8 & 0x10) != 0) goto LAB_94f2;
        if ((bVar8 & 8) != 0) goto LAB_94fc;
        if ((bVar8 & 4) != 0) goto LAB_9501;
        if ((bVar8 & 2) != 0) goto LAB_9506;
        if ((bVar8 & 1) != 0) goto LAB_950b;
      }
      bVar8 = DAT_0c0b;
      if (bVar8 != 0) {
        if ((bVar8 & 0x80) == 0) {
          if ((bVar8 & 0x40) == 0) goto joined_r0x9490;
LAB_9510:
          FUN_ae0c();
        }
        else {
LAB_94f7:
          FUN_add2();
        }
      }
    }
    else {
      FUN_ab17();
    }
  }
  else {
    bVar8 = DAT_0892;
    if (((bVar8 & 0x80) == 0) || (bVar8 = DAT_0890, (~bVar8 & 0x80) != 0)) {
      bVar8 = DAT_0bf4;
      if (bVar8 == 0) {
LAB_94d0:
        bVar8 = DAT_0c0a;
        if (bVar8 != 0) {
          if ((bVar8 & 0x80) != 0) goto LAB_94f7;
          if ((bVar8 & 0x40) != 0) goto LAB_9510;
joined_r0x9490:
          if ((bVar8 & 4) != 0) {
            FUN_ae39();
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
                    if ((bVar8 & 1) == 0) goto LAB_94d0;
LAB_950b:
                    FUN_ad98();
                  }
                  else {
LAB_9506:
                    FUN_ad5e();
                  }
                }
                else {
LAB_9501:
                  FUN_ad24();
                }
              }
              else {
LAB_94fc:
                FUN_acea();
              }
            }
            else {
LAB_94f2:
              FUN_acb0();
            }
          }
          else {
LAB_94ed:
            FUN_ac76();
          }
        }
        else {
LAB_94e8:
          FUN_ac3c();
        }
      }
      else {
LAB_94e3:
        FUN_ac02();
      }
    }
    else {
      FUN_ab17();
    }
  }
  bVar8 = DAT_0000;
  bVar8 = bVar8 & 0xe0;
  if (bVar8 == 0x80) {
    bVar8 = DAT_08b3;
    if (((bVar8 & 0x80) != 0x80) || (bVar8 = DAT_0000, (bVar8 & 0xe0) != 0x80)) goto LAB_9570;
    FUN_971d();
  }
  else if (bVar8 != 0) {
    if (((bVar8 == 0x40) && (bVar8 = DAT_08b3, (bVar8 & 0x80) == 0x80)) &&
       (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0x40)) {
      prefix_candidate_a505();
      return;
    }
    goto LAB_9570;
  }
  bVar8 = DAT_08b3;
  if (((bVar8 & 0x80) == 0x80) && (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_9570:
  bVar8 = DAT_08be;
  DAT_08be = bVar8 & 0xf7;
  return;
}


/* Entry 8b4f */

void candidate_unreferenced_8b4f(void)

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
  bVar8 = DAT_0b58;
  DAT_0b58 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b56;
  DAT_0b56 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b57;
  DAT_0b57 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b55;
  DAT_0b55 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b30;
  DAT_0b30 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) == 0) {
    cVar13 = '\0';
  }
  else {
    bVar8 = DAT_0b31;
    cVar13 = (bVar8 + 1) - (0xfe < bVar8);
  }
  DAT_0b31 = cVar13;
  bVar8 = DAT_0880;
  if (((~bVar8 & 1) == 0) || (bVar8 = DAT_0885, (~bVar8 & 0x40) == 0)) {
    bVar8 = DAT_0b92;
    cVar13 = (bVar8 + 1) - (0xfe < bVar8);
  }
  else {
    cVar13 = '\0';
  }
  DAT_0b92 = cVar13;
  bVar8 = DAT_099f;
  if ((~bVar8 & 1) == 0) {
    bVar8 = DAT_09a8;
    DAT_09a8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09a9 = 0;
  }
  else {
    bVar8 = DAT_09a9;
    DAT_09a9 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09a8 = 0;
  }
  bVar8 = DAT_093b;
  DAT_093b = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093c;
  DAT_093c = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093d;
  DAT_093d = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093e;
  DAT_093e = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093f;
  DAT_093f = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0940;
  DAT_0940 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b40;
  DAT_0b40 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0894;
  if ((bVar8 & 0x80) == 0) {
LAB_8c5a:
    bVar8 = 0;
  }
  else {
    bVar8 = DAT_0c09;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    if (DAT_46e1 < bVar8) {
      bVar8 = DAT_0894;
      DAT_0894 = bVar8 & 0x7f;
      goto LAB_8c5a;
    }
  }
  DAT_0c09 = bVar8;
  bVar8 = DAT_0920._0_1_;
  uVar7 = DAT_41c6;
  if (bVar8 < DAT_41c4) {
    uVar7 = DAT_41c5;
  }
  DAT_0aa5 = uVar7;
  bVar8 = DAT_08d4._0_1_;
  bVar14 = DAT_0aa4;
  if ((bVar8 < bVar14) || ((byte)(bVar8 - bVar14) < DAT_41c1)) {
    DAT_0aa3 = 0;
LAB_8ca5:
    cVar13 = DAT_0aa6;
    if ((cVar13 == '\0') || (DAT_0aa6 = cVar13 + -1, (char)(cVar13 + -1) == '\0')) {
      DAT_0aa6 = DAT_41c2;
      bVar8 = DAT_0aa2;
      bVar14 = bVar8 - DAT_41c3;
      if (bVar8 < DAT_41c3) {
        bVar14 = 0;
      }
      goto LAB_8cc5;
    }
  }
  else {
    bVar12 = DAT_0aa5;
    sVar11 = (ushort)(byte)((bVar8 - bVar14) - DAT_41c1) * (ushort)bVar12;
    if ((char)((ushort)sVar11 >> 8) != '\0') {
      sVar11 = 0xff;
    }
    bVar14 = (byte)sVar11;
    DAT_0aa3 = bVar14;
    bVar8 = DAT_0aa2;
    if ((bVar14 < bVar8) || (bVar14 == bVar8)) goto LAB_8ca5;
    if (DAT_41c7 <= bVar14) {
      bVar14 = DAT_41c7;
    }
LAB_8cc5:
    DAT_0aa2 = bVar14;
  }
  uVar7 = DAT_08d4._0_1_;
  DAT_0aa4 = uVar7;
  uVar2 = DAT_0920;
  uVar3 = DAT_0ad2;
  uVar9 = uVar2 - uVar3;
  if (uVar2 < uVar3) {
    uVar9 = prefix_candidate_c227
                      (CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                -(char)uVar9),&UNK_411a);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = prefix_candidate_c227(uVar9,&UNK_411a);
  }
  sVar11 = DAT_0ad2;
  DAT_0ad2 = uVar9 + sVar11;
  bVar8 = DAT_0b29;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0ad4;
    DAT_0ad4 = (bVar8 + 1) - (0xfe < bVar8);
    bVar8 = DAT_0ad5;
    DAT_0ad5 = (bVar8 + 1) - (0xfe < bVar8);
  }
  bVar8 = DAT_0aee;
  if ((DAT_411b < bVar8) && (bVar8 < DAT_411c)) {
    bVar8 = DAT_0acf;
    DAT_0acf = bVar8 | 0x80;
  }
  else {
    bVar8 = DAT_0acf;
    DAT_0acf = bVar8 & 0x7f;
    bVar8 = DAT_0acf;
    if ((bVar8 & 0x40) != 0) {
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xbf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xdf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xef;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xf7;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xfb;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xbf;
      DAT_0ad4 = 0;
      DAT_0ad5 = 0;
    }
  }
  bVar8 = DAT_0acf;
  if ((((~bVar8 & 8) != 0) && (bVar8 = DAT_0acf, (~bVar8 & 4) != 0)) &&
     (bVar8 = DAT_0acf, (~bVar8 & 2) != 0)) {
    cVar13 = DAT_089a;
    if (cVar13 == DAT_411d) {
      bVar8 = DAT_0ad4;
      if (DAT_411f <= bVar8) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 0x20;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 8;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 0x40;
      }
    }
    else {
      DAT_0ad4 = 0;
      bVar8 = DAT_0acf;
      if ((bVar8 & 0x20) != 0) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xdf;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xf7;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xbf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 2;
        goto LAB_8dfb;
      }
    }
    cVar13 = DAT_089a;
    if (cVar13 == DAT_411e) {
      bVar8 = DAT_0ad5;
      if (DAT_411f <= bVar8) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 0x10;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 4;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 0x40;
      }
    }
    else {
      DAT_0ad5 = 0;
      bVar8 = DAT_0acf;
      if ((bVar8 & 0x10) != 0) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xef;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xfb;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xbf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 2;
        goto LAB_8dfb;
      }
    }
    bVar8 = DAT_0acf;
    DAT_0acf = bVar8 | 0x40;
    bVar8 = DAT_08f2._0_1_;
    if (DAT_4120 <= bVar8) {
      DAT_0ad4 = 0;
      DAT_0ad5 = 0;
      bVar8 = DAT_0acf;
      if (((~bVar8 & 0x20) == 0) || (bVar8 = DAT_0acf, (bVar8 & 0x10) != 0)) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 8;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xbf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xdf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xef;
      }
    }
  }
LAB_8dfb:
  bVar8 = DAT_0acf;
  if ((bVar8 & 8) != 0) {
    bVar8 = DAT_0ad4;
    if (bVar8 < DAT_4121) {
      bVar8 = DAT_08f2._0_1_;
      if (DAT_4122 <= bVar8) {
        DAT_0ad4 = 0;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 4;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xf7;
      }
    }
    else {
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xbf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xdf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xef;
      DAT_0ad4 = 0;
      DAT_0ad5 = 0;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 | 2;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xf7;
    }
  }
  bVar8 = DAT_0acf;
  if ((bVar8 & 4) != 0) {
    bVar8 = DAT_0ad0;
    if ((bVar8 & 8) == 0) {
      DAT_0ad7 = DAT_4129;
      bVar8 = DAT_412a;
      bVar14 = DAT_4128;
    }
    else {
      DAT_0ad7 = DAT_4126;
      bVar8 = DAT_4127;
      bVar14 = DAT_4125;
    }
    DAT_0ad6 = bVar14;
    DAT_0ad8 = bVar8;
    bVar8 = DAT_0ad0;
    DAT_0ad0 = bVar8 & 0xbf;
    bVar8 = DAT_08f2._0_1_;
    if ((bVar8 < DAT_4122) || (bVar8 = DAT_0ad4, DAT_412b <= bVar8)) {
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 | 2;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 | 1;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 | 2;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 | 0x80;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 | 0x20;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xfb;
    }
  }
  bVar8 = DAT_0acf;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0acf;
    if ((bVar8 & 1) != 0) {
      bVar8 = DAT_0adc;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0adc = bVar8;
      if (DAT_412c <= bVar8) {
        DAT_0adc = 0;
        bVar8 = DAT_0ad9;
        DAT_0ad9 = (bVar8 + 1) - (0xfe < bVar8);
        bVar8 = DAT_0ad0;
        if ((bVar8 & 2) != 0) {
          bVar8 = DAT_0ad0;
          bVar14 = DAT_4128;
          if ((bVar8 & 8) != 0) {
            bVar14 = DAT_4125;
          }
          bVar12 = DAT_0ad9;
          bVar8 = bVar14 + bVar12;
          if (CARRY1(bVar14,bVar12)) {
            bVar8 = 0xff;
          }
          bVar14 = DAT_0a8d;
          if (bVar8 < bVar14) {
            DAT_0ad6 = bVar8;
          }
          else {
            bVar8 = DAT_0ad0;
            DAT_0ad0 = bVar8 & 0xfd;
          }
        }
        bVar8 = DAT_0ad0;
        if ((~bVar8 & 2) != 0) {
          bVar8 = DAT_0acf;
          DAT_0acf = bVar8 & 0xfe;
          DAT_0ad9 = 0;
        }
      }
    }
    bVar8 = DAT_0ad0;
    if ((bVar8 & 0x80) != 0) {
      bVar8 = DAT_0ade;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0ade = bVar8;
      if (DAT_412e <= bVar8) {
        DAT_0ade = 0;
        bVar8 = DAT_0adb;
        cVar13 = bVar8 + DAT_412f;
        if (CARRY1(bVar8,DAT_412f)) {
          cVar13 = -1;
        }
        DAT_0adb = cVar13;
        bVar8 = DAT_0ad0;
        bVar14 = DAT_412a;
        if ((bVar8 & 8) != 0) {
          bVar14 = DAT_4127;
        }
        bVar12 = DAT_0adb;
        bVar8 = bVar14 + bVar12;
        if (CARRY1(bVar14,bVar12)) {
          bVar8 = 0xff;
        }
        bVar14 = DAT_0d5c;
        if (bVar14 <= bVar8) {
          bVar8 = DAT_0d5c;
          bVar14 = DAT_0ad0;
          DAT_0ad0 = bVar14 & 0x7f;
          DAT_0adb = 0;
        }
        DAT_0ad8 = bVar8;
      }
    }
    bVar8 = DAT_0ad0;
    if ((bVar8 & 0x20) != 0) {
      bVar8 = DAT_0add;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0add = bVar8;
      if (DAT_412c <= bVar8) {
        DAT_0add = 0;
        bVar8 = DAT_0ada;
        cVar13 = bVar8 + DAT_412d;
        if (CARRY1(bVar8,DAT_412d)) {
          cVar13 = -1;
        }
        DAT_0ada = cVar13;
        bVar8 = DAT_0ad0;
        bVar14 = DAT_4129;
        if ((bVar8 & 8) != 0) {
          bVar14 = DAT_4126;
        }
        if (bVar14 < 0x80) {
          bVar12 = DAT_0ada;
          bVar8 = bVar14 + bVar12;
          if ((CARRY1(bVar14,bVar12)) || (0x7f < bVar8)) {
LAB_8f7c:
            bVar8 = 0x80;
            bVar14 = DAT_0ad0;
            DAT_0ad0 = bVar14 & 0xdf;
            DAT_0ada = 0;
          }
        }
        else {
          bVar12 = DAT_0ada;
          bVar8 = bVar14 - bVar12;
          if ((bVar14 < bVar12) || (bVar8 < 0x81)) goto LAB_8f7c;
        }
        DAT_0ad7 = bVar8;
      }
    }
    bVar8 = DAT_0ad0;
    if ((~bVar8 & 0x80) != 0) {
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xbf;
      bVar8 = DAT_0ad0;
      if (((~bVar8 & 0x20) != 0) && (bVar8 = DAT_0acf, (~bVar8 & 1) != 0)) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xfd;
        DAT_0ad4 = 0;
        DAT_0ad5 = 0;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xf7;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xfb;
      }
    }
  }
  uVar10 = DAT_0ae4;
  DAT_0ae6 = uVar10;
  sVar11 = DAT_0ae0;
  DAT_0ae4 = sVar11;
  sVar4 = DAT_0ae6;
  sVar11 = sVar11 - sVar4;
  bVar8 = DAT_0ae2;
  if ((~bVar8 & 4) != 0) {
    sVar11 = 0;
  }
  if ((char)((ushort)sVar11 >> 8) != '\0') {
    sVar11 = 0xff;
  }
  DAT_0ae3 = (char)sVar11;
  bVar8 = DAT_0ae2;
  DAT_0ae2 = bVar8 | 4;
  bVar8 = DAT_0ae3;
  iVar1 = (uint)DAT_41fc * (uint)bVar8;
  RAM0e62 = (short)((uint)iVar1 >> 0x10);
  bVar8 = DAT_0aea;
  bVar12 = (byte)iVar1;
  bVar14 = (byte)((uint)iVar1 >> 8);
  RAM0e64 = CONCAT11(bVar14 - (bVar12 < bVar8),bVar12 - bVar8);
  if (bVar14 < (bVar12 < bVar8)) {
    cVar13 = DAT_0e63._0_1_;
    if (cVar13 == '\x01') goto LAB_903e;
    if (cVar13 != '\0') goto LAB_8fec;
    uVar10 = RAM0e64;
    iVar1 = (uint)DAT_41fe *
            (uint)CONCAT11((~(byte)((ushort)uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),
                           -(char)uVar10);
    uVar10 = (undefined2)iVar1;
    if ((short)((uint)iVar1 >> 0x10) != 0) {
      uVar10 = 0xffff;
    }
    bVar8 = DAT_0ae2;
    bVar14 = (byte)((ushort)uVar10 >> 8);
    bVar12 = (byte)uVar10;
    if ((bVar8 & 1) == 0) {
      bVar5 = DAT_0ae8._1_1_;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_902b;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfe;
    }
    else {
      bVar8 = DAT_0ae8._1_1_;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_902b:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 1;
    }
    DAT_0ae8 = uVar10;
  }
  else {
    cVar13 = DAT_0e63._0_1_;
    if (cVar13 != '\0') {
LAB_8fec:
      RAM0e64 = 0xffff;
    }
LAB_903e:
    uVar9 = RAM0e64;
    uVar10 = (undefined2)((uint)DAT_41fe * (uint)uVar9);
    if ((short)((uint)DAT_41fe * (uint)uVar9 >> 0x10) != 0) {
      uVar10 = 0xffff;
    }
    bVar8 = DAT_0ae2;
    bVar14 = (byte)((ushort)uVar10 >> 8);
    bVar12 = (byte)uVar10;
    if ((bVar8 & 1) == 0) {
      bVar8 = DAT_0ae8._1_1_;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9070:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfe;
    }
    else {
      bVar5 = DAT_0ae8._1_1_;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9070;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 1;
    }
    DAT_0ae8 = uVar10;
  }
  bVar14 = DAT_0aea;
  bVar8 = DAT_0ae2;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0ae8._0_1_;
    cVar13 = bVar14 + bVar8;
    if (CARRY1(bVar14,bVar8)) {
      cVar13 = -1;
    }
  }
  else {
    bVar8 = DAT_0ae8._0_1_;
    cVar13 = bVar14 - bVar8;
    if (bVar14 < bVar8) {
      cVar13 = '\0';
    }
  }
  DAT_0aea = cVar13;
  bVar8 = DAT_0aea;
  bVar14 = DAT_0aee;
  if (bVar8 < bVar14) {
    sVar11 = (ushort)(byte)-(bVar8 - bVar14) * (ushort)DAT_41fe;
    bVar8 = DAT_0ae2;
    bVar14 = (byte)((ushort)sVar11 >> 8);
    bVar12 = (byte)sVar11;
    if ((bVar8 & 2) == 0) {
      bVar5 = DAT_0aed;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_90b7;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfd;
    }
    else {
      bVar8 = DAT_0aed;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_90b7:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 2;
    }
    RAM0aec = uVar10;
  }
  else {
    sVar11 = (ushort)(byte)(bVar8 - bVar14) * (ushort)DAT_41fe;
    bVar8 = DAT_0ae2;
    bVar14 = (byte)((ushort)sVar11 >> 8);
    bVar12 = (byte)sVar11;
    if ((bVar8 & 2) == 0) {
      bVar8 = DAT_0aed;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_90ee:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfd;
    }
    else {
      bVar5 = DAT_0aed;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_90ee;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 2;
    }
    RAM0aec = uVar10;
  }
  bVar14 = DAT_0aee;
  bVar8 = DAT_0ae2;
  if ((bVar8 & 2) == 0) {
    bVar8 = DAT_0aec;
    cVar13 = bVar14 + bVar8;
    if (CARRY1(bVar14,bVar8)) {
      cVar13 = -1;
    }
  }
  else {
    bVar8 = DAT_0aec;
    cVar13 = bVar14 - bVar8;
    if (bVar14 < bVar8) {
      cVar13 = '\0';
    }
  }
  DAT_0aee = cVar13;
  if ((((DAT_41cf != -0x80) || (bVar8 = DAT_088f, (bVar8 & 0x80) == 0)) ||
      (bVar8 = DAT_0920._0_1_, DAT_41d0 <= bVar8)) || (bVar8 = DAT_08d4._0_1_, DAT_41d1 <= bVar8)) {
    DAT_0adf = 0;
    bVar8 = DAT_088d;
    DAT_088d = bVar8 & 0xbf;
  }
  cVar13 = DAT_0b29;
  if (cVar13 == '\0') {
    bVar8 = DAT_0adf;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0adf = bVar8;
    if (DAT_41d2 <= bVar8) {
      bVar8 = DAT_088d;
      DAT_088d = bVar8 | 0x40;
    }
  }
  bVar8 = DAT_08a3;
  if ((bVar8 & 4) == 0) {
    cVar13 = DAT_0e53;
    if (cVar13 != -0x80) goto LAB_91e6;
    bVar8 = DAT_0914;
    if (((bVar8 < DAT_422c) || (uVar9 = DAT_0990, (ushort)DAT_422d << 8 < uVar9)) ||
       ((uVar9 = DAT_0980, DAT_422e < uVar9 || (bVar8 = DAT_0881, (~bVar8 & 0x20) == 0)))) {
LAB_91c4:
      cVar13 = '\0';
LAB_91c5:
      DAT_0aff = cVar13;
      bVar8 = DAT_099f;
      if ((((~bVar8 & 0x80) != 0) && (bVar8 = DAT_08a3, (~bVar8 & 0x20) != 0)) &&
         ((bVar8 = DAT_08b2, (~bVar8 & 0x10) != 0 &&
          (((bVar8 = DAT_08b2, (~bVar8 & 4) != 0 && (bVar8 = DAT_08b2, (~bVar8 & 2) != 0)) &&
           (bVar8 = DAT_08b3, (~bVar8 & 0x80) != 0)))))) goto LAB_91e6;
    }
    else {
      bVar8 = DAT_088f;
      if ((bVar8 & 0x80) == 0) {
        bVar8 = DAT_089a;
        if ((&DAT_4439)[bVar8] != '\0') goto LAB_919d;
        goto LAB_91c4;
      }
      if (DAT_4438 == '\0') goto LAB_91c4;
LAB_919d:
      FUN_95c4();
      cVar13 = DAT_0afd;
      if (cVar13 == '\0') goto LAB_91c4;
      FUN_9615();
      cVar13 = DAT_0afe;
      if (cVar13 == '\0') goto LAB_91c4;
      bVar8 = DAT_0aff;
      if (bVar8 < DAT_422b) {
        cVar13 = (bVar8 + 1) - (0xfe < bVar8);
        goto LAB_91c5;
      }
      DAT_0aff = (bVar8 + 1) - (0xfe < bVar8);
    }
    bVar8 = DAT_00f0;
    DAT_00f0 = bVar8 | 1;
    bVar8 = DAT_0889;
    DAT_0889 = bVar8 | 0x80;
  }
  else {
    cVar13 = DAT_0bff;
    cVar6 = DAT_0d7e;
    if (cVar13 != cVar6) {
LAB_91e6:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xfe;
      bVar8 = DAT_0889;
      DAT_0889 = bVar8 & 0x7f;
    }
  }
  bVar8 = DAT_08a3;
  if ((bVar8 & 4) == 0) {
    if ((DAT_4449 == 0xff) || (uVar9 = DAT_0a38, (ushort)DAT_4449 << 8 < uVar9)) {
      cVar13 = '\0';
    }
    else {
      bVar8 = DAT_0bac;
      if (DAT_4631 <= bVar8) {
        bVar14 = DAT_0bab;
        DAT_0bab = bVar14 | 0x80;
      }
      cVar13 = (bVar8 + 1) - (0xfe < bVar8);
    }
    DAT_0bac = cVar13;
    uVar9 = DAT_0a38;
    if ((((ushort)DAT_4448 << 8 < uVar9) && (DAT_4448 != 0xff)) &&
       (((bVar8 = DAT_0bab, (~bVar8 & 0x80) != 0 && (DAT_4449 != 0xff)) ||
        (bVar8 = DAT_0880, (~bVar8 & 1) == 0)))) goto LAB_924d;
    bVar8 = DAT_00f0;
    DAT_00f0 = bVar8 | 0x10;
  }
  else {
    cVar13 = DAT_0bff;
    cVar6 = DAT_0d82;
    if (cVar13 != cVar6) {
LAB_924d:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xef;
    }
  }
  bVar8 = DAT_0880;
  if (((bVar8 & 1) == 0) ||
     ((((bVar8 = DAT_08b1, (~bVar8 & 0x40) != 0 && (bVar8 = DAT_08b1, (~bVar8 & 2) != 0)) &&
       ((cVar13 = DAT_0e52, cVar13 == -0x80 || (bVar8 = DAT_08b2, (~bVar8 & 8) != 0)))) &&
      (((bVar8 = DAT_08b3, (~bVar8 & 0x10) != 0 && (bVar8 = DAT_08b4, (~bVar8 & 0x80) != 0)) &&
       (bVar8 = DAT_08b6, (~bVar8 & 8) != 0)))))) {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 & 0xdf;
  }
  else {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 | 0x20;
  }
  bVar8 = DAT_0884;
  if ((bVar8 & 0x20) == 0) {
LAB_92a7:
    DAT_0ba1 = 0;
  }
  else {
    bVar8 = DAT_0ba1;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0ba1 = bVar8;
    if (DAT_45d6 <= bVar8) {
      bVar8 = DAT_0888;
      if ((~bVar8 & 8) == 0) {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 & 0xf7;
      }
      else {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 | 8;
      }
      goto LAB_92a7;
    }
  }
  bVar8 = DAT_0889;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0bf3;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0bf3 = bVar8;
    if (DAT_4602 <= bVar8) {
      DAT_0bf3 = 0;
      bVar8 = DAT_0bae;
      DAT_0bae = (bVar8 + 1) - (0xfe < bVar8);
    }
  }
  cVar13 = DAT_0bb2;
  if ((cVar13 != -1) && (uVar9 = DAT_0bb0, DAT_45d8 <= uVar9)) {
    DAT_0bb0 = 0;
    bVar8 = DAT_0bb2;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0bb2 = bVar8;
    if (4 < bVar8) {
      uVar7 = DAT_08b1;
      DAT_08ba = uVar7;
      uVar7 = DAT_08b2;
      DAT_08bb = uVar7;
      uVar7 = DAT_08b3;
      DAT_08bc = uVar7;
      uVar7 = DAT_08b4;
      DAT_08bd = uVar7;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 8;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 4;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 2;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 1;
      DAT_0bb2 = 0xff;
    }
    bVar8 = DAT_0c0a;
    DAT_0c0a = bVar8 | 0x40;
  }
  cVar13 = DAT_0e4d;
  if ((cVar13 != -0x80) && (bVar8 = DAT_0d1f, (~bVar8 & 0x80) != 0)) {
    bVar8 = DAT_0d23;
    DAT_0d23 = (bVar8 + 1) - (0xfe < bVar8);
  }
  cVar13 = DAT_0e4d;
  if ((cVar13 != -0x80) && (bVar8 = DAT_0d1f, (~bVar8 & 0x80) != 0)) {
    bVar8 = DAT_0d24;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0d24 = bVar8;
    if (bVar8 <= DAT_46e2) {
      bVar5 = DAT_0d22;
      bVar12 = DAT_0ae3;
      bVar14 = bVar5 + bVar12;
      if (CARRY1(bVar5,bVar12)) {
        bVar14 = 0xff;
      }
      DAT_0d22 = bVar14;
      if ((DAT_46e2 <= bVar8) && (bVar14 <= DAT_4620)) {
        bVar8 = DAT_0d21;
        DAT_0d21 = bVar8 | 1;
        bVar8 = DAT_0d21;
        DAT_0d21 = bVar8 | 8;
      }
    }
  }
  bVar8 = DAT_08df;
  uVar9 = (ushort)bVar8 * 0x100;
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) != 0) {
    uVar3 = DAT_08e0;
    uVar2 = uVar9 - uVar3;
    if (uVar9 < uVar3) {
      uVar9 = FUN_bbf9(CONCAT11((~(byte)(uVar2 >> 8) + 1) - ((char)-(char)uVar2 != '\0'),
                                -(char)uVar2),&UNK_188c);
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    else {
      uVar9 = FUN_bbf9(uVar2,&UNK_188c);
    }
    sVar11 = DAT_08e0;
    uVar9 = uVar9 + sVar11;
  }
  DAT_08e0 = uVar9;
  uVar10 = DAT_0920;
  RAM0bba = uVar10;
  DAT_0bbc = 0x4504;
  uVar9 = FUN_c1c2('\x04');
  DAT_0d68 = uVar9;
  uVar10 = DAT_08f0;
  RAM0bba = uVar10;
  DAT_0bbc = 0x44ec;
  uVar9 = FUN_c1c2(0xec);
  DAT_0d6a = uVar9;
  uVar10 = DAT_0d68;
  RAM0e62 = uVar10;
  uVar10 = DAT_0d6a;
  RAM0e64 = uVar10;
  uVar9 = FUN_bcc4(&UNK_4519,'\f');
  DAT_0d5c = (char)(uVar9 + 0x80 >> 8);
  uVar7 = DAT_44ea;
  if (DAT_44e8 == -0x80) {
LAB_941e:
    DAT_0d5b = uVar7;
    DAT_0d5a = uVar7;
  }
  else {
    bVar8 = DAT_0d59;
    if ((bVar8 & 4) != 0) {
      bVar8 = DAT_0d55;
      uVar7 = DAT_44e9;
      if ((~bVar8 & 1) != 0) goto LAB_941e;
      bVar8 = DAT_0d59;
      DAT_0d59 = bVar8 & 0xfb;
    }
    bVar8 = DAT_0881;
    uVar7 = DAT_44eb;
    if ((bVar8 & 0x20) != 0) goto LAB_941e;
    bVar8 = DAT_0ad0;
    if ((~bVar8 & 0x40) != 0) {
      bVar8 = DAT_0acf;
      if (((~bVar8 & 4) == 0) || (bVar8 = DAT_0ad0, (bVar8 & 0x80) != 0)) {
        uVar7 = DAT_0ad8;
      }
      else {
        uVar7 = DAT_0d5c;
      }
      goto LAB_941e;
    }
  }
  FUN_96ea();
  FUN_56d5();
  bVar8 = DAT_0892;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0892;
    if (((bVar8 & 0x80) == 0) || (bVar8 = DAT_0891, (~bVar8 & 0x80) != 0)) {
      bVar8 = DAT_0bf5;
      if (bVar8 != 0) {
        if ((bVar8 & 0x80) != 0) goto LAB_94e3;
        if ((bVar8 & 0x40) != 0) goto LAB_94e8;
        if ((bVar8 & 0x20) != 0) goto LAB_94ed;
        if ((bVar8 & 0x10) != 0) goto LAB_94f2;
        if ((bVar8 & 8) != 0) goto LAB_94fc;
        if ((bVar8 & 4) != 0) goto LAB_9501;
        if ((bVar8 & 2) != 0) goto LAB_9506;
        if ((bVar8 & 1) != 0) goto LAB_950b;
      }
      bVar8 = DAT_0c0b;
      if (bVar8 != 0) {
        if ((bVar8 & 0x80) == 0) {
          if ((bVar8 & 0x40) == 0) goto joined_r0x9490;
LAB_9510:
          FUN_ae0c();
        }
        else {
LAB_94f7:
          FUN_add2();
        }
      }
    }
    else {
      FUN_ab17();
    }
  }
  else {
    bVar8 = DAT_0892;
    if (((bVar8 & 0x80) == 0) || (bVar8 = DAT_0890, (~bVar8 & 0x80) != 0)) {
      bVar8 = DAT_0bf4;
      if (bVar8 == 0) {
LAB_94d0:
        bVar8 = DAT_0c0a;
        if (bVar8 != 0) {
          if ((bVar8 & 0x80) != 0) goto LAB_94f7;
          if ((bVar8 & 0x40) != 0) goto LAB_9510;
joined_r0x9490:
          if ((bVar8 & 4) != 0) {
            FUN_ae39();
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
                    if ((bVar8 & 1) == 0) goto LAB_94d0;
LAB_950b:
                    FUN_ad98();
                  }
                  else {
LAB_9506:
                    FUN_ad5e();
                  }
                }
                else {
LAB_9501:
                  FUN_ad24();
                }
              }
              else {
LAB_94fc:
                FUN_acea();
              }
            }
            else {
LAB_94f2:
              FUN_acb0();
            }
          }
          else {
LAB_94ed:
            FUN_ac76();
          }
        }
        else {
LAB_94e8:
          FUN_ac3c();
        }
      }
      else {
LAB_94e3:
        FUN_ac02();
      }
    }
    else {
      FUN_ab17();
    }
  }
  bVar8 = DAT_0000;
  bVar8 = bVar8 & 0xe0;
  if (bVar8 == 0x80) {
    bVar8 = DAT_08b3;
    if (((bVar8 & 0x80) != 0x80) || (bVar8 = DAT_0000, (bVar8 & 0xe0) != 0x80)) goto LAB_9570;
    FUN_971d();
  }
  else if (bVar8 != 0) {
    if (((bVar8 == 0x40) && (bVar8 = DAT_08b3, (bVar8 & 0x80) == 0x80)) &&
       (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0x40)) {
      prefix_candidate_a505();
      return;
    }
    goto LAB_9570;
  }
  bVar8 = DAT_08b3;
  if (((bVar8 & 0x80) == 0x80) && (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_9570:
  bVar8 = DAT_08be;
  DAT_08be = bVar8 & 0xf7;
  return;
}


/* Entry 8b55 */

void candidate_unreferenced_8b55(void)

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
  bVar8 = DAT_0b58;
  DAT_0b58 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b56;
  DAT_0b56 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b57;
  DAT_0b57 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b55;
  DAT_0b55 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b30;
  DAT_0b30 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) == 0) {
    cVar13 = '\0';
  }
  else {
    bVar8 = DAT_0b31;
    cVar13 = (bVar8 + 1) - (0xfe < bVar8);
  }
  DAT_0b31 = cVar13;
  bVar8 = DAT_0880;
  if (((~bVar8 & 1) == 0) || (bVar8 = DAT_0885, (~bVar8 & 0x40) == 0)) {
    bVar8 = DAT_0b92;
    cVar13 = (bVar8 + 1) - (0xfe < bVar8);
  }
  else {
    cVar13 = '\0';
  }
  DAT_0b92 = cVar13;
  bVar8 = DAT_099f;
  if ((~bVar8 & 1) == 0) {
    bVar8 = DAT_09a8;
    DAT_09a8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09a9 = 0;
  }
  else {
    bVar8 = DAT_09a9;
    DAT_09a9 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_09a8 = 0;
  }
  bVar8 = DAT_093b;
  DAT_093b = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093c;
  DAT_093c = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093d;
  DAT_093d = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093e;
  DAT_093e = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_093f;
  DAT_093f = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0940;
  DAT_0940 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0b40;
  DAT_0b40 = (bVar8 + 1) - (0xfe < bVar8);
  bVar8 = DAT_0894;
  if ((bVar8 & 0x80) == 0) {
LAB_8c5a:
    bVar8 = 0;
  }
  else {
    bVar8 = DAT_0c09;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    if (DAT_46e1 < bVar8) {
      bVar8 = DAT_0894;
      DAT_0894 = bVar8 & 0x7f;
      goto LAB_8c5a;
    }
  }
  DAT_0c09 = bVar8;
  bVar8 = DAT_0920._0_1_;
  uVar7 = DAT_41c6;
  if (bVar8 < DAT_41c4) {
    uVar7 = DAT_41c5;
  }
  DAT_0aa5 = uVar7;
  bVar8 = DAT_08d4._0_1_;
  bVar14 = DAT_0aa4;
  if ((bVar8 < bVar14) || ((byte)(bVar8 - bVar14) < DAT_41c1)) {
    DAT_0aa3 = 0;
LAB_8ca5:
    cVar13 = DAT_0aa6;
    if ((cVar13 == '\0') || (DAT_0aa6 = cVar13 + -1, (char)(cVar13 + -1) == '\0')) {
      DAT_0aa6 = DAT_41c2;
      bVar8 = DAT_0aa2;
      bVar14 = bVar8 - DAT_41c3;
      if (bVar8 < DAT_41c3) {
        bVar14 = 0;
      }
      goto LAB_8cc5;
    }
  }
  else {
    bVar12 = DAT_0aa5;
    sVar11 = (ushort)(byte)((bVar8 - bVar14) - DAT_41c1) * (ushort)bVar12;
    if ((char)((ushort)sVar11 >> 8) != '\0') {
      sVar11 = 0xff;
    }
    bVar14 = (byte)sVar11;
    DAT_0aa3 = bVar14;
    bVar8 = DAT_0aa2;
    if ((bVar14 < bVar8) || (bVar14 == bVar8)) goto LAB_8ca5;
    if (DAT_41c7 <= bVar14) {
      bVar14 = DAT_41c7;
    }
LAB_8cc5:
    DAT_0aa2 = bVar14;
  }
  uVar7 = DAT_08d4._0_1_;
  DAT_0aa4 = uVar7;
  uVar2 = DAT_0920;
  uVar3 = DAT_0ad2;
  uVar9 = uVar2 - uVar3;
  if (uVar2 < uVar3) {
    uVar9 = prefix_candidate_c227
                      (CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),
                                -(char)uVar9),&UNK_411a);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = prefix_candidate_c227(uVar9,&UNK_411a);
  }
  sVar11 = DAT_0ad2;
  DAT_0ad2 = uVar9 + sVar11;
  bVar8 = DAT_0b29;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0ad4;
    DAT_0ad4 = (bVar8 + 1) - (0xfe < bVar8);
    bVar8 = DAT_0ad5;
    DAT_0ad5 = (bVar8 + 1) - (0xfe < bVar8);
  }
  bVar8 = DAT_0aee;
  if ((DAT_411b < bVar8) && (bVar8 < DAT_411c)) {
    bVar8 = DAT_0acf;
    DAT_0acf = bVar8 | 0x80;
  }
  else {
    bVar8 = DAT_0acf;
    DAT_0acf = bVar8 & 0x7f;
    bVar8 = DAT_0acf;
    if ((bVar8 & 0x40) != 0) {
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xbf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xdf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xef;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xf7;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xfb;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xbf;
      DAT_0ad4 = 0;
      DAT_0ad5 = 0;
    }
  }
  bVar8 = DAT_0acf;
  if ((((~bVar8 & 8) != 0) && (bVar8 = DAT_0acf, (~bVar8 & 4) != 0)) &&
     (bVar8 = DAT_0acf, (~bVar8 & 2) != 0)) {
    cVar13 = DAT_089a;
    if (cVar13 == DAT_411d) {
      bVar8 = DAT_0ad4;
      if (DAT_411f <= bVar8) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 0x20;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 8;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 0x40;
      }
    }
    else {
      DAT_0ad4 = 0;
      bVar8 = DAT_0acf;
      if ((bVar8 & 0x20) != 0) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xdf;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xf7;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xbf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 2;
        goto LAB_8dfb;
      }
    }
    cVar13 = DAT_089a;
    if (cVar13 == DAT_411e) {
      bVar8 = DAT_0ad5;
      if (DAT_411f <= bVar8) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 0x10;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 4;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 | 0x40;
      }
    }
    else {
      DAT_0ad5 = 0;
      bVar8 = DAT_0acf;
      if ((bVar8 & 0x10) != 0) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xef;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xfb;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xbf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 2;
        goto LAB_8dfb;
      }
    }
    bVar8 = DAT_0acf;
    DAT_0acf = bVar8 | 0x40;
    bVar8 = DAT_08f2._0_1_;
    if (DAT_4120 <= bVar8) {
      DAT_0ad4 = 0;
      DAT_0ad5 = 0;
      bVar8 = DAT_0acf;
      if (((~bVar8 & 0x20) == 0) || (bVar8 = DAT_0acf, (bVar8 & 0x10) != 0)) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 8;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xbf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xdf;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xef;
      }
    }
  }
LAB_8dfb:
  bVar8 = DAT_0acf;
  if ((bVar8 & 8) != 0) {
    bVar8 = DAT_0ad4;
    if (bVar8 < DAT_4121) {
      bVar8 = DAT_08f2._0_1_;
      if (DAT_4122 <= bVar8) {
        DAT_0ad4 = 0;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 | 4;
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xf7;
      }
    }
    else {
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xbf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xdf;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xef;
      DAT_0ad4 = 0;
      DAT_0ad5 = 0;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 | 2;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xf7;
    }
  }
  bVar8 = DAT_0acf;
  if ((bVar8 & 4) != 0) {
    bVar8 = DAT_0ad0;
    if ((bVar8 & 8) == 0) {
      DAT_0ad7 = DAT_4129;
      bVar8 = DAT_412a;
      bVar14 = DAT_4128;
    }
    else {
      DAT_0ad7 = DAT_4126;
      bVar8 = DAT_4127;
      bVar14 = DAT_4125;
    }
    DAT_0ad6 = bVar14;
    DAT_0ad8 = bVar8;
    bVar8 = DAT_0ad0;
    DAT_0ad0 = bVar8 & 0xbf;
    bVar8 = DAT_08f2._0_1_;
    if ((bVar8 < DAT_4122) || (bVar8 = DAT_0ad4, DAT_412b <= bVar8)) {
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 | 2;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 | 1;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 | 2;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 | 0x80;
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 | 0x20;
      bVar8 = DAT_0acf;
      DAT_0acf = bVar8 & 0xfb;
    }
  }
  bVar8 = DAT_0acf;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0acf;
    if ((bVar8 & 1) != 0) {
      bVar8 = DAT_0adc;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0adc = bVar8;
      if (DAT_412c <= bVar8) {
        DAT_0adc = 0;
        bVar8 = DAT_0ad9;
        DAT_0ad9 = (bVar8 + 1) - (0xfe < bVar8);
        bVar8 = DAT_0ad0;
        if ((bVar8 & 2) != 0) {
          bVar8 = DAT_0ad0;
          bVar14 = DAT_4128;
          if ((bVar8 & 8) != 0) {
            bVar14 = DAT_4125;
          }
          bVar12 = DAT_0ad9;
          bVar8 = bVar14 + bVar12;
          if (CARRY1(bVar14,bVar12)) {
            bVar8 = 0xff;
          }
          bVar14 = DAT_0a8d;
          if (bVar8 < bVar14) {
            DAT_0ad6 = bVar8;
          }
          else {
            bVar8 = DAT_0ad0;
            DAT_0ad0 = bVar8 & 0xfd;
          }
        }
        bVar8 = DAT_0ad0;
        if ((~bVar8 & 2) != 0) {
          bVar8 = DAT_0acf;
          DAT_0acf = bVar8 & 0xfe;
          DAT_0ad9 = 0;
        }
      }
    }
    bVar8 = DAT_0ad0;
    if ((bVar8 & 0x80) != 0) {
      bVar8 = DAT_0ade;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0ade = bVar8;
      if (DAT_412e <= bVar8) {
        DAT_0ade = 0;
        bVar8 = DAT_0adb;
        cVar13 = bVar8 + DAT_412f;
        if (CARRY1(bVar8,DAT_412f)) {
          cVar13 = -1;
        }
        DAT_0adb = cVar13;
        bVar8 = DAT_0ad0;
        bVar14 = DAT_412a;
        if ((bVar8 & 8) != 0) {
          bVar14 = DAT_4127;
        }
        bVar12 = DAT_0adb;
        bVar8 = bVar14 + bVar12;
        if (CARRY1(bVar14,bVar12)) {
          bVar8 = 0xff;
        }
        bVar14 = DAT_0d5c;
        if (bVar14 <= bVar8) {
          bVar8 = DAT_0d5c;
          bVar14 = DAT_0ad0;
          DAT_0ad0 = bVar14 & 0x7f;
          DAT_0adb = 0;
        }
        DAT_0ad8 = bVar8;
      }
    }
    bVar8 = DAT_0ad0;
    if ((bVar8 & 0x20) != 0) {
      bVar8 = DAT_0add;
      bVar8 = (bVar8 + 1) - (0xfe < bVar8);
      DAT_0add = bVar8;
      if (DAT_412c <= bVar8) {
        DAT_0add = 0;
        bVar8 = DAT_0ada;
        cVar13 = bVar8 + DAT_412d;
        if (CARRY1(bVar8,DAT_412d)) {
          cVar13 = -1;
        }
        DAT_0ada = cVar13;
        bVar8 = DAT_0ad0;
        bVar14 = DAT_4129;
        if ((bVar8 & 8) != 0) {
          bVar14 = DAT_4126;
        }
        if (bVar14 < 0x80) {
          bVar12 = DAT_0ada;
          bVar8 = bVar14 + bVar12;
          if ((CARRY1(bVar14,bVar12)) || (0x7f < bVar8)) {
LAB_8f7c:
            bVar8 = 0x80;
            bVar14 = DAT_0ad0;
            DAT_0ad0 = bVar14 & 0xdf;
            DAT_0ada = 0;
          }
        }
        else {
          bVar12 = DAT_0ada;
          bVar8 = bVar14 - bVar12;
          if ((bVar14 < bVar12) || (bVar8 < 0x81)) goto LAB_8f7c;
        }
        DAT_0ad7 = bVar8;
      }
    }
    bVar8 = DAT_0ad0;
    if ((~bVar8 & 0x80) != 0) {
      bVar8 = DAT_0ad0;
      DAT_0ad0 = bVar8 & 0xbf;
      bVar8 = DAT_0ad0;
      if (((~bVar8 & 0x20) != 0) && (bVar8 = DAT_0acf, (~bVar8 & 1) != 0)) {
        bVar8 = DAT_0acf;
        DAT_0acf = bVar8 & 0xfd;
        DAT_0ad4 = 0;
        DAT_0ad5 = 0;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xf7;
        bVar8 = DAT_0ad0;
        DAT_0ad0 = bVar8 & 0xfb;
      }
    }
  }
  uVar10 = DAT_0ae4;
  DAT_0ae6 = uVar10;
  sVar11 = DAT_0ae0;
  DAT_0ae4 = sVar11;
  sVar4 = DAT_0ae6;
  sVar11 = sVar11 - sVar4;
  bVar8 = DAT_0ae2;
  if ((~bVar8 & 4) != 0) {
    sVar11 = 0;
  }
  if ((char)((ushort)sVar11 >> 8) != '\0') {
    sVar11 = 0xff;
  }
  DAT_0ae3 = (char)sVar11;
  bVar8 = DAT_0ae2;
  DAT_0ae2 = bVar8 | 4;
  bVar8 = DAT_0ae3;
  iVar1 = (uint)DAT_41fc * (uint)bVar8;
  RAM0e62 = (short)((uint)iVar1 >> 0x10);
  bVar8 = DAT_0aea;
  bVar12 = (byte)iVar1;
  bVar14 = (byte)((uint)iVar1 >> 8);
  RAM0e64 = CONCAT11(bVar14 - (bVar12 < bVar8),bVar12 - bVar8);
  if (bVar14 < (bVar12 < bVar8)) {
    cVar13 = DAT_0e63._0_1_;
    if (cVar13 == '\x01') goto LAB_903e;
    if (cVar13 != '\0') goto LAB_8fec;
    uVar10 = RAM0e64;
    iVar1 = (uint)DAT_41fe *
            (uint)CONCAT11((~(byte)((ushort)uVar10 >> 8) + 1) - ((char)-(char)uVar10 != '\0'),
                           -(char)uVar10);
    uVar10 = (undefined2)iVar1;
    if ((short)((uint)iVar1 >> 0x10) != 0) {
      uVar10 = 0xffff;
    }
    bVar8 = DAT_0ae2;
    bVar14 = (byte)((ushort)uVar10 >> 8);
    bVar12 = (byte)uVar10;
    if ((bVar8 & 1) == 0) {
      bVar5 = DAT_0ae8._1_1_;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_902b;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfe;
    }
    else {
      bVar8 = DAT_0ae8._1_1_;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_902b:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 1;
    }
    DAT_0ae8 = uVar10;
  }
  else {
    cVar13 = DAT_0e63._0_1_;
    if (cVar13 != '\0') {
LAB_8fec:
      RAM0e64 = 0xffff;
    }
LAB_903e:
    uVar9 = RAM0e64;
    uVar10 = (undefined2)((uint)DAT_41fe * (uint)uVar9);
    if ((short)((uint)DAT_41fe * (uint)uVar9 >> 0x10) != 0) {
      uVar10 = 0xffff;
    }
    bVar8 = DAT_0ae2;
    bVar14 = (byte)((ushort)uVar10 >> 8);
    bVar12 = (byte)uVar10;
    if ((bVar8 & 1) == 0) {
      bVar8 = DAT_0ae8._1_1_;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_9070:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfe;
    }
    else {
      bVar5 = DAT_0ae8._1_1_;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_9070;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 1;
    }
    DAT_0ae8 = uVar10;
  }
  bVar14 = DAT_0aea;
  bVar8 = DAT_0ae2;
  if ((bVar8 & 1) == 0) {
    bVar8 = DAT_0ae8._0_1_;
    cVar13 = bVar14 + bVar8;
    if (CARRY1(bVar14,bVar8)) {
      cVar13 = -1;
    }
  }
  else {
    bVar8 = DAT_0ae8._0_1_;
    cVar13 = bVar14 - bVar8;
    if (bVar14 < bVar8) {
      cVar13 = '\0';
    }
  }
  DAT_0aea = cVar13;
  bVar8 = DAT_0aea;
  bVar14 = DAT_0aee;
  if (bVar8 < bVar14) {
    sVar11 = (ushort)(byte)-(bVar8 - bVar14) * (ushort)DAT_41fe;
    bVar8 = DAT_0ae2;
    bVar14 = (byte)((ushort)sVar11 >> 8);
    bVar12 = (byte)sVar11;
    if ((bVar8 & 2) == 0) {
      bVar5 = DAT_0aed;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_90b7;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfd;
    }
    else {
      bVar8 = DAT_0aed;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_90b7:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 2;
    }
    RAM0aec = uVar10;
  }
  else {
    sVar11 = (ushort)(byte)(bVar8 - bVar14) * (ushort)DAT_41fe;
    bVar8 = DAT_0ae2;
    bVar14 = (byte)((ushort)sVar11 >> 8);
    bVar12 = (byte)sVar11;
    if ((bVar8 & 2) == 0) {
      bVar8 = DAT_0aed;
      uVar10 = CONCAT11(bVar14 + CARRY1(bVar12,bVar8),bVar12 + bVar8);
      if (CARRY1(bVar14,CARRY1(bVar12,bVar8))) {
        uVar10 = 0xffff;
      }
LAB_90ee:
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 & 0xfd;
    }
    else {
      bVar5 = DAT_0aed;
      bVar8 = bVar14 - (bVar12 < bVar5);
      uVar10 = CONCAT11(bVar8,bVar12 - bVar5);
      if ((bVar12 < bVar5) <= bVar14) goto LAB_90ee;
      cVar13 = -(bVar12 - bVar5);
      uVar10 = CONCAT11((~bVar8 + 1) - (cVar13 != '\0'),cVar13);
      bVar8 = DAT_0ae2;
      DAT_0ae2 = bVar8 | 2;
    }
    RAM0aec = uVar10;
  }
  bVar14 = DAT_0aee;
  bVar8 = DAT_0ae2;
  if ((bVar8 & 2) == 0) {
    bVar8 = DAT_0aec;
    cVar13 = bVar14 + bVar8;
    if (CARRY1(bVar14,bVar8)) {
      cVar13 = -1;
    }
  }
  else {
    bVar8 = DAT_0aec;
    cVar13 = bVar14 - bVar8;
    if (bVar14 < bVar8) {
      cVar13 = '\0';
    }
  }
  DAT_0aee = cVar13;
  if ((((DAT_41cf != -0x80) || (bVar8 = DAT_088f, (bVar8 & 0x80) == 0)) ||
      (bVar8 = DAT_0920._0_1_, DAT_41d0 <= bVar8)) || (bVar8 = DAT_08d4._0_1_, DAT_41d1 <= bVar8)) {
    DAT_0adf = 0;
    bVar8 = DAT_088d;
    DAT_088d = bVar8 & 0xbf;
  }
  cVar13 = DAT_0b29;
  if (cVar13 == '\0') {
    bVar8 = DAT_0adf;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0adf = bVar8;
    if (DAT_41d2 <= bVar8) {
      bVar8 = DAT_088d;
      DAT_088d = bVar8 | 0x40;
    }
  }
  bVar8 = DAT_08a3;
  if ((bVar8 & 4) == 0) {
    cVar13 = DAT_0e53;
    if (cVar13 != -0x80) goto LAB_91e6;
    bVar8 = DAT_0914;
    if (((bVar8 < DAT_422c) || (uVar9 = DAT_0990, (ushort)DAT_422d << 8 < uVar9)) ||
       ((uVar9 = DAT_0980, DAT_422e < uVar9 || (bVar8 = DAT_0881, (~bVar8 & 0x20) == 0)))) {
LAB_91c4:
      cVar13 = '\0';
LAB_91c5:
      DAT_0aff = cVar13;
      bVar8 = DAT_099f;
      if ((((~bVar8 & 0x80) != 0) && (bVar8 = DAT_08a3, (~bVar8 & 0x20) != 0)) &&
         ((bVar8 = DAT_08b2, (~bVar8 & 0x10) != 0 &&
          (((bVar8 = DAT_08b2, (~bVar8 & 4) != 0 && (bVar8 = DAT_08b2, (~bVar8 & 2) != 0)) &&
           (bVar8 = DAT_08b3, (~bVar8 & 0x80) != 0)))))) goto LAB_91e6;
    }
    else {
      bVar8 = DAT_088f;
      if ((bVar8 & 0x80) == 0) {
        bVar8 = DAT_089a;
        if ((&DAT_4439)[bVar8] != '\0') goto LAB_919d;
        goto LAB_91c4;
      }
      if (DAT_4438 == '\0') goto LAB_91c4;
LAB_919d:
      FUN_95c4();
      cVar13 = DAT_0afd;
      if (cVar13 == '\0') goto LAB_91c4;
      FUN_9615();
      cVar13 = DAT_0afe;
      if (cVar13 == '\0') goto LAB_91c4;
      bVar8 = DAT_0aff;
      if (bVar8 < DAT_422b) {
        cVar13 = (bVar8 + 1) - (0xfe < bVar8);
        goto LAB_91c5;
      }
      DAT_0aff = (bVar8 + 1) - (0xfe < bVar8);
    }
    bVar8 = DAT_00f0;
    DAT_00f0 = bVar8 | 1;
    bVar8 = DAT_0889;
    DAT_0889 = bVar8 | 0x80;
  }
  else {
    cVar13 = DAT_0bff;
    cVar6 = DAT_0d7e;
    if (cVar13 != cVar6) {
LAB_91e6:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xfe;
      bVar8 = DAT_0889;
      DAT_0889 = bVar8 & 0x7f;
    }
  }
  bVar8 = DAT_08a3;
  if ((bVar8 & 4) == 0) {
    if ((DAT_4449 == 0xff) || (uVar9 = DAT_0a38, (ushort)DAT_4449 << 8 < uVar9)) {
      cVar13 = '\0';
    }
    else {
      bVar8 = DAT_0bac;
      if (DAT_4631 <= bVar8) {
        bVar14 = DAT_0bab;
        DAT_0bab = bVar14 | 0x80;
      }
      cVar13 = (bVar8 + 1) - (0xfe < bVar8);
    }
    DAT_0bac = cVar13;
    uVar9 = DAT_0a38;
    if ((((ushort)DAT_4448 << 8 < uVar9) && (DAT_4448 != 0xff)) &&
       (((bVar8 = DAT_0bab, (~bVar8 & 0x80) != 0 && (DAT_4449 != 0xff)) ||
        (bVar8 = DAT_0880, (~bVar8 & 1) == 0)))) goto LAB_924d;
    bVar8 = DAT_00f0;
    DAT_00f0 = bVar8 | 0x10;
  }
  else {
    cVar13 = DAT_0bff;
    cVar6 = DAT_0d82;
    if (cVar13 != cVar6) {
LAB_924d:
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xef;
    }
  }
  bVar8 = DAT_0880;
  if (((bVar8 & 1) == 0) ||
     ((((bVar8 = DAT_08b1, (~bVar8 & 0x40) != 0 && (bVar8 = DAT_08b1, (~bVar8 & 2) != 0)) &&
       ((cVar13 = DAT_0e52, cVar13 == -0x80 || (bVar8 = DAT_08b2, (~bVar8 & 8) != 0)))) &&
      (((bVar8 = DAT_08b3, (~bVar8 & 0x10) != 0 && (bVar8 = DAT_08b4, (~bVar8 & 0x80) != 0)) &&
       (bVar8 = DAT_08b6, (~bVar8 & 8) != 0)))))) {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 & 0xdf;
  }
  else {
    bVar8 = DAT_0884;
    DAT_0884 = bVar8 | 0x20;
  }
  bVar8 = DAT_0884;
  if ((bVar8 & 0x20) == 0) {
LAB_92a7:
    DAT_0ba1 = 0;
  }
  else {
    bVar8 = DAT_0ba1;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0ba1 = bVar8;
    if (DAT_45d6 <= bVar8) {
      bVar8 = DAT_0888;
      if ((~bVar8 & 8) == 0) {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 & 0xf7;
      }
      else {
        bVar8 = DAT_0888;
        DAT_0888 = bVar8 | 8;
      }
      goto LAB_92a7;
    }
  }
  bVar8 = DAT_0889;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0bf3;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0bf3 = bVar8;
    if (DAT_4602 <= bVar8) {
      DAT_0bf3 = 0;
      bVar8 = DAT_0bae;
      DAT_0bae = (bVar8 + 1) - (0xfe < bVar8);
    }
  }
  cVar13 = DAT_0bb2;
  if ((cVar13 != -1) && (uVar9 = DAT_0bb0, DAT_45d8 <= uVar9)) {
    DAT_0bb0 = 0;
    bVar8 = DAT_0bb2;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0bb2 = bVar8;
    if (4 < bVar8) {
      uVar7 = DAT_08b1;
      DAT_08ba = uVar7;
      uVar7 = DAT_08b2;
      DAT_08bb = uVar7;
      uVar7 = DAT_08b3;
      DAT_08bc = uVar7;
      uVar7 = DAT_08b4;
      DAT_08bd = uVar7;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 8;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 4;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 2;
      bVar8 = DAT_0bf4;
      DAT_0bf4 = bVar8 | 1;
      DAT_0bb2 = 0xff;
    }
    bVar8 = DAT_0c0a;
    DAT_0c0a = bVar8 | 0x40;
  }
  cVar13 = DAT_0e4d;
  if ((cVar13 != -0x80) && (bVar8 = DAT_0d1f, (~bVar8 & 0x80) != 0)) {
    bVar8 = DAT_0d23;
    DAT_0d23 = (bVar8 + 1) - (0xfe < bVar8);
  }
  cVar13 = DAT_0e4d;
  if ((cVar13 != -0x80) && (bVar8 = DAT_0d1f, (~bVar8 & 0x80) != 0)) {
    bVar8 = DAT_0d24;
    bVar8 = (bVar8 + 1) - (0xfe < bVar8);
    DAT_0d24 = bVar8;
    if (bVar8 <= DAT_46e2) {
      bVar5 = DAT_0d22;
      bVar12 = DAT_0ae3;
      bVar14 = bVar5 + bVar12;
      if (CARRY1(bVar5,bVar12)) {
        bVar14 = 0xff;
      }
      DAT_0d22 = bVar14;
      if ((DAT_46e2 <= bVar8) && (bVar14 <= DAT_4620)) {
        bVar8 = DAT_0d21;
        DAT_0d21 = bVar8 | 1;
        bVar8 = DAT_0d21;
        DAT_0d21 = bVar8 | 8;
      }
    }
  }
  bVar8 = DAT_08df;
  uVar9 = (ushort)bVar8 * 0x100;
  bVar8 = DAT_0881;
  if ((~bVar8 & 0x10) != 0) {
    uVar3 = DAT_08e0;
    uVar2 = uVar9 - uVar3;
    if (uVar9 < uVar3) {
      uVar9 = FUN_bbf9(CONCAT11((~(byte)(uVar2 >> 8) + 1) - ((char)-(char)uVar2 != '\0'),
                                -(char)uVar2),&UNK_188c);
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    else {
      uVar9 = FUN_bbf9(uVar2,&UNK_188c);
    }
    sVar11 = DAT_08e0;
    uVar9 = uVar9 + sVar11;
  }
  DAT_08e0 = uVar9;
  uVar10 = DAT_0920;
  RAM0bba = uVar10;
  DAT_0bbc = 0x4504;
  uVar9 = FUN_c1c2('\x04');
  DAT_0d68 = uVar9;
  uVar10 = DAT_08f0;
  RAM0bba = uVar10;
  DAT_0bbc = 0x44ec;
  uVar9 = FUN_c1c2(0xec);
  DAT_0d6a = uVar9;
  uVar10 = DAT_0d68;
  RAM0e62 = uVar10;
  uVar10 = DAT_0d6a;
  RAM0e64 = uVar10;
  uVar9 = FUN_bcc4(&UNK_4519,'\f');
  DAT_0d5c = (char)(uVar9 + 0x80 >> 8);
  uVar7 = DAT_44ea;
  if (DAT_44e8 == -0x80) {
LAB_941e:
    DAT_0d5b = uVar7;
    DAT_0d5a = uVar7;
  }
  else {
    bVar8 = DAT_0d59;
    if ((bVar8 & 4) != 0) {
      bVar8 = DAT_0d55;
      uVar7 = DAT_44e9;
      if ((~bVar8 & 1) != 0) goto LAB_941e;
      bVar8 = DAT_0d59;
      DAT_0d59 = bVar8 & 0xfb;
    }
    bVar8 = DAT_0881;
    uVar7 = DAT_44eb;
    if ((bVar8 & 0x20) != 0) goto LAB_941e;
    bVar8 = DAT_0ad0;
    if ((~bVar8 & 0x40) != 0) {
      bVar8 = DAT_0acf;
      if (((~bVar8 & 4) == 0) || (bVar8 = DAT_0ad0, (bVar8 & 0x80) != 0)) {
        uVar7 = DAT_0ad8;
      }
      else {
        uVar7 = DAT_0d5c;
      }
      goto LAB_941e;
    }
  }
  FUN_96ea();
  FUN_56d5();
  bVar8 = DAT_0892;
  if ((~bVar8 & 2) == 0) {
    bVar8 = DAT_0892;
    if (((bVar8 & 0x80) == 0) || (bVar8 = DAT_0891, (~bVar8 & 0x80) != 0)) {
      bVar8 = DAT_0bf5;
      if (bVar8 != 0) {
        if ((bVar8 & 0x80) != 0) goto LAB_94e3;
        if ((bVar8 & 0x40) != 0) goto LAB_94e8;
        if ((bVar8 & 0x20) != 0) goto LAB_94ed;
        if ((bVar8 & 0x10) != 0) goto LAB_94f2;
        if ((bVar8 & 8) != 0) goto LAB_94fc;
        if ((bVar8 & 4) != 0) goto LAB_9501;
        if ((bVar8 & 2) != 0) goto LAB_9506;
        if ((bVar8 & 1) != 0) goto LAB_950b;
      }
      bVar8 = DAT_0c0b;
      if (bVar8 != 0) {
        if ((bVar8 & 0x80) == 0) {
          if ((bVar8 & 0x40) == 0) goto joined_r0x9490;
LAB_9510:
          FUN_ae0c();
        }
        else {
LAB_94f7:
          FUN_add2();
        }
      }
    }
    else {
      FUN_ab17();
    }
  }
  else {
    bVar8 = DAT_0892;
    if (((bVar8 & 0x80) == 0) || (bVar8 = DAT_0890, (~bVar8 & 0x80) != 0)) {
      bVar8 = DAT_0bf4;
      if (bVar8 == 0) {
LAB_94d0:
        bVar8 = DAT_0c0a;
        if (bVar8 != 0) {
          if ((bVar8 & 0x80) != 0) goto LAB_94f7;
          if ((bVar8 & 0x40) != 0) goto LAB_9510;
joined_r0x9490:
          if ((bVar8 & 4) != 0) {
            FUN_ae39();
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
                    if ((bVar8 & 1) == 0) goto LAB_94d0;
LAB_950b:
                    FUN_ad98();
                  }
                  else {
LAB_9506:
                    FUN_ad5e();
                  }
                }
                else {
LAB_9501:
                  FUN_ad24();
                }
              }
              else {
LAB_94fc:
                FUN_acea();
              }
            }
            else {
LAB_94f2:
              FUN_acb0();
            }
          }
          else {
LAB_94ed:
            FUN_ac76();
          }
        }
        else {
LAB_94e8:
          FUN_ac3c();
        }
      }
      else {
LAB_94e3:
        FUN_ac02();
      }
    }
    else {
      FUN_ab17();
    }
  }
  bVar8 = DAT_0000;
  bVar8 = bVar8 & 0xe0;
  if (bVar8 == 0x80) {
    bVar8 = DAT_08b3;
    if (((bVar8 & 0x80) != 0x80) || (bVar8 = DAT_0000, (bVar8 & 0xe0) != 0x80)) goto LAB_9570;
    FUN_971d();
  }
  else if (bVar8 != 0) {
    if (((bVar8 == 0x40) && (bVar8 = DAT_08b3, (bVar8 & 0x80) == 0x80)) &&
       (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0x40)) {
      prefix_candidate_a505();
      return;
    }
    goto LAB_9570;
  }
  bVar8 = DAT_08b3;
  if (((bVar8 & 0x80) == 0x80) && (bVar8 = DAT_0000, (bVar8 & 0xe0) == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_9570:
  bVar8 = DAT_08be;
  DAT_08be = bVar8 & 0xf7;
  return;
}


/* Entry 9575 */

void FUN_9575(void)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  
  bVar4 = DAT_0886;
  if ((~bVar4 & 0x40) == 0) {
    bVar4 = DAT_08f6;
    bVar1 = DAT_0a05;
    if (bVar4 <= bVar1) {
      bVar1 = DAT_0a07;
      if (bVar4 == bVar1) {
        bVar4 = DAT_0b52;
        bVar4 = (bVar4 + 1) - (0xfe < bVar4);
      }
      else {
        bVar4 = 0;
      }
      DAT_0b52 = bVar4;
      if (DAT_346d <= bVar4) {
        bVar1 = DAT_08f6;
        bVar4 = bVar1 + DAT_346c;
        if (CARRY1(bVar1,DAT_346c)) {
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
    cVar3 = bVar4 + DAT_346c;
    if (CARRY1(bVar4,DAT_346c)) {
      cVar3 = -1;
    }
    DAT_0a06 = cVar3;
    DAT_0b52 = 0;
  }
  uVar2 = DAT_08f6;
  DAT_0a07 = uVar2;
  return;
}


/* Entry 95c4 */

void FUN_95c4(void)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  
  uVar2 = DAT_08f2;
  bVar6 = 0x10;
  do {
    if (*(ushort *)(&UNK_4230 + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_95df;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_95df:
  uVar5 = CONCAT11(bVar6,0x24);
  uVar2 = DAT_0920;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_4244 + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_95fc;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_95fc:
  RAM0b00 = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_0b01;
  bVar6 = DAT_0b00;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_0afd = (&DAT_426c)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


/* Entry 9615 */

void FUN_9615(void)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  
  uVar2 = DAT_0cb2;
  bVar6 = 0x10;
  do {
    if (*(ushort *)(&UNK_4334 + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_9630;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_9630:
  uVar5 = CONCAT11(bVar6,0x24);
  uVar2 = DAT_0920;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_4348 + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_964d;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_964d:
  RAM0b02 = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_0b03;
  bVar6 = DAT_0b02;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_0afe = (&DAT_4370)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


/* Entry 9666 */

void FUN_9666(void)

{
  undefined2 uVar1;
  ushort uVar2;
  
  uVar1 = DAT_08f2;
  RAM0bba = uVar1;
  DAT_0bbc = 0x3114;
  uVar2 = FUN_c1c2('\x14');
  DAT_09fc = uVar2;
  uVar1 = DAT_0920;
  RAM0bba = uVar1;
  DAT_0bbc = 0x3128;
  uVar2 = FUN_c1c2('(');
  DAT_09fe = uVar2;
  uVar1 = DAT_09fe;
  RAM0e62 = uVar1;
  uVar1 = DAT_09fc;
  RAM0e64 = uVar1;
  uVar2 = FUN_bcc4(&UNK_313f,'\n');
  DAT_09dc = (char)(uVar2 + 0x80 >> 8);
  return;
}


/* Entry 96a9 */

void FUN_96a9(void)

{
  byte bVar1;
  ushort uVar2;
  byte *table;
  
  bVar1 = DAT_089a;
  if (DAT_31c4 < bVar1) {
    table = &UNK_31da;
  }
  else {
    table = &UNK_31c6;
  }
  uVar2 = DAT_0920;
  uVar2 = FUN_bbcf(uVar2,table);
  DAT_09dd = (char)(uVar2 >> 8);
  return;
}


/* Entry 96c3 */

void FUN_96c3(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = DAT_09d3;
  if ((bVar1 & 0x10) != 0) {
    uVar2 = DAT_09d6;
    uVar3 = DAT_09de;
    if (uVar3 <= uVar2) {
      if (uVar2 != uVar3) goto LAB_96e5;
      bVar1 = DAT_09e2;
      bVar1 = (bVar1 + 1) - (0xfe < bVar1);
      DAT_09e2 = bVar1;
      if (bVar1 < DAT_31ee) {
        return;
      }
    }
    bVar1 = DAT_09d3;
    DAT_09d3 = bVar1 & 0xef;
  }
LAB_96e5:
  DAT_09e2 = 0;
  return;
}


/* Entry 96ea */

void FUN_96ea(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_0d5a;
  cVar2 = bVar1 + DAT_45ac;
  if (CARRY1(bVar1,DAT_45ac)) {
    cVar2 = -1;
  }
  DAT_0d5d = cVar2;
  bVar1 = DAT_0d5a;
  cVar2 = bVar1 - DAT_45ac;
  if (bVar1 < DAT_45ac) {
    cVar2 = '\0';
  }
  DAT_0d5e = cVar2;
  bVar1 = DAT_0d5a;
  cVar2 = bVar1 + DAT_45ad;
  if (CARRY1(bVar1,DAT_45ad)) {
    cVar2 = -1;
  }
  DAT_0d5f = cVar2;
  bVar1 = DAT_0d5a;
  cVar2 = bVar1 - DAT_45ad;
  if (bVar1 < DAT_45ad) {
    cVar2 = '\0';
  }
  DAT_0d60 = cVar2;
  return;
}


/* Entry 971d */

void FUN_971d(void)

{
  byte bVar1;
  short *psVar2;
  undefined2 uVar3;
  short sVar4;
  char cVar5;
  short *psVar6;
  
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0x7f;
  uVar3 = prefix_candidate_5fa4();
  RAM0e62 = uVar3;
  psVar6 = &DAT_1800;
  sVar4 = 0;
  do {
    sVar4 = sVar4 + *psVar6;
    if (((ushort)psVar6 & 0x1fff) == 0x1000) {
      sVar4 = prefix_candidate_5fa4(0x1000);
    }
    psVar6 = psVar6 + 1;
  } while ((psVar6 != (short *)0x0) && (psVar2 = (short *)RAM0e62, psVar6 <= psVar2));
  cVar5 = '\0';
  if (sVar4 != -0x55ab) {
    cVar5 = -1;
  }
  DAT_0efa = sVar4;
  if (cVar5 == '\0') {
    prefix_candidate_5fa4();
    cVar5 = DAT_0d9b;
    if ((cVar5 != -0x80) && (bVar1 = DAT_08b4, (bVar1 & 0x80) != 0)) {
      bVar1 = DAT_08b4;
      DAT_08b4 = bVar1 & 0x7f;
      bVar1 = DAT_0bf4;
      DAT_0bf4 = bVar1 | 0x10;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 | 0x80;
  }
  else {
    cVar5 = DAT_0d9b;
    if ((cVar5 != -0x80) && (bVar1 = DAT_08b4, (~bVar1 & 0x80) != 0)) {
      bVar1 = DAT_08b4;
      DAT_08b4 = bVar1 | 0x80;
      bVar1 = DAT_0bf4;
      DAT_0bf4 = bVar1 | 0x10;
      bVar1 = DAT_08bd;
      if ((~bVar1 & 0x80) != 0) {
        bVar1 = DAT_08bd;
        DAT_08bd = bVar1 | 0x80;
        bVar1 = DAT_0bf4;
        DAT_0bf4 = bVar1 | 1;
      }
    }
  }
  prefix_candidate_5fa4();
  return;
}


/* Entry 9799 */

void prefix_candidate_a505(void)

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
        goto LAB_97cc;
      }
      psVar4 = psVar4 + 1;
    } while ((psVar4 != (short *)0x0) && (psVar4 < &UNK_0fff));
    sVar3 = CONCAT11(~(byte)((ushort)sVar3 >> 8),~(byte)sVar3);
  } while (sVar3 != 0x5555);
  cVar2 = '\0';
LAB_97cc:
  if (cVar2 == '\0') {
    prefix_candidate_5fa4();
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 | 0x80;
  }
  cVar2 = -1;
  do {
    cVar2 = cVar2 + '\x01';
    if (cVar2 == '\0') {
      prefix_candidate_5fa4();
      cVar2 = '\0';
    }
    bVar1 = DAT_0000;
  } while ((bVar1 & 0xe0) == 0x40);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Entry 97eb */

void FUN_97eb(void)

{
  byte bVar1;
  
  bVar1 = DAT_0887;
  DAT_0887 = bVar1 & 0xdf;
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 | 8;
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 & 0xf7;
  return;
}


/* Entry 97f8 */

void FUN_97f8(void)

{
  bool bVar1;
  short sVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 uVar5;
  char cVar6;
  short sVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  byte bVar12;
  
  bVar12 = DAT_0882;
  DAT_0882 = bVar12 & 0xfb;
  bVar12 = DAT_08c1;
  DAT_08c1 = bVar12 | 4;
  if (DAT_368e == -0x80) {
    uVar9 = DAT_0900;
    if (uVar9 < DAT_3698) {
      if (uVar9 <= DAT_3696) {
        bVar12 = DAT_09a0;
        DAT_09a0 = bVar12 & 0x7f;
      }
    }
    else {
      bVar12 = DAT_09a0;
      DAT_09a0 = bVar12 | 0x80;
    }
    bVar12 = DAT_0881;
    if ((bVar12 & 0x10) != 0) goto LAB_98c3;
    uVar9 = FUN_bbaa((uchar)uVar9,&UNK_37d6);
    bVar8 = (byte)(uVar9 >> 8);
    DAT_09b2 = bVar8;
    bVar12 = DAT_09b3;
    if ((bVar12 < bVar8) || (bVar12 = DAT_0914, bVar12 < DAT_3690)) goto LAB_98c3;
    FUN_9f1f();
    cVar4 = DAT_09ac;
    if (cVar4 == '\0') goto LAB_98c3;
    FUN_9f70();
    cVar4 = DAT_09ad;
    if (((((((cVar4 == '\0') || (bVar12 = DAT_0886, (~bVar12 & 0x40) == 0)) ||
           (bVar12 = DAT_099f, (bVar12 & 0x40) == 0)) ||
          ((sVar2 = DAT_0990, sVar2 != 0 || (cVar4 = DAT_097a, cVar4 != -0x80)))) ||
         ((bVar12 = DAT_088f, (~bVar12 & 0x80) == 0 ||
          ((bVar12 = DAT_08b1, (~bVar12 & 0x20) == 0 || (bVar12 = DAT_08b1, (~bVar12 & 0x10) == 0)))
          ))) || ((bVar12 = DAT_08b1, (~bVar12 & 8) == 0 ||
                  (((bVar12 = DAT_08b1, (~bVar12 & 4) == 0 ||
                    (bVar12 = DAT_08b2, (~bVar12 & 0x80) == 0)) ||
                   (bVar12 = DAT_08b2, (~bVar12 & 0x40) == 0)))))) ||
       (((bVar12 = DAT_08b3, (~bVar12 & 0x80) == 0 || (uVar9 = DAT_0980, uVar9 < DAT_3692)) ||
        ((DAT_3694 < uVar9 ||
         ((bVar12 = DAT_09a0, (bVar12 & 0x80) == 0 || (bVar12 = DAT_08a3, (~bVar12 & 0x20) == 0)))))
        ))) goto LAB_98c3;
    bVar12 = DAT_09ab;
    if (bVar12 < DAT_368f) {
      bVar12 = DAT_099f;
      DAT_099f = bVar12 & 0x7f;
    }
    else {
      bVar12 = DAT_099f;
      DAT_099f = bVar12 | 0x80;
    }
  }
  else {
LAB_98c3:
    bVar12 = DAT_099f;
    DAT_099f = bVar12 & 0x7f;
    DAT_09ab = 0;
  }
  FUN_9df8();
  bVar12 = DAT_09ba;
  if ((((((bVar12 & 4) == 0) || (bVar12 = DAT_099f, (bVar12 & 0x80) == 0)) ||
       (bVar12 = DAT_0914, bVar12 < DAT_3848)) ||
      ((DAT_3849 <= bVar12 || (bVar12 = DAT_0915, bVar12 < DAT_384a)))) ||
     ((DAT_384b <= bVar12 ||
      ((bVar12 = DAT_08fa, bVar12 < DAT_384c || (bVar12 = DAT_08fa, DAT_384d < bVar12)))))) {
LAB_9939:
    DAT_09ce = 0;
    bVar12 = DAT_09ba;
    DAT_09ba = bVar12 & 0xf7;
LAB_9940:
    bVar12 = DAT_09ba;
    DAT_09ba = bVar12 & 0xef;
  }
  else {
    bVar12 = DAT_09ba;
    DAT_09ba = bVar12 | 8;
    bVar12 = DAT_09ce;
    if ((bVar12 < DAT_384e) || (DAT_384f != -0x80)) goto LAB_9940;
    bVar12 = DAT_08b2;
    if ((((((~bVar12 & 0x10) == 0) || (bVar12 = DAT_08b2, (~bVar12 & 4) == 0)) ||
         (bVar12 = DAT_08b2, (~bVar12 & 2) == 0)) ||
        ((bVar12 = DAT_08b3, (~bVar12 & 8) == 0 || (bVar12 = DAT_08b3, (~bVar12 & 4) == 0)))) ||
       (bVar12 = DAT_08b3, (~bVar12 & 2) == 0)) goto LAB_9939;
    bVar12 = DAT_09ba;
    DAT_09ba = bVar12 | 0x10;
  }
  uVar5 = DAT_097c;
  DAT_0bca = uVar5;
  bVar12 = DAT_099f;
  if ((~bVar12 & 0x80) == 0) {
    bVar12 = DAT_099f;
    if ((bVar12 & 2) == 0) {
      bVar12 = DAT_09a0;
      uVar9 = DAT_37b4;
      if ((bVar12 & 1) != 0) {
        FUN_9ea8();
        FUN_9ed2();
        uVar9 = DAT_0920;
        uVar9 = FUN_bbcf(uVar9,&UNK_37c4);
        DAT_09a6 = uVar9 & 0xff00;
        bVar12 = DAT_09a0;
        DAT_09a0 = bVar12 & 0xfe;
        uVar9 = uVar9 & 0xff00;
      }
      RAM0e62 = uVar9;
      uVar10 = DAT_097c;
      uVar11 = RAM0e62;
      uVar9 = uVar10 + uVar11;
      if (CARRY2(uVar10,uVar11)) {
        uVar9 = 0xffff;
      }
    }
    else {
      bVar12 = DAT_09a0;
      uVar9 = DAT_37b2;
      if ((~bVar12 & 1) != 0) {
        FUN_9ea8();
        FUN_9ed2();
        uVar9 = DAT_0920;
        uVar9 = FUN_bbcf(uVar9,&UNK_37b6);
        DAT_09a4 = uVar9 & 0xff00;
        bVar12 = DAT_09a0;
        DAT_09a0 = bVar12 | 1;
        uVar9 = uVar9 & 0xff00;
      }
      RAM0e62 = uVar9;
      uVar10 = DAT_097c;
      uVar11 = RAM0e62;
      uVar9 = uVar10 - uVar11;
      if (uVar10 < uVar11) {
        uVar9 = 0;
      }
    }
  }
  else {
    uVar9 = 0x8000;
  }
  uVar10 = DAT_37d2;
  if ((DAT_37d2 <= uVar9) && (uVar10 = uVar9, DAT_37d4 < uVar9)) {
    uVar10 = DAT_37d4;
  }
  DAT_097c = uVar10;
  cVar4 = DAT_0d93;
  if ((((cVar4 != -0x80) && (DAT_368e == -0x80)) && (bVar12 = DAT_08a3, (~bVar12 & 4) != 0)) &&
     (bVar12 = DAT_08b4, (~bVar12 & 0x80) != 0)) {
    bVar12 = DAT_099f;
    if ((bVar12 & 0x80) != 0) {
      uVar9 = DAT_097c;
      if (DAT_37d4 <= uVar9) {
        bVar12 = DAT_08b8;
        if ((bVar12 & 0x20) == 0) {
          bVar12 = DAT_08b8;
          DAT_08b8 = bVar12 | 0x20;
        }
        else {
          bVar12 = DAT_0b7b;
          if ((DAT_45f0 < bVar12) && (bVar12 = DAT_08b2, (~bVar12 & 4) != 0)) {
            bVar12 = DAT_08b2;
            DAT_08b2 = bVar12 | 4;
            bVar12 = DAT_0bf4;
            DAT_0bf4 = bVar12 | 0x40;
            bVar12 = DAT_08bb;
            if ((~bVar12 & 4) != 0) {
              bVar12 = DAT_08bb;
              DAT_08bb = bVar12 | 4;
              bVar12 = DAT_0bf4;
              DAT_0bf4 = bVar12 | 4;
            }
          }
        }
        goto LAB_9a41;
      }
      uVar9 = DAT_097c;
      uVar10 = DAT_0bca;
      if ((uVar9 < uVar10) && (bVar12 = DAT_08b2, (bVar12 & 4) != 0)) {
        bVar12 = DAT_08b2;
        DAT_08b2 = bVar12 & 0xfb;
        bVar12 = DAT_0bf4;
        DAT_0bf4 = bVar12 | 0x40;
      }
    }
    DAT_0b7b = 0;
    bVar12 = DAT_08b8;
    DAT_08b8 = bVar12 & 0xdf;
  }
LAB_9a41:
  cVar4 = DAT_0d94;
  if ((((cVar4 != -0x80) && (DAT_368e == -0x80)) && (bVar12 = DAT_08a3, (~bVar12 & 4) != 0)) &&
     (bVar12 = DAT_08b4, (~bVar12 & 0x80) != 0)) {
    bVar12 = DAT_099f;
    if ((bVar12 & 0x80) != 0) {
      uVar9 = DAT_097c;
      if (uVar9 <= DAT_37d2) {
        bVar12 = DAT_08b8;
        if ((bVar12 & 0x10) == 0) {
          bVar12 = DAT_08b8;
          DAT_08b8 = bVar12 | 0x10;
        }
        else {
          bVar12 = DAT_0b7c;
          if ((DAT_45f0 < bVar12) && (bVar12 = DAT_08b2, (~bVar12 & 2) != 0)) {
            bVar12 = DAT_08b2;
            DAT_08b2 = bVar12 | 2;
            bVar12 = DAT_0bf4;
            DAT_0bf4 = bVar12 | 0x40;
            bVar12 = DAT_08bb;
            if ((~bVar12 & 2) != 0) {
              bVar12 = DAT_08bb;
              DAT_08bb = bVar12 | 2;
              bVar12 = DAT_0bf4;
              DAT_0bf4 = bVar12 | 4;
            }
          }
        }
        goto LAB_9ab4;
      }
      uVar10 = DAT_0bca;
      uVar9 = DAT_097c;
      if ((uVar10 < uVar9) && (bVar12 = DAT_08b2, (bVar12 & 2) != 0)) {
        bVar12 = DAT_08b2;
        DAT_08b2 = bVar12 & 0xfd;
        bVar12 = DAT_0bf4;
        DAT_0bf4 = bVar12 | 0x40;
      }
    }
    DAT_0b7c = 0;
    bVar12 = DAT_08b8;
    DAT_08b8 = bVar12 & 0xef;
  }
LAB_9ab4:
  cVar4 = DAT_09cf;
  cVar6 = DAT_09d0;
  uVar11 = (ushort)*(byte *)((short)&DAT_09bb + (ushort)(byte)(cVar4 * '\x04' + cVar6)) * 0x100;
  uVar10 = DAT_09cc;
  uVar9 = uVar11 - uVar10;
  if (uVar11 < uVar10) {
    uVar9 = FUN_bbf9(CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9)
                     ,&UNK_3855);
    uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
  }
  else {
    uVar9 = FUN_bbf9(uVar9,&UNK_3855);
  }
  sVar2 = DAT_09cc;
  sVar2 = uVar9 + sVar2;
  DAT_09cc = sVar2;
  bVar1 = 0x7f < (byte)sVar2;
  bVar12 = (byte)((ushort)sVar2 >> 8);
  DAT_097e = (bVar12 + bVar1) - CARRY1(bVar12,bVar1);
  if ((DAT_384f != -0x80) && (DAT_3856 == -0x80)) {
    DAT_09bb = 0x8080;
    DAT_09bd = 0x8080;
    DAT_09bf = 0x8080;
    DAT_09c1 = 0x8080;
    DAT_09c3 = 0x8080;
    DAT_09c5 = 0x8080;
    DAT_09c7 = 0x8080;
    DAT_09c9 = 0x8080;
  }
  bVar12 = DAT_09d3;
  if ((bVar12 & 1) != 0) {
    bVar12 = DAT_09d3;
    if ((~bVar12 & 4) == 0) {
      uVar9 = DAT_09d6;
      uVar10 = DAT_09de;
      if (uVar10 <= uVar9) {
        bVar12 = DAT_09e1;
        bVar12 = (bVar12 + 1) - (0xfe < bVar12);
        DAT_09e1 = bVar12;
        goto LAB_9b64;
      }
      bVar12 = DAT_09d3;
      DAT_09d3 = bVar12 & 0xfe;
      bVar12 = DAT_09d3;
      DAT_09d3 = bVar12 & 0x7f;
      bVar12 = DAT_09d3;
      DAT_09d3 = bVar12 & 0xbf;
      bVar12 = DAT_09d3;
      DAT_09d3 = bVar12 & 0xfb;
      DAT_09e1 = 0;
    }
    else {
      bVar12 = DAT_09d3;
      if (((~bVar12 & 8) != 0) && (bVar12 = DAT_09d3, (bVar12 & 2) != 0)) {
        bVar12 = DAT_09d3;
        DAT_09d3 = bVar12 | 4;
        bVar12 = 0;
        DAT_09e1 = 0;
LAB_9b64:
        bVar8 = DAT_09db;
        if (bVar8 <= bVar12) {
          bVar12 = DAT_09d3;
          DAT_09d3 = bVar12 | 8;
          bVar12 = DAT_09d3;
          DAT_09d3 = bVar12 & 0xfb;
        }
      }
    }
  }
  if (DAT_444d == 0) {
LAB_9b89:
    bVar12 = DAT_0aac;
    DAT_0aac = bVar12 | 4;
LAB_9b8d:
    uVar9 = DAT_0aae;
    bVar12 = (byte)(uVar9 + 1);
    DAT_0aae = CONCAT11((char)(uVar9 + 1 >> 8) - (bVar12 < (0xfffe < uVar9)),
                        bVar12 - (0xfffe < uVar9));
  }
  else {
    if ((DAT_444d != 0xff) && (bVar12 = DAT_08f2._0_1_, DAT_444d <= bVar12)) {
      uVar9 = DAT_0aae;
      if (DAT_444e <= uVar9) goto LAB_9b89;
      goto LAB_9b8d;
    }
    bVar12 = DAT_0aac;
    DAT_0aac = bVar12 & 0xfb;
    DAT_0aae = 0;
  }
  bVar12 = DAT_0bea;
  DAT_0bea = (bVar12 + 1) - (0xfe < bVar12);
  if (DAT_462d == -0x80) {
    bVar12 = DAT_0884;
    DAT_0884 = bVar12 & 0xfd;
LAB_9c48:
    bVar12 = DAT_0885;
    DAT_0885 = bVar12 & 0x7f;
    bVar12 = DAT_0881;
    if ((~bVar12 & 0x20) != 0) {
      bVar12 = DAT_0884;
      DAT_0884 = bVar12 & 0xfe;
    }
  }
  else {
    bVar12 = DAT_08e3;
    if ((bVar12 <= DAT_462e) && (DAT_4630 < bVar12)) {
      if (bVar12 < DAT_462f) {
        uVar10 = DAT_0b42;
        uVar9 = uVar10 - DAT_4210;
        if (uVar10 < DAT_4210) {
          uVar9 = 0;
        }
      }
      else {
        uVar9 = DAT_0b42;
        bVar12 = (byte)(uVar9 + 1);
        uVar9 = CONCAT11((char)(uVar9 + 1 >> 8) - (bVar12 < (0xfffe < uVar9)),
                         bVar12 - (0xfffe < uVar9));
        if (DAT_420e <= uVar9) {
          uVar9 = DAT_420e;
        }
      }
      DAT_0b42 = uVar9;
      if (uVar9 < DAT_4212) goto LAB_9c48;
      bVar12 = DAT_0885;
      DAT_0885 = bVar12 | 0x80;
      cVar4 = DAT_0e52;
      if (cVar4 == -0x80) {
        bVar12 = DAT_08a4;
        DAT_08a4 = bVar12 | 2;
      }
      else {
        bVar12 = DAT_0884;
        DAT_0884 = bVar12 | 1;
      }
      cVar4 = DAT_0d92;
      if (((((cVar4 != -0x80) && (bVar12 = DAT_08a3, (~bVar12 & 4) != 0)) &&
           (bVar12 = DAT_08b4, (~bVar12 & 0x80) != 0)) &&
          ((cVar4 = DAT_0e52, cVar4 == -0x80 || (bVar12 = DAT_0bea, 0x1e < bVar12)))) &&
         (bVar12 = DAT_08b2, (~bVar12 & 8) != 0)) {
        bVar12 = DAT_08b2;
        DAT_08b2 = bVar12 | 8;
        bVar12 = DAT_0bf4;
        DAT_0bf4 = bVar12 | 0x40;
        bVar12 = DAT_08bb;
        if ((~bVar12 & 8) != 0) {
          bVar12 = DAT_08bb;
          DAT_08bb = bVar12 | 8;
          bVar12 = DAT_0bf4;
          DAT_0bf4 = bVar12 | 4;
        }
      }
    }
  }
  bVar12 = DAT_0aee;
  if (bVar12 < DAT_45b5) {
    bVar12 = DAT_0d70;
    bVar12 = (bVar12 + 1) - (0xfe < bVar12);
    DAT_0d70 = bVar12;
    if ((DAT_45ce <= bVar12) && (bVar12 = DAT_0d71, (~bVar12 & 0x10) != 0)) {
      bVar12 = DAT_0d71;
      DAT_0d71 = bVar12 | 0x20;
      bVar12 = DAT_0d71;
      DAT_0d71 = bVar12 | 0x10;
    }
  }
  else {
    DAT_0d70 = 0;
    bVar12 = DAT_0d71;
    DAT_0d71 = bVar12 & 0xef;
    if (DAT_45cf != -0x80) {
      bVar12 = DAT_0d71;
      DAT_0d71 = bVar12 | 0x40;
    }
  }
  bVar12 = DAT_08b2;
  uVar9 = DAT_45cc;
  if ((~bVar12 & 0x40) == 0) {
LAB_9ccb:
    DAT_0d6c = uVar9;
    bVar12 = DAT_0d71;
    DAT_0d71 = bVar12 & 0xdf;
  }
  else {
    bVar12 = DAT_0d71;
    if ((bVar12 & 0x20) != 0) {
      if (DAT_45b6 == -0x80) {
        uVar3 = DAT_0915;
        DAT_0bba = uVar3;
        DAT_0bbc = 0x45b7;
        uVar9 = FUN_c122(0xb7);
        DAT_0e93._0_1_ = (char)(uVar9 >> 8);
        DAT_0e95 = uVar9 << 8;
        DAT_0e97 = 0;
        uVar9 = FUN_be30(&UNK_45a9,'\0','\0');
      }
      goto LAB_9ccb;
    }
  }
  bVar12 = DAT_0c1a;
  if ((bVar12 & 0x40) == 0) {
LAB_9cee:
    DAT_0c1c = 0;
  }
  else {
    bVar12 = DAT_0c1c;
    if ((0xfe < bVar12) || (DAT_0c1c = bVar12 + 1, DAT_4224 < (byte)(bVar12 + 1))) {
      bVar12 = DAT_0c1a;
      DAT_0c1a = bVar12 & 0xbf;
      goto LAB_9cee;
    }
  }
  cVar4 = DAT_0e4d;
  if (((cVar4 != -0x80) && (bVar12 = DAT_0d1f, (~bVar12 & 2) == 0)) &&
     (bVar12 = DAT_0d21, (~bVar12 & 0x20) != 0)) {
    bVar12 = DAT_0d3e;
    DAT_0e62 = bVar12 & 0x3f;
    bVar12 = DAT_0d3f;
    DAT_0e63._0_1_ = bVar12 & 0x3f;
    bVar12 = DAT_0d40;
    DAT_0e63._1_1_ = bVar12 & 0x3f;
    bVar12 = DAT_0e63._0_1_;
    bVar8 = DAT_0e63._1_1_;
    DAT_0d4e._1_1_ = (byte)((ushort)bVar12 << 6) | bVar8;
    DAT_0e63._0_1_ = (char)(((ushort)bVar12 << 6) >> 8);
    bVar12 = DAT_0e62;
    DAT_0d4d = (char)(((ushort)bVar12 << 4) >> 8);
    bVar8 = DAT_0e63._0_1_;
    DAT_0d4e._0_1_ = (byte)((ushort)bVar12 << 4) | bVar8;
    DAT_0e65._0_1_ = 0;
    bVar12 = DAT_0d30;
    bVar8 = DAT_0d31;
    RAM0e66 = (ushort)bVar12 * (ushort)bVar8;
    bVar12 = DAT_0d31;
    bVar8 = DAT_0d32;
    uVar9 = RAM0e66;
    RAM0e66 = (ushort)bVar12 * (ushort)bVar8 + uVar9;
    cVar4 = DAT_0e65._0_1_;
    DAT_0e65._0_1_ = cVar4 + CARRY2((ushort)bVar12 * (ushort)bVar8,uVar9);
    bVar8 = DAT_0d32;
    bVar12 = DAT_0d30;
    uVar9 = RAM0e66;
    DAT_0d4b = (ushort)bVar8 * (ushort)bVar12 + uVar9;
    cVar4 = DAT_0e65._0_1_;
    DAT_0d4a = cVar4 + CARRY2((ushort)bVar8 * (ushort)bVar12,uVar9);
    sVar2 = DAT_0d4b;
    sVar7 = DAT_0d4e;
    if (sVar2 == sVar7) {
      cVar4 = DAT_0d4a;
      cVar6 = DAT_0d4d;
      if (cVar4 != cVar6) goto LAB_9d8b;
      bVar12 = DAT_0d21;
      DAT_0d21 = bVar12 | 0x10;
    }
    else {
LAB_9d8b:
      bVar12 = DAT_0d21;
      DAT_0d21 = bVar12 & 0xef;
    }
    bVar12 = DAT_0d21;
    DAT_0d21 = bVar12 | 0x20;
  }
  cVar4 = DAT_0e4d;
  if (((cVar4 == -0x80) || (bVar12 = DAT_0d1f, (bVar12 & 4) == 0)) ||
     (bVar12 = DAT_0c0a, (~bVar12 & 4) == 0)) goto LAB_9df3;
  sVar2 = DAT_0d41;
  sVar7 = DAT_0d44;
  if ((sVar2 == sVar7) && (sVar7 = DAT_0d47, sVar2 == sVar7)) {
    cVar4 = DAT_0d43;
    cVar6 = DAT_0d46;
    if ((cVar4 != cVar6) || (cVar6 = DAT_0d49, cVar4 != cVar6)) goto LAB_9de7;
    bVar12 = DAT_0d20;
    DAT_0d20 = bVar12 & 0xef;
    bVar12 = DAT_0d21;
    if ((bVar12 & 0x10) == 0) {
      bVar12 = DAT_0c0a;
      DAT_0c0a = bVar12 & 0xfb;
      bVar12 = DAT_0d21;
      DAT_0d21 = bVar12 & 0xbf;
      bVar12 = DAT_0d1f;
      DAT_0d1f = bVar12 & 0xfb;
      DAT_0d50 = 0xffff;
      DAT_0d52 = 0xff;
      goto LAB_9df3;
    }
    bVar12 = DAT_0c0a;
    DAT_0c0a = bVar12 | 4;
    DAT_0d2e = 0;
  }
  else {
LAB_9de7:
    bVar12 = DAT_0d20;
    DAT_0d20 = bVar12 | 0x10;
    bVar12 = DAT_0c0a;
    DAT_0c0a = bVar12 & 0xfb;
  }
  bVar12 = DAT_0d1f;
  DAT_0d1f = bVar12 & 0xfb;
LAB_9df3:
  bVar12 = DAT_08c1;
  DAT_08c1 = bVar12 & 0xfb;
  return;
}


/* Entry 9df8 */

void FUN_9df8(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  
  bVar1 = DAT_0920._0_1_;
  if (bVar1 < DAT_383e) {
    puVar4 = (undefined *)0x0;
LAB_9e30:
    bVar1 = DAT_09ba;
    DAT_09ba = bVar1 & 0xfd;
  }
  else {
    if (bVar1 < DAT_383f) {
      puVar4 = (undefined *)0x1;
    }
    else if (bVar1 < DAT_3840) {
      puVar4 = &UNK_0102;
    }
    else if (bVar1 < DAT_3841) {
      puVar4 = &UNK_0203;
    }
    else {
      if (DAT_3842 <= bVar1) {
        puVar4 = &UNK_0305;
        goto LAB_9e30;
      }
      puVar4 = &UNK_0304;
    }
    bVar1 = DAT_09ba;
    DAT_09ba = bVar1 | 2;
  }
  DAT_09cf = (char)((ushort)puVar4 >> 8);
  DAT_09d1 = (char)puVar4;
  bVar1 = DAT_0cb2._0_1_;
  if (DAT_3843 < bVar1) {
    if (DAT_3844 < bVar1) {
      if (DAT_3845 < bVar1) {
        if (DAT_3846 < bVar1) {
          if (DAT_3847 < bVar1) {
            puVar4 = &UNK_0305;
            goto LAB_9e78;
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
    bVar1 = DAT_09ba;
    DAT_09ba = bVar1 | 1;
  }
  else {
    puVar4 = (undefined *)0x0;
LAB_9e78:
    bVar1 = DAT_09ba;
    DAT_09ba = bVar1 & 0xfe;
  }
  DAT_09d0 = (char)((ushort)puVar4 >> 8);
  DAT_09d2 = (char)puVar4;
  bVar1 = DAT_09ba;
  if ((((bVar1 & 2) == 0) || (bVar1 = DAT_09ba, (bVar1 & 1) == 0)) &&
     (uVar2 = DAT_09d1, uVar3 = DAT_09d2, CONCAT11(uVar2,uVar3) != 0x100)) {
    bVar1 = DAT_09ba;
    DAT_09ba = bVar1 & 0xfb;
  }
  else {
    bVar1 = DAT_09ba;
    DAT_09ba = bVar1 | 4;
  }
  return;
}


/* Entry 9ea8 */

void FUN_9ea8(void)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  char cVar6;
  ushort uVar7;
  
  uVar5 = DAT_09a2;
  uVar3 = DAT_097c;
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
  DAT_09cb = cVar6;
  uVar4 = DAT_097c;
  DAT_09a2 = uVar4;
  return;
}


/* Entry 9ed2 */

void FUN_9ed2(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  
  bVar3 = DAT_09ba;
  if ((bVar3 & 0x10) != 0) {
    cVar1 = DAT_09cf;
    cVar2 = DAT_09d0;
    pbVar5 = (byte *)((short)&DAT_09bb + (ushort)(byte)(cVar1 * '\x04' + cVar2));
    bVar3 = DAT_09cb;
    if (DAT_3850 < bVar3) {
      bVar3 = *pbVar5 + DAT_3852;
      if (CARRY1(*pbVar5,DAT_3852)) {
        bVar3 = 0xff;
      }
    }
    else if (bVar3 < DAT_3851) {
      bVar3 = *pbVar5 - DAT_3852;
      if (*pbVar5 < DAT_3852) {
        bVar3 = 0;
      }
    }
    else {
      bVar3 = *pbVar5;
    }
    bVar4 = DAT_3853;
    if ((DAT_3853 <= bVar3) && (bVar4 = bVar3, DAT_3854 < bVar3)) {
      bVar4 = DAT_3854;
    }
    *pbVar5 = bVar4;
  }
  return;
}


/* Entry 9f1f */

void FUN_9f1f(void)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  
  uVar2 = DAT_08f2;
  bVar6 = 0x10;
  do {
    if (*(ushort *)(&UNK_369a + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_9f3a;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_9f3a:
  uVar5 = CONCAT11(bVar6,0x10);
  uVar2 = DAT_0920;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_36ae + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_9f57;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_9f57:
  RAM09ae = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_09af;
  bVar6 = DAT_09ae;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_09ac = (&DAT_36c2)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


/* Entry 9f70 */

void FUN_9f70(void)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  
  uVar2 = DAT_0cb2;
  bVar6 = 0x10;
  do {
    if (*(ushort *)(&UNK_3726 + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_9f8b;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_9f8b:
  uVar5 = CONCAT11(bVar6,0x10);
  uVar2 = DAT_0920;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_373a + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_9fa8;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_9fa8:
  RAM09b0 = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_09b1;
  bVar6 = DAT_09b0;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_09ad = (&DAT_374e)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


/* Entry 9fc1 */

void FUN_9fc1(short param_1)

{
  char cVar1;
  undefined2 uVar2;
  char cVar3;
  short sVar4;
  byte bVar7;
  ushort uVar5;
  byte bVar8;
  short sVar6;
  
  bVar7 = DAT_088e;
  DAT_088e = bVar7 & 0x7f;
  bVar7 = DAT_08c1;
  DAT_08c1 = bVar7 | 2;
  bVar7 = DAT_08a3;
  if ((~bVar7 & 4) != 0) {
    bVar7 = DAT_08b4;
    if ((~bVar7 & 0x80) == 0) {
LAB_a028:
      bVar7 = DAT_0000;
      DAT_0000 = bVar7 & 0xfb;
    }
    else {
      bVar7 = DAT_0d21;
      if ((((((~bVar7 & 1) == 0) || (bVar7 = DAT_0884, (~bVar7 & 2) == 0)) ||
           (bVar7 = DAT_0884, (~bVar7 & 1) == 0)) ||
          ((cVar1 = DAT_0e52, cVar1 != -0x80 && (bVar7 = DAT_08b2, (~bVar7 & 8) == 0)))) ||
         (bVar7 = DAT_08b3, (~bVar7 & 0x10) == 0)) {
        DAT_0b2e = 0xff;
        DAT_0b2f = 0xff;
        goto LAB_a028;
      }
      bVar7 = DAT_0b2e;
      if (bVar7 < DAT_462b) {
        bVar7 = DAT_0b2e;
        DAT_0b2e = (bVar7 + 1) - (0xfe < bVar7);
      }
      else {
        bVar7 = DAT_0b2f;
        if (DAT_462a <= bVar7) goto LAB_a028;
      }
      bVar7 = DAT_0000;
      DAT_0000 = bVar7 | 4;
    }
    bVar7 = DAT_0b2f;
    DAT_0b2f = (bVar7 + 1) - (0xfe < bVar7);
  }
  cVar1 = DAT_0e55;
  if (cVar1 != '\0') goto LAB_a20d;
  uVar2 = RAM08b1;
  DAT_0b17 = uVar2;
  uVar2 = RAM08b3;
  DAT_0b19 = uVar2;
  uVar2 = DAT_0b17;
  if ((((char)((ushort)uVar2 >> 8) == '\0') && ((char)uVar2 == '\0')) &&
     ((uVar2 = DAT_0b19, (char)((ushort)uVar2 >> 8) == '\0' && ((char)uVar2 == '\0')))) {
    bVar7 = DAT_0b13;
    DAT_0b13 = bVar7 & 0xdf;
  }
  else {
    bVar7 = DAT_0b13;
    DAT_0b13 = bVar7 | 0x20;
  }
  bVar7 = DAT_0b13;
  if ((~bVar7 & 8) != 0) {
    bVar7 = DAT_0b73;
    if (bVar7 < DAT_4660) {
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 2;
      bVar7 = DAT_0b73;
      DAT_0b73 = (bVar7 + 1) - (0xfe < bVar7);
    }
    else {
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xfd;
      bVar7 = DAT_0b13;
      DAT_0b13 = bVar7 | 8;
    }
  }
  bVar7 = DAT_0b13;
  if ((~bVar7 & 8) != 0) goto LAB_a20d;
  bVar7 = DAT_0884;
  if ((bVar7 & 0x20) != 0) {
    DAT_0b1b = 0;
    DAT_0b14 = 0;
    DAT_0b15 = 0;
    DAT_0b16 = 0;
    DAT_0b20 = 0;
    bVar7 = DAT_0b13;
    DAT_0b13 = bVar7 & 0xef;
    uVar5 = DAT_0b1e;
    bVar7 = (byte)(uVar5 + 1);
    uVar5 = CONCAT11((char)(uVar5 + 1 >> 8) - (bVar7 < (0xfffe < uVar5)),bVar7 - (0xfffe < uVar5));
    DAT_0b1e = uVar5;
    if (DAT_465e <= uVar5) {
      bVar7 = DAT_00f0;
      if ((bVar7 & 2) == 0) {
        bVar7 = DAT_00f0;
        DAT_00f0 = bVar7 | 2;
      }
      else {
        bVar7 = DAT_00f0;
        DAT_00f0 = bVar7 & 0xfd;
      }
      DAT_0b1e = 0;
    }
    goto LAB_a20d;
  }
  bVar7 = DAT_0880;
  if (((~bVar7 & 1) == 0) || (bVar7 = DAT_08a4, (~bVar7 & 2) == 0)) {
    DAT_0b1e = 0;
    DAT_0b1b = 0;
    DAT_0b14 = 0;
    DAT_0b15 = 0;
    DAT_0b16 = 0;
    DAT_0b20 = 0;
    bVar7 = DAT_0b13;
    DAT_0b13 = bVar7 & 0xef;
    bVar7 = DAT_00f0;
    DAT_00f0 = bVar7 | 2;
    goto LAB_a20d;
  }
  bVar7 = DAT_0881;
  if ((bVar7 & 0x20) == 0) {
    DAT_0b1e = 0;
    DAT_0b1b = 0;
    DAT_0b14 = 0;
    DAT_0b15 = 0;
    DAT_0b16 = 0;
    DAT_0b20 = 0;
    bVar7 = DAT_0b13;
    DAT_0b13 = bVar7 & 0xef;
    bVar7 = DAT_0b13;
    if ((~bVar7 & 0x20) == 0) {
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 | 2;
    }
    else {
      bVar7 = DAT_00f0;
      DAT_00f0 = bVar7 & 0xfd;
    }
    goto LAB_a20d;
  }
  DAT_0b1e = 0;
  bVar7 = DAT_0b13;
  if (((~bVar7 & 0x10) != 0) && (bVar7 = DAT_0b13, (~bVar7 & 0x20) != 0)) {
    bVar7 = DAT_00f0;
    DAT_00f0 = bVar7 & 0xfd;
    goto LAB_a20d;
  }
  cVar1 = DAT_0b1b;
  if (cVar1 == '\0') {
    DAT_0b1b = 1;
    bVar7 = DAT_00f0;
    DAT_00f0 = bVar7 & 0xfd;
  }
  cVar1 = DAT_0b14;
  if (cVar1 == '\0') {
    bVar7 = DAT_0b13;
    if ((bVar7 & 0x10) == 0) {
      cVar1 = DAT_0b17._0_1_;
      cVar3 = DAT_0b17._1_1_;
      if (cVar1 == '\0' && cVar3 == '\0') {
        cVar1 = DAT_0b19._0_1_;
        cVar3 = DAT_0b19._1_1_;
        if (cVar1 == '\0' && cVar3 == '\0') goto LAB_a20d;
      }
      do {
        cVar1 = DAT_0b1c;
        uVar5 = (ushort)(byte)(cVar1 + 1);
        sVar6 = DAT_0b17;
        param_1 = DAT_0b19;
        while (uVar5 = uVar5 - 1, uVar5 != 0) {
          bVar7 = -(char)(param_1 >> 0xf);
          param_1 = param_1 << 1;
          bVar8 = (byte)(sVar6 << 1);
          sVar6 = CONCAT11((char)((ushort)(sVar6 << 1) >> 8) + CARRY1(bVar8,bVar7),bVar8 + bVar7);
        }
        do {
          cVar1 = DAT_0b1c;
          DAT_0b1c = cVar1 + '\x01';
          if (sVar6 < 0) {
            param_1 = param_1 << 1;
            bVar7 = DAT_0b1c;
            cVar1 = (&DAT_4632)[bVar7];
            DAT_0b14 = cVar1;
            DAT_0b16 = cVar1;
            if (cVar1 == '\0') goto LAB_a20d;
            bVar7 = DAT_0b13;
            DAT_0b13 = bVar7 | 0x10;
            goto LAB_a1fd;
          }
          bVar7 = -(char)(param_1 >> 0xf);
          param_1 = param_1 * 2;
          bVar8 = (byte)(sVar6 << 1);
          sVar6 = CONCAT11((char)((ushort)(sVar6 << 1) >> 8) + CARRY1(bVar8,bVar7),bVar8 + bVar7);
        } while ((sVar6 != 0) || (param_1 != 0));
        DAT_0b1c = 0;
      } while( true );
    }
    sVar6 = DAT_0b20;
    if (sVar6 == 0) {
      cVar1 = DAT_0b15;
      if (cVar1 == '\0') {
        bVar7 = DAT_0b13;
        DAT_0b13 = bVar7 & 0xef;
        bVar7 = DAT_0881;
        if ((~bVar7 & 0x20) != 0) {
          DAT_0b1c = 0;
        }
        goto LAB_a20d;
      }
      goto LAB_a1fd;
    }
  }
  else {
    sVar6 = DAT_0b20;
    if (sVar6 == 0) {
LAB_a1fd:
      FUN_a67d(param_1);
      sVar4 = DAT_0b20;
      sVar6 = sVar4 + -1;
      if (sVar4 == 0) {
        sVar6 = 0;
      }
      DAT_0b20 = sVar6;
      goto LAB_a20d;
    }
  }
  DAT_0b20 = sVar6 + -1;
LAB_a20d:
  if (DAT_1842 == '\0') {
    bVar8 = DAT_0916;
    bVar7 = DAT_08a2;
    if ((~bVar7 & 0x80) == 0) {
      if (bVar8 <= DAT_44e6) {
        bVar7 = DAT_08a2;
        DAT_08a2 = bVar7 & 0x7f;
      }
    }
    else if (DAT_44e7 <= bVar8) {
      bVar7 = DAT_08a2;
      DAT_08a2 = bVar7 | 0x80;
    }
    bVar7 = DAT_0b74;
    if ((bVar7 < DAT_4632) || (bVar8 = DAT_08a2, (~bVar8 & 0x80) == 0)) {
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 | 0x40;
    }
    else {
      bVar8 = DAT_00f0;
      DAT_00f0 = bVar8 & 0xbf;
    }
    DAT_0b74 = (bVar7 + 1) - (0xfe < bVar7);
  }
  bVar7 = DAT_0894;
  if ((bVar7 & 0x20) != 0) {
    cVar1 = DAT_0bff;
    cVar3 = DAT_0d7c;
    if ((((cVar1 == cVar3) || (cVar3 = DAT_0d7d, cVar1 == cVar3)) ||
        (cVar3 = DAT_0d7e, cVar1 == cVar3)) ||
       ((cVar3 = DAT_0d7f, cVar1 == cVar3 || (cVar3 = DAT_0d80, cVar1 == cVar3)))) {
      bVar7 = DAT_0c04;
      bVar7 = (bVar7 + 1) - (0xfe < bVar7);
      DAT_0c04 = bVar7;
      if (DAT_46d9 < bVar7) {
        bVar7 = DAT_0894;
        DAT_0894 = bVar7 & 0xdf;
        bVar7 = DAT_0894;
        DAT_0894 = bVar7 | 0x10;
        DAT_0c06 = DAT_46da;
      }
    }
    else {
      cVar3 = DAT_0d81;
      if (((cVar1 == cVar3) || (cVar3 = DAT_0d82, cVar1 == cVar3)) ||
         (cVar3 = DAT_0d83, cVar1 == cVar3)) {
        bVar7 = DAT_0c04;
        bVar7 = (bVar7 + 1) - (0xfe < bVar7);
        DAT_0c04 = bVar7;
        if (DAT_46d9 < bVar7) {
          bVar7 = DAT_0894;
          DAT_0894 = bVar7 & 0xdf;
          bVar7 = DAT_0894;
          DAT_0894 = bVar7 | 0x10;
          DAT_0c06 = DAT_46db;
        }
      }
    }
  }
  bVar7 = DAT_0894;
  if ((bVar7 & 0x10) != 0) {
    cVar1 = DAT_0bff;
    cVar3 = DAT_0d7c;
    if (cVar1 == cVar3) {
      FUN_a329();
    }
    else {
      cVar3 = DAT_0d7d;
      if (cVar1 == cVar3) {
        FUN_a3a8();
      }
      else {
        cVar3 = DAT_0d7e;
        if (cVar1 == cVar3) {
          FUN_a42f();
        }
        else {
          cVar3 = DAT_0d7f;
          if (cVar1 == cVar3) {
            FUN_a48f();
          }
          else {
            cVar3 = DAT_0d80;
            if (cVar1 == cVar3) {
              FUN_a4ef();
            }
            else {
              cVar3 = DAT_0d81;
              if (cVar1 == cVar3) {
                FUN_a547();
              }
              else {
                cVar3 = DAT_0d82;
                if (cVar1 == cVar3) {
                  FUN_a5a3();
                }
                else {
                  cVar3 = DAT_0d83;
                  if (cVar1 == cVar3) {
                    FUN_a5ff();
                  }
                  else {
                    cVar3 = DAT_0d86;
                    if (cVar1 == cVar3) {
                      FUN_a657();
                    }
                    else {
                      cVar3 = DAT_0d87;
                      if (cVar1 == cVar3) {
                        FUN_a66a();
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
  bVar7 = DAT_08c1;
  DAT_08c1 = bVar7 & 0xfd;
  return;
}


/* Entry a329 */

void FUN_a329(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  
  bVar1 = DAT_0c06;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0c06 = bVar1;
  if (DAT_46da <= bVar1) {
    bVar1 = DAT_0c05;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0c05 = bVar1;
    if (DAT_46d8 < bVar1) {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xef;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xbf;
      DAT_0c05 = 0;
    }
    else {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 4;
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
      DAT_0056 = DAT_46de + sVar2;
      bVar1 = DAT_004c;
      DAT_004c = bVar1 & 0xf7;
      bVar1 = DAT_0049;
      DAT_0049 = bVar1 & 0xbf | 0x80;
      DAT_004e = 8;
    }
    DAT_0c06 = 0;
  }
  return;
}


/* Entry a3a8 */

void FUN_a3a8(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  
  bVar1 = DAT_0c06;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0c06 = bVar1;
  if (DAT_46da <= bVar1) {
    bVar1 = DAT_0c05;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0c05 = bVar1;
    if (DAT_46d8 < bVar1) {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xef;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xbf;
      DAT_0c05 = 0;
    }
    else {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 4;
      if (DAT_4617 != 0) {
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
        DAT_005c = (ushort)DAT_4617 * 0xfa + sVar2;
        bVar1 = DAT_004c;
        DAT_004c = bVar1 & 0xbf;
        bVar1 = DAT_0048;
        DAT_0048 = bVar1 | 0x30;
        DAT_004e = 0x40;
      }
    }
    DAT_0c06 = 0;
  }
  return;
}


/* Entry a42f */

void FUN_a42f(void)

{
  byte bVar1;
  
  bVar1 = DAT_0c06;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0c06 = bVar1;
  if (DAT_46da <= bVar1) {
    bVar1 = DAT_0c05;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0c05 = bVar1;
    if (DAT_46d8 < bVar1) {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xef;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xbf;
      DAT_0c05 = 0;
    }
    else {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 4;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 8;
      DAT_0c07 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 1;
      bVar1 = DAT_0889;
      DAT_0889 = bVar1 | 0x80;
    }
    DAT_0c06 = 0;
  }
  bVar1 = DAT_0894;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0c07, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0c07 = bVar1, DAT_46dc < bVar1)) {
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xf7;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfe;
    bVar1 = DAT_0889;
    DAT_0889 = bVar1 & 0x7f;
  }
  return;
}


/* Entry a48f */

void FUN_a48f(void)

{
  byte bVar1;
  
  bVar1 = DAT_0c06;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0c06 = bVar1;
  if (DAT_46da <= bVar1) {
    bVar1 = DAT_0c05;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0c05 = bVar1;
    if (DAT_46d8 < bVar1) {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xef;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xbf;
      DAT_0c05 = 0;
    }
    else {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 4;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 8;
      DAT_0c07 = 0;
      bVar1 = DAT_00e0;
      DAT_00e0 = bVar1 & 0x7f;
      bVar1 = DAT_0aac;
      DAT_0aac = bVar1 | 1;
    }
    DAT_0c06 = 0;
  }
  bVar1 = DAT_0894;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0c07, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0c07 = bVar1, DAT_46dc < bVar1)) {
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xf7;
    bVar1 = DAT_00e0;
    DAT_00e0 = bVar1 | 0x80;
    bVar1 = DAT_0aac;
    DAT_0aac = bVar1 & 0xfe;
  }
  return;
}


/* Entry a4ef */

void FUN_a4ef(void)

{
  byte bVar1;
  
  bVar1 = DAT_0c06;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0c06 = bVar1;
  if (DAT_46da <= bVar1) {
    bVar1 = DAT_0c05;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0c05 = bVar1;
    if (DAT_46d8 < bVar1) {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xef;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xbf;
      DAT_0c05 = 0;
    }
    else {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 4;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 8;
      DAT_0c07 = 0;
      bVar1 = DAT_0000;
      DAT_0000 = bVar1 & 0xfb;
    }
    DAT_0c06 = 0;
  }
  bVar1 = DAT_0894;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0c07, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0c07 = bVar1, DAT_46dc < bVar1)) {
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xf7;
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 | 4;
  }
  return;
}


/* Entry a547 */

void FUN_a547(void)

{
  byte bVar1;
  
  bVar1 = DAT_0c06;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0c06 = bVar1;
  if (DAT_46db <= bVar1) {
    bVar1 = DAT_0c05;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0c05 = bVar1;
    if (DAT_46d8 < bVar1) {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xef;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xbf;
      DAT_0c05 = 0;
    }
    else {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 4;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 8;
      DAT_0c07 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 4;
    }
    DAT_0c06 = 0;
  }
  bVar1 = DAT_0894;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0c07, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0c07 = bVar1, DAT_46dd < bVar1)) {
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xf7;
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xfb;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfb;
  }
  return;
}


/* Entry a5a3 */

void FUN_a5a3(void)

{
  byte bVar1;
  
  bVar1 = DAT_0c06;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0c06 = bVar1;
  if (DAT_46db <= bVar1) {
    bVar1 = DAT_0c05;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0c05 = bVar1;
    if (DAT_46d8 < bVar1) {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xef;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xbf;
      DAT_0c05 = 0;
    }
    else {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 4;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 8;
      DAT_0c07 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 0x10;
    }
    DAT_0c06 = 0;
  }
  bVar1 = DAT_0894;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0c07, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0c07 = bVar1, DAT_46dd < bVar1)) {
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xf7;
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xfb;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xef;
  }
  return;
}


/* Entry a5ff */

void FUN_a5ff(void)

{
  byte bVar1;
  
  bVar1 = DAT_0c06;
  bVar1 = (bVar1 + 1) - (0xfe < bVar1);
  DAT_0c06 = bVar1;
  if (DAT_46da <= bVar1) {
    bVar1 = DAT_0c05;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0c05 = bVar1;
    if (DAT_46d8 < bVar1) {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xef;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 & 0xbf;
      DAT_0c05 = 0;
    }
    else {
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 4;
      bVar1 = DAT_0894;
      DAT_0894 = bVar1 | 8;
      DAT_0c07 = 0;
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 2;
    }
    DAT_0c06 = 0;
  }
  bVar1 = DAT_0894;
  if (((bVar1 & 8) != 0) &&
     (bVar1 = DAT_0c07, bVar1 = (bVar1 + 1) - (0xfe < bVar1), DAT_0c07 = bVar1, DAT_46dc < bVar1)) {
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xf7;
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfd;
  }
  return;
}


/* Entry a657 */

void FUN_a657(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_0892;
  if (((~bVar1 & 2) != 0) && (cVar2 = DAT_0bf4, cVar2 == '\0')) {
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xef;
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xbf;
  }
  return;
}


/* Entry a66a */

void FUN_a66a(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_0892;
  if (((~bVar1 & 2) != 0) && (cVar2 = DAT_0bf4, cVar2 == '\0')) {
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xef;
    bVar1 = DAT_0894;
    DAT_0894 = bVar1 & 0xbf;
  }
  return;
}


/* Entry a67d */

void FUN_a67d(void)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  
  bVar1 = DAT_00f0;
  if ((bVar1 & 2) == 0) {
    cVar2 = DAT_0b14;
    cVar4 = DAT_0b15;
    if (cVar2 == cVar4) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 | 2;
      bVar1 = DAT_0b14;
      if ((bVar1 & 0xf0) != 0) {
        cVar2 = DAT_0b14;
        DAT_0b14 = cVar2 + -0x10;
        DAT_0b20 = DAT_4658;
        return;
      }
      cVar2 = DAT_0b14;
      DAT_0b14 = cVar2 + -1;
      DAT_0b20 = DAT_465c;
      return;
    }
    DAT_0b20 = DAT_4654;
LAB_a6cc:
    uVar3 = DAT_0b14;
    DAT_0b15 = uVar3;
  }
  else {
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xfd;
    bVar1 = DAT_0b15;
    if ((bVar1 & 0xf0) == 0) {
      bVar1 = DAT_0b14;
      if ((bVar1 & 0xf) != 0) {
        DAT_0b20 = DAT_465a;
        goto LAB_a6cc;
      }
    }
    else {
      cVar2 = DAT_0b14;
      if (cVar2 != '\0') {
        DAT_0b20 = DAT_4656;
        goto LAB_a6cc;
      }
    }
    DAT_0b15 = 0;
  }
  return;
}


/* Entry a6eb */

void FUN_a6eb(void)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  ushort uVar8;
  
  bVar6 = DAT_0882;
  DAT_0882 = bVar6 & 0xdf;
  bVar6 = DAT_08be;
  DAT_08be = bVar6 | 4;
  bVar6 = DAT_0b35;
  DAT_0b35 = (bVar6 + 1) - (0xfe < bVar6);
  bVar6 = DAT_0884;
  if ((bVar6 & 4) != 0) {
    bVar6 = DAT_0b32;
    bVar6 = (bVar6 + 1) - (0xfe < bVar6);
    DAT_0b32 = bVar6;
    if (DAT_4221 <= bVar6) {
      bVar6 = DAT_0884;
      DAT_0884 = bVar6 & 0xfb;
      DAT_0b32 = 0;
    }
  }
  bVar6 = DAT_0c1a;
  if ((bVar6 & 0x80) == 0) {
LAB_a738:
    DAT_0c1b = 0;
  }
  else {
    bVar6 = DAT_0c1b;
    if ((0xfe < bVar6) || (DAT_0c1b = bVar6 + 1, DAT_4221 < (byte)(bVar6 + 1))) {
      bVar6 = DAT_0c1a;
      DAT_0c1a = bVar6 & 0x7f;
      goto LAB_a738;
    }
  }
  bVar6 = DAT_0b33;
  DAT_0b33 = (bVar6 + 1) - (0xfe < bVar6);
  bVar6 = DAT_00e1;
  if (((bVar6 & 8) != 0) && (cVar1 = DAT_0b33, cVar1 == '\b')) {
    bVar6 = DAT_0b34;
    DAT_0b34 = (bVar6 + 1) - (0xfe < bVar6);
  }
  bVar6 = DAT_088d;
  if (((~bVar6 & 0x80) == 0) || (bVar6 = DAT_0b34, DAT_41cc < bVar6)) {
    bVar6 = DAT_088d;
    DAT_088d = bVar6 | 0x80;
    bVar6 = DAT_0b33;
    if (DAT_41cb <= bVar6) goto LAB_a783;
  }
  else {
    bVar6 = DAT_0b33;
    if (DAT_41ca <= bVar6) {
LAB_a783:
      bVar6 = DAT_00e1;
      if ((bVar6 & 8) != 0) {
        DAT_0b30 = 0;
      }
      sVar2 = DAT_0044;
      DAT_0056 = sVar2 + 5;
      bVar6 = DAT_004c;
      DAT_004c = bVar6 & 0xf7;
      bVar6 = DAT_0049;
      DAT_0049 = bVar6 & 0xbf | 0x80;
      DAT_004e = 8;
      bVar6 = DAT_0a98;
      DAT_0a98 = bVar6 & 0xf7;
      bVar6 = DAT_0a98;
      DAT_0a98 = bVar6 & 0x7f;
    }
  }
  bVar6 = DAT_0920._0_1_;
  if (((DAT_41cd <= bVar6) || (bVar6 = DAT_0b93, DAT_41ce <= bVar6)) ||
     (bVar6 = DAT_0b33, DAT_41ce <= bVar6)) {
    DAT_0b34 = 0;
    bVar6 = DAT_088d;
    DAT_088d = bVar6 & 0x7f;
  }
  bVar6 = DAT_0880;
  if ((~bVar6 & 1) == 0) {
    DAT_0b93 = 0;
  }
  else {
    bVar6 = DAT_0b93;
    DAT_0b93 = (bVar6 + 1) - (0xfe < bVar6);
  }
  bVar6 = DAT_0b9e;
  DAT_0b9e = (bVar6 + 1) - (0xfe < bVar6);
  bVar6 = DAT_0ba0;
  DAT_0ba0 = (bVar6 + 1) - (0xfe < bVar6);
  bVar6 = DAT_09ab;
  DAT_09ab = (bVar6 + 1) - (0xfe < bVar6);
  bVar6 = DAT_0880;
  if ((~bVar6 & 1) == 0) {
LAB_a80f:
    bVar6 = DAT_08df;
    if ((DAT_4664 <= bVar6) && (bVar6 < 0xcd)) {
      bVar6 = DAT_0b8d;
      if (bVar6 < DAT_4665) {
        bVar6 = DAT_0b8c;
        if (DAT_4665 <= bVar6) {
          bVar6 = DAT_08b6;
          DAT_08b6 = bVar6 & 0x7f;
        }
      }
      else {
        bVar6 = DAT_08b6;
        DAT_08b6 = bVar6 | 0x80;
      }
    }
  }
  else {
    bVar6 = DAT_0ba0;
    bVar5 = DAT_0dd2;
    if (bVar5 <= bVar6) goto LAB_a80f;
  }
  bVar6 = DAT_0d64;
  DAT_0d64 = (bVar6 + 1) - (0xfe < bVar6);
  bVar6 = DAT_0d59;
  if ((~bVar6 & 0x10) == 0) {
LAB_a879:
    bVar6 = DAT_0d59;
    DAT_0d59 = bVar6 | 0x10;
    bVar6 = DAT_0d64;
    if (DAT_45b3 <= bVar6) {
      DAT_0d64 = 0;
      bVar6 = DAT_0d59;
      DAT_0d59 = bVar6 & 0xdf;
      bVar6 = DAT_0d59;
      DAT_0d59 = bVar6 & 0xef;
    }
  }
  else {
    bVar6 = DAT_0d59;
    if ((~bVar6 & 8) == 0) {
LAB_a892:
      bVar6 = DAT_0d59;
      DAT_0d59 = bVar6 | 8;
      bVar6 = DAT_0d64;
      if (0x18 < bVar6) {
        DAT_0d64 = 0;
        bVar6 = DAT_0d65;
        bVar6 = (bVar6 + 1) - (0xfe < bVar6);
        DAT_0d65 = bVar6;
        if (DAT_45b4 <= bVar6) {
LAB_a8af:
          DAT_0d65 = 0;
          bVar6 = DAT_0d59;
          DAT_0d59 = bVar6 & 0xdf;
          bVar6 = DAT_0d59;
          DAT_0d59 = bVar6 & 0xf7;
          DAT_0d62 = 0;
        }
      }
    }
    else {
      bVar6 = DAT_0d64;
      if (DAT_45b2 <= bVar6) {
        DAT_0d64 = 0;
        bVar6 = DAT_0d59;
        DAT_0d59 = bVar6 | 0x20;
        bVar6 = DAT_0d62;
        cVar1 = (bVar6 + 1) - (0xfe < bVar6);
        DAT_0d62 = cVar1;
        if (cVar1 != '\x01') {
          if (DAT_45b4 != 0) {
            bVar6 = DAT_0d63;
            DAT_0d63 = (bVar6 + 1) - (0xfe < bVar6);
            goto LAB_a892;
          }
          goto LAB_a8af;
        }
        goto LAB_a879;
      }
    }
  }
  bVar6 = DAT_0881;
  if ((bVar6 & 0x10) == 0) {
    uVar8 = DAT_09b6;
    bVar6 = (byte)(uVar8 + 1);
    uVar7 = CONCAT11((char)(uVar8 + 1 >> 8) - (bVar6 < (0xfffe < uVar8)),bVar6 - (0xfffe < uVar8));
  }
  else {
    uVar3 = DAT_0914;
    uVar7 = prefix_candidate_c386();
    DAT_09b4 = uVar7;
    uVar7 = 0;
  }
  DAT_09b6 = uVar7;
  uVar3 = DAT_0918;
  DAT_0bba = uVar3;
  DAT_0bbc = 0x380a;
  uVar8 = FUN_c122('\n');
  DAT_0e93._0_1_ = (char)(uVar8 >> 8);
  DAT_0e95 = uVar8 << 8;
  DAT_0e97 = 0;
  uVar8 = FUN_be30(&UNK_3807,'\0','\0');
  DAT_09b8 = uVar8;
  bVar6 = DAT_08a3;
  if (((~bVar6 & 4) != 0) && (bVar6 = DAT_08b4, (~bVar6 & 0x80) != 0)) {
    if ((DAT_37e8 == -0x80) && (bVar6 = DAT_0881, (~bVar6 & 0x10) != 0)) {
      uVar4 = DAT_09b6;
      uVar8 = DAT_09b4;
      if (uVar8 <= uVar4) {
        uVar4 = DAT_0cb2;
        uVar8 = DAT_09b8;
        if ((uVar4 <= uVar8) && (bVar6 = DAT_08b1, (~bVar6 & 0x20) != 0)) {
          uVar7 = DAT_0c62;
          bVar6 = (byte)((ushort)uVar7 >> 8);
          if ((0x19 < bVar6) &&
             ((((bVar6 < 0xf6 && (bVar6 = DAT_08b1, (~bVar6 & 0x10) != 0)) &&
               (bVar6 = DAT_08b2, (~bVar6 & 0x80) != 0)) &&
              ((bVar6 = DAT_08dc, 6 < bVar6 && (bVar6 < 0xf8)))))) {
            bVar6 = DAT_0001;
            DAT_0001 = bVar6 | 0x20;
            goto LAB_a95e;
          }
        }
      }
    }
    bVar6 = DAT_0001;
    DAT_0001 = bVar6 & 0xdf;
  }
LAB_a95e:
  bVar6 = DAT_08be;
  DAT_08be = bVar6 & 0xfb;
  return;
}


/* Entry a963 */

void FUN_a963(uchar param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  short sVar7;
  ushort uVar8;
  
  bVar1 = DAT_0882;
  DAT_0882 = bVar1 & 0xef;
  bVar1 = DAT_08be;
  DAT_08be = bVar1 | 2;
  uVar6 = FUN_bbaa(param_1,&UNK_3857);
  sVar7 = (uVar6 >> 8) << 3;
  DAT_0966 = sVar7;
  uVar6 = FUN_bbaa((uchar)sVar7,&UNK_31fa);
  DAT_0979 = (char)(uVar6 >> 8);
  uVar6 = FUN_bbaa((uchar)uVar6,&UNK_330d);
  DAT_098d = (char)(uVar6 >> 8);
  uVar6 = FUN_bbaa((uchar)uVar6,&UNK_331f);
  DAT_098e = (char)(uVar6 >> 8);
  bVar1 = DAT_0881;
  if (((bVar1 & 0x20) == 0) || (bVar1 = DAT_0880, (~bVar1 & 8) == 0)) {
    DAT_0b72 = 0;
LAB_a9d4:
    bVar1 = DAT_08a1;
    DAT_08a1 = bVar1 & 0x7f;
    bVar1 = DAT_08a1;
    DAT_08a1 = bVar1 & 0xbf;
  }
  else {
    bVar1 = DAT_0b72;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b72 = bVar1;
    if (bVar1 < DAT_188a) goto LAB_a9d4;
    bVar1 = DAT_08a1;
    DAT_08a1 = bVar1 | 0x80;
    bVar1 = DAT_08a1;
    if ((~bVar1 & 0x40) != 0) {
      uVar2 = DAT_0cc4;
      DAT_0cc6 = uVar2;
      bVar1 = DAT_08a1;
      DAT_08a1 = bVar1 | 0x40;
    }
  }
  bVar1 = DAT_08a1;
  if ((bVar1 & 0x80) != 0) {
    uVar8 = DAT_0cc4;
    uVar3 = DAT_0cc6;
    uVar6 = uVar8 - uVar3;
    if (uVar8 < uVar3) {
      uVar6 = FUN_bbf9(CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),
                                -(char)uVar6),&UNK_188b);
      uVar6 = CONCAT11((~(byte)(uVar6 >> 8) + 1) - ((char)-(char)uVar6 != '\0'),-(char)uVar6);
    }
    else {
      uVar6 = FUN_bbf9(uVar6,&UNK_188b);
    }
    sVar7 = DAT_0cc6;
    DAT_0cc6 = uVar6 + sVar7;
  }
  bVar1 = DAT_0b53;
  if ((DAT_184a < bVar1) || (bVar1 = DAT_0880, (bVar1 & 8) == 0)) {
    bVar1 = DAT_08a1;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_08a1;
      DAT_08a1 = bVar1 & 0xef;
      goto LAB_aa31;
    }
    bVar1 = DAT_08b1;
    if (((~bVar1 & 0x20) == 0) || (bVar1 = DAT_08b1, (~bVar1 & 0x10) == 0)) goto LAB_aa31;
  }
  else {
    DAT_0b53 = 0xff;
LAB_aa31:
    uVar2 = DAT_0e10;
    DAT_0ca8 = uVar2;
  }
  bVar1 = DAT_0b53;
  DAT_0b53 = (bVar1 + 1) - (0xfe < bVar1);
  bVar1 = DAT_0b70;
  if ((DAT_184a < bVar1) || (bVar1 = DAT_0880, (bVar1 & 8) == 0)) {
    bVar1 = DAT_08a1;
    if ((bVar1 & 8) != 0) {
      bVar1 = DAT_08a1;
      DAT_08a1 = bVar1 & 0xf7;
      goto LAB_aa53;
    }
    bVar1 = DAT_08b1;
    if (((((~bVar1 & 0x20) == 0) || (bVar1 = DAT_08b1, (~bVar1 & 0x10) == 0)) ||
        (bVar1 = DAT_08b1, (~bVar1 & 8) == 0)) || (bVar1 = DAT_08b1, (~bVar1 & 4) == 0))
    goto LAB_aa53;
    bVar1 = DAT_08a1;
    if ((bVar1 & 0x80) == 0) {
      uVar6 = DAT_0ce2;
      goto LAB_aa8d;
    }
    uVar6 = DAT_0cc6;
  }
  else {
    DAT_0b70 = 0xff;
LAB_aa53:
    uVar6 = DAT_0e10;
  }
  DAT_0ce0 = uVar6;
  DAT_0ce4 = uVar6;
  DAT_0ce2 = uVar6;
LAB_aa8d:
  uVar8 = DAT_1886;
  if ((DAT_1886 <= uVar6) && (uVar8 = uVar6, DAT_1888 < uVar6)) {
    uVar8 = DAT_1888;
  }
  DAT_0900 = uVar8;
  bVar1 = DAT_0b70;
  DAT_0b70 = (bVar1 + 1) - (0xfe < bVar1);
  uVar6 = DAT_0900;
  uVar6 = FUN_bbcf(uVar6,&UNK_3216);
  DAT_0971 = (char)(uVar6 >> 8);
  uVar2 = DAT_0cb2;
  RAM0bba = uVar2;
  DAT_0bbc = 0x3232;
  uVar6 = FUN_c1c2('2');
  DAT_0974 = uVar6;
  uVar2 = DAT_0920;
  RAM0bba = uVar2;
  DAT_0bbc = 0x324a;
  uVar6 = FUN_c1c2('J');
  DAT_0976 = uVar6;
  uVar2 = DAT_0976;
  RAM0e62 = uVar2;
  uVar2 = DAT_0974;
  RAM0e64 = uVar2;
  uVar6 = FUN_bcc4(&UNK_3257,'\f');
  bVar4 = (byte)(uVar6 + 0x80 >> 8);
  DAT_0972 = bVar4;
  bVar1 = DAT_0971;
  sVar7 = (ushort)bVar4 * (ushort)bVar1;
  uVar5 = (undefined1)((ushort)(sVar7 * 2) >> 8);
  if (sVar7 < 0) {
    uVar5 = 0xff;
  }
  DAT_0970 = uVar5;
  uVar6 = DAT_0900;
  uVar6 = FUN_bbcf(uVar6,&UNK_32ba);
  DAT_0978 = (char)(uVar6 >> 8);
  bVar1 = DAT_08be;
  DAT_08be = bVar1 & 0xfd;
  return;
}


/* Entry ab17 */

void FUN_ab17(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0892;
  if ((~bVar3 & 0x40) != 0) {
    bVar3 = DAT_0892;
    if ((~bVar3 & 2) != 0) {
      bVar3 = DAT_0890;
      DAT_0890 = bVar3 & 0x7f;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 | 0x80;
      uVar2 = DAT_0b64;
      bVar3 = (byte)(uVar2 + 1);
      DAT_0b64 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),
                          bVar3 - (0xfffe < uVar2));
      uVar1 = DAT_0a00;
      FUN_4fbf(&DAT_0a00);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    FUN_ae9a();
    bVar3 = DAT_0892;
    DAT_0892 = bVar3 | 0x40;
    bVar3 = DAT_0892;
    DAT_0892 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0892;
  if ((~bVar3 & 0x20) != 0) {
    bVar3 = DAT_0892;
    if ((~bVar3 & 2) != 0) {
      uVar1 = DAT_0a00;
      FUN_4fbf(&DAT_0a02);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    FUN_ae9a();
    bVar3 = DAT_0892;
    DAT_0892 = bVar3 | 0x20;
    bVar3 = DAT_0892;
    DAT_0892 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0892;
  if ((~bVar3 & 0x10) != 0) {
    bVar3 = DAT_0892;
    if ((~bVar3 & 2) != 0) {
      uVar1 = DAT_0a00;
      FUN_4fbf(&DAT_0a04);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    FUN_ae9a();
    bVar3 = DAT_0892;
    DAT_0892 = bVar3 | 0x10;
    bVar3 = DAT_0892;
    DAT_0892 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0892;
  if ((~bVar3 & 8) != 0) {
    bVar3 = DAT_0892;
    if ((~bVar3 & 2) != 0) {
      uVar1 = DAT_0b64._0_1_;
      FUN_4fbf(&DAT_0a06);
      return;
    }
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) == 0) {
      return;
    }
    bVar3 = DAT_00f0;
    DAT_00f0 = bVar3 & 0xf7;
    FUN_ae9a();
    bVar3 = DAT_0892;
    DAT_0892 = bVar3 | 8;
    bVar3 = DAT_0892;
    DAT_0892 = bVar3 & 0xfd;
  }
  bVar3 = DAT_0892;
  if ((~bVar3 & 4) != 0) {
    bVar3 = DAT_0892;
    if ((~bVar3 & 2) == 0) {
      bVar3 = DAT_00e9;
      if ((bVar3 & 0x10) != 0) {
        bVar3 = DAT_00f0;
        DAT_00f0 = bVar3 & 0xf7;
        FUN_ae9a();
        DAT_0892 = 0;
        bVar3 = DAT_0891;
        DAT_0891 = bVar3 & 0x7f;
      }
    }
    else {
      uVar1 = DAT_0b64._1_1_;
      FUN_4fbf(&DAT_0a07);
    }
  }
  return;
}


/* Entry ac02 */

void FUN_ac02(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0892;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      FUN_ae9a();
      bVar3 = DAT_0bf5;
      DAT_0bf5 = bVar3 & 0x7f;
      bVar3 = DAT_0892;
      DAT_0892 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bf4;
    DAT_0bf4 = bVar3 & 0x7f;
    bVar3 = DAT_0bf5;
    DAT_0bf5 = bVar3 | 0x80;
    uVar2 = DAT_0b64;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b64 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b1;
    FUN_4fbf(&DAT_0a20);
  }
  return;
}


/* Entry ac3c */

void FUN_ac3c(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0892;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      FUN_ae9a();
      bVar3 = DAT_0bf5;
      DAT_0bf5 = bVar3 & 0xbf;
      bVar3 = DAT_0892;
      DAT_0892 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bf4;
    DAT_0bf4 = bVar3 & 0xbf;
    bVar3 = DAT_0bf5;
    DAT_0bf5 = bVar3 | 0x40;
    uVar2 = DAT_0b64;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b64 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b2;
    FUN_4fbf(&DAT_0a21);
  }
  return;
}


/* Entry ac76 */

void FUN_ac76(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0892;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      FUN_ae9a();
      bVar3 = DAT_0bf5;
      DAT_0bf5 = bVar3 & 0xdf;
      bVar3 = DAT_0892;
      DAT_0892 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bf4;
    DAT_0bf4 = bVar3 & 0xdf;
    bVar3 = DAT_0bf5;
    DAT_0bf5 = bVar3 | 0x20;
    uVar2 = DAT_0b64;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b64 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b3;
    FUN_4fbf(&DAT_0a22);
  }
  return;
}


/* Entry acb0 */

void FUN_acb0(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0892;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      FUN_ae9a();
      bVar3 = DAT_0bf5;
      DAT_0bf5 = bVar3 & 0xef;
      bVar3 = DAT_0892;
      DAT_0892 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bf4;
    DAT_0bf4 = bVar3 & 0xef;
    bVar3 = DAT_0bf5;
    DAT_0bf5 = bVar3 | 0x10;
    uVar2 = DAT_0b64;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b64 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b4;
    FUN_4fbf(&DAT_0a23);
  }
  return;
}


/* Entry acea */

void FUN_acea(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0892;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      FUN_ae9a();
      bVar3 = DAT_0bf5;
      DAT_0bf5 = bVar3 & 0xf7;
      bVar3 = DAT_0892;
      DAT_0892 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bf4;
    DAT_0bf4 = bVar3 & 0xf7;
    bVar3 = DAT_0bf5;
    DAT_0bf5 = bVar3 | 8;
    uVar2 = DAT_0b64;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b64 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08ba;
    FUN_4fbf(&DAT_0a24);
  }
  return;
}


/* Entry ad24 */

void FUN_ad24(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0892;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      FUN_ae9a();
      bVar3 = DAT_0bf5;
      DAT_0bf5 = bVar3 & 0xfb;
      bVar3 = DAT_0892;
      DAT_0892 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bf4;
    DAT_0bf4 = bVar3 & 0xfb;
    bVar3 = DAT_0bf5;
    DAT_0bf5 = bVar3 | 4;
    uVar2 = DAT_0b64;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b64 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08bb;
    FUN_4fbf(&DAT_0a25);
  }
  return;
}


/* Entry ad5e */

void FUN_ad5e(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0892;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      FUN_ae9a();
      bVar3 = DAT_0bf5;
      DAT_0bf5 = bVar3 & 0xfd;
      bVar3 = DAT_0892;
      DAT_0892 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bf4;
    DAT_0bf4 = bVar3 & 0xfd;
    bVar3 = DAT_0bf5;
    DAT_0bf5 = bVar3 | 2;
    uVar2 = DAT_0b64;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b64 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08bc;
    FUN_4fbf(&DAT_0a26);
  }
  return;
}


/* Entry ad98 */

void FUN_ad98(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0892;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      FUN_ae9a();
      bVar3 = DAT_0bf5;
      DAT_0bf5 = bVar3 & 0xfe;
      bVar3 = DAT_0892;
      DAT_0892 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0bf4;
    DAT_0bf4 = bVar3 & 0xfe;
    bVar3 = DAT_0bf5;
    DAT_0bf5 = bVar3 | 1;
    uVar2 = DAT_0b64;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b64 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08bd;
    FUN_4fbf(&DAT_0a27);
  }
  return;
}


/* Entry add2 */

void FUN_add2(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0892;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      FUN_ae9a();
      bVar3 = DAT_0c0b;
      DAT_0c0b = bVar3 & 0x7f;
      bVar3 = DAT_0892;
      DAT_0892 = bVar3 & 0xfd;
    }
  }
  else {
    bVar3 = DAT_0c0a;
    DAT_0c0a = bVar3 & 0x7f;
    bVar3 = DAT_0c0b;
    DAT_0c0b = bVar3 | 0x80;
    uVar2 = DAT_0b64;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b64 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b6;
    FUN_4fbf(&DAT_0a28);
  }
  return;
}


/* Entry ae0c */

void FUN_ae0c(void)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = DAT_0892;
  if ((~bVar1 & 2) == 0) {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) != 0) {
      bVar1 = DAT_00f0;
      DAT_00f0 = bVar1 & 0xf7;
      FUN_ae9a();
      bVar1 = DAT_0c0b;
      DAT_0c0b = bVar1 & 0xbf;
      bVar1 = DAT_0892;
      DAT_0892 = bVar1 & 0xfd;
    }
  }
  else {
    bVar1 = DAT_0c0a;
    DAT_0c0a = bVar1 & 0xbf;
    bVar1 = DAT_0c0b;
    DAT_0c0b = bVar1 | 0x40;
    uVar2 = DAT_0bb2;
    FUN_4fbf(uVar2,&DAT_0a30);
  }
  return;
}


/* Entry ae39 */

void FUN_ae39(void)

{
  byte bVar1;
  
  bVar1 = DAT_0892;
  if ((~bVar1 & 2) == 0) {
    bVar1 = DAT_00e9;
    if ((bVar1 & 0x10) == 0) {
      return;
    }
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 & 0xf7;
  }
  else {
    bVar1 = DAT_0c0a;
    DAT_0c0a = bVar1 & 0xfb;
    bVar1 = DAT_0c0b;
    DAT_0c0b = bVar1 | 4;
  }
  bVar1 = DAT_0d2e;
  if (bVar1 < 0xb) {
    FUN_4fbf((short)&DAT_0a50 + (ushort)bVar1);
    bVar1 = DAT_0d2e;
    DAT_0d2e = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    FUN_5570();
    FUN_5642();
    bVar1 = DAT_0d21;
    DAT_0d21 = bVar1 | 0x40;
    FUN_ae9a();
    bVar1 = DAT_0c0b;
    DAT_0c0b = bVar1 & 0xfb;
    bVar1 = DAT_0892;
    DAT_0892 = bVar1 & 0xfd;
  }
  return;
}


/* Entry ae9a */

short FUN_ae9a(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  
  DAT_00d8 = 0x50;
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 | 8;
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = 8;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  uVar1 = DAT_00db;
  bVar2 = DAT_00dd;
  DAT_00dd = 0;
  do {
    bVar3 = DAT_00db;
  } while ((bVar3 & 0x80) == 0);
  bVar3 = DAT_00f0;
  DAT_00f0 = bVar3 & 0xf7;
  return (ushort)bVar2 << 8;
}


/* Entry aebd */

void FUN_aebd(void)

{
  byte bVar1;
  
  bVar1 = DAT_0887;
  DAT_0887 = bVar1 & 0xfb;
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 | 0x40;
  FUN_afd3();
  FUN_aed0();
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 & 0xbf;
  return;
}


/* Entry aed0 */

void FUN_aed0(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  
  bVar4 = DAT_08e4;
  bVar3 = DAT_0d5d;
  if (bVar3 < bVar4) {
    uVar5 = 2;
  }
  else {
    bVar3 = DAT_0d5e;
    if (bVar4 < bVar3) {
      uVar5 = 4;
    }
    else {
      uVar5 = 1;
    }
  }
  DAT_0d55 = uVar5;
  cVar2 = DAT_0d56;
  cVar1 = DAT_0d55;
  if (cVar2 == cVar1) {
    cVar1 = DAT_0d55;
    if (cVar1 == '\x01') goto LAB_af27;
  }
  else if (((char)(cVar2 - cVar1) == '\x01') || ((char)(cVar2 - cVar1) == '\x03')) {
LAB_af27:
    DAT_0d64 = 0;
    DAT_0d65 = 0;
    DAT_0d62 = 0;
    DAT_0d63 = 0;
    bVar4 = DAT_0d59;
    DAT_0d59 = bVar4 & 199;
  }
  else {
    DAT_0d64 = 0;
    DAT_0d65 = 0;
    DAT_0d62 = 0;
    DAT_0d63 = 0;
    bVar4 = DAT_0d59;
    DAT_0d59 = bVar4 & 0x87 | 0x80;
    DAT_0d66 = 0;
    DAT_0d67 = 0;
    DAT_0d61 = DAT_45ae;
  }
  bVar4 = DAT_08e4;
  bVar3 = DAT_0d5f;
  if ((bVar3 < bVar4) || (bVar3 = DAT_0d60, bVar4 < bVar3)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  DAT_0d57 = uVar5;
  bVar3 = DAT_0d58;
  bVar4 = DAT_0d57;
  if (bVar3 < bVar4) {
    DAT_0d66 = 0;
    bVar4 = DAT_0d59;
    DAT_0d59 = bVar4 & 0x7f;
    bVar4 = DAT_0d59;
    DAT_0d59 = bVar4 & 0xbf;
    DAT_0d67 = 0xc0;
    DAT_0d61 = DAT_45ae;
  }
  uVar5 = DAT_0d57;
  DAT_0d58 = uVar5;
  bVar4 = DAT_0d55;
  DAT_0d56 = bVar4;
  bVar3 = DAT_0d59;
  if ((bVar4 & 4) == 0) {
    if (((bVar4 & 2) != 0) && ((bVar3 & 0x20) == 0)) {
      bVar4 = DAT_0d57;
      if ((~bVar4 & 1) == 0) {
        bVar4 = DAT_0001;
        bVar3 = DAT_0d67;
        bVar4 = bVar4 & 0x3f | bVar3 | 0x80;
      }
      else {
        bVar4 = DAT_0001;
        bVar4 = bVar4 & 0x3f | 0x80;
      }
      goto LAB_afce;
    }
  }
  else if ((bVar3 & 0x20) == 0) {
    bVar4 = DAT_0d57;
    if ((~bVar4 & 1) == 0) {
      bVar4 = DAT_0001;
      bVar3 = DAT_0d67;
      bVar4 = bVar4 & 0x3f | bVar3 | 0x40;
    }
    else {
      bVar4 = DAT_0001;
      bVar4 = bVar4 & 0x3f | 0x40;
    }
    goto LAB_afce;
  }
  bVar4 = DAT_0001;
  bVar4 = bVar4 & 0x3f | 0xc0;
LAB_afce:
  DAT_0001 = bVar4;
  return;
}


/* Entry afd3 */

void FUN_afd3(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  
  cVar3 = DAT_0d66;
  DAT_0d66 = cVar3 + '\x01';
  bVar1 = DAT_0d59;
  if ((~bVar1 & 0x80) == 0) {
    bVar1 = DAT_0d59;
    if ((~bVar1 & 0x40) == 0) {
      bVar1 = DAT_0d66;
      if (DAT_45af <= bVar1) {
        DAT_0d66 = 0;
        DAT_0d67 = 0;
        bVar1 = DAT_0d59;
        DAT_0d59 = bVar1 & 0xbf;
      }
    }
    else {
      bVar2 = DAT_0d66;
      bVar1 = DAT_0d61;
      if (bVar1 <= bVar2) {
        DAT_0d66 = 0;
        DAT_0d67 = 0xc0;
        bVar1 = DAT_0d59;
        DAT_0d59 = bVar1 | 0x40;
        bVar1 = DAT_0d61;
        cVar3 = bVar1 + DAT_45b0;
        if (CARRY1(bVar1,DAT_45b0)) {
          cVar3 = -1;
        }
        DAT_0d61 = cVar3;
      }
    }
  }
  else {
    bVar1 = DAT_0d66;
    if (DAT_45b1 <= bVar1) {
      DAT_0d66 = 0;
      DAT_0d67 = 0;
      bVar1 = DAT_0d59;
      DAT_0d59 = bVar1 | 0x80;
    }
  }
  return;
}


/* Entry b02b */

void FUN_b02b(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  ushort uVar5;
  
  bVar1 = DAT_08be;
  DAT_08be = bVar1 | 1;
  bVar1 = DAT_0882;
  DAT_0882 = bVar1 & 0xf7;
  bVar1 = DAT_0881;
  if ((~bVar1 & 0x10) == 0) {
    cVar4 = '\0';
  }
  else {
    bVar1 = DAT_0b2d;
    cVar4 = (bVar1 + 1) - (0xfe < bVar1);
  }
  DAT_0b2d = cVar4;
  bVar1 = DAT_099f;
  if ((bVar1 & 0x20) != 0) {
    bVar1 = DAT_09aa;
    DAT_09aa = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_09ba;
  if ((bVar1 & 8) != 0) {
    bVar1 = DAT_09ce;
    DAT_09ce = (bVar1 + 1) - (0xfe < bVar1);
  }
  uVar2 = DAT_0914;
  DAT_0bba = uVar2;
  DAT_0bbc = 0x406a;
  uVar5 = FUN_c122('j');
  DAT_0a94 = uVar5;
  uVar2 = DAT_0920._0_1_;
  DAT_0bba = uVar2;
  DAT_0bbc = 0x407a;
  uVar5 = FUN_c122('z');
  DAT_0a96 = uVar5;
  uVar3 = DAT_0a96;
  RAM0e62 = uVar3;
  uVar3 = DAT_0a94;
  RAM0e64 = uVar3;
  uVar5 = FUN_bcc4(&UNK_4081,'\x0f');
  DAT_0a90 = (char)(uVar5 + 0x80 >> 8);
  uVar5 = FUN_bbaa((uchar)(uVar5 + 0x80),&UNK_4057);
  DAT_0a91 = (char)(uVar5 >> 8);
  uVar5 = FUN_bbaa((uchar)uVar5,&UNK_32ef);
  DAT_097b = (char)(uVar5 >> 8);
  uVar5 = FUN_bbaa((uchar)uVar5,&UNK_34e1);
  DAT_0a0f = (char)(uVar5 >> 8);
  if (DAT_3866 == '\x02') {
    bVar1 = DAT_0884;
    DAT_0884 = bVar1 | 0x40;
  }
  else {
    bVar1 = DAT_0884;
    DAT_0884 = bVar1 & 0xbf;
  }
  uVar5 = DAT_0900;
  uVar5 = FUN_bbcf(uVar5,&UNK_41d4);
  DAT_0d1e = (char)(uVar5 >> 8);
  bVar1 = DAT_08be;
  DAT_08be = bVar1 & 0xfe;
  return;
}


/* Entry b600 */

void FUN_b600(void)

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
  
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 | 1;
  bVar1 = DAT_0880;
  if ((bVar1 & 1) != 0) {
    bVar1 = DAT_0b91;
    DAT_0b91 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0880;
  if (((bVar1 & 1) == 0) || (bVar1 = DAT_0883, (~bVar1 & 4) == 0)) {
    DAT_0bcc = 0;
  }
  else {
    bVar1 = DAT_0bcc;
    DAT_0bcc = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0883;
  DAT_0883 = bVar1 & 0xfb;
  bVar1 = DAT_0881;
  if ((~bVar1 & 0x10) == 0) {
    DAT_09b3 = 0;
  }
  else {
    bVar1 = DAT_09b3;
    DAT_09b3 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b7;
  if ((bVar1 & 0x40) == 0) {
    DAT_0b75 = 0;
    bVar1 = DAT_0b82;
    DAT_0b82 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b82 = 0;
    bVar1 = DAT_0b75;
    DAT_0b75 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0c20;
  if ((bVar1 & 0x80) == 0) {
LAB_b69c:
    DAT_0b76 = 0;
    DAT_0b83 = 0;
    bVar1 = DAT_08b7;
    DAT_08b7 = bVar1 & 0xfb;
    bVar1 = DAT_08b7;
    DAT_08b7 = bVar1 & 0xfd;
  }
  else {
    bVar1 = DAT_08b7;
    if ((bVar1 & 4) == 0) {
      bVar1 = DAT_08b7;
      if ((bVar1 & 2) == 0) goto LAB_b69c;
      DAT_0b76 = 0;
      bVar1 = DAT_0b83;
      DAT_0b83 = (bVar1 + 1) - (0xfe < bVar1);
    }
    else {
      DAT_0b83 = 0;
      bVar1 = DAT_0b76;
      DAT_0b76 = (bVar1 + 1) - (0xfe < bVar1);
    }
  }
  bVar1 = DAT_08b7;
  if ((bVar1 & 0x80) == 0) {
    DAT_0b77 = 0;
    bVar1 = DAT_0b84;
    DAT_0b84 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b84 = 0;
    bVar1 = DAT_0b77;
    DAT_0b77 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b7;
  if ((bVar1 & 0x20) == 0) {
    DAT_0b79 = 0;
    bVar1 = DAT_0b86;
    DAT_0b86 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b86 = 0;
    bVar1 = DAT_0b79;
    DAT_0b79 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b7;
  if ((bVar1 & 0x10) == 0) {
    DAT_0b78 = 0;
    bVar1 = DAT_0b85;
    DAT_0b85 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b85 = 0;
    bVar1 = DAT_0b78;
    DAT_0b78 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b8;
  if ((bVar1 & 4) == 0) {
    DAT_0be8 = 0;
    bVar1 = DAT_0be9;
    DAT_0be9 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0be9 = 0;
    bVar1 = DAT_0be8;
    DAT_0be8 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b8;
  if (((((~bVar1 & 2) == 0) || (bVar1 = DAT_088f, (~bVar1 & 0x80) == 0)) ||
      (bVar1 = DAT_0881, (~bVar1 & 0x10) == 0)) || (cVar2 = DAT_0bec, cVar2 == '\0')) {
    DAT_0bef = 0;
  }
  else {
    bVar1 = DAT_0bef;
    DAT_0bef = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b9;
  if ((bVar1 & 0x80) == 0) {
    DAT_0b7f = 0;
    bVar1 = DAT_0b89;
    DAT_0b89 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b89 = 0;
  }
  bVar1 = DAT_08b9;
  if ((bVar1 & 0x40) == 0) {
    DAT_0b80 = 0;
    bVar1 = DAT_0b8a;
    DAT_0b8a = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0b8a = 0;
    bVar1 = DAT_0b80;
    DAT_0b80 = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_08b9;
  if ((bVar1 & 0x20) == 0) {
    DAT_0bf1 = 0;
    bVar1 = DAT_0bf2;
    DAT_0bf2 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    DAT_0bf2 = 0;
    bVar1 = DAT_0bf1;
    DAT_0bf1 = (bVar1 + 1) - (0xfe < bVar1);
  }
  cVar2 = DAT_0d96;
  if (((cVar2 == -0x80) || (bVar1 = DAT_08a3, (~bVar1 & 4) == 0)) ||
     (bVar1 = DAT_08b4, (~bVar1 & 0x80) == 0)) goto LAB_b855;
  if (DAT_462d != -0x80) {
    bVar1 = DAT_08e3;
    if ((DAT_4662 <= bVar1) || (bVar1 <= DAT_4663)) {
      bVar1 = DAT_08b8;
      if ((bVar1 & 8) == 0) {
        bVar1 = DAT_08b8;
        DAT_08b8 = bVar1 | 8;
        DAT_0b44 = 0;
      }
      else {
        bVar1 = DAT_0b44;
        bVar1 = (bVar1 + 1) - (0xfe < bVar1);
        DAT_0b44 = bVar1;
        bVar8 = DAT_0de6;
        if ((bVar8 <= bVar1) && (bVar1 = DAT_08b3, (~bVar1 & 0x10) != 0)) {
          bVar1 = DAT_08b3;
          DAT_08b3 = bVar1 | 0x10;
          bVar1 = DAT_0bf4;
          DAT_0bf4 = bVar1 | 0x20;
          bVar1 = DAT_08bc;
          if ((~bVar1 & 0x10) != 0) {
            bVar1 = DAT_08bc;
            DAT_08bc = bVar1 | 0x10;
            bVar1 = DAT_0bf4;
            DAT_0bf4 = bVar1 | 2;
          }
        }
      }
      goto LAB_b855;
    }
    bVar1 = DAT_08b8;
    if ((~bVar1 & 8) == 0) {
      bVar1 = DAT_08b8;
      DAT_08b8 = bVar1 & 0xf7;
      DAT_0b44 = 0;
      goto LAB_b855;
    }
    bVar1 = DAT_0b44;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b44 = bVar1;
    bVar8 = DAT_0de6;
    if (bVar1 < bVar8) goto LAB_b855;
  }
  bVar1 = DAT_08b3;
  if ((bVar1 & 0x10) != 0) {
    bVar1 = DAT_08b3;
    DAT_08b3 = bVar1 & 0xef;
    bVar1 = DAT_0bf4;
    DAT_0bf4 = bVar1 | 0x20;
  }
LAB_b855:
  cVar2 = DAT_0d89;
  if ((((cVar2 != -0x80) && (bVar1 = DAT_08a3, (~bVar1 & 4) != 0)) &&
      (bVar1 = DAT_08b4, (~bVar1 & 0x80) != 0)) && (bVar1 = DAT_0bcc, DAT_45da <= bVar1)) {
    bVar1 = DAT_08b1;
    if ((~bVar1 & 0x40) != 0) {
      bVar1 = DAT_08b1;
      DAT_08b1 = bVar1 | 0x40;
      bVar1 = DAT_0bf4;
      DAT_0bf4 = bVar1 | 0x80;
    }
    bVar1 = DAT_08ba;
    if ((~bVar1 & 0x40) != 0) {
      bVar1 = DAT_08ba;
      DAT_08ba = bVar1 | 0x40;
      bVar1 = DAT_0bf4;
      DAT_0bf4 = bVar1 | 8;
    }
  }
  cVar2 = DAT_0d8d;
  if (((cVar2 != -0x80) && (bVar1 = DAT_08b1, (~bVar1 & 8) != 0)) &&
     ((bVar1 = DAT_08a3, (~bVar1 & 4) != 0 && (bVar1 = DAT_08b4, (~bVar1 & 0x80) != 0)))) {
    uVar9 = DAT_0920;
    uVar3 = DAT_0bb4;
    if (uVar3 <= uVar9) {
      DAT_0bb4 = uVar9;
      bVar1 = DAT_08a0;
      DAT_08a0 = bVar1 | 0x80;
    }
    uVar3 = DAT_0bb4;
    uVar9 = uVar3 - DAT_45e2;
    if (uVar3 < DAT_45e2) {
      uVar9 = 0;
    }
    uVar3 = DAT_0920;
    if (uVar3 < uVar9) {
      sVar4 = DAT_0920;
      DAT_0bb4 = sVar4 + DAT_45e2;
      bVar1 = DAT_08a0;
      DAT_08a0 = bVar1 & 0x7f;
    }
    bVar1 = DAT_08a0;
    if ((~bVar1 & 0x80) == 0) {
      bVar1 = DAT_08a0;
      bVar1 = ~bVar1;
    }
    else {
      bVar1 = DAT_08a0;
    }
    if (((bVar1 & 0x40) != 0) && (bVar1 = DAT_0bb6, bVar1 < DAT_45e4)) {
      DAT_0bb6 = (bVar1 + 1) - (0xfe < bVar1);
    }
    uVar3 = DAT_0bd2;
    uVar7 = DAT_0bd4;
    uVar9 = uVar3 - uVar7;
    if (uVar3 < uVar7) {
      uVar9 = CONCAT11((~(byte)(uVar9 >> 8) + 1) - ((char)-(char)uVar9 != '\0'),-(char)uVar9);
    }
    if (DAT_45e6 <= uVar9) {
      bVar1 = DAT_0bb6;
      if ((bVar1 < DAT_45e4) && (bVar1 = DAT_08b1, (bVar1 & 4) != 0)) {
        bVar1 = DAT_08b1;
        DAT_08b1 = bVar1 & 0xfb;
        bVar1 = DAT_0bf4;
        DAT_0bf4 = bVar1 | 0x80;
        bVar1 = DAT_08b1;
        if (((~bVar1 & 8) != 0) && (bVar1 = DAT_08b3, (~bVar1 & 8) != 0)) {
          bVar1 = DAT_0889;
          DAT_0889 = bVar1 | 2;
          DAT_0bae = 0;
          uVar5 = DAT_0a8d;
          DAT_0bad = uVar5;
          DAT_0baf = uVar5;
        }
      }
      DAT_0bb6 = 0;
    }
    bVar1 = DAT_0bb6;
    if (bVar1 == DAT_45e4) {
      bVar1 = DAT_08b1;
      if ((~bVar1 & 4) != 0) {
        bVar1 = DAT_08b1;
        DAT_08b1 = bVar1 | 4;
        bVar1 = DAT_0bf4;
        DAT_0bf4 = bVar1 | 0x80;
        bVar1 = DAT_08ba;
        if ((~bVar1 & 4) != 0) {
          bVar1 = DAT_08ba;
          DAT_08ba = bVar1 | 4;
          bVar1 = DAT_0bf4;
          DAT_0bf4 = bVar1 | 8;
        }
      }
      bVar1 = DAT_08b8;
      DAT_08b8 = bVar1 | 1;
      bVar1 = DAT_0889;
      DAT_0889 = bVar1 & 0xfd;
      DAT_0bad = 0;
    }
    bVar1 = DAT_08a0;
    if ((~bVar1 & 0x80) == 0) {
      bVar1 = DAT_08a0;
      DAT_08a0 = bVar1 | 0x40;
    }
    else {
      bVar1 = DAT_08a0;
      DAT_08a0 = bVar1 & 0xbf;
    }
    uVar6 = DAT_0bd2;
    DAT_0bd4 = uVar6;
  }
  cVar2 = DAT_0918;
  if (((cVar2 == '\n') && (bVar1 = DAT_0880, (~bVar1 & 1) != 0)) && (bVar1 = DAT_0bf0, bVar1 < 0x10)
     ) {
    bVar1 = DAT_0baa;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0baa = bVar1;
    if (0x1d < bVar1) {
      bVar1 = DAT_088d;
      DAT_088d = bVar1 | 0x10;
      FUN_5019();
      return;
    }
  }
  else {
    DAT_0baa = 0;
  }
  bVar1 = DAT_08a6;
  if (((~bVar1 & 0x80) != 0) && (bVar1 = DAT_08a5, (bVar1 & 0x80) != 0)) {
    bVar1 = DAT_0b66;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b66 = bVar1;
    if (DAT_45d0 <= bVar1) {
      bVar1 = DAT_08a6;
      DAT_08a6 = bVar1 | 0x80;
    }
  }
  cVar2 = DAT_0e4d;
  if ((cVar2 != -0x80) && (bVar1 = DAT_0d1f, (~bVar1 & 0x80) != 0)) {
    bVar1 = DAT_0d28;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0d28 = bVar1;
    if (DAT_461f <= bVar1) {
      bVar1 = DAT_0d21;
      DAT_0d21 = bVar1 | 1;
    }
  }
  cVar2 = DAT_0e4d;
  if ((((cVar2 != -0x80) && (bVar1 = DAT_0d1f, (~bVar1 & 0x80) != 0)) &&
      (bVar1 = DAT_0d20, (bVar1 & 8) != 0)) && (bVar1 = DAT_0d20, (~bVar1 & 4) != 0)) {
    bVar1 = DAT_0d26;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0d26 = bVar1;
    if (DAT_461d <= bVar1) {
      bVar1 = DAT_0d20;
      DAT_0d20 = bVar1 | 4;
      bVar1 = DAT_0d27;
      bVar1 = (bVar1 + 1) - (0xfe < bVar1);
      DAT_0d27 = bVar1;
      if (DAT_461e <= bVar1) {
        bVar1 = DAT_0d21;
        DAT_0d21 = bVar1 | 1;
      }
    }
  }
  bVar1 = DAT_0882;
  DAT_0882 = bVar1 & 0xfd;
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 & 0xfe;
  return;
}


/* Entry ba36 */

void FUN_ba36(void)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar6;
  undefined2 uVar5;
  
  bVar6 = DAT_08c1;
  DAT_08c1 = bVar6 | 0x20;
  bVar6 = DAT_08b8;
  if ((bVar6 & 0x40) == 0) {
    DAT_0b7a = 0;
  }
  else {
    bVar6 = DAT_0b7a;
    DAT_0b7a = (bVar6 + 1) - (0xfe < bVar6);
  }
  bVar6 = DAT_08b8;
  if ((bVar6 & 0x20) == 0) {
    DAT_0b7b = 0;
  }
  else {
    bVar6 = DAT_0b7b;
    DAT_0b7b = (bVar6 + 1) - (0xfe < bVar6);
  }
  bVar6 = DAT_08b8;
  if ((bVar6 & 0x10) == 0) {
    DAT_0b7c = 0;
  }
  else {
    bVar6 = DAT_0b7c;
    DAT_0b7c = (bVar6 + 1) - (0xfe < bVar6);
  }
  bVar6 = DAT_08b9;
  if ((bVar6 & 0x80) == 0) {
    DAT_0b7f = 0;
  }
  else {
    DAT_0b89 = 0;
    bVar6 = DAT_0b7f;
    DAT_0b7f = (bVar6 + 1) - (0xfe < bVar6);
  }
  bVar6 = DAT_08b9;
  if ((bVar6 & 0x10) == 0) {
    DAT_0b81 = 0;
  }
  else {
    DAT_0b8b = 0;
    bVar6 = DAT_0b81;
    DAT_0b81 = (bVar6 + 1) - (0xfe < bVar6);
  }
  bVar6 = DAT_08b9;
  if ((bVar6 & 8) == 0) {
    DAT_0b8b = 0;
  }
  else {
    DAT_0b81 = 0;
    bVar6 = DAT_0b8b;
    DAT_0b8b = (bVar6 + 1) - (0xfe < bVar6);
  }
  bVar6 = DAT_0881;
  if ((~bVar6 & 0x10) == 0) {
    DAT_0cd0 = 0;
  }
  else {
    bVar6 = DAT_0cd0;
    DAT_0cd0 = (bVar6 + 1) - (0xfe < bVar6);
  }
  bVar6 = DAT_088f;
  if ((((bVar6 & 0x80) == 0) || (bVar6 = DAT_0aee, DAT_45b5 <= bVar6)) ||
     (bVar6 = DAT_0881, (~bVar6 & 0x10) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar3 = DAT_0d6e;
    bVar6 = (byte)(uVar3 + 1);
    uVar5 = CONCAT11((char)(uVar3 + 1 >> 8) - (bVar6 < (0xfffe < uVar3)),bVar6 - (0xfffe < uVar3));
  }
  DAT_0d6e = uVar5;
  bVar6 = DAT_088f;
  if ((((~bVar6 & 0x80) == 0) || (cVar1 = DAT_0bec, cVar1 != '\0')) ||
     (bVar6 = DAT_0881, (~bVar6 & 0x10) == 0)) {
    bVar6 = DAT_0d71;
    DAT_0d71 = bVar6 & 0xf7;
  }
  else {
    bVar6 = DAT_0d71;
    DAT_0d71 = bVar6 | 8;
  }
  sVar2 = DAT_0d6c;
  if (((sVar2 == 0) || (DAT_45b5 == 0)) || (bVar6 = DAT_0881, (~bVar6 & 0x20) == 0)) {
    bVar6 = DAT_0d71;
    DAT_0d71 = bVar6 & 0x7f;
    DAT_0d6e = 0;
  }
  else {
    uVar4 = DAT_0d6e;
    uVar3 = DAT_0d6c;
    if (((((uVar3 <= uVar4) && (bVar6 = DAT_0d71, (~bVar6 & 0x40) != 0)) &&
         (bVar6 = DAT_08b3, (~bVar6 & 8) != 0)) &&
        ((bVar6 = DAT_0d71, (~bVar6 & 8) != 0 &&
         (bVar6 = DAT_0d71, DAT_0d71 = bVar6 | 0x80, cVar1 = DAT_0d9c, cVar1 != -0x80)))) &&
       (bVar6 = DAT_08b4, (~bVar6 & 0x40) != 0)) {
      bVar6 = DAT_08b4;
      DAT_08b4 = bVar6 | 0x40;
      bVar6 = DAT_0bf4;
      DAT_0bf4 = bVar6 | 0x10;
      bVar6 = DAT_08bd;
      if ((~bVar6 & 0x40) != 0) {
        bVar6 = DAT_08bd;
        DAT_08bd = bVar6 | 0x40;
        bVar6 = DAT_0bf4;
        DAT_0bf4 = bVar6 | 1;
      }
    }
  }
  bVar6 = DAT_0887;
  DAT_0887 = bVar6 & 0x7f;
  bVar6 = DAT_08c1;
  DAT_08c1 = bVar6 & 0xdf;
  return;
}


/* Entry bb7d */

void FUN_bb7d(void)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 | 0x10;
  bVar1 = DAT_08b8;
  if ((((bVar1 & 2) == 0) || (bVar1 = DAT_088f, (~bVar1 & 0x80) == 0)) ||
     (cVar2 = DAT_0bec, cVar2 != '\0')) {
    DAT_0bee = 0;
  }
  else {
    bVar1 = DAT_0bee;
    DAT_0bee = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_0887;
  DAT_0887 = bVar1 & 0xbf;
  bVar1 = DAT_08c1;
  DAT_08c1 = bVar1 & 0xef;
  return;
}


/* Entry bbaa */

ushort FUN_bbaa(uchar input_raw,byte *table)

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


/* Entry bbb8 */

ushort FUN_bbb8(ushort index_q8,byte *table)

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


/* Entry bbbe */

undefined2 FUN_bbbe(undefined2 param_1,short param_2)

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


/* Entry bbcf */

ushort FUN_bbcf(ushort input_raw,byte *table)

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
  uVar3 = FUN_bc20(uVar3,*(ushort *)(table + 4));
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


/* Entry bbf9 */

ushort FUN_bbf9(ushort value,byte *scale_address)

{
  return (ushort)((uint)*scale_address * (uint)value >> 8);
}


/* Entry bc04 */

ushort prefix_candidate_c227(ushort value,byte *scale_address)

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


/* Entry bc20 */

ushort FUN_bc20(ushort value,ushort factor)

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


/* Entry bc44 */

undefined2 candidate_unreferenced_bc44(undefined2 param_1,byte *param_2)

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


/* Entry bc69 */

short FUN_bc69(undefined2 param_1,short param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  byte *table;
  
  DAT_0e67._0_1_ = (char)param_1;
  cVar4 = (char)((ushort)param_1 >> 8);
  DAT_0e65._1_1_ = cVar4;
  bVar5 = DAT_0e65._1_1_;
  sVar7 = param_2;
  for (; bVar1 = DAT_0e63._1_1_, bVar5 <= bVar1; bVar5 = bVar5 + cVar3) {
    sVar7 = (ushort)(byte)(cVar4 * (char)param_1) + sVar7;
    cVar3 = DAT_0e65._1_1_;
  }
  cVar4 = DAT_0e65._1_1_;
  DAT_0e65._1_1_ = bVar5 - cVar4;
  cVar4 = DAT_0e63._1_1_;
  cVar3 = DAT_0e65._1_1_;
  bVar5 = DAT_0e67._0_1_;
  table = (byte *)(((ushort)(byte)(cVar4 - cVar3) * (ushort)bVar5 & 0xff) + sVar7);
  uVar6 = RAM0e62;
  uVar6 = FUN_bbb8(uVar6,table);
  sVar7 = uVar6 + 0x80;
  cVar4 = DAT_0e65._0_1_;
  if (cVar4 != '\0') {
    DAT_0e65._1_1_ = (char)((ushort)sVar7 >> 8);
    bVar5 = DAT_0e67._0_1_;
    uVar6 = RAM0e62;
    uVar6 = FUN_bbb8(uVar6,table + bVar5);
    DAT_0e67._0_1_ = (char)(uVar6 + 0x80 >> 8);
    uVar2 = DAT_0e65._0_1_;
    sVar7 = FUN_bbbe(&DAT_0e63,param_2);
    sVar7 = sVar7 + 0x80;
  }
  return sVar7;
}


/* Entry bcc4 */

ushort FUN_bcc4(byte *table_bias,uchar columns)

{
  byte bVar1;
  char cVar2;
  byte fraction;
  short sVar3;
  ushort uVar4;
  byte *table_bias_00;
  
  RAM0e66 = table_bias;
  bVar1 = DAT_0e62;
  sVar3 = RAM0e66;
  fraction = DAT_0e63._1_1_;
  table_bias_00 = (byte *)((ushort)fraction + (ushort)bVar1 * (ushort)columns + sVar3);
  uVar4 = prefix_candidate_c372(fraction,table_bias_00);
  cVar2 = DAT_0e63._0_1_;
  if (cVar2 == '\0') {
    RAM0e6c = uVar4;
    uVar4 = RAM0e6c;
  }
  else {
    DAT_0e65._1_1_ = (char)(uVar4 + 0x80 >> 8);
    uVar4 = prefix_candidate_c372(columns,table_bias_00 + columns);
    DAT_0e67._0_1_ = (char)(uVar4 + 0x80 >> 8);
    uVar4 = prefix_candidate_c372((uchar)(uVar4 + 0x80),(byte *)&DAT_0e63);
  }
  return uVar4;
}


/* Entry bd09 */

ushort prefix_candidate_c372(uchar fraction,byte *table_bias)

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


/* Entry bd1d */

short prefix_candidate_c386(undefined2 param_1,byte *param_2)

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


/* Entry bd57 */

short candidate_unreferenced_bd57(ushort param_1,ushort *param_2)

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
  DAT_0e9d = (short)(uVar2 >> 0x10) << 1;
  sVar4 = DAT_0e9d;
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


/* Entry bd79 */

ushort prefix_candidate_c3e2(ushort fraction,byte *table_bias)

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


/* Entry bd9e */

undefined2 FUN_bd9e(ushort param_1,ushort param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  
  RAM0e62 = param_2;
  uVar1 = RAM0e62;
  if (param_1 < uVar1) {
    return 0;
  }
  RAM0e64 = param_1 / param_2;
  uVar2 = RAM0e62;
  uVar2 = RAM0e64;
  return uVar2;
}


/* Entry bdb9 */

void candidate_unreferenced_bdb9(ushort *param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  byte *table_bias;
  
  uVar6 = DAT_0ea4;
  if (param_1[8] <= uVar6) {
    uVar6 = param_1[8];
  }
  if (param_1[6] < uVar6) {
    uVar7 = uVar6 + param_1[6] >> 1;
    uVar5 = CONCAT11((byte)(uVar7 >> 8) | CARRY2(uVar6,param_1[6]) << 7,(char)uVar7);
    uVar6 = param_1[7] + param_1[6] >> 1;
    DAT_0e99 = CONCAT11((byte)(uVar6 >> 8) | CARRY2(param_1[7],param_1[6]) << 7,(char)uVar6);
    uVar7 = DAT_0e99;
    uVar6 = uVar5 - uVar7;
    if (uVar7 <= uVar5) {
      uVar6 = uVar6 >> 1;
    }
    sVar3 = DAT_0e99;
    uVar6 = uVar6 + sVar3;
  }
  uVar7 = uVar6 - param_1[5];
  if (uVar6 < param_1[5]) {
    uVar7 = 0;
  }
  DAT_0e95 = (short)((uint)param_1[9] * (uint)uVar7);
  DAT_0e93._0_1_ = (char)((uint)param_1[9] * (uint)uVar7 >> 0x10);
  uVar6 = DAT_0ea6;
  if (param_1[3] <= uVar6) {
    uVar6 = param_1[3];
  }
  if (param_1[1] < uVar6) {
    uVar7 = uVar6 + param_1[1] >> 1;
    uVar5 = CONCAT11((byte)(uVar7 >> 8) | CARRY2(uVar6,param_1[1]) << 7,(char)uVar7);
    uVar6 = param_1[2] + param_1[1] >> 1;
    DAT_0e99 = CONCAT11((byte)(uVar6 >> 8) | CARRY2(param_1[2],param_1[1]) << 7,(char)uVar6);
    uVar7 = DAT_0e99;
    uVar6 = uVar5 - uVar7;
    if (uVar7 <= uVar5) {
      uVar6 = uVar6 >> 1;
    }
    sVar3 = DAT_0e99;
    uVar6 = uVar6 + sVar3;
  }
  uVar7 = uVar6 - *param_1;
  if (uVar6 < *param_1) {
    uVar7 = 0;
  }
  DAT_0e97 = (short)((uint)param_1[4] * (uint)uVar7);
  bVar1 = *(byte *)(param_1 + 10);
  DAT_0e9b = (ushort)bVar1 * ((ushort)((uint)param_1[4] * (uint)uVar7 >> 0x10) & 0xff);
  sVar3 = DAT_0e9b;
  sVar4 = DAT_0e9b;
  bVar2 = DAT_0e93._0_1_;
  table_bias = (byte *)((short)param_1 + (ushort)bVar2 + (ushort)bVar2 + sVar4 + sVar3 + 0xf);
  uVar6 = DAT_0e95;
  uVar6 = prefix_candidate_c3e2(uVar6,table_bias);
  sVar3 = DAT_0e97;
  if (sVar3 == 0) {
    return;
  }
  DAT_0e93 = uVar6;
  uVar6 = DAT_0e95;
  uVar6 = prefix_candidate_c3e2(uVar6,table_bias + (ushort)bVar1 + (ushort)bVar1);
  DAT_0e95 = uVar6;
  uVar6 = DAT_0e97;
  prefix_candidate_c3e2(uVar6,&UNK_0e8d);
  return;
}


/* Entry be30 */

ushort FUN_be30(byte *table_bias,uchar columns,uchar row_index)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  byte *table_bias_00;
  
  DAT_0e9b = (ushort)columns * (ushort)row_index;
  sVar2 = DAT_0e9b;
  sVar3 = DAT_0e9b;
  bVar1 = DAT_0e93._0_1_;
  table_bias_00 = table_bias + (ushort)bVar1 + (ushort)bVar1 + sVar3 + sVar2 + 0xf;
  uVar4 = DAT_0e95;
  uVar4 = prefix_candidate_c3e2(uVar4,table_bias_00);
  sVar2 = DAT_0e97;
  if (sVar2 == 0) {
    return uVar4;
  }
  DAT_0e93 = uVar4;
  uVar4 = DAT_0e95;
  uVar4 = prefix_candidate_c3e2(uVar4,table_bias_00 + (ushort)columns + (ushort)columns);
  DAT_0e95 = uVar4;
  uVar4 = DAT_0e97;
  uVar4 = prefix_candidate_c3e2(uVar4,&UNK_0e8d);
  return uVar4;
}


/* Entry be73 */

ushort FUN_be73(byte *table_bias,uchar columns)

{
  byte bVar1;
  char cVar2;
  byte fraction;
  short sVar3;
  ushort uVar4;
  byte *table_bias_00;
  
  RAM0e66 = table_bias;
  bVar1 = DAT_0e62;
  sVar3 = RAM0e66;
  fraction = DAT_0e63._1_1_;
  table_bias_00 = (byte *)((ushort)fraction + (ushort)bVar1 * (ushort)columns + sVar3);
  uVar4 = FUN_beb8(fraction,table_bias_00);
  cVar2 = DAT_0e63._0_1_;
  if (cVar2 == '\0') {
    RAM0e6c = uVar4;
    uVar4 = RAM0e6c;
  }
  else {
    DAT_0e65._1_1_ = (char)(uVar4 + 0x80 >> 8);
    uVar4 = FUN_beb8(columns,table_bias_00 + columns);
    DAT_0e67._0_1_ = (char)(uVar4 + 0x80 >> 8);
    uVar4 = FUN_beb8((uchar)(uVar4 + 0x80),(byte *)&DAT_0e63);
  }
  return uVar4;
}


/* Entry beb8 */

ushort FUN_beb8(uchar fraction,byte *table_bias)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char cVar5;
  short sVar4;
  undefined1 uVar6;
  
  bVar1 = DAT_0ddb;
  cVar5 = table_bias[3] - bVar1;
  if (table_bias[3] < bVar1) {
    cVar5 = cVar5 + '\x18';
  }
  DAT_0e67._1_1_ = cVar5;
  bVar1 = DAT_0ddb;
  cVar5 = table_bias[4] - bVar1;
  if (table_bias[4] < bVar1) {
    cVar5 = cVar5 + '\x18';
  }
  DAT_0e69 = cVar5;
  sVar4 = CONCAT11(fraction,fraction);
  if (fraction != '\0') {
    bVar3 = DAT_0e69;
    bVar1 = DAT_0e67._1_1_;
    if (bVar3 < bVar1) {
      sVar4 = (ushort)(byte)-fraction * (ushort)(byte)-(bVar3 - bVar1);
      cVar5 = DAT_0e69;
      cVar5 = (char)((ushort)sVar4 >> 8) + cVar5;
      uVar6 = (undefined1)sVar4;
      goto LAB_bee8;
    }
    sVar4 = (ushort)fraction * (ushort)(byte)(bVar3 - bVar1);
  }
  cVar5 = DAT_0e67._1_1_;
  cVar5 = (char)((ushort)sVar4 >> 8) + cVar5;
  uVar6 = (undefined1)sVar4;
LAB_bee8:
  cVar2 = DAT_0ddb;
  bVar1 = cVar5 + cVar2;
  if (0x17 < bVar1) {
    bVar1 = bVar1 - 0x18;
  }
  return CONCAT11(bVar1,uVar6);
}


/* Entry bef2 */

void FUN_bef2(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  short sVar8;
  
  bVar1 = DAT_08c3;
  DAT_08c3 = bVar1 | 0x10;
  bVar1 = DAT_0a28;
  if ((~bVar1 & 0x80) == 0) {
    DAT_004e = 0x40;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x40) != 0) {
      sVar8 = DAT_0044;
      sVar2 = DAT_005c;
      if (199 < (ushort)(sVar8 - sVar2)) {
        bVar1 = DAT_0000;
        if ((bVar1 & 1) == 0) {
          DAT_0b8d = 0;
          bVar1 = DAT_0b8c;
          DAT_0b8c = (bVar1 + 1) - (0xfe < bVar1);
        }
        else {
          DAT_0b8c = 0;
          bVar1 = DAT_0b8d;
          DAT_0b8d = (bVar1 + 1) - (0xfe < bVar1);
        }
      }
    }
  }
  bVar1 = DAT_0a29;
  if (((~bVar1 & 0x80) == 0) || (bVar1 = DAT_088b, (bVar1 & 0x80) == 0)) {
LAB_bf5f:
    sVar8 = DAT_0044;
    DAT_005c = sVar8 + 2;
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
    sVar2 = DAT_0ba4;
    sVar8 = DAT_005c;
    DAT_005c = sVar2 + sVar8;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 | 0x30;
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x40;
  }
  else {
    bVar1 = DAT_0a2b;
    if ((bVar1 & 8) != 0) goto LAB_c0a0;
    bVar1 = DAT_0a29;
    DAT_0a29 = bVar1 | 8;
    bVar1 = DAT_0a2b;
    DAT_0a2b = bVar1 | 8;
    bVar1 = DAT_0a30;
    DAT_0a30 = (bVar1 + 1) - (0xfe < bVar1);
    sVar8 = DAT_0a32;
    if (sVar8 == 0) goto LAB_bf5f;
    bVar1 = DAT_00e1;
    if ((bVar1 & 0x40) == 0) {
      sVar2 = DAT_005c;
      sVar8 = DAT_0044;
      if (-1 < sVar2 - sVar8) {
        sVar3 = DAT_0a32;
        if ((sVar2 - sVar8) - sVar3 < 0) {
          sVar2 = DAT_005c;
          sVar8 = DAT_0044;
          sVar3 = DAT_0e26;
          uVar4 = DAT_0a32;
          if ((ushort)((sVar2 - sVar8) + sVar3) < uVar4) {
            bVar1 = DAT_004c;
            DAT_004c = bVar1 | 0x40;
            sVar8 = DAT_0a32;
            sVar2 = DAT_0b22;
            DAT_0a36 = sVar8 + sVar2;
            bVar1 = DAT_0d08;
            if ((~bVar1 & 1) == 0) {
              bVar1 = DAT_0d09;
              bVar1 = (bVar1 + 1) - (0xfe < bVar1);
              DAT_0d09 = bVar1;
              bVar5 = DAT_0dfe;
              if (bVar5 <= bVar1) {
                bVar1 = DAT_0d08;
                DAT_0d08 = bVar1 & 0xfe;
                cVar6 = DAT_0dff;
                if (cVar6 != '\0') {
                  DAT_0d0a = 0;
                  bVar1 = DAT_0d08;
                  DAT_0d08 = bVar1 | 4;
                }
              }
              uVar7 = DAT_0d0c;
              DAT_0948 = uVar7;
            }
            else {
              bVar1 = DAT_0d08;
              if ((bVar1 & 4) != 0) {
                bVar1 = DAT_0d0a;
                bVar1 = (bVar1 + 1) - (0xfe < bVar1);
                DAT_0d0a = bVar1;
                bVar5 = DAT_0dff;
                if (bVar5 <= bVar1) {
                  bVar1 = DAT_0d08;
                  DAT_0d08 = bVar1 & 0xfb;
                }
              }
              uVar7 = DAT_0948;
            }
            DAT_0ba4 = uVar7;
            bVar1 = DAT_0a2a;
            DAT_0a2a = bVar1 | 0x80;
            goto LAB_c0a0;
          }
        }
        bVar1 = DAT_0d08;
        if ((~bVar1 & 1) == 0) {
          bVar1 = DAT_0d09;
          bVar1 = (bVar1 + 1) - (0xfe < bVar1);
          DAT_0d09 = bVar1;
          bVar5 = DAT_0dfe;
          if (bVar5 <= bVar1) {
            bVar1 = DAT_0d08;
            DAT_0d08 = bVar1 & 0xfe;
            cVar6 = DAT_0dff;
            if (cVar6 != '\0') {
              DAT_0d0a = 0;
              bVar1 = DAT_0d08;
              DAT_0d08 = bVar1 | 4;
            }
          }
          sVar8 = DAT_0d0c;
          DAT_0948 = sVar8;
        }
        else {
          bVar1 = DAT_0d08;
          if ((bVar1 & 4) != 0) {
            bVar1 = DAT_0d0a;
            bVar1 = (bVar1 + 1) - (0xfe < bVar1);
            DAT_0d0a = bVar1;
            bVar5 = DAT_0dff;
            if (bVar5 <= bVar1) {
              bVar1 = DAT_0d08;
              DAT_0d08 = bVar1 & 0xfb;
            }
          }
          sVar8 = DAT_0948;
        }
        sVar2 = DAT_0e8e;
        DAT_0ba4 = sVar8 + sVar2;
        goto LAB_bf5f;
      }
    }
    sVar2 = DAT_0b22;
    sVar8 = DAT_0a32;
    DAT_005c = sVar2 + sVar8;
    bVar1 = DAT_0048;
    DAT_0048 = bVar1 & 0xef | 0x20;
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 | 0x40;
    bVar1 = DAT_0a2a;
    DAT_0a2a = bVar1 | 8;
    bVar1 = DAT_0a29;
    DAT_0a29 = bVar1 | 8;
  }
  bVar1 = DAT_0a28;
  DAT_0a28 = bVar1 | 0x80;
LAB_c0a0:
  bVar1 = DAT_08c3;
  DAT_08c3 = bVar1 & 0xef;
  return;
}


/* Entry c0a5 */

void FUN_c0a5(void)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar5;
  
  DAT_004e = 0x40;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x40) == 0) {
    bVar2 = DAT_0a2a;
    if ((~bVar2 & 8) != 0) {
      sVar3 = DAT_005c;
      sVar1 = DAT_0044;
      if ((sVar3 - sVar1 < 0) || (sVar5 = DAT_0e26, sVar5 = (sVar3 - sVar1) - sVar5, sVar5 < 0)) {
        sVar5 = 0;
      }
      DAT_0e8e = sVar5;
      sVar1 = DAT_0946;
      sVar3 = DAT_0ba6;
      DAT_0ba4 = (sVar5 + sVar1) - sVar3;
      goto LAB_c119;
    }
  }
  else {
    bVar2 = DAT_0a2a;
    if ((bVar2 & 8) == 0) {
      uVar4 = DAT_0946;
      DAT_0ba4 = uVar4;
      goto LAB_c119;
    }
    bVar2 = DAT_0a2a;
    DAT_0a2a = bVar2 & 0xf7;
    sVar3 = DAT_005c;
    sVar1 = DAT_0044;
    if (((-1 < sVar3 - sVar1) && (sVar5 = DAT_0946, sVar5 = (sVar3 - sVar1) - sVar5, -1 < sVar5)) &&
       (sVar1 = DAT_0e26, -1 < sVar5 - sVar1)) {
      uVar4 = DAT_005c;
      DAT_0a36 = uVar4;
      uVar4 = DAT_0946;
      DAT_0ba4 = uVar4;
      FUN_bef2();
      bVar2 = DAT_004c;
      DAT_004c = bVar2 | 0x40;
      DAT_0ba6 = 0;
      bVar2 = DAT_0a2a;
      DAT_0a2a = bVar2 | 0x80;
      return;
    }
  }
  bVar2 = DAT_0a2a;
  DAT_0a2a = bVar2 & 0xf7;
  sVar1 = DAT_0946;
  sVar3 = DAT_0ba4;
  DAT_0ba4 = sVar1 + sVar3;
LAB_c119:
  FUN_bef2();
  DAT_0ba6 = 0;
  return;
}


/* Entry c122 */

ushort FUN_c122(uchar count)

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
  
  DAT_0bb7 = count + 0xff;
  DAT_0bb8 = 0;
  pbVar8 = (byte *)DAT_0bbc;
  bVar1 = DAT_0bba;
  if (*pbVar8 < bVar1) {
    bVar1 = DAT_0bb7;
    sVar9 = DAT_0bbc;
    bVar7 = DAT_0bba;
    if (bVar7 < *(byte *)((ushort)bVar1 + sVar9)) {
      while( true ) {
        cVar3 = DAT_0bb7;
        cVar4 = DAT_0bb8;
        if ((byte)(cVar3 - cVar4) == 1) break;
        cVar5 = DAT_0bb8;
        bVar1 = ((byte)(cVar3 - cVar4) >> 1) + cVar5;
        DAT_0bb9 = bVar1;
        sVar9 = DAT_0bbc;
        bVar7 = DAT_0bba;
        if (bVar7 < *(byte *)((ushort)bVar1 + sVar9)) {
          uVar6 = DAT_0bb9;
          DAT_0bb7 = uVar6;
        }
        else {
          uVar6 = DAT_0bb9;
          DAT_0bb8 = uVar6;
        }
      }
      uVar6 = DAT_0bb8;
      DAT_0bbe._0_1_ = uVar6;
      bVar1 = DAT_0bbe._0_1_;
      sVar9 = DAT_0bbc;
      pcVar2 = (char *)((ushort)bVar1 + sVar9);
      DAT_0e62 = *pcVar2;
      cVar3 = DAT_0e62;
      DAT_0e62 = pcVar2[1] - cVar3;
      cVar3 = DAT_0bba;
      uVar10 = RAM0e62;
      uVar10 = (ushort)(((uint)(byte)(cVar3 - *pcVar2) << 0x18) / (uint)uVar10);
      if (0xff7f < uVar10) {
        cVar3 = DAT_0bbe._0_1_;
        DAT_0bbe._0_1_ = cVar3 + '\x01';
      }
      DAT_0bbe._1_1_ = (char)(uVar10 + 0x80 >> 8);
      uVar10 = DAT_0bbe;
    }
    else {
      bVar1 = DAT_0bb7;
      uVar10 = (ushort)bVar1 << 8;
    }
  }
  else {
    uVar10 = 0;
  }
  DAT_0bbe = uVar10;
  return uVar10;
}


/* Entry c1c2 */

ushort FUN_c1c2(uchar count)

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
  
  DAT_0bb7 = count + 0xff;
  DAT_0bb8 = 0;
  puVar8 = (ushort *)DAT_0bbc;
  uVar9 = RAM0bba;
  if (*puVar8 < uVar9) {
    cVar3 = DAT_0bb7;
    sVar7 = DAT_0bbc;
    uVar9 = RAM0bba;
    if (uVar9 < *(ushort *)((ushort)(byte)(cVar3 << 1) + sVar7)) {
      while( true ) {
        cVar3 = DAT_0bb7;
        cVar5 = DAT_0bb8;
        if ((byte)(cVar3 - cVar5) == 1) break;
        cVar1 = DAT_0bb8;
        cVar1 = ((byte)(cVar3 - cVar5) >> 1) + cVar1;
        DAT_0bb9 = cVar1;
        sVar7 = DAT_0bbc;
        uVar9 = RAM0bba;
        if (uVar9 < *(ushort *)((ushort)(byte)(cVar1 * '\x02') + sVar7)) {
          uVar6 = DAT_0bb9;
          DAT_0bb7 = uVar6;
        }
        else {
          uVar6 = DAT_0bb9;
          DAT_0bb8 = uVar6;
        }
      }
      uVar6 = DAT_0bb8;
      DAT_0bbe._0_1_ = uVar6;
      cVar3 = DAT_0bbe._0_1_;
      sVar7 = DAT_0bbc;
      psVar2 = (short *)((ushort)(byte)(cVar3 << 1) + sVar7);
      RAM0e62 = *psVar2;
      sVar7 = RAM0e62;
      RAM0e62 = psVar2[1] - sVar7;
      sVar7 = RAM0bba;
      uVar9 = RAM0e62;
      uVar9 = (ushort)(((uint)(ushort)(sVar7 - *psVar2) << 0x10) / (uint)uVar9);
      if (0xff7f < uVar9) {
        cVar3 = DAT_0bbe._0_1_;
        DAT_0bbe._0_1_ = cVar3 + '\x01';
      }
      DAT_0bbe._1_1_ = (char)(uVar9 + 0x80 >> 8);
      uVar9 = DAT_0bbe;
    }
    else {
      bVar4 = DAT_0bb7;
      uVar9 = (ushort)bVar4 << 8;
    }
  }
  else {
    uVar9 = 0;
  }
  DAT_0bbe = uVar9;
  return uVar9;
}


/* Entry c263 */

void FUN_c263(void)

{
  byte bVar1;
  
  bVar1 = DAT_0898._0_1_;
  if ((~bVar1 & 2) == 0) {
    DAT_0b38 = 0;
    bVar1 = DAT_0b39;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b39 = bVar1;
    if (DAT_18ae <= bVar1) {
      bVar1 = DAT_0880;
      DAT_0880 = bVar1 & 0xfe;
    }
  }
  else {
    DAT_0b39 = 0;
    bVar1 = DAT_0b38;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b38 = bVar1;
    if (DAT_18ad <= bVar1) {
      bVar1 = DAT_0880;
      DAT_0880 = bVar1 | 1;
      return;
    }
  }
  return;
}


/* Entry c296 */

void FUN_c296(void)

{
  byte bVar1;
  
  bVar1 = DAT_088f;
  if ((bVar1 & 0x40) == 0) {
    bVar1 = DAT_0b3e;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b3e = bVar1;
    DAT_0b3f = 0;
    if (DAT_4225 <= bVar1) {
      bVar1 = DAT_088c;
      DAT_088c = bVar1 | 0x80;
    }
  }
  else {
    bVar1 = DAT_0b3f;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0b3f = bVar1;
    DAT_0b3e = 0;
    if (DAT_4225 <= bVar1) {
      bVar1 = DAT_088c;
      DAT_088c = bVar1 & 0x7f;
      return;
    }
  }
  return;
}


/* Entry c2c9 */

ushort prefix_candidate_cc63(ushort param_1)

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


/* Entry c2e1 */

undefined * prefix_candidate_cc7b(undefined2 param_1)

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


/* Entry c30f */

void FUN_c30f(void)

{
  byte bVar1;
  
  bVar1 = DAT_0037;
  DAT_0037 = bVar1 | 0x80;
  FUN_c316();
  return;
}


/* Entry c316 */

ushort FUN_c316(ushort param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  
  bVar1 = DAT_0020;
  if (((((bVar1 & 1) == 0) || (param_1 = DAT_0024, param_1 != 0xa55a)) &&
      (bVar1 = DAT_08b0, (bVar1 & 1) != 0)) && (bVar1 = DAT_08b0, (~bVar1 & 0x20) == 0)) {
    bVar1 = DAT_08b0;
    if ((~bVar1 & 4) == 0) {
      bVar1 = DAT_08a7;
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 8) == 0) {
            if ((bVar1 & 0x10) == 0) {
              if ((bVar1 & 0x20) == 0) {
                uVar2 = DAT_00d4;
                uVar4 = DAT_00d6._1_1_;
                uVar4 = DAT_08a8;
                DAT_00d6._1_1_ = uVar4;
                param_1 = CONCAT11(0x60,uVar4);
                DAT_08a7 = 0x60;
              }
              else {
                uVar3 = DAT_00d4;
                RAM0eaa = uVar3;
                param_1 = uVar3 & 0x80ff;
                if ((uVar3 & 0x8000) != 0) {
                  bVar1 = DAT_0eaa;
                  param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
                  if ((bVar1 & 0x40) != 0) {
                    uVar2 = DAT_00d4;
                    uVar4 = DAT_00d6._1_1_;
                    uVar5 = DAT_08a9;
                    param_1 = CONCAT11(uVar4,uVar5);
                    DAT_00d6._1_1_ = uVar5;
                    bVar1 = DAT_08a7;
                    DAT_08a7 = bVar1 | 0x10;
                  }
                }
              }
            }
            else {
              uVar3 = DAT_00d4;
              RAM0eaa = uVar3;
              param_1 = uVar3 & 0x80ff;
              if ((uVar3 & 0x8000) != 0) {
                bVar1 = DAT_0eaa;
                param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
                if ((bVar1 & 0x40) != 0) {
                  uVar2 = DAT_00d4;
                  uVar4 = DAT_00d6._1_1_;
                  uVar5 = DAT_08aa;
                  param_1 = CONCAT11(uVar4,uVar5);
                  DAT_00d6._1_1_ = uVar5;
                  bVar1 = DAT_08a7;
                  DAT_08a7 = bVar1 | 8;
                }
              }
            }
          }
          else {
            uVar3 = DAT_00d4;
            RAM0eaa = uVar3;
            param_1 = uVar3 & 0x80ff;
            if ((uVar3 & 0x8000) != 0) {
              bVar1 = DAT_0eaa;
              param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
              if ((bVar1 & 0x40) != 0) {
                uVar2 = DAT_00d4;
                uVar4 = DAT_00d6._1_1_;
                uVar5 = DAT_08ab;
                param_1 = CONCAT11(uVar4,uVar5);
                DAT_00d6._1_1_ = uVar5;
                bVar1 = DAT_08a7;
                DAT_08a7 = bVar1 | 4;
              }
            }
          }
        }
        else {
          uVar3 = DAT_00d4;
          RAM0eaa = uVar3;
          param_1 = uVar3 & 0x80ff;
          if ((uVar3 & 0x8000) != 0) {
            bVar1 = DAT_0eaa;
            param_1 = CONCAT11(bVar1,(char)param_1) & 0x40ff;
            if ((bVar1 & 0x40) != 0) {
              uVar2 = DAT_00d4;
              uVar4 = DAT_00d6._1_1_;
              uVar5 = DAT_08ac;
              param_1 = CONCAT11(uVar4,uVar5);
              DAT_00d6._1_1_ = uVar5;
              bVar1 = DAT_08a7;
              DAT_08a7 = bVar1 | 2;
            }
          }
        }
      }
      else {
        uVar3 = DAT_00d4;
        RAM0eaa = uVar3;
        param_1 = uVar3 & 0x80ff;
        if ((uVar3 & 0x8000) != 0) {
          DAT_08a7 = 0x40;
          bVar1 = DAT_08b0;
          DAT_08b0 = bVar1 & 0xdf;
          bVar1 = DAT_08b0;
          DAT_08b0 = bVar1 | 0x40;
          bVar1 = DAT_08b0;
          DAT_08b0 = bVar1 & 0xfe;
          bVar1 = DAT_08b0;
          DAT_08b0 = bVar1 & 0xfb;
          uVar2 = DAT_00d4;
          uVar4 = DAT_00d6._1_1_;
          param_1 = CONCAT11(0x26,uVar4);
          DAT_00d2._1_1_ = 0x26;
        }
      }
    }
    else {
      bVar1 = DAT_08b0;
      DAT_08b0 = bVar1 | 4;
    }
  }
  return param_1;
}


/* Entry c426 */

ushort FUN_c426(ushort param_1)

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
    bVar1 = DAT_08b0;
    if ((~bVar1 & 0x40) == 0) {
      uVar2 = DAT_0b08;
      DAT_0b0a = uVar2;
      sVar7 = DAT_0ae0;
      DAT_0b08 = sVar7;
      sVar4 = DAT_0b0a;
      sVar7 = sVar7 - sVar4;
      bVar1 = DAT_08a5;
      if ((~bVar1 & 1) != 0) {
        sVar7 = 0;
      }
      if ((char)((ushort)sVar7 >> 8) != '\0') {
        sVar7 = 0xff;
      }
      DAT_0b06 = (char)sVar7;
      bVar1 = DAT_08a5;
      DAT_08a5 = bVar1 | 1;
      uVar2 = DAT_00d4;
      RAM0eaa = uVar2;
      uVar2 = DAT_00d2;
      DAT_0ea8 = uVar2;
      uVar3 = DAT_00d6;
      bVar1 = DAT_0eaa;
      param_1 = CONCAT11(bVar1,(char)uVar2) & 0x20ff;
      if ((bVar1 & 0x20) != 0) {
        bVar1 = DAT_0eaa;
        param_1 = CONCAT11(bVar1,(char)param_1) & 0xaff;
        if ((bVar1 & 10) == 0) {
          DAT_0eac = (char)uVar3;
          DAT_0d29 = (char)uVar3;
          cVar5 = DAT_0e4d;
          if ((cVar5 == -0x80) || (bVar1 = DAT_0d1f, (~bVar1 & 0x80) == 0)) {
            uVar8 = FUN_c4b7(param_1);
          }
          else {
            uVar8 = FUN_cc92();
          }
          DAT_00d2._1_1_ = 8;
          return CONCAT11(8,uVar8);
        }
      }
    }
    bVar1 = DAT_08b0;
    DAT_08b0 = bVar1 | 0x40;
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
    DAT_08a3 = 0x80;
    DAT_08b0 = 0x40;
  }
  return uVar6;
}


/* Entry c4b7 */

void FUN_c4b7(char param_1)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  
  bVar5 = DAT_08a3;
  if ((bVar5 & 2) != 0) {
    if (((((param_1 == '\0') || (param_1 == '\x01')) || (param_1 == '\x02')) ||
        ((param_1 == '\x05' || (param_1 == -3)))) || (param_1 == -2)) {
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 & 0xfe;
      bVar5 = DAT_0020;
      DAT_0020 = bVar5 | 4;
      DAT_00cb = 0;
      DAT_0ead = param_1;
    }
    else {
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 | 1;
    }
    goto LAB_cc7b;
  }
  bVar5 = DAT_08a3;
  if ((~bVar5 & 0x80) == 0) {
    bVar5 = DAT_08a6;
    if ((bVar5 & 0x80) != 0) {
LAB_c5bb:
      bVar5 = DAT_08a3;
      DAT_08a3 = bVar5 & 0x7f;
      bVar5 = DAT_08a3;
      DAT_08a3 = bVar5 | 0x40;
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 & 0x7f;
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 & 0xbf;
      goto LAB_cc7b;
    }
    bVar5 = DAT_08a4;
    if ((~bVar5 & 0x80) == 0) {
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 & 0xfe;
      if (param_1 == -3) {
        bVar5 = DAT_0b04;
        DAT_0b04 = bVar5 | 2;
      }
      else if (param_1 != -2) {
        if (param_1 != '\x01') {
          if (param_1 == -0x33) {
            bVar5 = DAT_08a5;
            DAT_08a5 = bVar5 | 0x80;
            goto LAB_cc7b;
          }
          if (((param_1 != -0x34) && (param_1 != -0x35)) && (param_1 != -0x36)) {
            if (param_1 == -0x32) {
              DAT_0b68 = 0;
              DAT_0b69 = 0;
              DAT_0b6a = 0;
              DAT_0b6b = 0;
              DAT_0b6d = 0;
              DAT_0b6e = 0;
              DAT_0b6f = 0;
              bVar5 = DAT_0b6c;
              bVar5 = (bVar5 + 1) - (0xfe < bVar5);
              DAT_0b6c = bVar5;
              bVar4 = DAT_0e01;
              if (bVar5 < bVar4) goto LAB_cc7b;
              bVar5 = DAT_08a6;
              DAT_08a6 = bVar5 | 0x80;
              DAT_0b6c = 0;
              goto LAB_c5bb;
            }
            if (((param_1 != -0x31) && (param_1 != -0x40)) && (param_1 != -0x3f)) {
              bVar5 = DAT_08a4;
              DAT_08a4 = bVar5 | 1;
              DAT_0b66 = 0;
            }
          }
        }
        goto LAB_c5a3;
      }
      DAT_0b66 = 0;
      DAT_0b6c = 0;
      bVar5 = DAT_08a5;
      DAT_08a5 = bVar5 & 0x7f;
    }
    else {
      if (param_1 == -3) {
        bVar5 = DAT_0b04;
        DAT_0b04 = bVar5 | 2;
      }
      else if (param_1 != -2) {
LAB_c5a3:
        bVar5 = DAT_08a3;
        DAT_08a3 = bVar5 & 0x7f;
        bVar5 = DAT_08a3;
        DAT_08a3 = bVar5 | 2;
        bVar5 = DAT_08a4;
        DAT_08a4 = bVar5 & 0x7f;
        goto LAB_cc7b;
      }
      bVar5 = DAT_0020;
      DAT_0020 = bVar5 | 4;
      DAT_00cb = 0;
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 | 0x80;
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 & 0xfe;
    }
    goto LAB_cc7b;
  }
  bVar5 = DAT_08a3;
  if ((~bVar5 & 0x40) == 0) {
    bVar5 = DAT_08a5;
    if ((~bVar5 & 0x40) == 0) {
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 & 0xfe;
      if ((param_1 != -0x35) && (param_1 != -0x34)) {
        if (param_1 == -0x36) {
          DAT_0b6b = 0;
          DAT_0b6c = 0;
          cVar1 = DAT_0ead;
          if (cVar1 == -0x35) {
            bVar5 = DAT_08a4;
            if ((bVar5 & 0x40) == 0) {
              bVar5 = DAT_08a4;
              DAT_08a4 = bVar5 | 0x40;
            }
            else {
              bVar5 = DAT_08a4;
              DAT_08a4 = bVar5 & 0xbf;
            }
          }
          goto LAB_cc7b;
        }
        if (param_1 == -0x33) {
          bVar5 = DAT_0b6b;
          bVar5 = (bVar5 + 1) - (0xfe < bVar5);
          DAT_0b6b = bVar5;
          if (bVar5 < 0x80) goto LAB_cc7b;
        }
        else {
          if (param_1 != -0x32) {
            if ((((param_1 != -0x31) && (param_1 != -0x40)) && (param_1 != -0x3f)) &&
               (param_1 != -3)) goto LAB_c637;
            goto LAB_c63b;
          }
          bVar5 = DAT_0b6c;
          bVar5 = (bVar5 + 1) - (0xfe < bVar5);
          DAT_0b6c = bVar5;
          if (bVar5 < 8) goto LAB_cc7b;
        }
        bVar5 = DAT_08a4;
        if ((bVar5 & 0x40) == 0) {
          bVar5 = DAT_0000;
          DAT_0000 = bVar5 & 0xfb;
          bVar5 = DAT_0001;
          DAT_0001 = bVar5 & 0xdf;
          DAT_0bff = 1;
          bVar5 = DAT_08a3;
          DAT_08a3 = bVar5 & 0xbf;
          bVar5 = DAT_08a3;
          DAT_08a3 = bVar5 | 4;
          bVar5 = DAT_08a4;
          DAT_08a4 = bVar5 | 0x20;
          DAT_00bc = 0xff;
          DAT_00bd = 0xff;
          DAT_00ac = 0xff;
          DAT_00ad = 0xff;
        }
        else {
          bVar5 = DAT_08a3;
          DAT_08a3 = bVar5 & 0xbf;
          bVar5 = DAT_08a3;
          DAT_08a3 = bVar5 | 0x20;
          bVar5 = DAT_08a3;
          DAT_08a3 = bVar5 | 0x10;
          bVar5 = DAT_08a4;
          DAT_08a4 = bVar5 | 0x20;
          bVar5 = DAT_08a4;
          DAT_08a4 = bVar5 | 0x10;
        }
        DAT_0b6b = 0;
        DAT_0b6c = 0;
        goto LAB_cc7b;
      }
    }
    else {
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 & 0xfe;
      if (param_1 == -0x36) {
        bVar5 = DAT_08a5;
        DAT_08a5 = bVar5 | 0x40;
        goto LAB_cc7b;
      }
      if (((((param_1 == -0x35) || (param_1 == -0x34)) ||
           ((param_1 == -0x33 || ((param_1 == -0x32 || (param_1 == -0x31)))))) || (param_1 == -0x40)
          ) || ((param_1 == -0x3f || (param_1 == -3)))) goto LAB_cc7b;
LAB_c637:
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 | 1;
    }
LAB_c63b:
    DAT_0b6b = 0;
    DAT_0b6c = 0;
    goto LAB_cc7b;
  }
  bVar5 = DAT_08a3;
  if ((bVar5 & 4) == 0) {
    bVar5 = DAT_08a3;
    if ((~bVar5 & 0x10) == 0) {
      bVar5 = DAT_08a5;
      if ((~bVar5 & 0x20) == 0) {
        bVar5 = DAT_08a4;
        DAT_08a4 = bVar5 & 0xfe;
        if (param_1 == -0x36) {
          DAT_0b69 = 0;
          DAT_0b6a = 0;
          DAT_0b6b = 0;
          DAT_0b6c = 0;
          DAT_0b6d = 0;
          DAT_0b6e = 0;
          DAT_0b6f = 0;
          cVar1 = DAT_0ead;
          if (cVar1 == -0x35) {
            bVar5 = DAT_08a4;
            DAT_08a4 = bVar5 | 8;
          }
          else if (cVar1 == -0x34) {
            bVar5 = DAT_08a4;
            DAT_08a4 = bVar5 | 4;
          }
          else {
            bVar5 = DAT_08a4;
            DAT_08a4 = bVar5 & 0xf7;
            bVar5 = DAT_08a4;
            DAT_08a4 = bVar5 & 0xfb;
          }
          goto LAB_cc7b;
        }
        if (param_1 == -0x35) {
          DAT_0b68 = 0;
          DAT_0b6a = 0;
          DAT_0b6b = 0;
          DAT_0b6c = 0;
          DAT_0b6d = 0;
          DAT_0b6e = 0;
          DAT_0b6f = 0;
          bVar4 = DAT_0b69;
          bVar5 = DAT_08a4;
          DAT_08a4 = bVar5 & 0xf7;
          DAT_0b69 = (bVar4 + 1) - (0xfe < bVar4);
          goto LAB_cc7b;
        }
        if (param_1 == -0x34) {
          DAT_0b68 = 0;
          DAT_0b69 = 0;
          DAT_0b6b = 0;
          DAT_0b6c = 0;
          DAT_0b6d = 0;
          DAT_0b6e = 0;
          DAT_0b6f = 0;
          bVar4 = DAT_0b6a;
          bVar5 = DAT_08a4;
          DAT_08a4 = bVar5 & 0xfb;
          DAT_0b6a = (bVar4 + 1) - (0xfe < bVar4);
          goto LAB_cc7b;
        }
        if (param_1 == -0x33) {
          DAT_0b68 = 0;
          DAT_0b69 = 0;
          DAT_0b6a = 0;
          DAT_0b6c = 0;
          DAT_0b6d = 0;
          DAT_0b6e = 0;
          DAT_0b6f = 0;
          bVar5 = DAT_0b6b;
          bVar5 = (bVar5 + 1) - (0xfe < bVar5);
          DAT_0b6b = bVar5;
          if (bVar5 < 0x80) goto LAB_cc7b;
        }
        else {
          if (param_1 != -0x32) {
            if (((param_1 != -0x31) && (param_1 != -0x40)) &&
               ((param_1 != -0x3f && (param_1 != -3)))) goto LAB_c74f;
            goto LAB_c753;
          }
          DAT_0b68 = 0;
          DAT_0b69 = 0;
          DAT_0b6a = 0;
          DAT_0b6b = 0;
          DAT_0b6d = 0;
          DAT_0b6e = 0;
          DAT_0b6f = 0;
          bVar5 = DAT_0b6c;
          bVar5 = (bVar5 + 1) - (0xfe < bVar5);
          DAT_0b6c = bVar5;
          if (bVar5 < 8) goto LAB_cc7b;
        }
        bVar5 = DAT_08a3;
        DAT_08a3 = bVar5 & 0xef;
        bVar5 = DAT_08a3;
        DAT_08a3 = bVar5 | 8;
        bVar5 = DAT_08a4;
        DAT_08a4 = bVar5 | 0x20;
        bVar5 = DAT_08a5;
        DAT_08a5 = bVar5 & 0xef;
        DAT_0b6b = 0;
        DAT_0b6c = 0;
        DAT_0b67 = 0;
        uVar2 = DAT_0a00;
        DAT_0b11 = uVar2;
      }
      else {
        bVar5 = DAT_08a4;
        DAT_08a4 = bVar5 & 0xfe;
        if (param_1 == -0x36) {
          bVar5 = DAT_08a5;
          DAT_08a5 = bVar5 | 0x20;
          goto LAB_cc7b;
        }
        if (((param_1 == -0x35) || (param_1 == -0x34)) ||
           (((param_1 == -0x33 || (((param_1 == -0x32 || (param_1 == -0x31)) || (param_1 == -0x40)))
             ) || ((param_1 == -0x3f || (param_1 == -3)))))) goto LAB_cc7b;
LAB_c74f:
        bVar5 = DAT_08a4;
        DAT_08a4 = bVar5 | 1;
LAB_c753:
        DAT_0b68 = 0;
        DAT_0b69 = 0;
        DAT_0b6a = 0;
        DAT_0b6b = 0;
        DAT_0b6c = 0;
        DAT_0b6d = 0;
        DAT_0b6e = 0;
        DAT_0b6f = 0;
      }
      goto LAB_cc7b;
    }
    bVar5 = DAT_08a5;
    if ((~bVar5 & 0x10) == 0) {
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 & 0xfe;
      if (param_1 == -0x36) {
        DAT_0b69 = 0;
        DAT_0b6a = 0;
        DAT_0b6b = 0;
        DAT_0b6c = 0;
        DAT_0b6d = 0;
        DAT_0b6e = 0;
        DAT_0b6f = 0;
        cVar1 = DAT_0ead;
        if (cVar1 == -0x35) {
          cVar1 = DAT_0b11;
          bVar5 = cVar1 + 1;
          if (0xfd < bVar5) {
            bVar5 = 0xfe;
          }
          DAT_0b11 = bVar5;
        }
        else {
          if (cVar1 != -0x34) goto LAB_ca03;
          cVar1 = DAT_0b11;
          DAT_0b11 = cVar1 + -1 + (cVar1 == '\0');
        }
        uVar2 = DAT_0b11;
        DAT_0a00 = uVar2;
        bVar5 = DAT_0890;
        DAT_0890 = bVar5 | 0x80;
        bVar5 = DAT_0892;
        DAT_0892 = bVar5 | 0x80;
      }
      else if (param_1 == -0x35) {
        DAT_0b68 = 0;
        DAT_0b6a = 0;
        DAT_0b6b = 0;
        DAT_0b6c = 0;
        DAT_0b6d = 0;
        DAT_0b6e = 0;
        DAT_0b6f = 0;
        bVar5 = DAT_0b69;
        bVar5 = (bVar5 + 1) - (0xfe < bVar5);
        if (0x1f < bVar5) {
          cVar1 = DAT_0b11;
          bVar4 = cVar1 + 1;
          if (0xfd < bVar4) {
            bVar4 = 0xfe;
          }
          DAT_0b11 = bVar4;
          bVar5 = bVar5 - 8;
        }
        DAT_0b69 = bVar5;
      }
      else if (param_1 == -0x34) {
        DAT_0b68 = 0;
        DAT_0b69 = 0;
        DAT_0b6b = 0;
        DAT_0b6c = 0;
        DAT_0b6d = 0;
        DAT_0b6e = 0;
        DAT_0b6f = 0;
        bVar5 = DAT_0b6a;
        bVar5 = (bVar5 + 1) - (0xfe < bVar5);
        if (0x1f < bVar5) {
          cVar1 = DAT_0b11;
          DAT_0b11 = cVar1 + -1 + (cVar1 == '\0');
          bVar5 = bVar5 - 8;
        }
        DAT_0b6a = bVar5;
      }
      else {
        if ((param_1 == -0x33) || (param_1 == -0x32)) {
          DAT_0b68 = 0;
          DAT_0b69 = 0;
          DAT_0b6a = 0;
          DAT_0b6b = 0;
          DAT_0b6c = 0;
          DAT_0b6d = 0;
          DAT_0b6e = 0;
          DAT_0b6f = 0;
          DAT_0b67 = 0;
          bVar5 = DAT_08a3;
          DAT_08a3 = bVar5 | 0x10;
          bVar5 = DAT_08a3;
          DAT_08a3 = bVar5 & 0xf7;
          bVar5 = DAT_08a4;
          DAT_08a4 = bVar5 | 0x20;
          bVar5 = DAT_08a4;
          DAT_08a4 = bVar5 | 0x10;
          bVar5 = DAT_08a5;
          DAT_08a5 = bVar5 & 0xdf;
          goto LAB_cc7b;
        }
        if ((((param_1 != -0x31) && (param_1 != -0x40)) && (param_1 != -0x3f)) && (param_1 != -3))
        goto LAB_c8d8;
        DAT_0b68 = 0;
        DAT_0b69 = 0;
        DAT_0b6a = 0;
        DAT_0b6b = 0;
        DAT_0b6c = 0;
        DAT_0b6d = 0;
        DAT_0b6e = 0;
        DAT_0b6f = 0;
      }
    }
    else {
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 & 0xfe;
      if (param_1 == -0x36) {
        bVar5 = DAT_08a5;
        DAT_08a5 = bVar5 | 0x10;
      }
      else if ((((param_1 != -0x35) && (param_1 != -0x34)) &&
               ((param_1 != -0x33 && ((param_1 != -0x32 && (param_1 != -0x31)))))) &&
              ((param_1 != -0x40 && ((param_1 != -0x3f && (param_1 != -3)))))) {
LAB_c8d8:
        bVar5 = DAT_08a4;
        DAT_08a4 = bVar5 | 1;
        DAT_0b68 = 0;
        DAT_0b69 = 0;
        DAT_0b6a = 0;
        DAT_0b6b = 0;
        DAT_0b6c = 0;
        DAT_0b6d = 0;
        DAT_0b6e = 0;
        DAT_0b6f = 0;
        goto LAB_cc7b;
      }
    }
  }
  else {
    uVar2 = DAT_0bff;
    DAT_0c00 = uVar2;
    bVar5 = DAT_08a4;
    DAT_08a4 = bVar5 & 0xfe;
    if (param_1 == -0x36) {
      bVar5 = DAT_08a5;
      DAT_08a5 = bVar5 | 8;
LAB_ca97:
      DAT_0b68 = 0;
      DAT_0b69 = 0;
      DAT_0b6a = 0;
      DAT_0b6b = 0;
      DAT_0b6c = 0;
      DAT_0b6d = 0;
      DAT_0b6e = 0;
      DAT_0b6f = 0;
      bVar5 = DAT_08a5;
      DAT_08a5 = bVar5 & 0xfb;
      bVar5 = DAT_08a5;
      DAT_08a5 = bVar5 & 0xfd;
    }
    else if (param_1 == -0x35) {
      DAT_0b68 = 0;
      DAT_0b6a = 0;
      DAT_0b6b = 0;
      DAT_0b6c = 0;
      DAT_0b6d = 0;
      DAT_0b6e = 0;
      DAT_0b6f = 0;
      bVar5 = DAT_08a5;
      DAT_08a5 = bVar5 & 0xfd;
      cVar1 = DAT_0ead;
      if (cVar1 == -0x36) {
        bVar5 = DAT_08a5;
        DAT_08a5 = bVar5 | 4;
        cVar1 = DAT_0bfe;
        bVar5 = cVar1 + 1;
        bVar4 = DAT_0d72;
        if (bVar4 <= bVar5) {
          bVar5 = 0;
        }
        cVar1 = DAT_0e53;
        if ((cVar1 != -0x80) && (bVar5 == 0xb)) {
          bVar5 = 0xc;
        }
        cVar1 = DAT_0e54;
        if ((cVar1 != '@') && (bVar5 == 0xc)) {
          bVar5 = 0xd;
        }
        cVar1 = DAT_0e55;
        if ((cVar1 != '@') && (bVar5 == 0x10)) {
          bVar5 = 0x11;
        }
        DAT_0bfe = bVar5;
        bVar5 = DAT_0bfe;
        DAT_0bff = (&DAT_0d73)[bVar5];
        bVar5 = DAT_0b69;
        DAT_0b69 = (bVar5 + 1) - (0xfe < bVar5);
      }
      else {
        bVar5 = DAT_08a5;
        if (((~bVar5 & 8) == 0) && (bVar5 = DAT_08a5, (bVar5 & 4) != 0)) {
          bVar5 = DAT_0b69;
          bVar5 = (bVar5 + 1) - (0xfe < bVar5);
          if (bVar5 < 0x40) {
            DAT_0b69 = bVar5;
          }
          else {
            DAT_0b69 = bVar5 - 0x10;
            cVar1 = DAT_0bfe;
            bVar5 = cVar1 + 1;
            bVar4 = DAT_0d72;
            if (bVar4 <= bVar5) {
              bVar5 = 0;
            }
            cVar1 = DAT_0e53;
            if ((cVar1 != -0x80) && (bVar5 == 0xb)) {
              bVar5 = 0xc;
            }
            cVar1 = DAT_0e54;
            if ((cVar1 != '@') && (bVar5 == 0xc)) {
              bVar5 = 0xd;
            }
            cVar1 = DAT_0e55;
            if ((cVar1 != '@') && (bVar5 == 0x10)) {
              bVar5 = 0x11;
            }
            DAT_0bfe = bVar5;
            bVar5 = DAT_0bfe;
            DAT_0bff = (&DAT_0d73)[bVar5];
          }
        }
      }
    }
    else {
      if (param_1 != -0x34) {
        if ((((param_1 != -0x33) && (param_1 != -0x32)) && (param_1 != -0x31)) &&
           (((param_1 != -0x40 && (param_1 != -0x3f)) && (param_1 != -3)))) {
          bVar5 = DAT_08a4;
          DAT_08a4 = bVar5 | 1;
          DAT_0b68 = 0;
          DAT_0b69 = 0;
          DAT_0b6a = 0;
          DAT_0b6b = 0;
          DAT_0b6c = 0;
          DAT_0b6d = 0;
          DAT_0b6e = 0;
          DAT_0b6f = 0;
          bVar5 = DAT_08a5;
          DAT_08a5 = bVar5 & 0xfb;
          bVar5 = DAT_08a5;
          DAT_08a5 = bVar5 & 0xfd;
          goto LAB_cc7b;
        }
        goto LAB_ca97;
      }
      DAT_0b68 = 0;
      DAT_0b69 = 0;
      DAT_0b6b = 0;
      DAT_0b6c = 0;
      DAT_0b6d = 0;
      DAT_0b6e = 0;
      DAT_0b6f = 0;
      bVar5 = DAT_08a5;
      DAT_08a5 = bVar5 & 0xfb;
      cVar1 = DAT_0ead;
      if (cVar1 == -0x36) {
        bVar5 = DAT_08a5;
        DAT_08a5 = bVar5 | 2;
        cVar1 = DAT_0bfe;
        if (cVar1 == '\0') {
          cVar1 = DAT_0d72;
        }
        cVar6 = cVar1 + -1;
        cVar3 = DAT_0e55;
        if ((cVar3 != '@') && (cVar6 == '\x10')) {
          cVar6 = cVar1 + -2;
        }
        cVar1 = DAT_0e54;
        if ((cVar1 != '@') && (cVar6 == '\f')) {
          cVar6 = '\v';
        }
        cVar1 = DAT_0e53;
        if ((cVar1 != -0x80) && (cVar6 == '\v')) {
          cVar6 = '\n';
        }
        DAT_0bfe = cVar6;
        bVar5 = DAT_0bfe;
        DAT_0bff = (&DAT_0d73)[bVar5];
        bVar5 = DAT_0b6a;
        DAT_0b6a = (bVar5 + 1) - (0xfe < bVar5);
      }
      else {
        bVar5 = DAT_08a5;
        if (((bVar5 & 8) != 0) && (bVar5 = DAT_08a5, (bVar5 & 2) != 0)) {
          bVar5 = DAT_0b6a;
          bVar5 = (bVar5 + 1) - (0xfe < bVar5);
          if (bVar5 < 0x40) {
            DAT_0b6a = bVar5;
          }
          else {
            DAT_0b6a = bVar5 - 0x10;
            cVar1 = DAT_0bfe;
            if (cVar1 == '\0') {
              cVar1 = DAT_0d72;
            }
            cVar6 = cVar1 + -1;
            cVar3 = DAT_0e55;
            if ((cVar3 != '@') && (cVar6 == '\x10')) {
              cVar6 = cVar1 + -2;
            }
            cVar1 = DAT_0e54;
            if ((cVar1 != '@') && (cVar6 == '\f')) {
              cVar6 = '\v';
            }
            cVar1 = DAT_0e53;
            if ((cVar1 != -0x80) && (cVar6 == '\v')) {
              cVar6 = '\n';
            }
            DAT_0bfe = cVar6;
            bVar5 = DAT_0bfe;
            DAT_0bff = (&DAT_0d73)[bVar5];
          }
        }
      }
    }
    FUN_cfeb();
  }
LAB_ca03:
  bVar5 = DAT_0b67;
  bVar5 = (bVar5 + 1) - (0xfe < bVar5);
  DAT_0b67 = bVar5;
  bVar4 = DAT_08a4;
  if ((~bVar4 & 0x20) == 0) {
    if (bVar5 != 0) {
      bVar5 = DAT_08a4;
      DAT_08a4 = bVar5 & 0xdf;
      DAT_0b67 = 0;
    }
  }
  else if (6 < bVar5) {
    bVar5 = DAT_08a4;
    DAT_08a4 = bVar5 | 0x20;
    DAT_0b67 = 0;
  }
LAB_cc7b:
  bVar5 = DAT_08b0;
  DAT_08b0 = bVar5 | 0x80;
  bVar5 = DAT_08b0;
  DAT_08b0 = bVar5 & 0xbf;
  bVar5 = DAT_08b0;
  DAT_08b0 = bVar5 | 0x20;
  bVar5 = DAT_08b0;
  DAT_08b0 = bVar5 | 2;
  uVar2 = DAT_0eac;
  DAT_0ead = uVar2;
  return;
}


/* Entry cc92 */

void FUN_cc92(byte param_1)

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
    DAT_0d28 = 0;
    DAT_0d54 = 0;
    DAT_0d25 = 0;
    DAT_0d27 = 0;
    DAT_0d1f = 0x40;
    DAT_0d2a = 1;
    DAT_0d20 = 0;
    DAT_0d2c = 0;
    DAT_0d2b = 0;
    DAT_0d2d = 0;
    bVar6 = DAT_0d21;
    DAT_0d21 = bVar6 & 0x8d;
    cVar7 = DAT_0044._1_1_;
    DAT_0d53 = cVar7;
    cVar7 = cVar7 * '\x13' + '\x13';
    DAT_0d30 = cVar7;
    DAT_08a8 = cVar7;
    cVar7 = cVar7 * '\x13' + '\x13';
    DAT_0d31 = cVar7;
    DAT_08a9 = cVar7;
    cVar8 = cVar7 * '\x13' + '\x13';
    DAT_0d32 = cVar8;
    DAT_08ab = cVar8;
    DAT_08aa = 0x43;
    cVar8 = DAT_08a8;
    cVar1 = DAT_08a9;
    DAT_08ac = cVar7 * '\x13' + 'V' + cVar8 + cVar1;
    bVar6 = DAT_0d1f;
    DAT_0d1f = bVar6 | 0x20;
    goto LAB_cfde;
  }
  if (param_1 == 0x3d) {
    DAT_0d28 = 0;
    bVar6 = DAT_0d1f;
    if ((~bVar6 & 0x40) == 0) {
      bVar6 = DAT_0d20;
      DAT_0d20 = bVar6 & 0xf7;
      DAT_0d27 = 0;
      cVar7 = DAT_0d2a;
      if (cVar7 == '\x01') {
        DAT_0d2a = 2;
        DAT_0d25 = 0;
        bVar6 = DAT_0d21;
        if ((bVar6 & 0x80) == 0) {
          RAM08a8 = 0x4a4a;
          RAM08aa = 0x4a4a;
          DAT_08ac = 0x28;
          bVar6 = DAT_0d1f;
          DAT_0d1f = bVar6 | 0x10;
        }
        else {
          uVar3 = DAT_0d50;
          RAM08a8 = uVar3;
          cVar7 = DAT_0d52;
          DAT_08ab = cVar7;
          DAT_08aa = 0x4b;
          DAT_08ac = (char)((ushort)uVar3 >> 8) + (char)uVar3 + cVar7 + 'K';
          bVar6 = DAT_0d1f;
          DAT_0d1f = bVar6 | 0x10;
        }
        goto LAB_cfde;
      }
LAB_cd60:
      bVar6 = DAT_0d20;
      DAT_0d20 = bVar6 & 0xf7;
      DAT_0d27 = 0;
      bVar6 = DAT_0d25;
      bVar6 = (bVar6 + 1) - (0xfe < bVar6);
      DAT_0d25 = bVar6;
      bVar2 = DAT_0e50;
      if (bVar2 <= bVar6) {
        bVar6 = DAT_0d21;
        DAT_0d21 = bVar6 | 1;
      }
      bVar6 = DAT_0d1f;
      DAT_0d1f = bVar6 & 0x7f;
      DAT_0d2a = 0;
      DAT_0d2b = 0;
      DAT_0d2c = 0;
      DAT_08a8 = 0;
      RAM08a9 = 0x38;
      RAM08ab = 0x38;
      goto LAB_cfde;
    }
  }
  else {
    uVar4 = CONCAT11(param_1,param_1) & 0xc0ff;
    if ((char)(uVar4 >> 8) == -0x80) {
      DAT_0d28 = 0;
      bVar6 = DAT_0d1f;
      if ((~bVar6 & 0x40) == 0) {
        bVar6 = DAT_0d20;
        DAT_0d20 = bVar6 & 0xf7;
        DAT_0d27 = 0;
        cVar7 = DAT_0d2a;
        bVar6 = DAT_0d2c;
        if (bVar6 == 0) {
          cVar7 = cVar7 + '\x01';
          DAT_0d2a = cVar7;
        }
        if ((cVar7 == '\x03') && (bVar6 < 3)) {
          if (bVar6 == 2) {
            bVar2 = DAT_0d1f;
            DAT_0d1f = bVar2 | 2;
          }
          DAT_0d25 = 0;
          bVar2 = DAT_0d2c;
          uVar5 = DAT_0d29;
          (&DAT_0d3e)[bVar2] = uVar5;
          DAT_0d2c = bVar6 + 1;
          RAM08a8 = 0x4747;
          RAM08aa = 0x4747;
          DAT_08ac = 0x1c;
          goto LAB_cfde;
        }
        DAT_0d54 = 0x30;
        goto LAB_cd60;
      }
    }
    else {
      uVar5 = (undefined1)uVar4;
      uVar4 = CONCAT11(uVar5,uVar5) & 0xc0ff;
      if ((char)(uVar4 >> 8) == '@') {
        DAT_0d28 = 0;
        bVar6 = DAT_0d1f;
        if ((~bVar6 & 0x40) == 0) {
          bVar6 = DAT_0d20;
          DAT_0d20 = bVar6 & 0xf7;
          DAT_0d27 = 0;
          bVar6 = DAT_0d21;
          if ((~bVar6 & 0x80) != 0) {
            cVar7 = DAT_0d2a;
            bVar6 = DAT_0d2b;
            if (bVar6 == 0) {
              cVar7 = cVar7 + '\x01';
              DAT_0d2a = cVar7;
            }
            if ((cVar7 == '\x04') && (bVar6 < 9)) {
              if (bVar6 == 8) {
                bVar2 = DAT_0d1f;
                DAT_0d1f = bVar2 | 8;
                bVar2 = DAT_0d1f;
                DAT_0d1f = bVar2 | 4;
              }
              DAT_0d25 = 0;
              bVar2 = DAT_0d2b;
              uVar5 = DAT_0d29;
              *(undefined1 *)((short)&DAT_0d41 + (ushort)bVar2) = uVar5;
              DAT_0d2b = bVar6 + 1;
              RAM08a8 = 0x4949;
              RAM08aa = 0x4949;
              DAT_08ac = 0x24;
              goto LAB_cfde;
            }
          }
          DAT_0d54 = 0x40;
          goto LAB_cd60;
        }
      }
      else {
        bVar6 = (byte)uVar4;
        if (bVar6 == 0x3f) {
          DAT_0d28 = 0;
          bVar6 = DAT_0d1f;
          if ((~bVar6 & 0x40) == 0) {
            bVar6 = DAT_0d20;
            DAT_0d20 = bVar6 & 0xf7;
            DAT_0d27 = 0;
            bVar6 = DAT_0d2a;
            if ((2 < bVar6) && (bVar6 < 5)) {
              bVar6 = DAT_0d20;
              if ((~bVar6 & 0x10) == 0) goto LAB_cd60;
              DAT_0d25 = 0;
              bVar6 = DAT_0d1f;
              if ((((bVar6 & 8) != 0) && (bVar6 = DAT_0d21, (bVar6 & 0x40) == 0)) ||
                 (bVar6 = DAT_0d21, (bVar6 & 0x20) == 0)) {
                RAM08a8 = 0x4949;
                RAM08aa = 0x4949;
                DAT_08ac = 0x24;
                goto LAB_cfde;
              }
              bVar6 = DAT_0d21;
              if ((bVar6 & 0x10) == 0) {
                bVar6 = DAT_0d21;
                DAT_0d21 = bVar6 | 1;
                RAM08a8 = 0x4646;
                RAM08aa = 0x4646;
                DAT_08ac = 0x18;
                goto LAB_cfde;
              }
              bVar6 = DAT_0d2d;
              bVar6 = (bVar6 + 1) - (0xfe < bVar6);
              DAT_0d2d = bVar6;
              if (bVar6 < 5) {
                if (3 < bVar6) {
                  bVar6 = DAT_0d1f;
                  DAT_0d1f = bVar6 | 0x80;
                  bVar6 = DAT_0d21;
                  if ((bVar6 & 1) != 0) {
                    bVar6 = DAT_0d21;
                    DAT_0d21 = bVar6 & 0xfe;
                    DAT_0b2f = 0;
                    bVar6 = DAT_0881;
                    if ((~bVar6 & 0x20) != 0) {
                      bVar6 = DAT_0d21;
                      DAT_0d21 = bVar6 | 2;
                    }
                  }
                  bVar6 = DAT_0d21;
                  if ((bVar6 & 4) != 0) {
                    RAM08a8 = 0x4242;
                    RAM08aa = 0x4242;
                    DAT_08ac = 8;
                    goto LAB_cfde;
                  }
                }
                RAM08a8 = 0x4545;
                RAM08aa = 0x4545;
                DAT_08ac = 0x14;
                goto LAB_cfde;
              }
            }
            RAM08a8 = 0x4444;
            RAM08aa = 0x4444;
            DAT_08ac = 0x10;
            goto LAB_cfde;
          }
        }
        else if ((bVar6 < 0x33) || (0x37 < bVar6)) {
          if ((bVar6 != 0xfe) && (((bVar6 != 1 && (bVar6 != 2)) && (bVar6 != 5)))) {
            if (bVar6 == 0xfd) {
              bVar6 = DAT_0d21;
              DAT_0d21 = bVar6 | 4;
            }
            else {
              bVar6 = DAT_0d1f;
              if ((bVar6 & 0x40) != 0) {
                bVar6 = DAT_0d20;
                DAT_0d20 = bVar6 | 0x40;
                DAT_0d54 = 0xff;
                goto LAB_cd60;
              }
            }
          }
        }
        else {
          DAT_0d54 = 0xe0;
          DAT_0d28 = 0;
          if ((bVar6 == 0x37) || (bVar6 = DAT_0d1f, (bVar6 & 0x40) != 0)) {
            bVar6 = DAT_0d20;
            DAT_0d20 = bVar6 & 0xf7;
            DAT_0d27 = 0;
            bVar6 = DAT_0d25;
            bVar6 = (bVar6 + 1) - (0xfe < bVar6);
            DAT_0d25 = bVar6;
            bVar2 = DAT_0e50;
            if (bVar2 <= bVar6) {
              bVar6 = DAT_0d21;
              DAT_0d21 = bVar6 | 1;
            }
            bVar6 = DAT_0d20;
            DAT_0d20 = bVar6 | 0x80;
            bVar6 = DAT_0d1f;
            DAT_0d1f = bVar6 & 0x7f;
            DAT_0d2a = 0;
            DAT_0d2b = 0;
            DAT_0d2c = 0;
            DAT_08a8 = 0;
            RAM08a9 = (ushort)param_1;
            RAM08ab = (ushort)param_1;
            goto LAB_cfde;
          }
        }
      }
    }
  }
  bVar6 = DAT_0020;
  DAT_0020 = bVar6 | 4;
  DAT_00cb = 0;
  bVar6 = DAT_0d20;
  DAT_0d20 = bVar6 | 8;
  bVar6 = DAT_0d20;
  DAT_0d20 = bVar6 & 0xfb;
  DAT_0d26 = 0;
  DAT_08a8 = 0;
  RAM08a9 = 0x48;
  RAM08ab = 0x48;
LAB_cfde:
  bVar6 = DAT_08b0;
  DAT_08b0 = bVar6 & 0xbf;
  bVar6 = DAT_08b0;
  DAT_08b0 = bVar6 | 0x20;
  bVar6 = DAT_08b0;
  DAT_08b0 = bVar6 | 1;
  return;
}


/* Entry cfeb */

void FUN_cfeb(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = DAT_0bff;
  cVar3 = DAT_0c00;
  if (cVar2 != cVar3) {
    DAT_0894 = 0;
    DAT_0c05 = 0;
    DAT_0c08 = 0;
    DAT_0c07 = 0;
    DAT_0c04 = 0;
    DAT_0c06 = 0;
    DAT_0c01 = 0;
    DAT_0c02 = 0;
    DAT_0ba3 = 0;
    bVar1 = DAT_0893;
    DAT_0893 = bVar1 & 0xef;
    cVar2 = DAT_0d79;
    if (cVar3 == cVar2) {
      FUN_d120();
    }
    else {
      cVar2 = DAT_0d7c;
      if (cVar3 == cVar2) {
        prefix_candidate_d7d0();
      }
      else {
        cVar2 = DAT_0d7d;
        if (cVar3 == cVar2) {
          prefix_candidate_d7eb();
        }
        else {
          cVar2 = DAT_0d7e;
          if (cVar3 == cVar2) {
            FUN_d160();
          }
          else {
            cVar2 = DAT_0d7f;
            if (cVar3 == cVar2) {
              FUN_d173();
            }
            else {
              cVar2 = DAT_0d80;
              if (cVar3 == cVar2) {
                FUN_d186();
              }
              else {
                cVar2 = DAT_0d81;
                if (cVar3 == cVar2) {
                  FUN_d192();
                }
                else {
                  cVar2 = DAT_0d82;
                  if (cVar3 == cVar2) {
                    FUN_d1a1();
                  }
                  else {
                    cVar2 = DAT_0d83;
                    if (cVar3 == cVar2) {
                      FUN_d1b6();
                    }
                    else {
                      cVar2 = DAT_0d84;
                      if (cVar3 == cVar2) {
                        FUN_d1be();
                      }
                      else {
                        cVar2 = DAT_0d85;
                        if (cVar3 == cVar2) {
                          FUN_d1c0();
                        }
                        else {
                          cVar2 = DAT_0d86;
                          if (cVar3 == cVar2) {
                            FUN_d1c9();
                          }
                          else {
                            cVar2 = DAT_0d87;
                            if (cVar3 == cVar2) {
                              FUN_d1d5();
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
    cVar2 = DAT_0bff;
    cVar3 = DAT_0d79;
    if (cVar2 == cVar3) {
      FUN_d11c();
    }
    else {
      cVar3 = DAT_0d7c;
      if (cVar2 == cVar3) {
        FUN_d124();
      }
      else {
        cVar3 = DAT_0d7d;
        if (cVar2 == cVar3) {
          FUN_d13f();
        }
        else {
          cVar3 = DAT_0d7e;
          if (cVar2 == cVar3) {
            FUN_d158();
          }
          else {
            cVar3 = DAT_0d7f;
            if (cVar2 == cVar3) {
              FUN_d16b();
            }
            else {
              cVar3 = DAT_0d80;
              if (cVar2 == cVar3) {
                FUN_d17e();
              }
              else {
                cVar3 = DAT_0d81;
                if (cVar2 == cVar3) {
                  FUN_d18a();
                }
                else {
                  cVar3 = DAT_0d82;
                  if (cVar2 == cVar3) {
                    FUN_d199();
                  }
                  else {
                    cVar3 = DAT_0d83;
                    if (cVar2 == cVar3) {
                      FUN_d1a8();
                    }
                    else {
                      cVar3 = DAT_0d84;
                      if (cVar2 == cVar3) {
                        FUN_d1bd();
                      }
                      else {
                        cVar3 = DAT_0d85;
                        if (cVar2 == cVar3) {
                          FUN_d1bf();
                        }
                        else {
                          cVar3 = DAT_0d86;
                          if (cVar2 == cVar3) {
                            FUN_d1c1();
                          }
                          else {
                            cVar3 = DAT_0d87;
                            if (cVar2 == cVar3) {
                              FUN_d1cd();
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
  return;
}


/* Entry d11c */

void FUN_d11c(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d120 */

void FUN_d120(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  return;
}


/* Entry d124 */

void FUN_d124(void)

{
  byte bVar1;
  
  bVar1 = DAT_0894;
  DAT_0894 = bVar1 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d12c */

void prefix_candidate_d7d0(void)

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


/* Entry d13f */

void FUN_d13f(void)

{
  byte bVar1;
  
  bVar1 = DAT_0894;
  DAT_0894 = bVar1 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d147 */

void prefix_candidate_d7eb(void)

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


/* Entry d158 */

void FUN_d158(void)

{
  byte bVar1;
  
  bVar1 = DAT_0894;
  DAT_0894 = bVar1 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d160 */

void FUN_d160(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xfe;
  bVar1 = DAT_0889;
  DAT_0889 = bVar1 & 0x7f;
  return;
}


/* Entry d16b */

void FUN_d16b(void)

{
  byte bVar1;
  
  bVar1 = DAT_0894;
  DAT_0894 = bVar1 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d173 */

void FUN_d173(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00e0;
  DAT_00e0 = bVar1 | 0x80;
  bVar1 = DAT_0aac;
  DAT_0aac = bVar1 & 0xfe;
  return;
}


/* Entry d17e */

void FUN_d17e(void)

{
  byte bVar1;
  
  bVar1 = DAT_0894;
  DAT_0894 = bVar1 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d186 */

void FUN_d186(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  return;
}


/* Entry d18a */

void FUN_d18a(void)

{
  byte bVar1;
  
  bVar1 = DAT_0894;
  DAT_0894 = bVar1 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d192 */

void FUN_d192(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xfb;
  return;
}


/* Entry d199 */

void FUN_d199(void)

{
  byte bVar1;
  
  bVar1 = DAT_0894;
  DAT_0894 = bVar1 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d1a1 */

void FUN_d1a1(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xef;
  return;
}


/* Entry d1a8 */

void FUN_d1a8(void)

{
  byte bVar1;
  
  bVar1 = DAT_0894;
  DAT_0894 = bVar1 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  DAT_00a0 = 0;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xfd;
  return;
}


/* Entry d1b6 */

void FUN_d1b6(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0xfd;
  return;
}


/* Entry d1bd */

void FUN_d1bd(void)

{
  return;
}


/* Entry d1be */

void FUN_d1be(void)

{
  return;
}


/* Entry d1bf */

void FUN_d1bf(void)

{
  return;
}


/* Entry d1c0 */

void FUN_d1c0(void)

{
  return;
}


/* Entry d1c1 */

void FUN_d1c1(void)

{
  byte bVar1;
  
  bVar1 = DAT_0894;
  DAT_0894 = bVar1 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d1c9 */

void FUN_d1c9(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  return;
}


/* Entry d1cd */

void FUN_d1cd(void)

{
  byte bVar1;
  
  bVar1 = DAT_0894;
  DAT_0894 = bVar1 | 0x80;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  return;
}


/* Entry d1d5 */

void FUN_d1d5(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  return;
}


/* Entry d1d9 */

void FUN_d1d9(undefined2 *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  short sVar5;
  ushort uVar6;
  char cVar7;
  byte *pbVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined1 extraout_A;
  undefined1 extraout_A_00;
  byte extraout_A_01;
  byte extraout_A_02;
  undefined1 uVar11;
  byte bVar12;
  short sVar13;
  byte bVar19;
  char cVar20;
  undefined *puVar14;
  ushort uVar15;
  ushort *puVar16;
  ushort uVar17;
  byte bVar21;
  undefined2 uVar18;
  undefined2 *puVar22;
  
  bVar21 = DAT_08c0;
  DAT_08c0 = bVar21 | 0x80;
  DAT_004e = 2;
  bVar21 = DAT_00e1;
  if ((bVar21 & 2) != 0) {
    bVar21 = DAT_08c0;
    DAT_08c0 = bVar21 | 0x40;
    bVar21 = DAT_004b;
    DAT_004b = bVar21 & 0xfb | 8;
    goto LAB_d57e;
  }
  bVar21 = DAT_08c0;
  DAT_08c0 = bVar21 | 0x20;
  bVar21 = DAT_0883;
  DAT_0883 = bVar21 | 4;
  bVar21 = DAT_0880;
  DAT_0880 = bVar21 | 8;
  DAT_0b96 = 0;
  DAT_0bea = 0;
  cVar20 = DAT_0d89;
  if ((((cVar20 != -0x80) && (bVar21 = DAT_08a3, (~bVar21 & 4) != 0)) &&
      (bVar21 = DAT_08b4, (~bVar21 & 0x80) != 0)) && (bVar21 = DAT_08b1, (bVar21 & 0x40) != 0)) {
    bVar21 = DAT_08b1;
    DAT_08b1 = bVar21 & 0xbf;
    bVar21 = DAT_0bf4;
    DAT_0bf4 = bVar21 | 0x80;
  }
  bVar21 = DAT_0881;
  if ((((bVar21 & 0x20) != 0) && (cVar20 = DAT_0d9c, cVar20 != -0x80)) &&
     (bVar21 = DAT_08b4, (bVar21 & 0x40) != 0)) {
    bVar21 = DAT_08b4;
    DAT_08b4 = bVar21 & 0xbf;
    bVar21 = DAT_0bf4;
    DAT_0bf4 = bVar21 | 0x10;
  }
  bVar21 = DAT_0b30;
  bVar12 = DAT_0d9d;
  if (bVar12 <= bVar21) {
    DAT_0b2e = 0;
  }
  uVar11 = DAT_0c29;
  DAT_0c31 = uVar11;
  uVar18 = DAT_0c2a;
  DAT_0c32 = uVar18;
  sVar13 = DAT_0052;
  sVar5 = DAT_0b22;
  DAT_0c2a = sVar13 - sVar5;
  uVar18 = DAT_0052;
  DAT_0b22 = uVar18;
  bVar21 = DAT_0c24;
  if ((short)((ushort)bVar21 << 8) < 0) {
    bVar21 = 0xff;
  }
  else if (bVar21 < 8) {
    bVar21 = 0;
  }
  else {
    bVar12 = DAT_0c2a._0_1_;
    bVar21 = (byte)(bVar21 + ((byte)~bVar12 >> 4)) >> 4;
  }
  DAT_0c29 = bVar21;
  bVar21 = DAT_0d21;
  if (((~bVar21 & 1) != 0) && (bVar21 = DAT_0880, (bVar21 & 1) != 0)) {
    bVar21 = DAT_0ccc;
    bVar21 = (bVar21 + 1) - (0xfe < bVar21);
    DAT_0ccc = bVar21;
    bVar12 = DAT_0d9e;
    if ((bVar12 <= bVar21) &&
       ((bVar21 = DAT_0c25, 0xbf < bVar21 || (bVar21 = DAT_0d21, (bVar21 & 2) != 0)))) {
      bVar21 = DAT_0883;
      DAT_0883 = bVar21 | 0x10;
      bVar21 = DAT_0d21;
      DAT_0d21 = bVar21 & 0xfd;
    }
  }
  uVar17 = DAT_0e12;
  DAT_0c50 = uVar17;
  uVar15 = DAT_0c50;
  sVar13 = uVar17 + uVar15;
  if (CARRY2(uVar17,uVar15)) {
    sVar13 = -1;
  }
  DAT_0c52 = sVar13;
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    FUN_ec11();
  }
  else {
    bVar21 = DAT_0884;
    if (((~bVar21 & 4) != 0) && (bVar21 = DAT_0c1a, (~bVar21 & 0x80) != 0)) {
      FUN_eb0d();
    }
  }
  DAT_0b40 = 0;
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    uVar11 = DAT_0c49;
    DAT_0c45 = uVar11;
    uVar18 = DAT_0c4a;
    DAT_0c46 = uVar18;
    bVar21 = DAT_0c25;
    if ((bVar21 & 0x1f) == 10) {
      cVar20 = DAT_0c29;
      if ((cVar20 == '\0') && (uVar15 = DAT_0c2a, uVar15 < 0x100)) goto LAB_d57e;
      uVar11 = DAT_0c29;
      DAT_0c4d = uVar11;
      uVar18 = DAT_0c2a;
      DAT_0c4e = uVar18;
      bVar21 = DAT_0c29;
      DAT_0c49 = bVar21 >> 1;
      uVar18 = DAT_0c2a;
      bVar12 = (byte)((ushort)uVar18 >> 8);
      DAT_0c4a = CONCAT11(bVar12 >> 1 | bVar21 << 7,(byte)uVar18 >> 1 | bVar12 << 7);
    }
    else {
      cVar20 = DAT_0c29;
      if ((cVar20 == '\0') && (uVar15 = DAT_0c2a, uVar15 < 0x80)) goto LAB_d57e;
      uVar11 = DAT_0c29;
      DAT_0c49 = uVar11;
      uVar15 = DAT_0c2a;
      DAT_0c4a = uVar15;
      uVar17 = DAT_0c46;
      DAT_0c4e = uVar15 + uVar17;
      cVar7 = DAT_0c49;
      cVar20 = DAT_0c45;
      DAT_0c4d = cVar7 + cVar20 + CARRY2(uVar15,uVar17);
    }
    bVar21 = DAT_0c25;
    bVar21 = bVar21 & 0x1f;
    if (bVar21 == 0) {
      param_1 = (undefined2 *)DAT_0c4a;
      cVar20 = DAT_0c49;
      if (cVar20 != '\0') {
        param_1 = (undefined2 *)&UNK_ffff;
      }
      DAT_0a38 = param_1;
      DAT_0a42 = param_1;
      bVar21 = DAT_0eaf;
      if ((bVar21 & 0x80) != 0) {
        uVar11 = DAT_093b;
        DAT_0941 = uVar11;
      }
      DAT_093b = 0;
      cVar20 = DAT_0c4d;
      if (cVar20 == '\0') {
        uVar15 = DAT_0c4e;
      }
      else {
        uVar15 = 0xffff;
      }
LAB_d50e:
      uVar17 = DAT_0a38;
      sVar13 = uVar15 + uVar17;
      if (CARRY2(uVar15,uVar17)) {
        sVar13 = -1;
      }
    }
    else {
      if (bVar21 == 1) {
LAB_d3c0:
        param_1 = (undefined2 *)DAT_0c4a;
        cVar20 = DAT_0c49;
        if (cVar20 != '\0') {
          param_1 = (undefined2 *)&UNK_ffff;
        }
        DAT_0a38 = param_1;
        DAT_0a44 = param_1;
        bVar21 = DAT_0eaf;
        if ((bVar21 & 0x80) != 0) {
          uVar11 = DAT_093c;
          DAT_0941 = uVar11;
        }
        DAT_093c = 0;
        uVar17 = DAT_0a42;
        uVar6 = DAT_0a4c;
        uVar15 = uVar17 + uVar6;
        if (CARRY2(uVar17,uVar6)) {
          uVar15 = 0xffff;
        }
        goto LAB_d50e;
      }
      if (bVar21 == 2) {
LAB_d3f1:
        param_1 = (undefined2 *)DAT_0c4a;
        cVar20 = DAT_0c49;
        if (cVar20 != '\0') {
          param_1 = (undefined2 *)&UNK_ffff;
        }
        DAT_0a38 = param_1;
        DAT_0a46 = param_1;
        bVar21 = DAT_0eaf;
        if ((bVar21 & 0x80) != 0) {
          uVar11 = DAT_093d;
          DAT_0941 = uVar11;
        }
        DAT_093d = 0;
        uVar6 = DAT_0a44;
        uVar17 = DAT_0a42;
        uVar15 = uVar6 + uVar17;
        if (CARRY2(uVar6,uVar17)) {
          uVar15 = 0xffff;
        }
        goto LAB_d50e;
      }
      if (bVar21 == 3) {
LAB_d422:
        param_1 = (undefined2 *)DAT_0c4a;
        cVar20 = DAT_0c49;
        if (cVar20 != '\0') {
          param_1 = (undefined2 *)&UNK_ffff;
        }
        DAT_0a38 = param_1;
        DAT_0a48 = param_1;
        bVar21 = DAT_0eaf;
        if ((bVar21 & 0x80) != 0) {
          uVar11 = DAT_093e;
          DAT_0941 = uVar11;
        }
        DAT_093e = 0;
        uVar6 = DAT_0a46;
        uVar17 = DAT_0a44;
        uVar15 = uVar6 + uVar17;
        if (CARRY2(uVar6,uVar17)) {
          uVar15 = 0xffff;
        }
        goto LAB_d50e;
      }
      if (bVar21 == 4) {
        param_1 = (undefined2 *)DAT_0c4a;
        cVar20 = DAT_0c49;
        if (cVar20 != '\0') {
          param_1 = (undefined2 *)&UNK_ffff;
        }
        DAT_0a38 = param_1;
        DAT_0a4a = param_1;
        bVar21 = DAT_0eaf;
        if ((bVar21 & 0x80) != 0) {
          bVar21 = DAT_093f;
          DAT_0941 = (char)(((ushort)bVar21 << 7) >> 8);
        }
        DAT_093f = 0;
        uVar6 = DAT_0a48;
        uVar17 = DAT_0a46;
        uVar15 = uVar6 + uVar17;
        if (CARRY2(uVar6,uVar17)) {
          uVar15 = 0xffff;
        }
        goto LAB_d50e;
      }
      if (bVar21 == 5) {
        param_1 = (undefined2 *)DAT_0c4a;
        cVar20 = DAT_0c49;
        if (cVar20 != '\0') {
          param_1 = (undefined2 *)&UNK_ffff;
        }
        DAT_0a38 = param_1;
        DAT_0a4c = param_1;
        bVar21 = DAT_0eaf;
        if ((bVar21 & 0x80) != 0) {
          uVar11 = DAT_0940;
          DAT_0941 = uVar11;
        }
        DAT_0940 = 0;
        bVar21 = DAT_0eaf;
        DAT_0eaf = bVar21 | 0x80;
        uVar17 = DAT_0a48;
        uVar6 = DAT_0a4a;
        uVar15 = uVar17 + uVar6;
        if (CARRY2(uVar17,uVar6)) {
          uVar15 = 0xffff;
        }
        goto LAB_d50e;
      }
      if (bVar21 == 6) {
        param_1 = (undefined2 *)DAT_0c4a;
        cVar20 = DAT_0c49;
        if (cVar20 != '\0') {
          param_1 = (undefined2 *)&UNK_ffff;
        }
        DAT_0a38 = param_1;
        DAT_0a42 = param_1;
        uVar11 = DAT_093b;
        DAT_0941 = uVar11;
        DAT_093b = 0;
        uVar6 = DAT_0a4c;
        uVar17 = DAT_0a4a;
        uVar15 = uVar6 + uVar17;
        if (CARRY2(uVar6,uVar17)) {
          uVar15 = 0xffff;
        }
        goto LAB_d50e;
      }
      if (bVar21 == 7) goto LAB_d3c0;
      if (bVar21 == 8) goto LAB_d3f1;
      if (bVar21 == 9) goto LAB_d422;
      param_1 = (undefined2 *)DAT_0c4a;
      cVar20 = DAT_0c49;
      if (cVar20 != '\0') {
        param_1 = (undefined2 *)&UNK_ffff;
      }
      DAT_0a38 = param_1;
      DAT_0a4c = param_1;
      DAT_0a4a = param_1;
      uVar11 = DAT_0940;
      DAT_0941 = uVar11;
      DAT_0940 = 0;
      cVar20 = DAT_0c4d;
      if (cVar20 == '\0') {
        uVar15 = DAT_0a48;
        uVar17 = DAT_0c4e;
        sVar13 = uVar15 + uVar17;
        if (CARRY2(uVar15,uVar17)) goto LAB_d509;
      }
      else {
LAB_d509:
        sVar13 = -1;
      }
    }
    DAT_0a3e = sVar13;
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    cVar20 = DAT_0c25;
    bVar21 = cVar20 + 1;
    if (10 < bVar21) {
      bVar21 = 0;
    }
    DAT_0c25 = bVar21;
    DAT_0c26 = bVar21 & 0x1f;
    bVar21 = DAT_0884;
    if (((~bVar21 & 4) == 0) || (bVar21 = DAT_0c1a, (~bVar21 & 0x80) == 0)) {
LAB_d569:
      DAT_093b = 0;
      DAT_093c = 0;
      DAT_093d = 0;
      DAT_093e = 0;
      DAT_093f = 0;
      DAT_0940 = 0;
      DAT_0b40 = 0;
      goto LAB_d57e;
    }
    bVar21 = DAT_0942;
    if (bVar21 < 0x16) {
      sVar13 = DAT_0b94;
      param_1 = (undefined2 *)(sVar13 + 1);
      DAT_0b94 = param_1;
      if (bVar21 == 10) {
        bVar21 = 0xb;
      }
      uVar15 = (ushort)(byte)(bVar21 + 1) << 8;
    }
    else {
      bVar21 = DAT_0942;
      if (0xbf < bVar21) {
        DAT_0942 = (bVar21 + 1) - (0xfe < bVar21);
        goto LAB_d569;
      }
      sVar13 = DAT_0b94;
      DAT_0b94 = sVar13 + 1;
      cVar20 = DAT_0942;
      cVar20 = cVar20 + '\x01';
      if (cVar20 == '\v') {
        cVar20 = '\f';
      }
      uVar15 = CONCAT11(cVar20,cVar20) & 0xff1f;
      if (0x16 < (byte)uVar15) {
        uVar15 = (ushort)(byte)((char)(uVar15 >> 8) - 0x17) << 8;
      }
    }
    DAT_0942 = (char)(uVar15 >> 8);
    bVar21 = DAT_0942;
    DAT_0943 = bVar21 & 0x1f;
  }
  uVar11 = DAT_0085;
  DAT_08c6 = uVar11;
  bVar21 = DAT_088d;
  DAT_088d = bVar21 | 1;
  DAT_0085 = 1;
  sVar13 = DAT_0044;
  DAT_08cc = sVar13 + 0x4b;
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar12 = DAT_0c26;
    bVar21 = DAT_0941;
    if (0x33 < bVar21) {
      DAT_0a38 = 0xffff;
    }
    bVar9 = DAT_0a38._0_1_;
    bVar21 = DAT_0880;
    if ((~bVar21 & 1) == 0) {
      bVar21 = DAT_0dd0;
      if (bVar21 <= bVar9) {
        bVar21 = DAT_0b92;
        bVar9 = DAT_0dd1;
        if (bVar21 < bVar9) {
          bVar21 = DAT_0885;
          DAT_0885 = bVar21 | 0x40;
          goto LAB_d67b;
        }
      }
      bVar21 = DAT_0885;
      DAT_0885 = bVar21 & 0xbf;
      bVar21 = DAT_0884;
      DAT_0884 = bVar21 & 0xfb;
    }
    else {
      bVar21 = DAT_0880;
      if (((bVar21 & 2) != 0) && ((byte)(&DAT_0dc5)[bVar12] <= bVar9)) {
        bVar21 = DAT_0884;
        DAT_0884 = bVar21 | 4;
        DAT_0b32 = 0;
        FUN_f3a8();
        bVar21 = DAT_088d;
        if ((bVar21 & 1) != 0) {
          bVar21 = DAT_088d;
          DAT_088d = bVar21 & 0xfe;
          FUN_ee67();
        }
        goto LAB_d57e;
      }
      bVar21 = DAT_0b92;
      bVar9 = DAT_0dd1;
      if (bVar9 <= bVar21) {
        bVar21 = DAT_0885;
        DAT_0885 = bVar21 & 0xbf;
      }
    }
LAB_d67b:
    bVar21 = DAT_0c1a;
    if (((((~bVar21 & 0x80) != 0) && (bVar21 = DAT_0c1a, (bVar21 & 0x40) != 0)) &&
        (bVar21 = DAT_0a38._0_1_, (byte)(&DAT_0dc5)[bVar12] <= bVar21)) &&
       (bVar21 = DAT_0c1a, (~bVar21 & 0x20) != 0)) {
      bVar21 = DAT_0c1a;
      DAT_0c1a = bVar21 | 0x80;
      DAT_0c1b = 0;
      FUN_f3a8();
      bVar21 = DAT_088d;
      if ((bVar21 & 1) != 0) {
        bVar21 = DAT_088d;
        DAT_088d = bVar21 & 0xfe;
        FUN_ee67();
      }
LAB_d57e:
      DAT_0b33 = 0;
      DAT_004e = 2;
      DAT_0c24 = 0;
      sVar13 = DAT_0b22;
      DAT_0c22 = &UNK_1007 + sVar13;
      bVar21 = DAT_08c0;
      DAT_08c0 = bVar21 & 0xdf;
      bVar21 = DAT_08c0;
      DAT_08c0 = bVar21 & 0xbf;
      bVar21 = DAT_08c0;
      DAT_08c0 = bVar21 & 0x7f;
      return;
    }
    bVar21 = DAT_0882;
    DAT_0882 = bVar21 | 0x80;
  }
  DAT_0b33 = 0;
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    cVar20 = DAT_0d95;
    if (((cVar20 != -0x80) && (bVar21 = DAT_08a3, (~bVar21 & 4) != 0)) &&
       (bVar21 = DAT_08b4, (~bVar21 & 0x80) != 0)) {
      bVar21 = DAT_0880;
      if ((~bVar21 & 1) == 0) {
LAB_d6d9:
        bVar21 = DAT_0889;
        DAT_0889 = bVar21 | 1;
      }
      else {
        bVar21 = DAT_0ba0;
        bVar12 = DAT_0dd2;
        if (bVar12 <= bVar21) goto LAB_d6d9;
        bVar21 = DAT_0889;
        DAT_0889 = bVar21 & 0xfe;
      }
      bVar21 = DAT_0bf0;
      bVar12 = DAT_0dd4;
      if (bVar21 < bVar12) {
        bVar21 = DAT_0889;
        DAT_0889 = bVar21 & 0xbf;
      }
      else {
        bVar21 = DAT_0889;
        DAT_0889 = bVar21 | 0x40;
      }
      cVar20 = DAT_0d95;
      if ((((cVar20 != -0x80) && (bVar21 = DAT_0880, (~bVar21 & 0x80) != 0)) &&
          (((bVar21 = DAT_0d21, (~bVar21 & 1) != 0 &&
            (((bVar21 = DAT_0884, (~bVar21 & 2) != 0 && (bVar21 = DAT_0884, (~bVar21 & 4) != 0)) &&
             (bVar21 = DAT_088c, (~bVar21 & 0x80) != 0)))) &&
           ((bVar21 = DAT_0d71, (~bVar21 & 0x80) != 0 && (bVar21 = DAT_0885, (~bVar21 & 0x40) != 0))
           )))) && ((bVar21 = DAT_0c1a, (~bVar21 & 0x80) != 0 &&
                    (bVar21 = DAT_089d, (~bVar21 & 0x80) != 0)))) {
        bVar21 = DAT_0cca;
        if ((bVar21 & 1) == 0) {
          cVar20 = DAT_0c26;
        }
        else {
          cVar20 = DAT_0942;
        }
        bVar21 = DAT_088c;
        if ((((~bVar21 & 2) == 0) || (bVar21 = DAT_089c, (~bVar21 & 2) == 0)) || (cVar20 != '\b'))
        goto LAB_d7cb;
        bVar21 = DAT_0a98;
        if ((bVar21 & 8) != 0) {
          bVar21 = DAT_004e;
          if ((bVar21 & 0x20) == 0) {
            DAT_0b87 = 0;
            bVar21 = DAT_0889;
            if (((bVar21 & 1) == 0) || (bVar21 = DAT_0889, (bVar21 & 0x40) == 0)) {
              DAT_0b7d = 0;
            }
            else {
              bVar21 = DAT_0b7d;
              bVar21 = (bVar21 + 1) - (0xfe < bVar21);
              DAT_0b7d = bVar21;
              bVar12 = DAT_0dd5;
              if ((bVar12 <= bVar21) && (bVar21 = DAT_08b3, (~bVar21 & 0x80) != 0)) {
                bVar21 = DAT_08b3;
                DAT_08b3 = bVar21 | 0x80;
                bVar21 = DAT_0bf4;
                DAT_0bf4 = bVar21 | 0x20;
                bVar21 = DAT_08bc;
                if ((~bVar21 & 0x80) != 0) {
                  bVar21 = DAT_08bc;
                  DAT_08bc = bVar21 | 0x80;
                  bVar21 = DAT_0bf4;
                  DAT_0bf4 = bVar21 | 2;
                }
              }
            }
          }
          else {
            DAT_0b7d = 0;
            bVar21 = DAT_0b87;
            bVar21 = (bVar21 + 1) - (0xfe < bVar21);
            DAT_0b87 = bVar21;
            bVar12 = DAT_0dd3;
            if ((bVar12 <= bVar21) && (bVar21 = DAT_08b3, (bVar21 & 0x80) != 0)) {
              bVar21 = DAT_08b3;
              DAT_08b3 = bVar21 & 0x7f;
              bVar21 = DAT_0bf4;
              DAT_0bf4 = bVar21 | 0x20;
            }
          }
        }
      }
    }
    bVar21 = DAT_0cca;
    if ((bVar21 & 1) == 0) {
      uVar11 = DAT_0c26;
    }
    else {
      uVar11 = DAT_0942;
    }
    DAT_004e = 0x20;
  }
LAB_d7cb:
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0cca;
    if ((bVar21 & 1) == 0) {
      cVar20 = DAT_0c26;
    }
    else {
      cVar20 = DAT_0942;
    }
    if (cVar20 == '\n') {
      bVar21 = DAT_0a98;
      DAT_0a98 = bVar21 & 0x77;
    }
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0a38._0_1_;
    bVar12 = DAT_0dd6;
    if (bVar21 < bVar12) {
      bVar12 = DAT_0dd7;
      if (bVar21 < bVar12) {
        uVar11 = DAT_0881;
        bVar21 = DAT_0881;
        DAT_0881 = bVar21 & 0xef;
      }
    }
    else {
      bVar21 = DAT_0881;
      DAT_0881 = bVar21 | 0x10;
      uVar11 = DAT_0dd8;
      DAT_0a2c = uVar11;
    }
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0a38._0_1_;
    bVar12 = DAT_0dda;
    if (((bVar21 < bVar12) || (bVar12 = DAT_0880, (~bVar12 & 1) != 0)) &&
       (bVar12 = DAT_0dd9, bVar21 < bVar12)) {
      bVar12 = DAT_0cca;
      if ((bVar12 & 1) == 0) {
        cVar20 = DAT_0c26;
      }
      else {
        cVar20 = DAT_0942;
      }
      if (cVar20 == '\0') {
        bVar12 = DAT_0880;
        DAT_0880 = bVar12 & 0xbf;
      }
      bVar12 = DAT_0dd9;
      if (bVar12 <= bVar21) goto LAB_d855;
      if (cVar20 == '\0') {
        bVar21 = DAT_0880;
        DAT_0880 = bVar21 & 0xfb;
      }
    }
    else {
      bVar21 = DAT_0880;
      DAT_0880 = bVar21 | 0x40;
LAB_d855:
      bVar21 = DAT_0880;
      DAT_0880 = bVar21 | 4;
      DAT_0a8e = 0x80;
    }
    bVar21 = DAT_0881;
    DAT_0881 = bVar21 & 0xdf;
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    FUN_e778();
    FUN_e7d0();
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0cca;
    if ((bVar21 & 1) == 0) {
      cVar20 = DAT_0c26;
    }
    else {
      cVar20 = DAT_0942;
    }
    if (cVar20 == '\0') {
      bVar21 = DAT_0887;
      DAT_0887 = bVar21 | 2;
    }
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    cVar20 = DAT_0943;
    if (((cVar20 == '\0') || (cVar20 == '\x06')) || ((cVar20 == '\f' || (cVar20 == '\x12')))) {
      bVar21 = DAT_0881;
      DAT_0881 = bVar21 | 4;
      bVar21 = DAT_0887;
      DAT_0887 = bVar21 | 1;
    }
    bVar21 = DAT_0cca;
    if (((bVar21 & 1) != 0) && (cVar7 = DAT_0e00, cVar20 == (char)(cVar7 + '\x04'))) {
      bVar21 = DAT_0881;
      DAT_0881 = bVar21 | 2;
    }
    bVar21 = DAT_088b;
    if ((bVar21 & 0x80) == 0) {
      bVar12 = DAT_0c26;
      bVar21 = DAT_0ddb;
      bVar21 = bVar21 & 0x1f;
      if (0xb < bVar21) {
        bVar21 = bVar21 - 0xc;
      }
      if (bVar12 == bVar21) {
        bVar21 = DAT_0a29;
        DAT_0a29 = bVar21 & 0xf7;
        bVar21 = DAT_0a2b;
        DAT_0a2b = bVar21 & 0xf7;
        bVar21 = DAT_088b;
        DAT_088b = bVar21 | 0x40;
        uVar11 = DAT_0a34._0_1_;
        DAT_0a32._0_1_ = uVar11;
        uVar11 = DAT_0a34._1_1_;
        DAT_0a32._1_1_ = uVar11;
        uVar11 = DAT_0a2f;
        DAT_0a2e = uVar11;
      }
    }
    else {
      uVar11 = DAT_0943;
      uVar10 = DAT_0ddb;
      uVar15 = CONCAT11(uVar11,uVar10) & 0xff1f;
      if ((char)(uVar15 >> 8) == (char)uVar15) {
        bVar21 = DAT_0a29;
        DAT_0a29 = bVar21 & 0xf7;
        bVar21 = DAT_0a2b;
        DAT_0a2b = bVar21 & 0xf7;
        bVar21 = DAT_088b;
        DAT_088b = bVar21 | 0x40;
        uVar11 = DAT_0a34._0_1_;
        DAT_0a32._0_1_ = uVar11;
        uVar11 = DAT_0a34._1_1_;
        DAT_0a32._1_1_ = uVar11;
        uVar11 = DAT_0a2f;
        DAT_0a2e = uVar11;
      }
    }
    FUN_f21b();
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0cca;
    if ((~bVar21 & 1) == 0) {
      bVar21 = DAT_0943;
      bVar12 = DAT_0ddb;
      if (bVar21 == (bVar12 & 0x1f)) {
        bVar12 = DAT_088b;
        if ((~bVar12 & 0x80) == 0) {
          cVar20 = DAT_0a30;
          DAT_0a30 = cVar20 + -1 + (cVar20 == '\0');
        }
        else {
          DAT_0a30 = 0;
        }
      }
      uVar11 = DAT_0a2e;
      uVar15 = CONCAT11(bVar21,uVar11) & 0xff1f;
      if (((char)(uVar15 >> 8) == (char)uVar15) && (bVar21 = DAT_0a2b, (bVar21 & 8) != 0)) {
        FUN_e6ff();
      }
      uVar11 = DAT_0943;
      uVar10 = DAT_0ddb;
      uVar15 = CONCAT11(uVar11,uVar10) & 0xff1f;
      if ((char)(uVar15 >> 8) == (char)uVar15) {
        bVar21 = DAT_0881;
        DAT_0881 = bVar21 & 0x7f;
      }
    }
    else {
      bVar12 = DAT_0c26;
      bVar21 = DAT_0ddb;
      bVar21 = bVar21 & 0x1f;
      if (bVar21 == 0xb) {
        bVar21 = 10;
      }
      else if (10 < bVar21) {
        bVar21 = bVar21 - 0xc;
      }
      if (bVar12 == bVar21) {
        bVar21 = DAT_088b;
        if ((~bVar21 & 0x80) == 0) {
          cVar20 = DAT_0a30;
          DAT_0a30 = cVar20 + -1 + (cVar20 == '\0');
        }
        else {
          DAT_0a30 = 0;
        }
      }
      bVar21 = DAT_0a2e;
      bVar21 = bVar21 & 0x1f;
      if (bVar21 == 0xb) {
        bVar21 = 10;
      }
      else if (10 < bVar21) {
        bVar21 = bVar21 - 0xc;
      }
      if ((bVar12 == bVar21) && (bVar21 = DAT_0a2b, (bVar21 & 8) != 0)) {
        FUN_e6ff();
      }
      bVar12 = DAT_0c26;
      bVar21 = DAT_0ddb;
      bVar21 = bVar21 & 0x1f;
      if (bVar21 == 0xb) {
        bVar21 = 10;
      }
      else if (10 < bVar21) {
        bVar21 = bVar21 - 0xc;
      }
      if (bVar12 == bVar21) {
        bVar21 = DAT_0881;
        DAT_0881 = bVar21 & 0x7f;
      }
    }
  }
  cVar20 = DAT_0e54;
  if (cVar20 == '\0') {
    cVar20 = DAT_0e02;
    if (((((cVar20 != -0x80) && (bVar21 = DAT_08b1, (~bVar21 & 0x40) != 0)) &&
         (bVar21 = DAT_0884, (~bVar21 & 4) != 0)) &&
        ((bVar21 = DAT_0885, (~bVar21 & 0x40) != 0 && (bVar21 = DAT_0c1a, (~bVar21 & 0x80) != 0))))
       && (bVar21 = DAT_0c20, (bVar21 & 0x80) != 0)) {
      cVar20 = DAT_0c26;
      cVar7 = DAT_0e04;
      if (cVar20 != cVar7) {
        cVar7 = DAT_0e03;
        if (cVar20 == cVar7) {
          bVar21 = DAT_00e0;
          DAT_00e0 = bVar21 & 0x7f;
        }
        goto LAB_da23;
      }
    }
    bVar21 = DAT_00e0;
    DAT_00e0 = bVar21 | 0x80;
  }
LAB_da23:
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0942;
    if (((bVar21 & 0x1f) == 0) || ((bVar21 & 0x1f) == 0xc)) {
      uVar18 = DAT_0af2;
      DAT_0af4 = uVar18;
      sVar13 = DAT_0ae0;
      DAT_0af2 = sVar13;
      sVar5 = DAT_0af4;
      sVar13 = sVar13 - sVar5;
      bVar21 = DAT_0aef;
      if ((~bVar21 & 4) != 0) {
        sVar13 = 0;
      }
      if ((char)((ushort)sVar13 >> 8) != '\0') {
        sVar13 = 0xff;
      }
      DAT_0af0 = (char)sVar13;
      bVar21 = DAT_0aef;
      DAT_0aef = bVar21 | 4;
      bVar21 = DAT_0af0;
      bVar9 = DAT_0ddc;
      bVar12 = DAT_0af8;
      bVar19 = (byte)((ushort)bVar21 * (ushort)bVar9);
      bVar9 = (byte)((ushort)bVar21 * (ushort)bVar9 >> 8);
      bVar21 = bVar9 - (bVar19 < bVar12);
      if (bVar9 < (bVar19 < bVar12)) {
        cVar20 = -(bVar19 - bVar12);
        bVar12 = DAT_0ddd;
        iVar2 = (uint)bVar12 * (uint)CONCAT11((~bVar21 + 1) - (cVar20 != '\0'),cVar20);
        param_1 = (undefined2 *)((uint)iVar2 >> 0x10);
        uVar18 = (undefined2)iVar2;
        if (param_1 != (undefined2 *)0x0) {
          uVar18 = 0xffff;
        }
        bVar21 = DAT_0aef;
        bVar12 = (byte)((ushort)uVar18 >> 8);
        bVar9 = (byte)uVar18;
        if ((bVar21 & 1) == 0) {
          bVar19 = DAT_0af6._1_1_;
          bVar21 = bVar12 - (bVar9 < bVar19);
          uVar18 = CONCAT11(bVar21,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar12) goto LAB_da99;
          cVar20 = -(bVar9 - bVar19);
          uVar18 = CONCAT11((~bVar21 + 1) - (cVar20 != '\0'),cVar20);
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 & 0xfe;
        }
        else {
          bVar21 = DAT_0af6._1_1_;
          uVar18 = CONCAT11(bVar12 + CARRY1(bVar9,bVar21),bVar9 + bVar21);
          if (CARRY1(bVar12,CARRY1(bVar9,bVar21))) {
            uVar18 = 0xffff;
          }
LAB_da99:
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 | 1;
        }
        DAT_0af6 = uVar18;
      }
      else {
        bVar9 = DAT_0ddd;
        iVar2 = (uint)bVar9 * (uint)CONCAT11(bVar21,bVar19 - bVar12);
        param_1 = (undefined2 *)((uint)iVar2 >> 0x10);
        uVar18 = (undefined2)iVar2;
        if (param_1 != (undefined2 *)0x0) {
          uVar18 = 0xffff;
        }
        bVar21 = DAT_0aef;
        bVar12 = (byte)((ushort)uVar18 >> 8);
        bVar9 = (byte)uVar18;
        if ((bVar21 & 1) == 0) {
          bVar21 = DAT_0af6._1_1_;
          uVar18 = CONCAT11(bVar12 + CARRY1(bVar9,bVar21),bVar9 + bVar21);
          if (CARRY1(bVar12,CARRY1(bVar9,bVar21))) {
            uVar18 = 0xffff;
          }
LAB_dadb:
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 & 0xfe;
        }
        else {
          bVar19 = DAT_0af6._1_1_;
          bVar21 = bVar12 - (bVar9 < bVar19);
          uVar18 = CONCAT11(bVar21,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar12) goto LAB_dadb;
          cVar20 = -(bVar9 - bVar19);
          uVar18 = CONCAT11((~bVar21 + 1) - (cVar20 != '\0'),cVar20);
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 | 1;
        }
        DAT_0af6 = uVar18;
      }
      bVar12 = DAT_0af8;
      bVar21 = DAT_0aef;
      if ((bVar21 & 1) == 0) {
        bVar21 = DAT_0af6._0_1_;
        cVar20 = bVar12 + bVar21;
        if (CARRY1(bVar12,bVar21)) {
          cVar20 = -1;
        }
      }
      else {
        bVar21 = DAT_0af6._0_1_;
        cVar20 = bVar12 - bVar21;
        if (bVar12 < bVar21) {
          cVar20 = '\0';
        }
      }
      DAT_0af8 = cVar20;
      bVar21 = DAT_0af8;
      bVar12 = DAT_0afc;
      if (bVar21 < bVar12) {
        bVar9 = DAT_0ddd;
        sVar13 = (ushort)(byte)-(bVar21 - bVar12) * (ushort)bVar9;
        bVar21 = DAT_0aef;
        bVar12 = (byte)((ushort)sVar13 >> 8);
        bVar9 = (byte)sVar13;
        if ((bVar21 & 2) == 0) {
          bVar19 = DAT_0afa._1_1_;
          bVar21 = bVar12 - (bVar9 < bVar19);
          uVar18 = CONCAT11(bVar21,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar12) goto LAB_db22;
          cVar20 = -(bVar9 - bVar19);
          uVar18 = CONCAT11((~bVar21 + 1) - (cVar20 != '\0'),cVar20);
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 & 0xfd;
        }
        else {
          bVar21 = DAT_0afa._1_1_;
          uVar18 = CONCAT11(bVar12 + CARRY1(bVar9,bVar21),bVar9 + bVar21);
          if (CARRY1(bVar12,CARRY1(bVar9,bVar21))) {
            uVar18 = 0xffff;
          }
LAB_db22:
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 | 2;
        }
        DAT_0afa = uVar18;
      }
      else {
        bVar9 = DAT_0ddd;
        sVar13 = (ushort)(byte)(bVar21 - bVar12) * (ushort)bVar9;
        bVar21 = DAT_0aef;
        bVar12 = (byte)((ushort)sVar13 >> 8);
        bVar9 = (byte)sVar13;
        if ((bVar21 & 2) == 0) {
          bVar21 = DAT_0afa._1_1_;
          uVar18 = CONCAT11(bVar12 + CARRY1(bVar9,bVar21),bVar9 + bVar21);
          if (CARRY1(bVar12,CARRY1(bVar9,bVar21))) {
            uVar18 = 0xffff;
          }
LAB_db59:
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 & 0xfd;
        }
        else {
          bVar19 = DAT_0afa._1_1_;
          bVar21 = bVar12 - (bVar9 < bVar19);
          uVar18 = CONCAT11(bVar21,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar12) goto LAB_db59;
          cVar20 = -(bVar9 - bVar19);
          uVar18 = CONCAT11((~bVar21 + 1) - (cVar20 != '\0'),cVar20);
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 | 2;
        }
        DAT_0afa = uVar18;
      }
      bVar12 = DAT_0afc;
      bVar21 = DAT_0aef;
      if ((bVar21 & 2) == 0) {
        bVar21 = DAT_0afa._0_1_;
        cVar20 = bVar12 + bVar21;
        if (CARRY1(bVar12,bVar21)) {
          cVar20 = -1;
        }
      }
      else {
        bVar21 = DAT_0afa._0_1_;
        cVar20 = bVar12 - bVar21;
        if (bVar12 < bVar21) {
          cVar20 = '\0';
        }
      }
      DAT_0afc = cVar20;
      bVar21 = DAT_0afc;
      bVar12 = DAT_0dde;
      if (bVar21 < bVar12) {
        puVar14 = (undefined *)0x100;
      }
      else {
        bVar12 = DAT_0ddf;
        if (bVar21 < bVar12) {
          puVar14 = &UNK_0201;
        }
        else {
          bVar12 = DAT_0de0;
          if (bVar21 < bVar12) {
            puVar14 = &UNK_0402;
          }
          else {
            bVar12 = DAT_0de1;
            if (bVar21 < bVar12) {
              puVar14 = (undefined *)0x803;
            }
            else {
              bVar12 = DAT_0de2;
              if (bVar21 < bVar12) {
                puVar14 = &UNK_1004;
              }
              else {
                puVar14 = &UNK_2005;
              }
            }
          }
        }
      }
      DAT_0bed = (char)((ushort)puVar14 >> 8);
      DAT_0bec = (char)puVar14;
      cVar20 = DAT_0d97;
      if (((cVar20 != -0x80) && (bVar21 = DAT_08a3, (~bVar21 & 4) != 0)) &&
         (bVar21 = DAT_08b4, (~bVar21 & 0x80) != 0)) {
        bVar21 = DAT_088f;
        if (((~bVar21 & 0x80) == 0) || (bVar21 = DAT_0881, (~bVar21 & 0x10) == 0)) {
          DAT_0bee = 0;
          DAT_0bef = 0;
        }
        else {
          cVar20 = DAT_0bec;
          if (cVar20 == '\0') {
            bVar21 = DAT_08b8;
            if ((bVar21 & 2) != 0) {
              bVar21 = DAT_0bee;
              bVar12 = DAT_0de4;
              if (bVar21 <= bVar12) goto LAB_dc60;
              bVar21 = DAT_08b3;
              if ((~bVar21 & 8) != 0) {
                bVar21 = DAT_08b3;
                DAT_08b3 = bVar21 | 8;
                bVar21 = DAT_0bf4;
                DAT_0bf4 = bVar21 | 0x20;
                bVar21 = DAT_08bc;
                if ((~bVar21 & 8) != 0) {
                  bVar21 = DAT_08bc;
                  DAT_08bc = bVar21 | 8;
                  bVar21 = DAT_0bf4;
                  DAT_0bf4 = bVar21 | 2;
                }
              }
              bVar21 = DAT_0889;
              DAT_0889 = bVar21 & 0xfd;
              DAT_0bad = 0;
            }
            bVar21 = DAT_08b8;
            DAT_08b8 = bVar21 | 2;
          }
          else {
            bVar21 = DAT_08b8;
            if ((bVar21 & 2) == 0) {
              bVar21 = DAT_0bef;
              bVar12 = DAT_0de6;
              if ((bVar12 < bVar21) && (bVar21 = DAT_08b3, (bVar21 & 8) != 0)) {
                bVar21 = DAT_08b3;
                DAT_08b3 = bVar21 & 0xf7;
                bVar21 = DAT_0bf4;
                DAT_0bf4 = bVar21 | 0x20;
                bVar21 = DAT_08b1;
                if (((~bVar21 & 8) != 0) && (bVar21 = DAT_08b1, (~bVar21 & 4) != 0)) {
                  bVar21 = DAT_0889;
                  DAT_0889 = bVar21 | 2;
                  DAT_0bae = 0;
                  uVar11 = DAT_0a8d;
                  DAT_0bad = uVar11;
                  DAT_0baf = uVar11;
                }
              }
            }
            else {
              bVar21 = DAT_08b8;
              DAT_08b8 = bVar21 & 0xfd;
            }
          }
        }
      }
LAB_dc60:
      bVar21 = DAT_08b3;
      if ((bVar21 & 8) == 0) {
        uVar10 = DAT_0bed;
        uVar11 = DAT_0bec;
      }
      else {
        uVar10 = 0x20;
        uVar11 = 5;
      }
      DAT_089b = uVar10;
      DAT_089a = uVar11;
    }
  }
  do {
    bVar21 = DAT_008b;
    if ((~bVar21 & 2) == 0) {
      uVar18 = DAT_0092;
      DAT_08d2 = uVar18;
      bVar21 = DAT_088d;
      DAT_088d = bVar21 & 0xfd;
      goto LAB_dc91;
    }
    sVar13 = DAT_0044;
    sVar5 = DAT_08cc;
  } while (sVar13 - sVar5 < 0);
  bVar21 = DAT_088d;
  DAT_088d = bVar21 | 2;
LAB_dc91:
  cVar20 = DAT_0e05;
  if (cVar20 == -0x80) {
    DAT_0085 = 0;
    sVar13 = DAT_0044;
    DAT_08ce = sVar13 + 0x4b;
  }
  else {
    bVar21 = DAT_088d;
    DAT_088d = bVar21 & 0xfe;
    FUN_ee67();
  }
  bVar21 = DAT_088d;
  if ((~bVar21 & 2) != 0) {
    param_1 = &DAT_0c64;
    puVar22 = &DAT_0c7a;
    bVar21 = DAT_0c20;
    if ((bVar21 & 0x80) != 0) {
      bVar21 = DAT_0c26;
      param_1 = &DAT_0c64 + bVar21;
      bVar21 = DAT_0942;
      puVar22 = &DAT_0c7a + (bVar21 & 0xff1f);
    }
    uVar18 = DAT_08d2;
    *param_1 = uVar18;
    *puVar22 = uVar18;
    DAT_0c62 = uVar18;
    DAT_08c4 = 0x40;
    DAT_08c5 = 0;
  }
  cVar20 = DAT_0d8a;
  if (((cVar20 != -0x80) && (bVar21 = DAT_08a3, (~bVar21 & 4) != 0)) &&
     (bVar21 = DAT_08b4, (~bVar21 & 0x80) != 0)) {
    uVar18 = DAT_0c62;
    bVar21 = (byte)((ushort)uVar18 >> 8);
    if ((bVar21 < 0x1a) || (0xf5 < bVar21)) {
      bVar21 = DAT_08b7;
      if ((bVar21 & 0x40) == 0) {
        bVar21 = DAT_08b7;
        DAT_08b7 = bVar21 | 0x40;
        bVar21 = DAT_0bcd;
        DAT_0bcd = bVar21 | 0x20;
      }
      else {
        bVar21 = DAT_0b75;
        bVar12 = DAT_0de5;
        if ((bVar12 < bVar21) && (bVar21 = DAT_08b1, (~bVar21 & 0x20) != 0)) {
          bVar21 = DAT_08b1;
          DAT_08b1 = bVar21 | 0x20;
          bVar21 = DAT_0bf4;
          DAT_0bf4 = bVar21 | 0x80;
          bVar21 = DAT_08ba;
          if ((~bVar21 & 0x20) != 0) {
            bVar21 = DAT_08ba;
            DAT_08ba = bVar21 | 0x20;
            bVar21 = DAT_0bf4;
            DAT_0bf4 = bVar21 | 8;
          }
        }
      }
    }
    else {
      bVar21 = DAT_08b7;
      if ((bVar21 & 0x40) == 0) {
        bVar21 = DAT_0b82;
        bVar12 = DAT_0de6;
        if (bVar12 < bVar21) {
          bVar21 = DAT_08b1;
          if ((bVar21 & 0x20) != 0) {
            bVar21 = DAT_08b1;
            DAT_08b1 = bVar21 & 0xdf;
            bVar21 = DAT_0bf4;
            DAT_0bf4 = bVar21 | 0x80;
          }
          bVar21 = DAT_0bcd;
          DAT_0bcd = bVar21 & 0xdf;
        }
      }
      else {
        bVar21 = DAT_08b7;
        DAT_08b7 = bVar21 & 0xbf;
      }
    }
  }
  cVar20 = DAT_0c26;
  cVar7 = DAT_0de7;
  if (cVar7 == -0x80) {
    if (cVar20 == '\x01') {
      uVar18 = DAT_0cbc;
      DAT_0cbe = uVar18;
      uVar18 = DAT_0c66;
      DAT_0cbc = uVar18;
      goto LAB_dd9d;
    }
  }
  else if (cVar20 == '\0') {
    uVar18 = DAT_0cbc;
    DAT_0cbe = uVar18;
    uVar18 = DAT_0c64;
    DAT_0cbc = uVar18;
LAB_dd9d:
    bVar21 = DAT_08b1;
    if (((~bVar21 & 0x20) == 0) || (bVar21 = DAT_08b1, (bVar21 & 0x10) != 0)) {
      uVar18 = DAT_0e10;
      DAT_0cac = uVar18;
    }
    else {
      bVar21 = DAT_0cca;
      if ((bVar21 & 1) == 0) {
        bVar21 = DAT_0cca;
        if ((~bVar21 & 8) != 0) goto LAB_df0e;
        bVar21 = DAT_0cca;
        DAT_0cca = bVar21 & 0xf7;
        puVar22 = &DAT_0c64;
      }
      else {
        puVar22 = &DAT_0c7a;
      }
      RAM0e84 = puVar22;
      bVar21 = DAT_0de8;
      if ((bVar21 < 2) || (6 < bVar21)) {
        bVar21 = DAT_0def;
        sVar13 = RAM0e84;
        puVar14 = *(undefined **)((ushort)bVar21 * 2 + sVar13);
      }
      else {
        DAT_0cc0 = 0;
        DAT_0cc2 = 0;
        DAT_0e86 = 0;
        DAT_0e88 = 0xdef;
        RAM0e8a = 0xde9;
        while( true ) {
          pbVar8 = (byte *)DAT_0e88;
          sVar13 = RAM0e84;
          puVar14 = *(undefined **)((ushort)*pbVar8 * 2 + sVar13);
          puVar4 = puVar14 + -0x1eb7;
          if (puVar14 < &UNK_1eb7) {
            pbVar8 = (byte *)RAM0e8a;
            iVar2 = (uint)*pbVar8 * 2 *
                    (uint)CONCAT11((~(byte)((ushort)puVar4 >> 8) + 1) -
                                   ((char)-(char)puVar4 != '\0'),-(char)puVar4);
            RAM0e7c = (short)((uint)iVar2 >> 0x10);
            RAM0e7e = (short)iVar2;
            uVar15 = RAM0cc1;
            uVar17 = RAM0e7d;
            RAM0cc1 = uVar15 - uVar17;
            cVar20 = DAT_0cc0._0_1_;
            cVar7 = DAT_0e7c;
            DAT_0cc0._0_1_ = (cVar20 - cVar7) - (uVar15 < uVar17);
          }
          else {
            pbVar8 = (byte *)RAM0e8a;
            iVar2 = (uint)*pbVar8 * 2 * ZEXT24(puVar4);
            RAM0e7c = (short)((uint)iVar2 >> 0x10);
            RAM0e7e = (short)iVar2;
            uVar15 = RAM0cc1;
            uVar17 = RAM0e7d;
            RAM0cc1 = uVar15 + uVar17;
            cVar20 = DAT_0cc0._0_1_;
            cVar7 = DAT_0e7c;
            DAT_0cc0._0_1_ = cVar20 + cVar7 + CARRY2(uVar15,uVar17);
          }
          cVar20 = DAT_0e86;
          DAT_0e86 = cVar20 + 1U;
          bVar21 = DAT_0de8;
          if (bVar21 <= (byte)(cVar20 + 1U)) break;
          sVar13 = DAT_0e88;
          DAT_0e88 = sVar13 + 1;
          sVar13 = RAM0e8a;
          RAM0e8a = sVar13 + 1;
        }
        bVar21 = DAT_0cc0._0_1_;
        if ((short)((ushort)bVar21 << 8) < 0) {
          uVar18 = DAT_0cc0;
          bVar21 = DAT_0cc2;
          bVar21 = ~bVar21;
          DAT_0e8a = bVar21 + 1;
          DAT_0e88 = CONCAT11(~(byte)((ushort)uVar18 >> 8) + CARRY1(~(byte)uVar18,0xfe < bVar21),
                              ~(byte)uVar18 + (0xfe < bVar21));
          bVar21 = DAT_0de8;
          uVar15 = DAT_0e88;
          RAM0e80 = uVar15 / bVar21;
          uVar11 = DAT_0e8a;
          bVar12 = DAT_0de8;
          DAT_0e81._1_1_ = (char)(CONCAT11((char)(uVar15 % (ushort)bVar21),uVar11) / (ushort)bVar12)
          ;
          cVar20 = DAT_0e7f._1_1_;
          if (cVar20 == '\0') {
            puVar14 = (undefined *)DAT_0e81;
            if (puVar14 <= &UNK_1eb6) {
              cVar20 = -(char)(puVar14 + -0x1eb7);
              puVar14 = (undefined *)
                        CONCAT11((~(byte)((ushort)(puVar14 + -0x1eb7) >> 8) + 1) - (cVar20 != '\0'),
                                 cVar20);
              goto LAB_df08;
            }
          }
          puVar14 = (undefined *)0x0;
        }
        else {
          bVar21 = DAT_0de8;
          uVar15 = DAT_0cc0;
          RAM0e80 = uVar15 / bVar21;
          uVar11 = DAT_0cc2;
          bVar12 = DAT_0de8;
          DAT_0e81._1_1_ = (char)(CONCAT11((char)(uVar15 % (ushort)bVar21),uVar11) / (ushort)bVar12)
          ;
          cVar20 = DAT_0e7f._1_1_;
          if (cVar20 == '\0') {
            uVar15 = DAT_0e81;
            puVar14 = &UNK_1eb7 + uVar15;
            if (uVar15 < 0xe149) goto LAB_df08;
          }
          puVar14 = (undefined *)0xffff;
        }
      }
LAB_df08:
      DAT_0cac = puVar14;
      DAT_0cb6 = puVar14;
    }
LAB_df0e:
    uVar18 = DAT_0900;
    FUN_ee81();
    DAT_0cb5 = extraout_A;
    bVar21 = DAT_0cb5;
    puVar4 = (undefined *)DAT_0cac;
    puVar14 = puVar4 + -0x1eb7;
    if (puVar4 < &UNK_1eb7) {
      iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar14 >> 8) + 1) - ((char)-(char)puVar14 != '\0'),
                             -(char)puVar14) * (uint)bVar21 * 2;
      uVar15 = (ushort)iVar2;
      param_1 = (undefined2 *)(uVar15 + 0x80);
      bVar21 = (byte)((uint)iVar2 >> 0x10);
      cVar20 = bVar21 + (0xff7f < uVar15);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar21,0xff7f < uVar15),cVar20) < 0x100) {
        DAT_0e7c = cVar20;
        RAM0e7d = param_1;
        puVar4 = (undefined *)RAM0e7c;
        puVar14 = &UNK_1eb7 + -(short)puVar4;
        if (puVar4 < &UNK_1eb8) goto LAB_df6f;
      }
      puVar14 = (undefined *)0x0;
    }
    else {
      iVar2 = ZEXT24(puVar14) * (uint)bVar21 * 2;
      uVar15 = (ushort)iVar2;
      param_1 = (undefined2 *)(uVar15 + 0x80);
      bVar21 = (byte)((uint)iVar2 >> 0x10);
      cVar20 = bVar21 + (0xff7f < uVar15);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar21,0xff7f < uVar15),cVar20) < 0x100) {
        DAT_0e7c = cVar20;
        RAM0e7d = param_1;
        uVar15 = RAM0e7c;
        puVar14 = &UNK_1eb7 + uVar15;
        if (uVar15 < 0xe149) goto LAB_df6f;
      }
      puVar14 = (undefined *)0xffff;
    }
LAB_df6f:
    DAT_0cae = puVar14;
    bVar21 = DAT_0cca;
    if ((~bVar21 & 1) != 0) {
      bVar21 = DAT_0cca;
      if ((bVar21 & 2) == 0) {
LAB_df95:
        bVar21 = DAT_0cca;
        if ((~bVar21 & 2) != 0) {
          uVar15 = DAT_0cbc;
          uVar17 = DAT_0cbe;
          if ((uVar17 < uVar15) && (uVar6 = DAT_0e14, uVar6 <= uVar15 - uVar17)) {
            bVar21 = DAT_0cca;
            DAT_0cca = bVar21 | 2;
            cVar20 = DAT_0c25;
            DAT_0942 = cVar20 + '\f';
            goto LAB_dfb3;
          }
        }
        DAT_0ccb = 0;
      }
      else {
        uVar17 = DAT_0cbe;
        uVar15 = DAT_0cbc;
        if ((uVar17 <= uVar15) || (uVar6 = DAT_0e14, uVar17 - uVar15 < uVar6)) goto LAB_df95;
        bVar21 = DAT_0cca;
        DAT_0cca = bVar21 & 0xfd;
        uVar11 = DAT_0c25;
        DAT_0942 = uVar11;
LAB_dfb3:
        bVar21 = DAT_0ccb;
        bVar21 = (bVar21 + 1) - (0xfe < bVar21);
        DAT_0ccb = bVar21;
        bVar12 = DAT_0df5;
        if (bVar12 <= bVar21) {
          bVar21 = DAT_0cca;
          DAT_0cca = bVar21 | 1;
        }
      }
    }
  }
  bVar21 = DAT_0c20;
  if (((bVar21 & 0x80) != 0) && (bVar21 = DAT_0cca, (~bVar21 & 1) != 0)) {
    uVar15 = DAT_0cbc;
    uVar17 = DAT_0cbe;
    if ((uVar15 < uVar17) && (bVar21 = DAT_0cca, (~bVar21 & 8) != 0)) {
      bVar21 = DAT_0cca;
      DAT_0cca = bVar21 | 8;
    }
  }
  bVar21 = DAT_0889;
  if ((((~bVar21 & 4) != 0) && (bVar21 = DAT_0885, (~bVar21 & 0x80) != 0)) &&
     (bVar21 = DAT_0889, (bVar21 & 0x10) != 0)) {
    bVar21 = DAT_0889;
    DAT_0889 = bVar21 | 8;
    bVar21 = DAT_0889;
    DAT_0889 = bVar21 | 4;
  }
  bVar21 = DAT_0a5d;
  puVar16 = (ushort *)(&DAT_0a5e + (ushort)bVar21 * 2);
  bVar21 = DAT_0a5c;
  bVar21 = (bVar21 + 1) - (0xfe < bVar21);
  DAT_0a5c = bVar21;
  if (bVar21 < 0x18) {
    if (1 < bVar21) {
      uVar11 = DAT_0a59;
      DAT_0e7c = uVar11;
      uVar18 = RAM0a5a;
      RAM0e7d = uVar18;
      goto LAB_e03c;
    }
  }
  else {
    uVar15 = RAM0a5a;
    RAM0e7d = uVar15 - *puVar16;
    cVar20 = DAT_0a59;
    DAT_0e7c = cVar20 - (uVar15 < *puVar16);
LAB_e03c:
    cVar20 = DAT_0c29;
    if (cVar20 == '\0') {
      uVar15 = DAT_0c2a;
    }
    else {
      uVar15 = 0xffff;
    }
    *puVar16 = uVar15;
    uVar15 = RAM0e7d;
    sVar13 = uVar15 + *puVar16;
    RAM0a5a = sVar13;
    RAM0e7d = sVar13;
    cVar20 = DAT_0e7c;
    cVar20 = cVar20 + CARRY2(uVar15,*puVar16);
    DAT_0a59 = cVar20;
    DAT_0e7c = cVar20;
    bVar21 = DAT_0a5c;
    if (bVar21 < 0x17) {
      cVar20 = DAT_0a5c;
      bVar21 = cVar20 - 1;
      DAT_0e7f._0_1_ = bVar21;
      uVar15 = RAM0a59;
      RAM0e7c = uVar15 / bVar21;
      uVar11 = DAT_0a5b;
      uVar15 = CONCAT11((char)(uVar15 % (ushort)bVar21),uVar11);
      bVar21 = DAT_0e7f._0_1_;
      puVar16 = (ushort *)(uVar15 % (ushort)bVar21);
      DAT_0e7e = (char)(uVar15 / bVar21);
      uVar15 = RAM0e7d;
      param_1 = (undefined2 *)((uint)uVar15 * 0x16);
      RAM0e7d = param_1;
      DAT_0e7c = (char)((uint)uVar15 * 0x16 >> 0x10);
    }
    uVar11 = DAT_0e7c;
    DAT_0a55._0_1_ = uVar11;
    uVar18 = RAM0e7d;
    RAM0a56 = uVar18;
    cVar20 = DAT_0a5d;
    bVar21 = cVar20 + 1;
    if (0x15 < bVar21) {
      bVar21 = 0;
    }
    DAT_0a5d = bVar21;
  }
  cVar20 = DAT_0e4d;
  if ((cVar20 != -0x80) && (bVar21 = DAT_0d1f, (~bVar21 & 0x80) != 0)) {
    bVar21 = DAT_0a38._0_1_;
    bVar12 = DAT_0e51;
    if (bVar21 < bVar12) {
      bVar12 = DAT_0e4f;
      if (bVar21 < bVar12) {
        bVar21 = DAT_0d23;
        bVar12 = DAT_0e4e;
        if ((bVar21 < bVar12) && (bVar21 = DAT_0d21, (~bVar21 & 8) != 0)) {
          bVar21 = DAT_0d21;
          DAT_0d21 = bVar21 & 0xfe;
          DAT_0b2f = 0;
          bVar21 = DAT_0d21;
          DAT_0d21 = bVar21 | 8;
        }
      }
    }
    else {
      bVar21 = DAT_0d21;
      DAT_0d21 = bVar21 | 1;
    }
  }
  cVar20 = DAT_0e05;
  if (cVar20 == -0x80) {
    do {
      bVar21 = DAT_008b;
      if ((~bVar21 & 2) == 0) {
        uVar18 = DAT_0092;
        DAT_08d2 = uVar18;
        DAT_08c4 = 0;
        DAT_08c5 = 0x40;
        bVar21 = DAT_0a27;
        DAT_0a27 = bVar21 & 0xfe;
        goto LAB_e11e;
      }
      sVar13 = DAT_0044;
      sVar5 = DAT_08ce;
    } while (sVar13 - sVar5 < 0);
    bVar21 = DAT_0a27;
    DAT_0a27 = bVar21 | 1;
LAB_e11e:
    bVar21 = DAT_088d;
    DAT_088d = bVar21 & 0xfe;
    FUN_ee67(puVar16);
    bVar21 = DAT_0a27;
    if ((bVar21 & 1) == 0) {
      uVar15 = DAT_08d2;
      uVar15 = uVar15 >> 6;
      DAT_0902 = uVar15;
      bVar21 = DAT_08b1;
      if (((~bVar21 & 8) == 0) || (bVar21 = DAT_08b1, (bVar21 & 4) != 0)) {
        uVar15 = DAT_0e28;
      }
      DAT_0904 = uVar15;
      uVar6 = DAT_08ea;
      uVar17 = uVar15 - uVar6;
      if (uVar15 < uVar6) {
        uVar17 = 0;
      }
      DAT_0906 = uVar17;
      bVar21 = DAT_0a27;
      if ((~bVar21 & 0x40) == 0) {
        uVar18 = DAT_0908;
        DAT_090a = uVar18;
        uVar15 = DAT_0908;
        if (uVar17 < uVar15) {
          uVar18 = FUN_f045(param_1);
          sVar13 = CONCAT11((~(byte)((ushort)uVar18 >> 8) + 1) - ((char)-(char)uVar18 != '\0'),
                            -(char)uVar18);
        }
        else {
          sVar13 = FUN_f045(param_1);
        }
        sVar5 = DAT_0908;
        uVar17 = sVar13 + sVar5;
        DAT_0908 = uVar17;
      }
      else {
        DAT_0908 = uVar17;
        DAT_090a = uVar17;
        bVar21 = DAT_0a27;
        DAT_0a27 = bVar21 | 0x40;
      }
      bVar21 = DAT_0c20;
      if ((bVar21 & 0x80) != 0) {
        cVar20 = DAT_0c25;
        if (cVar20 == '\0') {
          uVar15 = DAT_090a;
          bVar1 = uVar17 < uVar15;
          uVar15 = uVar17 - uVar15 >> 1;
          uVar17 = CONCAT11((byte)(uVar15 >> 8) | bVar1 << 7,(char)uVar15);
        }
        else {
          sVar13 = DAT_090a;
          uVar17 = uVar17 - sVar13;
          bVar1 = (short)uVar17 < 0;
        }
        if (bVar1) {
          puVar14 = (undefined *)(uVar17 + 0x80);
          if (uVar17 < 0xff80) {
            puVar14 = (undefined *)0x0;
          }
        }
        else {
          puVar14 = (undefined *)(uVar17 + 0x80);
          if ((0xff7f < uVar17) || (&UNK_047f < puVar14)) {
            puVar14 = &UNK_047f;
          }
        }
        DAT_0910 = puVar14;
      }
      bVar21 = DAT_0cca;
      if ((bVar21 & 1) != 0) {
        cVar20 = DAT_0942;
        cVar7 = DAT_0e07;
        if (cVar20 == cVar7) {
          uVar18 = DAT_0908;
          DAT_090c = uVar18;
          bVar21 = DAT_0a27;
          DAT_0a27 = bVar21 | 0x20;
        }
        cVar7 = DAT_0e08;
        if ((cVar20 == cVar7) && (bVar21 = DAT_0a27, (bVar21 & 0x20) != 0)) {
          sVar13 = DAT_0908;
          DAT_090e = sVar13;
          bVar21 = DAT_0a27;
          DAT_0a27 = bVar21 | 0x10;
          sVar5 = DAT_090c;
          uVar15 = sVar13 - sVar5;
          if ((short)uVar15 < 0) {
            puVar14 = (undefined *)(uVar15 + 0x80);
            if (uVar15 < 0xff80) {
              puVar14 = (undefined *)0x0;
            }
          }
          else {
            puVar14 = (undefined *)(uVar15 + 0x80);
            if ((0xff7f < uVar15) || (&UNK_047f < puVar14)) {
              puVar14 = &UNK_047f;
            }
          }
          DAT_0912 = puVar14;
        }
      }
      bVar21 = DAT_0020;
      if ((((bVar21 & 0x20) == 0) && (cVar20 = DAT_0942, cVar20 == DAT_355e)) &&
         (bVar21 = DAT_0a27, (~bVar21 & 0x10) == 0)) {
        uVar18 = DAT_0900;
        FUN_ee81();
        DAT_0a21 = extraout_A_00;
        uVar11 = DAT_0914;
        FUN_ef7f();
        DAT_0a23 = extraout_A_01;
        bVar21 = DAT_0a21;
        uVar11 = DAT_0915;
        FUN_ef7f((ushort)extraout_A_01 * (ushort)bVar21);
        DAT_0a24 = extraout_A_02;
        uVar18 = FUN_eeab(extraout_A_02 + 0x180);
        RAM0e82 = uVar18;
        uVar18 = DAT_0920;
        DAT_0bc4 = uVar18;
        DAT_0bc6 = 0x35ee;
        uVar18 = FUN_efa4();
        RAM0e7e = uVar18;
        RAM0e7c = 0;
        sVar13 = FUN_ef3a();
        uVar11 = (undefined1)((ushort)(sVar13 + 0x80) >> 8);
        DAT_0a25 = uVar11;
        uVar18 = RAM0e82;
        uVar18 = FUN_eeab(uVar11);
        RAM0e82 = uVar18;
        uVar18 = DAT_0910;
        DAT_0bc4 = uVar18;
        DAT_0bc6 = 0x3606;
        uVar18 = FUN_efa4();
        RAM0e7e = uVar18;
        RAM0e7c = 0;
        sVar13 = FUN_ef3a();
        uVar11 = (undefined1)((ushort)(sVar13 + 0x80) >> 8);
        DAT_0a26 = uVar11;
        uVar18 = RAM0e82;
        uVar18 = FUN_eeab(uVar11);
        RAM0e82 = uVar18;
        uVar18 = DAT_0912;
        DAT_0bc4 = uVar18;
        DAT_0bc6 = 0x3560;
        uVar18 = FUN_efa4();
        RAM0e7e = uVar18;
        bVar21 = DAT_088f;
        if ((bVar21 & 0x80) == 0) {
          uVar11 = DAT_089a;
        }
        RAM0e7c = 0;
        sVar13 = FUN_ef3a();
        DAT_0a20 = (char)((ushort)(sVar13 + 0x80) >> 8);
        uVar18 = DAT_090c;
        DAT_0bc4 = uVar18;
        DAT_0bc6 = 0x3588;
        uVar18 = FUN_efa4();
        RAM0e7e = uVar18;
        RAM0e7c = 0;
        sVar13 = FUN_ef3a();
        bVar12 = (byte)((ushort)(sVar13 + 0x80) >> 8);
        DAT_0a22 = bVar12;
        bVar21 = DAT_0a20;
        uVar15 = RAM0e82;
        uVar3 = (uint)((ushort)bVar12 * (ushort)bVar21) * (uint)uVar15;
        sVar13 = (short)uVar3;
        if (uVar3 < 0x10000000) {
          bVar12 = (byte)(uVar3 >> 0x10);
          bVar21 = bVar12 << 1;
          uVar15 = CONCAT11(((((char)(uVar3 >> 0x18) << 1 | bVar12 >> 7) << 1 | (bVar12 & 0x7f) >> 6
                             ) << 1 | (bVar21 & 0x7f) >> 6) << 1 | (bVar21 & 0x3f) >> 5,
                            (((bVar21 | (byte)(uVar3 >> 8) >> 7) << 1 |
                             (byte)((ushort)(sVar13 << 1) >> 0xf)) << 1 |
                            (byte)((ushort)(sVar13 << 2) >> 0xf)) << 1 |
                            (byte)((ushort)(sVar13 << 3) >> 0xf));
        }
        else {
          uVar15 = 0xffff;
        }
        if (24999 < uVar15) {
          uVar15 = 25000;
        }
        DAT_0a1e = uVar15;
        uVar17 = DAT_0966;
        sVar13 = uVar15 + uVar17;
        if (CARRY2(uVar15,uVar17)) {
          sVar13 = -1;
        }
        DAT_0a1c = sVar13;
        bVar21 = DAT_0a27;
        DAT_0a27 = bVar21 | 8;
      }
      cVar20 = DAT_0e09;
      if (cVar20 == -0x80) {
        cVar20 = DAT_0942;
        cVar7 = DAT_0e0a;
        if (((((cVar20 == cVar7) && (bVar21 = DAT_0a27, (bVar21 & 8) != 0)) &&
             ((bVar21 = DAT_088c, (~bVar21 & 0x80) != 0 &&
              ((bVar21 = DAT_0d71, (~bVar21 & 0x80) != 0 && (bVar21 = DAT_0884, (~bVar21 & 1) != 0))
              )))) && (bVar21 = DAT_08b3, (~bVar21 & 0x80) != 0)) &&
           ((bVar21 = DAT_0886, (~bVar21 & 0x40) != 0 && (bVar21 = DAT_0881, (~bVar21 & 0x10) != 0))
           )) {
          bVar21 = DAT_0920._0_1_;
          bVar12 = DAT_0e0b;
          if ((bVar12 <= bVar21) && (bVar12 = DAT_0e0c, bVar21 <= bVar12)) {
            uVar15 = DAT_0908;
            bVar21 = DAT_0e0d;
            bVar12 = (byte)(uVar15 >> 2);
            if ((bVar21 <= bVar12) && (bVar21 = DAT_0e0e, bVar12 <= bVar21)) {
              bVar21 = DAT_088f;
              if ((~bVar21 & 0x80) == 0) {
                uVar15 = DAT_0912;
                uVar17 = DAT_0e22;
                if (uVar17 <= uVar15) goto LAB_e3ec;
              }
              else {
                uVar15 = DAT_0912;
                uVar17 = DAT_0e24;
                if (uVar17 <= uVar15) {
LAB_e3ec:
                  uVar15 = DAT_0a1e;
                  uVar17 = DAT_0e20;
                  if (uVar17 < uVar15) {
                    bVar21 = DAT_0a27;
                    DAT_0a27 = bVar21 | 0x80;
                  }
                }
              }
            }
          }
        }
      }
      bVar21 = DAT_0a27;
      if ((bVar21 & 0x80) != 0) {
        bVar21 = DAT_0a29;
        DAT_0a29 = bVar21 | 0x80;
        FUN_eebd();
        bVar21 = DAT_0a29;
        DAT_0a29 = bVar21 & 0x7f;
        bVar21 = DAT_0a27;
        DAT_0a27 = bVar21 & 0x7f;
      }
    }
    else {
      bVar21 = DAT_0a27;
      DAT_0a27 = bVar21 & 0x7f;
      bVar21 = DAT_0a27;
      DAT_0a27 = bVar21 & 0xbf;
      bVar21 = DAT_0a27;
      DAT_0a27 = bVar21 & 0xdf;
      bVar21 = DAT_0a27;
      DAT_0a27 = bVar21 & 0xef;
      bVar21 = DAT_0a27;
      DAT_0a27 = bVar21 & 0xf7;
    }
  }
  cVar20 = DAT_0e55;
  if (cVar20 == '@') {
    bVar21 = DAT_0ab0;
    if ((bVar21 & 0x80) == 0) {
      bVar21 = DAT_0ab0;
      if ((bVar21 & 0x40) == 0) {
        bVar21 = DAT_0ab0;
        if ((bVar21 & 0x20) == 0) {
          bVar21 = DAT_0ab0;
          if ((bVar21 & 0x10) == 0) {
            bVar21 = DAT_0ab0;
            if ((bVar21 & 8) != 0) {
              uVar15 = DAT_0920;
              uVar17 = DAT_0e30;
              if (uVar15 < uVar17) {
                uVar17 = DAT_0ab4;
                uVar15 = (ushort)((uint)uVar17 * 10);
                if ((short)((uint)uVar17 * 10 >> 0x10) != 0) {
                  uVar15 = 0xffff;
                }
                uVar17 = DAT_0abe;
                if (uVar15 < uVar17) {
                  bVar21 = DAT_0ab0;
                  DAT_0ab0 = bVar21 | 0x20;
                  bVar21 = DAT_0ab0;
                  DAT_0ab0 = bVar21 & 0xf7;
                  uVar15 = DAT_0abe;
                  DAT_0aba = uVar15 / 10;
                }
                else {
                  bVar21 = DAT_0ab0;
                  DAT_0ab0 = bVar21 | 0x10;
                  bVar21 = DAT_0ab0;
                  DAT_0ab0 = bVar21 & 0xf7;
                }
              }
            }
          }
          else {
            uVar15 = DAT_0920;
            uVar17 = DAT_0e2e;
            if (uVar15 < uVar17) {
              sVar13 = DAT_0ab4;
              DAT_0aba = sVar13;
              if (sVar13 != 0) goto LAB_e536;
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 0x80;
            }
            else {
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 8;
              bVar21 = DAT_0ab1;
              DAT_0ab1 = bVar21 & 0xdf;
              DAT_0abe = 0;
            }
            bVar21 = DAT_0ab0;
            DAT_0ab0 = bVar21 & 0xef;
          }
        }
        else {
          uVar15 = DAT_0920;
          uVar17 = DAT_0e2e;
          if (uVar15 < uVar17) {
            uVar15 = DAT_0ab4;
            uVar17 = DAT_0aba;
            if (uVar15 < uVar17) goto LAB_e536;
            sVar13 = DAT_0ab4;
            if (sVar13 == 0) {
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 0x80;
            }
            else {
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 0x10;
              bVar21 = DAT_0ab1;
              DAT_0ab1 = bVar21 | 8;
            }
          }
          else {
            bVar21 = DAT_0ab0;
            DAT_0ab0 = bVar21 | 8;
            bVar21 = DAT_0ab1;
            DAT_0ab1 = bVar21 & 0xdf;
            uVar15 = DAT_0aba;
            uVar18 = (undefined2)((uint)uVar15 * 10);
            if ((short)((uint)uVar15 * 10 >> 0x10) != 0) {
              uVar18 = 0xffff;
            }
            DAT_0abe = uVar18;
          }
          bVar21 = DAT_0ab0;
          DAT_0ab0 = bVar21 & 0xdf;
        }
      }
      else {
        bVar21 = DAT_0881;
        if ((~bVar21 & 0x10) != 0) {
          uVar18 = DAT_0ab6;
          DAT_0ac0 = uVar18;
          uVar15 = DAT_0ab2;
          DAT_0ac8 = uVar15;
          DAT_0aba = uVar15;
          uVar17 = DAT_0ab4;
          if (uVar17 < uVar15) {
            bVar21 = DAT_0ab0;
            DAT_0ab0 = bVar21 | 0x20;
          }
          else {
            sVar13 = DAT_0ab4;
            if (sVar13 == 0) {
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 0x80;
            }
            else {
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 0x10;
              bVar21 = DAT_0ab1;
              DAT_0ab1 = bVar21 | 8;
            }
          }
          bVar21 = DAT_0ab0;
          DAT_0ab0 = bVar21 & 0xbf;
        }
      }
    }
    else {
      bVar21 = DAT_0ab1;
      if ((~bVar21 & 0x10) != 0) {
        bVar21 = DAT_0ac6;
        bVar21 = (bVar21 + 1) - (0xfe < bVar21);
        DAT_0ac6 = bVar21;
        bVar12 = DAT_0e0f;
        if (bVar12 < bVar21) {
          bVar21 = DAT_0ab0;
          DAT_0ab0 = bVar21 | 0x40;
          bVar21 = DAT_0ab0;
          DAT_0ab0 = bVar21 & 0x7f;
          bVar21 = DAT_0ab1;
          DAT_0ab1 = bVar21 | 0x10;
        }
      }
    }
  }
LAB_e536:
  cVar20 = DAT_0e55;
  if ((cVar20 != '@') || (bVar21 = DAT_08a3, (bVar21 & 4) != 0)) goto LAB_e6e9;
  bVar21 = DAT_0ab0;
  if (((~bVar21 & 8) == 0) || (bVar21 = DAT_0ab0, (bVar21 & 0x80) != 0)) {
    DAT_00bc = 0xff;
    DAT_00bd = 0xff;
    DAT_0aba = 0;
    DAT_0abc = 0;
    bVar21 = DAT_0ab0;
    if ((~bVar21 & 0x80) == 0) goto LAB_e5d3;
    bVar21 = DAT_0cca;
    if ((bVar21 & 1) == 0) {
LAB_e588:
      cVar7 = DAT_0c26;
      cVar20 = DAT_0ace;
      if (cVar7 != cVar20) goto LAB_e5d3;
      bVar21 = DAT_0ab1;
      if ((~bVar21 & 8) != 0) goto LAB_e595;
      uVar15 = DAT_0ab8;
      uVar17 = DAT_0abe;
      sVar13 = (uVar15 >> 1) - uVar17;
      if (uVar17 <= uVar15 >> 1 && sVar13 != 0) goto LAB_e5b3;
      sVar13 = CONCAT11((~(byte)((ushort)sVar13 >> 8) + 1) - ((char)-(char)sVar13 != '\0'),
                        -(char)sVar13);
    }
    else {
      cVar20 = DAT_0943;
      cVar7 = DAT_0ace;
      if (cVar20 != cVar7) {
        bVar21 = DAT_0ab1;
        if ((~bVar21 & 4) == 0) goto LAB_e5d3;
        goto LAB_e588;
      }
      bVar21 = DAT_0ab1;
      if ((bVar21 & 8) == 0) {
LAB_e595:
        bVar21 = DAT_0ab1;
        DAT_0ab1 = bVar21 | 8;
        uVar15 = DAT_0ac8;
        sVar13 = (short)((uint)uVar15 * 10);
        if ((short)((uint)uVar15 * 10 >> 0x10) != 0) {
          sVar13 = -1;
        }
      }
      else {
        uVar17 = DAT_0abe;
        uVar15 = DAT_0ab8;
        sVar13 = uVar17 - uVar15;
        if (uVar17 < uVar15) {
LAB_e5b3:
          sVar13 = 0;
        }
      }
    }
    DAT_0abe = sVar13;
LAB_e5d3:
    DAT_00ac = 0xff;
    DAT_00ad = 0xff;
  }
  else {
    bVar21 = DAT_0ab0;
    if ((bVar21 & 0x40) != 0) {
      DAT_00bc = 0;
      DAT_00bd = 0;
      DAT_0aba = 1000;
      DAT_0abc = 1000;
      goto LAB_e5d3;
    }
    bVar21 = DAT_0ab0;
    if ((bVar21 & 0x20) == 0) {
      bVar21 = DAT_0ab0;
      if ((bVar21 & 0x10) != 0) {
        bVar21 = DAT_0cca;
        if ((bVar21 & 1) != 0) {
          cVar20 = DAT_0943;
          cVar7 = DAT_0ace;
          if (cVar20 == cVar7) {
            uVar18 = DAT_0ab4;
            DAT_0aba = uVar18;
            bVar21 = DAT_0ab1;
            DAT_0ab1 = bVar21 | 1;
            goto LAB_e68c;
          }
          bVar21 = DAT_0ab1;
          if ((bVar21 & 4) != 0) goto LAB_e68f;
        }
        cVar7 = DAT_0c26;
        cVar20 = DAT_0ace;
        if (cVar7 == cVar20) {
          uVar18 = DAT_0ab4;
          DAT_0aba = uVar18;
          bVar21 = DAT_0ab1;
          DAT_0ab1 = bVar21 & 0xfe;
          goto LAB_e68c;
        }
      }
    }
    else {
      bVar21 = DAT_0cca;
      if ((bVar21 & 1) == 0) {
LAB_e61c:
        cVar7 = DAT_0c26;
        cVar20 = DAT_0ace;
        if (cVar7 != cVar20) goto LAB_e68f;
        bVar21 = DAT_0ab1;
        if ((~bVar21 & 8) == 0) {
          uVar17 = DAT_0ac0;
          uVar15 = DAT_0aba;
          sVar13 = (uVar17 >> 1) - uVar15;
          if (uVar17 >> 1 < uVar15 || sVar13 == 0) {
            uVar18 = CONCAT11((~(byte)((ushort)sVar13 >> 8) + 1) - ((char)-(char)sVar13 != '\0'),
                              -(char)sVar13);
          }
          else {
            uVar18 = 0;
          }
        }
        else {
          bVar21 = DAT_0ab1;
          DAT_0ab1 = bVar21 | 8;
          uVar18 = DAT_0ac8;
        }
        DAT_0aba = uVar18;
        bVar21 = DAT_0ab1;
        DAT_0ab1 = bVar21 & 0xfe;
      }
      else {
        cVar20 = DAT_0943;
        cVar7 = DAT_0ace;
        if (cVar20 != cVar7) {
          bVar21 = DAT_0ab1;
          if ((bVar21 & 4) != 0) goto LAB_e68f;
          goto LAB_e61c;
        }
        bVar21 = DAT_0ab1;
        if ((~bVar21 & 8) == 0) {
          uVar15 = DAT_0aba;
          uVar17 = DAT_0ac0;
          sVar13 = uVar15 - uVar17;
          if (uVar15 < uVar17) {
            sVar13 = 0;
          }
        }
        else {
          bVar21 = DAT_0ab1;
          DAT_0ab1 = bVar21 | 8;
          sVar13 = DAT_0ac8;
        }
        DAT_0aba = sVar13;
        bVar21 = DAT_0ab1;
        DAT_0ab1 = bVar21 | 1;
      }
LAB_e68c:
      FUN_f050();
    }
LAB_e68f:
    bVar21 = DAT_0ab1;
    if ((bVar21 & 0x20) != 0) {
      bVar21 = DAT_0ab1;
      if ((bVar21 & 1) == 0) {
        cVar7 = DAT_0c26;
        cVar20 = DAT_0ac7;
        if (cVar7 == cVar20) goto LAB_e6cf;
        cVar20 = DAT_0ace;
        if ((cVar7 != cVar20) && (cVar20 = DAT_0acd, cVar7 == cVar20)) goto LAB_e6c1;
      }
      else {
        cVar20 = DAT_0943;
        cVar7 = DAT_0ac7;
        if (cVar20 == cVar7) {
LAB_e6cf:
          FUN_f12b();
        }
        else {
          cVar7 = DAT_0ace;
          if ((cVar20 != cVar7) && (cVar7 = DAT_0acd, cVar20 == cVar7)) {
LAB_e6c1:
            DAT_00bc = 0;
            DAT_00bd = 0;
            DAT_00ac = 0xff;
            DAT_00ad = 0xff;
          }
        }
      }
    }
  }
  cVar7 = DAT_0c26;
  cVar20 = DAT_0ace;
  if (cVar7 == cVar20) {
    bVar21 = DAT_0cca;
    if ((bVar21 & 1) == 0) {
      bVar21 = DAT_0ab1;
      DAT_0ab1 = bVar21 & 0xfb;
    }
    else {
      bVar21 = DAT_0ab1;
      DAT_0ab1 = bVar21 | 4;
    }
  }
LAB_e6e9:
  DAT_0c24 = 0;
  sVar13 = DAT_0b22;
  DAT_0c22 = &UNK_1007 + sVar13;
  bVar21 = DAT_08c0;
  DAT_08c0 = bVar21 & 0xdf;
  bVar21 = DAT_08c0;
  DAT_08c0 = bVar21 & 0x7f;
  return;
}


/* Entry d5be */

void candidate_unreferenced_d5be(undefined2 *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  short sVar5;
  ushort uVar6;
  char cVar7;
  byte *pbVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 extraout_A;
  undefined1 extraout_A_00;
  byte extraout_A_01;
  byte extraout_A_02;
  undefined1 uVar12;
  byte bVar19;
  char cVar20;
  undefined *puVar13;
  ushort uVar14;
  ushort *puVar15;
  ushort uVar16;
  byte bVar21;
  undefined2 uVar17;
  short sVar18;
  undefined2 *puVar22;
  
  DAT_0b94 = 0;
  bVar11 = DAT_0942;
  if (0xbf < bVar11) {
    bVar11 = DAT_0880;
    DAT_0880 = bVar11 | 0x80;
    bVar11 = DAT_088c;
    DAT_088c = bVar11 | 0x20;
  }
  DAT_0942 = 0;
  bVar11 = DAT_0942;
  DAT_0943 = bVar11 & 0x1f;
  uVar12 = DAT_0085;
  DAT_08c6 = uVar12;
  bVar11 = DAT_088d;
  DAT_088d = bVar11 | 1;
  DAT_0085 = 1;
  sVar18 = DAT_0044;
  DAT_08cc = sVar18 + 0x4b;
  bVar11 = DAT_0c20;
  if ((~bVar11 & 0x80) == 0) {
    bVar21 = DAT_0c26;
    bVar11 = DAT_0941;
    if (0x33 < bVar11) {
      DAT_0a38 = 0xffff;
    }
    bVar9 = DAT_0a38._0_1_;
    bVar11 = DAT_0880;
    if ((~bVar11 & 1) == 0) {
      bVar11 = DAT_0dd0;
      if (bVar11 <= bVar9) {
        bVar11 = DAT_0b92;
        bVar9 = DAT_0dd1;
        if (bVar11 < bVar9) {
          bVar11 = DAT_0885;
          DAT_0885 = bVar11 | 0x40;
          goto LAB_d67b;
        }
      }
      bVar11 = DAT_0885;
      DAT_0885 = bVar11 & 0xbf;
      bVar11 = DAT_0884;
      DAT_0884 = bVar11 & 0xfb;
    }
    else {
      bVar11 = DAT_0880;
      if (((bVar11 & 2) != 0) && ((byte)(&DAT_0dc5)[bVar21] <= bVar9)) {
        bVar11 = DAT_0884;
        DAT_0884 = bVar11 | 4;
        DAT_0b32 = 0;
        FUN_f3a8();
        bVar11 = DAT_088d;
        if ((bVar11 & 1) != 0) {
          bVar11 = DAT_088d;
          DAT_088d = bVar11 & 0xfe;
          FUN_ee67();
        }
        goto LAB_d57e;
      }
      bVar11 = DAT_0b92;
      bVar9 = DAT_0dd1;
      if (bVar9 <= bVar11) {
        bVar11 = DAT_0885;
        DAT_0885 = bVar11 & 0xbf;
      }
    }
LAB_d67b:
    bVar11 = DAT_0c1a;
    if (((((~bVar11 & 0x80) != 0) && (bVar11 = DAT_0c1a, (bVar11 & 0x40) != 0)) &&
        (bVar11 = DAT_0a38._0_1_, (byte)(&DAT_0dc5)[bVar21] <= bVar11)) &&
       (bVar11 = DAT_0c1a, (~bVar11 & 0x20) != 0)) {
      bVar11 = DAT_0c1a;
      DAT_0c1a = bVar11 | 0x80;
      DAT_0c1b = 0;
      FUN_f3a8();
      bVar11 = DAT_088d;
      if ((bVar11 & 1) != 0) {
        bVar11 = DAT_088d;
        DAT_088d = bVar11 & 0xfe;
        FUN_ee67();
      }
LAB_d57e:
      DAT_0b33 = 0;
      DAT_004e = 2;
      DAT_0c24 = 0;
      sVar18 = DAT_0b22;
      DAT_0c22 = &UNK_1007 + sVar18;
      bVar11 = DAT_08c0;
      DAT_08c0 = bVar11 & 0xdf;
      bVar11 = DAT_08c0;
      DAT_08c0 = bVar11 & 0xbf;
      bVar11 = DAT_08c0;
      DAT_08c0 = bVar11 & 0x7f;
      return;
    }
    bVar11 = DAT_0882;
    DAT_0882 = bVar11 | 0x80;
  }
  DAT_0b33 = 0;
  bVar11 = DAT_0c20;
  if ((~bVar11 & 0x80) == 0) {
    cVar20 = DAT_0d95;
    if (((cVar20 != -0x80) && (bVar11 = DAT_08a3, (~bVar11 & 4) != 0)) &&
       (bVar11 = DAT_08b4, (~bVar11 & 0x80) != 0)) {
      bVar11 = DAT_0880;
      if ((~bVar11 & 1) == 0) {
LAB_d6d9:
        bVar11 = DAT_0889;
        DAT_0889 = bVar11 | 1;
      }
      else {
        bVar11 = DAT_0ba0;
        bVar21 = DAT_0dd2;
        if (bVar21 <= bVar11) goto LAB_d6d9;
        bVar11 = DAT_0889;
        DAT_0889 = bVar11 & 0xfe;
      }
      bVar11 = DAT_0bf0;
      bVar21 = DAT_0dd4;
      if (bVar11 < bVar21) {
        bVar11 = DAT_0889;
        DAT_0889 = bVar11 & 0xbf;
      }
      else {
        bVar11 = DAT_0889;
        DAT_0889 = bVar11 | 0x40;
      }
      cVar20 = DAT_0d95;
      if ((((cVar20 != -0x80) && (bVar11 = DAT_0880, (~bVar11 & 0x80) != 0)) &&
          (((bVar11 = DAT_0d21, (~bVar11 & 1) != 0 &&
            (((bVar11 = DAT_0884, (~bVar11 & 2) != 0 && (bVar11 = DAT_0884, (~bVar11 & 4) != 0)) &&
             (bVar11 = DAT_088c, (~bVar11 & 0x80) != 0)))) &&
           ((bVar11 = DAT_0d71, (~bVar11 & 0x80) != 0 && (bVar11 = DAT_0885, (~bVar11 & 0x40) != 0))
           )))) && ((bVar11 = DAT_0c1a, (~bVar11 & 0x80) != 0 &&
                    (bVar11 = DAT_089d, (~bVar11 & 0x80) != 0)))) {
        bVar11 = DAT_0cca;
        if ((bVar11 & 1) == 0) {
          cVar20 = DAT_0c26;
        }
        else {
          cVar20 = DAT_0942;
        }
        bVar11 = DAT_088c;
        if ((((~bVar11 & 2) == 0) || (bVar11 = DAT_089c, (~bVar11 & 2) == 0)) || (cVar20 != '\b'))
        goto LAB_d7cb;
        bVar11 = DAT_0a98;
        if ((bVar11 & 8) != 0) {
          bVar11 = DAT_004e;
          if ((bVar11 & 0x20) == 0) {
            DAT_0b87 = 0;
            bVar11 = DAT_0889;
            if (((bVar11 & 1) == 0) || (bVar11 = DAT_0889, (bVar11 & 0x40) == 0)) {
              DAT_0b7d = 0;
            }
            else {
              bVar11 = DAT_0b7d;
              bVar11 = (bVar11 + 1) - (0xfe < bVar11);
              DAT_0b7d = bVar11;
              bVar21 = DAT_0dd5;
              if ((bVar21 <= bVar11) && (bVar11 = DAT_08b3, (~bVar11 & 0x80) != 0)) {
                bVar11 = DAT_08b3;
                DAT_08b3 = bVar11 | 0x80;
                bVar11 = DAT_0bf4;
                DAT_0bf4 = bVar11 | 0x20;
                bVar11 = DAT_08bc;
                if ((~bVar11 & 0x80) != 0) {
                  bVar11 = DAT_08bc;
                  DAT_08bc = bVar11 | 0x80;
                  bVar11 = DAT_0bf4;
                  DAT_0bf4 = bVar11 | 2;
                }
              }
            }
          }
          else {
            DAT_0b7d = 0;
            bVar11 = DAT_0b87;
            bVar11 = (bVar11 + 1) - (0xfe < bVar11);
            DAT_0b87 = bVar11;
            bVar21 = DAT_0dd3;
            if ((bVar21 <= bVar11) && (bVar11 = DAT_08b3, (bVar11 & 0x80) != 0)) {
              bVar11 = DAT_08b3;
              DAT_08b3 = bVar11 & 0x7f;
              bVar11 = DAT_0bf4;
              DAT_0bf4 = bVar11 | 0x20;
            }
          }
        }
      }
    }
    bVar11 = DAT_0cca;
    if ((bVar11 & 1) == 0) {
      uVar12 = DAT_0c26;
    }
    else {
      uVar12 = DAT_0942;
    }
    DAT_004e = 0x20;
  }
LAB_d7cb:
  bVar11 = DAT_0c20;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_0cca;
    if ((bVar11 & 1) == 0) {
      cVar20 = DAT_0c26;
    }
    else {
      cVar20 = DAT_0942;
    }
    if (cVar20 == '\n') {
      bVar11 = DAT_0a98;
      DAT_0a98 = bVar11 & 0x77;
    }
  }
  bVar11 = DAT_0c20;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_0a38._0_1_;
    bVar21 = DAT_0dd6;
    if (bVar11 < bVar21) {
      bVar21 = DAT_0dd7;
      if (bVar11 < bVar21) {
        uVar12 = DAT_0881;
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0xef;
      }
    }
    else {
      bVar11 = DAT_0881;
      DAT_0881 = bVar11 | 0x10;
      uVar12 = DAT_0dd8;
      DAT_0a2c = uVar12;
    }
  }
  bVar11 = DAT_0c20;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_0a38._0_1_;
    bVar21 = DAT_0dda;
    if (((bVar11 < bVar21) || (bVar21 = DAT_0880, (~bVar21 & 1) != 0)) &&
       (bVar21 = DAT_0dd9, bVar11 < bVar21)) {
      bVar21 = DAT_0cca;
      if ((bVar21 & 1) == 0) {
        cVar20 = DAT_0c26;
      }
      else {
        cVar20 = DAT_0942;
      }
      if (cVar20 == '\0') {
        bVar21 = DAT_0880;
        DAT_0880 = bVar21 & 0xbf;
      }
      bVar21 = DAT_0dd9;
      if (bVar21 <= bVar11) goto LAB_d855;
      if (cVar20 == '\0') {
        bVar11 = DAT_0880;
        DAT_0880 = bVar11 & 0xfb;
      }
    }
    else {
      bVar11 = DAT_0880;
      DAT_0880 = bVar11 | 0x40;
LAB_d855:
      bVar11 = DAT_0880;
      DAT_0880 = bVar11 | 4;
      DAT_0a8e = 0x80;
    }
    bVar11 = DAT_0881;
    DAT_0881 = bVar11 & 0xdf;
  }
  bVar11 = DAT_0c20;
  if ((~bVar11 & 0x80) == 0) {
    FUN_e778();
    FUN_e7d0();
  }
  bVar11 = DAT_0c20;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_0cca;
    if ((bVar11 & 1) == 0) {
      cVar20 = DAT_0c26;
    }
    else {
      cVar20 = DAT_0942;
    }
    if (cVar20 == '\0') {
      bVar11 = DAT_0887;
      DAT_0887 = bVar11 | 2;
    }
  }
  bVar11 = DAT_0c20;
  if ((~bVar11 & 0x80) == 0) {
    cVar20 = DAT_0943;
    if (((cVar20 == '\0') || (cVar20 == '\x06')) || ((cVar20 == '\f' || (cVar20 == '\x12')))) {
      bVar11 = DAT_0881;
      DAT_0881 = bVar11 | 4;
      bVar11 = DAT_0887;
      DAT_0887 = bVar11 | 1;
    }
    bVar11 = DAT_0cca;
    if (((bVar11 & 1) != 0) && (cVar7 = DAT_0e00, cVar20 == (char)(cVar7 + '\x04'))) {
      bVar11 = DAT_0881;
      DAT_0881 = bVar11 | 2;
    }
    bVar11 = DAT_088b;
    if ((bVar11 & 0x80) == 0) {
      bVar21 = DAT_0c26;
      bVar11 = DAT_0ddb;
      bVar11 = bVar11 & 0x1f;
      if (0xb < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar21 == bVar11) {
        bVar11 = DAT_0a29;
        DAT_0a29 = bVar11 & 0xf7;
        bVar11 = DAT_0a2b;
        DAT_0a2b = bVar11 & 0xf7;
        bVar11 = DAT_088b;
        DAT_088b = bVar11 | 0x40;
        uVar12 = DAT_0a34._0_1_;
        DAT_0a32._0_1_ = uVar12;
        uVar12 = DAT_0a34._1_1_;
        DAT_0a32._1_1_ = uVar12;
        uVar12 = DAT_0a2f;
        DAT_0a2e = uVar12;
      }
    }
    else {
      uVar12 = DAT_0943;
      uVar10 = DAT_0ddb;
      uVar14 = CONCAT11(uVar12,uVar10) & 0xff1f;
      if ((char)(uVar14 >> 8) == (char)uVar14) {
        bVar11 = DAT_0a29;
        DAT_0a29 = bVar11 & 0xf7;
        bVar11 = DAT_0a2b;
        DAT_0a2b = bVar11 & 0xf7;
        bVar11 = DAT_088b;
        DAT_088b = bVar11 | 0x40;
        uVar12 = DAT_0a34._0_1_;
        DAT_0a32._0_1_ = uVar12;
        uVar12 = DAT_0a34._1_1_;
        DAT_0a32._1_1_ = uVar12;
        uVar12 = DAT_0a2f;
        DAT_0a2e = uVar12;
      }
    }
    FUN_f21b();
  }
  bVar11 = DAT_0c20;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_0cca;
    if ((~bVar11 & 1) == 0) {
      bVar11 = DAT_0943;
      bVar21 = DAT_0ddb;
      if (bVar11 == (bVar21 & 0x1f)) {
        bVar21 = DAT_088b;
        if ((~bVar21 & 0x80) == 0) {
          cVar20 = DAT_0a30;
          DAT_0a30 = cVar20 + -1 + (cVar20 == '\0');
        }
        else {
          DAT_0a30 = 0;
        }
      }
      uVar12 = DAT_0a2e;
      uVar14 = CONCAT11(bVar11,uVar12) & 0xff1f;
      if (((char)(uVar14 >> 8) == (char)uVar14) && (bVar11 = DAT_0a2b, (bVar11 & 8) != 0)) {
        FUN_e6ff();
      }
      uVar12 = DAT_0943;
      uVar10 = DAT_0ddb;
      uVar14 = CONCAT11(uVar12,uVar10) & 0xff1f;
      if ((char)(uVar14 >> 8) == (char)uVar14) {
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0x7f;
      }
    }
    else {
      bVar21 = DAT_0c26;
      bVar11 = DAT_0ddb;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar21 == bVar11) {
        bVar11 = DAT_088b;
        if ((~bVar11 & 0x80) == 0) {
          cVar20 = DAT_0a30;
          DAT_0a30 = cVar20 + -1 + (cVar20 == '\0');
        }
        else {
          DAT_0a30 = 0;
        }
      }
      bVar11 = DAT_0a2e;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if ((bVar21 == bVar11) && (bVar11 = DAT_0a2b, (bVar11 & 8) != 0)) {
        FUN_e6ff();
      }
      bVar21 = DAT_0c26;
      bVar11 = DAT_0ddb;
      bVar11 = bVar11 & 0x1f;
      if (bVar11 == 0xb) {
        bVar11 = 10;
      }
      else if (10 < bVar11) {
        bVar11 = bVar11 - 0xc;
      }
      if (bVar21 == bVar11) {
        bVar11 = DAT_0881;
        DAT_0881 = bVar11 & 0x7f;
      }
    }
  }
  cVar20 = DAT_0e54;
  if (cVar20 == '\0') {
    cVar20 = DAT_0e02;
    if (((((cVar20 != -0x80) && (bVar11 = DAT_08b1, (~bVar11 & 0x40) != 0)) &&
         (bVar11 = DAT_0884, (~bVar11 & 4) != 0)) &&
        ((bVar11 = DAT_0885, (~bVar11 & 0x40) != 0 && (bVar11 = DAT_0c1a, (~bVar11 & 0x80) != 0))))
       && (bVar11 = DAT_0c20, (bVar11 & 0x80) != 0)) {
      cVar20 = DAT_0c26;
      cVar7 = DAT_0e04;
      if (cVar20 != cVar7) {
        cVar7 = DAT_0e03;
        if (cVar20 == cVar7) {
          bVar11 = DAT_00e0;
          DAT_00e0 = bVar11 & 0x7f;
        }
        goto LAB_da23;
      }
    }
    bVar11 = DAT_00e0;
    DAT_00e0 = bVar11 | 0x80;
  }
LAB_da23:
  bVar11 = DAT_0c20;
  if ((~bVar11 & 0x80) == 0) {
    bVar11 = DAT_0942;
    if (((bVar11 & 0x1f) == 0) || ((bVar11 & 0x1f) == 0xc)) {
      uVar17 = DAT_0af2;
      DAT_0af4 = uVar17;
      sVar18 = DAT_0ae0;
      DAT_0af2 = sVar18;
      sVar5 = DAT_0af4;
      sVar18 = sVar18 - sVar5;
      bVar11 = DAT_0aef;
      if ((~bVar11 & 4) != 0) {
        sVar18 = 0;
      }
      if ((char)((ushort)sVar18 >> 8) != '\0') {
        sVar18 = 0xff;
      }
      DAT_0af0 = (char)sVar18;
      bVar11 = DAT_0aef;
      DAT_0aef = bVar11 | 4;
      bVar11 = DAT_0af0;
      bVar9 = DAT_0ddc;
      bVar21 = DAT_0af8;
      bVar19 = (byte)((ushort)bVar11 * (ushort)bVar9);
      bVar9 = (byte)((ushort)bVar11 * (ushort)bVar9 >> 8);
      bVar11 = bVar9 - (bVar19 < bVar21);
      if (bVar9 < (bVar19 < bVar21)) {
        cVar20 = -(bVar19 - bVar21);
        bVar21 = DAT_0ddd;
        iVar2 = (uint)bVar21 * (uint)CONCAT11((~bVar11 + 1) - (cVar20 != '\0'),cVar20);
        param_1 = (undefined2 *)((uint)iVar2 >> 0x10);
        uVar17 = (undefined2)iVar2;
        if (param_1 != (undefined2 *)0x0) {
          uVar17 = 0xffff;
        }
        bVar11 = DAT_0aef;
        bVar21 = (byte)((ushort)uVar17 >> 8);
        bVar9 = (byte)uVar17;
        if ((bVar11 & 1) == 0) {
          bVar19 = DAT_0af6._1_1_;
          bVar11 = bVar21 - (bVar9 < bVar19);
          uVar17 = CONCAT11(bVar11,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar21) goto LAB_da99;
          cVar20 = -(bVar9 - bVar19);
          uVar17 = CONCAT11((~bVar11 + 1) - (cVar20 != '\0'),cVar20);
          bVar11 = DAT_0aef;
          DAT_0aef = bVar11 & 0xfe;
        }
        else {
          bVar11 = DAT_0af6._1_1_;
          uVar17 = CONCAT11(bVar21 + CARRY1(bVar9,bVar11),bVar9 + bVar11);
          if (CARRY1(bVar21,CARRY1(bVar9,bVar11))) {
            uVar17 = 0xffff;
          }
LAB_da99:
          bVar11 = DAT_0aef;
          DAT_0aef = bVar11 | 1;
        }
        DAT_0af6 = uVar17;
      }
      else {
        bVar9 = DAT_0ddd;
        iVar2 = (uint)bVar9 * (uint)CONCAT11(bVar11,bVar19 - bVar21);
        param_1 = (undefined2 *)((uint)iVar2 >> 0x10);
        uVar17 = (undefined2)iVar2;
        if (param_1 != (undefined2 *)0x0) {
          uVar17 = 0xffff;
        }
        bVar11 = DAT_0aef;
        bVar21 = (byte)((ushort)uVar17 >> 8);
        bVar9 = (byte)uVar17;
        if ((bVar11 & 1) == 0) {
          bVar11 = DAT_0af6._1_1_;
          uVar17 = CONCAT11(bVar21 + CARRY1(bVar9,bVar11),bVar9 + bVar11);
          if (CARRY1(bVar21,CARRY1(bVar9,bVar11))) {
            uVar17 = 0xffff;
          }
LAB_dadb:
          bVar11 = DAT_0aef;
          DAT_0aef = bVar11 & 0xfe;
        }
        else {
          bVar19 = DAT_0af6._1_1_;
          bVar11 = bVar21 - (bVar9 < bVar19);
          uVar17 = CONCAT11(bVar11,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar21) goto LAB_dadb;
          cVar20 = -(bVar9 - bVar19);
          uVar17 = CONCAT11((~bVar11 + 1) - (cVar20 != '\0'),cVar20);
          bVar11 = DAT_0aef;
          DAT_0aef = bVar11 | 1;
        }
        DAT_0af6 = uVar17;
      }
      bVar21 = DAT_0af8;
      bVar11 = DAT_0aef;
      if ((bVar11 & 1) == 0) {
        bVar11 = DAT_0af6._0_1_;
        cVar20 = bVar21 + bVar11;
        if (CARRY1(bVar21,bVar11)) {
          cVar20 = -1;
        }
      }
      else {
        bVar11 = DAT_0af6._0_1_;
        cVar20 = bVar21 - bVar11;
        if (bVar21 < bVar11) {
          cVar20 = '\0';
        }
      }
      DAT_0af8 = cVar20;
      bVar11 = DAT_0af8;
      bVar21 = DAT_0afc;
      if (bVar11 < bVar21) {
        bVar9 = DAT_0ddd;
        sVar18 = (ushort)(byte)-(bVar11 - bVar21) * (ushort)bVar9;
        bVar11 = DAT_0aef;
        bVar21 = (byte)((ushort)sVar18 >> 8);
        bVar9 = (byte)sVar18;
        if ((bVar11 & 2) == 0) {
          bVar19 = DAT_0afa._1_1_;
          bVar11 = bVar21 - (bVar9 < bVar19);
          uVar17 = CONCAT11(bVar11,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar21) goto LAB_db22;
          cVar20 = -(bVar9 - bVar19);
          uVar17 = CONCAT11((~bVar11 + 1) - (cVar20 != '\0'),cVar20);
          bVar11 = DAT_0aef;
          DAT_0aef = bVar11 & 0xfd;
        }
        else {
          bVar11 = DAT_0afa._1_1_;
          uVar17 = CONCAT11(bVar21 + CARRY1(bVar9,bVar11),bVar9 + bVar11);
          if (CARRY1(bVar21,CARRY1(bVar9,bVar11))) {
            uVar17 = 0xffff;
          }
LAB_db22:
          bVar11 = DAT_0aef;
          DAT_0aef = bVar11 | 2;
        }
        DAT_0afa = uVar17;
      }
      else {
        bVar9 = DAT_0ddd;
        sVar18 = (ushort)(byte)(bVar11 - bVar21) * (ushort)bVar9;
        bVar11 = DAT_0aef;
        bVar21 = (byte)((ushort)sVar18 >> 8);
        bVar9 = (byte)sVar18;
        if ((bVar11 & 2) == 0) {
          bVar11 = DAT_0afa._1_1_;
          uVar17 = CONCAT11(bVar21 + CARRY1(bVar9,bVar11),bVar9 + bVar11);
          if (CARRY1(bVar21,CARRY1(bVar9,bVar11))) {
            uVar17 = 0xffff;
          }
LAB_db59:
          bVar11 = DAT_0aef;
          DAT_0aef = bVar11 & 0xfd;
        }
        else {
          bVar19 = DAT_0afa._1_1_;
          bVar11 = bVar21 - (bVar9 < bVar19);
          uVar17 = CONCAT11(bVar11,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar21) goto LAB_db59;
          cVar20 = -(bVar9 - bVar19);
          uVar17 = CONCAT11((~bVar11 + 1) - (cVar20 != '\0'),cVar20);
          bVar11 = DAT_0aef;
          DAT_0aef = bVar11 | 2;
        }
        DAT_0afa = uVar17;
      }
      bVar21 = DAT_0afc;
      bVar11 = DAT_0aef;
      if ((bVar11 & 2) == 0) {
        bVar11 = DAT_0afa._0_1_;
        cVar20 = bVar21 + bVar11;
        if (CARRY1(bVar21,bVar11)) {
          cVar20 = -1;
        }
      }
      else {
        bVar11 = DAT_0afa._0_1_;
        cVar20 = bVar21 - bVar11;
        if (bVar21 < bVar11) {
          cVar20 = '\0';
        }
      }
      DAT_0afc = cVar20;
      bVar11 = DAT_0afc;
      bVar21 = DAT_0dde;
      if (bVar11 < bVar21) {
        puVar13 = (undefined *)0x100;
      }
      else {
        bVar21 = DAT_0ddf;
        if (bVar11 < bVar21) {
          puVar13 = &UNK_0201;
        }
        else {
          bVar21 = DAT_0de0;
          if (bVar11 < bVar21) {
            puVar13 = &UNK_0402;
          }
          else {
            bVar21 = DAT_0de1;
            if (bVar11 < bVar21) {
              puVar13 = (undefined *)0x803;
            }
            else {
              bVar21 = DAT_0de2;
              if (bVar11 < bVar21) {
                puVar13 = &UNK_1004;
              }
              else {
                puVar13 = &UNK_2005;
              }
            }
          }
        }
      }
      DAT_0bed = (char)((ushort)puVar13 >> 8);
      DAT_0bec = (char)puVar13;
      cVar20 = DAT_0d97;
      if (((cVar20 != -0x80) && (bVar11 = DAT_08a3, (~bVar11 & 4) != 0)) &&
         (bVar11 = DAT_08b4, (~bVar11 & 0x80) != 0)) {
        bVar11 = DAT_088f;
        if (((~bVar11 & 0x80) == 0) || (bVar11 = DAT_0881, (~bVar11 & 0x10) == 0)) {
          DAT_0bee = 0;
          DAT_0bef = 0;
        }
        else {
          cVar20 = DAT_0bec;
          if (cVar20 == '\0') {
            bVar11 = DAT_08b8;
            if ((bVar11 & 2) != 0) {
              bVar11 = DAT_0bee;
              bVar21 = DAT_0de4;
              if (bVar11 <= bVar21) goto LAB_dc60;
              bVar11 = DAT_08b3;
              if ((~bVar11 & 8) != 0) {
                bVar11 = DAT_08b3;
                DAT_08b3 = bVar11 | 8;
                bVar11 = DAT_0bf4;
                DAT_0bf4 = bVar11 | 0x20;
                bVar11 = DAT_08bc;
                if ((~bVar11 & 8) != 0) {
                  bVar11 = DAT_08bc;
                  DAT_08bc = bVar11 | 8;
                  bVar11 = DAT_0bf4;
                  DAT_0bf4 = bVar11 | 2;
                }
              }
              bVar11 = DAT_0889;
              DAT_0889 = bVar11 & 0xfd;
              DAT_0bad = 0;
            }
            bVar11 = DAT_08b8;
            DAT_08b8 = bVar11 | 2;
          }
          else {
            bVar11 = DAT_08b8;
            if ((bVar11 & 2) == 0) {
              bVar11 = DAT_0bef;
              bVar21 = DAT_0de6;
              if ((bVar21 < bVar11) && (bVar11 = DAT_08b3, (bVar11 & 8) != 0)) {
                bVar11 = DAT_08b3;
                DAT_08b3 = bVar11 & 0xf7;
                bVar11 = DAT_0bf4;
                DAT_0bf4 = bVar11 | 0x20;
                bVar11 = DAT_08b1;
                if (((~bVar11 & 8) != 0) && (bVar11 = DAT_08b1, (~bVar11 & 4) != 0)) {
                  bVar11 = DAT_0889;
                  DAT_0889 = bVar11 | 2;
                  DAT_0bae = 0;
                  uVar12 = DAT_0a8d;
                  DAT_0bad = uVar12;
                  DAT_0baf = uVar12;
                }
              }
            }
            else {
              bVar11 = DAT_08b8;
              DAT_08b8 = bVar11 & 0xfd;
            }
          }
        }
      }
LAB_dc60:
      bVar11 = DAT_08b3;
      if ((bVar11 & 8) == 0) {
        uVar10 = DAT_0bed;
        uVar12 = DAT_0bec;
      }
      else {
        uVar10 = 0x20;
        uVar12 = 5;
      }
      DAT_089b = uVar10;
      DAT_089a = uVar12;
    }
  }
  do {
    bVar11 = DAT_008b;
    if ((~bVar11 & 2) == 0) {
      uVar17 = DAT_0092;
      DAT_08d2 = uVar17;
      bVar11 = DAT_088d;
      DAT_088d = bVar11 & 0xfd;
      goto LAB_dc91;
    }
    sVar18 = DAT_0044;
    sVar5 = DAT_08cc;
  } while (sVar18 - sVar5 < 0);
  bVar11 = DAT_088d;
  DAT_088d = bVar11 | 2;
LAB_dc91:
  cVar20 = DAT_0e05;
  if (cVar20 == -0x80) {
    DAT_0085 = 0;
    sVar18 = DAT_0044;
    DAT_08ce = sVar18 + 0x4b;
  }
  else {
    bVar11 = DAT_088d;
    DAT_088d = bVar11 & 0xfe;
    FUN_ee67();
  }
  bVar11 = DAT_088d;
  if ((~bVar11 & 2) != 0) {
    param_1 = &DAT_0c64;
    puVar22 = &DAT_0c7a;
    bVar11 = DAT_0c20;
    if ((bVar11 & 0x80) != 0) {
      bVar11 = DAT_0c26;
      param_1 = &DAT_0c64 + bVar11;
      bVar11 = DAT_0942;
      puVar22 = &DAT_0c7a + (bVar11 & 0xff1f);
    }
    uVar17 = DAT_08d2;
    *param_1 = uVar17;
    *puVar22 = uVar17;
    DAT_0c62 = uVar17;
    DAT_08c4 = 0x40;
    DAT_08c5 = 0;
  }
  cVar20 = DAT_0d8a;
  if (((cVar20 != -0x80) && (bVar11 = DAT_08a3, (~bVar11 & 4) != 0)) &&
     (bVar11 = DAT_08b4, (~bVar11 & 0x80) != 0)) {
    uVar17 = DAT_0c62;
    bVar11 = (byte)((ushort)uVar17 >> 8);
    if ((bVar11 < 0x1a) || (0xf5 < bVar11)) {
      bVar11 = DAT_08b7;
      if ((bVar11 & 0x40) == 0) {
        bVar11 = DAT_08b7;
        DAT_08b7 = bVar11 | 0x40;
        bVar11 = DAT_0bcd;
        DAT_0bcd = bVar11 | 0x20;
      }
      else {
        bVar11 = DAT_0b75;
        bVar21 = DAT_0de5;
        if ((bVar21 < bVar11) && (bVar11 = DAT_08b1, (~bVar11 & 0x20) != 0)) {
          bVar11 = DAT_08b1;
          DAT_08b1 = bVar11 | 0x20;
          bVar11 = DAT_0bf4;
          DAT_0bf4 = bVar11 | 0x80;
          bVar11 = DAT_08ba;
          if ((~bVar11 & 0x20) != 0) {
            bVar11 = DAT_08ba;
            DAT_08ba = bVar11 | 0x20;
            bVar11 = DAT_0bf4;
            DAT_0bf4 = bVar11 | 8;
          }
        }
      }
    }
    else {
      bVar11 = DAT_08b7;
      if ((bVar11 & 0x40) == 0) {
        bVar11 = DAT_0b82;
        bVar21 = DAT_0de6;
        if (bVar21 < bVar11) {
          bVar11 = DAT_08b1;
          if ((bVar11 & 0x20) != 0) {
            bVar11 = DAT_08b1;
            DAT_08b1 = bVar11 & 0xdf;
            bVar11 = DAT_0bf4;
            DAT_0bf4 = bVar11 | 0x80;
          }
          bVar11 = DAT_0bcd;
          DAT_0bcd = bVar11 & 0xdf;
        }
      }
      else {
        bVar11 = DAT_08b7;
        DAT_08b7 = bVar11 & 0xbf;
      }
    }
  }
  cVar20 = DAT_0c26;
  cVar7 = DAT_0de7;
  if (cVar7 == -0x80) {
    if (cVar20 == '\x01') {
      uVar17 = DAT_0cbc;
      DAT_0cbe = uVar17;
      uVar17 = DAT_0c66;
      DAT_0cbc = uVar17;
      goto LAB_dd9d;
    }
  }
  else if (cVar20 == '\0') {
    uVar17 = DAT_0cbc;
    DAT_0cbe = uVar17;
    uVar17 = DAT_0c64;
    DAT_0cbc = uVar17;
LAB_dd9d:
    bVar11 = DAT_08b1;
    if (((~bVar11 & 0x20) == 0) || (bVar11 = DAT_08b1, (bVar11 & 0x10) != 0)) {
      uVar17 = DAT_0e10;
      DAT_0cac = uVar17;
    }
    else {
      bVar11 = DAT_0cca;
      if ((bVar11 & 1) == 0) {
        bVar11 = DAT_0cca;
        if ((~bVar11 & 8) != 0) goto LAB_df0e;
        bVar11 = DAT_0cca;
        DAT_0cca = bVar11 & 0xf7;
        puVar22 = &DAT_0c64;
      }
      else {
        puVar22 = &DAT_0c7a;
      }
      RAM0e84 = puVar22;
      bVar11 = DAT_0de8;
      if ((bVar11 < 2) || (6 < bVar11)) {
        bVar11 = DAT_0def;
        sVar18 = RAM0e84;
        puVar13 = *(undefined **)((ushort)bVar11 * 2 + sVar18);
      }
      else {
        DAT_0cc0 = 0;
        DAT_0cc2 = 0;
        DAT_0e86 = 0;
        DAT_0e88 = 0xdef;
        RAM0e8a = 0xde9;
        while( true ) {
          pbVar8 = (byte *)DAT_0e88;
          sVar18 = RAM0e84;
          puVar13 = *(undefined **)((ushort)*pbVar8 * 2 + sVar18);
          puVar4 = puVar13 + -0x1eb7;
          if (puVar13 < &UNK_1eb7) {
            pbVar8 = (byte *)RAM0e8a;
            iVar2 = (uint)*pbVar8 * 2 *
                    (uint)CONCAT11((~(byte)((ushort)puVar4 >> 8) + 1) -
                                   ((char)-(char)puVar4 != '\0'),-(char)puVar4);
            RAM0e7c = (short)((uint)iVar2 >> 0x10);
            RAM0e7e = (short)iVar2;
            uVar14 = RAM0cc1;
            uVar16 = RAM0e7d;
            RAM0cc1 = uVar14 - uVar16;
            cVar20 = DAT_0cc0._0_1_;
            cVar7 = DAT_0e7c;
            DAT_0cc0._0_1_ = (cVar20 - cVar7) - (uVar14 < uVar16);
          }
          else {
            pbVar8 = (byte *)RAM0e8a;
            iVar2 = (uint)*pbVar8 * 2 * ZEXT24(puVar4);
            RAM0e7c = (short)((uint)iVar2 >> 0x10);
            RAM0e7e = (short)iVar2;
            uVar14 = RAM0cc1;
            uVar16 = RAM0e7d;
            RAM0cc1 = uVar14 + uVar16;
            cVar20 = DAT_0cc0._0_1_;
            cVar7 = DAT_0e7c;
            DAT_0cc0._0_1_ = cVar20 + cVar7 + CARRY2(uVar14,uVar16);
          }
          cVar20 = DAT_0e86;
          DAT_0e86 = cVar20 + 1U;
          bVar11 = DAT_0de8;
          if (bVar11 <= (byte)(cVar20 + 1U)) break;
          sVar18 = DAT_0e88;
          DAT_0e88 = sVar18 + 1;
          sVar18 = RAM0e8a;
          RAM0e8a = sVar18 + 1;
        }
        bVar11 = DAT_0cc0._0_1_;
        if ((short)((ushort)bVar11 << 8) < 0) {
          uVar17 = DAT_0cc0;
          bVar11 = DAT_0cc2;
          bVar11 = ~bVar11;
          DAT_0e8a = bVar11 + 1;
          DAT_0e88 = CONCAT11(~(byte)((ushort)uVar17 >> 8) + CARRY1(~(byte)uVar17,0xfe < bVar11),
                              ~(byte)uVar17 + (0xfe < bVar11));
          bVar11 = DAT_0de8;
          uVar14 = DAT_0e88;
          RAM0e80 = uVar14 / bVar11;
          uVar12 = DAT_0e8a;
          bVar21 = DAT_0de8;
          DAT_0e81._1_1_ = (char)(CONCAT11((char)(uVar14 % (ushort)bVar11),uVar12) / (ushort)bVar21)
          ;
          cVar20 = DAT_0e7f._1_1_;
          if (cVar20 == '\0') {
            puVar13 = (undefined *)DAT_0e81;
            if (puVar13 <= &UNK_1eb6) {
              cVar20 = -(char)(puVar13 + -0x1eb7);
              puVar13 = (undefined *)
                        CONCAT11((~(byte)((ushort)(puVar13 + -0x1eb7) >> 8) + 1) - (cVar20 != '\0'),
                                 cVar20);
              goto LAB_df08;
            }
          }
          puVar13 = (undefined *)0x0;
        }
        else {
          bVar11 = DAT_0de8;
          uVar14 = DAT_0cc0;
          RAM0e80 = uVar14 / bVar11;
          uVar12 = DAT_0cc2;
          bVar21 = DAT_0de8;
          DAT_0e81._1_1_ = (char)(CONCAT11((char)(uVar14 % (ushort)bVar11),uVar12) / (ushort)bVar21)
          ;
          cVar20 = DAT_0e7f._1_1_;
          if (cVar20 == '\0') {
            uVar14 = DAT_0e81;
            puVar13 = &UNK_1eb7 + uVar14;
            if (uVar14 < 0xe149) goto LAB_df08;
          }
          puVar13 = (undefined *)0xffff;
        }
      }
LAB_df08:
      DAT_0cac = puVar13;
      DAT_0cb6 = puVar13;
    }
LAB_df0e:
    uVar17 = DAT_0900;
    FUN_ee81();
    DAT_0cb5 = extraout_A;
    bVar11 = DAT_0cb5;
    puVar4 = (undefined *)DAT_0cac;
    puVar13 = puVar4 + -0x1eb7;
    if (puVar4 < &UNK_1eb7) {
      iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar13 >> 8) + 1) - ((char)-(char)puVar13 != '\0'),
                             -(char)puVar13) * (uint)bVar11 * 2;
      uVar14 = (ushort)iVar2;
      param_1 = (undefined2 *)(uVar14 + 0x80);
      bVar11 = (byte)((uint)iVar2 >> 0x10);
      cVar20 = bVar11 + (0xff7f < uVar14);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar11,0xff7f < uVar14),cVar20) < 0x100) {
        DAT_0e7c = cVar20;
        RAM0e7d = param_1;
        puVar4 = (undefined *)RAM0e7c;
        puVar13 = &UNK_1eb7 + -(short)puVar4;
        if (puVar4 < &UNK_1eb8) goto LAB_df6f;
      }
      puVar13 = (undefined *)0x0;
    }
    else {
      iVar2 = ZEXT24(puVar13) * (uint)bVar11 * 2;
      uVar14 = (ushort)iVar2;
      param_1 = (undefined2 *)(uVar14 + 0x80);
      bVar11 = (byte)((uint)iVar2 >> 0x10);
      cVar20 = bVar11 + (0xff7f < uVar14);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar11,0xff7f < uVar14),cVar20) < 0x100) {
        DAT_0e7c = cVar20;
        RAM0e7d = param_1;
        uVar14 = RAM0e7c;
        puVar13 = &UNK_1eb7 + uVar14;
        if (uVar14 < 0xe149) goto LAB_df6f;
      }
      puVar13 = (undefined *)0xffff;
    }
LAB_df6f:
    DAT_0cae = puVar13;
    bVar11 = DAT_0cca;
    if ((~bVar11 & 1) != 0) {
      bVar11 = DAT_0cca;
      if ((bVar11 & 2) == 0) {
LAB_df95:
        bVar11 = DAT_0cca;
        if ((~bVar11 & 2) != 0) {
          uVar14 = DAT_0cbc;
          uVar16 = DAT_0cbe;
          if ((uVar16 < uVar14) && (uVar6 = DAT_0e14, uVar6 <= uVar14 - uVar16)) {
            bVar11 = DAT_0cca;
            DAT_0cca = bVar11 | 2;
            cVar20 = DAT_0c25;
            DAT_0942 = cVar20 + '\f';
            goto LAB_dfb3;
          }
        }
        DAT_0ccb = 0;
      }
      else {
        uVar16 = DAT_0cbe;
        uVar14 = DAT_0cbc;
        if ((uVar16 <= uVar14) || (uVar6 = DAT_0e14, uVar16 - uVar14 < uVar6)) goto LAB_df95;
        bVar11 = DAT_0cca;
        DAT_0cca = bVar11 & 0xfd;
        uVar12 = DAT_0c25;
        DAT_0942 = uVar12;
LAB_dfb3:
        bVar11 = DAT_0ccb;
        bVar11 = (bVar11 + 1) - (0xfe < bVar11);
        DAT_0ccb = bVar11;
        bVar21 = DAT_0df5;
        if (bVar21 <= bVar11) {
          bVar11 = DAT_0cca;
          DAT_0cca = bVar11 | 1;
        }
      }
    }
  }
  bVar11 = DAT_0c20;
  if (((bVar11 & 0x80) != 0) && (bVar11 = DAT_0cca, (~bVar11 & 1) != 0)) {
    uVar14 = DAT_0cbc;
    uVar16 = DAT_0cbe;
    if ((uVar14 < uVar16) && (bVar11 = DAT_0cca, (~bVar11 & 8) != 0)) {
      bVar11 = DAT_0cca;
      DAT_0cca = bVar11 | 8;
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
  bVar11 = DAT_0a5d;
  puVar15 = (ushort *)(&DAT_0a5e + (ushort)bVar11 * 2);
  bVar11 = DAT_0a5c;
  bVar11 = (bVar11 + 1) - (0xfe < bVar11);
  DAT_0a5c = bVar11;
  if (bVar11 < 0x18) {
    if (1 < bVar11) {
      uVar12 = DAT_0a59;
      DAT_0e7c = uVar12;
      uVar17 = RAM0a5a;
      RAM0e7d = uVar17;
      goto LAB_e03c;
    }
  }
  else {
    uVar14 = RAM0a5a;
    RAM0e7d = uVar14 - *puVar15;
    cVar20 = DAT_0a59;
    DAT_0e7c = cVar20 - (uVar14 < *puVar15);
LAB_e03c:
    cVar20 = DAT_0c29;
    if (cVar20 == '\0') {
      uVar14 = DAT_0c2a;
    }
    else {
      uVar14 = 0xffff;
    }
    *puVar15 = uVar14;
    uVar14 = RAM0e7d;
    sVar18 = uVar14 + *puVar15;
    RAM0a5a = sVar18;
    RAM0e7d = sVar18;
    cVar20 = DAT_0e7c;
    cVar20 = cVar20 + CARRY2(uVar14,*puVar15);
    DAT_0a59 = cVar20;
    DAT_0e7c = cVar20;
    bVar11 = DAT_0a5c;
    if (bVar11 < 0x17) {
      cVar20 = DAT_0a5c;
      bVar11 = cVar20 - 1;
      DAT_0e7f._0_1_ = bVar11;
      uVar14 = RAM0a59;
      RAM0e7c = uVar14 / bVar11;
      uVar12 = DAT_0a5b;
      uVar14 = CONCAT11((char)(uVar14 % (ushort)bVar11),uVar12);
      bVar11 = DAT_0e7f._0_1_;
      puVar15 = (ushort *)(uVar14 % (ushort)bVar11);
      DAT_0e7e = (char)(uVar14 / bVar11);
      uVar14 = RAM0e7d;
      param_1 = (undefined2 *)((uint)uVar14 * 0x16);
      RAM0e7d = param_1;
      DAT_0e7c = (char)((uint)uVar14 * 0x16 >> 0x10);
    }
    uVar12 = DAT_0e7c;
    DAT_0a55._0_1_ = uVar12;
    uVar17 = RAM0e7d;
    RAM0a56 = uVar17;
    cVar20 = DAT_0a5d;
    bVar11 = cVar20 + 1;
    if (0x15 < bVar11) {
      bVar11 = 0;
    }
    DAT_0a5d = bVar11;
  }
  cVar20 = DAT_0e4d;
  if ((cVar20 != -0x80) && (bVar11 = DAT_0d1f, (~bVar11 & 0x80) != 0)) {
    bVar11 = DAT_0a38._0_1_;
    bVar21 = DAT_0e51;
    if (bVar11 < bVar21) {
      bVar21 = DAT_0e4f;
      if (bVar11 < bVar21) {
        bVar11 = DAT_0d23;
        bVar21 = DAT_0e4e;
        if ((bVar11 < bVar21) && (bVar11 = DAT_0d21, (~bVar11 & 8) != 0)) {
          bVar11 = DAT_0d21;
          DAT_0d21 = bVar11 & 0xfe;
          DAT_0b2f = 0;
          bVar11 = DAT_0d21;
          DAT_0d21 = bVar11 | 8;
        }
      }
    }
    else {
      bVar11 = DAT_0d21;
      DAT_0d21 = bVar11 | 1;
    }
  }
  cVar20 = DAT_0e05;
  if (cVar20 == -0x80) {
    do {
      bVar11 = DAT_008b;
      if ((~bVar11 & 2) == 0) {
        uVar17 = DAT_0092;
        DAT_08d2 = uVar17;
        DAT_08c4 = 0;
        DAT_08c5 = 0x40;
        bVar11 = DAT_0a27;
        DAT_0a27 = bVar11 & 0xfe;
        goto LAB_e11e;
      }
      sVar18 = DAT_0044;
      sVar5 = DAT_08ce;
    } while (sVar18 - sVar5 < 0);
    bVar11 = DAT_0a27;
    DAT_0a27 = bVar11 | 1;
LAB_e11e:
    bVar11 = DAT_088d;
    DAT_088d = bVar11 & 0xfe;
    FUN_ee67(puVar15);
    bVar11 = DAT_0a27;
    if ((bVar11 & 1) == 0) {
      uVar14 = DAT_08d2;
      uVar14 = uVar14 >> 6;
      DAT_0902 = uVar14;
      bVar11 = DAT_08b1;
      if (((~bVar11 & 8) == 0) || (bVar11 = DAT_08b1, (bVar11 & 4) != 0)) {
        uVar14 = DAT_0e28;
      }
      DAT_0904 = uVar14;
      uVar6 = DAT_08ea;
      uVar16 = uVar14 - uVar6;
      if (uVar14 < uVar6) {
        uVar16 = 0;
      }
      DAT_0906 = uVar16;
      bVar11 = DAT_0a27;
      if ((~bVar11 & 0x40) == 0) {
        uVar17 = DAT_0908;
        DAT_090a = uVar17;
        uVar14 = DAT_0908;
        if (uVar16 < uVar14) {
          uVar17 = FUN_f045(param_1);
          sVar18 = CONCAT11((~(byte)((ushort)uVar17 >> 8) + 1) - ((char)-(char)uVar17 != '\0'),
                            -(char)uVar17);
        }
        else {
          sVar18 = FUN_f045(param_1);
        }
        sVar5 = DAT_0908;
        uVar16 = sVar18 + sVar5;
        DAT_0908 = uVar16;
      }
      else {
        DAT_0908 = uVar16;
        DAT_090a = uVar16;
        bVar11 = DAT_0a27;
        DAT_0a27 = bVar11 | 0x40;
      }
      bVar11 = DAT_0c20;
      if ((bVar11 & 0x80) != 0) {
        cVar20 = DAT_0c25;
        if (cVar20 == '\0') {
          uVar14 = DAT_090a;
          bVar1 = uVar16 < uVar14;
          uVar14 = uVar16 - uVar14 >> 1;
          uVar16 = CONCAT11((byte)(uVar14 >> 8) | bVar1 << 7,(char)uVar14);
        }
        else {
          sVar18 = DAT_090a;
          uVar16 = uVar16 - sVar18;
          bVar1 = (short)uVar16 < 0;
        }
        if (bVar1) {
          puVar13 = (undefined *)(uVar16 + 0x80);
          if (uVar16 < 0xff80) {
            puVar13 = (undefined *)0x0;
          }
        }
        else {
          puVar13 = (undefined *)(uVar16 + 0x80);
          if ((0xff7f < uVar16) || (&UNK_047f < puVar13)) {
            puVar13 = &UNK_047f;
          }
        }
        DAT_0910 = puVar13;
      }
      bVar11 = DAT_0cca;
      if ((bVar11 & 1) != 0) {
        cVar20 = DAT_0942;
        cVar7 = DAT_0e07;
        if (cVar20 == cVar7) {
          uVar17 = DAT_0908;
          DAT_090c = uVar17;
          bVar11 = DAT_0a27;
          DAT_0a27 = bVar11 | 0x20;
        }
        cVar7 = DAT_0e08;
        if ((cVar20 == cVar7) && (bVar11 = DAT_0a27, (bVar11 & 0x20) != 0)) {
          sVar18 = DAT_0908;
          DAT_090e = sVar18;
          bVar11 = DAT_0a27;
          DAT_0a27 = bVar11 | 0x10;
          sVar5 = DAT_090c;
          uVar14 = sVar18 - sVar5;
          if ((short)uVar14 < 0) {
            puVar13 = (undefined *)(uVar14 + 0x80);
            if (uVar14 < 0xff80) {
              puVar13 = (undefined *)0x0;
            }
          }
          else {
            puVar13 = (undefined *)(uVar14 + 0x80);
            if ((0xff7f < uVar14) || (&UNK_047f < puVar13)) {
              puVar13 = &UNK_047f;
            }
          }
          DAT_0912 = puVar13;
        }
      }
      bVar11 = DAT_0020;
      if ((((bVar11 & 0x20) == 0) && (cVar20 = DAT_0942, cVar20 == DAT_355e)) &&
         (bVar11 = DAT_0a27, (~bVar11 & 0x10) == 0)) {
        uVar17 = DAT_0900;
        FUN_ee81();
        DAT_0a21 = extraout_A_00;
        uVar12 = DAT_0914;
        FUN_ef7f();
        DAT_0a23 = extraout_A_01;
        bVar11 = DAT_0a21;
        uVar12 = DAT_0915;
        FUN_ef7f((ushort)extraout_A_01 * (ushort)bVar11);
        DAT_0a24 = extraout_A_02;
        uVar17 = FUN_eeab(extraout_A_02 + 0x180);
        RAM0e82 = uVar17;
        uVar17 = DAT_0920;
        DAT_0bc4 = uVar17;
        DAT_0bc6 = 0x35ee;
        uVar17 = FUN_efa4();
        RAM0e7e = uVar17;
        RAM0e7c = 0;
        sVar18 = FUN_ef3a();
        uVar12 = (undefined1)((ushort)(sVar18 + 0x80) >> 8);
        DAT_0a25 = uVar12;
        uVar17 = RAM0e82;
        uVar17 = FUN_eeab(uVar12);
        RAM0e82 = uVar17;
        uVar17 = DAT_0910;
        DAT_0bc4 = uVar17;
        DAT_0bc6 = 0x3606;
        uVar17 = FUN_efa4();
        RAM0e7e = uVar17;
        RAM0e7c = 0;
        sVar18 = FUN_ef3a();
        uVar12 = (undefined1)((ushort)(sVar18 + 0x80) >> 8);
        DAT_0a26 = uVar12;
        uVar17 = RAM0e82;
        uVar17 = FUN_eeab(uVar12);
        RAM0e82 = uVar17;
        uVar17 = DAT_0912;
        DAT_0bc4 = uVar17;
        DAT_0bc6 = 0x3560;
        uVar17 = FUN_efa4();
        RAM0e7e = uVar17;
        bVar11 = DAT_088f;
        if ((bVar11 & 0x80) == 0) {
          uVar12 = DAT_089a;
        }
        RAM0e7c = 0;
        sVar18 = FUN_ef3a();
        DAT_0a20 = (char)((ushort)(sVar18 + 0x80) >> 8);
        uVar17 = DAT_090c;
        DAT_0bc4 = uVar17;
        DAT_0bc6 = 0x3588;
        uVar17 = FUN_efa4();
        RAM0e7e = uVar17;
        RAM0e7c = 0;
        sVar18 = FUN_ef3a();
        bVar21 = (byte)((ushort)(sVar18 + 0x80) >> 8);
        DAT_0a22 = bVar21;
        bVar11 = DAT_0a20;
        uVar14 = RAM0e82;
        uVar3 = (uint)((ushort)bVar21 * (ushort)bVar11) * (uint)uVar14;
        sVar18 = (short)uVar3;
        if (uVar3 < 0x10000000) {
          bVar11 = (byte)(uVar3 >> 0x10);
          bVar21 = bVar11 << 1;
          uVar14 = CONCAT11(((((char)(uVar3 >> 0x18) << 1 | bVar11 >> 7) << 1 | (bVar11 & 0x7f) >> 6
                             ) << 1 | (bVar21 & 0x7f) >> 6) << 1 | (bVar21 & 0x3f) >> 5,
                            (((bVar21 | (byte)(uVar3 >> 8) >> 7) << 1 |
                             (byte)((ushort)(sVar18 << 1) >> 0xf)) << 1 |
                            (byte)((ushort)(sVar18 << 2) >> 0xf)) << 1 |
                            (byte)((ushort)(sVar18 << 3) >> 0xf));
        }
        else {
          uVar14 = 0xffff;
        }
        if (24999 < uVar14) {
          uVar14 = 25000;
        }
        DAT_0a1e = uVar14;
        uVar16 = DAT_0966;
        sVar18 = uVar14 + uVar16;
        if (CARRY2(uVar14,uVar16)) {
          sVar18 = -1;
        }
        DAT_0a1c = sVar18;
        bVar11 = DAT_0a27;
        DAT_0a27 = bVar11 | 8;
      }
      cVar20 = DAT_0e09;
      if (cVar20 == -0x80) {
        cVar20 = DAT_0942;
        cVar7 = DAT_0e0a;
        if (((((cVar20 == cVar7) && (bVar11 = DAT_0a27, (bVar11 & 8) != 0)) &&
             ((bVar11 = DAT_088c, (~bVar11 & 0x80) != 0 &&
              ((bVar11 = DAT_0d71, (~bVar11 & 0x80) != 0 && (bVar11 = DAT_0884, (~bVar11 & 1) != 0))
              )))) && (bVar11 = DAT_08b3, (~bVar11 & 0x80) != 0)) &&
           ((bVar11 = DAT_0886, (~bVar11 & 0x40) != 0 && (bVar11 = DAT_0881, (~bVar11 & 0x10) != 0))
           )) {
          bVar11 = DAT_0920._0_1_;
          bVar21 = DAT_0e0b;
          if ((bVar21 <= bVar11) && (bVar21 = DAT_0e0c, bVar11 <= bVar21)) {
            uVar14 = DAT_0908;
            bVar11 = DAT_0e0d;
            bVar21 = (byte)(uVar14 >> 2);
            if ((bVar11 <= bVar21) && (bVar11 = DAT_0e0e, bVar21 <= bVar11)) {
              bVar11 = DAT_088f;
              if ((~bVar11 & 0x80) == 0) {
                uVar14 = DAT_0912;
                uVar16 = DAT_0e22;
                if (uVar16 <= uVar14) goto LAB_e3ec;
              }
              else {
                uVar14 = DAT_0912;
                uVar16 = DAT_0e24;
                if (uVar16 <= uVar14) {
LAB_e3ec:
                  uVar14 = DAT_0a1e;
                  uVar16 = DAT_0e20;
                  if (uVar16 < uVar14) {
                    bVar11 = DAT_0a27;
                    DAT_0a27 = bVar11 | 0x80;
                  }
                }
              }
            }
          }
        }
      }
      bVar11 = DAT_0a27;
      if ((bVar11 & 0x80) != 0) {
        bVar11 = DAT_0a29;
        DAT_0a29 = bVar11 | 0x80;
        FUN_eebd();
        bVar11 = DAT_0a29;
        DAT_0a29 = bVar11 & 0x7f;
        bVar11 = DAT_0a27;
        DAT_0a27 = bVar11 & 0x7f;
      }
    }
    else {
      bVar11 = DAT_0a27;
      DAT_0a27 = bVar11 & 0x7f;
      bVar11 = DAT_0a27;
      DAT_0a27 = bVar11 & 0xbf;
      bVar11 = DAT_0a27;
      DAT_0a27 = bVar11 & 0xdf;
      bVar11 = DAT_0a27;
      DAT_0a27 = bVar11 & 0xef;
      bVar11 = DAT_0a27;
      DAT_0a27 = bVar11 & 0xf7;
    }
  }
  cVar20 = DAT_0e55;
  if (cVar20 == '@') {
    bVar11 = DAT_0ab0;
    if ((bVar11 & 0x80) == 0) {
      bVar11 = DAT_0ab0;
      if ((bVar11 & 0x40) == 0) {
        bVar11 = DAT_0ab0;
        if ((bVar11 & 0x20) == 0) {
          bVar11 = DAT_0ab0;
          if ((bVar11 & 0x10) == 0) {
            bVar11 = DAT_0ab0;
            if ((bVar11 & 8) != 0) {
              uVar14 = DAT_0920;
              uVar16 = DAT_0e30;
              if (uVar14 < uVar16) {
                uVar16 = DAT_0ab4;
                uVar14 = (ushort)((uint)uVar16 * 10);
                if ((short)((uint)uVar16 * 10 >> 0x10) != 0) {
                  uVar14 = 0xffff;
                }
                uVar16 = DAT_0abe;
                if (uVar14 < uVar16) {
                  bVar11 = DAT_0ab0;
                  DAT_0ab0 = bVar11 | 0x20;
                  bVar11 = DAT_0ab0;
                  DAT_0ab0 = bVar11 & 0xf7;
                  uVar14 = DAT_0abe;
                  DAT_0aba = uVar14 / 10;
                }
                else {
                  bVar11 = DAT_0ab0;
                  DAT_0ab0 = bVar11 | 0x10;
                  bVar11 = DAT_0ab0;
                  DAT_0ab0 = bVar11 & 0xf7;
                }
              }
            }
          }
          else {
            uVar14 = DAT_0920;
            uVar16 = DAT_0e2e;
            if (uVar14 < uVar16) {
              sVar18 = DAT_0ab4;
              DAT_0aba = sVar18;
              if (sVar18 != 0) goto LAB_e536;
              bVar11 = DAT_0ab0;
              DAT_0ab0 = bVar11 | 0x80;
            }
            else {
              bVar11 = DAT_0ab0;
              DAT_0ab0 = bVar11 | 8;
              bVar11 = DAT_0ab1;
              DAT_0ab1 = bVar11 & 0xdf;
              DAT_0abe = 0;
            }
            bVar11 = DAT_0ab0;
            DAT_0ab0 = bVar11 & 0xef;
          }
        }
        else {
          uVar14 = DAT_0920;
          uVar16 = DAT_0e2e;
          if (uVar14 < uVar16) {
            uVar14 = DAT_0ab4;
            uVar16 = DAT_0aba;
            if (uVar14 < uVar16) goto LAB_e536;
            sVar18 = DAT_0ab4;
            if (sVar18 == 0) {
              bVar11 = DAT_0ab0;
              DAT_0ab0 = bVar11 | 0x80;
            }
            else {
              bVar11 = DAT_0ab0;
              DAT_0ab0 = bVar11 | 0x10;
              bVar11 = DAT_0ab1;
              DAT_0ab1 = bVar11 | 8;
            }
          }
          else {
            bVar11 = DAT_0ab0;
            DAT_0ab0 = bVar11 | 8;
            bVar11 = DAT_0ab1;
            DAT_0ab1 = bVar11 & 0xdf;
            uVar14 = DAT_0aba;
            uVar17 = (undefined2)((uint)uVar14 * 10);
            if ((short)((uint)uVar14 * 10 >> 0x10) != 0) {
              uVar17 = 0xffff;
            }
            DAT_0abe = uVar17;
          }
          bVar11 = DAT_0ab0;
          DAT_0ab0 = bVar11 & 0xdf;
        }
      }
      else {
        bVar11 = DAT_0881;
        if ((~bVar11 & 0x10) != 0) {
          uVar17 = DAT_0ab6;
          DAT_0ac0 = uVar17;
          uVar14 = DAT_0ab2;
          DAT_0ac8 = uVar14;
          DAT_0aba = uVar14;
          uVar16 = DAT_0ab4;
          if (uVar16 < uVar14) {
            bVar11 = DAT_0ab0;
            DAT_0ab0 = bVar11 | 0x20;
          }
          else {
            sVar18 = DAT_0ab4;
            if (sVar18 == 0) {
              bVar11 = DAT_0ab0;
              DAT_0ab0 = bVar11 | 0x80;
            }
            else {
              bVar11 = DAT_0ab0;
              DAT_0ab0 = bVar11 | 0x10;
              bVar11 = DAT_0ab1;
              DAT_0ab1 = bVar11 | 8;
            }
          }
          bVar11 = DAT_0ab0;
          DAT_0ab0 = bVar11 & 0xbf;
        }
      }
    }
    else {
      bVar11 = DAT_0ab1;
      if ((~bVar11 & 0x10) != 0) {
        bVar11 = DAT_0ac6;
        bVar11 = (bVar11 + 1) - (0xfe < bVar11);
        DAT_0ac6 = bVar11;
        bVar21 = DAT_0e0f;
        if (bVar21 < bVar11) {
          bVar11 = DAT_0ab0;
          DAT_0ab0 = bVar11 | 0x40;
          bVar11 = DAT_0ab0;
          DAT_0ab0 = bVar11 & 0x7f;
          bVar11 = DAT_0ab1;
          DAT_0ab1 = bVar11 | 0x10;
        }
      }
    }
  }
LAB_e536:
  cVar20 = DAT_0e55;
  if ((cVar20 != '@') || (bVar11 = DAT_08a3, (bVar11 & 4) != 0)) goto LAB_e6e9;
  bVar11 = DAT_0ab0;
  if (((~bVar11 & 8) == 0) || (bVar11 = DAT_0ab0, (bVar11 & 0x80) != 0)) {
    DAT_00bc = 0xff;
    DAT_00bd = 0xff;
    DAT_0aba = 0;
    DAT_0abc = 0;
    bVar11 = DAT_0ab0;
    if ((~bVar11 & 0x80) == 0) goto LAB_e5d3;
    bVar11 = DAT_0cca;
    if ((bVar11 & 1) == 0) {
LAB_e588:
      cVar7 = DAT_0c26;
      cVar20 = DAT_0ace;
      if (cVar7 != cVar20) goto LAB_e5d3;
      bVar11 = DAT_0ab1;
      if ((~bVar11 & 8) != 0) goto LAB_e595;
      uVar14 = DAT_0ab8;
      uVar16 = DAT_0abe;
      sVar18 = (uVar14 >> 1) - uVar16;
      if (uVar16 <= uVar14 >> 1 && sVar18 != 0) goto LAB_e5b3;
      sVar18 = CONCAT11((~(byte)((ushort)sVar18 >> 8) + 1) - ((char)-(char)sVar18 != '\0'),
                        -(char)sVar18);
    }
    else {
      cVar20 = DAT_0943;
      cVar7 = DAT_0ace;
      if (cVar20 != cVar7) {
        bVar11 = DAT_0ab1;
        if ((~bVar11 & 4) == 0) goto LAB_e5d3;
        goto LAB_e588;
      }
      bVar11 = DAT_0ab1;
      if ((bVar11 & 8) == 0) {
LAB_e595:
        bVar11 = DAT_0ab1;
        DAT_0ab1 = bVar11 | 8;
        uVar14 = DAT_0ac8;
        sVar18 = (short)((uint)uVar14 * 10);
        if ((short)((uint)uVar14 * 10 >> 0x10) != 0) {
          sVar18 = -1;
        }
      }
      else {
        uVar16 = DAT_0abe;
        uVar14 = DAT_0ab8;
        sVar18 = uVar16 - uVar14;
        if (uVar16 < uVar14) {
LAB_e5b3:
          sVar18 = 0;
        }
      }
    }
    DAT_0abe = sVar18;
LAB_e5d3:
    DAT_00ac = 0xff;
    DAT_00ad = 0xff;
  }
  else {
    bVar11 = DAT_0ab0;
    if ((bVar11 & 0x40) != 0) {
      DAT_00bc = 0;
      DAT_00bd = 0;
      DAT_0aba = 1000;
      DAT_0abc = 1000;
      goto LAB_e5d3;
    }
    bVar11 = DAT_0ab0;
    if ((bVar11 & 0x20) == 0) {
      bVar11 = DAT_0ab0;
      if ((bVar11 & 0x10) != 0) {
        bVar11 = DAT_0cca;
        if ((bVar11 & 1) != 0) {
          cVar20 = DAT_0943;
          cVar7 = DAT_0ace;
          if (cVar20 == cVar7) {
            uVar17 = DAT_0ab4;
            DAT_0aba = uVar17;
            bVar11 = DAT_0ab1;
            DAT_0ab1 = bVar11 | 1;
            goto LAB_e68c;
          }
          bVar11 = DAT_0ab1;
          if ((bVar11 & 4) != 0) goto LAB_e68f;
        }
        cVar7 = DAT_0c26;
        cVar20 = DAT_0ace;
        if (cVar7 == cVar20) {
          uVar17 = DAT_0ab4;
          DAT_0aba = uVar17;
          bVar11 = DAT_0ab1;
          DAT_0ab1 = bVar11 & 0xfe;
          goto LAB_e68c;
        }
      }
    }
    else {
      bVar11 = DAT_0cca;
      if ((bVar11 & 1) == 0) {
LAB_e61c:
        cVar7 = DAT_0c26;
        cVar20 = DAT_0ace;
        if (cVar7 != cVar20) goto LAB_e68f;
        bVar11 = DAT_0ab1;
        if ((~bVar11 & 8) == 0) {
          uVar16 = DAT_0ac0;
          uVar14 = DAT_0aba;
          sVar18 = (uVar16 >> 1) - uVar14;
          if (uVar16 >> 1 < uVar14 || sVar18 == 0) {
            uVar17 = CONCAT11((~(byte)((ushort)sVar18 >> 8) + 1) - ((char)-(char)sVar18 != '\0'),
                              -(char)sVar18);
          }
          else {
            uVar17 = 0;
          }
        }
        else {
          bVar11 = DAT_0ab1;
          DAT_0ab1 = bVar11 | 8;
          uVar17 = DAT_0ac8;
        }
        DAT_0aba = uVar17;
        bVar11 = DAT_0ab1;
        DAT_0ab1 = bVar11 & 0xfe;
      }
      else {
        cVar20 = DAT_0943;
        cVar7 = DAT_0ace;
        if (cVar20 != cVar7) {
          bVar11 = DAT_0ab1;
          if ((bVar11 & 4) != 0) goto LAB_e68f;
          goto LAB_e61c;
        }
        bVar11 = DAT_0ab1;
        if ((~bVar11 & 8) == 0) {
          uVar14 = DAT_0aba;
          uVar16 = DAT_0ac0;
          sVar18 = uVar14 - uVar16;
          if (uVar14 < uVar16) {
            sVar18 = 0;
          }
        }
        else {
          bVar11 = DAT_0ab1;
          DAT_0ab1 = bVar11 | 8;
          sVar18 = DAT_0ac8;
        }
        DAT_0aba = sVar18;
        bVar11 = DAT_0ab1;
        DAT_0ab1 = bVar11 | 1;
      }
LAB_e68c:
      FUN_f050();
    }
LAB_e68f:
    bVar11 = DAT_0ab1;
    if ((bVar11 & 0x20) != 0) {
      bVar11 = DAT_0ab1;
      if ((bVar11 & 1) == 0) {
        cVar7 = DAT_0c26;
        cVar20 = DAT_0ac7;
        if (cVar7 == cVar20) goto LAB_e6cf;
        cVar20 = DAT_0ace;
        if ((cVar7 != cVar20) && (cVar20 = DAT_0acd, cVar7 == cVar20)) goto LAB_e6c1;
      }
      else {
        cVar20 = DAT_0943;
        cVar7 = DAT_0ac7;
        if (cVar20 == cVar7) {
LAB_e6cf:
          FUN_f12b();
        }
        else {
          cVar7 = DAT_0ace;
          if ((cVar20 != cVar7) && (cVar7 = DAT_0acd, cVar20 == cVar7)) {
LAB_e6c1:
            DAT_00bc = 0;
            DAT_00bd = 0;
            DAT_00ac = 0xff;
            DAT_00ad = 0xff;
          }
        }
      }
    }
  }
  cVar7 = DAT_0c26;
  cVar20 = DAT_0ace;
  if (cVar7 == cVar20) {
    bVar11 = DAT_0cca;
    if ((bVar11 & 1) == 0) {
      bVar11 = DAT_0ab1;
      DAT_0ab1 = bVar11 & 0xfb;
    }
    else {
      bVar11 = DAT_0ab1;
      DAT_0ab1 = bVar11 | 4;
    }
  }
LAB_e6e9:
  DAT_0c24 = 0;
  sVar18 = DAT_0b22;
  DAT_0c22 = &UNK_1007 + sVar18;
  bVar11 = DAT_08c0;
  DAT_08c0 = bVar11 & 0xdf;
  bVar11 = DAT_08c0;
  DAT_08c0 = bVar11 & 0x7f;
  return;
}


/* Entry d5fe */

void FUN_d5fe(undefined2 *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  short sVar5;
  ushort uVar6;
  char cVar7;
  byte *pbVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined1 extraout_A;
  undefined1 extraout_A_00;
  byte extraout_A_01;
  byte extraout_A_02;
  undefined1 uVar11;
  byte bVar12;
  byte bVar19;
  char cVar20;
  undefined *puVar13;
  ushort uVar14;
  ushort *puVar15;
  ushort uVar16;
  byte bVar21;
  undefined2 uVar17;
  short sVar18;
  undefined2 *puVar22;
  
  sVar18 = DAT_0044;
  DAT_08cc = sVar18 + 0x4b;
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar12 = DAT_0c26;
    bVar21 = DAT_0941;
    if (0x33 < bVar21) {
      DAT_0a38 = 0xffff;
    }
    bVar9 = DAT_0a38._0_1_;
    bVar21 = DAT_0880;
    if ((~bVar21 & 1) == 0) {
      bVar21 = DAT_0dd0;
      if (bVar21 <= bVar9) {
        bVar21 = DAT_0b92;
        bVar9 = DAT_0dd1;
        if (bVar21 < bVar9) {
          bVar21 = DAT_0885;
          DAT_0885 = bVar21 | 0x40;
          goto LAB_d67b;
        }
      }
      bVar21 = DAT_0885;
      DAT_0885 = bVar21 & 0xbf;
      bVar21 = DAT_0884;
      DAT_0884 = bVar21 & 0xfb;
    }
    else {
      bVar21 = DAT_0880;
      if (((bVar21 & 2) != 0) && ((byte)(&DAT_0dc5)[bVar12] <= bVar9)) {
        bVar21 = DAT_0884;
        DAT_0884 = bVar21 | 4;
        DAT_0b32 = 0;
        FUN_f3a8();
        bVar21 = DAT_088d;
        if ((bVar21 & 1) != 0) {
          bVar21 = DAT_088d;
          DAT_088d = bVar21 & 0xfe;
          FUN_ee67();
        }
        goto LAB_d57e;
      }
      bVar21 = DAT_0b92;
      bVar9 = DAT_0dd1;
      if (bVar9 <= bVar21) {
        bVar21 = DAT_0885;
        DAT_0885 = bVar21 & 0xbf;
      }
    }
LAB_d67b:
    bVar21 = DAT_0c1a;
    if (((((~bVar21 & 0x80) != 0) && (bVar21 = DAT_0c1a, (bVar21 & 0x40) != 0)) &&
        (bVar21 = DAT_0a38._0_1_, (byte)(&DAT_0dc5)[bVar12] <= bVar21)) &&
       (bVar21 = DAT_0c1a, (~bVar21 & 0x20) != 0)) {
      bVar21 = DAT_0c1a;
      DAT_0c1a = bVar21 | 0x80;
      DAT_0c1b = 0;
      FUN_f3a8();
      bVar21 = DAT_088d;
      if ((bVar21 & 1) != 0) {
        bVar21 = DAT_088d;
        DAT_088d = bVar21 & 0xfe;
        FUN_ee67();
      }
LAB_d57e:
      DAT_0b33 = 0;
      DAT_004e = 2;
      DAT_0c24 = 0;
      sVar18 = DAT_0b22;
      DAT_0c22 = &UNK_1007 + sVar18;
      bVar21 = DAT_08c0;
      DAT_08c0 = bVar21 & 0xdf;
      bVar21 = DAT_08c0;
      DAT_08c0 = bVar21 & 0xbf;
      bVar21 = DAT_08c0;
      DAT_08c0 = bVar21 & 0x7f;
      return;
    }
    bVar21 = DAT_0882;
    DAT_0882 = bVar21 | 0x80;
  }
  DAT_0b33 = 0;
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    cVar20 = DAT_0d95;
    if (((cVar20 != -0x80) && (bVar21 = DAT_08a3, (~bVar21 & 4) != 0)) &&
       (bVar21 = DAT_08b4, (~bVar21 & 0x80) != 0)) {
      bVar21 = DAT_0880;
      if ((~bVar21 & 1) == 0) {
LAB_d6d9:
        bVar21 = DAT_0889;
        DAT_0889 = bVar21 | 1;
      }
      else {
        bVar21 = DAT_0ba0;
        bVar12 = DAT_0dd2;
        if (bVar12 <= bVar21) goto LAB_d6d9;
        bVar21 = DAT_0889;
        DAT_0889 = bVar21 & 0xfe;
      }
      bVar21 = DAT_0bf0;
      bVar12 = DAT_0dd4;
      if (bVar21 < bVar12) {
        bVar21 = DAT_0889;
        DAT_0889 = bVar21 & 0xbf;
      }
      else {
        bVar21 = DAT_0889;
        DAT_0889 = bVar21 | 0x40;
      }
      cVar20 = DAT_0d95;
      if ((((cVar20 != -0x80) && (bVar21 = DAT_0880, (~bVar21 & 0x80) != 0)) &&
          (((bVar21 = DAT_0d21, (~bVar21 & 1) != 0 &&
            (((bVar21 = DAT_0884, (~bVar21 & 2) != 0 && (bVar21 = DAT_0884, (~bVar21 & 4) != 0)) &&
             (bVar21 = DAT_088c, (~bVar21 & 0x80) != 0)))) &&
           ((bVar21 = DAT_0d71, (~bVar21 & 0x80) != 0 && (bVar21 = DAT_0885, (~bVar21 & 0x40) != 0))
           )))) && ((bVar21 = DAT_0c1a, (~bVar21 & 0x80) != 0 &&
                    (bVar21 = DAT_089d, (~bVar21 & 0x80) != 0)))) {
        bVar21 = DAT_0cca;
        if ((bVar21 & 1) == 0) {
          cVar20 = DAT_0c26;
        }
        else {
          cVar20 = DAT_0942;
        }
        bVar21 = DAT_088c;
        if ((((~bVar21 & 2) == 0) || (bVar21 = DAT_089c, (~bVar21 & 2) == 0)) || (cVar20 != '\b'))
        goto LAB_d7cb;
        bVar21 = DAT_0a98;
        if ((bVar21 & 8) != 0) {
          bVar21 = DAT_004e;
          if ((bVar21 & 0x20) == 0) {
            DAT_0b87 = 0;
            bVar21 = DAT_0889;
            if (((bVar21 & 1) == 0) || (bVar21 = DAT_0889, (bVar21 & 0x40) == 0)) {
              DAT_0b7d = 0;
            }
            else {
              bVar21 = DAT_0b7d;
              bVar21 = (bVar21 + 1) - (0xfe < bVar21);
              DAT_0b7d = bVar21;
              bVar12 = DAT_0dd5;
              if ((bVar12 <= bVar21) && (bVar21 = DAT_08b3, (~bVar21 & 0x80) != 0)) {
                bVar21 = DAT_08b3;
                DAT_08b3 = bVar21 | 0x80;
                bVar21 = DAT_0bf4;
                DAT_0bf4 = bVar21 | 0x20;
                bVar21 = DAT_08bc;
                if ((~bVar21 & 0x80) != 0) {
                  bVar21 = DAT_08bc;
                  DAT_08bc = bVar21 | 0x80;
                  bVar21 = DAT_0bf4;
                  DAT_0bf4 = bVar21 | 2;
                }
              }
            }
          }
          else {
            DAT_0b7d = 0;
            bVar21 = DAT_0b87;
            bVar21 = (bVar21 + 1) - (0xfe < bVar21);
            DAT_0b87 = bVar21;
            bVar12 = DAT_0dd3;
            if ((bVar12 <= bVar21) && (bVar21 = DAT_08b3, (bVar21 & 0x80) != 0)) {
              bVar21 = DAT_08b3;
              DAT_08b3 = bVar21 & 0x7f;
              bVar21 = DAT_0bf4;
              DAT_0bf4 = bVar21 | 0x20;
            }
          }
        }
      }
    }
    bVar21 = DAT_0cca;
    if ((bVar21 & 1) == 0) {
      uVar11 = DAT_0c26;
    }
    else {
      uVar11 = DAT_0942;
    }
    DAT_004e = 0x20;
  }
LAB_d7cb:
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0cca;
    if ((bVar21 & 1) == 0) {
      cVar20 = DAT_0c26;
    }
    else {
      cVar20 = DAT_0942;
    }
    if (cVar20 == '\n') {
      bVar21 = DAT_0a98;
      DAT_0a98 = bVar21 & 0x77;
    }
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0a38._0_1_;
    bVar12 = DAT_0dd6;
    if (bVar21 < bVar12) {
      bVar12 = DAT_0dd7;
      if (bVar21 < bVar12) {
        uVar11 = DAT_0881;
        bVar21 = DAT_0881;
        DAT_0881 = bVar21 & 0xef;
      }
    }
    else {
      bVar21 = DAT_0881;
      DAT_0881 = bVar21 | 0x10;
      uVar11 = DAT_0dd8;
      DAT_0a2c = uVar11;
    }
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0a38._0_1_;
    bVar12 = DAT_0dda;
    if (((bVar21 < bVar12) || (bVar12 = DAT_0880, (~bVar12 & 1) != 0)) &&
       (bVar12 = DAT_0dd9, bVar21 < bVar12)) {
      bVar12 = DAT_0cca;
      if ((bVar12 & 1) == 0) {
        cVar20 = DAT_0c26;
      }
      else {
        cVar20 = DAT_0942;
      }
      if (cVar20 == '\0') {
        bVar12 = DAT_0880;
        DAT_0880 = bVar12 & 0xbf;
      }
      bVar12 = DAT_0dd9;
      if (bVar12 <= bVar21) goto LAB_d855;
      if (cVar20 == '\0') {
        bVar21 = DAT_0880;
        DAT_0880 = bVar21 & 0xfb;
      }
    }
    else {
      bVar21 = DAT_0880;
      DAT_0880 = bVar21 | 0x40;
LAB_d855:
      bVar21 = DAT_0880;
      DAT_0880 = bVar21 | 4;
      DAT_0a8e = 0x80;
    }
    bVar21 = DAT_0881;
    DAT_0881 = bVar21 & 0xdf;
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    FUN_e778();
    FUN_e7d0();
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0cca;
    if ((bVar21 & 1) == 0) {
      cVar20 = DAT_0c26;
    }
    else {
      cVar20 = DAT_0942;
    }
    if (cVar20 == '\0') {
      bVar21 = DAT_0887;
      DAT_0887 = bVar21 | 2;
    }
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    cVar20 = DAT_0943;
    if (((cVar20 == '\0') || (cVar20 == '\x06')) || ((cVar20 == '\f' || (cVar20 == '\x12')))) {
      bVar21 = DAT_0881;
      DAT_0881 = bVar21 | 4;
      bVar21 = DAT_0887;
      DAT_0887 = bVar21 | 1;
    }
    bVar21 = DAT_0cca;
    if (((bVar21 & 1) != 0) && (cVar7 = DAT_0e00, cVar20 == (char)(cVar7 + '\x04'))) {
      bVar21 = DAT_0881;
      DAT_0881 = bVar21 | 2;
    }
    bVar21 = DAT_088b;
    if ((bVar21 & 0x80) == 0) {
      bVar12 = DAT_0c26;
      bVar21 = DAT_0ddb;
      bVar21 = bVar21 & 0x1f;
      if (0xb < bVar21) {
        bVar21 = bVar21 - 0xc;
      }
      if (bVar12 == bVar21) {
        bVar21 = DAT_0a29;
        DAT_0a29 = bVar21 & 0xf7;
        bVar21 = DAT_0a2b;
        DAT_0a2b = bVar21 & 0xf7;
        bVar21 = DAT_088b;
        DAT_088b = bVar21 | 0x40;
        uVar11 = DAT_0a34._0_1_;
        DAT_0a32._0_1_ = uVar11;
        uVar11 = DAT_0a34._1_1_;
        DAT_0a32._1_1_ = uVar11;
        uVar11 = DAT_0a2f;
        DAT_0a2e = uVar11;
      }
    }
    else {
      uVar11 = DAT_0943;
      uVar10 = DAT_0ddb;
      uVar14 = CONCAT11(uVar11,uVar10) & 0xff1f;
      if ((char)(uVar14 >> 8) == (char)uVar14) {
        bVar21 = DAT_0a29;
        DAT_0a29 = bVar21 & 0xf7;
        bVar21 = DAT_0a2b;
        DAT_0a2b = bVar21 & 0xf7;
        bVar21 = DAT_088b;
        DAT_088b = bVar21 | 0x40;
        uVar11 = DAT_0a34._0_1_;
        DAT_0a32._0_1_ = uVar11;
        uVar11 = DAT_0a34._1_1_;
        DAT_0a32._1_1_ = uVar11;
        uVar11 = DAT_0a2f;
        DAT_0a2e = uVar11;
      }
    }
    FUN_f21b();
  }
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0cca;
    if ((~bVar21 & 1) == 0) {
      bVar21 = DAT_0943;
      bVar12 = DAT_0ddb;
      if (bVar21 == (bVar12 & 0x1f)) {
        bVar12 = DAT_088b;
        if ((~bVar12 & 0x80) == 0) {
          cVar20 = DAT_0a30;
          DAT_0a30 = cVar20 + -1 + (cVar20 == '\0');
        }
        else {
          DAT_0a30 = 0;
        }
      }
      uVar11 = DAT_0a2e;
      uVar14 = CONCAT11(bVar21,uVar11) & 0xff1f;
      if (((char)(uVar14 >> 8) == (char)uVar14) && (bVar21 = DAT_0a2b, (bVar21 & 8) != 0)) {
        FUN_e6ff();
      }
      uVar11 = DAT_0943;
      uVar10 = DAT_0ddb;
      uVar14 = CONCAT11(uVar11,uVar10) & 0xff1f;
      if ((char)(uVar14 >> 8) == (char)uVar14) {
        bVar21 = DAT_0881;
        DAT_0881 = bVar21 & 0x7f;
      }
    }
    else {
      bVar12 = DAT_0c26;
      bVar21 = DAT_0ddb;
      bVar21 = bVar21 & 0x1f;
      if (bVar21 == 0xb) {
        bVar21 = 10;
      }
      else if (10 < bVar21) {
        bVar21 = bVar21 - 0xc;
      }
      if (bVar12 == bVar21) {
        bVar21 = DAT_088b;
        if ((~bVar21 & 0x80) == 0) {
          cVar20 = DAT_0a30;
          DAT_0a30 = cVar20 + -1 + (cVar20 == '\0');
        }
        else {
          DAT_0a30 = 0;
        }
      }
      bVar21 = DAT_0a2e;
      bVar21 = bVar21 & 0x1f;
      if (bVar21 == 0xb) {
        bVar21 = 10;
      }
      else if (10 < bVar21) {
        bVar21 = bVar21 - 0xc;
      }
      if ((bVar12 == bVar21) && (bVar21 = DAT_0a2b, (bVar21 & 8) != 0)) {
        FUN_e6ff();
      }
      bVar12 = DAT_0c26;
      bVar21 = DAT_0ddb;
      bVar21 = bVar21 & 0x1f;
      if (bVar21 == 0xb) {
        bVar21 = 10;
      }
      else if (10 < bVar21) {
        bVar21 = bVar21 - 0xc;
      }
      if (bVar12 == bVar21) {
        bVar21 = DAT_0881;
        DAT_0881 = bVar21 & 0x7f;
      }
    }
  }
  cVar20 = DAT_0e54;
  if (cVar20 == '\0') {
    cVar20 = DAT_0e02;
    if (((((cVar20 != -0x80) && (bVar21 = DAT_08b1, (~bVar21 & 0x40) != 0)) &&
         (bVar21 = DAT_0884, (~bVar21 & 4) != 0)) &&
        ((bVar21 = DAT_0885, (~bVar21 & 0x40) != 0 && (bVar21 = DAT_0c1a, (~bVar21 & 0x80) != 0))))
       && (bVar21 = DAT_0c20, (bVar21 & 0x80) != 0)) {
      cVar20 = DAT_0c26;
      cVar7 = DAT_0e04;
      if (cVar20 != cVar7) {
        cVar7 = DAT_0e03;
        if (cVar20 == cVar7) {
          bVar21 = DAT_00e0;
          DAT_00e0 = bVar21 & 0x7f;
        }
        goto LAB_da23;
      }
    }
    bVar21 = DAT_00e0;
    DAT_00e0 = bVar21 | 0x80;
  }
LAB_da23:
  bVar21 = DAT_0c20;
  if ((~bVar21 & 0x80) == 0) {
    bVar21 = DAT_0942;
    if (((bVar21 & 0x1f) == 0) || ((bVar21 & 0x1f) == 0xc)) {
      uVar17 = DAT_0af2;
      DAT_0af4 = uVar17;
      sVar18 = DAT_0ae0;
      DAT_0af2 = sVar18;
      sVar5 = DAT_0af4;
      sVar18 = sVar18 - sVar5;
      bVar21 = DAT_0aef;
      if ((~bVar21 & 4) != 0) {
        sVar18 = 0;
      }
      if ((char)((ushort)sVar18 >> 8) != '\0') {
        sVar18 = 0xff;
      }
      DAT_0af0 = (char)sVar18;
      bVar21 = DAT_0aef;
      DAT_0aef = bVar21 | 4;
      bVar21 = DAT_0af0;
      bVar9 = DAT_0ddc;
      bVar12 = DAT_0af8;
      bVar19 = (byte)((ushort)bVar21 * (ushort)bVar9);
      bVar9 = (byte)((ushort)bVar21 * (ushort)bVar9 >> 8);
      bVar21 = bVar9 - (bVar19 < bVar12);
      if (bVar9 < (bVar19 < bVar12)) {
        cVar20 = -(bVar19 - bVar12);
        bVar12 = DAT_0ddd;
        iVar2 = (uint)bVar12 * (uint)CONCAT11((~bVar21 + 1) - (cVar20 != '\0'),cVar20);
        param_1 = (undefined2 *)((uint)iVar2 >> 0x10);
        uVar17 = (undefined2)iVar2;
        if (param_1 != (undefined2 *)0x0) {
          uVar17 = 0xffff;
        }
        bVar21 = DAT_0aef;
        bVar12 = (byte)((ushort)uVar17 >> 8);
        bVar9 = (byte)uVar17;
        if ((bVar21 & 1) == 0) {
          bVar19 = DAT_0af6._1_1_;
          bVar21 = bVar12 - (bVar9 < bVar19);
          uVar17 = CONCAT11(bVar21,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar12) goto LAB_da99;
          cVar20 = -(bVar9 - bVar19);
          uVar17 = CONCAT11((~bVar21 + 1) - (cVar20 != '\0'),cVar20);
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 & 0xfe;
        }
        else {
          bVar21 = DAT_0af6._1_1_;
          uVar17 = CONCAT11(bVar12 + CARRY1(bVar9,bVar21),bVar9 + bVar21);
          if (CARRY1(bVar12,CARRY1(bVar9,bVar21))) {
            uVar17 = 0xffff;
          }
LAB_da99:
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 | 1;
        }
        DAT_0af6 = uVar17;
      }
      else {
        bVar9 = DAT_0ddd;
        iVar2 = (uint)bVar9 * (uint)CONCAT11(bVar21,bVar19 - bVar12);
        param_1 = (undefined2 *)((uint)iVar2 >> 0x10);
        uVar17 = (undefined2)iVar2;
        if (param_1 != (undefined2 *)0x0) {
          uVar17 = 0xffff;
        }
        bVar21 = DAT_0aef;
        bVar12 = (byte)((ushort)uVar17 >> 8);
        bVar9 = (byte)uVar17;
        if ((bVar21 & 1) == 0) {
          bVar21 = DAT_0af6._1_1_;
          uVar17 = CONCAT11(bVar12 + CARRY1(bVar9,bVar21),bVar9 + bVar21);
          if (CARRY1(bVar12,CARRY1(bVar9,bVar21))) {
            uVar17 = 0xffff;
          }
LAB_dadb:
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 & 0xfe;
        }
        else {
          bVar19 = DAT_0af6._1_1_;
          bVar21 = bVar12 - (bVar9 < bVar19);
          uVar17 = CONCAT11(bVar21,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar12) goto LAB_dadb;
          cVar20 = -(bVar9 - bVar19);
          uVar17 = CONCAT11((~bVar21 + 1) - (cVar20 != '\0'),cVar20);
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 | 1;
        }
        DAT_0af6 = uVar17;
      }
      bVar12 = DAT_0af8;
      bVar21 = DAT_0aef;
      if ((bVar21 & 1) == 0) {
        bVar21 = DAT_0af6._0_1_;
        cVar20 = bVar12 + bVar21;
        if (CARRY1(bVar12,bVar21)) {
          cVar20 = -1;
        }
      }
      else {
        bVar21 = DAT_0af6._0_1_;
        cVar20 = bVar12 - bVar21;
        if (bVar12 < bVar21) {
          cVar20 = '\0';
        }
      }
      DAT_0af8 = cVar20;
      bVar21 = DAT_0af8;
      bVar12 = DAT_0afc;
      if (bVar21 < bVar12) {
        bVar9 = DAT_0ddd;
        sVar18 = (ushort)(byte)-(bVar21 - bVar12) * (ushort)bVar9;
        bVar21 = DAT_0aef;
        bVar12 = (byte)((ushort)sVar18 >> 8);
        bVar9 = (byte)sVar18;
        if ((bVar21 & 2) == 0) {
          bVar19 = DAT_0afa._1_1_;
          bVar21 = bVar12 - (bVar9 < bVar19);
          uVar17 = CONCAT11(bVar21,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar12) goto LAB_db22;
          cVar20 = -(bVar9 - bVar19);
          uVar17 = CONCAT11((~bVar21 + 1) - (cVar20 != '\0'),cVar20);
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 & 0xfd;
        }
        else {
          bVar21 = DAT_0afa._1_1_;
          uVar17 = CONCAT11(bVar12 + CARRY1(bVar9,bVar21),bVar9 + bVar21);
          if (CARRY1(bVar12,CARRY1(bVar9,bVar21))) {
            uVar17 = 0xffff;
          }
LAB_db22:
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 | 2;
        }
        DAT_0afa = uVar17;
      }
      else {
        bVar9 = DAT_0ddd;
        sVar18 = (ushort)(byte)(bVar21 - bVar12) * (ushort)bVar9;
        bVar21 = DAT_0aef;
        bVar12 = (byte)((ushort)sVar18 >> 8);
        bVar9 = (byte)sVar18;
        if ((bVar21 & 2) == 0) {
          bVar21 = DAT_0afa._1_1_;
          uVar17 = CONCAT11(bVar12 + CARRY1(bVar9,bVar21),bVar9 + bVar21);
          if (CARRY1(bVar12,CARRY1(bVar9,bVar21))) {
            uVar17 = 0xffff;
          }
LAB_db59:
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 & 0xfd;
        }
        else {
          bVar19 = DAT_0afa._1_1_;
          bVar21 = bVar12 - (bVar9 < bVar19);
          uVar17 = CONCAT11(bVar21,bVar9 - bVar19);
          if ((bVar9 < bVar19) <= bVar12) goto LAB_db59;
          cVar20 = -(bVar9 - bVar19);
          uVar17 = CONCAT11((~bVar21 + 1) - (cVar20 != '\0'),cVar20);
          bVar21 = DAT_0aef;
          DAT_0aef = bVar21 | 2;
        }
        DAT_0afa = uVar17;
      }
      bVar12 = DAT_0afc;
      bVar21 = DAT_0aef;
      if ((bVar21 & 2) == 0) {
        bVar21 = DAT_0afa._0_1_;
        cVar20 = bVar12 + bVar21;
        if (CARRY1(bVar12,bVar21)) {
          cVar20 = -1;
        }
      }
      else {
        bVar21 = DAT_0afa._0_1_;
        cVar20 = bVar12 - bVar21;
        if (bVar12 < bVar21) {
          cVar20 = '\0';
        }
      }
      DAT_0afc = cVar20;
      bVar21 = DAT_0afc;
      bVar12 = DAT_0dde;
      if (bVar21 < bVar12) {
        puVar13 = (undefined *)0x100;
      }
      else {
        bVar12 = DAT_0ddf;
        if (bVar21 < bVar12) {
          puVar13 = &UNK_0201;
        }
        else {
          bVar12 = DAT_0de0;
          if (bVar21 < bVar12) {
            puVar13 = &UNK_0402;
          }
          else {
            bVar12 = DAT_0de1;
            if (bVar21 < bVar12) {
              puVar13 = (undefined *)0x803;
            }
            else {
              bVar12 = DAT_0de2;
              if (bVar21 < bVar12) {
                puVar13 = &UNK_1004;
              }
              else {
                puVar13 = &UNK_2005;
              }
            }
          }
        }
      }
      DAT_0bed = (char)((ushort)puVar13 >> 8);
      DAT_0bec = (char)puVar13;
      cVar20 = DAT_0d97;
      if (((cVar20 != -0x80) && (bVar21 = DAT_08a3, (~bVar21 & 4) != 0)) &&
         (bVar21 = DAT_08b4, (~bVar21 & 0x80) != 0)) {
        bVar21 = DAT_088f;
        if (((~bVar21 & 0x80) == 0) || (bVar21 = DAT_0881, (~bVar21 & 0x10) == 0)) {
          DAT_0bee = 0;
          DAT_0bef = 0;
        }
        else {
          cVar20 = DAT_0bec;
          if (cVar20 == '\0') {
            bVar21 = DAT_08b8;
            if ((bVar21 & 2) != 0) {
              bVar21 = DAT_0bee;
              bVar12 = DAT_0de4;
              if (bVar21 <= bVar12) goto LAB_dc60;
              bVar21 = DAT_08b3;
              if ((~bVar21 & 8) != 0) {
                bVar21 = DAT_08b3;
                DAT_08b3 = bVar21 | 8;
                bVar21 = DAT_0bf4;
                DAT_0bf4 = bVar21 | 0x20;
                bVar21 = DAT_08bc;
                if ((~bVar21 & 8) != 0) {
                  bVar21 = DAT_08bc;
                  DAT_08bc = bVar21 | 8;
                  bVar21 = DAT_0bf4;
                  DAT_0bf4 = bVar21 | 2;
                }
              }
              bVar21 = DAT_0889;
              DAT_0889 = bVar21 & 0xfd;
              DAT_0bad = 0;
            }
            bVar21 = DAT_08b8;
            DAT_08b8 = bVar21 | 2;
          }
          else {
            bVar21 = DAT_08b8;
            if ((bVar21 & 2) == 0) {
              bVar21 = DAT_0bef;
              bVar12 = DAT_0de6;
              if ((bVar12 < bVar21) && (bVar21 = DAT_08b3, (bVar21 & 8) != 0)) {
                bVar21 = DAT_08b3;
                DAT_08b3 = bVar21 & 0xf7;
                bVar21 = DAT_0bf4;
                DAT_0bf4 = bVar21 | 0x20;
                bVar21 = DAT_08b1;
                if (((~bVar21 & 8) != 0) && (bVar21 = DAT_08b1, (~bVar21 & 4) != 0)) {
                  bVar21 = DAT_0889;
                  DAT_0889 = bVar21 | 2;
                  DAT_0bae = 0;
                  uVar11 = DAT_0a8d;
                  DAT_0bad = uVar11;
                  DAT_0baf = uVar11;
                }
              }
            }
            else {
              bVar21 = DAT_08b8;
              DAT_08b8 = bVar21 & 0xfd;
            }
          }
        }
      }
LAB_dc60:
      bVar21 = DAT_08b3;
      if ((bVar21 & 8) == 0) {
        uVar10 = DAT_0bed;
        uVar11 = DAT_0bec;
      }
      else {
        uVar10 = 0x20;
        uVar11 = 5;
      }
      DAT_089b = uVar10;
      DAT_089a = uVar11;
    }
  }
  do {
    bVar21 = DAT_008b;
    if ((~bVar21 & 2) == 0) {
      uVar17 = DAT_0092;
      DAT_08d2 = uVar17;
      bVar21 = DAT_088d;
      DAT_088d = bVar21 & 0xfd;
      goto LAB_dc91;
    }
    sVar18 = DAT_0044;
    sVar5 = DAT_08cc;
  } while (sVar18 - sVar5 < 0);
  bVar21 = DAT_088d;
  DAT_088d = bVar21 | 2;
LAB_dc91:
  cVar20 = DAT_0e05;
  if (cVar20 == -0x80) {
    DAT_0085 = 0;
    sVar18 = DAT_0044;
    DAT_08ce = sVar18 + 0x4b;
  }
  else {
    bVar21 = DAT_088d;
    DAT_088d = bVar21 & 0xfe;
    FUN_ee67();
  }
  bVar21 = DAT_088d;
  if ((~bVar21 & 2) != 0) {
    param_1 = &DAT_0c64;
    puVar22 = &DAT_0c7a;
    bVar21 = DAT_0c20;
    if ((bVar21 & 0x80) != 0) {
      bVar21 = DAT_0c26;
      param_1 = &DAT_0c64 + bVar21;
      bVar21 = DAT_0942;
      puVar22 = &DAT_0c7a + (bVar21 & 0xff1f);
    }
    uVar17 = DAT_08d2;
    *param_1 = uVar17;
    *puVar22 = uVar17;
    DAT_0c62 = uVar17;
    DAT_08c4 = 0x40;
    DAT_08c5 = 0;
  }
  cVar20 = DAT_0d8a;
  if (((cVar20 != -0x80) && (bVar21 = DAT_08a3, (~bVar21 & 4) != 0)) &&
     (bVar21 = DAT_08b4, (~bVar21 & 0x80) != 0)) {
    uVar17 = DAT_0c62;
    bVar21 = (byte)((ushort)uVar17 >> 8);
    if ((bVar21 < 0x1a) || (0xf5 < bVar21)) {
      bVar21 = DAT_08b7;
      if ((bVar21 & 0x40) == 0) {
        bVar21 = DAT_08b7;
        DAT_08b7 = bVar21 | 0x40;
        bVar21 = DAT_0bcd;
        DAT_0bcd = bVar21 | 0x20;
      }
      else {
        bVar21 = DAT_0b75;
        bVar12 = DAT_0de5;
        if ((bVar12 < bVar21) && (bVar21 = DAT_08b1, (~bVar21 & 0x20) != 0)) {
          bVar21 = DAT_08b1;
          DAT_08b1 = bVar21 | 0x20;
          bVar21 = DAT_0bf4;
          DAT_0bf4 = bVar21 | 0x80;
          bVar21 = DAT_08ba;
          if ((~bVar21 & 0x20) != 0) {
            bVar21 = DAT_08ba;
            DAT_08ba = bVar21 | 0x20;
            bVar21 = DAT_0bf4;
            DAT_0bf4 = bVar21 | 8;
          }
        }
      }
    }
    else {
      bVar21 = DAT_08b7;
      if ((bVar21 & 0x40) == 0) {
        bVar21 = DAT_0b82;
        bVar12 = DAT_0de6;
        if (bVar12 < bVar21) {
          bVar21 = DAT_08b1;
          if ((bVar21 & 0x20) != 0) {
            bVar21 = DAT_08b1;
            DAT_08b1 = bVar21 & 0xdf;
            bVar21 = DAT_0bf4;
            DAT_0bf4 = bVar21 | 0x80;
          }
          bVar21 = DAT_0bcd;
          DAT_0bcd = bVar21 & 0xdf;
        }
      }
      else {
        bVar21 = DAT_08b7;
        DAT_08b7 = bVar21 & 0xbf;
      }
    }
  }
  cVar20 = DAT_0c26;
  cVar7 = DAT_0de7;
  if (cVar7 == -0x80) {
    if (cVar20 == '\x01') {
      uVar17 = DAT_0cbc;
      DAT_0cbe = uVar17;
      uVar17 = DAT_0c66;
      DAT_0cbc = uVar17;
      goto LAB_dd9d;
    }
  }
  else if (cVar20 == '\0') {
    uVar17 = DAT_0cbc;
    DAT_0cbe = uVar17;
    uVar17 = DAT_0c64;
    DAT_0cbc = uVar17;
LAB_dd9d:
    bVar21 = DAT_08b1;
    if (((~bVar21 & 0x20) == 0) || (bVar21 = DAT_08b1, (bVar21 & 0x10) != 0)) {
      uVar17 = DAT_0e10;
      DAT_0cac = uVar17;
    }
    else {
      bVar21 = DAT_0cca;
      if ((bVar21 & 1) == 0) {
        bVar21 = DAT_0cca;
        if ((~bVar21 & 8) != 0) goto LAB_df0e;
        bVar21 = DAT_0cca;
        DAT_0cca = bVar21 & 0xf7;
        puVar22 = &DAT_0c64;
      }
      else {
        puVar22 = &DAT_0c7a;
      }
      RAM0e84 = puVar22;
      bVar21 = DAT_0de8;
      if ((bVar21 < 2) || (6 < bVar21)) {
        bVar21 = DAT_0def;
        sVar18 = RAM0e84;
        puVar13 = *(undefined **)((ushort)bVar21 * 2 + sVar18);
      }
      else {
        DAT_0cc0 = 0;
        DAT_0cc2 = 0;
        DAT_0e86 = 0;
        DAT_0e88 = 0xdef;
        RAM0e8a = 0xde9;
        while( true ) {
          pbVar8 = (byte *)DAT_0e88;
          sVar18 = RAM0e84;
          puVar13 = *(undefined **)((ushort)*pbVar8 * 2 + sVar18);
          puVar4 = puVar13 + -0x1eb7;
          if (puVar13 < &UNK_1eb7) {
            pbVar8 = (byte *)RAM0e8a;
            iVar2 = (uint)*pbVar8 * 2 *
                    (uint)CONCAT11((~(byte)((ushort)puVar4 >> 8) + 1) -
                                   ((char)-(char)puVar4 != '\0'),-(char)puVar4);
            RAM0e7c = (short)((uint)iVar2 >> 0x10);
            RAM0e7e = (short)iVar2;
            uVar14 = RAM0cc1;
            uVar16 = RAM0e7d;
            RAM0cc1 = uVar14 - uVar16;
            cVar20 = DAT_0cc0._0_1_;
            cVar7 = DAT_0e7c;
            DAT_0cc0._0_1_ = (cVar20 - cVar7) - (uVar14 < uVar16);
          }
          else {
            pbVar8 = (byte *)RAM0e8a;
            iVar2 = (uint)*pbVar8 * 2 * ZEXT24(puVar4);
            RAM0e7c = (short)((uint)iVar2 >> 0x10);
            RAM0e7e = (short)iVar2;
            uVar14 = RAM0cc1;
            uVar16 = RAM0e7d;
            RAM0cc1 = uVar14 + uVar16;
            cVar20 = DAT_0cc0._0_1_;
            cVar7 = DAT_0e7c;
            DAT_0cc0._0_1_ = cVar20 + cVar7 + CARRY2(uVar14,uVar16);
          }
          cVar20 = DAT_0e86;
          DAT_0e86 = cVar20 + 1U;
          bVar21 = DAT_0de8;
          if (bVar21 <= (byte)(cVar20 + 1U)) break;
          sVar18 = DAT_0e88;
          DAT_0e88 = sVar18 + 1;
          sVar18 = RAM0e8a;
          RAM0e8a = sVar18 + 1;
        }
        bVar21 = DAT_0cc0._0_1_;
        if ((short)((ushort)bVar21 << 8) < 0) {
          uVar17 = DAT_0cc0;
          bVar21 = DAT_0cc2;
          bVar21 = ~bVar21;
          DAT_0e8a = bVar21 + 1;
          DAT_0e88 = CONCAT11(~(byte)((ushort)uVar17 >> 8) + CARRY1(~(byte)uVar17,0xfe < bVar21),
                              ~(byte)uVar17 + (0xfe < bVar21));
          bVar21 = DAT_0de8;
          uVar14 = DAT_0e88;
          RAM0e80 = uVar14 / bVar21;
          uVar11 = DAT_0e8a;
          bVar12 = DAT_0de8;
          DAT_0e81._1_1_ = (char)(CONCAT11((char)(uVar14 % (ushort)bVar21),uVar11) / (ushort)bVar12)
          ;
          cVar20 = DAT_0e7f._1_1_;
          if (cVar20 == '\0') {
            puVar13 = (undefined *)DAT_0e81;
            if (puVar13 <= &UNK_1eb6) {
              cVar20 = -(char)(puVar13 + -0x1eb7);
              puVar13 = (undefined *)
                        CONCAT11((~(byte)((ushort)(puVar13 + -0x1eb7) >> 8) + 1) - (cVar20 != '\0'),
                                 cVar20);
              goto LAB_df08;
            }
          }
          puVar13 = (undefined *)0x0;
        }
        else {
          bVar21 = DAT_0de8;
          uVar14 = DAT_0cc0;
          RAM0e80 = uVar14 / bVar21;
          uVar11 = DAT_0cc2;
          bVar12 = DAT_0de8;
          DAT_0e81._1_1_ = (char)(CONCAT11((char)(uVar14 % (ushort)bVar21),uVar11) / (ushort)bVar12)
          ;
          cVar20 = DAT_0e7f._1_1_;
          if (cVar20 == '\0') {
            uVar14 = DAT_0e81;
            puVar13 = &UNK_1eb7 + uVar14;
            if (uVar14 < 0xe149) goto LAB_df08;
          }
          puVar13 = (undefined *)0xffff;
        }
      }
LAB_df08:
      DAT_0cac = puVar13;
      DAT_0cb6 = puVar13;
    }
LAB_df0e:
    uVar17 = DAT_0900;
    FUN_ee81();
    DAT_0cb5 = extraout_A;
    bVar21 = DAT_0cb5;
    puVar4 = (undefined *)DAT_0cac;
    puVar13 = puVar4 + -0x1eb7;
    if (puVar4 < &UNK_1eb7) {
      iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar13 >> 8) + 1) - ((char)-(char)puVar13 != '\0'),
                             -(char)puVar13) * (uint)bVar21 * 2;
      uVar14 = (ushort)iVar2;
      param_1 = (undefined2 *)(uVar14 + 0x80);
      bVar21 = (byte)((uint)iVar2 >> 0x10);
      cVar20 = bVar21 + (0xff7f < uVar14);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar21,0xff7f < uVar14),cVar20) < 0x100) {
        DAT_0e7c = cVar20;
        RAM0e7d = param_1;
        puVar4 = (undefined *)RAM0e7c;
        puVar13 = &UNK_1eb7 + -(short)puVar4;
        if (puVar4 < &UNK_1eb8) goto LAB_df6f;
      }
      puVar13 = (undefined *)0x0;
    }
    else {
      iVar2 = ZEXT24(puVar13) * (uint)bVar21 * 2;
      uVar14 = (ushort)iVar2;
      param_1 = (undefined2 *)(uVar14 + 0x80);
      bVar21 = (byte)((uint)iVar2 >> 0x10);
      cVar20 = bVar21 + (0xff7f < uVar14);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar21,0xff7f < uVar14),cVar20) < 0x100) {
        DAT_0e7c = cVar20;
        RAM0e7d = param_1;
        uVar14 = RAM0e7c;
        puVar13 = &UNK_1eb7 + uVar14;
        if (uVar14 < 0xe149) goto LAB_df6f;
      }
      puVar13 = (undefined *)0xffff;
    }
LAB_df6f:
    DAT_0cae = puVar13;
    bVar21 = DAT_0cca;
    if ((~bVar21 & 1) != 0) {
      bVar21 = DAT_0cca;
      if ((bVar21 & 2) == 0) {
LAB_df95:
        bVar21 = DAT_0cca;
        if ((~bVar21 & 2) != 0) {
          uVar14 = DAT_0cbc;
          uVar16 = DAT_0cbe;
          if ((uVar16 < uVar14) && (uVar6 = DAT_0e14, uVar6 <= uVar14 - uVar16)) {
            bVar21 = DAT_0cca;
            DAT_0cca = bVar21 | 2;
            cVar20 = DAT_0c25;
            DAT_0942 = cVar20 + '\f';
            goto LAB_dfb3;
          }
        }
        DAT_0ccb = 0;
      }
      else {
        uVar16 = DAT_0cbe;
        uVar14 = DAT_0cbc;
        if ((uVar16 <= uVar14) || (uVar6 = DAT_0e14, uVar16 - uVar14 < uVar6)) goto LAB_df95;
        bVar21 = DAT_0cca;
        DAT_0cca = bVar21 & 0xfd;
        uVar11 = DAT_0c25;
        DAT_0942 = uVar11;
LAB_dfb3:
        bVar21 = DAT_0ccb;
        bVar21 = (bVar21 + 1) - (0xfe < bVar21);
        DAT_0ccb = bVar21;
        bVar12 = DAT_0df5;
        if (bVar12 <= bVar21) {
          bVar21 = DAT_0cca;
          DAT_0cca = bVar21 | 1;
        }
      }
    }
  }
  bVar21 = DAT_0c20;
  if (((bVar21 & 0x80) != 0) && (bVar21 = DAT_0cca, (~bVar21 & 1) != 0)) {
    uVar14 = DAT_0cbc;
    uVar16 = DAT_0cbe;
    if ((uVar14 < uVar16) && (bVar21 = DAT_0cca, (~bVar21 & 8) != 0)) {
      bVar21 = DAT_0cca;
      DAT_0cca = bVar21 | 8;
    }
  }
  bVar21 = DAT_0889;
  if ((((~bVar21 & 4) != 0) && (bVar21 = DAT_0885, (~bVar21 & 0x80) != 0)) &&
     (bVar21 = DAT_0889, (bVar21 & 0x10) != 0)) {
    bVar21 = DAT_0889;
    DAT_0889 = bVar21 | 8;
    bVar21 = DAT_0889;
    DAT_0889 = bVar21 | 4;
  }
  bVar21 = DAT_0a5d;
  puVar15 = (ushort *)(&DAT_0a5e + (ushort)bVar21 * 2);
  bVar21 = DAT_0a5c;
  bVar21 = (bVar21 + 1) - (0xfe < bVar21);
  DAT_0a5c = bVar21;
  if (bVar21 < 0x18) {
    if (1 < bVar21) {
      uVar11 = DAT_0a59;
      DAT_0e7c = uVar11;
      uVar17 = RAM0a5a;
      RAM0e7d = uVar17;
      goto LAB_e03c;
    }
  }
  else {
    uVar14 = RAM0a5a;
    RAM0e7d = uVar14 - *puVar15;
    cVar20 = DAT_0a59;
    DAT_0e7c = cVar20 - (uVar14 < *puVar15);
LAB_e03c:
    cVar20 = DAT_0c29;
    if (cVar20 == '\0') {
      uVar14 = DAT_0c2a;
    }
    else {
      uVar14 = 0xffff;
    }
    *puVar15 = uVar14;
    uVar14 = RAM0e7d;
    sVar18 = uVar14 + *puVar15;
    RAM0a5a = sVar18;
    RAM0e7d = sVar18;
    cVar20 = DAT_0e7c;
    cVar20 = cVar20 + CARRY2(uVar14,*puVar15);
    DAT_0a59 = cVar20;
    DAT_0e7c = cVar20;
    bVar21 = DAT_0a5c;
    if (bVar21 < 0x17) {
      cVar20 = DAT_0a5c;
      bVar21 = cVar20 - 1;
      DAT_0e7f._0_1_ = bVar21;
      uVar14 = RAM0a59;
      RAM0e7c = uVar14 / bVar21;
      uVar11 = DAT_0a5b;
      uVar14 = CONCAT11((char)(uVar14 % (ushort)bVar21),uVar11);
      bVar21 = DAT_0e7f._0_1_;
      puVar15 = (ushort *)(uVar14 % (ushort)bVar21);
      DAT_0e7e = (char)(uVar14 / bVar21);
      uVar14 = RAM0e7d;
      param_1 = (undefined2 *)((uint)uVar14 * 0x16);
      RAM0e7d = param_1;
      DAT_0e7c = (char)((uint)uVar14 * 0x16 >> 0x10);
    }
    uVar11 = DAT_0e7c;
    DAT_0a55._0_1_ = uVar11;
    uVar17 = RAM0e7d;
    RAM0a56 = uVar17;
    cVar20 = DAT_0a5d;
    bVar21 = cVar20 + 1;
    if (0x15 < bVar21) {
      bVar21 = 0;
    }
    DAT_0a5d = bVar21;
  }
  cVar20 = DAT_0e4d;
  if ((cVar20 != -0x80) && (bVar21 = DAT_0d1f, (~bVar21 & 0x80) != 0)) {
    bVar21 = DAT_0a38._0_1_;
    bVar12 = DAT_0e51;
    if (bVar21 < bVar12) {
      bVar12 = DAT_0e4f;
      if (bVar21 < bVar12) {
        bVar21 = DAT_0d23;
        bVar12 = DAT_0e4e;
        if ((bVar21 < bVar12) && (bVar21 = DAT_0d21, (~bVar21 & 8) != 0)) {
          bVar21 = DAT_0d21;
          DAT_0d21 = bVar21 & 0xfe;
          DAT_0b2f = 0;
          bVar21 = DAT_0d21;
          DAT_0d21 = bVar21 | 8;
        }
      }
    }
    else {
      bVar21 = DAT_0d21;
      DAT_0d21 = bVar21 | 1;
    }
  }
  cVar20 = DAT_0e05;
  if (cVar20 == -0x80) {
    do {
      bVar21 = DAT_008b;
      if ((~bVar21 & 2) == 0) {
        uVar17 = DAT_0092;
        DAT_08d2 = uVar17;
        DAT_08c4 = 0;
        DAT_08c5 = 0x40;
        bVar21 = DAT_0a27;
        DAT_0a27 = bVar21 & 0xfe;
        goto LAB_e11e;
      }
      sVar18 = DAT_0044;
      sVar5 = DAT_08ce;
    } while (sVar18 - sVar5 < 0);
    bVar21 = DAT_0a27;
    DAT_0a27 = bVar21 | 1;
LAB_e11e:
    bVar21 = DAT_088d;
    DAT_088d = bVar21 & 0xfe;
    FUN_ee67(puVar15);
    bVar21 = DAT_0a27;
    if ((bVar21 & 1) == 0) {
      uVar14 = DAT_08d2;
      uVar14 = uVar14 >> 6;
      DAT_0902 = uVar14;
      bVar21 = DAT_08b1;
      if (((~bVar21 & 8) == 0) || (bVar21 = DAT_08b1, (bVar21 & 4) != 0)) {
        uVar14 = DAT_0e28;
      }
      DAT_0904 = uVar14;
      uVar6 = DAT_08ea;
      uVar16 = uVar14 - uVar6;
      if (uVar14 < uVar6) {
        uVar16 = 0;
      }
      DAT_0906 = uVar16;
      bVar21 = DAT_0a27;
      if ((~bVar21 & 0x40) == 0) {
        uVar17 = DAT_0908;
        DAT_090a = uVar17;
        uVar14 = DAT_0908;
        if (uVar16 < uVar14) {
          uVar17 = FUN_f045(param_1);
          sVar18 = CONCAT11((~(byte)((ushort)uVar17 >> 8) + 1) - ((char)-(char)uVar17 != '\0'),
                            -(char)uVar17);
        }
        else {
          sVar18 = FUN_f045(param_1);
        }
        sVar5 = DAT_0908;
        uVar16 = sVar18 + sVar5;
        DAT_0908 = uVar16;
      }
      else {
        DAT_0908 = uVar16;
        DAT_090a = uVar16;
        bVar21 = DAT_0a27;
        DAT_0a27 = bVar21 | 0x40;
      }
      bVar21 = DAT_0c20;
      if ((bVar21 & 0x80) != 0) {
        cVar20 = DAT_0c25;
        if (cVar20 == '\0') {
          uVar14 = DAT_090a;
          bVar1 = uVar16 < uVar14;
          uVar14 = uVar16 - uVar14 >> 1;
          uVar16 = CONCAT11((byte)(uVar14 >> 8) | bVar1 << 7,(char)uVar14);
        }
        else {
          sVar18 = DAT_090a;
          uVar16 = uVar16 - sVar18;
          bVar1 = (short)uVar16 < 0;
        }
        if (bVar1) {
          puVar13 = (undefined *)(uVar16 + 0x80);
          if (uVar16 < 0xff80) {
            puVar13 = (undefined *)0x0;
          }
        }
        else {
          puVar13 = (undefined *)(uVar16 + 0x80);
          if ((0xff7f < uVar16) || (&UNK_047f < puVar13)) {
            puVar13 = &UNK_047f;
          }
        }
        DAT_0910 = puVar13;
      }
      bVar21 = DAT_0cca;
      if ((bVar21 & 1) != 0) {
        cVar20 = DAT_0942;
        cVar7 = DAT_0e07;
        if (cVar20 == cVar7) {
          uVar17 = DAT_0908;
          DAT_090c = uVar17;
          bVar21 = DAT_0a27;
          DAT_0a27 = bVar21 | 0x20;
        }
        cVar7 = DAT_0e08;
        if ((cVar20 == cVar7) && (bVar21 = DAT_0a27, (bVar21 & 0x20) != 0)) {
          sVar18 = DAT_0908;
          DAT_090e = sVar18;
          bVar21 = DAT_0a27;
          DAT_0a27 = bVar21 | 0x10;
          sVar5 = DAT_090c;
          uVar14 = sVar18 - sVar5;
          if ((short)uVar14 < 0) {
            puVar13 = (undefined *)(uVar14 + 0x80);
            if (uVar14 < 0xff80) {
              puVar13 = (undefined *)0x0;
            }
          }
          else {
            puVar13 = (undefined *)(uVar14 + 0x80);
            if ((0xff7f < uVar14) || (&UNK_047f < puVar13)) {
              puVar13 = &UNK_047f;
            }
          }
          DAT_0912 = puVar13;
        }
      }
      bVar21 = DAT_0020;
      if ((((bVar21 & 0x20) == 0) && (cVar20 = DAT_0942, cVar20 == DAT_355e)) &&
         (bVar21 = DAT_0a27, (~bVar21 & 0x10) == 0)) {
        uVar17 = DAT_0900;
        FUN_ee81();
        DAT_0a21 = extraout_A_00;
        uVar11 = DAT_0914;
        FUN_ef7f();
        DAT_0a23 = extraout_A_01;
        bVar21 = DAT_0a21;
        uVar11 = DAT_0915;
        FUN_ef7f((ushort)extraout_A_01 * (ushort)bVar21);
        DAT_0a24 = extraout_A_02;
        uVar17 = FUN_eeab(extraout_A_02 + 0x180);
        RAM0e82 = uVar17;
        uVar17 = DAT_0920;
        DAT_0bc4 = uVar17;
        DAT_0bc6 = 0x35ee;
        uVar17 = FUN_efa4();
        RAM0e7e = uVar17;
        RAM0e7c = 0;
        sVar18 = FUN_ef3a();
        uVar11 = (undefined1)((ushort)(sVar18 + 0x80) >> 8);
        DAT_0a25 = uVar11;
        uVar17 = RAM0e82;
        uVar17 = FUN_eeab(uVar11);
        RAM0e82 = uVar17;
        uVar17 = DAT_0910;
        DAT_0bc4 = uVar17;
        DAT_0bc6 = 0x3606;
        uVar17 = FUN_efa4();
        RAM0e7e = uVar17;
        RAM0e7c = 0;
        sVar18 = FUN_ef3a();
        uVar11 = (undefined1)((ushort)(sVar18 + 0x80) >> 8);
        DAT_0a26 = uVar11;
        uVar17 = RAM0e82;
        uVar17 = FUN_eeab(uVar11);
        RAM0e82 = uVar17;
        uVar17 = DAT_0912;
        DAT_0bc4 = uVar17;
        DAT_0bc6 = 0x3560;
        uVar17 = FUN_efa4();
        RAM0e7e = uVar17;
        bVar21 = DAT_088f;
        if ((bVar21 & 0x80) == 0) {
          uVar11 = DAT_089a;
        }
        RAM0e7c = 0;
        sVar18 = FUN_ef3a();
        DAT_0a20 = (char)((ushort)(sVar18 + 0x80) >> 8);
        uVar17 = DAT_090c;
        DAT_0bc4 = uVar17;
        DAT_0bc6 = 0x3588;
        uVar17 = FUN_efa4();
        RAM0e7e = uVar17;
        RAM0e7c = 0;
        sVar18 = FUN_ef3a();
        bVar12 = (byte)((ushort)(sVar18 + 0x80) >> 8);
        DAT_0a22 = bVar12;
        bVar21 = DAT_0a20;
        uVar14 = RAM0e82;
        uVar3 = (uint)((ushort)bVar12 * (ushort)bVar21) * (uint)uVar14;
        sVar18 = (short)uVar3;
        if (uVar3 < 0x10000000) {
          bVar12 = (byte)(uVar3 >> 0x10);
          bVar21 = bVar12 << 1;
          uVar14 = CONCAT11(((((char)(uVar3 >> 0x18) << 1 | bVar12 >> 7) << 1 | (bVar12 & 0x7f) >> 6
                             ) << 1 | (bVar21 & 0x7f) >> 6) << 1 | (bVar21 & 0x3f) >> 5,
                            (((bVar21 | (byte)(uVar3 >> 8) >> 7) << 1 |
                             (byte)((ushort)(sVar18 << 1) >> 0xf)) << 1 |
                            (byte)((ushort)(sVar18 << 2) >> 0xf)) << 1 |
                            (byte)((ushort)(sVar18 << 3) >> 0xf));
        }
        else {
          uVar14 = 0xffff;
        }
        if (24999 < uVar14) {
          uVar14 = 25000;
        }
        DAT_0a1e = uVar14;
        uVar16 = DAT_0966;
        sVar18 = uVar14 + uVar16;
        if (CARRY2(uVar14,uVar16)) {
          sVar18 = -1;
        }
        DAT_0a1c = sVar18;
        bVar21 = DAT_0a27;
        DAT_0a27 = bVar21 | 8;
      }
      cVar20 = DAT_0e09;
      if (cVar20 == -0x80) {
        cVar20 = DAT_0942;
        cVar7 = DAT_0e0a;
        if (((((cVar20 == cVar7) && (bVar21 = DAT_0a27, (bVar21 & 8) != 0)) &&
             ((bVar21 = DAT_088c, (~bVar21 & 0x80) != 0 &&
              ((bVar21 = DAT_0d71, (~bVar21 & 0x80) != 0 && (bVar21 = DAT_0884, (~bVar21 & 1) != 0))
              )))) && (bVar21 = DAT_08b3, (~bVar21 & 0x80) != 0)) &&
           ((bVar21 = DAT_0886, (~bVar21 & 0x40) != 0 && (bVar21 = DAT_0881, (~bVar21 & 0x10) != 0))
           )) {
          bVar21 = DAT_0920._0_1_;
          bVar12 = DAT_0e0b;
          if ((bVar12 <= bVar21) && (bVar12 = DAT_0e0c, bVar21 <= bVar12)) {
            uVar14 = DAT_0908;
            bVar21 = DAT_0e0d;
            bVar12 = (byte)(uVar14 >> 2);
            if ((bVar21 <= bVar12) && (bVar21 = DAT_0e0e, bVar12 <= bVar21)) {
              bVar21 = DAT_088f;
              if ((~bVar21 & 0x80) == 0) {
                uVar14 = DAT_0912;
                uVar16 = DAT_0e22;
                if (uVar16 <= uVar14) goto LAB_e3ec;
              }
              else {
                uVar14 = DAT_0912;
                uVar16 = DAT_0e24;
                if (uVar16 <= uVar14) {
LAB_e3ec:
                  uVar14 = DAT_0a1e;
                  uVar16 = DAT_0e20;
                  if (uVar16 < uVar14) {
                    bVar21 = DAT_0a27;
                    DAT_0a27 = bVar21 | 0x80;
                  }
                }
              }
            }
          }
        }
      }
      bVar21 = DAT_0a27;
      if ((bVar21 & 0x80) != 0) {
        bVar21 = DAT_0a29;
        DAT_0a29 = bVar21 | 0x80;
        FUN_eebd();
        bVar21 = DAT_0a29;
        DAT_0a29 = bVar21 & 0x7f;
        bVar21 = DAT_0a27;
        DAT_0a27 = bVar21 & 0x7f;
      }
    }
    else {
      bVar21 = DAT_0a27;
      DAT_0a27 = bVar21 & 0x7f;
      bVar21 = DAT_0a27;
      DAT_0a27 = bVar21 & 0xbf;
      bVar21 = DAT_0a27;
      DAT_0a27 = bVar21 & 0xdf;
      bVar21 = DAT_0a27;
      DAT_0a27 = bVar21 & 0xef;
      bVar21 = DAT_0a27;
      DAT_0a27 = bVar21 & 0xf7;
    }
  }
  cVar20 = DAT_0e55;
  if (cVar20 == '@') {
    bVar21 = DAT_0ab0;
    if ((bVar21 & 0x80) == 0) {
      bVar21 = DAT_0ab0;
      if ((bVar21 & 0x40) == 0) {
        bVar21 = DAT_0ab0;
        if ((bVar21 & 0x20) == 0) {
          bVar21 = DAT_0ab0;
          if ((bVar21 & 0x10) == 0) {
            bVar21 = DAT_0ab0;
            if ((bVar21 & 8) != 0) {
              uVar14 = DAT_0920;
              uVar16 = DAT_0e30;
              if (uVar14 < uVar16) {
                uVar16 = DAT_0ab4;
                uVar14 = (ushort)((uint)uVar16 * 10);
                if ((short)((uint)uVar16 * 10 >> 0x10) != 0) {
                  uVar14 = 0xffff;
                }
                uVar16 = DAT_0abe;
                if (uVar14 < uVar16) {
                  bVar21 = DAT_0ab0;
                  DAT_0ab0 = bVar21 | 0x20;
                  bVar21 = DAT_0ab0;
                  DAT_0ab0 = bVar21 & 0xf7;
                  uVar14 = DAT_0abe;
                  DAT_0aba = uVar14 / 10;
                }
                else {
                  bVar21 = DAT_0ab0;
                  DAT_0ab0 = bVar21 | 0x10;
                  bVar21 = DAT_0ab0;
                  DAT_0ab0 = bVar21 & 0xf7;
                }
              }
            }
          }
          else {
            uVar14 = DAT_0920;
            uVar16 = DAT_0e2e;
            if (uVar14 < uVar16) {
              sVar18 = DAT_0ab4;
              DAT_0aba = sVar18;
              if (sVar18 != 0) goto LAB_e536;
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 0x80;
            }
            else {
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 8;
              bVar21 = DAT_0ab1;
              DAT_0ab1 = bVar21 & 0xdf;
              DAT_0abe = 0;
            }
            bVar21 = DAT_0ab0;
            DAT_0ab0 = bVar21 & 0xef;
          }
        }
        else {
          uVar14 = DAT_0920;
          uVar16 = DAT_0e2e;
          if (uVar14 < uVar16) {
            uVar14 = DAT_0ab4;
            uVar16 = DAT_0aba;
            if (uVar14 < uVar16) goto LAB_e536;
            sVar18 = DAT_0ab4;
            if (sVar18 == 0) {
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 0x80;
            }
            else {
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 0x10;
              bVar21 = DAT_0ab1;
              DAT_0ab1 = bVar21 | 8;
            }
          }
          else {
            bVar21 = DAT_0ab0;
            DAT_0ab0 = bVar21 | 8;
            bVar21 = DAT_0ab1;
            DAT_0ab1 = bVar21 & 0xdf;
            uVar14 = DAT_0aba;
            uVar17 = (undefined2)((uint)uVar14 * 10);
            if ((short)((uint)uVar14 * 10 >> 0x10) != 0) {
              uVar17 = 0xffff;
            }
            DAT_0abe = uVar17;
          }
          bVar21 = DAT_0ab0;
          DAT_0ab0 = bVar21 & 0xdf;
        }
      }
      else {
        bVar21 = DAT_0881;
        if ((~bVar21 & 0x10) != 0) {
          uVar17 = DAT_0ab6;
          DAT_0ac0 = uVar17;
          uVar14 = DAT_0ab2;
          DAT_0ac8 = uVar14;
          DAT_0aba = uVar14;
          uVar16 = DAT_0ab4;
          if (uVar16 < uVar14) {
            bVar21 = DAT_0ab0;
            DAT_0ab0 = bVar21 | 0x20;
          }
          else {
            sVar18 = DAT_0ab4;
            if (sVar18 == 0) {
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 0x80;
            }
            else {
              bVar21 = DAT_0ab0;
              DAT_0ab0 = bVar21 | 0x10;
              bVar21 = DAT_0ab1;
              DAT_0ab1 = bVar21 | 8;
            }
          }
          bVar21 = DAT_0ab0;
          DAT_0ab0 = bVar21 & 0xbf;
        }
      }
    }
    else {
      bVar21 = DAT_0ab1;
      if ((~bVar21 & 0x10) != 0) {
        bVar21 = DAT_0ac6;
        bVar21 = (bVar21 + 1) - (0xfe < bVar21);
        DAT_0ac6 = bVar21;
        bVar12 = DAT_0e0f;
        if (bVar12 < bVar21) {
          bVar21 = DAT_0ab0;
          DAT_0ab0 = bVar21 | 0x40;
          bVar21 = DAT_0ab0;
          DAT_0ab0 = bVar21 & 0x7f;
          bVar21 = DAT_0ab1;
          DAT_0ab1 = bVar21 | 0x10;
        }
      }
    }
  }
LAB_e536:
  cVar20 = DAT_0e55;
  if ((cVar20 != '@') || (bVar21 = DAT_08a3, (bVar21 & 4) != 0)) goto LAB_e6e9;
  bVar21 = DAT_0ab0;
  if (((~bVar21 & 8) == 0) || (bVar21 = DAT_0ab0, (bVar21 & 0x80) != 0)) {
    DAT_00bc = 0xff;
    DAT_00bd = 0xff;
    DAT_0aba = 0;
    DAT_0abc = 0;
    bVar21 = DAT_0ab0;
    if ((~bVar21 & 0x80) == 0) goto LAB_e5d3;
    bVar21 = DAT_0cca;
    if ((bVar21 & 1) == 0) {
LAB_e588:
      cVar7 = DAT_0c26;
      cVar20 = DAT_0ace;
      if (cVar7 != cVar20) goto LAB_e5d3;
      bVar21 = DAT_0ab1;
      if ((~bVar21 & 8) != 0) goto LAB_e595;
      uVar14 = DAT_0ab8;
      uVar16 = DAT_0abe;
      sVar18 = (uVar14 >> 1) - uVar16;
      if (uVar16 <= uVar14 >> 1 && sVar18 != 0) goto LAB_e5b3;
      sVar18 = CONCAT11((~(byte)((ushort)sVar18 >> 8) + 1) - ((char)-(char)sVar18 != '\0'),
                        -(char)sVar18);
    }
    else {
      cVar20 = DAT_0943;
      cVar7 = DAT_0ace;
      if (cVar20 != cVar7) {
        bVar21 = DAT_0ab1;
        if ((~bVar21 & 4) == 0) goto LAB_e5d3;
        goto LAB_e588;
      }
      bVar21 = DAT_0ab1;
      if ((bVar21 & 8) == 0) {
LAB_e595:
        bVar21 = DAT_0ab1;
        DAT_0ab1 = bVar21 | 8;
        uVar14 = DAT_0ac8;
        sVar18 = (short)((uint)uVar14 * 10);
        if ((short)((uint)uVar14 * 10 >> 0x10) != 0) {
          sVar18 = -1;
        }
      }
      else {
        uVar16 = DAT_0abe;
        uVar14 = DAT_0ab8;
        sVar18 = uVar16 - uVar14;
        if (uVar16 < uVar14) {
LAB_e5b3:
          sVar18 = 0;
        }
      }
    }
    DAT_0abe = sVar18;
LAB_e5d3:
    DAT_00ac = 0xff;
    DAT_00ad = 0xff;
  }
  else {
    bVar21 = DAT_0ab0;
    if ((bVar21 & 0x40) != 0) {
      DAT_00bc = 0;
      DAT_00bd = 0;
      DAT_0aba = 1000;
      DAT_0abc = 1000;
      goto LAB_e5d3;
    }
    bVar21 = DAT_0ab0;
    if ((bVar21 & 0x20) == 0) {
      bVar21 = DAT_0ab0;
      if ((bVar21 & 0x10) != 0) {
        bVar21 = DAT_0cca;
        if ((bVar21 & 1) != 0) {
          cVar20 = DAT_0943;
          cVar7 = DAT_0ace;
          if (cVar20 == cVar7) {
            uVar17 = DAT_0ab4;
            DAT_0aba = uVar17;
            bVar21 = DAT_0ab1;
            DAT_0ab1 = bVar21 | 1;
            goto LAB_e68c;
          }
          bVar21 = DAT_0ab1;
          if ((bVar21 & 4) != 0) goto LAB_e68f;
        }
        cVar7 = DAT_0c26;
        cVar20 = DAT_0ace;
        if (cVar7 == cVar20) {
          uVar17 = DAT_0ab4;
          DAT_0aba = uVar17;
          bVar21 = DAT_0ab1;
          DAT_0ab1 = bVar21 & 0xfe;
          goto LAB_e68c;
        }
      }
    }
    else {
      bVar21 = DAT_0cca;
      if ((bVar21 & 1) == 0) {
LAB_e61c:
        cVar7 = DAT_0c26;
        cVar20 = DAT_0ace;
        if (cVar7 != cVar20) goto LAB_e68f;
        bVar21 = DAT_0ab1;
        if ((~bVar21 & 8) == 0) {
          uVar16 = DAT_0ac0;
          uVar14 = DAT_0aba;
          sVar18 = (uVar16 >> 1) - uVar14;
          if (uVar16 >> 1 < uVar14 || sVar18 == 0) {
            uVar17 = CONCAT11((~(byte)((ushort)sVar18 >> 8) + 1) - ((char)-(char)sVar18 != '\0'),
                              -(char)sVar18);
          }
          else {
            uVar17 = 0;
          }
        }
        else {
          bVar21 = DAT_0ab1;
          DAT_0ab1 = bVar21 | 8;
          uVar17 = DAT_0ac8;
        }
        DAT_0aba = uVar17;
        bVar21 = DAT_0ab1;
        DAT_0ab1 = bVar21 & 0xfe;
      }
      else {
        cVar20 = DAT_0943;
        cVar7 = DAT_0ace;
        if (cVar20 != cVar7) {
          bVar21 = DAT_0ab1;
          if ((bVar21 & 4) != 0) goto LAB_e68f;
          goto LAB_e61c;
        }
        bVar21 = DAT_0ab1;
        if ((~bVar21 & 8) == 0) {
          uVar14 = DAT_0aba;
          uVar16 = DAT_0ac0;
          sVar18 = uVar14 - uVar16;
          if (uVar14 < uVar16) {
            sVar18 = 0;
          }
        }
        else {
          bVar21 = DAT_0ab1;
          DAT_0ab1 = bVar21 | 8;
          sVar18 = DAT_0ac8;
        }
        DAT_0aba = sVar18;
        bVar21 = DAT_0ab1;
        DAT_0ab1 = bVar21 | 1;
      }
LAB_e68c:
      FUN_f050();
    }
LAB_e68f:
    bVar21 = DAT_0ab1;
    if ((bVar21 & 0x20) != 0) {
      bVar21 = DAT_0ab1;
      if ((bVar21 & 1) == 0) {
        cVar7 = DAT_0c26;
        cVar20 = DAT_0ac7;
        if (cVar7 == cVar20) goto LAB_e6cf;
        cVar20 = DAT_0ace;
        if ((cVar7 != cVar20) && (cVar20 = DAT_0acd, cVar7 == cVar20)) goto LAB_e6c1;
      }
      else {
        cVar20 = DAT_0943;
        cVar7 = DAT_0ac7;
        if (cVar20 == cVar7) {
LAB_e6cf:
          FUN_f12b();
        }
        else {
          cVar7 = DAT_0ace;
          if ((cVar20 != cVar7) && (cVar7 = DAT_0acd, cVar20 == cVar7)) {
LAB_e6c1:
            DAT_00bc = 0;
            DAT_00bd = 0;
            DAT_00ac = 0xff;
            DAT_00ad = 0xff;
          }
        }
      }
    }
  }
  cVar7 = DAT_0c26;
  cVar20 = DAT_0ace;
  if (cVar7 == cVar20) {
    bVar21 = DAT_0cca;
    if ((bVar21 & 1) == 0) {
      bVar21 = DAT_0ab1;
      DAT_0ab1 = bVar21 & 0xfb;
    }
    else {
      bVar21 = DAT_0ab1;
      DAT_0ab1 = bVar21 | 4;
    }
  }
LAB_e6e9:
  DAT_0c24 = 0;
  sVar18 = DAT_0b22;
  DAT_0c22 = &UNK_1007 + sVar18;
  bVar21 = DAT_08c0;
  DAT_08c0 = bVar21 & 0xdf;
  bVar21 = DAT_08c0;
  DAT_08c0 = bVar21 & 0x7f;
  return;
}


/* Entry dcb6 */

void FUN_dcb6(undefined2 *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  short sVar5;
  ushort uVar6;
  char cVar7;
  byte *pbVar8;
  undefined1 extraout_A;
  undefined1 extraout_A_00;
  byte extraout_A_01;
  byte extraout_A_02;
  undefined1 uVar9;
  byte bVar10;
  char cVar17;
  undefined *puVar11;
  ushort uVar12;
  ushort *puVar13;
  ushort uVar14;
  byte bVar18;
  undefined2 uVar15;
  short sVar16;
  undefined2 *puVar19;
  
  sVar16 = DAT_0044;
  DAT_08ce = sVar16 + 0x4b;
  bVar18 = DAT_088d;
  if ((~bVar18 & 2) != 0) {
    param_1 = &DAT_0c64;
    puVar19 = &DAT_0c7a;
    bVar18 = DAT_0c20;
    if ((bVar18 & 0x80) != 0) {
      bVar18 = DAT_0c26;
      param_1 = &DAT_0c64 + bVar18;
      bVar18 = DAT_0942;
      puVar19 = &DAT_0c7a + (bVar18 & 0xff1f);
    }
    uVar15 = DAT_08d2;
    *param_1 = uVar15;
    *puVar19 = uVar15;
    DAT_0c62 = uVar15;
    DAT_08c4 = 0x40;
    DAT_08c5 = 0;
  }
  cVar17 = DAT_0d8a;
  if (((cVar17 != -0x80) && (bVar18 = DAT_08a3, (~bVar18 & 4) != 0)) &&
     (bVar18 = DAT_08b4, (~bVar18 & 0x80) != 0)) {
    uVar15 = DAT_0c62;
    bVar18 = (byte)((ushort)uVar15 >> 8);
    if ((bVar18 < 0x1a) || (0xf5 < bVar18)) {
      bVar18 = DAT_08b7;
      if ((bVar18 & 0x40) == 0) {
        bVar18 = DAT_08b7;
        DAT_08b7 = bVar18 | 0x40;
        bVar18 = DAT_0bcd;
        DAT_0bcd = bVar18 | 0x20;
      }
      else {
        bVar18 = DAT_0b75;
        bVar10 = DAT_0de5;
        if ((bVar10 < bVar18) && (bVar18 = DAT_08b1, (~bVar18 & 0x20) != 0)) {
          bVar18 = DAT_08b1;
          DAT_08b1 = bVar18 | 0x20;
          bVar18 = DAT_0bf4;
          DAT_0bf4 = bVar18 | 0x80;
          bVar18 = DAT_08ba;
          if ((~bVar18 & 0x20) != 0) {
            bVar18 = DAT_08ba;
            DAT_08ba = bVar18 | 0x20;
            bVar18 = DAT_0bf4;
            DAT_0bf4 = bVar18 | 8;
          }
        }
      }
    }
    else {
      bVar18 = DAT_08b7;
      if ((bVar18 & 0x40) == 0) {
        bVar18 = DAT_0b82;
        bVar10 = DAT_0de6;
        if (bVar10 < bVar18) {
          bVar18 = DAT_08b1;
          if ((bVar18 & 0x20) != 0) {
            bVar18 = DAT_08b1;
            DAT_08b1 = bVar18 & 0xdf;
            bVar18 = DAT_0bf4;
            DAT_0bf4 = bVar18 | 0x80;
          }
          bVar18 = DAT_0bcd;
          DAT_0bcd = bVar18 & 0xdf;
        }
      }
      else {
        bVar18 = DAT_08b7;
        DAT_08b7 = bVar18 & 0xbf;
      }
    }
  }
  cVar17 = DAT_0c26;
  cVar7 = DAT_0de7;
  if (cVar7 == -0x80) {
    if (cVar17 == '\x01') {
      uVar15 = DAT_0cbc;
      DAT_0cbe = uVar15;
      uVar15 = DAT_0c66;
      DAT_0cbc = uVar15;
      goto LAB_dd9d;
    }
  }
  else if (cVar17 == '\0') {
    uVar15 = DAT_0cbc;
    DAT_0cbe = uVar15;
    uVar15 = DAT_0c64;
    DAT_0cbc = uVar15;
LAB_dd9d:
    bVar18 = DAT_08b1;
    if (((~bVar18 & 0x20) == 0) || (bVar18 = DAT_08b1, (bVar18 & 0x10) != 0)) {
      uVar15 = DAT_0e10;
      DAT_0cac = uVar15;
    }
    else {
      bVar18 = DAT_0cca;
      if ((bVar18 & 1) == 0) {
        bVar18 = DAT_0cca;
        if ((~bVar18 & 8) != 0) goto LAB_df0e;
        bVar18 = DAT_0cca;
        DAT_0cca = bVar18 & 0xf7;
        puVar19 = &DAT_0c64;
      }
      else {
        puVar19 = &DAT_0c7a;
      }
      RAM0e84 = puVar19;
      bVar18 = DAT_0de8;
      if ((bVar18 < 2) || (6 < bVar18)) {
        bVar18 = DAT_0def;
        sVar16 = RAM0e84;
        puVar11 = *(undefined **)((ushort)bVar18 * 2 + sVar16);
      }
      else {
        DAT_0cc0 = 0;
        DAT_0cc2 = 0;
        DAT_0e86 = 0;
        DAT_0e88 = 0xdef;
        RAM0e8a = 0xde9;
        while( true ) {
          pbVar8 = (byte *)DAT_0e88;
          sVar16 = RAM0e84;
          puVar11 = *(undefined **)((ushort)*pbVar8 * 2 + sVar16);
          puVar4 = puVar11 + -0x1eb7;
          if (puVar11 < &UNK_1eb7) {
            pbVar8 = (byte *)RAM0e8a;
            iVar2 = (uint)*pbVar8 * 2 *
                    (uint)CONCAT11((~(byte)((ushort)puVar4 >> 8) + 1) -
                                   ((char)-(char)puVar4 != '\0'),-(char)puVar4);
            RAM0e7c = (short)((uint)iVar2 >> 0x10);
            RAM0e7e = (short)iVar2;
            uVar12 = RAM0cc1;
            uVar14 = RAM0e7d;
            RAM0cc1 = uVar12 - uVar14;
            cVar17 = DAT_0cc0._0_1_;
            cVar7 = DAT_0e7c;
            DAT_0cc0._0_1_ = (cVar17 - cVar7) - (uVar12 < uVar14);
          }
          else {
            pbVar8 = (byte *)RAM0e8a;
            iVar2 = (uint)*pbVar8 * 2 * ZEXT24(puVar4);
            RAM0e7c = (short)((uint)iVar2 >> 0x10);
            RAM0e7e = (short)iVar2;
            uVar12 = RAM0cc1;
            uVar14 = RAM0e7d;
            RAM0cc1 = uVar12 + uVar14;
            cVar17 = DAT_0cc0._0_1_;
            cVar7 = DAT_0e7c;
            DAT_0cc0._0_1_ = cVar17 + cVar7 + CARRY2(uVar12,uVar14);
          }
          cVar17 = DAT_0e86;
          DAT_0e86 = cVar17 + 1U;
          bVar18 = DAT_0de8;
          if (bVar18 <= (byte)(cVar17 + 1U)) break;
          sVar16 = DAT_0e88;
          DAT_0e88 = sVar16 + 1;
          sVar16 = RAM0e8a;
          RAM0e8a = sVar16 + 1;
        }
        bVar18 = DAT_0cc0._0_1_;
        if ((short)((ushort)bVar18 << 8) < 0) {
          uVar15 = DAT_0cc0;
          bVar18 = DAT_0cc2;
          bVar18 = ~bVar18;
          DAT_0e8a = bVar18 + 1;
          DAT_0e88 = CONCAT11(~(byte)((ushort)uVar15 >> 8) + CARRY1(~(byte)uVar15,0xfe < bVar18),
                              ~(byte)uVar15 + (0xfe < bVar18));
          bVar18 = DAT_0de8;
          uVar12 = DAT_0e88;
          RAM0e80 = uVar12 / bVar18;
          uVar9 = DAT_0e8a;
          bVar10 = DAT_0de8;
          DAT_0e81._1_1_ = (char)(CONCAT11((char)(uVar12 % (ushort)bVar18),uVar9) / (ushort)bVar10);
          cVar17 = DAT_0e7f._1_1_;
          if (cVar17 == '\0') {
            puVar11 = (undefined *)DAT_0e81;
            if (puVar11 <= &UNK_1eb6) {
              cVar17 = -(char)(puVar11 + -0x1eb7);
              puVar11 = (undefined *)
                        CONCAT11((~(byte)((ushort)(puVar11 + -0x1eb7) >> 8) + 1) - (cVar17 != '\0'),
                                 cVar17);
              goto LAB_df08;
            }
          }
          puVar11 = (undefined *)0x0;
        }
        else {
          bVar18 = DAT_0de8;
          uVar12 = DAT_0cc0;
          RAM0e80 = uVar12 / bVar18;
          uVar9 = DAT_0cc2;
          bVar10 = DAT_0de8;
          DAT_0e81._1_1_ = (char)(CONCAT11((char)(uVar12 % (ushort)bVar18),uVar9) / (ushort)bVar10);
          cVar17 = DAT_0e7f._1_1_;
          if (cVar17 == '\0') {
            uVar12 = DAT_0e81;
            puVar11 = &UNK_1eb7 + uVar12;
            if (uVar12 < 0xe149) goto LAB_df08;
          }
          puVar11 = (undefined *)0xffff;
        }
      }
LAB_df08:
      DAT_0cac = puVar11;
      DAT_0cb6 = puVar11;
    }
LAB_df0e:
    uVar15 = DAT_0900;
    FUN_ee81();
    DAT_0cb5 = extraout_A;
    bVar18 = DAT_0cb5;
    puVar4 = (undefined *)DAT_0cac;
    puVar11 = puVar4 + -0x1eb7;
    if (puVar4 < &UNK_1eb7) {
      iVar2 = (uint)CONCAT11((~(byte)((ushort)puVar11 >> 8) + 1) - ((char)-(char)puVar11 != '\0'),
                             -(char)puVar11) * (uint)bVar18 * 2;
      uVar12 = (ushort)iVar2;
      param_1 = (undefined2 *)(uVar12 + 0x80);
      bVar18 = (byte)((uint)iVar2 >> 0x10);
      cVar17 = bVar18 + (0xff7f < uVar12);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar18,0xff7f < uVar12),cVar17) < 0x100) {
        DAT_0e7c = cVar17;
        RAM0e7d = param_1;
        puVar4 = (undefined *)RAM0e7c;
        puVar11 = &UNK_1eb7 + -(short)puVar4;
        if (puVar4 < &UNK_1eb8) goto LAB_df6f;
      }
      puVar11 = (undefined *)0x0;
    }
    else {
      iVar2 = ZEXT24(puVar11) * (uint)bVar18 * 2;
      uVar12 = (ushort)iVar2;
      param_1 = (undefined2 *)(uVar12 + 0x80);
      bVar18 = (byte)((uint)iVar2 >> 0x10);
      cVar17 = bVar18 + (0xff7f < uVar12);
      if (CONCAT11((char)((uint)iVar2 >> 0x18) + CARRY1(bVar18,0xff7f < uVar12),cVar17) < 0x100) {
        DAT_0e7c = cVar17;
        RAM0e7d = param_1;
        uVar12 = RAM0e7c;
        puVar11 = &UNK_1eb7 + uVar12;
        if (uVar12 < 0xe149) goto LAB_df6f;
      }
      puVar11 = (undefined *)0xffff;
    }
LAB_df6f:
    DAT_0cae = puVar11;
    bVar18 = DAT_0cca;
    if ((~bVar18 & 1) != 0) {
      bVar18 = DAT_0cca;
      if ((bVar18 & 2) == 0) {
LAB_df95:
        bVar18 = DAT_0cca;
        if ((~bVar18 & 2) != 0) {
          uVar12 = DAT_0cbc;
          uVar14 = DAT_0cbe;
          if ((uVar14 < uVar12) && (uVar6 = DAT_0e14, uVar6 <= uVar12 - uVar14)) {
            bVar18 = DAT_0cca;
            DAT_0cca = bVar18 | 2;
            cVar17 = DAT_0c25;
            DAT_0942 = cVar17 + '\f';
            goto LAB_dfb3;
          }
        }
        DAT_0ccb = 0;
      }
      else {
        uVar14 = DAT_0cbe;
        uVar12 = DAT_0cbc;
        if ((uVar14 <= uVar12) || (uVar6 = DAT_0e14, uVar14 - uVar12 < uVar6)) goto LAB_df95;
        bVar18 = DAT_0cca;
        DAT_0cca = bVar18 & 0xfd;
        uVar9 = DAT_0c25;
        DAT_0942 = uVar9;
LAB_dfb3:
        bVar18 = DAT_0ccb;
        bVar18 = (bVar18 + 1) - (0xfe < bVar18);
        DAT_0ccb = bVar18;
        bVar10 = DAT_0df5;
        if (bVar10 <= bVar18) {
          bVar18 = DAT_0cca;
          DAT_0cca = bVar18 | 1;
        }
      }
    }
  }
  bVar18 = DAT_0c20;
  if (((bVar18 & 0x80) != 0) && (bVar18 = DAT_0cca, (~bVar18 & 1) != 0)) {
    uVar12 = DAT_0cbc;
    uVar14 = DAT_0cbe;
    if ((uVar12 < uVar14) && (bVar18 = DAT_0cca, (~bVar18 & 8) != 0)) {
      bVar18 = DAT_0cca;
      DAT_0cca = bVar18 | 8;
    }
  }
  bVar18 = DAT_0889;
  if ((((~bVar18 & 4) != 0) && (bVar18 = DAT_0885, (~bVar18 & 0x80) != 0)) &&
     (bVar18 = DAT_0889, (bVar18 & 0x10) != 0)) {
    bVar18 = DAT_0889;
    DAT_0889 = bVar18 | 8;
    bVar18 = DAT_0889;
    DAT_0889 = bVar18 | 4;
  }
  bVar18 = DAT_0a5d;
  puVar13 = (ushort *)(&DAT_0a5e + (ushort)bVar18 * 2);
  bVar18 = DAT_0a5c;
  bVar18 = (bVar18 + 1) - (0xfe < bVar18);
  DAT_0a5c = bVar18;
  if (bVar18 < 0x18) {
    if (1 < bVar18) {
      uVar9 = DAT_0a59;
      DAT_0e7c = uVar9;
      uVar15 = RAM0a5a;
      RAM0e7d = uVar15;
      goto LAB_e03c;
    }
  }
  else {
    uVar12 = RAM0a5a;
    RAM0e7d = uVar12 - *puVar13;
    cVar17 = DAT_0a59;
    DAT_0e7c = cVar17 - (uVar12 < *puVar13);
LAB_e03c:
    cVar17 = DAT_0c29;
    if (cVar17 == '\0') {
      uVar12 = DAT_0c2a;
    }
    else {
      uVar12 = 0xffff;
    }
    *puVar13 = uVar12;
    uVar12 = RAM0e7d;
    sVar16 = uVar12 + *puVar13;
    RAM0a5a = sVar16;
    RAM0e7d = sVar16;
    cVar17 = DAT_0e7c;
    cVar17 = cVar17 + CARRY2(uVar12,*puVar13);
    DAT_0a59 = cVar17;
    DAT_0e7c = cVar17;
    bVar18 = DAT_0a5c;
    if (bVar18 < 0x17) {
      cVar17 = DAT_0a5c;
      bVar18 = cVar17 - 1;
      DAT_0e7f._0_1_ = bVar18;
      uVar12 = RAM0a59;
      RAM0e7c = uVar12 / bVar18;
      uVar9 = DAT_0a5b;
      uVar12 = CONCAT11((char)(uVar12 % (ushort)bVar18),uVar9);
      bVar18 = DAT_0e7f._0_1_;
      puVar13 = (ushort *)(uVar12 % (ushort)bVar18);
      DAT_0e7e = (char)(uVar12 / bVar18);
      uVar12 = RAM0e7d;
      param_1 = (undefined2 *)((uint)uVar12 * 0x16);
      RAM0e7d = param_1;
      DAT_0e7c = (char)((uint)uVar12 * 0x16 >> 0x10);
    }
    uVar9 = DAT_0e7c;
    DAT_0a55._0_1_ = uVar9;
    uVar15 = RAM0e7d;
    RAM0a56 = uVar15;
    cVar17 = DAT_0a5d;
    bVar18 = cVar17 + 1;
    if (0x15 < bVar18) {
      bVar18 = 0;
    }
    DAT_0a5d = bVar18;
  }
  cVar17 = DAT_0e4d;
  if ((cVar17 != -0x80) && (bVar18 = DAT_0d1f, (~bVar18 & 0x80) != 0)) {
    bVar18 = DAT_0a38._0_1_;
    bVar10 = DAT_0e51;
    if (bVar18 < bVar10) {
      bVar10 = DAT_0e4f;
      if (bVar18 < bVar10) {
        bVar18 = DAT_0d23;
        bVar10 = DAT_0e4e;
        if ((bVar18 < bVar10) && (bVar18 = DAT_0d21, (~bVar18 & 8) != 0)) {
          bVar18 = DAT_0d21;
          DAT_0d21 = bVar18 & 0xfe;
          DAT_0b2f = 0;
          bVar18 = DAT_0d21;
          DAT_0d21 = bVar18 | 8;
        }
      }
    }
    else {
      bVar18 = DAT_0d21;
      DAT_0d21 = bVar18 | 1;
    }
  }
  cVar17 = DAT_0e05;
  if (cVar17 == -0x80) {
    do {
      bVar18 = DAT_008b;
      if ((~bVar18 & 2) == 0) {
        uVar15 = DAT_0092;
        DAT_08d2 = uVar15;
        DAT_08c4 = 0;
        DAT_08c5 = 0x40;
        bVar18 = DAT_0a27;
        DAT_0a27 = bVar18 & 0xfe;
        goto LAB_e11e;
      }
      sVar16 = DAT_0044;
      sVar5 = DAT_08ce;
    } while (sVar16 - sVar5 < 0);
    bVar18 = DAT_0a27;
    DAT_0a27 = bVar18 | 1;
LAB_e11e:
    bVar18 = DAT_088d;
    DAT_088d = bVar18 & 0xfe;
    FUN_ee67(puVar13);
    bVar18 = DAT_0a27;
    if ((bVar18 & 1) == 0) {
      uVar12 = DAT_08d2;
      uVar12 = uVar12 >> 6;
      DAT_0902 = uVar12;
      bVar18 = DAT_08b1;
      if (((~bVar18 & 8) == 0) || (bVar18 = DAT_08b1, (bVar18 & 4) != 0)) {
        uVar12 = DAT_0e28;
      }
      DAT_0904 = uVar12;
      uVar6 = DAT_08ea;
      uVar14 = uVar12 - uVar6;
      if (uVar12 < uVar6) {
        uVar14 = 0;
      }
      DAT_0906 = uVar14;
      bVar18 = DAT_0a27;
      if ((~bVar18 & 0x40) == 0) {
        uVar15 = DAT_0908;
        DAT_090a = uVar15;
        uVar12 = DAT_0908;
        if (uVar14 < uVar12) {
          uVar15 = FUN_f045(param_1);
          sVar16 = CONCAT11((~(byte)((ushort)uVar15 >> 8) + 1) - ((char)-(char)uVar15 != '\0'),
                            -(char)uVar15);
        }
        else {
          sVar16 = FUN_f045(param_1);
        }
        sVar5 = DAT_0908;
        uVar14 = sVar16 + sVar5;
        DAT_0908 = uVar14;
      }
      else {
        DAT_0908 = uVar14;
        DAT_090a = uVar14;
        bVar18 = DAT_0a27;
        DAT_0a27 = bVar18 | 0x40;
      }
      bVar18 = DAT_0c20;
      if ((bVar18 & 0x80) != 0) {
        cVar17 = DAT_0c25;
        if (cVar17 == '\0') {
          uVar12 = DAT_090a;
          bVar1 = uVar14 < uVar12;
          uVar12 = uVar14 - uVar12 >> 1;
          uVar14 = CONCAT11((byte)(uVar12 >> 8) | bVar1 << 7,(char)uVar12);
        }
        else {
          sVar16 = DAT_090a;
          uVar14 = uVar14 - sVar16;
          bVar1 = (short)uVar14 < 0;
        }
        if (bVar1) {
          puVar11 = (undefined *)(uVar14 + 0x80);
          if (uVar14 < 0xff80) {
            puVar11 = (undefined *)0x0;
          }
        }
        else {
          puVar11 = (undefined *)(uVar14 + 0x80);
          if ((0xff7f < uVar14) || (&UNK_047f < puVar11)) {
            puVar11 = &UNK_047f;
          }
        }
        DAT_0910 = puVar11;
      }
      bVar18 = DAT_0cca;
      if ((bVar18 & 1) != 0) {
        cVar17 = DAT_0942;
        cVar7 = DAT_0e07;
        if (cVar17 == cVar7) {
          uVar15 = DAT_0908;
          DAT_090c = uVar15;
          bVar18 = DAT_0a27;
          DAT_0a27 = bVar18 | 0x20;
        }
        cVar7 = DAT_0e08;
        if ((cVar17 == cVar7) && (bVar18 = DAT_0a27, (bVar18 & 0x20) != 0)) {
          sVar16 = DAT_0908;
          DAT_090e = sVar16;
          bVar18 = DAT_0a27;
          DAT_0a27 = bVar18 | 0x10;
          sVar5 = DAT_090c;
          uVar12 = sVar16 - sVar5;
          if ((short)uVar12 < 0) {
            puVar11 = (undefined *)(uVar12 + 0x80);
            if (uVar12 < 0xff80) {
              puVar11 = (undefined *)0x0;
            }
          }
          else {
            puVar11 = (undefined *)(uVar12 + 0x80);
            if ((0xff7f < uVar12) || (&UNK_047f < puVar11)) {
              puVar11 = &UNK_047f;
            }
          }
          DAT_0912 = puVar11;
        }
      }
      bVar18 = DAT_0020;
      if ((((bVar18 & 0x20) == 0) && (cVar17 = DAT_0942, cVar17 == DAT_355e)) &&
         (bVar18 = DAT_0a27, (~bVar18 & 0x10) == 0)) {
        uVar15 = DAT_0900;
        FUN_ee81();
        DAT_0a21 = extraout_A_00;
        uVar9 = DAT_0914;
        FUN_ef7f();
        DAT_0a23 = extraout_A_01;
        bVar18 = DAT_0a21;
        uVar9 = DAT_0915;
        FUN_ef7f((ushort)extraout_A_01 * (ushort)bVar18);
        DAT_0a24 = extraout_A_02;
        uVar15 = FUN_eeab(extraout_A_02 + 0x180);
        RAM0e82 = uVar15;
        uVar15 = DAT_0920;
        DAT_0bc4 = uVar15;
        DAT_0bc6 = 0x35ee;
        uVar15 = FUN_efa4();
        RAM0e7e = uVar15;
        RAM0e7c = 0;
        sVar16 = FUN_ef3a();
        uVar9 = (undefined1)((ushort)(sVar16 + 0x80) >> 8);
        DAT_0a25 = uVar9;
        uVar15 = RAM0e82;
        uVar15 = FUN_eeab(uVar9);
        RAM0e82 = uVar15;
        uVar15 = DAT_0910;
        DAT_0bc4 = uVar15;
        DAT_0bc6 = 0x3606;
        uVar15 = FUN_efa4();
        RAM0e7e = uVar15;
        RAM0e7c = 0;
        sVar16 = FUN_ef3a();
        uVar9 = (undefined1)((ushort)(sVar16 + 0x80) >> 8);
        DAT_0a26 = uVar9;
        uVar15 = RAM0e82;
        uVar15 = FUN_eeab(uVar9);
        RAM0e82 = uVar15;
        uVar15 = DAT_0912;
        DAT_0bc4 = uVar15;
        DAT_0bc6 = 0x3560;
        uVar15 = FUN_efa4();
        RAM0e7e = uVar15;
        bVar18 = DAT_088f;
        if ((bVar18 & 0x80) == 0) {
          uVar9 = DAT_089a;
        }
        RAM0e7c = 0;
        sVar16 = FUN_ef3a();
        DAT_0a20 = (char)((ushort)(sVar16 + 0x80) >> 8);
        uVar15 = DAT_090c;
        DAT_0bc4 = uVar15;
        DAT_0bc6 = 0x3588;
        uVar15 = FUN_efa4();
        RAM0e7e = uVar15;
        RAM0e7c = 0;
        sVar16 = FUN_ef3a();
        bVar10 = (byte)((ushort)(sVar16 + 0x80) >> 8);
        DAT_0a22 = bVar10;
        bVar18 = DAT_0a20;
        uVar12 = RAM0e82;
        uVar3 = (uint)((ushort)bVar10 * (ushort)bVar18) * (uint)uVar12;
        sVar16 = (short)uVar3;
        if (uVar3 < 0x10000000) {
          bVar10 = (byte)(uVar3 >> 0x10);
          bVar18 = bVar10 << 1;
          uVar12 = CONCAT11(((((char)(uVar3 >> 0x18) << 1 | bVar10 >> 7) << 1 | (bVar10 & 0x7f) >> 6
                             ) << 1 | (bVar18 & 0x7f) >> 6) << 1 | (bVar18 & 0x3f) >> 5,
                            (((bVar18 | (byte)(uVar3 >> 8) >> 7) << 1 |
                             (byte)((ushort)(sVar16 << 1) >> 0xf)) << 1 |
                            (byte)((ushort)(sVar16 << 2) >> 0xf)) << 1 |
                            (byte)((ushort)(sVar16 << 3) >> 0xf));
        }
        else {
          uVar12 = 0xffff;
        }
        if (24999 < uVar12) {
          uVar12 = 25000;
        }
        DAT_0a1e = uVar12;
        uVar14 = DAT_0966;
        sVar16 = uVar12 + uVar14;
        if (CARRY2(uVar12,uVar14)) {
          sVar16 = -1;
        }
        DAT_0a1c = sVar16;
        bVar18 = DAT_0a27;
        DAT_0a27 = bVar18 | 8;
      }
      cVar17 = DAT_0e09;
      if (cVar17 == -0x80) {
        cVar17 = DAT_0942;
        cVar7 = DAT_0e0a;
        if (((((cVar17 == cVar7) && (bVar18 = DAT_0a27, (bVar18 & 8) != 0)) &&
             ((bVar18 = DAT_088c, (~bVar18 & 0x80) != 0 &&
              ((bVar18 = DAT_0d71, (~bVar18 & 0x80) != 0 && (bVar18 = DAT_0884, (~bVar18 & 1) != 0))
              )))) && (bVar18 = DAT_08b3, (~bVar18 & 0x80) != 0)) &&
           ((bVar18 = DAT_0886, (~bVar18 & 0x40) != 0 && (bVar18 = DAT_0881, (~bVar18 & 0x10) != 0))
           )) {
          bVar18 = DAT_0920._0_1_;
          bVar10 = DAT_0e0b;
          if ((bVar10 <= bVar18) && (bVar10 = DAT_0e0c, bVar18 <= bVar10)) {
            uVar12 = DAT_0908;
            bVar18 = DAT_0e0d;
            bVar10 = (byte)(uVar12 >> 2);
            if ((bVar18 <= bVar10) && (bVar18 = DAT_0e0e, bVar10 <= bVar18)) {
              bVar18 = DAT_088f;
              if ((~bVar18 & 0x80) == 0) {
                uVar12 = DAT_0912;
                uVar14 = DAT_0e22;
                if (uVar14 <= uVar12) goto LAB_e3ec;
              }
              else {
                uVar12 = DAT_0912;
                uVar14 = DAT_0e24;
                if (uVar14 <= uVar12) {
LAB_e3ec:
                  uVar12 = DAT_0a1e;
                  uVar14 = DAT_0e20;
                  if (uVar14 < uVar12) {
                    bVar18 = DAT_0a27;
                    DAT_0a27 = bVar18 | 0x80;
                  }
                }
              }
            }
          }
        }
      }
      bVar18 = DAT_0a27;
      if ((bVar18 & 0x80) != 0) {
        bVar18 = DAT_0a29;
        DAT_0a29 = bVar18 | 0x80;
        FUN_eebd();
        bVar18 = DAT_0a29;
        DAT_0a29 = bVar18 & 0x7f;
        bVar18 = DAT_0a27;
        DAT_0a27 = bVar18 & 0x7f;
      }
    }
    else {
      bVar18 = DAT_0a27;
      DAT_0a27 = bVar18 & 0x7f;
      bVar18 = DAT_0a27;
      DAT_0a27 = bVar18 & 0xbf;
      bVar18 = DAT_0a27;
      DAT_0a27 = bVar18 & 0xdf;
      bVar18 = DAT_0a27;
      DAT_0a27 = bVar18 & 0xef;
      bVar18 = DAT_0a27;
      DAT_0a27 = bVar18 & 0xf7;
    }
  }
  cVar17 = DAT_0e55;
  if (cVar17 == '@') {
    bVar18 = DAT_0ab0;
    if ((bVar18 & 0x80) == 0) {
      bVar18 = DAT_0ab0;
      if ((bVar18 & 0x40) == 0) {
        bVar18 = DAT_0ab0;
        if ((bVar18 & 0x20) == 0) {
          bVar18 = DAT_0ab0;
          if ((bVar18 & 0x10) == 0) {
            bVar18 = DAT_0ab0;
            if ((bVar18 & 8) != 0) {
              uVar12 = DAT_0920;
              uVar14 = DAT_0e30;
              if (uVar12 < uVar14) {
                uVar14 = DAT_0ab4;
                uVar12 = (ushort)((uint)uVar14 * 10);
                if ((short)((uint)uVar14 * 10 >> 0x10) != 0) {
                  uVar12 = 0xffff;
                }
                uVar14 = DAT_0abe;
                if (uVar12 < uVar14) {
                  bVar18 = DAT_0ab0;
                  DAT_0ab0 = bVar18 | 0x20;
                  bVar18 = DAT_0ab0;
                  DAT_0ab0 = bVar18 & 0xf7;
                  uVar12 = DAT_0abe;
                  DAT_0aba = uVar12 / 10;
                }
                else {
                  bVar18 = DAT_0ab0;
                  DAT_0ab0 = bVar18 | 0x10;
                  bVar18 = DAT_0ab0;
                  DAT_0ab0 = bVar18 & 0xf7;
                }
              }
            }
          }
          else {
            uVar12 = DAT_0920;
            uVar14 = DAT_0e2e;
            if (uVar12 < uVar14) {
              sVar16 = DAT_0ab4;
              DAT_0aba = sVar16;
              if (sVar16 != 0) goto LAB_e536;
              bVar18 = DAT_0ab0;
              DAT_0ab0 = bVar18 | 0x80;
            }
            else {
              bVar18 = DAT_0ab0;
              DAT_0ab0 = bVar18 | 8;
              bVar18 = DAT_0ab1;
              DAT_0ab1 = bVar18 & 0xdf;
              DAT_0abe = 0;
            }
            bVar18 = DAT_0ab0;
            DAT_0ab0 = bVar18 & 0xef;
          }
        }
        else {
          uVar12 = DAT_0920;
          uVar14 = DAT_0e2e;
          if (uVar12 < uVar14) {
            uVar12 = DAT_0ab4;
            uVar14 = DAT_0aba;
            if (uVar12 < uVar14) goto LAB_e536;
            sVar16 = DAT_0ab4;
            if (sVar16 == 0) {
              bVar18 = DAT_0ab0;
              DAT_0ab0 = bVar18 | 0x80;
            }
            else {
              bVar18 = DAT_0ab0;
              DAT_0ab0 = bVar18 | 0x10;
              bVar18 = DAT_0ab1;
              DAT_0ab1 = bVar18 | 8;
            }
          }
          else {
            bVar18 = DAT_0ab0;
            DAT_0ab0 = bVar18 | 8;
            bVar18 = DAT_0ab1;
            DAT_0ab1 = bVar18 & 0xdf;
            uVar12 = DAT_0aba;
            uVar15 = (undefined2)((uint)uVar12 * 10);
            if ((short)((uint)uVar12 * 10 >> 0x10) != 0) {
              uVar15 = 0xffff;
            }
            DAT_0abe = uVar15;
          }
          bVar18 = DAT_0ab0;
          DAT_0ab0 = bVar18 & 0xdf;
        }
      }
      else {
        bVar18 = DAT_0881;
        if ((~bVar18 & 0x10) != 0) {
          uVar15 = DAT_0ab6;
          DAT_0ac0 = uVar15;
          uVar12 = DAT_0ab2;
          DAT_0ac8 = uVar12;
          DAT_0aba = uVar12;
          uVar14 = DAT_0ab4;
          if (uVar14 < uVar12) {
            bVar18 = DAT_0ab0;
            DAT_0ab0 = bVar18 | 0x20;
          }
          else {
            sVar16 = DAT_0ab4;
            if (sVar16 == 0) {
              bVar18 = DAT_0ab0;
              DAT_0ab0 = bVar18 | 0x80;
            }
            else {
              bVar18 = DAT_0ab0;
              DAT_0ab0 = bVar18 | 0x10;
              bVar18 = DAT_0ab1;
              DAT_0ab1 = bVar18 | 8;
            }
          }
          bVar18 = DAT_0ab0;
          DAT_0ab0 = bVar18 & 0xbf;
        }
      }
    }
    else {
      bVar18 = DAT_0ab1;
      if ((~bVar18 & 0x10) != 0) {
        bVar18 = DAT_0ac6;
        bVar18 = (bVar18 + 1) - (0xfe < bVar18);
        DAT_0ac6 = bVar18;
        bVar10 = DAT_0e0f;
        if (bVar10 < bVar18) {
          bVar18 = DAT_0ab0;
          DAT_0ab0 = bVar18 | 0x40;
          bVar18 = DAT_0ab0;
          DAT_0ab0 = bVar18 & 0x7f;
          bVar18 = DAT_0ab1;
          DAT_0ab1 = bVar18 | 0x10;
        }
      }
    }
  }
LAB_e536:
  cVar17 = DAT_0e55;
  if ((cVar17 != '@') || (bVar18 = DAT_08a3, (bVar18 & 4) != 0)) goto LAB_e6e9;
  bVar18 = DAT_0ab0;
  if (((~bVar18 & 8) == 0) || (bVar18 = DAT_0ab0, (bVar18 & 0x80) != 0)) {
    DAT_00bc = 0xff;
    DAT_00bd = 0xff;
    DAT_0aba = 0;
    DAT_0abc = 0;
    bVar18 = DAT_0ab0;
    if ((~bVar18 & 0x80) == 0) goto LAB_e5d3;
    bVar18 = DAT_0cca;
    if ((bVar18 & 1) == 0) {
LAB_e588:
      cVar7 = DAT_0c26;
      cVar17 = DAT_0ace;
      if (cVar7 != cVar17) goto LAB_e5d3;
      bVar18 = DAT_0ab1;
      if ((~bVar18 & 8) != 0) goto LAB_e595;
      uVar12 = DAT_0ab8;
      uVar14 = DAT_0abe;
      sVar16 = (uVar12 >> 1) - uVar14;
      if (uVar14 <= uVar12 >> 1 && sVar16 != 0) goto LAB_e5b3;
      sVar16 = CONCAT11((~(byte)((ushort)sVar16 >> 8) + 1) - ((char)-(char)sVar16 != '\0'),
                        -(char)sVar16);
    }
    else {
      cVar17 = DAT_0943;
      cVar7 = DAT_0ace;
      if (cVar17 != cVar7) {
        bVar18 = DAT_0ab1;
        if ((~bVar18 & 4) == 0) goto LAB_e5d3;
        goto LAB_e588;
      }
      bVar18 = DAT_0ab1;
      if ((bVar18 & 8) == 0) {
LAB_e595:
        bVar18 = DAT_0ab1;
        DAT_0ab1 = bVar18 | 8;
        uVar12 = DAT_0ac8;
        sVar16 = (short)((uint)uVar12 * 10);
        if ((short)((uint)uVar12 * 10 >> 0x10) != 0) {
          sVar16 = -1;
        }
      }
      else {
        uVar14 = DAT_0abe;
        uVar12 = DAT_0ab8;
        sVar16 = uVar14 - uVar12;
        if (uVar14 < uVar12) {
LAB_e5b3:
          sVar16 = 0;
        }
      }
    }
    DAT_0abe = sVar16;
LAB_e5d3:
    DAT_00ac = 0xff;
    DAT_00ad = 0xff;
  }
  else {
    bVar18 = DAT_0ab0;
    if ((bVar18 & 0x40) != 0) {
      DAT_00bc = 0;
      DAT_00bd = 0;
      DAT_0aba = 1000;
      DAT_0abc = 1000;
      goto LAB_e5d3;
    }
    bVar18 = DAT_0ab0;
    if ((bVar18 & 0x20) == 0) {
      bVar18 = DAT_0ab0;
      if ((bVar18 & 0x10) != 0) {
        bVar18 = DAT_0cca;
        if ((bVar18 & 1) != 0) {
          cVar17 = DAT_0943;
          cVar7 = DAT_0ace;
          if (cVar17 == cVar7) {
            uVar15 = DAT_0ab4;
            DAT_0aba = uVar15;
            bVar18 = DAT_0ab1;
            DAT_0ab1 = bVar18 | 1;
            goto LAB_e68c;
          }
          bVar18 = DAT_0ab1;
          if ((bVar18 & 4) != 0) goto LAB_e68f;
        }
        cVar7 = DAT_0c26;
        cVar17 = DAT_0ace;
        if (cVar7 == cVar17) {
          uVar15 = DAT_0ab4;
          DAT_0aba = uVar15;
          bVar18 = DAT_0ab1;
          DAT_0ab1 = bVar18 & 0xfe;
          goto LAB_e68c;
        }
      }
    }
    else {
      bVar18 = DAT_0cca;
      if ((bVar18 & 1) == 0) {
LAB_e61c:
        cVar7 = DAT_0c26;
        cVar17 = DAT_0ace;
        if (cVar7 != cVar17) goto LAB_e68f;
        bVar18 = DAT_0ab1;
        if ((~bVar18 & 8) == 0) {
          uVar14 = DAT_0ac0;
          uVar12 = DAT_0aba;
          sVar16 = (uVar14 >> 1) - uVar12;
          if (uVar14 >> 1 < uVar12 || sVar16 == 0) {
            uVar15 = CONCAT11((~(byte)((ushort)sVar16 >> 8) + 1) - ((char)-(char)sVar16 != '\0'),
                              -(char)sVar16);
          }
          else {
            uVar15 = 0;
          }
        }
        else {
          bVar18 = DAT_0ab1;
          DAT_0ab1 = bVar18 | 8;
          uVar15 = DAT_0ac8;
        }
        DAT_0aba = uVar15;
        bVar18 = DAT_0ab1;
        DAT_0ab1 = bVar18 & 0xfe;
      }
      else {
        cVar17 = DAT_0943;
        cVar7 = DAT_0ace;
        if (cVar17 != cVar7) {
          bVar18 = DAT_0ab1;
          if ((bVar18 & 4) != 0) goto LAB_e68f;
          goto LAB_e61c;
        }
        bVar18 = DAT_0ab1;
        if ((~bVar18 & 8) == 0) {
          uVar12 = DAT_0aba;
          uVar14 = DAT_0ac0;
          sVar16 = uVar12 - uVar14;
          if (uVar12 < uVar14) {
            sVar16 = 0;
          }
        }
        else {
          bVar18 = DAT_0ab1;
          DAT_0ab1 = bVar18 | 8;
          sVar16 = DAT_0ac8;
        }
        DAT_0aba = sVar16;
        bVar18 = DAT_0ab1;
        DAT_0ab1 = bVar18 | 1;
      }
LAB_e68c:
      FUN_f050();
    }
LAB_e68f:
    bVar18 = DAT_0ab1;
    if ((bVar18 & 0x20) != 0) {
      bVar18 = DAT_0ab1;
      if ((bVar18 & 1) == 0) {
        cVar7 = DAT_0c26;
        cVar17 = DAT_0ac7;
        if (cVar7 == cVar17) goto LAB_e6cf;
        cVar17 = DAT_0ace;
        if ((cVar7 != cVar17) && (cVar17 = DAT_0acd, cVar7 == cVar17)) goto LAB_e6c1;
      }
      else {
        cVar17 = DAT_0943;
        cVar7 = DAT_0ac7;
        if (cVar17 == cVar7) {
LAB_e6cf:
          FUN_f12b();
        }
        else {
          cVar7 = DAT_0ace;
          if ((cVar17 != cVar7) && (cVar7 = DAT_0acd, cVar17 == cVar7)) {
LAB_e6c1:
            DAT_00bc = 0;
            DAT_00bd = 0;
            DAT_00ac = 0xff;
            DAT_00ad = 0xff;
          }
        }
      }
    }
  }
  cVar7 = DAT_0c26;
  cVar17 = DAT_0ace;
  if (cVar7 == cVar17) {
    bVar18 = DAT_0cca;
    if ((bVar18 & 1) == 0) {
      bVar18 = DAT_0ab1;
      DAT_0ab1 = bVar18 & 0xfb;
    }
    else {
      bVar18 = DAT_0ab1;
      DAT_0ab1 = bVar18 | 4;
    }
  }
LAB_e6e9:
  DAT_0c24 = 0;
  sVar16 = DAT_0b22;
  DAT_0c22 = &UNK_1007 + sVar16;
  bVar18 = DAT_08c0;
  DAT_08c0 = bVar18 & 0xdf;
  bVar18 = DAT_08c0;
  DAT_08c0 = bVar18 & 0x7f;
  return;
}


/* Entry e6ff */

void FUN_e6ff(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  byte bVar5;
  char cVar6;
  
  cVar6 = DAT_0df6;
  if (cVar6 == -0x80) {
    bVar1 = DAT_0a2d;
    bVar2 = DAT_0ddb;
    bVar5 = bVar1 - bVar2;
    if (bVar1 < bVar2) {
      bVar5 = bVar5 + 0x18;
    }
    DAT_0cce = bVar5;
    bVar1 = DAT_0a2c;
    bVar2 = DAT_0ddb;
    cVar6 = bVar1 - bVar2;
    if (bVar1 < bVar2) {
      cVar6 = cVar6 + '\x18';
    }
    DAT_0ccd = cVar6;
    bVar2 = DAT_0ccd;
    bVar1 = bVar5 - bVar2;
    if (bVar1 == 0) goto LAB_e762;
    if (bVar2 <= bVar5) {
      bVar5 = DAT_0df7;
      if (bVar5 < bVar1) {
        cVar6 = DAT_0a2c;
        cVar3 = DAT_0df7;
        bVar5 = cVar6 + cVar3;
        if (0x16 < bVar5) {
          if (bVar5 == 0x17) {
            bVar5 = 0;
            goto LAB_e765;
          }
          bVar5 = bVar5 - 0x18;
        }
        if (bVar5 == 0xb) {
          bVar5 = 0xc;
        }
        goto LAB_e76b;
      }
      goto LAB_e762;
    }
    bVar5 = DAT_0df7;
    if ((byte)-bVar1 <= bVar5) goto LAB_e762;
    bVar1 = DAT_0a2c;
    bVar2 = DAT_0df7;
    bVar5 = bVar1 - bVar2;
    if ((bVar1 < bVar2) && (bVar5 = bVar5 + 0x18, bVar5 == 0x17)) {
      bVar5 = 0x16;
    }
  }
  else {
LAB_e762:
    bVar5 = DAT_0a2d;
  }
LAB_e765:
  if (bVar5 == 0xb) {
    bVar5 = 10;
  }
LAB_e76b:
  DAT_0a2c = bVar5;
  DAT_0a2f = bVar5;
  uVar4 = DAT_0e16;
  DAT_0a34 = uVar4;
  return;
}


/* Entry e778 */

void FUN_e778(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = DAT_0880;
  if ((bVar2 & 0x44) == 0) {
    FUN_e8fe();
    bVar2 = DAT_0cca;
    if ((bVar2 & 1) == 0) {
      bVar2 = DAT_0c26;
    }
    else {
      bVar2 = DAT_0942;
    }
    if ((bVar2 == 6) &&
       ((bVar1 = DAT_088d, (~bVar1 & 0x20) == 0 ||
        ((bVar1 = DAT_0a8c, 0x40 < bVar1 && (bVar1 = DAT_0a98, (bVar1 & 8) != 0)))))) {
      FUN_e830();
    }
    else {
      bVar1 = DAT_0cca;
      if ((bVar1 & 1) != 0) {
        bVar2 = DAT_0942;
      }
      if ((2 < bVar2) && (bVar2 < 7)) {
        FUN_ea25();
      }
    }
    return;
  }
  bVar2 = DAT_0880;
  if ((~bVar2 & 0x40) != 0) {
    FUN_e8fe();
    FUN_e830();
    return;
  }
  FUN_e890();
  FUN_e830();
  return;
}


/* Entry e7d0 */

void FUN_e7d0(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  char cVar6;
  short sVar5;
  
  bVar1 = DAT_0885;
  if (((~bVar1 & 0x40) == 0) || (bVar1 = DAT_0884, (bVar1 & 2) != 0)) {
    return;
  }
  bVar1 = DAT_0cca;
  if ((bVar1 & 1) == 0) {
    cVar6 = DAT_0c26;
  }
  else {
    cVar6 = DAT_0942;
  }
  if (cVar6 != '\a') {
    return;
  }
  bVar1 = DAT_0880;
  if ((((~bVar1 & 0x40) == 0) || (bVar1 = DAT_0a38._0_1_, bVar4 = DAT_0df8, bVar1 < bVar4)) ||
     (sVar5 = DAT_0044, sVar3 = DAT_0ba8, sVar2 = DAT_0aa0, -1 < (sVar5 - sVar3) - sVar2)) {
    bVar1 = DAT_0a99;
    DAT_0a99 = bVar1 & 0xfd;
    sVar5 = DAT_0044;
  }
  else {
    bVar1 = DAT_0a99;
    DAT_0a99 = bVar1 | 2;
    sVar5 = DAT_0ba8;
    sVar2 = DAT_0aa0;
    sVar5 = sVar5 + sVar2;
  }
  DAT_0056 = sVar5 + 10;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0xf7;
  bVar1 = DAT_0049;
  DAT_0049 = bVar1 & 0xbf | 0x80;
  DAT_004e = 8;
  bVar1 = DAT_0a98;
  DAT_0a98 = bVar1 | 0x80;
  return;
}


/* Entry e82f */

void candidate_unreferenced_e82f(void)

{
  return;
}


/* Entry e830 */

void FUN_e830(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  char cVar6;
  short sVar5;
  
  bVar1 = DAT_0885;
  if (((~bVar1 & 0x40) == 0) || (bVar1 = DAT_0884, (bVar1 & 2) != 0)) {
    return;
  }
  bVar1 = DAT_0cca;
  if ((bVar1 & 1) == 0) {
    cVar6 = DAT_0c26;
  }
  else {
    cVar6 = DAT_0942;
  }
  if (cVar6 != '\x06') {
    return;
  }
  bVar1 = DAT_0880;
  if ((((~bVar1 & 0x40) == 0) || (bVar1 = DAT_0a38._0_1_, bVar4 = DAT_0df8, bVar1 < bVar4)) ||
     (sVar5 = DAT_0044, sVar3 = DAT_0ba8, sVar2 = DAT_0aa0, -1 < (sVar5 - sVar3) - sVar2)) {
    bVar1 = DAT_0a99;
    DAT_0a99 = bVar1 & 0xfd;
    sVar5 = DAT_0044;
  }
  else {
    bVar1 = DAT_0a99;
    DAT_0a99 = bVar1 | 2;
    sVar5 = DAT_0ba8;
    sVar2 = DAT_0aa0;
    sVar5 = sVar5 + sVar2;
  }
  DAT_0056 = sVar5 + 10;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 & 0xf7;
  bVar1 = DAT_0049;
  DAT_0049 = bVar1 & 0xbf | 0x80;
  DAT_004e = 8;
  bVar1 = DAT_0a98;
  DAT_0a98 = bVar1 | 0x80;
  return;
}


/* Entry e88f */

void candidate_unreferenced_e88f(void)

{
  return;
}


/* Entry e890 */

void FUN_e890(void)

{
  short sVar1;
  byte bVar2;
  char cVar3;
  
  bVar2 = DAT_08a3;
  if (((((((~bVar2 & 4) != 0) && (bVar2 = DAT_08b4, (~bVar2 & 0x80) != 0)) &&
        (bVar2 = DAT_0880, (~bVar2 & 0x80) != 0)) &&
       ((bVar2 = DAT_0884, (~bVar2 & 4) != 0 && (bVar2 = DAT_0d21, (~bVar2 & 1) != 0)))) &&
      (((bVar2 = DAT_0884, (~bVar2 & 2) != 0 &&
        ((bVar2 = DAT_088c, (~bVar2 & 0x80) != 0 && (bVar2 = DAT_0d71, (~bVar2 & 0x80) != 0)))) &&
       (bVar2 = DAT_0885, (~bVar2 & 0x40) != 0)))) && (bVar2 = DAT_0c1a, (~bVar2 & 0x80) != 0)) {
    bVar2 = DAT_0cca;
    if ((bVar2 & 1) == 0) {
      cVar3 = DAT_0c26;
    }
    else {
      cVar3 = DAT_0942;
    }
    bVar2 = DAT_088c;
    if ((((~bVar2 & 2) == 0) || (bVar2 = DAT_089c, (~bVar2 & 2) == 0)) ||
       ((cVar3 != '\x04' && (cVar3 != '\x05')))) {
      return;
    }
    sVar1 = DAT_0044;
    DAT_0ba8 = sVar1 + 10;
    DAT_0056 = sVar1 + 10;
    bVar2 = DAT_004c;
    DAT_004c = bVar2 & 0xf7;
    bVar2 = DAT_0049;
    DAT_0049 = bVar2 | 0xc0;
    DAT_004e = 8;
    bVar2 = DAT_0a98;
    DAT_0a98 = bVar2 | 8;
  }
  return;
}


/* Entry e8fe */

void FUN_e8fe(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  byte bVar4;
  short sVar5;
  
  bVar4 = DAT_08a3;
  if ((~bVar4 & 4) == 0) {
    return;
  }
  bVar4 = DAT_08b4;
  if ((~bVar4 & 0x80) == 0) {
    return;
  }
  bVar4 = DAT_00e1;
  if ((bVar4 & 8) != 0) {
    return;
  }
  bVar4 = DAT_0a98;
  if ((~bVar4 & 8) == 0) {
    return;
  }
  bVar4 = DAT_0884;
  if ((~bVar4 & 4) == 0) {
    return;
  }
  bVar4 = DAT_0d21;
  if ((~bVar4 & 1) == 0) {
    return;
  }
  bVar4 = DAT_0884;
  if ((~bVar4 & 2) == 0) {
    return;
  }
  bVar4 = DAT_088c;
  if ((~bVar4 & 0x80) == 0) {
    return;
  }
  bVar4 = DAT_0d71;
  if ((~bVar4 & 0x80) == 0) {
    return;
  }
  bVar4 = DAT_0885;
  if ((~bVar4 & 0x40) == 0) {
    return;
  }
  bVar4 = DAT_0c1a;
  if ((~bVar4 & 0x80) == 0) {
    return;
  }
  bVar4 = DAT_088c;
  if ((~bVar4 & 2) == 0) {
    return;
  }
  bVar4 = DAT_089c;
  if ((~bVar4 & 2) == 0) {
    return;
  }
  bVar4 = DAT_0cca;
  if ((bVar4 & 1) == 0) {
    bVar4 = DAT_0c26;
  }
  else {
    bVar4 = DAT_0942;
  }
  bVar1 = DAT_0945;
  if (bVar4 == bVar1) {
    bVar4 = DAT_089d;
    if ((bVar4 & 0x20) != 0) {
      bVar4 = DAT_089d;
      if ((bVar4 & 0x10) == 0) {
        bVar4 = DAT_089d;
        if ((bVar4 & 2) == 0) {
          bVar1 = DAT_0b62;
          bVar4 = DAT_0b60;
          if (bVar4 <= bVar1) {
            bVar4 = DAT_089d;
            DAT_089d = bVar4 | 2;
            DAT_0b62 = 0;
            cVar2 = DAT_0b61;
            DAT_0b61 = cVar2 + '\x01';
            return;
          }
          cVar2 = DAT_0b62;
          DAT_0b62 = cVar2 + '\x01';
          goto LAB_ea08;
        }
      }
      else {
        bVar4 = DAT_089d;
        DAT_089d = bVar4 & 0xef;
        bVar4 = DAT_089d;
        DAT_089d = bVar4 | 8;
        bVar4 = DAT_089d;
        DAT_089d = bVar4 | 2;
      }
      bVar1 = DAT_0b61;
      bVar4 = DAT_0b5f;
      if (bVar1 < bVar4) {
        cVar2 = DAT_0b61;
        DAT_0b61 = cVar2 + '\x01';
        return;
      }
      bVar4 = DAT_089d;
      DAT_089d = bVar4 & 0xfd;
      cVar2 = DAT_0b62;
      DAT_0b62 = cVar2 + '\x01';
      DAT_0b61 = 0;
    }
LAB_ea08:
    bVar4 = DAT_0049;
    DAT_0049 = bVar4 | 0xc0;
    DAT_004e = 8;
    bVar4 = DAT_004c;
    DAT_004c = bVar4 | 8;
    sVar5 = DAT_0b22;
    sVar3 = DAT_0aa8;
    sVar5 = sVar5 + sVar3;
    goto LAB_ea1b;
  }
  if (bVar4 == 0) {
LAB_e965:
    bVar4 = DAT_0cca;
    if ((bVar4 & 1) == 0) {
      cVar2 = DAT_0945;
      if ((cVar2 != '\n') && (cVar2 != '\t')) {
        return;
      }
    }
    else {
      cVar2 = DAT_0945;
      if ((cVar2 != '\x16') && (cVar2 != '\x15')) {
        return;
      }
    }
LAB_e99f:
    bVar4 = DAT_089d;
    if ((bVar4 & 0x20) != 0) {
      return;
    }
  }
  else {
    if (6 < bVar4) {
      bVar1 = DAT_0cca;
      if ((bVar1 & 1) == 0) {
        if (bVar4 != 10) {
          return;
        }
        cVar2 = DAT_0945;
        if (cVar2 != '\t') {
          return;
        }
      }
      else if ((bVar4 != 0x16) || (cVar2 = DAT_0945, cVar2 != '\x15')) {
        return;
      }
      goto LAB_e99f;
    }
    bVar1 = DAT_0945;
    if (bVar4 < bVar1) goto LAB_e965;
    bVar4 = DAT_089d;
    if ((bVar4 & 0x20) != 0) {
      return;
    }
  }
  bVar4 = DAT_0049;
  DAT_0049 = bVar4 | 0xc0;
  DAT_004e = 8;
  bVar4 = DAT_004c;
  DAT_004c = bVar4 | 8;
  sVar5 = DAT_0044;
  sVar5 = sVar5 + 10;
LAB_ea1b:
  DAT_0ba8 = sVar5;
  DAT_0056 = sVar5;
  bVar4 = DAT_0a98;
  DAT_0a98 = bVar4 | 8;
  return;
}


/* Entry ea25 */

void FUN_ea25(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  byte bVar6;
  short sVar5;
  
  bVar6 = DAT_08a3;
  if (((~bVar6 & 4) == 0) || (bVar6 = DAT_08b4, (~bVar6 & 0x80) == 0)) {
    return;
  }
  bVar6 = DAT_0cca;
  if ((bVar6 & 1) == 0) {
    bVar6 = DAT_0c26;
  }
  else {
    bVar6 = DAT_0942;
  }
  bVar1 = DAT_0944;
  if (bVar6 != bVar1) {
    if (bVar6 < bVar1) {
      return;
    }
    bVar6 = DAT_0a98;
    if ((~bVar6 & 0x80) == 0) {
      return;
    }
    uVar4 = DAT_0e1c;
    DAT_0aaa = uVar4;
  }
  bVar6 = DAT_00e1;
  if ((bVar6 & 8) == 0) {
    bVar6 = DAT_088c;
    if (((((((~bVar6 & 2) != 0) && (bVar6 = DAT_089c, (~bVar6 & 2) != 0)) &&
          (bVar6 = DAT_089d, (~bVar6 & 0x80) != 0)) &&
         (((bVar6 = DAT_0884, (~bVar6 & 4) != 0 && (bVar6 = DAT_0d21, (~bVar6 & 1) != 0)) &&
          ((bVar6 = DAT_0884, (~bVar6 & 2) != 0 &&
           ((bVar6 = DAT_088c, (~bVar6 & 0x80) != 0 && (bVar6 = DAT_0d71, (~bVar6 & 0x80) != 0))))))
         )) && (bVar6 = DAT_0885, (~bVar6 & 0x40) != 0)) &&
       ((bVar6 = DAT_0c1a, (~bVar6 & 0x80) != 0 && (bVar6 = DAT_0a98, (~bVar6 & 8) != 0)))) {
      sVar5 = DAT_0b22;
      sVar2 = DAT_0e18;
      DAT_0ba8 = sVar5 + sVar2;
      DAT_0056 = sVar5 + sVar2;
      bVar6 = DAT_0049;
      DAT_0049 = bVar6 | 0xc0;
      DAT_004e = 8;
      bVar6 = DAT_004c;
      DAT_004c = bVar6 | 8;
      bVar6 = DAT_0a98;
      DAT_0a98 = bVar6 | 8;
    }
    return;
  }
  bVar6 = DAT_0884;
  if ((((((~bVar6 & 4) == 0) || (bVar6 = DAT_0884, (~bVar6 & 2) == 0)) ||
       (bVar6 = DAT_0885, (~bVar6 & 0x40) == 0)) ||
      ((bVar6 = DAT_0c1a, (~bVar6 & 0x80) == 0 || (bVar6 = DAT_088d, (~bVar6 & 0x20) == 0)))) ||
     (bVar6 = DAT_0880, (bVar6 & 4) != 0)) {
    return;
  }
  bVar6 = DAT_0a38._0_1_;
  bVar1 = DAT_0df8;
  if (bVar1 <= bVar6) {
    sVar3 = DAT_0b22;
    sVar2 = DAT_0aaa;
    sVar5 = DAT_0ba8;
    sVar5 = (sVar3 + sVar2) - sVar5;
    DAT_0ebe = sVar5;
    sVar2 = DAT_0aa0;
    if (sVar5 - sVar2 < 0) {
      bVar6 = DAT_0a99;
      DAT_0a99 = bVar6 | 2;
      sVar5 = DAT_0ba8;
      sVar2 = DAT_0aa0;
      sVar5 = sVar5 + sVar2;
      goto LAB_eaa3;
    }
  }
  bVar6 = DAT_0a99;
  DAT_0a99 = bVar6 & 0xfd;
  sVar5 = DAT_0b22;
  sVar2 = DAT_0aaa;
  sVar5 = sVar5 + sVar2;
LAB_eaa3:
  DAT_0056 = sVar5;
  bVar6 = DAT_0049;
  DAT_0049 = bVar6 & 0xbf | 0x80;
  DAT_004e = 8;
  bVar6 = DAT_004c;
  DAT_004c = bVar6 | 8;
  bVar6 = DAT_0a98;
  DAT_0a98 = bVar6 | 0x80;
  return;
}


/* Entry eb0d */

void FUN_eb0d(void)

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
  
  cVar1 = DAT_0c27;
  if (cVar1 != '\0') {
    uVar3 = RAM0c29;
    uVar5 = DAT_0c52;
    if (uVar5 <= uVar3) {
LAB_eb3b:
      FUN_f3a8();
      return;
    }
    uVar5 = DAT_0c50;
    if (uVar5 <= uVar3) {
      cVar9 = DAT_0c55;
      if (cVar9 == '\0') {
        cVar9 = '\x01';
      }
      else {
        cVar6 = DAT_0c54;
        if ((cVar1 != cVar6) && ((char)(cVar1 - cVar6) != '\v')) goto LAB_eb3b;
      }
      DAT_0c55 = cVar9;
      uVar2 = DAT_0c27;
      DAT_0c54 = uVar2;
    }
    uVar2 = DAT_0c3d;
    DAT_0c41 = uVar2;
    uVar4 = DAT_0c3e;
    DAT_0c42 = uVar4;
    uVar2 = DAT_0c39;
    DAT_0c3d = uVar2;
    uVar4 = DAT_0c3a;
    DAT_0c3e = uVar4;
    uVar2 = DAT_0c29;
    DAT_0c39 = uVar2;
    uVar4 = DAT_0c2a;
    DAT_0c3a = uVar4;
    bVar8 = DAT_0c27;
    if (2 < bVar8) {
      bVar8 = DAT_0df9;
      DAT_0c58 = (ushort)bVar8 << 2;
      cVar1 = DAT_0c39;
      cVar9 = DAT_0c3d;
      cVar6 = DAT_0c41;
      if ((cVar1 == '\0' && cVar9 == '\0') && cVar6 == '\0') {
        FUN_ec98();
      }
      else {
        uVar3 = RAM0c3d;
        DAT_0e7e = (char)(uVar3 >> 2);
        uVar3 = RAM0c41;
        DAT_0e7c = (char)(uVar3 >> 2);
        uVar4 = RAM0c39;
        uVar2 = DAT_0e7c;
        FUN_ed38();
      }
      bVar8 = DAT_0c20;
      if ((bVar8 & 0x40) != 0) {
        DAT_0c25 = 0;
        DAT_0c26 = 0;
        DAT_0942 = 0;
        DAT_0943 = 0;
        bVar8 = DAT_0c20;
        DAT_0c20 = bVar8 | 0x80;
        bVar8 = DAT_0880;
        DAT_0880 = bVar8 & 0x7f;
        bVar8 = DAT_0881;
        DAT_0881 = bVar8 & 0x7f;
        bVar8 = DAT_088c;
        DAT_088c = bVar8 & 0xdf;
        uVar3 = DAT_0c2a;
        uVar5 = DAT_0c2e;
        DAT_0c36 = uVar3 + uVar5;
        cVar1 = DAT_0c29;
        cVar9 = DAT_0c2d;
        DAT_0c35 = cVar1 + cVar9 + CARRY2(uVar3,uVar5);
        cVar1 = DAT_0c29;
        if (cVar1 == '\0') {
          uVar3 = DAT_0c2a;
          uVar5 = DAT_0e1e;
          if (uVar3 < uVar5) {
            DAT_0c41 = 0xff;
            return;
          }
        }
        bVar7 = DAT_0c41;
        bVar8 = DAT_0c3d;
        DAT_0c41 = bVar7 | bVar8;
        return;
      }
    }
    uVar2 = DAT_0c29;
    DAT_0c2d = uVar2;
    uVar4 = DAT_0c2a;
    DAT_0c2e = uVar4;
  }
  cVar1 = DAT_0c27;
  bVar8 = cVar1 + 1;
  if (0xd < bVar8) {
    bVar8 = 1;
  }
  DAT_0c27 = bVar8;
  return;
}


/* Entry ec11 */

void FUN_ec11(void)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  short sVar7;
  ushort uVar8;
  
  cVar2 = DAT_0c25;
  if (cVar2 == '\t') {
    cVar2 = DAT_0c29;
    if (cVar2 == '\0') {
      uVar5 = DAT_0c2a;
      uVar8 = DAT_0e1e;
      if (uVar5 < uVar8) {
        DAT_0c41 = 0xff;
        return;
      }
    }
    uVar3 = DAT_0c29;
    DAT_0c41 = uVar3;
    uVar6 = DAT_0c2a;
    DAT_0c42 = uVar6;
  }
  else if (cVar2 == '\n') {
    bVar1 = DAT_0c41;
    if (-1 < (short)((ushort)bVar1 << 8)) {
      bVar4 = DAT_0c29;
      DAT_0c41 = bVar1 | bVar4;
    }
    uVar6 = DAT_0c2a;
    DAT_0c3e = uVar6;
  }
  else if (cVar2 == '\0') {
    bVar1 = DAT_0c41;
    if ((short)((ushort)bVar1 << 8) < 0) {
      uVar5 = DAT_0c2a;
      sVar7 = DAT_0c2a;
      uVar8 = DAT_0c3e;
      if ((uVar5 >> 2) + sVar7 < uVar8) {
        return;
      }
    }
    else {
      cVar2 = DAT_0c29;
      if (bVar1 != 0 || cVar2 != '\0') {
        return;
      }
      bVar1 = DAT_0dfd;
      DAT_0c58 = (ushort)bVar1 << 2;
      FUN_ec98();
      bVar1 = DAT_0c20;
      if ((bVar1 & 0x40) != 0) {
        DAT_0c57 = 0;
        return;
      }
    }
    bVar1 = DAT_0c57;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0c57 = bVar1;
    bVar4 = DAT_0dfc;
    if (bVar4 <= bVar1) {
      FUN_f3a8();
    }
  }
  return;
}


/* Entry ec98 */

void FUN_ec98(void)

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
  
  uVar1 = DAT_0c3e;
  DAT_0e7f = uVar1;
  uVar1 = DAT_0c42;
  DAT_0e81 = uVar1;
  uVar1 = DAT_0c2a;
  DAT_0e83 = uVar1;
  bVar10 = DAT_0c42._0_1_;
  bVar9 = DAT_0c3e._0_1_;
  bVar9 = (byte)((ushort)uVar1 >> 8) | bVar10 | bVar9;
  if ((bVar9 & 0xf8) == 0) {
    uVar4 = DAT_0e7f;
    DAT_0e7f = uVar4 >> 3;
    uVar4 = DAT_0e81;
    DAT_0e81 = uVar4 >> 3;
    uVar4 = DAT_0e83;
    DAT_0e83 = uVar4 >> 3;
    uVar2 = DAT_0e7f._1_1_;
    DAT_0e7e = uVar2;
    uVar2 = DAT_0e81._1_1_;
    uVar8 = DAT_0e83._1_1_;
    FUN_ed38(CONCAT11(uVar2,uVar8));
    return;
  }
  if (bVar9 < 0x10) {
    DAT_0c56 = 4;
  }
  else if (bVar9 < 0x20) {
    DAT_0c56 = 3;
  }
  else if (bVar9 < 0x40) {
    DAT_0c56 = 2;
  }
  else if (bVar9 < 0x80) {
    DAT_0c56 = 1;
  }
  else {
    DAT_0c56 = 0;
  }
  while (cVar3 = DAT_0c56, cVar3 != '\0') {
    cVar3 = DAT_0c56;
    DAT_0c56 = cVar3 + -1;
    sVar7 = DAT_0e7f;
    DAT_0e7f = sVar7 << 1;
    sVar7 = DAT_0e81;
    DAT_0e81 = sVar7 << 1;
    sVar7 = DAT_0e83;
    DAT_0e83 = sVar7 << 1;
  }
  uVar2 = DAT_0e7f._0_1_;
  DAT_0e7e = uVar2;
  bVar9 = DAT_0e81._0_1_;
  bVar10 = DAT_0e83._0_1_;
  RAM0e7c = (ushort)bVar9 * (ushort)bVar10;
  bVar9 = DAT_0e7e;
  bVar10 = DAT_0e7e;
  uVar11 = (ushort)bVar9 * (ushort)bVar10;
  uVar4 = RAM0e7c;
  if (uVar4 <= uVar11) {
    uVar4 = RAM0e7c;
    RAM0e80 = uVar11 / uVar4;
    uVar5 = RAM0e7c;
    RAM0e82 = (short)(((uint)(uVar11 % uVar4) << 0x10) / (uint)uVar5);
    cVar3 = DAT_0e7f._1_1_;
    if (cVar3 != '\0') {
LAB_ee5c:
      bVar9 = DAT_0c20;
      DAT_0c20 = bVar9 | 0x40;
      return;
    }
    uVar11 = DAT_0e81;
    DAT_0c5e = uVar11;
    uVar4 = DAT_0c58;
    if (uVar4 <= uVar11) {
      bVar9 = DAT_0c20;
      if ((bVar9 & 0x80) != 0) goto LAB_ee5c;
      bVar9 = DAT_0c39;
      bVar10 = DAT_0c41;
      if ((bVar9 | bVar10) == 0) {
        uVar1 = DAT_0c3a;
        RAM0e7c = uVar1;
        uVar1 = DAT_0c42;
        RAM0e7e = uVar1;
      }
      else if (((bVar9 | bVar10) & 0xf0) == 0) {
        uVar2 = DAT_0c39;
        DAT_0e7c = uVar2;
        uVar1 = DAT_0c3a;
        RAM0e7d = uVar1;
        uVar2 = DAT_0c41;
        DAT_0e7f._0_1_ = uVar2;
        uVar1 = DAT_0c42;
        RAM0e80 = uVar1;
        do {
          bVar9 = DAT_0e7c;
          DAT_0e7c = bVar9 >> 1;
          uVar1 = RAM0e7d;
          bVar10 = (byte)((ushort)uVar1 >> 8);
          RAM0e7d = CONCAT11(bVar10 >> 1 | bVar9 << 7,(byte)uVar1 >> 1 | bVar10 << 7);
          bVar9 = DAT_0e7f._0_1_;
          DAT_0e7f._0_1_ = bVar9 >> 1;
          uVar1 = RAM0e80;
          bVar10 = (byte)((ushort)uVar1 >> 8);
          RAM0e80 = CONCAT11(bVar10 >> 1 | bVar9 << 7,(byte)uVar1 >> 1 | bVar10 << 7);
          cVar3 = DAT_0e7c;
          cVar6 = DAT_0e7f._0_1_;
        } while (cVar3 != '\0' || cVar6 != '\0');
        uVar1 = RAM0e7d;
        RAM0e7c = uVar1;
        uVar1 = RAM0e80;
        RAM0e7e = uVar1;
      }
      else {
        uVar1 = RAM0c39;
        RAM0e7c = uVar1;
        uVar2 = DAT_0c3a._1_1_;
        DAT_0e7e = uVar2;
        uVar1 = RAM0c41;
        DAT_0e7f = uVar1;
        uVar2 = DAT_0c42._1_1_;
        DAT_0e81._0_1_ = uVar2;
        do {
          bVar9 = DAT_0e7e;
          DAT_0e7e = bVar9 << 1;
          uVar1 = RAM0e7c;
          RAM0e7c = CONCAT11((char)((ushort)uVar1 >> 8) << 1 | (byte)uVar1 >> 7,
                             (byte)uVar1 << 1 | bVar9 >> 7);
          bVar9 = DAT_0e81._0_1_;
          DAT_0e81._0_1_ = bVar9 << 1;
          uVar1 = DAT_0e7f;
          bVar10 = (char)((ushort)uVar1 >> 8) << 1 | (byte)uVar1 >> 7;
          DAT_0e7f = CONCAT11(bVar10,(byte)uVar1 << 1 | bVar9 >> 7);
          bVar9 = DAT_0e7c;
        } while ((bVar10 | bVar9) < 0x80);
        uVar1 = DAT_0e7f;
        RAM0e7e = uVar1;
      }
      uVar4 = RAM0e7c;
      uVar11 = RAM0e7e;
      RAM0e80 = uVar4 / uVar11;
      uVar5 = RAM0e7e;
      RAM0e82 = (short)(((uint)(uVar4 % uVar11) << 0x10) / (uint)uVar5);
      cVar3 = DAT_0e7f._1_1_;
      if (cVar3 == '\0') {
        uVar1 = DAT_0e81;
        DAT_0c60 = uVar1;
        bVar9 = DAT_0dfa;
        DAT_0c5a = (ushort)bVar9 << 2;
        uVar4 = DAT_0c60;
        if ((ushort)bVar9 << 2 < uVar4) {
          bVar9 = DAT_0dfb;
          uVar11 = (ushort)bVar9 * 4;
          DAT_0c5c = uVar11;
          uVar4 = DAT_0c60;
          if (uVar4 <= uVar11 && uVar11 - uVar4 != 0) goto LAB_ee5c;
        }
      }
    }
  }
  bVar9 = DAT_0c20;
  DAT_0c20 = bVar9 & 0xbf;
  return;
}


/* Entry ed38 */

void FUN_ed38(ushort param_1)

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
  
  RAM0e7c = (param_1 >> 8) * (param_1 & 0xff);
  bVar1 = DAT_0e7e;
  bVar8 = DAT_0e7e;
  uVar9 = (ushort)bVar1 * (ushort)bVar8;
  uVar4 = RAM0e7c;
  if (uVar4 <= uVar9) {
    uVar4 = RAM0e7c;
    RAM0e80 = uVar9 / uVar4;
    uVar6 = RAM0e7c;
    RAM0e82 = (short)(((uint)(uVar9 % uVar4) << 0x10) / (uint)uVar6);
    cVar5 = DAT_0e7f._1_1_;
    if (cVar5 != '\0') {
LAB_ee5c:
      bVar1 = DAT_0c20;
      DAT_0c20 = bVar1 | 0x40;
      return;
    }
    uVar9 = DAT_0e81;
    DAT_0c5e = uVar9;
    uVar4 = DAT_0c58;
    if (uVar4 <= uVar9) {
      bVar1 = DAT_0c20;
      if ((bVar1 & 0x80) != 0) goto LAB_ee5c;
      bVar1 = DAT_0c39;
      bVar8 = DAT_0c41;
      if ((bVar1 | bVar8) == 0) {
        uVar3 = DAT_0c3a;
        RAM0e7c = uVar3;
        uVar3 = DAT_0c42;
        RAM0e7e = uVar3;
      }
      else if (((bVar1 | bVar8) & 0xf0) == 0) {
        uVar2 = DAT_0c39;
        DAT_0e7c = uVar2;
        uVar3 = DAT_0c3a;
        RAM0e7d = uVar3;
        uVar2 = DAT_0c41;
        DAT_0e7f._0_1_ = uVar2;
        uVar3 = DAT_0c42;
        RAM0e80 = uVar3;
        do {
          bVar1 = DAT_0e7c;
          DAT_0e7c = bVar1 >> 1;
          uVar3 = RAM0e7d;
          bVar8 = (byte)((ushort)uVar3 >> 8);
          RAM0e7d = CONCAT11(bVar8 >> 1 | bVar1 << 7,(byte)uVar3 >> 1 | bVar8 << 7);
          bVar1 = DAT_0e7f._0_1_;
          DAT_0e7f._0_1_ = bVar1 >> 1;
          uVar3 = RAM0e80;
          bVar8 = (byte)((ushort)uVar3 >> 8);
          RAM0e80 = CONCAT11(bVar8 >> 1 | bVar1 << 7,(byte)uVar3 >> 1 | bVar8 << 7);
          cVar5 = DAT_0e7c;
          cVar7 = DAT_0e7f._0_1_;
        } while (cVar5 != '\0' || cVar7 != '\0');
        uVar3 = RAM0e7d;
        RAM0e7c = uVar3;
        uVar3 = RAM0e80;
        RAM0e7e = uVar3;
      }
      else {
        uVar3 = RAM0c39;
        RAM0e7c = uVar3;
        uVar2 = DAT_0c3a._1_1_;
        DAT_0e7e = uVar2;
        uVar3 = RAM0c41;
        DAT_0e7f = uVar3;
        uVar2 = DAT_0c42._1_1_;
        DAT_0e81._0_1_ = uVar2;
        do {
          bVar1 = DAT_0e7e;
          DAT_0e7e = bVar1 << 1;
          uVar3 = RAM0e7c;
          RAM0e7c = CONCAT11((char)((ushort)uVar3 >> 8) << 1 | (byte)uVar3 >> 7,
                             (byte)uVar3 << 1 | bVar1 >> 7);
          bVar1 = DAT_0e81._0_1_;
          DAT_0e81._0_1_ = bVar1 << 1;
          uVar3 = DAT_0e7f;
          bVar8 = (char)((ushort)uVar3 >> 8) << 1 | (byte)uVar3 >> 7;
          DAT_0e7f = CONCAT11(bVar8,(byte)uVar3 << 1 | bVar1 >> 7);
          bVar1 = DAT_0e7c;
        } while ((bVar8 | bVar1) < 0x80);
        uVar3 = DAT_0e7f;
        RAM0e7e = uVar3;
      }
      uVar4 = RAM0e7c;
      uVar9 = RAM0e7e;
      RAM0e80 = uVar4 / uVar9;
      uVar6 = RAM0e7e;
      RAM0e82 = (short)(((uint)(uVar4 % uVar9) << 0x10) / (uint)uVar6);
      cVar5 = DAT_0e7f._1_1_;
      if (cVar5 == '\0') {
        uVar3 = DAT_0e81;
        DAT_0c60 = uVar3;
        bVar1 = DAT_0dfa;
        DAT_0c5a = (ushort)bVar1 << 2;
        uVar4 = DAT_0c60;
        if ((ushort)bVar1 << 2 < uVar4) {
          bVar1 = DAT_0dfb;
          uVar9 = (ushort)bVar1 * 4;
          DAT_0c5c = uVar9;
          uVar4 = DAT_0c60;
          if (uVar4 <= uVar9 && uVar9 - uVar4 != 0) goto LAB_ee5c;
        }
      }
    }
  }
  bVar1 = DAT_0c20;
  DAT_0c20 = bVar1 & 0xbf;
  return;
}


/* Entry ee67 */

void FUN_ee67(void)

{
  undefined1 uVar1;
  
  uVar1 = DAT_08c6;
  DAT_0085 = uVar1;
  return;
}


/* Entry ee7d */

void FUN_ee7d(void)

{
  return;
}


/* Entry ee81 */

undefined2 FUN_ee81(short param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  
  uVar3 = FUN_eeab();
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


/* Entry eeab */

undefined2 FUN_eeab(ushort param_1,ushort param_2)

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


/* Entry eebd */

void FUN_eebd(void)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar5;
  
  DAT_004e = 0x40;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x40) == 0) {
    bVar2 = DAT_0a2a;
    if ((~bVar2 & 8) != 0) {
      sVar3 = DAT_005c;
      sVar1 = DAT_0044;
      if ((sVar3 - sVar1 < 0) || (sVar5 = DAT_0e26, sVar5 = (sVar3 - sVar1) - sVar5, sVar5 < 0)) {
        sVar5 = 0;
      }
      DAT_0e8e = sVar5;
      sVar1 = DAT_0a1c;
      sVar3 = DAT_0ba6;
      DAT_0ba4 = (sVar5 + sVar1) - sVar3;
      goto LAB_ef31;
    }
  }
  else {
    bVar2 = DAT_0a2a;
    if ((bVar2 & 8) == 0) {
      uVar4 = DAT_0a1c;
      DAT_0ba4 = uVar4;
      goto LAB_ef31;
    }
    bVar2 = DAT_0a2a;
    DAT_0a2a = bVar2 & 0xf7;
    sVar3 = DAT_005c;
    sVar1 = DAT_0044;
    if (((-1 < sVar3 - sVar1) && (sVar5 = DAT_0a1c, sVar5 = (sVar3 - sVar1) - sVar5, -1 < sVar5)) &&
       (sVar1 = DAT_0e26, -1 < sVar5 - sVar1)) {
      uVar4 = DAT_005c;
      DAT_0a36 = uVar4;
      uVar4 = DAT_0a1c;
      DAT_0ba4 = uVar4;
      FUN_bef2();
      bVar2 = DAT_004c;
      DAT_004c = bVar2 | 0x40;
      DAT_0ba6 = 0;
      bVar2 = DAT_0a2a;
      DAT_0a2a = bVar2 | 0x80;
      return;
    }
  }
  bVar2 = DAT_0a2a;
  DAT_0a2a = bVar2 & 0xf7;
  sVar1 = DAT_0a1c;
  sVar3 = DAT_0ba4;
  DAT_0ba4 = sVar1 + sVar3;
LAB_ef31:
  FUN_bef2();
  DAT_0ba6 = 0;
  return;
}


/* Entry ef3a */

ushort FUN_ef3a(byte param_1,undefined2 param_2)

{
  byte bVar1;
  char cVar2;
  byte fraction;
  short sVar3;
  ushort uVar4;
  byte *table_bias;
  
  RAM0e80 = param_2;
  bVar1 = DAT_0e7c;
  sVar3 = RAM0e80;
  fraction = DAT_0e7e;
  table_bias = (byte *)((ushort)fraction + (ushort)bVar1 * (ushort)param_1 + sVar3);
  uVar4 = prefix_candidate_c372(fraction,table_bias);
  cVar2 = DAT_0e7d;
  if (cVar2 == '\0') {
    RAM0e86 = uVar4;
    uVar4 = RAM0e86;
  }
  else {
    DAT_0e7f._1_1_ = (char)(uVar4 + 0x80 >> 8);
    uVar4 = prefix_candidate_c372(param_1,table_bias + param_1);
    DAT_0e81._0_1_ = (char)(uVar4 + 0x80 >> 8);
    uVar4 = prefix_candidate_c372((uchar)(uVar4 + 0x80),&DAT_0e7d);
  }
  return uVar4;
}


/* Entry ef7f */

undefined2 FUN_ef7f(undefined2 param_1,byte *param_2)

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


/* Entry efa4 */

void FUN_efa4(undefined2 param_1)

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
  
  DAT_0bc0 = (char)((ushort)param_1 >> 8) + -1;
  DAT_0bc1 = 0;
  puVar8 = (ushort *)DAT_0bc6;
  uVar3 = DAT_0bc4;
  if (*puVar8 < uVar3) {
    cVar4 = DAT_0bc0;
    sVar9 = DAT_0bc6;
    uVar3 = DAT_0bc4;
    if (uVar3 < *(ushort *)((ushort)(byte)(cVar4 << 1) + sVar9)) {
      while( true ) {
        cVar4 = DAT_0bc0;
        cVar6 = DAT_0bc1;
        if ((byte)(cVar4 - cVar6) == 1) break;
        cVar1 = DAT_0bc1;
        cVar1 = ((byte)(cVar4 - cVar6) >> 1) + cVar1;
        DAT_0bc2 = cVar1;
        sVar9 = DAT_0bc6;
        uVar3 = DAT_0bc4;
        if (uVar3 < *(ushort *)((ushort)(byte)(cVar1 * '\x02') + sVar9)) {
          uVar7 = DAT_0bc2;
          DAT_0bc0 = uVar7;
        }
        else {
          uVar7 = DAT_0bc2;
          DAT_0bc1 = uVar7;
        }
      }
      uVar7 = DAT_0bc1;
      DAT_0bc8._0_1_ = uVar7;
      cVar4 = DAT_0bc8._0_1_;
      sVar9 = DAT_0bc6;
      psVar2 = (short *)((ushort)(byte)(cVar4 << 1) + sVar9);
      RAM0e7c = *psVar2;
      sVar9 = RAM0e7c;
      RAM0e7c = psVar2[1] - sVar9;
      sVar9 = DAT_0bc4;
      uVar3 = RAM0e7c;
      uVar3 = (ushort)(((uint)(ushort)(sVar9 - *psVar2) << 0x10) / (uint)uVar3);
      if (0xff7f < uVar3) {
        cVar4 = DAT_0bc8._0_1_;
        DAT_0bc8._0_1_ = cVar4 + '\x01';
      }
      DAT_0bc8._1_1_ = (char)(uVar3 + 0x80 >> 8);
      sVar9 = DAT_0bc8;
    }
    else {
      bVar5 = DAT_0bc0;
      sVar9 = (ushort)bVar5 << 8;
    }
  }
  else {
    sVar9 = 0;
  }
  DAT_0bc8 = sVar9;
  return;
}


/* Entry f045 */

undefined2 FUN_f045(ushort param_1,byte *param_2)

{
  return (short)((uint)*param_2 * (uint)param_1 >> 8);
}


/* Entry f050 */

void FUN_f050(ushort param_1)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined *puVar7;
  ushort uVar8;
  char cVar9;
  byte bVar10;
  
  puVar7 = (undefined *)DAT_0aba;
  if (puVar7 != (undefined *)0x0) {
    puVar5 = (undefined *)DAT_0e2a;
    if (puVar5 < puVar7) {
      puVar7 = &UNK_03e8;
    }
    else {
      puVar5 = (undefined *)DAT_0e2c;
      if (puVar7 <= puVar5) {
        puVar7 = (undefined *)DAT_0e2c;
      }
    }
  }
  DAT_0abc = puVar7;
  puVar7 = (undefined *)DAT_0abc;
  uVar8 = (short)&UNK_03e8 - (short)puVar7;
  if (&UNK_03e8 < puVar7) {
    uVar8 = 0;
  }
  uVar1 = ((uint)uVar8 * (uint)param_1) / 100;
  uVar8 = (ushort)uVar1;
  if (0xffff < uVar1) {
    uVar8 = 0xffff;
  }
  DAT_0ac4 = uVar8;
  cVar9 = (char)(uVar8 / 300);
  DAT_0aca = uVar8 % 300;
  if (0x17 < uVar8 / 300) {
    cVar9 = '\x18';
  }
  DAT_0acc = cVar9;
  bVar10 = DAT_0ab1;
  if ((bVar10 & 1) == 0) {
    cVar4 = DAT_0ace;
    bVar10 = cVar9 + cVar4;
    if (0xb < bVar10) {
      bVar10 = bVar10 - 0xc;
    }
    if (0xb < bVar10) {
      bVar10 = bVar10 - 0xc;
    }
    if (bVar10 != 0xb) goto LAB_f0c7;
LAB_f0cd:
    bVar10 = 10;
LAB_f0cf:
    bVar2 = DAT_0ab1;
    DAT_0ab1 = bVar2 | 2;
    sVar3 = DAT_0aca;
    DAT_0aca = &UNK_012c + sVar3;
  }
  else {
    cVar4 = DAT_0ace;
    bVar10 = cVar9 + cVar4;
    if (0x17 < bVar10) {
      bVar10 = bVar10 - 0x18;
    }
    if (bVar10 == 0x17) {
      bVar10 = 0x16;
      goto LAB_f0cf;
    }
    if (bVar10 == 0xb) goto LAB_f0cd;
LAB_f0c7:
    bVar2 = DAT_0ab1;
    DAT_0ab1 = bVar2 & 0xfd;
  }
  DAT_0ac7 = bVar10;
  bVar10 = bVar10 + 1;
  bVar2 = DAT_0ab1;
  if ((bVar2 & 1) == 0) {
    if (bVar10 != 0xb) {
      if (0xb < bVar10) {
        bVar10 = 0;
      }
      goto LAB_f10b;
    }
  }
  else if (bVar10 != 0x17) {
    if (bVar10 == 0xb) {
      bVar10 = 0xc;
    }
    else if (0x17 < bVar10) {
      bVar10 = 0;
    }
    goto LAB_f10b;
  }
  bVar10 = 0;
LAB_f10b:
  DAT_0acd = bVar10;
  puVar7 = (undefined *)DAT_0abc;
  if (puVar7 < &UNK_03e8) {
    uVar6 = 0xff;
  }
  else {
    uVar6 = 0;
  }
  DAT_00bc = uVar6;
  DAT_00bd = uVar6;
  DAT_00ac = 0xff;
  DAT_00ad = 0xff;
  bVar10 = DAT_0ab1;
  DAT_0ab1 = bVar10 | 0x20;
  return;
}


/* Entry f12b */

void FUN_f12b(void)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  ushort uVar4;
  short sVar5;
  
  puVar3 = (undefined *)DAT_0abc;
  if (puVar3 != (undefined *)0x0) {
    if (puVar3 == &UNK_03e8) {
      DAT_0ac2 = 0;
    }
    else {
      uVar2 = DAT_0a38;
      uVar4 = DAT_0aca;
      uVar1 = ((uint)uVar2 * (uint)uVar4) / 0x4b0;
      sVar5 = (short)uVar1;
      if (0xffff < uVar1) {
        sVar5 = -1;
      }
      if (sVar5 == 1) {
        sVar5 = 2;
      }
      DAT_0ac2 = sVar5;
      DAT_00bc = (char)((ushort)sVar5 >> 8);
      DAT_00bd = (char)sVar5;
      DAT_00ac = 0xff;
      DAT_00ad = 0xff;
    }
  }
  return;
}


/* Entry f165 */

void FUN_f165(void)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_08c0;
  DAT_08c0 = bVar3 | 0x10;
  DAT_004e = 4;
  bVar3 = DAT_00e1;
  if ((bVar3 & 4) == 0) {
    sVar1 = DAT_0ae0;
    DAT_0ae0 = sVar1 + 1;
    uVar2 = DAT_0bb0;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0bb0 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
  }
  else {
    bVar3 = DAT_004b;
    DAT_004b = bVar3 & 0xef | 0x20;
  }
  bVar3 = DAT_08c0;
  DAT_08c0 = bVar3 & 0xef;
  return;
}


/* Entry f196 */

void FUN_f196(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte bVar4;
  short sVar5;
  
  bVar4 = DAT_004c;
  if ((bVar4 & 8) == 0) {
LAB_f202:
    bVar4 = DAT_004c;
    DAT_004c = bVar4 & 0xf7;
    bVar4 = DAT_0049;
    DAT_0049 = bVar4 & 0xbf | 0x80;
    DAT_004e = 8;
  }
  else {
    bVar4 = DAT_0880;
    if ((((~bVar4 & 0x40) != 0) && (bVar4 = DAT_0880, (~bVar4 & 4) != 0)) &&
       (bVar4 = DAT_088d, (~bVar4 & 0x20) != 0)) {
      bVar4 = DAT_00e1;
      if ((bVar4 & 8) == 0) goto LAB_f214;
      bVar4 = DAT_0cca;
      if ((bVar4 & 1) == 0) {
        bVar4 = DAT_0c25;
        bVar4 = bVar4 & 0x1f;
      }
      else {
        bVar4 = DAT_0942;
      }
      bVar1 = DAT_0944;
      if (bVar4 != bVar1) goto LAB_f211;
      bVar4 = DAT_0a38._0_1_;
      bVar1 = DAT_0df8;
      if (bVar4 < bVar1) {
LAB_f1f2:
        bVar4 = DAT_0a99;
        DAT_0a99 = bVar4 & 0xfd;
        sVar5 = DAT_0b22;
        sVar2 = DAT_0aaa;
        sVar5 = sVar5 + sVar2;
      }
      else {
        sVar3 = DAT_0b22;
        sVar2 = DAT_0aaa;
        sVar5 = DAT_0ba8;
        sVar5 = (sVar3 + sVar2) - sVar5;
        DAT_0ec6 = sVar5;
        sVar2 = DAT_0aa0;
        if (-1 < sVar5 - sVar2) goto LAB_f1f2;
        bVar4 = DAT_0a99;
        DAT_0a99 = bVar4 | 2;
        sVar5 = DAT_0ba8;
        sVar2 = DAT_0aa0;
        sVar5 = sVar5 + sVar2;
      }
      DAT_0056 = sVar5;
      bVar4 = DAT_0a98;
      DAT_0a98 = bVar4 | 0x80;
      goto LAB_f202;
    }
  }
LAB_f211:
  bVar4 = DAT_004c;
  DAT_004c = bVar4 & 0xf7;
LAB_f214:
  DAT_004e = 8;
  return;
}


/* Entry f21b */

void FUN_f21b(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  bVar1 = DAT_088c;
  if ((((((~bVar1 & 0x20) != 0) && (bVar1 = DAT_08a3, (~bVar1 & 4) != 0)) &&
       (bVar1 = DAT_08b4, (~bVar1 & 0x80) != 0)) &&
      (((bVar1 = DAT_088c, (~bVar1 & 0x80) != 0 && (bVar1 = DAT_0d71, (~bVar1 & 0x80) != 0)) &&
       ((bVar1 = DAT_0d21, (~bVar1 & 1) != 0 &&
        ((bVar1 = DAT_0884, (bVar1 & 7) == 0 && (bVar1 = DAT_0885, (~bVar1 & 0x40) != 0)))))))) &&
     ((bVar1 = DAT_0c1a, (~bVar1 & 0x80) != 0 &&
      ((((cVar3 = DAT_0e52, cVar3 == -0x80 || (bVar1 = DAT_08b2, (~bVar1 & 8) != 0)) &&
        (bVar1 = DAT_08b3, (~bVar1 & 0x10) != 0)) && (bVar1 = DAT_0886, (bVar1 & 0xc1) == 0)))))) {
    bVar1 = DAT_0886;
    if ((~bVar1 & 4) != 0) {
      bVar1 = DAT_088b;
      if ((~bVar1 & 0x80) == 0) {
        cVar3 = DAT_0943;
      }
      else {
        cVar3 = DAT_0c26;
      }
      cVar2 = DAT_0a2e;
      if (cVar3 == cVar2) {
        FUN_f27e();
      }
    }
    return;
  }
  return;
}


/* Entry f27e */

void FUN_f27e(void)

{
  short sVar1;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  
  bVar2 = DAT_088c;
  if (((~bVar2 & 8) == 0) || (bVar2 = DAT_089c, (~bVar2 & 8) == 0)) {
    return;
  }
  bVar2 = DAT_08b3;
  if ((bVar2 & 0x80) != 0) {
    bVar2 = DAT_088c;
    DAT_088c = bVar2 & 0xdf;
    return;
  }
  bVar2 = DAT_088c;
  DAT_088c = bVar2 & 0xdf;
  bVar2 = DAT_09d3;
  if ((bVar2 & 1) != 0) {
    bVar2 = DAT_09d3;
    DAT_09d3 = bVar2 | 2;
  }
  bVar2 = DAT_08c3;
  DAT_08c3 = bVar2 | 1;
  DAT_004e = 0x40;
  bVar2 = DAT_00e1;
  if ((bVar2 & 0x40) != 0) {
    uVar3 = DAT_0948;
    DAT_0ba4 = uVar3;
    DAT_0ba6 = 0;
    goto LAB_f2e7;
  }
  sVar1 = DAT_005c;
  sVar7 = DAT_0044;
  if (sVar1 - sVar7 < 0) {
LAB_f2c7:
    uVar6 = 0;
  }
  else {
    sVar5 = DAT_0e1a;
    uVar6 = (sVar1 - sVar7) - sVar5;
    if ((short)uVar6 < 0) goto LAB_f2c7;
  }
  DAT_0e8e = uVar6;
  uVar4 = DAT_0ba6;
  if ((uVar6 <= uVar4) || (sVar7 = DAT_0ba6, sVar7 == 0)) {
    sVar7 = DAT_0e8e;
    DAT_0ba6 = sVar7;
  }
  sVar1 = DAT_0948;
  DAT_0ba4 = sVar7 + sVar1;
  bVar2 = DAT_0a2a;
  DAT_0a2a = bVar2 & 0x7f;
LAB_f2e7:
  FUN_bef2();
  bVar2 = DAT_08c3;
  DAT_08c3 = bVar2 & 0xfe;
  return;
}


/* Entry f2ef */

void FUN_f2ef(void)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  
  DAT_004e = 0x40;
  bVar1 = DAT_00e1;
  if ((bVar1 & 0x40) == 0) {
    bVar1 = DAT_0a2a;
    if ((~bVar1 & 0x80) == 0) {
      bVar1 = DAT_0a2a;
      DAT_0a2a = bVar1 & 0x7f;
      sVar5 = DAT_0948;
    }
    else {
      sVar5 = DAT_0ba4;
    }
    bVar1 = DAT_0d08;
    if ((~bVar1 & 1) == 0) {
      bVar1 = DAT_0d09;
      bVar1 = (bVar1 + 1) - (0xfe < bVar1);
      DAT_0d09 = bVar1;
      bVar3 = DAT_0dfe;
      if (bVar3 <= bVar1) {
        bVar1 = DAT_0d08;
        DAT_0d08 = bVar1 & 0xfe;
        cVar4 = DAT_0dff;
        if (cVar4 != '\0') {
          DAT_0d0a = 0;
          bVar1 = DAT_0d08;
          DAT_0d08 = bVar1 | 4;
        }
      }
      sVar5 = DAT_0d0c;
    }
    else {
      bVar1 = DAT_0d08;
      if ((bVar1 & 4) != 0) {
        bVar1 = DAT_0d0a;
        bVar1 = (bVar1 + 1) - (0xfe < bVar1);
        DAT_0d0a = bVar1;
        bVar3 = DAT_0dff;
        if (bVar3 <= bVar1) {
          bVar1 = DAT_0d08;
          DAT_0d08 = bVar1 & 0xfb;
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
    bVar1 = DAT_0a2a;
    DAT_0a2a = bVar1 & 0xf7;
    return;
  }
  bVar1 = DAT_0a2a;
  if ((bVar1 & 0x80) == 0) {
    DAT_004e = 0x40;
    bVar1 = DAT_004c;
    DAT_004c = bVar1 & 0xbf;
    bVar1 = DAT_0a2a;
    DAT_0a2a = bVar1 & 0xf7;
    return;
  }
  sVar2 = DAT_0a36;
  sVar5 = DAT_0044;
  if ((sVar2 + -5) - sVar5 < 0) {
    sVar5 = DAT_0044;
    sVar5 = sVar5 + 5;
  }
  else {
    sVar5 = DAT_0a36;
  }
  DAT_005c = sVar5;
  bVar1 = DAT_0048;
  DAT_0048 = bVar1 & 0xef | 0x20;
  DAT_004e = 0x40;
  bVar1 = DAT_004c;
  DAT_004c = bVar1 | 0x40;
  bVar1 = DAT_0a2a;
  DAT_0a2a = bVar1 | 8;
  bVar1 = DAT_0a29;
  DAT_0a29 = bVar1 | 8;
  bVar1 = DAT_0a2b;
  DAT_0a2b = bVar1 | 8;
  return;
}


/* Entry f3a8 */

void FUN_f3a8(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  
  bVar2 = DAT_0c20;
  DAT_0c20 = bVar2 & 0x3f;
  bVar2 = DAT_0cca;
  DAT_0cca = bVar2 & 0xf8;
  DAT_093b = 0xe;
  DAT_093c = 0xe;
  DAT_093d = 0xe;
  DAT_093e = 0xe;
  DAT_093f = 0xe;
  DAT_0940 = 0xe;
  DAT_0b40 = 0xe;
  bVar2 = DAT_0880;
  DAT_0880 = bVar2 | 0x44;
  bVar2 = DAT_0880;
  DAT_0880 = bVar2 & 0xfd;
  bVar2 = DAT_0880;
  DAT_0880 = bVar2 & 0xf7;
  bVar2 = DAT_0881;
  DAT_0881 = bVar2 | 0x90;
  bVar2 = DAT_0881;
  DAT_0881 = bVar2 & 0xf7;
  bVar2 = DAT_0883;
  DAT_0883 = bVar2 & 0xef;
  bVar2 = DAT_0883;
  DAT_0883 = bVar2 & 0xdf;
  DAT_088b = 0;
  bVar2 = DAT_0a98;
  DAT_0a98 = bVar2 & 0x7f;
  bVar2 = DAT_0a98;
  DAT_0a98 = bVar2 & 0xf7;
  bVar2 = DAT_0d08;
  DAT_0d08 = bVar2 & 0xfb;
  bVar2 = DAT_0d08;
  DAT_0d08 = bVar2 & 0xfd;
  bVar2 = DAT_0d08;
  DAT_0d08 = bVar2 & 0xfe;
  bVar2 = DAT_0cca;
  DAT_0cca = bVar2 & 0xf7;
  RAM0918 = 0;
  DAT_091a = 0;
  DAT_091e = 0;
  DAT_091c = 0;
  DAT_0926 = 0;
  DAT_0920 = 0;
  DAT_0922 = 0;
  DAT_0a32 = 0;
  DAT_0a34 = 0;
  RAM0a59 = 0;
  DAT_0a5b = 0;
  DAT_0cac = 0;
  DAT_0cb0 = 0;
  DAT_0cb2 = 0;
  DAT_0cbc = 0;
  DAT_0cbe = 0;
  DAT_0caa = 0;
  DAT_0a30 = 0;
  DAT_0b31 = 0;
  DAT_0b2d = 0;
  DAT_0b05 = 0;
  DAT_0c27 = 0;
  DAT_0c55 = 0;
  DAT_0ccc = 0;
  DAT_0ccb = 0;
  DAT_0c57 = 0;
  DAT_0d09 = 0;
  DAT_0d0a = 0;
  DAT_0a5c = 0;
  DAT_0a5d = 0;
  DAT_0a42 = 0xffff;
  DAT_0a44 = 0xffff;
  DAT_0a46 = 0xffff;
  DAT_0a48 = 0xffff;
  DAT_0a4a = 0xffff;
  DAT_0a4c = 0xffff;
  DAT_0a3e = 0xffff;
  DAT_0a38 = 0xffff;
  DAT_0a4e = 0xffff;
  DAT_0a50 = 0xffff;
  DAT_0a52 = 0xffff;
  DAT_0a55 = 0xffff;
  DAT_0a57 = 0xff;
  DAT_0a8a = 0xffff;
  DAT_0941 = 0xff;
  DAT_0942 = 0xc0;
  DAT_0c25 = 0xc0;
  DAT_0944 = 6;
  bVar2 = DAT_0d9f;
  if (0x16 < bVar2) {
    bVar2 = 0x16;
  }
  if (bVar2 < 0xc) {
    if (bVar2 == 0xb) {
      bVar2 = 10;
    }
  }
  else {
    bVar2 = bVar2 - 0xc;
  }
  DAT_0a2e = bVar2;
  DAT_0a2f = bVar2;
  bVar2 = DAT_0dd8;
  if (bVar2 < 0x17) {
    if (bVar2 == 0xb) {
      bVar2 = 10;
    }
  }
  else {
    bVar2 = 0x16;
  }
  DAT_0a2c = bVar2;
  bVar2 = DAT_0aef;
  DAT_0aef = bVar2 & 0xfb;
  bVar2 = DAT_0aef;
  DAT_0aef = bVar2 & 0xfe;
  bVar2 = DAT_0aef;
  DAT_0aef = bVar2 & 0xfd;
  DAT_0af2 = 0;
  DAT_0af4 = 0;
  DAT_0af6 = 0;
  DAT_0afa = 0;
  DAT_0af0 = 0;
  DAT_0af8 = 0;
  DAT_0afc = 0;
  bVar2 = DAT_0d21;
  DAT_0d21 = bVar2 & 0xfd;
  cVar1 = DAT_0da0;
  if (cVar1 != -0x80) {
    uVar3 = FUN_bbaa('\0',&DAT_0da1);
    DAT_0992 = uVar3;
    uVar3 = FUN_bbaa((uchar)uVar3,&DAT_0db3);
    DAT_0994 = uVar3;
  }
  bVar2 = DAT_0eaf;
  DAT_0eaf = bVar2 & 0x7f;
  cVar1 = DAT_0e54;
  if (cVar1 == '\0') {
    bVar2 = DAT_00e0;
    DAT_00e0 = bVar2 | 0x80;
  }
  bVar2 = DAT_0a27;
  DAT_0a27 = bVar2 & 0x7f;
  bVar2 = DAT_0a27;
  DAT_0a27 = bVar2 & 0xbf;
  bVar2 = DAT_0a27;
  DAT_0a27 = bVar2 & 0xdf;
  bVar2 = DAT_0a27;
  DAT_0a27 = bVar2 & 0xef;
  bVar2 = DAT_0a27;
  DAT_0a27 = bVar2 & 0xf7;
  cVar1 = DAT_0e55;
  if (cVar1 == '@') {
    bVar2 = DAT_0ab0;
    DAT_0ab0 = bVar2 | 0x80;
    bVar2 = DAT_0ab0;
    DAT_0ab0 = bVar2 & 0xbf;
    bVar2 = DAT_0ab0;
    DAT_0ab0 = bVar2 & 0xdf;
    bVar2 = DAT_0ab0;
    DAT_0ab0 = bVar2 & 0xef;
    bVar2 = DAT_0ab0;
    DAT_0ab0 = bVar2 & 0xf7;
    DAT_00bc = 0xff;
    DAT_00bd = 0xff;
    DAT_00ac = 0xff;
    DAT_00ad = 0xff;
    DAT_0aba = 0;
    DAT_0abc = 0;
    DAT_0ac6 = 0;
    bVar2 = DAT_0ab1;
    DAT_0ab1 = bVar2 & 0xef;
    bVar2 = DAT_0ab1;
    DAT_0ab1 = bVar2 & 0xf7;
    bVar2 = DAT_0ab1;
    DAT_0ab1 = bVar2 & 0xfb;
    bVar2 = DAT_0ab1;
    DAT_0ab1 = bVar2 & 0xdf;
  }
  return;
}


/* Entry f7a0 */

/* WARNING: This function may have set the stack pointer */

void application_init(void)

{
  undefined1 uVar1;
  short sVar2;
  undefined *puVar3;
  char cVar4;
  byte extraout_A;
  byte bVar5;
  byte extraout_A_00;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  
  DAT_00f8 = 0xc0;
  DAT_0082 = 0;
  DAT_0082 = 0x80;
  DAT_0083 = 0x40;
  DAT_0084 = 99;
  DAT_0085 = 0x10;
  DAT_0000 = 0xf8;
  DAT_0002 = 0x1f;
  DAT_0001 = 0x1f;
  DAT_0003 = 0xec;
  DAT_00f0 = 0xa0;
  DAT_00f2 = 0xff;
  DAT_00e0 = 0xf6;
  DAT_00e2 = 0xd9;
  DAT_00e8 = 0xff;
  DAT_00ea = 0xea;
  DAT_0009 = 0x9f;
  DAT_0033 = 0x80;
  DAT_0046 = 0x80;
  DAT_004d = 5;
  DAT_0040 = 0xd8;
  DAT_0048 = 0x30;
  DAT_0049 = 0x80;
  DAT_0041 = 0x48;
  bVar5 = DAT_00ee;
  DAT_00ee = bVar5 | 10;
  RAM00d0 = 0x40;
  DAT_00d2._1_1_ = 0x24;
  DAT_00d8 = 0x50;
  DAT_00da = 3;
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  if (DAT_1841 == '@') {
    DAT_00a1 = 0;
    DAT_00a3 = 7;
    DAT_00a5 = 0x10;
    DAT_00b4 = 0xff;
    DAT_00b5 = 0xff;
    DAT_00bc = 0xff;
    DAT_00bd = 0xff;
    DAT_00a0 = 2;
  }
  prefix_candidate_5fa4();
  bVar5 = DAT_0008;
  DAT_0008 = bVar5 & 0xf3;
  uVar1 = DAT_0001;
  DAT_0898 = CONCAT11(uVar1,uVar1);
  uVar1 = DAT_0000;
  DAT_0896 = CONCAT11(uVar1,uVar1);
  DAT_0880 = 0x44;
  DAT_0881 = 0xb0;
  DAT_0888 = 0x10;
  FUN_56d5();
  DAT_0941 = 0xff;
  DAT_093b = 0xff;
  DAT_093c = 0xff;
  DAT_093d = 0xff;
  DAT_093e = 0xff;
  DAT_093f = 0xff;
  DAT_0940 = 0xff;
  DAT_0b40 = 0xff;
  DAT_0b30 = 0xff;
  DAT_0b58 = 0xff;
  DAT_0b38 = 0xff;
  DAT_0b39 = 0xff;
  DAT_0ba0 = 0xff;
  DAT_0b35 = 0xff;
  DAT_0b36 = 0xff;
  DAT_0a06 = 0xff;
  DAT_0b9f = 0xff;
  DAT_0a42 = 0xffff;
  DAT_0a44 = 0xffff;
  DAT_0a46 = 0xffff;
  DAT_0a48 = 0xffff;
  DAT_0a4a = 0xffff;
  DAT_0a4c = 0xffff;
  DAT_0a38 = 0xffff;
  DAT_0a3e = 0xffff;
  DAT_0a3c = 0xffff;
  DAT_0a3a = 0xffff;
  DAT_0a40 = 0xffff;
  DAT_0a50 = 0xffff;
  DAT_0a52 = 0xffff;
  DAT_0a4e = 0xffff;
  DAT_0a55 = 0xffff;
  DAT_0a57 = 0xff;
  DAT_0a8a = 0xffff;
  DAT_0d6c = 0xffff;
  DAT_097c = 0x8000;
  DAT_0980 = 0x8000;
  DAT_08e6 = 0x80;
  DAT_09bb = 0x8080;
  DAT_09bd = 0x8080;
  DAT_09bf = 0x8080;
  DAT_09c1 = 0x8080;
  DAT_09c3 = 0x8080;
  DAT_09c5 = 0x8080;
  DAT_09c7 = 0x8080;
  DAT_09c9 = 0x8080;
  DAT_0964 = 0x80;
  DAT_0979 = 0x80;
  DAT_097a = 0x80;
  DAT_0952 = 0x80;
  DAT_0970 = 0x80;
  DAT_0978 = 0x80;
  DAT_0a8e = 0x80;
  DAT_08fa = 0x80;
  DAT_0bdd = 0x80;
  DAT_0ad7 = 0x80;
  DAT_0942 = 0xc0;
  DAT_0c25 = 0xc0;
  DAT_08ea = DAT_4440;
  DAT_0bd6 = DAT_4440;
  bVar5 = DAT_0889;
  DAT_0889 = bVar5 | 0x20;
  uVar8 = DAT_08ec;
  DAT_08ee = uVar8;
  DAT_08c7 = 0x7f;
  DAT_0b29 = 0x7b;
  DAT_0b59 = 1;
  DAT_0944 = 6;
  DAT_0966 = 0x1e0;
  DAT_0948 = 0x9c4;
  DAT_0a32 = 0;
  DAT_0a34 = 0;
  bVar5 = DAT_18ba;
  if (0x16 < DAT_18ba) {
    bVar5 = 0x16;
  }
  if (bVar5 < 0xc) {
    if (bVar5 == 0xb) {
      bVar5 = 10;
    }
  }
  else {
    bVar5 = bVar5 - 0xc;
  }
  DAT_0a2e = bVar5;
  DAT_0a2f = bVar5;
  bVar5 = DAT_0dd8;
  if (bVar5 < 0x17) {
    if (bVar5 == 0xb) {
      bVar5 = 10;
    }
  }
  else {
    bVar5 = 0x16;
  }
  DAT_0a2c = bVar5;
  if (DAT_3866 == '\x02') {
    bVar5 = DAT_0884;
    DAT_0884 = bVar5 | 0x40;
  }
  bVar5 = DAT_0893;
  DAT_0893 = bVar5 | 4;
  bVar5 = DAT_08a3;
  DAT_08a3 = bVar5 | 0x80;
  bVar5 = DAT_08b0;
  DAT_08b0 = bVar5 | 0x40;
  bVar5 = DAT_0880;
  DAT_0880 = bVar5 | 0x80;
  bVar5 = DAT_088c;
  DAT_088c = bVar5 | 0x20;
  bVar5 = DAT_08a0;
  DAT_08a0 = bVar5 | 0x80;
  bVar5 = DAT_08a0;
  DAT_08a0 = bVar5 | 0x40;
  cVar4 = DAT_0e55;
  if (cVar4 == '@') {
    bVar5 = DAT_0ab0;
    DAT_0ab0 = bVar5 | 0x80;
  }
  FUN_4f29();
  uVar8 = DAT_0ed2;
  DAT_08f2 = uVar8;
  DAT_08f4 = uVar8;
  if ((char)((ushort)uVar8 >> 8) == -1) {
    uVar8 = 0xfe00;
  }
  DAT_0b0d = (char)((ushort)uVar8 >> 8);
  uVar6 = DAT_0ed2;
  uVar6 = uVar6 >> 6;
  DAT_08d6 = uVar6;
  DAT_08e8 = uVar6;
  DAT_0bd2 = uVar6;
  DAT_0bd4 = uVar6;
  DAT_08f0 = uVar6;
  DAT_09d4 = uVar6;
  DAT_0b46 = uVar6;
  DAT_0b48 = uVar6;
  DAT_0b4a = uVar6;
  DAT_0b4c = uVar6;
  DAT_0be0 = uVar6;
  DAT_0be2 = uVar6;
  DAT_0be4 = uVar6;
  DAT_0be6 = uVar6;
  uVar8 = DAT_0ed4;
  DAT_0ca8 = uVar8;
  bVar5 = DAT_0880;
  DAT_0880 = bVar5 | 0x20;
  DAT_0900 = uVar8;
  DAT_0ce2 = uVar8;
  DAT_0ce4 = uVar8;
  DAT_0ce0 = uVar8;
  uVar1 = DAT_0ed8;
  DAT_08de = uVar1;
  bVar5 = DAT_0eda;
  DAT_08df = bVar5;
  DAT_0bf0 = bVar5;
  DAT_08e0 = (ushort)bVar5 << 8;
  uVar7 = (ushort)bVar5 << 8;
  uVar6 = uVar7 / 0xf0;
  if (0xfe < uVar6) {
    uVar6 = 0xfe;
  }
  DAT_0b10 = (char)uVar6;
  uVar1 = DAT_0edc;
  DAT_08e3 = uVar1;
  uVar1 = DAT_0ede;
  DAT_08dc = uVar1;
  uVar1 = DAT_0ee6;
  DAT_08e4 = uVar1;
  DAT_0085 = 0;
  prefix_candidate_5fa4(uVar7 % 0xf0);
  bVar5 = DAT_08dc;
  uVar6 = FUN_bbb8((ushort)bVar5 * 0x20,(byte *)((short)&DAT_46ee + 1));
  extraout_A = (byte)(uVar6 >> 8);
  DAT_0914 = extraout_A;
  DAT_0916 = extraout_A;
  bVar5 = (byte)((ushort)extraout_A * 0xa0 >> 8);
  if (0x95 < bVar5) {
    bVar5 = 0x95;
  }
  DAT_0b0c = bVar5;
  bVar5 = DAT_08de;
  uVar6 = FUN_bbb8((ushort)bVar5 * 0x20,(byte *)((short)&DAT_46ee + 1));
  extraout_A_00 = (byte)(uVar6 >> 8);
  DAT_0915 = extraout_A_00;
  bVar5 = (byte)((ushort)extraout_A_00 * 0xa0 >> 8);
  if (0x95 < bVar5) {
    bVar5 = 0x95;
  }
  DAT_0b0f = bVar5;
  bVar5 = DAT_0888;
  DAT_0888 = bVar5 & 0xef;
  bVar5 = DAT_0008;
  DAT_0008 = bVar5 & 0xf3;
  DAT_0eb4 = DAT_f770;
  DAT_0eb6 = DAT_f772;
  DAT_0eb8 = DAT_f774;
  DAT_0eba = DAT_f776;
  if (DAT_4622 == 0x55aa) {
    FUN_502d();
  }
  if (DAT_4624 == -0x55ab) {
    FUN_5309();
    FUN_5454();
  }
  FUN_5471();
  FUN_53ce();
  FUN_5085();
  bVar5 = DAT_0bf7;
  if ((bVar5 & 8) != 0) {
    bVar5 = DAT_0bf4;
    DAT_0bf4 = bVar5 | 0x40;
  }
  cVar4 = DAT_0e4d;
  if (cVar4 != -0x80) {
    bVar5 = DAT_0d21;
    DAT_0d21 = bVar5 | 1;
    FUN_55fe();
  }
  FUN_971d();
  bVar5 = DAT_08b4;
  if ((bVar5 & 0x80) != 0) {
    bVar5 = DAT_08a3;
    DAT_08a3 = bVar5 & 0x7f;
    bVar5 = DAT_08a3;
    DAT_08a3 = bVar5 | 2;
  }
  prefix_candidate_5fbf();
  uVar1 = DAT_0914;
  uVar8 = prefix_candidate_c386();
  DAT_09b4 = uVar8;
  cVar4 = DAT_0d9c;
  if ((cVar4 != -0x80) && (bVar5 = DAT_08b4, (bVar5 & 0x40) != 0)) {
    bVar5 = DAT_08b4;
    DAT_08b4 = bVar5 & 0xbf;
    bVar5 = DAT_0bf4;
    DAT_0bf4 = bVar5 | 0x10;
  }
  FUN_5f95();
  FUN_56c7();
  bVar5 = DAT_004a;
  DAT_004a = bVar5 & 0xfb | 8;
  bVar5 = DAT_004b;
  DAT_004b = bVar5 & 0xeb | 0x28;
  bVar5 = DAT_004c;
  DAT_004c = bVar5 | 6;
  uVar8 = DAT_0044;
  DAT_0b26 = uVar8;
  DAT_0b24 = uVar8;
  uVar1 = DAT_0001;
  DAT_0898 = CONCAT11(uVar1,uVar1);
  do {
    bVar5 = DAT_08be;
    DAT_08be = bVar5 ^ 0x80;
    DAT_0ffc = 0x4bd5;
    FUN_56b0();
    do {
      bVar5 = DAT_0037;
    } while ((bVar5 & 8) == 0);
    bVar5 = DAT_0020;
    if (((bVar5 & 1) != 0) && (sVar2 = DAT_0024, sVar2 == -0x5aa6)) {
      uVar8 = DAT_00d4;
      uVar1 = DAT_00d6._1_1_;
      DAT_00d2._1_1_ = 0;
      DAT_08a3 = 0x80;
      DAT_08b0 = 0x40;
    }
    bVar5 = DAT_0020;
    if ((bVar5 & 4) != 0) {
      DAT_00cb = 0;
    }
    DAT_0ffc = 0x4c03;
    FUN_5a2f();
    DAT_0ffc = 0x4c06;
    FUN_5fb2();
    DAT_0ffc = 0x4c09;
    FUN_f8a0();
    DAT_0ffc = 0x4c0c;
    FUN_5a5b();
    bVar5 = DAT_0881;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4c14;
      FUN_7a56();
    }
    bVar5 = DAT_0881;
    if ((bVar5 & 2) != 0) {
      DAT_0ffc = 0x4c1c;
      FUN_7a63();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 2) != 0) {
      DAT_0ffc = 0x4c24;
      FUN_7bac();
    }
    bVar5 = DAT_0882;
    if ((~bVar5 & 0x80) == 0) {
      DAT_0ffc = 0x4c30;
      FUN_6b36();
      uVar8 = DAT_0a38;
      DAT_0a3a = uVar8;
      uVar6 = DAT_0a3e;
      DAT_0a40 = uVar6;
      DAT_0a3c = uVar6 >> 2;
      bVar5 = DAT_0c25;
      if (((bVar5 & 0x1f) < 2) || (5 < (bVar5 & 0x1f))) {
        uVar1 = DAT_0a8c;
        DAT_0ffc = 0x4c5a;
        FUN_4d49();
        uVar1 = DAT_0e67._0_1_;
        DAT_0944 = uVar1;
        uVar8 = RAM0e69;
        DAT_0a9a = uVar8;
        uVar8 = DAT_0e6b;
        DAT_0aaa = uVar8;
        DAT_0ffc = 0x4c73;
        FUN_4e0f();
      }
      bVar5 = DAT_08a3;
      if ((((((~bVar5 & 4) != 0) && (bVar5 = DAT_08b4, (~bVar5 & 0x80) != 0)) &&
           (puVar3 = (undefined *)RAM0918, puVar3 < &UNK_2800)) &&
          (((bVar5 = DAT_0884, (~bVar5 & 4) != 0 && (bVar5 = DAT_0d21, (~bVar5 & 1) != 0)) &&
           ((bVar5 = DAT_0884, (~bVar5 & 2) != 0 &&
            ((bVar5 = DAT_088c, (~bVar5 & 0x80) != 0 && (bVar5 = DAT_0d71, (~bVar5 & 0x80) != 0)))))
           ))) && ((bVar5 = DAT_0885, (~bVar5 & 0x40) != 0 &&
                   ((((bVar5 = DAT_0c1a, (~bVar5 & 0x80) != 0 &&
                      (bVar5 = DAT_089d, (~bVar5 & 0x80) != 0)) &&
                     (bVar5 = DAT_089d, (~bVar5 & 8) != 0)) &&
                    (bVar5 = DAT_0880, (~bVar5 & 0x40) != 0)))))) {
        DAT_0ffc = 0x4cba;
        FUN_4ecf();
      }
      bVar5 = DAT_0882;
      DAT_0882 = bVar5 & 0x7f;
    }
    DAT_0ffc = 0x4cc1;
    FUN_79a5();
    DAT_0ffc = 0x4cc4;
    FUN_6c49();
    DAT_0ffc = 0x4cc7;
    FUN_5fb2();
    bVar5 = DAT_0887;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4ccf;
      FUN_aebd();
    }
    bVar5 = DAT_0881;
    if ((bVar5 & 0x80) == 0) {
      bVar5 = DAT_0a28;
      DAT_0a28 = bVar5 | 1;
      DAT_0ffc = 0x4cdd;
      FUN_6cda();
    }
    DAT_0ffc = 0x4ce0;
    FUN_5fb2();
    bVar5 = DAT_0887;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4ce8;
      FUN_aebd();
    }
    DAT_0ffc = 0x4ceb;
    FUN_5a5b();
    bVar5 = DAT_0882;
    if ((bVar5 & 0x40) != 0) {
      DAT_0ffc = 0x4cf3;
      FUN_7e9e();
    }
    DAT_0ffc = 0x4cf6;
    FUN_5fb2();
    bVar5 = DAT_0887;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4cfe;
      FUN_aebd();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 0x20) != 0) {
      DAT_0ffc = 0x4d06;
      FUN_97eb();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 4) != 0) {
      DAT_0ffc = 0x4d0e;
      FUN_97f8();
    }
    bVar5 = DAT_088e;
    if ((bVar5 & 0x80) != 0) {
      DAT_0ffc = 0x4d16;
      FUN_9fc1();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 0x20) != 0) {
      DAT_0ffc = 0x4d1e;
      FUN_a6eb();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 0x10) != 0) {
      DAT_0ffc = 0x4d26;
      FUN_a963();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 8) != 0) {
      DAT_0ffc = 0x4d2e;
      FUN_b02b();
    }
    bVar5 = DAT_0882;
    if ((bVar5 & 2) != 0) {
      DAT_0ffc = 0x4d36;
      FUN_b600();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 0x80) != 0) {
      DAT_0ffc = 0x4d3e;
      FUN_ba36();
    }
    bVar5 = DAT_0887;
    if ((bVar5 & 0x40) != 0) {
      DAT_0ffc = 0x4d46;
      FUN_bb7d();
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

undefined2 dispatch_f7a6(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7aa */

undefined2 dispatch_f7aa(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7ae */

undefined2 dispatch_f7ae(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7b2 */

undefined2 dispatch_f7b2(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7b6 */

undefined2 dispatch_f7b6(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_c426();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7ba */

undefined2 dispatch_f7ba(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7be */

undefined2 dispatch_f7be(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7c2 */

undefined2 dispatch_f7c2(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7c6 */

undefined2 dispatch_f7c6(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7ca */

undefined2 dispatch_f7ca(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7ce */

undefined2 dispatch_f7ce(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_f2ef();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7d2 */

undefined2 dispatch_f7d2(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7d6 */

undefined2 dispatch_f7d6(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7da */

undefined2 dispatch_f7da(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_f196();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7de */

undefined2 dispatch_f7de(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_f165();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7e2 */

undefined2 dispatch_f7e2(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_d1d9();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7e6 */

undefined2 dispatch_f7e6(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  default_interrupt_loop();
  return CONCAT11(param_1,in_stack_00000001);
}


/* Entry f7ea */

undefined2 dispatch_f7ea(undefined1 param_1)

{
  undefined1 in_stack_00000001;
  
  FUN_c30f();
  return CONCAT11(param_1,in_stack_00000001);
}


