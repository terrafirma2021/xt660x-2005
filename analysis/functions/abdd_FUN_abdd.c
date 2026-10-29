/* Entry abdd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_abdd(void)

{
  bool bVar1;
  byte bVar3;
  ushort uVar2;
  byte bVar4;
  byte bVar5;
  
  bVar3 = 0x10;
  do {
    if (&UNK_3588 + bVar3 < DAT_08e8) {
      bVar3 = (byte)(bVar3 + 2) >> 1;
      goto LAB_abf8;
    }
    bVar1 = 1 < bVar3;
    bVar3 = bVar3 - 2;
  } while (bVar1);
  bVar3 = 0;
LAB_abf8:
  uVar2 = CONCAT11(bVar3,0x10);
  do {
    bVar4 = (byte)uVar2;
    bVar3 = (byte)(uVar2 >> 8);
    if (&UNK_359c + (uVar2 & 0xff) < DAT_0900) {
      bVar4 = (byte)(bVar4 + 2) >> 1;
      goto LAB_ac15;
    }
    uVar2 = CONCAT11(bVar3,bVar4 - 2);
  } while (1 < bVar4);
  bVar4 = 0;
LAB_ac15:
  _DAT_09b0 = CONCAT11(bVar3,bVar4);
  bVar5 = (byte)((ushort)bVar4 * 10);
  DAT_09ae = (&DAT_35b0)
             [CONCAT11((char)((ushort)bVar4 * 10 >> 8) + CARRY1(bVar5,bVar3),bVar5 + bVar3)];
  return;
}


