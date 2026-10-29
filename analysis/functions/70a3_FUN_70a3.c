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


