/* Entry c422 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void candidate_unreferenced_c422(ushort param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar6;
  undefined2 uVar5;
  short sVar7;
  
  uVar4 = DAT_0e16;
  if (param_1 + 0x10 <= DAT_0e16) {
    uVar4 = param_1 + 0x10;
  }
  if (param_1 + 0xc < uVar4) {
    uVar3 = uVar4 + param_1 + 0xc >> 1;
    uVar3 = CONCAT11((byte)(uVar3 >> 8) | CARRY2(uVar4,param_1 + 0xc) << 7,(char)uVar3);
    uVar4 = param_1 + 0xe + param_1 + 0xc >> 1;
    DAT_0e0c = CONCAT11((byte)(uVar4 >> 8) | CARRY2(param_1 + 0xe,param_1 + 0xc) << 7,(char)uVar4);
    uVar4 = uVar3 - DAT_0e0c;
    if (DAT_0e0c <= uVar3) {
      uVar4 = uVar4 >> 1;
    }
    uVar4 = uVar4 + DAT_0e0c;
  }
  uVar3 = uVar4 - (param_1 + 10);
  if (uVar4 < param_1 + 10) {
    uVar3 = 0;
  }
  iVar2 = (uint)(param_1 + 0x12) * (uint)uVar3;
  DAT_0e08 = (undefined2)iVar2;
  bVar6 = (byte)((uint)iVar2 >> 0x10);
  _DAT_0e06 = CONCAT11(bVar6,DAT_0e06_1);
  uVar4 = DAT_0e18;
  if (param_1 + 6 <= DAT_0e18) {
    uVar4 = param_1 + 6;
  }
  if (param_1 + 2 < uVar4) {
    uVar3 = uVar4 + param_1 + 2 >> 1;
    uVar3 = CONCAT11((byte)(uVar3 >> 8) | CARRY2(uVar4,param_1 + 2) << 7,(char)uVar3);
    uVar4 = param_1 + 4 + param_1 + 2 >> 1;
    DAT_0e0c = CONCAT11((byte)(uVar4 >> 8) | CARRY2(param_1 + 4,param_1 + 2) << 7,(char)uVar4);
    uVar4 = uVar3 - DAT_0e0c;
    if (DAT_0e0c <= uVar3) {
      uVar4 = uVar4 >> 1;
    }
    uVar4 = uVar4 + DAT_0e0c;
  }
  uVar3 = uVar4 - param_1;
  if (uVar4 < param_1) {
    uVar3 = 0;
  }
  iVar2 = (uint)(param_1 + 8) * (uint)uVar3;
  DAT_0e0a = (short)iVar2;
  bVar1 = *(byte *)(param_1 + 0x14);
  DAT_0e0e = (ushort)bVar1 * ((ushort)((uint)iVar2 >> 0x10) & 0xff);
  sVar7 = (ushort)bVar6 + (ushort)bVar6 + param_1 + DAT_0e0e * 2 + 0xf;
  uVar5 = interp_u16_q16_fraction(DAT_0e0a,sVar7);
  if (DAT_0e0a == 0) {
    return;
  }
  _DAT_0e06 = uVar5;
  DAT_0e08 = interp_u16_q16_fraction(DAT_0e08,(ushort)bVar1 + (ushort)bVar1 + sVar7);
  interp_u16_q16_fraction(DAT_0e0a,0xe00);
  return;
}


