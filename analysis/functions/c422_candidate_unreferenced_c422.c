/* Entry c422 */

void candidate_unreferenced_c422(ushort *param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  byte *table_bias;
  
  uVar6 = DAT_0e16;
  if (param_1[8] <= uVar6) {
    uVar6 = param_1[8];
  }
  if (param_1[6] < uVar6) {
    uVar7 = uVar6 + param_1[6] >> 1;
    uVar5 = CONCAT11((byte)(uVar7 >> 8) | CARRY2(uVar6,param_1[6]) << 7,(char)uVar7);
    uVar6 = param_1[7] + param_1[6] >> 1;
    DAT_0e0c = CONCAT11((byte)(uVar6 >> 8) | CARRY2(param_1[7],param_1[6]) << 7,(char)uVar6);
    uVar7 = DAT_0e0c;
    uVar6 = uVar5 - uVar7;
    if (uVar7 <= uVar5) {
      uVar6 = uVar6 >> 1;
    }
    sVar3 = DAT_0e0c;
    uVar6 = uVar6 + sVar3;
  }
  uVar7 = uVar6 - param_1[5];
  if (uVar6 < param_1[5]) {
    uVar7 = 0;
  }
  DAT_0e08 = (short)((uint)param_1[9] * (uint)uVar7);
  DAT_0e06 = (char)((uint)param_1[9] * (uint)uVar7 >> 0x10);
  uVar6 = DAT_0e18;
  if (param_1[3] <= uVar6) {
    uVar6 = param_1[3];
  }
  if (param_1[1] < uVar6) {
    uVar7 = uVar6 + param_1[1] >> 1;
    uVar5 = CONCAT11((byte)(uVar7 >> 8) | CARRY2(uVar6,param_1[1]) << 7,(char)uVar7);
    uVar6 = param_1[2] + param_1[1] >> 1;
    DAT_0e0c = CONCAT11((byte)(uVar6 >> 8) | CARRY2(param_1[2],param_1[1]) << 7,(char)uVar6);
    uVar7 = DAT_0e0c;
    uVar6 = uVar5 - uVar7;
    if (uVar7 <= uVar5) {
      uVar6 = uVar6 >> 1;
    }
    sVar3 = DAT_0e0c;
    uVar6 = uVar6 + sVar3;
  }
  uVar7 = uVar6 - *param_1;
  if (uVar6 < *param_1) {
    uVar7 = 0;
  }
  DAT_0e0a = (short)((uint)param_1[4] * (uint)uVar7);
  bVar1 = *(byte *)(param_1 + 10);
  DAT_0e0e = (ushort)bVar1 * ((ushort)((uint)param_1[4] * (uint)uVar7 >> 0x10) & 0xff);
  sVar3 = DAT_0e0e;
  sVar4 = DAT_0e0e;
  bVar2 = DAT_0e06;
  table_bias = (byte *)((short)param_1 + (ushort)bVar2 + (ushort)bVar2 + sVar4 + sVar3 + 0xf);
  uVar6 = DAT_0e08;
  uVar6 = interp_u16_q16_fraction(uVar6,table_bias);
  sVar3 = DAT_0e0a;
  if (sVar3 == 0) {
    return;
  }
  RAM0e06 = uVar6;
  uVar6 = DAT_0e08;
  uVar6 = interp_u16_q16_fraction(uVar6,table_bias + (ushort)bVar1 + (ushort)bVar1);
  DAT_0e08 = uVar6;
  uVar6 = DAT_0e0a;
  interp_u16_q16_fraction(uVar6,&UNK_0e00);
  return;
}


