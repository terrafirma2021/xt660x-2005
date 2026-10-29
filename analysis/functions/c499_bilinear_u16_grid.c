/* Entry c499 */

ushort bilinear_u16_grid(byte *table_bias,uchar columns,uchar row_index)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  byte *table_bias_00;
  
  DAT_0e0e = (ushort)columns * (ushort)row_index;
  sVar2 = DAT_0e0e;
  sVar3 = DAT_0e0e;
  bVar1 = DAT_0e06;
  table_bias_00 = table_bias + (ushort)bVar1 + (ushort)bVar1 + sVar3 + sVar2 + 0xf;
  uVar4 = DAT_0e08;
  uVar4 = interp_u16_q16_fraction(uVar4,table_bias_00);
  sVar2 = DAT_0e0a;
  if (sVar2 == 0) {
    return uVar4;
  }
  RAM0e06 = uVar4;
  uVar4 = DAT_0e08;
  uVar4 = interp_u16_q16_fraction(uVar4,table_bias_00 + (ushort)columns + (ushort)columns);
  DAT_0e08 = uVar4;
  uVar4 = DAT_0e0a;
  uVar4 = interp_u16_q16_fraction(uVar4,&UNK_0e00);
  return uVar4;
}


