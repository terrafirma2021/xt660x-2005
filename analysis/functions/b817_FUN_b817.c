/* Entry b817 */

void FUN_b817(void)

{
  undefined1 extraout_A;
  undefined1 extraout_A_00;
  undefined1 extraout_A_01;
  undefined1 extraout_A_02;
  undefined1 extraout_A_03;
  short sVar1;
  
  DAT_08bc = DAT_08bc | 1;
  DAT_0882 = DAT_0882 & 0xf7;
  if ((~DAT_0881 & 0x10) == 0) {
    DAT_0afa = (DAT_0afa + 1) - (0xfe < DAT_0afa);
  }
  else {
    DAT_0afa = '\0';
  }
  if ((DAT_09a1 & 0x20) != 0) {
    DAT_09ac = (DAT_09ac + 1) - (0xfe < DAT_09ac);
  }
  if ((DAT_09b6 & 8) != 0) {
    DAT_09ca = (DAT_09ca + 1) - (0xfe < DAT_09ca);
  }
  DAT_0ba2._0_1_ = DAT_08f4;
  DAT_0ba4 = &axis_raw_4a46;
  DAT_0a8e = axis_index_u8_ascending();
  DAT_0ba2._0_1_ = DAT_0900._0_1_;
  DAT_0ba4 = &axis_raw_4a56;
  DAT_0a90 = axis_index_u8_ascending();
  DAT_0de0 = DAT_0a8e;
  DAT_0dde = DAT_0a90;
  sVar1 = bilinear_u8_grid();
  DAT_0a88 = (undefined1)((ushort)(sVar1 + 0x80) >> 8);
  lookup_u8_uniform_axis();
  DAT_0a89 = extraout_A;
  lookup_u8_uniform_axis();
  DAT_097b = extraout_A_00;
  lookup_u8_uniform_axis();
  DAT_097c = extraout_A_01;
  lookup_u8_uniform_axis();
  if (DAT_4243 == '\x02') {
    DAT_0884 = DAT_0884 | 0x40;
  }
  else {
    DAT_0884 = DAT_0884 & 0xbf;
  }
  DAT_0a0f = extraout_A_02;
  lookup_u8_uniform_u16_axis(DAT_08f2,&UNK_4bac);
  DAT_0d05 = extraout_A_03;
  DAT_08bc = DAT_08bc & 0xfe;
  return;
}


