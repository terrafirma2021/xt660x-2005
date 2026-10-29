/* Entry a505 */

void FUN_a505(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short *psVar4;
  
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0x7f;
  sVar3 = 0x5555;
  do {
    psVar4 = &DAT_0800;
    do {
      *psVar4 = sVar3;
      psVar4 = psVar4 + 1;
      if (psVar4 == (short *)0x0) break;
    } while (psVar4 < &UNK_0fff);
    psVar4 = &DAT_0800;
    do {
      if (sVar3 != *psVar4) {
        cVar2 = -1;
        goto LAB_a538;
      }
      psVar4 = psVar4 + 1;
    } while ((psVar4 != (short *)0x0) && (psVar4 < &UNK_0fff));
    sVar3 = CONCAT11(~(byte)((ushort)sVar3 >> 8),~(byte)sVar3);
  } while (sVar3 != 0x5555);
  cVar2 = '\0';
LAB_a538:
  if (cVar2 == '\0') {
    FUN_5fa4();
    bVar1 = DAT_00f0;
    DAT_00f0 = bVar1 | 0x80;
  }
  cVar2 = -1;
  do {
    cVar2 = cVar2 + '\x01';
    if (cVar2 == '\0') {
      FUN_5fa4();
      cVar2 = '\0';
    }
    bVar1 = DAT_0000;
  } while ((bVar1 & 0xe0) == 0x40);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


