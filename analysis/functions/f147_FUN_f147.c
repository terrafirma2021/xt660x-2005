/* Entry f147 */

void FUN_f147(void)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  short sVar7;
  ushort uVar8;
  
  cVar2 = DAT_0c03;
  if (cVar2 == '\t') {
    cVar2 = DAT_0c07;
    if (cVar2 == '\0') {
      uVar5 = DAT_0c08;
      uVar8 = DAT_0db6;
      if (uVar5 < uVar8) {
        DAT_0c1f = 0xff;
        return;
      }
    }
    uVar3 = DAT_0c07;
    DAT_0c1f = uVar3;
    uVar6 = DAT_0c08;
    DAT_0c20 = uVar6;
  }
  else if (cVar2 == '\n') {
    bVar1 = DAT_0c1f;
    if (-1 < (short)((ushort)bVar1 << 8)) {
      bVar4 = DAT_0c07;
      DAT_0c1f = bVar1 | bVar4;
    }
    uVar6 = DAT_0c08;
    DAT_0c1c = uVar6;
  }
  else if (cVar2 == '\0') {
    bVar1 = DAT_0c1f;
    if ((short)((ushort)bVar1 << 8) < 0) {
      uVar5 = DAT_0c08;
      sVar7 = DAT_0c08;
      uVar8 = DAT_0c1c;
      if ((uVar5 >> 2) + sVar7 < uVar8) {
        return;
      }
    }
    else {
      cVar2 = DAT_0c07;
      if (bVar1 != 0 || cVar2 != '\0') {
        return;
      }
      bVar1 = DAT_0da3;
      DAT_0c36 = (ushort)bVar1 << 2;
      FUN_f1ce();
      bVar1 = DAT_0bfe;
      if ((bVar1 & 0x40) != 0) {
        DAT_0c35 = 0;
        return;
      }
    }
    bVar1 = DAT_0c35;
    bVar1 = (bVar1 + 1) - (0xfe < bVar1);
    DAT_0c35 = bVar1;
    bVar4 = DAT_0da2;
    if (bVar4 <= bVar1) {
      FUN_721f();
    }
  }
  return;
}


