/* Entry a448 */

void FUN_a448(void)

{
  byte bVar1;
  ushort uVar2;
  byte *table;
  
  bVar1 = DAT_0898;
  if (DAT_31ea < bVar1) {
    table = &UNK_3200;
  }
  else {
    table = &UNK_31ec;
  }
  uVar2 = DAT_0900;
  uVar2 = lookup_u8_uniform_u16_axis(uVar2,table);
  DAT_09d9 = (char)(uVar2 >> 8);
  return;
}


