/* Entry ab66 */

void FUN_ab66(void)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  
  uVar3 = DAT_09a4 + DAT_097e >> 1;
  uVar3 = CONCAT11((byte)(uVar3 >> 8) | CARRY2(DAT_09a4,DAT_097e) << 7,(char)uVar3);
  if (uVar3 < 0xc000) {
    if (uVar3 < 0x4000) {
      DAT_09c7 = '\0';
    }
    else {
      bVar1 = 0x7f < (byte)((char)(uVar3 + 0xc000) * '\x02');
      bVar2 = (byte)((uVar3 + 0xc000 & 0x7fff) >> 7);
      DAT_09c7 = (bVar2 + bVar1) - CARRY1(bVar2,bVar1);
    }
  }
  else {
    DAT_09c7 = -1;
  }
  DAT_09a4 = DAT_097e;
  return;
}


