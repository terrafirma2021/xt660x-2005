/* Entry a363 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_a363(void)

{
  bool bVar1;
  byte bVar3;
  ushort uVar2;
  byte bVar4;
  byte bVar5;
  
  bVar3 = 0x10;
  do {
    if (&UNK_4c08 + bVar3 < DAT_08e8) {
      bVar3 = (byte)(bVar3 + 2) >> 1;
      goto LAB_a37e;
    }
    bVar1 = 1 < bVar3;
    bVar3 = bVar3 - 2;
  } while (bVar1);
  bVar3 = 0;
LAB_a37e:
  uVar2 = CONCAT11(bVar3,0x24);
  do {
    bVar4 = (byte)uVar2;
    bVar3 = (byte)(uVar2 >> 8);
    if (&UNK_4c1c + (uVar2 & 0xff) < DAT_0900) {
      bVar4 = (byte)(bVar4 + 2) >> 1;
      goto LAB_a39b;
    }
    uVar2 = CONCAT11(bVar3,bVar4 - 2);
  } while (1 < bVar4);
  bVar4 = 0;
LAB_a39b:
  _DAT_0ad0 = CONCAT11(bVar3,bVar4);
  bVar5 = (byte)((ushort)bVar4 * 10);
  DAT_0acd = (&DAT_4c44)
             [CONCAT11((char)((ushort)bVar4 * 10 >> 8) + CARRY1(bVar5,bVar3),bVar5 + bVar3)];
  return;
}


