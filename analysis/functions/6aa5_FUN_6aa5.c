/* Entry 6aa5 */

void FUN_6aa5(undefined *param_1)

{
  char cVar1;
  undefined *puVar2;
  short sVar3;
  ushort uVar4;
  
  puVar2 = param_1 + -0x1ec0;
  if (param_1 < &UNK_1ec0) {
    puVar2 = (undefined *)0x0;
  }
  cVar1 = -0x3e;
  DAT_0ca2 = param_1;
  sVar3 = FUN_c407(puVar2);
  if ((sVar3 != 0) || (cVar1 == -1)) {
    cVar1 = -2;
  }
  DAT_0aea = cVar1;
  if ((~DAT_089f & 0x20) == 0) {
    DAT_0ca6 = DAT_0ca2;
    uVar4 = (short)DAT_0ca2 - (short)DAT_0c86;
    if (DAT_0ca2 < DAT_0c86) {
      uVar4 = CONCAT11((~(byte)(uVar4 >> 8) + 1) - ((char)-(char)uVar4 != '\0'),-(char)uVar4);
    }
    if (0xc0 < uVar4) {
      DAT_089f = DAT_089f | 0x18;
    }
    DAT_089f = DAT_089f | 0x20;
  }
  DAT_08c2 = 0x40;
  DAT_08c3 = 0;
  return;
}


