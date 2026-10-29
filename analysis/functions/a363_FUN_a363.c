/* Entry a363 */

void FUN_a363(void)

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
    if (*(ushort *)(&UNK_4c08 + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_a37e;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_a37e:
  uVar5 = CONCAT11(bVar6,0x24);
  uVar2 = DAT_0900;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_4c1c + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_a39b;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_a39b:
  RAM0ad0 = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_0ad1;
  bVar6 = DAT_0ad0;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_0acd = (&DAT_4c44)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


