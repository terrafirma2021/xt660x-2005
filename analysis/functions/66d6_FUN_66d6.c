/* Entry 66d6 */

undefined2 FUN_66d6(void)

{
  char cVar1;
  char cVar2;
  short sVar3;
  byte bVar5;
  short sVar4;
  byte bVar6;
  ushort uVar7;
  
  do {
    cVar1 = DAT_0b71;
    uVar7 = (ushort)(byte)(cVar1 + 1);
    sVar4 = RAM0b67;
    sVar3 = RAM0b69;
    while (uVar7 = uVar7 - 1, uVar7 != 0) {
      bVar6 = -(char)(sVar3 >> 0xf);
      sVar3 = sVar3 << 1;
      bVar5 = (byte)(sVar4 << 1);
      sVar4 = CONCAT11((char)((ushort)(sVar4 << 1) >> 8) + CARRY1(bVar5,bVar6),bVar5 + bVar6);
    }
    do {
      cVar1 = DAT_0b71;
      DAT_0b71 = cVar1 + '\x01';
      bVar6 = (byte)(sVar4 << 1);
      cVar2 = (char)((ushort)(sVar4 << 1) >> 8);
      cVar1 = (char)(sVar3 >> 0xf);
      if (sVar4 < 0) {
        bVar5 = -cVar1;
        return CONCAT11(cVar2 + CARRY1(bVar6,bVar5),bVar6 + bVar5);
      }
      bVar5 = -cVar1;
      sVar3 = sVar3 * 2;
      sVar4 = CONCAT11(cVar2 + CARRY1(bVar6,bVar5),bVar6 + bVar5);
    } while ((sVar4 != 0) || (sVar3 != 0));
    DAT_0b71 = 0;
  } while( true );
}


