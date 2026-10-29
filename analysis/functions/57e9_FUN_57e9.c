/* Entry 57e9 */

undefined2 FUN_57e9(undefined2 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  
  DAT_0dde._0_1_ = (char)((ushort)param_1 >> 8);
  DAT_00d8 = 0x50;
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 | 8;
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = 9;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = 0x80;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 & 0xf7;
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 | 8;
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = (char)((ushort)param_2 >> 8);
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  DAT_00dd = (char)param_2;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  uVar1 = DAT_00db;
  uVar1 = DAT_00dd;
  uVar3 = DAT_0dde._0_1_;
  DAT_00dd = uVar3;
  do {
    bVar2 = DAT_00db;
  } while ((bVar2 & 0x80) == 0);
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 & 0xf7;
  bVar2 = DAT_00f0;
  DAT_00f0 = bVar2 | 8;
  bVar2 = DAT_0891;
  DAT_0891 = bVar2 | 2;
  return CONCAT11(uVar1,uVar3);
}


