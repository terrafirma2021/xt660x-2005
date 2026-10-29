/* Entry f147 */

void FUN_f147(void)

{
  if (DAT_0c03 == '\t') {
    if ((DAT_0c07 == 0) && (DAT_0c08 < DAT_0db6)) {
      DAT_0c1f = 0xff;
    }
    else {
      DAT_0c1f = DAT_0c07;
      DAT_0c20 = DAT_0c08;
    }
  }
  else if (DAT_0c03 == '\n') {
    if (-1 < (short)((ushort)DAT_0c1f << 8)) {
      DAT_0c1f = DAT_0c1f | DAT_0c07;
    }
    DAT_0c1c = DAT_0c08;
  }
  else if (DAT_0c03 == '\0') {
    if ((short)((ushort)DAT_0c1f << 8) < 0) {
      if ((DAT_0c08 >> 2) + DAT_0c08 < DAT_0c1c) {
        return;
      }
    }
    else {
      if (DAT_0c1f != 0 || DAT_0c07 != 0) {
        return;
      }
      DAT_0c36 = (ushort)DAT_0da3 << 2;
      FUN_f1ce();
      if ((DAT_0bfe & 0x40) != 0) {
        DAT_0c35 = 0;
        return;
      }
    }
    DAT_0c35 = (DAT_0c35 + 1) - (0xfe < DAT_0c35);
    if (DAT_0da2 <= DAT_0c35) {
      FUN_721f();
    }
  }
  return;
}


