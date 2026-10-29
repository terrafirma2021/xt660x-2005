/* Entry f3f3 */

void FUN_f3f3(void)

{
  byte bVar1;
  
  DAT_004e = 4;
  bVar1 = DAT_00e1;
  if ((bVar1 & 4) == 0) {
    DAT_0ab0 = DAT_0ab0 + 1;
    DAT_0b98 = CONCAT11((char)(DAT_0b98 + 1 >> 8),(char)(DAT_0b98 + 1) - (0xfffe < DAT_0b98));
  }
  else {
    bVar1 = DAT_004b;
    DAT_004b = bVar1 & 0xef | 0x20;
  }
  DAT_08be = DAT_08be & 0xef;
  return;
}


