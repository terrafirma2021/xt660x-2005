/* Entry b5a0 */

void FUN_b5a0(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_0bd2;
    DAT_0bd2 = bVar3 & 0x7f;
    bVar3 = DAT_0bd3;
    DAT_0bd3 = bVar3 | 0x80;
    uVar2 = DAT_0b30;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08af;
    FUN_57e9(&DAT_0a20);
  }
  else {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      bVar3 = DAT_0bd3;
      DAT_0bd3 = bVar3 & 0x7f;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 & 0xfd;
    }
  }
  return;
}


