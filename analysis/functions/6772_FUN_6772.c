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
  else {
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
  return puVar8;
}


