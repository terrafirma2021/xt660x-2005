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
  if (((~bVar2 & 8) != 0) || (bVar2 = DAT_089a, (~bVar2 & 8) != 0)) {
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


