/* Entry f043 */

void FUN_f043(void)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  
  cVar1 = DAT_0c05;
  if (cVar1 != '\0') {
    uVar3 = RAM0c07;
    uVar5 = DAT_0c30;
    if (uVar5 <= uVar3) {
LAB_f071:
      FUN_721f();
      return;
    }
    uVar5 = DAT_0c2e;
    if (uVar5 <= uVar3) {
      cVar9 = DAT_0c33;
      if (cVar9 == '\0') {
        cVar9 = '\x01';
      }
      else {
        cVar6 = DAT_0c32;
        if ((cVar1 != cVar6) && ((char)(cVar1 - cVar6) != '\v')) goto LAB_f071;
      }
      DAT_0c33 = cVar9;
      uVar2 = DAT_0c05;
      DAT_0c32 = uVar2;
    }
    uVar2 = DAT_0c1b;
    DAT_0c1f = uVar2;
    uVar4 = DAT_0c1c;
    DAT_0c20 = uVar4;
    uVar2 = DAT_0c17;
    DAT_0c1b = uVar2;
    uVar4 = DAT_0c18;
    DAT_0c1c = uVar4;
    uVar2 = DAT_0c07;
    DAT_0c17 = uVar2;
    uVar4 = DAT_0c08;
    DAT_0c18 = uVar4;
    bVar8 = DAT_0c05;
    if (3 < bVar8) {
      bVar8 = DAT_0d9f;
      DAT_0c36 = (ushort)bVar8 << 2;
      cVar1 = DAT_0c17;
      cVar9 = DAT_0c1b;
      cVar6 = DAT_0c1f;
      if ((cVar1 == '\0' && cVar9 == '\0') && cVar6 == '\0') {
        FUN_f1ce();
      }
      else {
        uVar3 = RAM0c1b;
        DAT_0df7._1_1_ = (char)(uVar3 >> 2);
        uVar3 = RAM0c1f;
        DAT_0df6 = (char)(uVar3 >> 2);
        uVar4 = RAM0c17;
        uVar2 = DAT_0df6;
        FUN_f26e();
      }
      bVar8 = DAT_0bfe;
      if ((bVar8 & 0x40) != 0) {
        DAT_0c03 = 0;
        DAT_0c04 = 0;
        DAT_0922 = 0;
        DAT_0923 = 0;
        bVar8 = DAT_0bfe;
        DAT_0bfe = bVar8 | 0x80;
        bVar8 = DAT_0880;
        DAT_0880 = bVar8 & 0x7f;
        bVar8 = DAT_0881;
        DAT_0881 = bVar8 & 0x7f;
        bVar8 = DAT_088c;
        DAT_088c = bVar8 & 0xdf;
        uVar3 = DAT_0c08;
        uVar5 = DAT_0c0c;
        DAT_0c14 = uVar3 + uVar5;
        cVar1 = DAT_0c07;
        cVar9 = DAT_0c0b;
        DAT_0c13 = cVar1 + cVar9 + CARRY2(uVar3,uVar5);
        cVar1 = DAT_0c07;
        if (cVar1 == '\0') {
          uVar3 = DAT_0c08;
          uVar5 = DAT_0db6;
          if (uVar3 < uVar5) {
            DAT_0c1f = 0xff;
            return;
          }
        }
        bVar7 = DAT_0c1f;
        bVar8 = DAT_0c1b;
        DAT_0c1f = bVar7 | bVar8;
        return;
      }
    }
    uVar2 = DAT_0c07;
    DAT_0c0b = uVar2;
    uVar4 = DAT_0c08;
    DAT_0c0c = uVar4;
  }
  cVar1 = DAT_0c05;
  bVar8 = cVar1 + 1;
  if (0xe < bVar8) {
    bVar8 = 1;
  }
  DAT_0c05 = bVar8;
  return;
}


