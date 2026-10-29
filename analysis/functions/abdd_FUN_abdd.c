/* Entry abdd */

void FUN_abdd(void)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  
  uVar2 = DAT_08e8;
  bVar6 = 0x10;
  do {
    if (*(ushort *)(&UNK_3588 + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_abf8;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_abf8:
  uVar5 = CONCAT11(bVar6,0x10);
  uVar2 = DAT_0900;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_359c + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_ac15;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_ac15:
  RAM09b0 = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_09b1;
  bVar6 = DAT_09b0;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_09ae = (&DAT_35b0)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


