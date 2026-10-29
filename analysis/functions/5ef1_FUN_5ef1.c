/* Entry 5ef1 */

void FUN_5ef1(undefined1 param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  
  cVar2 = DAT_0dd5;
  sVar3 = CONCAT11(cVar2,param_1);
  if (cVar2 != -0x40) {
    FUN_5e63();
    sVar3 = RAM0d23;
    if (sVar3 == 0x5aa5) {
      FUN_5f35();
      return;
    }
  }
  bVar1 = DAT_0d08;
  DAT_0d08 = bVar1 & 0x7f;
  if ((sVar3 == -1) && (sVar3 = RAM0d1a, sVar3 == -1)) {
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


