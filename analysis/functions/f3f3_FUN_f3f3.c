/* Entry f3f3 */

void FUN_f3f3(void)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_08be;
  DAT_08be = bVar3 | 0x10;
  DAT_004e = 4;
  bVar3 = DAT_00e1;
  if ((bVar3 & 4) == 0) {
    sVar1 = DAT_0ab0;
    DAT_0ab0 = sVar1 + 1;
    uVar2 = DAT_0b98;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b98 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
  }
  else {
    bVar3 = DAT_004b;
    DAT_004b = bVar3 & 0xef | 0x20;
  }
  bVar3 = DAT_08be;
  DAT_08be = bVar3 & 0xef;
  return;
}


