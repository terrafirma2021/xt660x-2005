/* Entry 6726 */

void FUN_6726(void)

{
  undefined2 uVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  
  uVar1 = RAM08b8;
  RAM0b67 = uVar1;
  uVar1 = RAM08ba;
  RAM0b69 = uVar1;
  cVar2 = DAT_0b67;
  cVar3 = DAT_0b68;
  if (cVar2 == '\0' && cVar3 == '\0') {
    cVar2 = DAT_0b69;
    cVar3 = DAT_0b6a;
    if (cVar2 == '\0' && cVar3 == '\0') {
      uVar5 = 0;
      goto LAB_676e;
    }
  }
  sVar7 = 0x20;
  DAT_0b71 = 0;
  sVar6 = RAM0b67;
  sVar8 = RAM0b69;
  do {
    uVar4 = (ushort)sVar6 >> 0xf;
    sVar6 = sVar6 << 1;
    if (sVar8 < 0) {
      cVar2 = DAT_0b71;
      DAT_0b71 = cVar2 + '\x01';
    }
    sVar7 = sVar7 + -1;
    sVar8 = CONCAT11((char)((ushort)sVar8 >> 8) << 1 | (byte)sVar8 >> 7,
                     (byte)sVar8 << 1 | (byte)uVar4);
  } while (sVar7 != 0);
  uVar5 = DAT_0b71;
LAB_676e:
  DAT_0bdf = uVar5;
  return;
}


