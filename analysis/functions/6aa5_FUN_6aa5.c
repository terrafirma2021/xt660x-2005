/* Entry 6aa5 */

void FUN_6aa5(undefined *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  undefined *puVar5;
  short sVar6;
  ushort uVar7;
  
  DAT_0ca2 = param_1;
  puVar5 = param_1 + -0x1ec0;
  if (param_1 < &UNK_1ec0) {
    puVar5 = (undefined *)0x0;
  }
  cVar4 = -0x3e;
  sVar6 = FUN_c407(puVar5);
  if ((sVar6 != 0) || (cVar4 == -1)) {
    cVar4 = -2;
  }
  DAT_0aea = cVar4;
  bVar1 = DAT_089f;
  if ((~bVar1 & 0x20) != 0) {
    uVar3 = DAT_0ca2;
    DAT_0ca6 = uVar3;
    uVar2 = DAT_0c86;
    uVar7 = uVar3 - uVar2;
    if (uVar3 < uVar2) {
      uVar7 = CONCAT11((~(byte)(uVar7 >> 8) + 1) - ((char)-(char)uVar7 != '\0'),-(char)uVar7);
    }
    if (0xc0 < uVar7) {
      bVar1 = DAT_089f;
      DAT_089f = bVar1 | 0x10;
      bVar1 = DAT_089f;
      DAT_089f = bVar1 | 8;
    }
    bVar1 = DAT_089f;
    DAT_089f = bVar1 | 0x20;
  }
  DAT_08c2 = 0x40;
  DAT_08c3 = 0;
  return;
}


