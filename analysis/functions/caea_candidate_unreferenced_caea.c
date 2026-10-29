/* Entry caea */

void candidate_unreferenced_caea(undefined2 param_1)

{
  ushort uVar1;
  byte bVar2;
  
  DAT_0b9f = (char)((ushort)param_1 >> 8) - 1;
  DAT_0ba0 = 0;
  if (DAT_0ba2 < DAT_0ba4) {
    bVar2 = DAT_0ba0;
    if ((byte)(DAT_0b9f * '\x02') + DAT_0ba4 < DAT_0ba2) {
      while (DAT_0ba0 = bVar2, (byte)(DAT_0b9f - DAT_0ba0) != 1) {
        DAT_0ba1 = ((byte)(DAT_0b9f - DAT_0ba0) >> 1) + DAT_0ba0;
        bVar2 = DAT_0ba1;
        if ((byte)(DAT_0ba1 * '\x02') + DAT_0ba4 <= DAT_0ba2) {
          DAT_0b9f = DAT_0ba1;
          bVar2 = DAT_0ba0;
        }
      }
      DAT_0ba6._0_1_ = DAT_0ba0;
      DAT_0dde = 0xfffe;
      uVar1 = (ushort)(((uint)(((byte)(DAT_0ba0 << 1) + DAT_0ba4) - DAT_0ba2) << 0x10) / 0xfffe);
      if (0xff7f < uVar1) {
        DAT_0ba6._0_1_ = DAT_0ba0 + 1;
      }
      DAT_0ba6 = CONCAT11(DAT_0ba6._0_1_,(char)(uVar1 + 0x80 >> 8));
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


