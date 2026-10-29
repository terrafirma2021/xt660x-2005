/* Entry c521 */

ushort interp_modulo24(uchar fraction,byte *table_bias)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char cVar5;
  short sVar4;
  undefined1 uVar6;
  
  bVar1 = DAT_0d7e;
  cVar5 = table_bias[3] - bVar1;
  if (table_bias[3] < bVar1) {
    cVar5 = cVar5 + '\x18';
  }
  DAT_0de4 = cVar5;
  bVar1 = DAT_0d7e;
  cVar5 = table_bias[4] - bVar1;
  if (table_bias[4] < bVar1) {
    cVar5 = cVar5 + '\x18';
  }
  DAT_0de5._0_1_ = cVar5;
  sVar4 = CONCAT11(fraction,fraction);
  if (fraction != '\0') {
    bVar3 = DAT_0de5._0_1_;
    bVar1 = DAT_0de4;
    if (bVar3 < bVar1) {
      sVar4 = (ushort)(byte)-fraction * (ushort)(byte)-(bVar3 - bVar1);
      cVar5 = DAT_0de5._0_1_;
      cVar5 = (char)((ushort)sVar4 >> 8) + cVar5;
      uVar6 = (undefined1)sVar4;
      goto LAB_c551;
    }
    sVar4 = (ushort)fraction * (ushort)(byte)(bVar3 - bVar1);
  }
  cVar5 = DAT_0de4;
  cVar5 = (char)((ushort)sVar4 >> 8) + cVar5;
  uVar6 = (undefined1)sVar4;
LAB_c551:
  cVar2 = DAT_0d7e;
  bVar1 = cVar5 + cVar2;
  if (0x17 < bVar1) {
    bVar1 = bVar1 - 0x18;
  }
  return CONCAT11(bVar1,uVar6);
}


