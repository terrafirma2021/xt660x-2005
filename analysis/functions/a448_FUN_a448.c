/* Entry a448 */

void FUN_a448(void)

{
  undefined1 extraout_A;
  undefined *puVar1;
  
  if (DAT_31ea < DAT_0898) {
    puVar1 = &UNK_3200;
  }
  else {
    puVar1 = &UNK_31ec;
  }
  lookup_u8_uniform_u16_axis(DAT_0900,puVar1);
  DAT_09d9 = extraout_A;
  return;
}


