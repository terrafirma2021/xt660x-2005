/* Entry a405 */

void FUN_a405(void)

{
  short sVar1;
  
  DAT_0ba2 = DAT_08e8;
  DAT_0ba4 = &axis_raw_313a;
  DAT_09f8 = axis_index_u16_ascending();
  DAT_0ba2 = DAT_0900;
  DAT_0ba4 = &axis_raw_314e;
  DAT_09fa = axis_index_u16_ascending();
  DAT_0de0 = DAT_09f8;
  DAT_0dde = DAT_09fa;
  sVar1 = bilinear_u8_grid(10,&UNK_3165);
  DAT_09d8 = (char)((ushort)(sVar1 + 0x80) >> 8);
  return;
}


