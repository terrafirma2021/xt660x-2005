/* Entry 6987 */

void FUN_6987(void)

{
  byte bVar1;
  char in_CCR;
  
  bVar1 = DAT_0008;
  (*(code *)(&UNK_6960 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7)))
            (&UNK_6960 + (byte)((bVar1 & 0xc) >> 1 | in_CCR << 7));
  return;
}


