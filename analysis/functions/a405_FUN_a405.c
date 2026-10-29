/* Entry a405 */

void FUN_a405(void)

{
  undefined2 uVar1;
  ushort uVar2;
  
  uVar1 = DAT_08e8;
  DAT_0ba2 = uVar1;
  DAT_0ba4 = 0x313a;
  uVar2 = axis_index_u16_ascending(':');
  DAT_09f8 = uVar2;
  uVar1 = DAT_0900;
  DAT_0ba2 = uVar1;
  DAT_0ba4 = 0x314e;
  uVar2 = axis_index_u16_ascending('N');
  DAT_09fa = uVar2;
  uVar1 = DAT_09fa;
  DAT_0dde = uVar1;
  uVar1 = DAT_09f8;
  DAT_0de0 = uVar1;
  uVar2 = bilinear_u8_grid(&UNK_3165,'\n');
  DAT_09d8 = (char)(uVar2 + 0x80 >> 8);
  return;
}


