/* Entry 66d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_66d6(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  
  do {
    uVar6 = (ushort)(byte)(DAT_0b71 + 1);
    sVar5 = _DAT_0b67;
    sVar4 = _DAT_0b69;
    while (uVar6 = uVar6 - 1, uVar6 != 0) {
      bVar3 = -(char)(sVar4 >> 0xf);
      sVar4 = sVar4 << 1;
      bVar2 = (byte)((ushort)(sVar5 << 1) >> 8);
      sVar5 = CONCAT11(bVar2 + CARRY1(bVar2,bVar3),bVar2 + bVar3);
    }
    do {
      DAT_0b71 = DAT_0b71 + '\x01';
      bVar3 = (byte)((ushort)(sVar5 << 1) >> 8);
      cVar1 = (char)(sVar4 >> 0xf);
      if (sVar5 < 0) {
        bVar2 = -cVar1;
        return CONCAT11(bVar3 + CARRY1(bVar3,bVar2),bVar3 + bVar2);
      }
      bVar2 = -cVar1;
      sVar4 = sVar4 * 2;
      sVar5 = CONCAT11(bVar3 + CARRY1(bVar3,bVar2),bVar3 + bVar2);
    } while ((sVar5 != 0) || (sVar4 != 0));
    DAT_0b71 = '\0';
  } while( true );
}


