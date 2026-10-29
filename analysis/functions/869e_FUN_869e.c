/* Entry 869e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_869e(void)

{
  short sVar1;
  undefined3 uVar2;
  undefined2 uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  
  DAT_0881 = DAT_0881 & 0xfd;
  DAT_08c0 = DAT_08c0 | 0x20;
  sVar4 = (ushort)DAT_189a * 2 + 0xc58;
  DAT_0b3c = 0;
  while (DAT_0b3c = (DAT_0b3c + 1) - (0xfe < DAT_0b3c), DAT_0b3c < 5) {
    sVar4 = sVar4 + 2;
  }
  uVar5 = 0xcb8;
  DAT_0ccc = 0xcb8;
  DAT_0cce = 0xcb8;
  DAT_0b3c = 0;
  uVar6 = DAT_0ccc;
  while (DAT_0ccc = uVar6, DAT_0b3c = (DAT_0b3c + 1) - (0xfe < DAT_0b3c), DAT_0b3c < 5) {
    uVar5 = uVar5 + 2;
    uVar6 = uVar5;
    if ((uVar5 < DAT_0ccc) && (uVar6 = DAT_0ccc, uVar5 < DAT_0cce)) {
      DAT_0cce = uVar5;
    }
  }
  DAT_0cc2 = DAT_0ccc;
  DAT_0cc4 = DAT_0cce;
  if ((((((~DAT_08af & 0x20) == 0) && ((~DAT_08af & 0x10) == 0)) && ((~DAT_08af & 8) == 0)) &&
      ((((~DAT_08af & 4) == 0 && ((~DAT_089f & 0x80) == 0)) &&
       ((DAT_0ccc - DAT_0cce <= DAT_189c && (((~DAT_0881 & 0x10) == 0 && (DAT_18a0 <= DAT_08e8))))))
      )) && ((DAT_08e8 <= DAT_18a2 &&
             ((((DAT_18a4 <= DAT_0900 && (DAT_0900 <= DAT_18a6)) && (DAT_18a8 <= DAT_0c90)) &&
              (DAT_0c90 <= DAT_18aa)))))) {
    uVar6 = 0xcb8;
    DAT_0b3c = 0;
    _DAT_0dde = 0;
    while( true ) {
      sVar1 = uVar6 + RAM0x0ddf;
      _DAT_0dde = CONCAT12(DAT_0dde._0_1_ + CARRY2(uVar6,RAM0x0ddf),sVar1);
      uVar2 = _DAT_0dde;
      DAT_0b3c = (DAT_0b3c + 1) - (0xfe < DAT_0b3c);
      if (4 < DAT_0b3c) break;
      uVar6 = uVar6 + 2;
    }
    DAT_0de0._0_1_ = (undefined1)sVar1;
    RAM0x0de1 = CONCAT21(DAT_0dde / 5,(char)(CONCAT11((char)(DAT_0dde % 5),DAT_0de0._0_1_) / 5));
    DAT_0cc6 = _DAT_0de2;
    sVar1 = _DAT_0de2 - DAT_0cca;
    _DAT_0dde = uVar2;
    if (_DAT_0de2 < DAT_0cca) {
      uVar3 = scale_u16_by_u8(sVar4,CONCAT11((~(byte)((ushort)sVar1 >> 8) + 1) -
                                             ((char)-(char)sVar1 != '\0'),-(char)sVar1));
      sVar4 = CONCAT11((~(byte)((ushort)uVar3 >> 8) + 1) - ((char)-(char)uVar3 != '\0'),-(char)uVar3
                      );
    }
    else {
      sVar4 = scale_u16_by_u8(sVar4,sVar1);
    }
    DAT_0cc8 = sVar4 + DAT_0cca;
    DAT_0cca = DAT_0cc8;
  }
  DAT_08c0 = DAT_08c0 & 0xdf;
  return;
}


