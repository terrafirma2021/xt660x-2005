/* Entry c9a9 */

void axis_index_u8_ascending(undefined2 param_1)

{
  byte *pbVar1;
  ushort uVar2;
  byte bVar3;
  
  DAT_0b9f = (char)((ushort)param_1 >> 8) - 1;
  DAT_0ba0 = 0;
  if (*DAT_0ba4 < DAT_0ba2._0_1_) {
    bVar3 = DAT_0ba0;
    if (DAT_0ba2._0_1_ < DAT_0ba4[DAT_0b9f]) {
      while (DAT_0ba0 = bVar3, (byte)(DAT_0b9f - DAT_0ba0) != 1) {
        DAT_0ba1 = ((byte)(DAT_0b9f - DAT_0ba0) >> 1) + DAT_0ba0;
        bVar3 = DAT_0ba1;
        if (DAT_0ba2._0_1_ < DAT_0ba4[DAT_0ba1]) {
          DAT_0b9f = DAT_0ba1;
          bVar3 = DAT_0ba0;
        }
      }
      DAT_0ba6._0_1_ = DAT_0ba0;
      pbVar1 = DAT_0ba4 + DAT_0ba0;
      DAT_0dde = CONCAT11(pbVar1[1] - *pbVar1,(undefined1)DAT_0dde);
      uVar2 = (ushort)(((uint)(byte)(DAT_0ba2._0_1_ - *pbVar1) << 0x18) / (uint)DAT_0dde);
      if (0xff7f < uVar2) {
        DAT_0ba6._0_1_ = DAT_0ba0 + 1;
      }
      DAT_0ba6 = CONCAT11(DAT_0ba6._0_1_,(char)(uVar2 + 0x80 >> 8));
    }
    else {
      DAT_0ba6 = (ushort)DAT_0b9f << 8;
    }
  }
  else {
    DAT_0ba6 = 0;
  }
  return;
}


