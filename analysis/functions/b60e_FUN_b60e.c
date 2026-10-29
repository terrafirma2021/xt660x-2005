/* Entry b60e */

void FUN_b60e(void)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  
  bVar3 = DAT_0891;
  if ((~bVar3 & 2) == 0) {
    bVar3 = DAT_0bd2;
    DAT_0bd2 = bVar3 & 0xdf;
    bVar3 = DAT_0bd3;
    DAT_0bd3 = bVar3 | 0x20;
    uVar2 = DAT_0b30;
    bVar3 = (byte)(uVar2 + 1);
    DAT_0b30 = CONCAT11((char)(uVar2 + 1 >> 8) - (bVar3 < (0xfffe < uVar2)),bVar3 - (0xfffe < uVar2)
                       );
    uVar1 = DAT_08b1;
    FUN_57e9(&DAT_0a22);
  }
  else {
    bVar3 = DAT_00e9;
    if ((bVar3 & 0x10) != 0) {
      bVar3 = DAT_00f0;
      DAT_00f0 = bVar3 & 0xf7;
      bVar3 = DAT_0bd3;
      DAT_0bd3 = bVar3 & 0xdf;
      bVar3 = DAT_0891;
      DAT_0891 = bVar3 & 0xfd;
    }
  }
  return;
}


