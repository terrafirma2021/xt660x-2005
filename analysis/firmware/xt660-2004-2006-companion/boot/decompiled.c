/* Functions rooted in companion boot; Ghidra may expand application handoff. Not original or buildable source. */

/* F800 boot_reset */

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void boot_reset(void)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  byte extraout_A;
  byte extraout_A_00;
  ushort uVar5;
  ushort uVar6;
  byte bVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  short sVar10;
  short sVar11;
  
  sVar11 = LoadStack(0x1000);
  DAT_00f8 = 0xc0;
  DAT_003a = 0;
  DAT_0034 = 7;
  DAT_0035 = 1;
  DAT_003a = 0xf1;
  do {
    bVar7 = DAT_0037;
  } while ((bVar7 & 8) == 0);
  bVar7 = DAT_0039;
  DAT_0039 = bVar7 | 0x80;
  DAT_003c = 0x43;
  bVar7 = DAT_0000;
  DAT_0000 = bVar7 | 0x10;
  bVar7 = DAT_0002;
  DAT_0002 = bVar7 | 0x10;
  RAM0020 = 0;
  RAM0022 = 0;
  RAM0024 = 0;
  RAM0026 = 0;
  puVar8 = (undefined2 *)&UNK_0800;
  sVar10 = 0x200;
  do {
    puVar9 = puVar8 + 1;
    *puVar8 = 0;
    puVar8 = puVar8 + 2;
    *puVar9 = 0;
    sVar10 = sVar10 + -1;
  } while (sVar10 != 0);
  DAT_001e = 0;
  DAT_0046 = 0x80;
  DAT_004d = 5;
  DAT_0066 = 0x4f;
  RAM0076 = 0x1400;
  bVar7 = DAT_0066;
  DAT_0066 = bVar7 | 8;
  bVar7 = DAT_0067;
  DAT_0067 = bVar7 | 0x80;
  do {
    bVar7 = DAT_0067;
  } while ((bVar7 & 0x80) == 0);
  bVar7 = DAT_0067;
  DAT_0067 = bVar7 | 0x80;
  RAM0076 = 30000;
  bVar7 = DAT_0066;
  DAT_0066 = bVar7 | 8;
  bVar7 = DAT_0067;
  DAT_0067 = bVar7 | 0x80;
  bVar7 = DAT_00ee;
  DAT_00ee = bVar7 | 10;
  RAM00c8 = 0x68;
  DAT_00cb = 0x24;
  UNK_0100 = 0x14;
  cVar2 = DAT_0022;
  if (cVar2 != 'Z') {
    if (sRAMf7fe == 0x5aa5) {
      DAT_00f8 = 0xc0;
      DAT_0082 = 0;
      DAT_0082 = 0x80;
      DAT_0083 = 0x40;
      DAT_0084 = 99;
      DAT_0085 = 0x10;
      DAT_0000 = 0xf8;
      DAT_0002 = 0x1f;
      if (cRAM18d3 == '\t') {
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
      bVar7 = DAT_00ee;
      DAT_00ee = bVar7 | 10;
      RAM00d0 = 0x40;
      DAT_00d3 = 0x24;
      DAT_00d8 = 0x50;
      DAT_00da = 3;
      uVar4 = DAT_00db;
      uVar4 = DAT_00dd;
      *(undefined2 *)(sVar11 + -2) = 0x5086;
      (*(code *)0x5fa4)();
      bVar7 = DAT_0008;
      DAT_0008 = bVar7 & 0xf3;
      uVar4 = DAT_0001;
      _UNK_0896 = CONCAT11(uVar4,uVar4);
      uVar4 = DAT_0000;
      _UNK_0894 = CONCAT11(uVar4,uVar4);
      UNK_0880 = 0x44;
      UNK_0881 = 0xf0;
      UNK_0a16 = UNK_0a16 & 0xf7;
      UNK_0888 = 0x10;
      *(undefined2 *)(sVar11 + -2) = 0x50b0;
      (*(code *)0x5fc8)();
      UNK_0921 = 0xff;
      UNK_091b = 0xff;
      UNK_091c = 0xff;
      UNK_091d = 0xff;
      UNK_091e = 0xff;
      UNK_091f = 0xff;
      UNK_0920 = 0xff;
      UNK_0b09 = 0xff;
      UNK_0afd = 0xff;
      UNK_0b20 = 0xff;
      UNK_0b05 = 0xff;
      UNK_0b06 = 0xff;
      UNK_0b6e = 0xff;
      UNK_0b02 = 0xff;
      UNK_0b03 = 0xff;
      UNK_0a06 = 0xff;
      UNK_0b6c = 0xff;
      _UNK_0a38 = 0xffff;
      _UNK_0a3a = 0xffff;
      _UNK_0a3c = 0xffff;
      _UNK_0a3e = 0xffff;
      _UNK_0a40 = 0xffff;
      _UNK_0a42 = 0xffff;
      _UNK_0a2e = 0xffff;
      _UNK_0a34 = 0xffff;
      _UNK_0a32 = 0xffff;
      _UNK_0a30 = 0xffff;
      _UNK_0a36 = 0xffff;
      _UNK_0a46 = 0xffff;
      _UNK_0a48 = 0xffff;
      _UNK_0a44 = 0xffff;
      _UNK_0a4b = 0xffff;
      UNK_0a4d = 0xff;
      _UNK_0a80 = 0xffff;
      _UNK_0982 = 0x8000;
      _UNK_09b7 = 0x8080;
      _UNK_09b9 = 0x8080;
      _UNK_09bb = 0x8080;
      _UNK_09bd = 0x8080;
      _UNK_09bf = 0x8080;
      _UNK_09c1 = 0x8080;
      _UNK_09c3 = 0x8080;
      _UNK_09c5 = 0x8080;
      UNK_095c = 0x80;
      UNK_095d = 0x80;
      UNK_0979 = 0x80;
      UNK_097a = 0x80;
      UNK_0938 = 0x80;
      UNK_0970 = 0x80;
      UNK_0978 = 0x80;
      UNK_0a86 = 0x80;
      UNK_08ed = 0x80;
      UNK_0bbb = 0x80;
      UNK_0922 = 0xc0;
      UNK_0c03 = 0xc0;
      _UNK_08e0 = uRAM4e18;
      _UNK_0bb4 = uRAM4e18;
      UNK_0889 = UNK_0889 | 0x20;
      _UNK_08e4 = _UNK_08e2;
      UNK_08c5 = 0x7f;
      UNK_0af7 = 0x7b;
      UNK_0b21 = 1;
      UNK_0924 = 6;
      _UNK_095e = 0x1e0;
      _UNK_092a = &UNK_09c4;
      _UNK_092c = &UNK_09c4;
      _UNK_0a22 = 0;
      _UNK_0a24 = 0;
      _UNK_0a26 = 0;
      _UNK_0a28 = 0;
      UNK_0cab = UNK_0d7e + UNK_0d9d;
      if (UNK_0cab == 0x17) {
        UNK_0cab = 0x16;
      }
      else if (0x16 < UNK_0cab) {
        UNK_0cab = UNK_0cab - 0x18;
      }
      UNK_0a1c = bRAM18e0;
      if (0x16 < bRAM18e0) {
        UNK_0a1c = 0x16;
      }
      if (UNK_0a1c < 0xc) {
        if (UNK_0a1c == 0xb) {
          UNK_0a1c = 10;
        }
      }
      else {
        UNK_0a1c = UNK_0a1c - 0xc;
      }
      if (UNK_0d7b < 0x17) {
        UNK_0a1a = UNK_0d7b;
        if (UNK_0d7b == 0xb) {
          UNK_0a1a = 10;
        }
      }
      else {
        UNK_0a1a = 0x16;
      }
      if (cRAM4243 == '\x02') {
        UNK_0884 = UNK_0884 | 0x40;
      }
      UNK_0892 = UNK_0892 | 4;
      UNK_08a0 = UNK_08a0 | 0x80;
      UNK_08ae = UNK_08ae | 0x40;
      UNK_0880 = UNK_0880 | 0x80;
      UNK_088c = UNK_088c | 0x30;
      UNK_089e = UNK_089e | 0xc0;
      UNK_0a1d = UNK_0a1c;
      UNK_0a1e = UNK_0a1c;
      UNK_0a1f = UNK_0a1c;
      *(undefined2 *)(sVar11 + -2) = 0x521f;
      (*(code *)0x56b4)();
      _UNK_08e8 = _UNK_0e3e;
      _UNK_08ea = _UNK_0e3e;
      uVar5 = _UNK_0e3e;
      if ((char)(_UNK_0e3e >> 8) == -1) {
        uVar5 = 0xfe00;
      }
      UNK_0ae9 = (undefined1)(uVar5 >> 8);
      _UNK_08d0 = _UNK_0e3e >> 6;
      _UNK_0c86 = _UNK_0e40;
      _UNK_08f2 = _UNK_0e40;
      _UNK_0cb4 = _UNK_0e40;
      _UNK_0cb6 = _UNK_0e40;
      _UNK_0cc8 = _UNK_0e40;
      _UNK_0cca = _UNK_0e40;
      _UNK_0cc6 = _UNK_0e40;
      UNK_08d8 = UNK_0e44;
      UNK_08d9 = UNK_0e46;
      UNK_0bce = UNK_0e46;
      _UNK_08da = (ushort)UNK_0e46 << 8;
      uVar6 = (ushort)UNK_0e46 << 8;
      uVar5 = uVar6 / 0xf0;
      if (0xfe < uVar5) {
        uVar5 = 0xfe;
      }
      UNK_0aec = (undefined1)uVar5;
      UNK_08dd = UNK_0e48;
      _UNK_08d2 = CONCAT11(UNK_0e4a,UNK_0aec);
      UNK_08d6 = UNK_0e4a;
      UNK_0880 = UNK_0880 | 0x30;
      DAT_0085 = 0;
      _UNK_08d4 = _UNK_08d2;
      _UNK_08e6 = _UNK_08d0;
      _UNK_09d0 = _UNK_08d0;
      _UNK_0b0e = _UNK_08d0;
      _UNK_0b10 = _UNK_08d0;
      _UNK_0b12 = _UNK_08d0;
      _UNK_0b14 = _UNK_08d0;
      _UNK_0bb0 = _UNK_08d0;
      _UNK_0bb2 = _UNK_08d0;
      _UNK_0bbe = _UNK_08d0;
      _UNK_0bc0 = _UNK_08d0;
      _UNK_0bc2 = _UNK_08d0;
      _UNK_0bc4 = _UNK_08d0;
      _UNK_0bfc = _UNK_08d2;
      *(undefined2 *)(sVar11 + -2) = 0x52d6;
      (*(code *)0x5fa4)(uVar6 % 0xf0);
      *(undefined2 *)(sVar11 + -2) = 0x52e2;
      (*(code *)0xc1db)();
      UNK_0ae8 = (byte)((ushort)extraout_A * 0xa0 >> 8);
      if (0x95 < UNK_0ae8) {
        UNK_0ae8 = 0x95;
      }
      UNK_08f4 = extraout_A;
      UNK_08f6 = extraout_A;
      *(undefined2 *)(sVar11 + -2) = 0x5300;
      (*(code *)0xc1db)();
      UNK_0aeb = (byte)((ushort)extraout_A_00 * 0xa0 >> 8);
      if (0x95 < UNK_0aeb) {
        UNK_0aeb = 0x95;
      }
      UNK_0888 = UNK_0888 & 0xef;
      bVar7 = DAT_0008;
      DAT_0008 = bVar7 & 0xf3;
      _UNK_0e26 = uRAM4fa0;
      UNK_08f5 = extraout_A_00;
      if (sRAM4e86 == 0x55aa) {
        *(undefined2 *)(sVar11 + -2) = 0x532a;
        (*(code *)0x5857)();
      }
      if (sRAM4e88 == -0x55ab) {
        *(undefined2 *)(sVar11 + -2) = 0x5335;
        (*(code *)0x5c05)();
        *(undefined2 *)(sVar11 + -2) = 0x5338;
        (*(code *)0x5d4d)();
      }
      *(undefined2 *)(sVar11 + -2) = 0x533b;
      (*(code *)0x5d67)();
      *(undefined2 *)(sVar11 + -2) = 0x533e;
      (*(code *)0x5cc7)();
      *(undefined2 *)(sVar11 + -2) = 0x5341;
      (*(code *)0x592e)();
      if ((UNK_0bd5 & 8) != 0) {
        UNK_0bd2 = UNK_0bd2 | 0x40;
      }
      if (UNK_0dd5 != -0x80) {
        UNK_0d08 = UNK_0d08 | 1;
        *(undefined2 *)(sVar11 + -2) = 0x5358;
        (*(code *)0x5ef1)();
      }
      *(undefined2 *)(sVar11 + -2) = 0x535e;
      (*(code *)0xa489)();
      *(undefined2 *)(sVar11 + -2) = 0x5361;
      (*(code *)0x5fbf)();
      *(undefined2 *)(sVar11 + -2) = 0x5364;
      (*(code *)0x5fba)();
      bVar7 = UNK_004a;
      UNK_004a = bVar7 & 0xfb | 8;
      bVar7 = UNK_004b;
      UNK_004b = bVar7 & 0xeb | 0x28;
      bVar7 = DAT_004c;
      DAT_004c = bVar7 | 6;
      _UNK_0af2 = RAM0044;
      uVar4 = DAT_0001;
      _UNK_0896 = CONCAT11(uVar4,uVar4);
      _UNK_0af4 = _UNK_0af2;
      _UNK_0c00 = _UNK_0af2;
      do {
        UNK_08bc = UNK_08bc ^ 0x80;
        _UNK_0ffc = 0x539b;
        (*(code *)0x5fa3)();
        bVar7 = DAT_0020;
        if (((bVar7 & 1) != 0) && (sVar10 = RAM0024, sVar10 == -0x5aa6)) {
          uVar3 = RAM00d4;
          uVar4 = UNK_00d7;
          DAT_00d3 = 0;
          UNK_08a0 = 0x80;
          UNK_08ae = 0x40;
        }
        bVar7 = DAT_0020;
        if ((bVar7 & 4) != 0) {
          DAT_00cb = 0;
        }
        _UNK_0ffc = 0x53c5;
        (*(code *)0x6259)();
        _UNK_0ffc = 0x53c8;
        (*(code *)0x6772)();
        _UNK_0ffc = 0x53cb;
        boot_service_poll();
        _UNK_0ffc = 0x53ce;
        (*(code *)0x6299)();
        if ((UNK_0881 & 4) != 0) {
          _UNK_0ffc = 0x53d6;
          (*(code *)0x8691)();
        }
        if ((UNK_0881 & 2) != 0) {
          _UNK_0ffc = 0x53de;
          (*(code *)0x869e)();
        }
        if ((UNK_0887 & 2) != 0) {
          _UNK_0ffc = 0x53e6;
          (*(code *)0x87e7)();
        }
        if ((~UNK_0882 & 0x80) == 0) {
          _UNK_0ffc = 0x53f2;
          (*(code *)0x73a5)();
          _UNK_0a30 = _UNK_0a2e;
          _UNK_0a36 = _UNK_0a34;
          _UNK_0a32 = _UNK_0a34 >> 2;
          if (((UNK_0c03 & 0x1f) < 2) || (5 < (UNK_0c03 & 0x1f))) {
            _UNK_0ffc = 0x541c;
            (*(code *)0x54f0)();
            UNK_0924 = UNK_0de3;
            _UNK_0a94 = _UNK_0de5;
            _UNK_0aa4 = _UNK_0de7;
            _UNK_0ffc = 0x5435;
            (*(code *)0x55b6)();
          }
          if ((((((~UNK_08a0 & 4) != 0) && ((~UNK_08b2 & 0x80) != 0)) && (_UNK_08f8 < 0x2800)) &&
              (((((~UNK_0884 & 4) != 0 && ((~UNK_0d08 & 1) != 0)) &&
                (((~UNK_0884 & 2) != 0 && (((~UNK_088c & 0x80) != 0 && ((~UNK_0885 & 0x40) != 0)))))
                ) && ((~UNK_0bf8 & 0x80) != 0)))) &&
             ((((~UNK_089b & 0x80) != 0 && ((~UNK_089b & 8) != 0)) && ((~UNK_0880 & 0x40) != 0)))) {
            _UNK_0ffc = 0x5477;
            (*(code *)0x5664)();
          }
          UNK_0882 = UNK_0882 & 0x7f;
        }
        _UNK_0ffc = 0x547e;
        (*(code *)0x857d)();
        if ((UNK_0881 & 0x80) == 0) {
          UNK_0a16 = UNK_0a16 | 1;
code_r0x5494:
          _UNK_0ffc = 0x5497;
          (*(code *)0x74b8)();
        }
        else if ((UNK_0881 & 0x40) == 0) {
          UNK_0a16 = UNK_0a16 | 2;
          goto code_r0x5494;
        }
        _UNK_0ffc = 0x549a;
        (*(code *)0x6772)();
        _UNK_0ffc = 0x549d;
        (*(code *)0x6299)();
        if ((UNK_0882 & 0x40) != 0) {
          _UNK_0ffc = 0x54a5;
          (*(code *)0x8b34)();
        }
        if ((UNK_0887 & 0x20) != 0) {
          _UNK_0ffc = 0x54ad;
          (*(code *)0xa557)();
        }
        if ((UNK_0882 & 4) != 0) {
          _UNK_0ffc = 0x54b5;
          (*(code *)0xa564)();
        }
        if ((UNK_088e & 0x80) != 0) {
          _UNK_0ffc = 0x54bd;
          (*(code *)0xac7f)();
        }
        if ((UNK_0882 & 0x20) != 0) {
          _UNK_0ffc = 0x54c5;
          (*(code *)0xaff9)();
        }
        if ((UNK_0882 & 0x10) != 0) {
          _UNK_0ffc = 0x54cd;
          (*(code *)0xb166)();
        }
        if ((UNK_0882 & 8) != 0) {
          _UNK_0ffc = 0x54d5;
          (*(code *)0xb817)();
        }
        if ((UNK_0882 & 2) != 0) {
          _UNK_0ffc = 0x54dd;
          (*(code *)0xbc2e)();
        }
        if ((UNK_0887 & 0x80) != 0) {
          _UNK_0ffc = 0x54e5;
          (*(code *)0xc063)();
        }
        if ((UNK_0887 & 0x40) != 0) {
          _UNK_0ffc = 0x54ed;
          (*(code *)0xc199)();
        }
      } while( true );
    }
    DAT_0022 = 0x5a;
  }
  do {
    bVar7 = DAT_0020;
    if ((bVar7 & 0x80) != 0) {
      bVar7 = UNK_0802;
      if ((UNK_0802 != 1) &&
         ((sVar10 = RAM0024, sVar10 != -0x5aa6 ||
          ((0xc < UNK_0802 && (cVar2 = DAT_0022, cVar2 != 'Z')))))) {
        bVar7 = 0;
        UNK_0803 = 0;
      }
      pcVar1 = *(code **)((byte)(bVar7 << 1) - 0xd0);
      *(undefined2 *)(sVar11 + -2) = 0xf8c7;
      (*pcVar1)();
      bVar7 = DAT_0020;
      DAT_0020 = bVar7 & 0x7f;
      bVar7 = DAT_0020;
      if ((bVar7 & 0x40) == 0) {
        bVar7 = DAT_0020;
        if ((bVar7 & 1) != 0) {
          _UNK_0800 = 1;
          DAT_0023 = UNK_0802;
          bVar7 = DAT_0020;
          if ((~bVar7 & 4) != 0) {
            uVar4 = DAT_00cc;
            DAT_00cf = UNK_0802;
            DAT_00cb = 0x88;
          }
        }
      }
      else {
        bVar7 = DAT_0020;
        if ((~bVar7 & 4) != 0) {
          DAT_00cb = 0x24;
        }
        bVar7 = DAT_0020;
        DAT_0020 = bVar7 & 0xbf;
      }
    }
    *(undefined2 *)(sVar11 + -2) = 0xf8fd;
    boot_periodic_service();
    cVar2 = DAT_0022;
  } while (cVar2 == 'Z');
  return;
}



/* F8A0 boot_service_poll */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void boot_service_poll(void)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  byte bVar4;
  
  do {
    bVar4 = DAT_0020;
    if ((bVar4 & 0x80) != 0) {
      bVar4 = UNK_0802;
      if (UNK_0802 != 1) {
        sVar2 = RAM0024;
        if (sVar2 == -0x5aa6) {
          if (0xc < UNK_0802) {
            cVar1 = DAT_0022;
            if (cVar1 != 'Z') goto LAB_f8bf;
          }
        }
        else {
LAB_f8bf:
          bVar4 = 0;
          UNK_0803 = 0;
        }
      }
      (**(code **)((byte)(bVar4 << 1) - 0xd0))();
      bVar4 = DAT_0020;
      DAT_0020 = bVar4 & 0x7f;
      bVar4 = DAT_0020;
      if ((bVar4 & 0x40) == 0) {
        bVar4 = DAT_0020;
        if ((bVar4 & 1) != 0) {
          _UNK_0800 = 1;
          DAT_0023 = UNK_0802;
          bVar4 = DAT_0020;
          if ((~bVar4 & 4) != 0) {
            uVar3 = DAT_00cc;
            DAT_00cf = UNK_0802;
            DAT_00cb = 0x88;
          }
        }
      }
      else {
        bVar4 = DAT_0020;
        if ((~bVar4 & 4) != 0) {
          DAT_00cb = 0x24;
        }
        bVar4 = DAT_0020;
        DAT_0020 = bVar4 & 0xbf;
      }
    }
    boot_periodic_service();
    cVar1 = DAT_0022;
    if (cVar1 != 'Z') {
      return;
    }
  } while( true );
}



/* F904 FUN_f904 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_f904(void)

{
  byte bVar1;
  short sVar2;
  
  sVar2 = RAM0024;
  if (sVar2 != -0x5aa6) {
    bVar1 = DAT_0020;
    DAT_0020 = bVar1 | 0x40;
  }
  UNK_0802 = 0;
  _UNK_0804 = 5;
  return;
}



/* F913 FUN_f913 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_f913(undefined1 param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  
  bVar1 = DAT_0026;
  sVar3 = CONCAT11(bVar1,param_1);
  if (bVar1 < 3) {
    cVar2 = DAT_0026;
    DAT_0026 = cVar2 + '\x01';
    psVar4 = (short *)&UNK_0806;
    psVar5 = (short *)0xff10;
    do {
      sVar3 = *psVar4;
      psVar6 = psVar5 + 1;
      if (sVar3 != *psVar5) goto LAB_f90b;
      psVar4 = psVar4 + 1;
      psVar5 = psVar6;
    } while (psVar6 != (short *)0xff20);
    RAM0024 = 0xa55a;
    DAT_0026 = 0;
    UNK_0803 = 0;
    bVar1 = DAT_0020;
    DAT_0020 = bVar1 | 1;
    sVar3 = 0x5a;
    DAT_00d3 = 0;
  }
  else {
LAB_f90b:
    bVar1 = DAT_0020;
    DAT_0020 = bVar1 | 0x40;
    UNK_0802 = 0;
  }
  _UNK_0804 = 5;
  return sVar3;
}



/* F945 FUN_f945 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_f945(void)

{
  byte bVar1;
  undefined1 uVar2;
  
  if (UNK_0803 == '\x01') {
    DAT_0012 = 0x11;
    DAT_0022 = 0x5a;
    DAT_0048 = 0;
    DAT_0049 = 0;
    DAT_004c = 0;
    DAT_0040 = 0;
    DAT_0038 = 0;
    DAT_00d8 = 0;
    DAT_00d3 = 0;
    DAT_00c4 = 0;
    DAT_0082 = 0;
    UNK_0803 = '\0';
  }
  else if (UNK_0803 == '\x02') {
    DAT_0023 = 2;
    bVar1 = DAT_0020;
    if ((~bVar1 & 4) != 0) {
      uVar2 = DAT_00cc;
      DAT_00cf = 2;
      DAT_00cb = 0x88;
    }
    DAT_003f = 0x55;
    DAT_003f = 0xaa;
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 ^ 0x10;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}



/* F99A FUN_f99a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_f99a(void)

{
  _UNK_0804 = (undefined *)0x7;
  if ((((UNK_0803 != '\0') && (_UNK_0804 = (undefined *)0x15, UNK_0803 != '\x01')) &&
      (_UNK_0804 = &UNK_0205, UNK_0803 != '\x02')) &&
     ((_UNK_0804 = &UNK_0805, UNK_0803 != '\x03' && (_UNK_0804 = &UNK_0105, UNK_0803 != '\x04')))) {
    _UNK_0804 = &UNK_0405;
  }
  UNK_0803 = 0;
  return;
}



/* F9C8 FUN_f9c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_f9c8(void)

{
  char cVar1;
  
  if ((_UNK_0806 != (short *)&UNK_0820) ||
     ((_UNK_0808 == 0x5aa5 && (cVar1 = DAT_0022, cVar1 == 'Z')))) {
    if (UNK_0803 == '\0') {
      *(char *)_UNK_0806 = (char)_UNK_0808;
    }
    else {
      *_UNK_0806 = _UNK_0808;
    }
    UNK_0803 = '\0';
  }
  _UNK_0804 = 5;
  return;
}



/* F9E9 FUN_f9e9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_f9e9(void)

{
  byte bVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  if ((short)((ushort)UNK_0803 << 8) < 0) {
    bVar1 = UNK_0803 & 0x7f;
    DAT_0027 = bVar1;
  }
  else {
    DAT_0027 = UNK_0803;
    puVar3 = (undefined2 *)((ushort)UNK_0803 << 8);
    DAT_0012 = 0x11;
    puVar5 = (undefined2 *)&UNK_1000;
    cVar2 = -0x80;
    do {
      *puVar5 = *puVar3;
      puVar5[1] = puVar3[1];
      puVar5[2] = puVar3[2];
      puVar5[3] = puVar3[3];
      puVar5[4] = puVar3[4];
      puVar5[5] = puVar3[5];
      puVar4 = puVar3 + 7;
      puVar6 = puVar5 + 7;
      puVar5[6] = puVar3[6];
      puVar3 = puVar3 + 8;
      puVar5 = puVar5 + 8;
      *puVar6 = *puVar4;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    bVar1 = DAT_0027;
  }
  DAT_0012 = bVar1 | 1;
  UNK_0803 = 0;
  _UNK_0804 = 5;
  return;
}



/* FA35 FUN_fa35 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fa35(void)

{
  byte bVar1;
  char cVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  
  DAT_0012 = 0x11;
  if (UNK_0803 == '\0') {
    _UNK_0804 = 5;
    return;
  }
  bVar1 = DAT_0020;
  DAT_0020 = bVar1 | 0x20;
  UNK_0103 = 1;
  UNK_0803 = '\0';
  bVar1 = DAT_0027;
  psVar5 = (short *)&UNK_1000;
  psVar6 = (short *)((ushort)bVar1 << 8);
  do {
    psVar3 = psVar5 + 1;
    if (*psVar5 != *psVar6) {
      FUN_fae1((short *)((ushort)bVar1 << 8));
      if (UNK_0803 != '\0') {
        _UNK_0804 = 5;
        return;
      }
      break;
    }
    psVar5 = psVar3;
    psVar6 = psVar6 + 1;
  } while (psVar3 != (short *)&UNK_1200);
  cVar2 = DAT_0027;
  psVar3 = (short *)((ushort)(byte)(cVar2 + 2) << 8);
  psVar5 = (short *)&UNK_1200;
  psVar6 = psVar3;
  do {
    psVar4 = psVar5 + 1;
    if (*psVar5 != *psVar6) {
      FUN_fae1(psVar3);
      if (UNK_0803 != '\0') {
        _UNK_0804 = 5;
        return;
      }
      break;
    }
    psVar5 = psVar4;
    psVar6 = psVar6 + 1;
  } while (psVar4 != (short *)&UNK_1400);
  cVar2 = DAT_0027;
  psVar3 = (short *)((ushort)(byte)(cVar2 + 4) << 8);
  psVar5 = (short *)&UNK_1400;
  psVar6 = psVar3;
  do {
    psVar4 = psVar5 + 1;
    if (*psVar5 != *psVar6) {
      FUN_fae1(psVar3);
      if (UNK_0803 != '\0') {
        _UNK_0804 = 5;
        return;
      }
      break;
    }
    psVar5 = psVar4;
    psVar6 = psVar6 + 1;
  } while (psVar4 != (short *)&UNK_1600);
  cVar2 = DAT_0027;
  psVar3 = (short *)((ushort)(byte)(cVar2 + 6) << 8);
  psVar5 = (short *)&UNK_1600;
  psVar6 = psVar3;
  do {
    psVar4 = psVar5 + 1;
    if (*psVar5 != *psVar6) {
      FUN_fae1(psVar3);
      break;
    }
    psVar5 = psVar4;
    psVar6 = psVar6 + 1;
  } while (psVar4 != (short *)0x1800);
  if (UNK_0803 == '\0') {
    bVar1 = DAT_0020;
    DAT_0020 = bVar1 & 0xdf;
  }
  _UNK_0804 = 5;
  return;
}



/* FAE1 FUN_fae1 */

/* WARNING: Instruction at (RAM,0xfb5c) overlaps instruction at (RAM,0xfb5b)
    */

void FUN_fae1(short param_1,short *param_2,short *param_3)

{
  byte bVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  
  psVar3 = param_3;
  psVar5 = param_2;
  while( true ) {
    *psVar5 = param_1;
    UNK_0106 = 0x40;
    UNK_0105 = 0x80;
    while (bVar1 = UNK_0105, (~bVar1 & 0x40) != 0) {
      param_1 = boot_periodic_service();
    }
    bVar1 = UNK_0105;
    if ((bVar1 & 0x10) == 0) break;
    param_1 = CONCAT11(0x10,(char)param_1);
    bVar1 = DAT_0020;
    if ((~bVar1 & 0x10) == 0) goto LAB_fb33;
    UNK_0105 = 0x10;
    bVar1 = DAT_0020;
    DAT_0020 = bVar1 | 0x10;
  }
  bVar1 = DAT_0020;
  DAT_0020 = bVar1 & 0xef;
  sVar2 = 0x100;
  while( true ) {
    psVar4 = psVar3 + 1;
    psVar6 = psVar5 + 1;
    *psVar5 = *psVar3;
    UNK_0106 = 0x20;
    UNK_0105 = 0x80;
    while (bVar1 = UNK_0105, (~bVar1 & 0x80) != 0) {
      sVar2 = boot_periodic_service();
    }
    bVar1 = UNK_0105;
    if ((bVar1 & 0x10) != 0) break;
    sVar2 = sVar2 + -1;
    psVar3 = psVar4;
    psVar5 = psVar6;
    if (sVar2 == 0) {
      do {
        bVar1 = UNK_0105;
      } while ((bVar1 & 0x40) == 0);
      psVar3 = param_3;
      do {
        psVar5 = psVar3 + 1;
        if (*psVar3 != *param_2) {
          UNK_0803 = 0;
          return;
        }
        psVar3 = psVar5;
        param_2 = param_2 + 1;
      } while (psVar5 != param_3 + 0x100);
      UNK_0803 = 0;
      return;
    }
  }
  param_1 = 0x2000;
LAB_fb33:
  UNK_0803 = (char)((ushort)param_1 >> 8);
  UNK_0105 = 0x10;
  return;
}



/* FB63 FUN_fb63 */

/* WARNING: Instruction at (RAM,0xfbfa) overlaps instruction at (RAM,0xfbf9)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fb63(void)

{
  byte bVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  short *psVar5;
  undefined2 *puVar7;
  undefined2 *puVar8;
  short *psVar9;
  short *psVar6;
  
  bVar1 = DAT_0020;
  DAT_0020 = bVar1 | 0x20;
  UNK_0103 = 1;
  sVar2 = (ushort)(byte)(UNK_0803 + 6) << 8;
  do {
    while( true ) {
      *(short *)sVar2 = sVar2;
      UNK_0106 = 0x40;
      UNK_0105 = 0x80;
      while (bVar1 = UNK_0105, (~bVar1 & 0x40) != 0) {
        sVar2 = boot_periodic_service();
      }
      bVar1 = UNK_0105;
      if ((bVar1 & 0x10) == 0) break;
      sVar2 = CONCAT11(0x10,(char)sVar2);
      bVar1 = DAT_0020;
      if ((~bVar1 & 0x10) == 0) goto LAB_fbd0;
      UNK_0105 = 0x10;
      bVar1 = DAT_0020;
      DAT_0020 = bVar1 | 0x10;
    }
    bVar1 = DAT_0020;
    DAT_0020 = bVar1 & 0xef;
    bVar1 = (char)((ushort)sVar2 >> 8) - 2;
    sVar2 = CONCAT11(bVar1,(char)sVar2);
  } while (UNK_0803 <= bVar1);
  puVar3 = (undefined2 *)&UNK_1000;
  puVar7 = (undefined2 *)((ushort)UNK_0803 << 8);
  while( true ) {
    puVar4 = puVar3 + 1;
    puVar8 = puVar7 + 1;
    *puVar7 = *puVar3;
    UNK_0106 = 0x20;
    UNK_0105 = 0x80;
    while (bVar1 = UNK_0105, (~bVar1 & 0x80) != 0) {
      boot_periodic_service();
    }
    bVar1 = UNK_0105;
    if ((bVar1 & 0x10) != 0) break;
    puVar3 = puVar4;
    puVar7 = puVar8;
    if (puVar4 == (undefined2 *)0x1800) {
      do {
        bVar1 = UNK_0105;
      } while ((bVar1 & 0x40) == 0);
      psVar5 = (short *)&UNK_1000;
      psVar9 = (short *)((ushort)UNK_0803 << 8);
      do {
        psVar6 = psVar5 + 1;
        if (*psVar5 != *psVar9) {
          UNK_0803 = 0x40;
          _UNK_0804 = 5;
          return;
        }
        psVar5 = psVar6;
        psVar9 = psVar9 + 1;
      } while (psVar6 != (short *)0x1800);
      bVar1 = DAT_0020;
      DAT_0020 = bVar1 & 0xdf;
      UNK_0803 = 0;
      _UNK_0804 = 5;
      return;
    }
  }
  sVar2 = 0x2000;
LAB_fbd0:
  UNK_0105 = 0x10;
  UNK_0803 = (char)((ushort)sVar2 >> 8);
  _UNK_0804 = 5;
  return;
}



/* FBFE FUN_fbfe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fbfe(void)

{
  byte bVar1;
  undefined1 extraout_A;
  code *pcVar2;
  undefined2 *puVar4;
  code *pcVar3;
  
  bVar1 = DAT_0020;
  if (((bVar1 & 1) == 0) || (_UNK_0820 == 0x5aa5)) {
    pcVar2 = flash_ram_template_a;
    puVar4 = (undefined2 *)&UNK_0c00;
    do {
      pcVar3 = pcVar2 + 2;
      *puVar4 = *(undefined2 *)pcVar2;
      pcVar2 = pcVar3;
      puVar4 = puVar4 + 1;
    } while (pcVar3 < (code *)0xfcc1);
    (*(code *)&UNK_0c00)();
    UNK_0803 = extraout_A;
  }
  else {
    UNK_0803 = 0x80;
  }
  _UNK_0804 = 5;
  return;
}



/* FC1F FUN_fc1f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fc1f(void)

{
  byte bVar1;
  undefined1 extraout_A;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  undefined2 *puVar6;
  code *pcVar5;
  
  bVar1 = DAT_0020;
  if (((bVar1 & 1) == 0) || (_UNK_0820 == 0x5aa5)) {
    pcVar4 = flash_ram_template_b;
    puVar6 = (undefined2 *)&UNK_0c00;
    do {
      pcVar5 = pcVar4 + 2;
      *puVar6 = *(undefined2 *)pcVar4;
      pcVar4 = pcVar5;
      puVar6 = puVar6 + 1;
    } while (pcVar5 < (code *)0xfd1d);
    uVar2 = (ushort)UNK_0803 << 8;
    uVar3 = uVar2;
    if (uVar2 < 0x8000) {
      uVar3 = CONCAT11(UNK_0803,1);
    }
    UNK_0103 = (char)uVar3;
    (*(code *)&UNK_0c00)(uVar2,0x1000);
    UNK_0803 = extraout_A;
  }
  else {
    UNK_0803 = 0x80;
  }
  _UNK_0804 = 5;
  return;
}



/* FC5D flash_ram_template_a */

void flash_ram_template_a(void)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  
  sVar3 = -0xa00;
  UNK_0103 = 0;
  do {
    while( true ) {
      *(short *)sVar3 = sVar3;
      UNK_0106 = 0x40;
      UNK_0105 = 0x80;
      while (bVar1 = UNK_0105, (~bVar1 & 0x40) != 0) {
        bVar1 = DAT_0067;
        if ((bVar1 & 0x80) != 0) {
          bVar1 = DAT_0066;
          DAT_0066 = bVar1 | 8;
          bVar1 = DAT_0067;
          DAT_0067 = bVar1 | 0x80;
          DAT_003f = 0x55;
          DAT_003f = 0xaa;
          bVar1 = DAT_0000;
          DAT_0000 = bVar1 ^ 0x10;
        }
      }
      bVar1 = UNK_0105;
      if ((bVar1 & 0x10) == 0) break;
      UNK_0105 = 0x10;
      sVar3 = 0x1000;
      bVar1 = DAT_0020;
      if ((~bVar1 & 0x10) == 0) {
        return;
      }
      bVar1 = DAT_0020;
      DAT_0020 = bVar1 | 0x10;
    }
    bVar1 = DAT_0020;
    DAT_0020 = bVar1 & 0xef;
    bVar1 = (char)((ushort)sVar3 >> 8) - 2;
    sVar3 = (ushort)bVar1 << 8;
    if (bVar1 == 0x7e) {
      UNK_0103 = 1;
    }
  } while (0x17 < bVar1);
  uVar2 = DAT_0020;
  return;
}



/* FCC0 flash_ram_template_b */

/* WARNING: Instruction at (RAM,0xfd19) overlaps instruction at (RAM,0xfd18)
    */

void flash_ram_template_b(undefined2 *param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  short *psVar3;
  short *psVar5;
  short *psVar4;
  
  while( true ) {
    puVar2 = param_2 + 1;
    *param_1 = *param_2;
    UNK_0106 = 0x20;
    UNK_0105 = 0x80;
    while (bVar1 = UNK_0105, (~bVar1 & 0x80) != 0) {
      bVar1 = DAT_0067;
      if ((bVar1 & 0x80) != 0) {
        bVar1 = DAT_0066;
        DAT_0066 = bVar1 | 8;
        bVar1 = DAT_0067;
        DAT_0067 = bVar1 | 0x80;
        DAT_003f = 0x55;
        DAT_003f = 0xaa;
        bVar1 = DAT_0000;
        DAT_0000 = bVar1 ^ 0x10;
      }
    }
    bVar1 = UNK_0105;
    if ((bVar1 & 0x10) != 0) break;
    param_2 = puVar2;
    param_1 = param_1 + 1;
    if (puVar2 == (undefined2 *)0x1800) {
      do {
        bVar1 = UNK_0105;
      } while ((bVar1 & 0x40) == 0);
      psVar3 = (short *)&UNK_1000;
      psVar5 = (short *)((ushort)UNK_0803 << 8);
      do {
        psVar4 = psVar3 + 1;
        if (*psVar3 != *psVar5) {
          return;
        }
        psVar3 = psVar4;
        psVar5 = psVar5 + 1;
      } while (psVar4 != (short *)0x1800);
      return;
    }
  }
  UNK_0105 = 0x10;
  return;
}



/* FD1C FUN_fd1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_fd1c(void)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  short *psVar4;
  char *pcVar6;
  char *pcVar7;
  short *psVar5;
  
  if ((UNK_0803 != 'Z') || (bVar1 = DAT_00e0, (~bVar1 & 2) == 0)) {
    return;
  }
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 & 0xfb;
  UNK_0803 = 0;
  _UNK_0800 = 1;
  DAT_0023 = 0xf;
  bVar1 = DAT_0020;
  if ((~bVar1 & 4) != 0) {
    uVar2 = DAT_00cc;
    DAT_00cf = 0xf;
    DAT_00cb = 0x88;
  }
  while (bVar1 = DAT_00e0, (~bVar1 & 2) != 0) {
    boot_periodic_service();
  }
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 | 4;
  sVar3 = 0;
  psVar4 = (short *)0x1800;
  do {
    psVar5 = psVar4 + 1;
    sVar3 = sVar3 + *psVar4;
    psVar4 = psVar5;
  } while (psVar5 != (short *)0x0);
  if (sVar3 == -0x55ab) {
    pcVar7 = &UNK_0800;
    do {
      *pcVar7 = -0x56;
      pcVar6 = pcVar7 + 1;
      if (*pcVar7 != -0x56) goto LAB_fd83;
      pcVar7 = pcVar6;
    } while (pcVar6 != &UNK_1000);
    pcVar7 = &UNK_0800;
    do {
      *pcVar7 = 'U';
      pcVar6 = pcVar7 + 1;
      if (*pcVar7 != 'U') goto LAB_fd83;
      pcVar7 = pcVar6;
    } while (pcVar6 != &UNK_1000);
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 & 0xfb;
  }
LAB_fd83:
  DAT_003f = 0x55;
  DAT_003f = 0xaa;
  bVar1 = DAT_0000;
  DAT_0000 = bVar1 ^ 0x10;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* FD92 boot_periodic_service */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 boot_periodic_service(undefined2 param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = DAT_0067;
  if ((bVar1 & 0x80) != 0) {
    bVar1 = DAT_0066;
    DAT_0066 = bVar1 | 8;
    bVar1 = DAT_0067;
    DAT_0067 = bVar1 | 0x80;
    DAT_003f = 0x55;
    DAT_003f = 0xaa;
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 ^ 0x10;
    bVar1 = DAT_0020;
    if ((bVar1 & 2) != 0) {
      cVar2 = DAT_0021;
      DAT_0021 = cVar2 + -1;
      if ((char)(cVar2 + -1) == '\0') {
        bVar1 = DAT_0020;
        DAT_0020 = bVar1 & 0xfd;
        _UNK_0800 = 0;
        DAT_0023 = 0;
      }
    }
  }
  return param_1;
}



/* FDC3 boot_sci0_interrupt */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 boot_sci0_interrupt(undefined1 param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 in_stack_00000001;
  
  puVar8 = _UNK_0800;
  bVar1 = DAT_00cb;
  if ((~bVar1 & 4) != 0) {
    bVar1 = DAT_00cb;
    if ((~bVar1 & 0x40) == 0) {
      bVar1 = DAT_0020;
      if ((~bVar1 & 4) != 0) {
        DAT_00cb = 0x24;
      }
      _UNK_0800 = (undefined *)0x0;
      DAT_0023 = 0;
      return CONCAT11(param_1,in_stack_00000001);
    }
    uVar3 = DAT_00cc;
    _UNK_0800 = _UNK_0800 + 1;
    if ((undefined *)0x4 < _UNK_0800) {
      if (_UNK_0800 == _UNK_0804) {
        cVar2 = DAT_0023;
        DAT_00cf = -cVar2;
        return CONCAT11(param_1,in_stack_00000001);
      }
      if (_UNK_0804 <= _UNK_0800) {
        bVar1 = DAT_0020;
        if ((~bVar1 & 4) != 0) {
          DAT_00cb = 0x48;
        }
        return CONCAT11(param_1,in_stack_00000001);
      }
      if (UNK_0802 == '\x03') {
        pcVar6 = puVar8 + _UNK_0806 + -4;
        goto LAB_fdf6;
      }
    }
    pcVar6 = &UNK_0802 + (short)puVar8;
LAB_fdf6:
    DAT_00cf = *pcVar6;
    cVar2 = DAT_0023;
    DAT_0023 = *pcVar6 + cVar2;
    return CONCAT11(param_1,in_stack_00000001);
  }
  bVar4 = DAT_00cc;
  bVar5 = DAT_00cf;
  bVar1 = DAT_00cb;
  if ((~bVar1 & 0x10) == 0) goto LAB_fe80;
  if ((bVar4 & 0xe) != 0) {
    UNK_0803 = 0x40;
    goto code_r0xfe8f;
  }
  if (_UNK_0800 == (undefined *)0x0) {
    if (bVar5 < 0x10) {
      bVar1 = DAT_0020;
      DAT_0020 = bVar1 | 2;
      goto LAB_fe38;
    }
  }
  else {
LAB_fe38:
    DAT_0021 = 0x21;
    puVar8 = _UNK_0800 + 1;
    if (puVar8 < (undefined *)0x5) {
      pbVar7 = (byte *)(&UNK_0802 + (short)_UNK_0800);
      goto LAB_fe74;
    }
    puVar9 = puVar8;
    if (puVar8 < (undefined *)0x6) {
      if ((&UNK_0805 < _UNK_0804) || (0x1f < (byte)_UNK_0804)) goto LAB_fe8c_1;
      puVar9 = (undefined *)0x5;
    }
    if (UNK_0804 == '\0') {
      pbVar7 = (byte *)(&UNK_0802 + (short)_UNK_0800);
    }
    else {
      pbVar7 = _UNK_0800 + 0xffc;
    }
    if (puVar9 < _UNK_0804) {
LAB_fe74:
      _UNK_0800 = puVar8;
      *pbVar7 = bVar5;
      cVar2 = DAT_0023;
      DAT_0023 = bVar5 + cVar2;
      return CONCAT11(param_1,in_stack_00000001);
    }
    cVar2 = DAT_0023;
    _UNK_0800 = puVar8;
    if ((byte)(bVar5 + cVar2) == '\0') {
LAB_fe80:
      DAT_00cb = 0;
      bVar1 = DAT_0020;
      DAT_0020 = bVar1 | 0x80;
      bVar1 = DAT_0020;
      DAT_0020 = bVar1 & 0xfd;
      return CONCAT11(param_1,in_stack_00000001);
    }
  }
LAB_fe8c_1:
  _UNK_0800 = puVar8;
  UNK_0803 = 0x20;
code_r0xfe8f:
  UNK_0802 = 0;
  DAT_00cb = 0x14;
  return CONCAT11(param_1,in_stack_00000001);
}



/* FE9A boot_default_interrupt */

void boot_default_interrupt(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


