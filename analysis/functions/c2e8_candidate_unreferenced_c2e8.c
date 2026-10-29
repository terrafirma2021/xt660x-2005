/* Entry c2e8 */

ushort candidate_unreferenced_c2e8(byte param_1,undefined2 param_2)

{
  byte bVar1;
  char cVar2;
  byte fraction;
  short sVar3;
  ushort uVar4;
  byte *table_bias;
  
  RAM0dee = param_2;
  bVar1 = DAT_0dea;
  sVar3 = RAM0dee;
  fraction = DAT_0dec;
  table_bias = (byte *)((ushort)fraction + (ushort)bVar1 * (ushort)param_1 + sVar3);
  uVar4 = interp_u8_q8_fraction(fraction,table_bias);
  cVar2 = DAT_0deb;
  if (cVar2 == '\0') {
    DAT_0df4 = uVar4;
    uVar4 = DAT_0df4;
  }
  else {
    DAT_0dee = (char)(uVar4 + 0x80 >> 8);
    uVar4 = interp_u8_q8_fraction(param_1,table_bias + param_1);
    DAT_0def = (char)(uVar4 + 0x80 >> 8);
    uVar4 = interp_u8_q8_fraction((uchar)(uVar4 + 0x80),&DAT_0deb);
  }
  return uVar4;
}


