/* Entry ec98 */

void FUN_ec98(void)

{
  byte bVar1;
  
  DAT_0a1e = DAT_0a1b;
  if (DAT_0d9b == -0x80) {
    DAT_0cad = DAT_0a1b - DAT_0d7e;
    if (DAT_0a1b < DAT_0d7e) {
      DAT_0cad = DAT_0cad + 0x18;
    }
    DAT_0cac = DAT_0a1a - DAT_0d7e;
    if (DAT_0a1a < DAT_0d7e) {
      DAT_0cac = DAT_0cac + 0x18;
    }
    bVar1 = DAT_0cad - DAT_0cac;
    if (bVar1 != 0) {
      if (DAT_0cad < DAT_0cac) {
        if (((DAT_0d9c < (byte)-bVar1) && (DAT_0a1e = DAT_0a1a - DAT_0d9c, DAT_0a1a < DAT_0d9c)) &&
           (DAT_0a1e = (DAT_0a1a - DAT_0d9c) + 0x18, DAT_0a1e == 0x17)) {
          DAT_0a1e = 0x16;
        }
      }
      else if (DAT_0d9c < bVar1) {
        DAT_0a1a = DAT_0a1a + DAT_0d9c;
        if (0x16 < DAT_0a1a) {
          if (DAT_0a1a == 0x17) {
            DAT_0a1e = 0;
            goto LAB_ecfe;
          }
          DAT_0a1a = DAT_0a1a - 0x18;
        }
        if (DAT_0a1a != 0xb) {
          DAT_0a1e = DAT_0a1a;
          DAT_0a26 = DAT_0dae;
          return;
        }
        DAT_0a1a = 0xc;
        DAT_0a1e = 0xc;
        DAT_0a26 = DAT_0dae;
        return;
      }
    }
  }
LAB_ecfe:
  if (DAT_0a1e == 0xb) {
    DAT_0a1e = 10;
  }
  DAT_0a1a = DAT_0a1e;
  DAT_0a26 = DAT_0dae;
  return;
}


