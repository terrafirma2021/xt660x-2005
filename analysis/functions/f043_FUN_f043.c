/* Entry f043 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_f043(void)

{
  uint3 uVar1;
  uint3 uVar2;
  undefined3 uVar3;
  undefined3 uVar4;
  
  uVar4 = _DAT_0c1b;
  uVar3 = _DAT_0c17;
  if (DAT_0c05 != 0) {
    if (DAT_0c30 <= _DAT_0c07) {
LAB_f071:
      FUN_721f();
      return;
    }
    if (DAT_0c2e <= _DAT_0c07) {
      if (DAT_0c33 == '\0') {
        DAT_0c33 = '\x01';
      }
      else if ((DAT_0c05 != DAT_0c32) && ((byte)(DAT_0c05 - DAT_0c32) != '\v')) goto LAB_f071;
      DAT_0c32 = DAT_0c05;
    }
    uVar1 = (uint3)_DAT_0c1b >> 0x10;
    _DAT_0c1f = _DAT_0c1b;
    uVar2 = (uint3)_DAT_0c17 >> 0x10;
    _DAT_0c1b = _DAT_0c17;
    _DAT_0c17 = _DAT_0c07;
    if (3 < DAT_0c05) {
      DAT_0c36 = (ushort)DAT_0d9f << 2;
      if (((char)((uint3)_DAT_0c07 >> 0x10) == '\0' && (char)uVar2 == '\0') && (char)uVar1 == '\0')
      {
        FUN_f1ce();
      }
      else {
        DAT_0df7._1_1_ = (undefined1)(ushort)((uint3)uVar3 >> 10);
        DAT_0df6 = (undefined1)(ushort)((uint3)uVar4 >> 10);
        FUN_f26e();
      }
      if ((DAT_0bfe & 0x40) != 0) {
        DAT_0c14 = DAT_0c08 + DAT_0c0c;
        DAT_0c13 = DAT_0c07 + DAT_0c0b + CARRY2(DAT_0c08,DAT_0c0c);
        if ((DAT_0c07 == '\0') && (DAT_0c08 < DAT_0db6)) {
          _DAT_0c1f = CONCAT12(0xff,DAT_0c20);
          DAT_0880 = DAT_0880 & 0x7f;
          DAT_0881 = DAT_0881 & 0x7f;
          DAT_088c = DAT_088c & 0xdf;
          DAT_0922 = 0;
          DAT_0923 = 0;
          DAT_0bfe = DAT_0bfe | 0x80;
          DAT_0c03 = 0;
          DAT_0c04 = 0;
          return;
        }
        _DAT_0c1f = CONCAT12(DAT_0c1f | DAT_0c1b,DAT_0c20);
        DAT_0880 = DAT_0880 & 0x7f;
        DAT_0881 = DAT_0881 & 0x7f;
        DAT_088c = DAT_088c & 0xdf;
        DAT_0922 = 0;
        DAT_0923 = 0;
        DAT_0bfe = DAT_0bfe | 0x80;
        DAT_0c03 = 0;
        DAT_0c04 = 0;
        return;
      }
    }
    DAT_0c0b = DAT_0c07;
    DAT_0c0c = DAT_0c08;
  }
  DAT_0c05 = DAT_0c05 + 1;
  if (0xe < DAT_0c05) {
    DAT_0c05 = 1;
  }
  return;
}


