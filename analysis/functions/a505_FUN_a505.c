/* Entry a505 */

void FUN_a505(void)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  
  bVar1 = DAT_00f0;
  DAT_00f0 = bVar1 & 0x7f;
  uVar3 = 0x5555;
LAB_a510:
  do {
    if (uVar3 != 0xfffe) {
      if (uVar3 + 2 < 0xfff) goto LAB_a510;
    }
    uVar4 = 0x800;
    do {
      if (uVar3 != uVar4) {
        cVar2 = -1;
        goto LAB_a538;
      }
      uVar4 = uVar4 + 2;
    } while ((uVar4 != 0) && (uVar4 < 0xfff));
    uVar3 = CONCAT11(~(byte)(uVar3 >> 8),~(byte)uVar3);
    if (uVar3 == 0x5555) {
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
  } while( true );
}


