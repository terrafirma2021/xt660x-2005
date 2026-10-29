/* Entry cb8b */

void candidate_unreferenced_cb8b(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = DAT_0001;
  if ((~bVar1 & 0x80) == 0) {
    bVar1 = DAT_0001;
    DAT_0001 = bVar1 | 0x80;
    if ((DAT_0b65 & 0xf0) == 0) {
      if ((DAT_0b64 & 0xf) == 0) {
        DAT_0b65 = 0;
        return;
      }
      DAT_0b66 = param_1[3];
    }
    else {
      DAT_0b66 = param_1[1];
    }
  }
  else {
    if (DAT_0b64 == DAT_0b65) {
      bVar1 = DAT_0001;
      DAT_0001 = bVar1 & 0x7f;
      if ((DAT_0b64 & 0xf0) != 0) {
        DAT_0b64 = DAT_0b64 - 0x10;
        DAT_0b66 = param_1[2];
        return;
      }
      DAT_0b64 = DAT_0b64 - 1;
      DAT_0b66 = param_1[4];
      return;
    }
    DAT_0b66 = *param_1;
  }
  DAT_0b65 = DAT_0b64;
  return;
}


