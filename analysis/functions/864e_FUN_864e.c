/* Entry 864e */

void FUN_864e(void)

{
  short sVar1;
  
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_1a02;
  DAT_0cee = axis_index_u16_ascending();
  DAT_0ba2 = DAT_08e8;
  DAT_0ba4 = &axis_raw_19e4;
  DAT_0cf0 = axis_index_u16_ascending();
  DAT_0dde = DAT_0cee;
  DAT_0de0 = DAT_0cf0;
  sVar1 = bilinear_u8_grid(0xf,&UNK_1a17);
  DAT_0cec = (char)((ushort)(sVar1 + 0x80) >> 8);
  return;
}


