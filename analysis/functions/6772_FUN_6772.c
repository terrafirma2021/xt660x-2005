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


