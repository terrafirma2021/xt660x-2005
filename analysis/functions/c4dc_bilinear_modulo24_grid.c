/* Entry c4dc */

ushort bilinear_modulo24_grid(byte *table_bias,uchar columns)

{
  byte bVar1;
  char cVar2;
  byte fraction;
  short sVar3;
  ushort uVar4;
  byte *table_bias_00;
  
  RAM0de2 = table_bias;
  bVar1 = DAT_0dde._0_1_;
  sVar3 = RAM0de2;
  fraction = DAT_0de0._0_1_;
  table_bias_00 = (byte *)((ushort)fraction + (ushort)bVar1 * (ushort)columns + sVar3);
  uVar4 = interp_modulo24(fraction,table_bias_00);
  cVar2 = DAT_0dde._1_1_;
  if (cVar2 == '\0') {
    RAM0de8 = uVar4;
    uVar4 = RAM0de8;
  }
  else {
    DAT_0de2 = (char)(uVar4 + 0x80 >> 8);
    uVar4 = interp_modulo24(columns,table_bias_00 + columns);
    DAT_0de3 = (char)(uVar4 + 0x80 >> 8);
    uVar4 = interp_modulo24((uchar)(uVar4 + 0x80),(byte *)((short)&DAT_0dde + 1));
  }
  return uVar4;
}


