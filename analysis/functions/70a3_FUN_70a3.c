/* Entry 70a3 */

void FUN_70a3(undefined2 param_1)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte extraout_A;
  undefined1 uVar6;
  ushort uVar7;
  
  cVar3 = DAT_0d58;
  bVar5 = (byte)((ushort)param_1 >> 8);
  if (((cVar3 != -0x80) && (bVar1 = DAT_08a0, (~bVar1 & 4) == 0)) &&
     (bVar1 = DAT_08b2, (~bVar1 & 0x80) == 0)) {
    if ((bVar5 < 7) || (0xf7 < bVar5)) {
      bVar5 = DAT_08b5;
      if ((bVar5 & 0x10) == 0) {
        bVar5 = DAT_08b5;
        DAT_08b5 = bVar5 | 0x10;
        bVar5 = DAT_0bac;
        DAT_0bac = bVar5 | 0x80;
      }
      else {
        bVar5 = DAT_0b41;
        bVar1 = DAT_0d8a;
        if ((bVar1 < bVar5) && (bVar5 = DAT_08b0, (~bVar5 & 0x80) == 0)) {
          bVar5 = DAT_08b0;
          DAT_08b0 = bVar5 | 0x80;
          bVar5 = DAT_0bd2;
          DAT_0bd2 = bVar5 | 0x40;
          bVar5 = DAT_08b9;
          if ((~bVar5 & 0x80) == 0) {
            bVar5 = DAT_08b9;
            DAT_08b9 = bVar5 | 0x80;
            bVar5 = DAT_0bd2;
            DAT_0bd2 = bVar5 | 4;
          }
        }
      }
    }
    else {
      bVar5 = DAT_08b5;
      if ((bVar5 & 0x10) == 0) {
        bVar5 = DAT_0b4e;
        bVar1 = DAT_0d8a;
        if (bVar1 < bVar5) {
          bVar5 = DAT_08b0;
          if ((bVar5 & 0x80) != 0) {
            bVar5 = DAT_08b0;
            DAT_08b0 = bVar5 & 0x7f;
            bVar5 = DAT_0bd2;
            DAT_0bd2 = bVar5 | 0x40;
          }
          bVar5 = DAT_0bac;
          DAT_0bac = bVar5 & 0x7f;
        }
      }
      else {
        bVar5 = DAT_08b5;
        DAT_08b5 = bVar5 & 0xef;
      }
    }
  }
  uVar2 = DAT_08ca;
  RAM08d6 = uVar2;
  uVar2 = RAM08d6;
  FUN_c276();
  DAT_08f6 = extraout_A;
  uVar7 = (ushort)extraout_A * 0xa0;
  if (0x95ff < uVar7) {
    uVar7 = CONCAT11(0x95,(char)uVar7);
  }
  DAT_0ae8 = (char)(uVar7 >> 8);
  bVar5 = DAT_08a0;
  if (((~bVar5 & 4) != 0) || (bVar5 = DAT_08b0, uVar6 = DAT_4e64, (bVar5 & 0x80) == 0)) {
    uVar6 = DAT_08f6;
  }
  DAT_08f4 = uVar6;
  bVar5 = DAT_0883;
  if ((~bVar5 & 0x20) == 0) {
    bVar5 = DAT_0883;
    DAT_0883 = bVar5 | 0x20;
    uVar7 = lookup_u8_uniform_axis((uchar)uVar7,&UNK_1996);
    DAT_0a08 = (char)(uVar7 >> 8);
    bVar5 = DAT_0884;
    if ((~bVar5 & 8) == 0) {
      bVar5 = DAT_0884;
      DAT_0884 = bVar5 | 8;
      uVar7 = lookup_u8_uniform_axis((uchar)uVar7,&UNK_32ef);
      DAT_0994 = uVar7;
      uVar7 = lookup_u8_uniform_axis((uchar)uVar7,&UNK_3301);
      DAT_0996 = uVar7;
    }
  }
  bVar5 = DAT_08a0;
  if ((bVar5 & 4) != 0) {
    cVar3 = DAT_0bdd;
    cVar4 = DAT_0d4b;
    if (cVar3 == cVar4) goto LAB_71cd;
  }
  bVar5 = DAT_08b0;
  if (((bVar5 & 0x80) == 0) || (bVar5 = DAT_0881, (~bVar5 & 0x10) != 0)) {
    bVar5 = DAT_08f4;
    if (DAT_4bfe <= bVar5) {
      if ((bVar5 == DAT_4bff) || (bVar5 < DAT_4bff)) goto LAB_71cd;
      goto LAB_71c5;
    }
  }
  else {
    bVar5 = DAT_0abe;
    if (bVar5 < DAT_4c00) {
LAB_71c5:
      bVar5 = DAT_00f0;
      DAT_00f0 = bVar5 | 4;
      goto LAB_71cd;
    }
    if (bVar5 <= DAT_4c01) goto LAB_71cd;
  }
  bVar5 = DAT_00f0;
  DAT_00f0 = bVar5 & 0xfb;
LAB_71cd:
  DAT_08c2 = 1;
  DAT_08c3 = 0;
  return;
}


