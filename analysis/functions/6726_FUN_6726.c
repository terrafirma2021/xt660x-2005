/* Entry 6726 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_6726(void)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  _DAT_0b67 = _DAT_08b8;
  sVar2 = _DAT_0b67;
  _DAT_0b69 = _DAT_08ba;
  sVar3 = _DAT_0b69;
  DAT_0b67 = (char)((ushort)_DAT_08b8 >> 8);
  DAT_0b68 = (char)_DAT_08b8;
  if (DAT_0b67 == '\0' && DAT_0b68 == '\0') {
    DAT_0b69 = (char)((ushort)_DAT_08ba >> 8);
    DAT_0b6a = (char)_DAT_08ba;
    if (DAT_0b69 == '\0' && DAT_0b6a == '\0') {
      _DAT_0b67 = _DAT_08b8;
      _DAT_0b69 = _DAT_08ba;
      DAT_0bdf = 0;
      return;
    }
  }
  sVar5 = 0x20;
  DAT_0b71 = '\0';
  sVar4 = _DAT_08b8;
  sVar6 = _DAT_08ba;
  do {
    uVar1 = (ushort)sVar4 >> 0xf;
    sVar4 = sVar4 << 1;
    if (sVar6 < 0) {
      DAT_0b71 = DAT_0b71 + '\x01';
    }
    sVar5 = sVar5 + -1;
    sVar6 = CONCAT11((char)((ushort)sVar6 >> 8) << 1 | (byte)sVar6 >> 7,
                     (byte)sVar6 << 1 | (byte)uVar1);
  } while (sVar5 != 0);
  DAT_0bdf = DAT_0b71;
  _DAT_0b67 = sVar2;
  _DAT_0b69 = sVar3;
  return;
}


