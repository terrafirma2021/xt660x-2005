/* Entry cc63 */

ushort FUN_cc63(ushort param_1)

{
  ushort uVar1;
  
  if (param_1 < 0x1000) {
    uVar1 = 0;
  }
  else if (param_1 - 0x1000 < 0xe000) {
    uVar1 = param_1 - 0x1000 >> 3;
  }
  else {
    uVar1 = 0x1c00;
  }
  return uVar1;
}


