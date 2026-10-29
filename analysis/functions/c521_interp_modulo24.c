/* Entry c521 */

void interp_modulo24(short param_1)

{
  DAT_0de4 = *(byte *)(param_1 + 3) - DAT_0d7e;
  if (*(byte *)(param_1 + 3) < DAT_0d7e) {
    DAT_0de4 = DAT_0de4 + '\x18';
  }
  DAT_0de5._0_1_ = *(byte *)(param_1 + 4) - DAT_0d7e;
  if (*(byte *)(param_1 + 4) < DAT_0d7e) {
    DAT_0de5._0_1_ = DAT_0de5._0_1_ + '\x18';
  }
  return;
}


