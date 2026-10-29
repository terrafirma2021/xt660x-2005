/* Entry 57b4 */

undefined2 FUN_57b4(undefined2 param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 | 8;
  DAT_00d8 = 0x50;
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = (char)((ushort)param_1 >> 8);
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = (char)param_1;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  DAT_00d8 = 0x54;
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = 0xff;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 & 0xf7;
  uVar3 = DAT_00dd;
  return CONCAT11(uVar1,uVar3);
}


