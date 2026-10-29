/* Entry c372 */

ushort interp_u8_q8_fraction(uchar fraction,byte *table_bias)

{
  byte bVar1;
  short sVar2;
  
  sVar2 = CONCAT11(fraction,fraction);
  if (fraction != '\0') {
    bVar1 = table_bias[4] - table_bias[3];
    if (table_bias[4] < table_bias[3]) {
      sVar2 = (ushort)(byte)-fraction * (ushort)(byte)-bVar1;
      return CONCAT11((char)((ushort)sVar2 >> 8) + table_bias[4],(char)sVar2);
    }
    sVar2 = (ushort)fraction * (ushort)bVar1;
  }
  return CONCAT11((char)((ushort)sVar2 >> 8) + table_bias[3],(char)sVar2);
}


