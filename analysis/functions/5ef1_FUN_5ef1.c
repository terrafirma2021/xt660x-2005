/* Entry 5ef1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5ef1(undefined1 param_1)

{
  short sVar1;
  
  sVar1 = CONCAT11(DAT_0dd5,param_1);
  if ((DAT_0dd5 != -0x40) && (FUN_5e63(), sVar1 = _DAT_0d23, _DAT_0d23 == 0x5aa5)) {
    FUN_5f35();
    return;
  }
  DAT_0d08 = DAT_0d08 & 0x7f;
  if ((sVar1 == -1) && (_DAT_0d1a == -1)) {
    DAT_0d37 = 0xff;
    DAT_0d39 = 0;
  }
  else {
    FUN_5d77();
    FUN_5e63();
    DAT_0d37 = 0xff0;
    DAT_0d39 = 0xf;
  }
  return;
}


