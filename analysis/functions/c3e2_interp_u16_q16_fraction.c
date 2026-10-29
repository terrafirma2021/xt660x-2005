/* Entry c3e2 */

ushort interp_u16_q16_fraction(ushort fraction,byte *table_bias)

{
  ushort uVar1;
  short sVar2;
  
  sVar2 = 0;
  if (fraction != 0) {
    uVar1 = *(ushort *)(table_bias + 8) - *(ushort *)(table_bias + 6);
    if (*(ushort *)(table_bias + 8) < *(ushort *)(table_bias + 6)) {
      return (short)((uint)CONCAT11((~(byte)(uVar1 >> 8) + 1) - ((char)-(char)uVar1 != '\0'),
                                    -(char)uVar1) *
                     (uint)CONCAT11((~(byte)(fraction >> 8) + 1) - ((char)-(char)fraction != '\0'),
                                    -(char)fraction) >> 0x10) + *(short *)(table_bias + 8);
    }
    sVar2 = (short)((uint)fraction * (uint)uVar1 >> 0x10);
  }
  return sVar2 + *(short *)(table_bias + 6);
}


