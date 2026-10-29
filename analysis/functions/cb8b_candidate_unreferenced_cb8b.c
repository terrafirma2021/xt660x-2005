/* Entry cb8b */

void candidate_unreferenced_cb8b(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  
  bVar1 = DAT_0001;
  if ((~bVar1 & 0x80) == 0) {
    bVar1 = DAT_0001;
    DAT_0001 = bVar1 | 0x80;
    bVar1 = DAT_0b65;
    if ((bVar1 & 0xf0) == 0) {
      bVar1 = DAT_0b64;
      if ((bVar1 & 0xf) == 0) {
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
    cVar2 = DAT_0b64;
    cVar4 = DAT_0b65;
    if (cVar2 == cVar4) {
      bVar1 = DAT_0001;
      DAT_0001 = bVar1 & 0x7f;
      bVar1 = DAT_0b64;
      if ((bVar1 & 0xf0) != 0) {
        cVar2 = DAT_0b64;
        DAT_0b64 = cVar2 + -0x10;
        DAT_0b66 = param_1[2];
        return;
      }
      cVar2 = DAT_0b64;
      DAT_0b64 = cVar2 + -1;
      DAT_0b66 = param_1[4];
      return;
    }
    DAT_0b66 = *param_1;
  }
  uVar3 = DAT_0b64;
  DAT_0b65 = uVar3;
  return;
}


