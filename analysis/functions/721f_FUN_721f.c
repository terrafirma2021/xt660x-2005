/* Entry 721f */

void FUN_721f(void)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = DAT_0bfe;
  DAT_0bfe = bVar1 & 0x3f;
  bVar1 = DAT_0ca8;
  DAT_0ca8 = bVar1 & 0xf8;
  DAT_091b = 0xe;
  DAT_091c = 0xe;
  DAT_091d = 0xe;
  DAT_091e = 0xe;
  DAT_091f = 0xe;
  DAT_0920 = 0xe;
  DAT_0b09 = 0xe;
  bVar1 = DAT_0880;
  DAT_0880 = bVar1 | 0x44;
  bVar1 = DAT_0880;
  DAT_0880 = bVar1 & 0xfd;
  bVar1 = DAT_0880;
  DAT_0880 = bVar1 & 0xf7;
  bVar1 = DAT_0881;
  DAT_0881 = bVar1 | 0xd0;
  bVar1 = DAT_0881;
  DAT_0881 = bVar1 & 0xf7;
  bVar1 = DAT_0883;
  DAT_0883 = bVar1 & 0xef;
  bVar1 = DAT_0883;
  DAT_0883 = bVar1 & 0xdf;
  DAT_088b = 0;
  bVar1 = DAT_0a16;
  DAT_0a16 = bVar1 & 0xf7;
  bVar1 = DAT_0a92;
  DAT_0a92 = bVar1 & 0x7f;
  bVar1 = DAT_0a92;
  DAT_0a92 = bVar1 & 0xdf;
  bVar1 = DAT_0a92;
  DAT_0a92 = bVar1 & 0xf7;
  bVar1 = DAT_0a92;
  DAT_0a92 = bVar1 & 0xfd;
  bVar1 = DAT_0cf2;
  DAT_0cf2 = bVar1 & 0xfb;
  bVar1 = DAT_0cf2;
  DAT_0cf2 = bVar1 & 0xfd;
  bVar1 = DAT_0cf2;
  DAT_0cf2 = bVar1 & 0xfe;
  DAT_08f8 = 0;
  DAT_08fa = 0;
  DAT_08fe = 0;
  DAT_08fc = 0;
  DAT_0906 = 0;
  DAT_0900 = 0;
  DAT_0902 = 0;
  DAT_0a22 = 0;
  DAT_0a24 = 0;
  DAT_0a26 = 0;
  DAT_0a28 = 0;
  DAT_0a4f = 0;
  DAT_0a51 = 0;
  DAT_0c8a = 0;
  DAT_0c8e = 0;
  DAT_0c90 = 0;
  DAT_0c9a = 0;
  DAT_0c9c = 0;
  DAT_0c88 = 0;
  DAT_0a20 = 0;
  DAT_0a21 = 0;
  DAT_0afe = 0;
  DAT_0afa = 0;
  DAT_0ae2 = 0;
  DAT_0c05 = 0;
  DAT_0c33 = 0;
  DAT_0caa = 0;
  DAT_0ca9 = 0;
  DAT_0c35 = 0;
  DAT_0cf3 = 0;
  DAT_0cf4 = 0;
  DAT_0a52 = 0;
  DAT_0a53 = 0;
  DAT_0a38 = 0xffff;
  DAT_0a3a = 0xffff;
  DAT_0a3c = 0xffff;
  DAT_0a3e = 0xffff;
  DAT_0a40 = 0xffff;
  DAT_0a42 = 0xffff;
  DAT_0a34 = 0xffff;
  DAT_0a2e = 0xffff;
  DAT_0a44 = 0xffff;
  DAT_0a46 = 0xffff;
  DAT_0a48 = 0xffff;
  DAT_0a4b = 0xffff;
  DAT_0a4d = 0xff;
  DAT_0a80 = 0xffff;
  DAT_0921 = 0xff;
  DAT_0922 = 0xc0;
  DAT_0c03 = 0xc0;
  DAT_0924 = 6;
  bVar1 = DAT_18e0;
  if (0x16 < DAT_18e0) {
    bVar1 = 0x16;
  }
  if (bVar1 < 0xc) {
    if (bVar1 == 0xb) {
      bVar1 = 10;
    }
  }
  else {
    bVar1 = bVar1 - 0xc;
  }
  DAT_0a1c = bVar1;
  DAT_0a1e = bVar1;
  DAT_0a1d = bVar1;
  DAT_0a1f = bVar1;
  bVar1 = DAT_0d7b;
  if (bVar1 < 0x17) {
    if (bVar1 == 0xb) {
      bVar1 = 10;
    }
  }
  else {
    bVar1 = 0x16;
  }
  DAT_0a1a = bVar1;
  bVar1 = DAT_0abf;
  DAT_0abf = bVar1 & 0xfb;
  bVar1 = DAT_0abf;
  DAT_0abf = bVar1 & 0xfe;
  bVar1 = DAT_0abf;
  DAT_0abf = bVar1 & 0xfd;
  DAT_0ac2 = 0;
  DAT_0ac4 = 0;
  DAT_0ac6 = 0;
  DAT_0aca = 0;
  DAT_0ac0 = 0;
  DAT_0ac8 = 0;
  DAT_0acc = 0;
  bVar1 = DAT_0d08;
  DAT_0d08 = bVar1 & 0xfd;
  if (DAT_32ee != -0x80) {
    uVar2 = lookup_u8_uniform_axis('\0',&UNK_32ef);
    DAT_0994 = uVar2;
    uVar2 = lookup_u8_uniform_axis((uchar)uVar2,&UNK_3301);
    DAT_0996 = uVar2;
  }
  bVar1 = DAT_0e21;
  DAT_0e21 = bVar1 & 0x7f;
  return;
}


