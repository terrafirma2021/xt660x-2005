/* Entry 7208 */

void candidate_unreferenced_7208(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar1 = DAT_0885;
  bVar2 = DAT_0de0._0_1_;
  bVar4 = DAT_0de0._1_1_;
  bVar3 = DAT_0de0._0_1_;
  RAM0de1 = CONCAT11(((bVar1 ^ bVar2) & bVar4) + (~(bVar1 ^ bVar2) & bVar3),bVar1);
  return;
}


