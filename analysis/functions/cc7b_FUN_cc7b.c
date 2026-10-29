/* Entry cc7b */

undefined * FUN_cc7b(undefined2 param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  
  bVar1 = (byte)((ushort)param_1 >> 8);
  uVar2 = CONCAT11(bVar1 - 0x10,(char)param_1);
  if (bVar1 < 0x10) {
    uVar2 = 0;
  }
  puVar3 = &UNK_2800 + uVar2;
  if (0xd7ff < uVar2) {
    puVar3 = (undefined *)0x0;
  }
  puVar3 = puVar3 + -0x2800;
  bVar1 = (byte)((ushort)puVar3 >> 8);
  if (bVar1 < 0x28) {
    puVar3 = (undefined *)((ushort)puVar3 >> 2);
  }
  else if (bVar1 < 0x38) {
    puVar3 = &UNK_0500 + ((ushort)puVar3 >> 3);
  }
  else {
    puVar3 = &DAT_0880 + ((ushort)puVar3 >> 4);
  }
  return puVar3;
}


