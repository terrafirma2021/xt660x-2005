/* Entry a462 */

void FUN_a462(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  bVar1 = DAT_09cf;
  if ((bVar1 & 0x10) != 0) {
    uVar2 = DAT_09d2;
    uVar3 = DAT_09da;
    if (uVar3 <= uVar2) {
      if (uVar2 != uVar3) goto LAB_a484;
      bVar1 = DAT_09de;
      bVar1 = (bVar1 + 1) - (0xfe < bVar1);
      DAT_09de = bVar1;
      if (bVar1 < DAT_3214) {
        return;
      }
    }
    bVar1 = DAT_09cf;
    DAT_09cf = bVar1 & 0xef;
  }
LAB_a484:
  DAT_09de = 0;
  return;
}


