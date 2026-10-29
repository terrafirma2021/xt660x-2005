/* Entry 864e */

void FUN_864e(void)

{
  undefined2 uVar1;
  ushort uVar2;
  
  uVar1 = DAT_0900;
  DAT_0ba2 = uVar1;
  DAT_0ba4 = 0x1a02;
  uVar2 = axis_index_u16_ascending('\x02');
  DAT_0cee = uVar2;
  uVar1 = DAT_08e8;
  DAT_0ba2 = uVar1;
  DAT_0ba4 = 0x19e4;
  uVar2 = axis_index_u16_ascending(0xe4);
  DAT_0cf0 = uVar2;
  uVar1 = DAT_0cee;
  DAT_0dde = uVar1;
  uVar1 = DAT_0cf0;
  DAT_0de0 = uVar1;
  uVar2 = bilinear_u8_grid(&UNK_1a17,'\x0f');
  DAT_0cec = (char)(uVar2 + 0x80 >> 8);
  return;
}


