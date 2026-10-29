/* Entry ec98 */

void FUN_ec98(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  byte bVar5;
  char cVar6;
  
  cVar6 = DAT_0d9b;
  if (cVar6 == -0x80) {
    bVar1 = DAT_0a1b;
    bVar2 = DAT_0d7e;
    bVar5 = bVar1 - bVar2;
    if (bVar1 < bVar2) {
      bVar5 = bVar5 + 0x18;
    }
    DAT_0cad = bVar5;
    bVar1 = DAT_0a1a;
    bVar2 = DAT_0d7e;
    cVar6 = bVar1 - bVar2;
    if (bVar1 < bVar2) {
      cVar6 = cVar6 + '\x18';
    }
    DAT_0cac = cVar6;
    bVar2 = DAT_0cac;
    bVar1 = bVar5 - bVar2;
    if (bVar1 == 0) goto LAB_ecfb;
    if (bVar2 <= bVar5) {
      bVar5 = DAT_0d9c;
      if (bVar5 < bVar1) {
        cVar6 = DAT_0a1a;
        cVar3 = DAT_0d9c;
        bVar5 = cVar6 + cVar3;
        if (0x16 < bVar5) {
          if (bVar5 == 0x17) {
            bVar5 = 0;
            goto LAB_ecfe;
          }
          bVar5 = bVar5 - 0x18;
        }
        if (bVar5 == 0xb) {
          bVar5 = 0xc;
        }
        goto LAB_ed04;
      }
      goto LAB_ecfb;
    }
    bVar5 = DAT_0d9c;
    if ((byte)-bVar1 <= bVar5) goto LAB_ecfb;
    bVar1 = DAT_0a1a;
    bVar2 = DAT_0d9c;
    bVar5 = bVar1 - bVar2;
    if ((bVar1 < bVar2) && (bVar5 = bVar5 + 0x18, bVar5 == 0x17)) {
      bVar5 = 0x16;
    }
  }
  else {
LAB_ecfb:
    bVar5 = DAT_0a1b;
  }
LAB_ecfe:
  if (bVar5 == 0xb) {
    bVar5 = 10;
  }
LAB_ed04:
  DAT_0a1a = bVar5;
  DAT_0a1e = bVar5;
  uVar4 = DAT_0dae;
  DAT_0a26 = uVar4;
  return;
}


