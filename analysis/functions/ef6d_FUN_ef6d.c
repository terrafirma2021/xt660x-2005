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


