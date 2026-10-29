/* Entry a3b4 */

void FUN_a3b4(void)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  
  uVar2 = DAT_0c90;
  bVar6 = 0x10;
  do {
    if (*(ushort *)(&UNK_4d0c + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_a3cf;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_a3cf:
  uVar5 = CONCAT11(bVar6,0x24);
  uVar2 = DAT_0900;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_4d20 + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_a3ec;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_a3ec:
  RAM0ad2 = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_0ad3;
  bVar6 = DAT_0ad2;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_0ace = (&DAT_4d48)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


