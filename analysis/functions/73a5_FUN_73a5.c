/* Entry 73a5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_73a5(void)

{
  ushort uVar1;
  undefined3 uVar2;
  byte bVar3;
  ushort uVar5;
  byte bVar4;
  
  if (DAT_0921 < 0x40) {
    if ((((CARRY2(DAT_0a38,DAT_0a3a)) ||
         (uVar5 = DAT_0a38 + DAT_0a3a + DAT_0a3c, CARRY2(DAT_0a38 + DAT_0a3a,DAT_0a3c))) ||
        (uVar1 = uVar5 + DAT_0a3e, CARRY2(uVar5,DAT_0a3e))) ||
       ((uVar5 = uVar1 + DAT_0a40, CARRY2(uVar1,DAT_0a40) ||
        (DAT_0a44 = uVar5 + DAT_0a42, CARRY2(uVar5,DAT_0a42))))) {
      DAT_0a44 = 0xffff;
    }
    DAT_0a46 = DAT_0a44 << 1;
    if ((short)DAT_0a44 < 0) {
      DAT_0a46 = -1;
    }
    DAT_0a48 = DAT_0a44 + DAT_0a34;
    if (CARRY2(DAT_0a44,DAT_0a34)) {
      DAT_0a48 = -1;
    }
    DAT_0dde._1_1_ = (byte)(0x927c / DAT_0a44);
    DAT_08f8 = CONCAT11((byte)DAT_0dde,
                        (char)(((uint)(0x927c % DAT_0a44) << 0x10) / (uint)DAT_0a44 >> 8)) << 3;
    if (((byte)DAT_0dde & 0x3f) >> 5 != 0) {
      DAT_08f8 = 0xffff;
    }
  }
  else {
    DAT_0a44 = 0xffff;
    DAT_08f8 = 0x1e0;
  }
  if (0xfdff < DAT_08f8) {
    DAT_08f8 = 0xfe00;
  }
  if (DAT_4bec <= DAT_08f8) {
    DAT_0880 = DAT_0880 | 2;
    DAT_0bf8 = DAT_0bf8 | 0x20;
  }
  if (DAT_0a4b._0_1_ < 4) {
    bVar4 = (byte)((ushort)RAM0x0a4c >> 8);
    bVar3 = bVar4 >> 1;
    DAT_0de0._0_1_ = (byte)((byte)RAM0x0a4c >> 1 | bVar4 << 7) >> 1 | bVar3 << 7;
    DAT_0a80 = CONCAT11((byte)(bVar3 | DAT_0a4b._0_1_ << 7) >> 1 | (DAT_0a4b._0_1_ >> 1) << 7,
                        DAT_0de0._0_1_);
  }
  else {
    DAT_0a80 = 0xffff;
  }
  _DAT_0dde = CONCAT21(0x927c / DAT_0a80,DAT_0de0._0_1_);
  uVar2 = _DAT_0dde;
  DAT_0dde._1_1_ = (byte)(0x927c / DAT_0a80);
  DAT_0900 = CONCAT11((byte)DAT_0dde,
                      (char)(((uint)(0x927c % DAT_0a80) << 0x10) / (uint)DAT_0a80 >> 8)) << 3;
  if (((byte)DAT_0dde & 0x3f) >> 5 != 0) {
    DAT_0900 = 0xffff;
  }
  if (0xfdff < DAT_0900) {
    DAT_0900 = 0xfe00;
  }
  DAT_0906 = DAT_0900;
  DAT_0902 = DAT_0900;
  if (DAT_18d7 == '\0') {
    DAT_0902 = DAT_08fe;
    DAT_0900 = DAT_08f8;
  }
  uVar5 = DAT_4e34;
  if (DAT_4e34 == 0) {
    uVar5 = 1;
  }
  uVar5 = DAT_0900 / uVar5;
  if ((char)(uVar5 >> 8) != '\0') {
    uVar5 = 0xff;
  }
  DAT_0ae2 = (char)uVar5;
  DAT_08bc = DAT_08bc & 0xef;
  _DAT_0dde = uVar2;
  return;
}


