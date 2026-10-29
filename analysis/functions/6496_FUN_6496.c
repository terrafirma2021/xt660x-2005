/* Entry 6496 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_6496(void)

{
  if ((((DAT_08a0 & 2) == 0) || ((DAT_0892 & 0x40) == 0)) || ((DAT_0881 & 0x20) == 0)) {
    DAT_0b64 = 0;
  }
  else if (((DAT_0892 & 0x10) == 0) || (DAT_0b66 == '\0')) {
    _DAT_0b67 = CONCAT11(DAT_08af,DAT_08b0);
    _DAT_0b69 = CONCAT11(DAT_08b1,DAT_08b2);
    if ((DAT_08af != '\0' || DAT_08b0 != '\0') || (DAT_08b1 != '\0' || DAT_08b2 != '\0')) {
      FUN_66d6();
      DAT_0b64 = (&DAT_4ec9)[DAT_0b71];
      DAT_0892 = DAT_0892 | 0x10;
      DAT_0b66 = DAT_4eea;
    }
  }
  else {
    DAT_0b66 = DAT_0b66 + -1;
  }
  return;
}


