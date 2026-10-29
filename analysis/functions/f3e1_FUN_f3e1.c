/* Entry f3e1 */

undefined2 FUN_f3e1(ushort param_1,ushort param_2)

{
  undefined2 uVar1;
  
  if ((ushort)((uint)param_1 * (uint)param_2 >> 0x10) < 0x100) {
    uVar1 = (undefined2)((uint)param_1 * (uint)param_2 >> 8);
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}


