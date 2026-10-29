/* Entry ed11 */

void FUN_ed11(void)

{
  DAT_0a1f = (DAT_0a1a & 0x1f) + DAT_0d9d;
  if (0x16 < DAT_0a1f) {
    DAT_0a1f = DAT_0a1f - 0x18;
  }
  DAT_0a28 = DAT_0dae;
  return;
}


