/* Entry aab6 */

void FUN_aab6(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (DAT_0900._0_1_ < DAT_36d6) {
    puVar2 = (undefined *)0x0;
LAB_aaee:
    DAT_09b6 = DAT_09b6 & 0xfd;
  }
  else {
    if (DAT_0900._0_1_ < DAT_36d7) {
      puVar2 = (undefined *)0x1;
    }
    else if (DAT_0900._0_1_ < DAT_36d8) {
      puVar2 = &UNK_0102;
    }
    else if (DAT_0900._0_1_ < DAT_36d9) {
      puVar2 = &UNK_0203;
    }
    else {
      if (DAT_36da <= DAT_0900._0_1_) {
        puVar2 = &UNK_0305;
        goto LAB_aaee;
      }
      puVar2 = &UNK_0304;
    }
    DAT_09b6 = DAT_09b6 | 2;
  }
  DAT_09cb = (char)((ushort)puVar2 >> 8);
  DAT_09cd = (char)puVar2;
  if (DAT_36db < DAT_0c90._0_1_) {
    if (DAT_36dc < DAT_0c90._0_1_) {
      if (DAT_36dd < DAT_0c90._0_1_) {
        if (DAT_36de < DAT_0c90._0_1_) {
          if (DAT_36df < DAT_0c90._0_1_) {
            puVar3 = &UNK_0305;
            goto LAB_ab36;
          }
          puVar3 = &UNK_0304;
        }
        else {
          puVar3 = &UNK_0203;
        }
      }
      else {
        puVar3 = &UNK_0102;
      }
    }
    else {
      puVar3 = (undefined *)0x1;
    }
    DAT_09b6 = DAT_09b6 | 1;
    bVar1 = true;
  }
  else {
    puVar3 = (undefined *)0x0;
LAB_ab36:
    DAT_09b6 = DAT_09b6 & 0xfe;
    bVar1 = false;
  }
  DAT_09cc = (char)((ushort)puVar3 >> 8);
  DAT_09ce = (char)puVar3;
  if ((((DAT_09b6 & 2) != 0) && (bVar1)) || (CONCAT11((char)puVar2,(char)puVar3) == 0x100)) {
    DAT_09b6 = DAT_09b6 | 4;
  }
  else {
    DAT_09b6 = DAT_09b6 & 0xfb;
  }
  return;
}


