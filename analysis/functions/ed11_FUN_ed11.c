/* Entry ed11 */

void FUN_ed11(void)

{
  char cVar1;
  undefined2 uVar2;
  byte bVar3;
  
  bVar3 = DAT_0a1a;
  cVar1 = DAT_0d9d;
  bVar3 = (bVar3 & 0x1f) + cVar1;
  if (0x16 < bVar3) {
    bVar3 = bVar3 - 0x18;
  }
  DAT_0a1f = bVar3;
  uVar2 = DAT_0dae;
  DAT_0a28 = uVar2;
  return;
}


