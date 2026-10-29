/* Entry 73a5 */

void FUN_73a5(void)

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
  
  bVar2 = DAT_08bc;
  DAT_08bc = bVar2 | 0x10;
  bVar2 = DAT_0921;
  if (0x3f < bVar2) {
    DAT_0a44 = 0xffff;
    uVar5 = 0x1e0;
    goto LAB_7416;
  }
  uVar5 = DAT_0a38;
  uVar9 = DAT_0a3a;
  if (CARRY2(uVar5,uVar9)) {
LAB_73c4:
    sVar6 = -1;
  }
  else {
    uVar3 = DAT_0a3c;
    uVar1 = uVar5 + uVar9 + uVar3;
    if (CARRY2(uVar5 + uVar9,uVar3)) goto LAB_73c4;
    uVar9 = DAT_0a3e;
    uVar5 = uVar1 + uVar9;
    if (CARRY2(uVar1,uVar9)) goto LAB_73c4;
    uVar1 = DAT_0a40;
    uVar9 = uVar5 + uVar1;
    if (CARRY2(uVar5,uVar1)) goto LAB_73c4;
    uVar5 = DAT_0a42;
    sVar6 = uVar9 + uVar5;
    if (CARRY2(uVar9,uVar5)) goto LAB_73c4;
  }
  DAT_0a44 = sVar6;
  sVar7 = sVar6 << 1;
  if (sVar6 < 0) {
    sVar7 = -1;
  }
  DAT_0a46 = sVar7;
  uVar9 = DAT_0a44;
  uVar5 = DAT_0a34;
  sVar6 = uVar9 + uVar5;
  if (CARRY2(uVar9,uVar5)) {
    sVar6 = -1;
  }
  DAT_0a48 = sVar6;
  uVar5 = DAT_0a44;
  DAT_0dde = 0x927c / uVar5;
  uVar9 = DAT_0a44;
  bVar2 = DAT_0dde._1_1_;
  uVar5 = CONCAT11(bVar2,(char)(((uint)(0x927c % uVar5) << 0x10) / (uint)uVar9 >> 8)) << 3;
  if ((bVar2 & 0x3f) >> 5 != 0) {
    uVar5 = 0xffff;
  }
LAB_7416:
  if (0xfdff < uVar5) {
    uVar5 = 0xfe00;
  }
  DAT_08f8 = uVar5;
  if (DAT_4bec <= uVar5) {
    bVar2 = DAT_0880;
    DAT_0880 = bVar2 | 2;
    bVar2 = DAT_0bf8;
    DAT_0bf8 = bVar2 | 0x20;
  }
  bVar2 = DAT_0a4b._0_1_;
  if (bVar2 < 4) {
    DAT_0dde._0_1_ = bVar2 >> 1;
    uVar8 = RAM0a4c;
    bVar4 = (byte)((ushort)uVar8 >> 8);
    RAM0ddf = CONCAT11(bVar4 >> 1 | bVar2 << 7,(byte)uVar8 >> 1 | bVar4 << 7);
    bVar2 = DAT_0dde._0_1_;
    DAT_0dde._0_1_ = bVar2 >> 1;
    uVar8 = RAM0ddf;
    bVar4 = (byte)((ushort)uVar8 >> 8);
    uVar8 = CONCAT11(bVar4 >> 1 | bVar2 << 7,(byte)uVar8 >> 1 | bVar4 << 7);
    RAM0ddf = uVar8;
  }
  else {
    uVar8 = 0xffff;
  }
  DAT_0a80 = uVar8;
  uVar5 = DAT_0a80;
  DAT_0dde = 0x927c / uVar5;
  uVar9 = DAT_0a80;
  bVar2 = DAT_0dde._1_1_;
  uVar5 = CONCAT11(bVar2,(char)(((uint)(0x927c % uVar5) << 0x10) / (uint)uVar9 >> 8)) << 3;
  if ((bVar2 & 0x3f) >> 5 != 0) {
    uVar5 = 0xffff;
  }
  if (0xfdff < uVar5) {
    uVar5 = 0xfe00;
  }
  DAT_0906 = uVar5;
  if (DAT_18d7 == '\0') {
    uVar8 = DAT_08fe;
    DAT_0902 = uVar8;
    uVar5 = DAT_08f8;
    DAT_0900 = uVar5;
  }
  else {
    uVar5 = DAT_0906;
    DAT_0900 = uVar5;
    DAT_0902 = uVar5;
  }
  uVar9 = DAT_4e34;
  if (DAT_4e34 == 0) {
    uVar9 = 1;
  }
  uVar5 = uVar5 / uVar9;
  if ((char)(uVar5 >> 8) != '\0') {
    uVar5 = 0xff;
  }
  DAT_0ae2 = (char)uVar5;
  bVar2 = DAT_08bc;
  DAT_08bc = bVar2 & 0xef;
  return;
}


