/* Entry aab6 */

void FUN_aab6(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  
  bVar1 = DAT_0900._0_1_;
  if (bVar1 < DAT_36d6) {
    puVar4 = (undefined *)0x0;
LAB_aaee:
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 & 0xfd;
  }
  else {
    if (bVar1 < DAT_36d7) {
      puVar4 = (undefined *)0x1;
    }
    else if (bVar1 < DAT_36d8) {
      puVar4 = &UNK_0102;
    }
    else if (bVar1 < DAT_36d9) {
      puVar4 = &UNK_0203;
    }
    else {
      if (DAT_36da <= bVar1) {
        puVar4 = &UNK_0305;
        goto LAB_aaee;
      }
      puVar4 = &UNK_0304;
    }
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 | 2;
  }
  DAT_09cb = (char)((ushort)puVar4 >> 8);
  DAT_09cd = (char)puVar4;
  bVar1 = DAT_0c90._0_1_;
  if (DAT_36db < bVar1) {
    if (DAT_36dc < bVar1) {
      if (DAT_36dd < bVar1) {
        if (DAT_36de < bVar1) {
          if (DAT_36df < bVar1) {
            puVar4 = &UNK_0305;
            goto LAB_ab36;
          }
          puVar4 = &UNK_0304;
        }
        else {
          puVar4 = &UNK_0203;
        }
      }
      else {
        puVar4 = &UNK_0102;
      }
    }
    else {
      puVar4 = (undefined *)0x1;
    }
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 | 1;
  }
  else {
    puVar4 = (undefined *)0x0;
LAB_ab36:
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 & 0xfe;
  }
  DAT_09cc = (char)((ushort)puVar4 >> 8);
  DAT_09ce = (char)puVar4;
  bVar1 = DAT_09b6;
  if ((((bVar1 & 2) == 0) || (bVar1 = DAT_09b6, (bVar1 & 1) == 0)) &&
     (uVar2 = DAT_09cd, uVar3 = DAT_09ce, CONCAT11(uVar2,uVar3) != 0x100)) {
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 & 0xfb;
  }
  else {
    bVar1 = DAT_09b6;
    DAT_09b6 = bVar1 | 4;
  }
  return;
}


