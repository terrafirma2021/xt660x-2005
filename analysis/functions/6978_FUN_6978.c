/* Entry 6978 */

void FUN_6978(void)

{
  byte bVar1;
  char in_CCR;
  
  bVar1 = DAT_0008;
  (**(code **)(BYTE_ARRAY_6948 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7) + 0x10))
            (*(code **)(BYTE_ARRAY_6948 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7) + 0x10));
  return;
}


