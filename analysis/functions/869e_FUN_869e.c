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


