/* Entry b817 */

void FUN_b817(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  ushort uVar5;
  
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 | 1;
  bVar1 = DAT_0882;
  DAT_0882 = bVar1 & 0xf7;
  bVar1 = DAT_0881;
  if ((~bVar1 & 0x10) == 0) {
    bVar1 = DAT_0afa;
    cVar4 = (bVar1 + 1) - (0xfe < bVar1);
  }
  else {
    cVar4 = '\0';
  }
  DAT_0afa = cVar4;
  bVar1 = DAT_09a1;
  if ((bVar1 & 0x20) != 0) {
    bVar1 = DAT_09ac;
    DAT_09ac = (bVar1 + 1) - (0xfe < bVar1);
  }
  bVar1 = DAT_09b6;
  if ((bVar1 & 8) != 0) {
    bVar1 = DAT_09ca;
    DAT_09ca = (bVar1 + 1) - (0xfe < bVar1);
  }
  uVar2 = DAT_08f4;
  DAT_0ba2._0_1_ = uVar2;
  DAT_0ba4 = 0x4a46;
  uVar5 = axis_index_u8_ascending('F');
  DAT_0a8e = uVar5;
  uVar2 = DAT_0900._0_1_;
  DAT_0ba2._0_1_ = uVar2;
  DAT_0ba4 = 0x4a56;
  uVar5 = axis_index_u8_ascending('V');
  DAT_0a90 = uVar5;
  uVar3 = DAT_0a90;
  DAT_0dde = uVar3;
  uVar3 = DAT_0a8e;
  DAT_0de0 = uVar3;
  uVar5 = bilinear_u8_grid(&UNK_4a5d,'\x0f');
  DAT_0a88 = (char)(uVar5 + 0x80 >> 8);
  uVar5 = lookup_u8_uniform_axis((uchar)(uVar5 + 0x80),&UNK_4a33);
  DAT_0a89 = (char)(uVar5 >> 8);
  uVar5 = lookup_u8_uniform_axis((uchar)uVar5,&UNK_3315);
  DAT_097b = (char)(uVar5 >> 8);
  uVar5 = lookup_u8_uniform_axis((uchar)uVar5,&UNK_3327);
  DAT_097c = (char)(uVar5 >> 8);
  uVar5 = lookup_u8_uniform_axis((uchar)uVar5,&UNK_34fd);
  DAT_0a0f = (char)(uVar5 >> 8);
  if (DAT_4243 == '\x02') {
    bVar1 = DAT_0884;
    DAT_0884 = bVar1 | 0x40;
  }
  else {
    bVar1 = DAT_0884;
    DAT_0884 = bVar1 & 0xbf;
  }
  uVar5 = DAT_08f2;
  uVar5 = lookup_u8_uniform_u16_axis(uVar5,&UNK_4bac);
  DAT_0d05 = (char)(uVar5 >> 8);
  bVar1 = DAT_08bc;
  DAT_08bc = bVar1 & 0xfe;
  return;
}


