/* Entry 5fa4 */

undefined2 FUN_5fa4(undefined2 param_1)

{
  byte bVar1;
  
  DAT_003f = 0x55;
  DAT_003f = 0xaa;
  bVar1 = DAT_0000;
  if ((~bVar1 & 0x10) == 0) {
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 | 0x10;
  }
  else {
    bVar1 = DAT_0000;
    DAT_0000 = bVar1 & 0xef;
  }
  return param_1;
}


