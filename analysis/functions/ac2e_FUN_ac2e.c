/* Entry ac2e */

void FUN_ac2e(void)

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
    if (*(ushort *)(&UNK_3614 + bVar6) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_ac49;
    }
    bVar1 = 1 < bVar6;
    bVar6 = bVar6 - 2;
  } while (bVar1);
  bVar6 = 0;
LAB_ac49:
  uVar5 = CONCAT11(bVar6,0x10);
  uVar2 = DAT_0900;
  do {
    bVar6 = (byte)uVar5;
    uVar4 = (undefined1)(uVar5 >> 8);
    if (*(ushort *)(&UNK_3628 + (uVar5 & 0xff)) < uVar2) {
      bVar6 = (byte)(bVar6 + 2) >> 1;
      goto LAB_ac66;
    }
    uVar5 = CONCAT11(uVar4,bVar6 - 2);
  } while (1 < bVar6);
  bVar6 = 0;
LAB_ac66:
  RAM09b2 = CONCAT11(uVar4,bVar6);
  bVar3 = DAT_09b3;
  bVar6 = DAT_09b2;
  bVar7 = (byte)((ushort)bVar3 * 10);
  DAT_09af = (&DAT_363c)
             [CONCAT11((char)((ushort)bVar3 * 10 >> 8) + CARRY1(bVar7,bVar6),bVar7 + bVar6)];
  return;
}


