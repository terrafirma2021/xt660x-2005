/* Entry ab66 */

void FUN_ab66(void)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  char cVar6;
  ushort uVar7;
  
  uVar5 = DAT_09a4;
  uVar3 = DAT_097e;
  uVar7 = uVar5 + uVar3 >> 1;
  uVar7 = CONCAT11((byte)(uVar7 >> 8) | CARRY2(uVar5,uVar3) << 7,(char)uVar7);
  if (uVar7 < 0xc000) {
    if (uVar7 < 0x4000) {
      cVar6 = '\0';
    }
    else {
      bVar1 = 0x7f < (byte)((char)(uVar7 + 0xc000) * '\x02');
      bVar2 = (byte)((uVar7 + 0xc000 & 0x7fff) >> 7);
      cVar6 = (bVar2 + bVar1) - CARRY1(bVar2,bVar1);
    }
  }
  else {
    cVar6 = -1;
  }
  DAT_09c7 = cVar6;
  uVar4 = DAT_097e;
  DAT_09a4 = uVar4;
  return;
}


