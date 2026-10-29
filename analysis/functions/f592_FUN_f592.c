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
  if ((((cVar5 == '\t') || (bVar2 = DAT_088c, (~bVar2 & 0x10) != 0)) ||
      (bVar2 = DAT_088c, (~bVar2 & 4) != 0)) ||
     ((bVar2 = DAT_089a, (~bVar2 & 4) != 0 || (bVar2 = DAT_08b1, (bVar2 & 0x80) != 0)))) {
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


