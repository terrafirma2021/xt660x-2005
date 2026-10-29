/* Entry 5f35 */

void FUN_5f35(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = DAT_0d1a;
  cVar2 = DAT_0d1d;
  if (((cVar3 == cVar2) || (cVar2 = DAT_0d20, cVar3 == cVar2)) ||
     (cVar3 = DAT_0d1d, cVar2 = DAT_0d20, cVar3 == cVar2)) {
    DAT_0d37._0_1_ = cVar3;
    cVar3 = DAT_0d1b;
    cVar2 = DAT_0d1e;
    if (((cVar3 == cVar2) || (cVar2 = DAT_0d21, cVar3 == cVar2)) ||
       (cVar3 = DAT_0d1e, cVar2 = DAT_0d21, cVar3 == cVar2)) {
      do {
        DAT_0d37._1_1_ = 0;
        cVar3 = DAT_0d1c;
        cVar2 = DAT_0d1f;
        if ((cVar3 == cVar2) || (cVar2 = DAT_0d22, cVar3 == cVar2)) {
          DAT_0d39 = cVar3;
          goto LAB_5f9e;
        }
        cVar3 = DAT_0d1f;
        cVar2 = DAT_0d22;
      } while (cVar3 == cVar2);
      DAT_0d37 = 0xff00;
      DAT_0d39 = 0xff;
    }
    else {
      DAT_0d37 = 0xff00;
      DAT_0d39 = 0xff;
    }
  }
  else {
    DAT_0d37 = 0xff00;
    DAT_0d39 = 0xff;
  }
LAB_5f9e:
  bVar1 = DAT_0d08;
  DAT_0d08 = bVar1 | 0x80;
  return;
}


