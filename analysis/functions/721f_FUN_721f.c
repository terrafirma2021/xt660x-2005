/* Entry 721f */

void FUN_721f(void)

{
  DAT_0bfe = DAT_0bfe & 0x3f;
  DAT_0ca8 = DAT_0ca8 & 0xf8;
  DAT_091b = 0xe;
  DAT_091c = 0xe;
  DAT_091d = 0xe;
  DAT_091e = 0xe;
  DAT_091f = 0xe;
  DAT_0920 = 0xe;
  DAT_0b09 = 0xe;
  DAT_0880 = DAT_0880 & 0xf5 | 0x44;
  DAT_0881 = DAT_0881 & 0xf7 | 0xd0;
  DAT_0883 = DAT_0883 & 0xcf;
  DAT_088b = 0;
  DAT_0a16 = DAT_0a16 & 0xf7;
  DAT_0a92 = DAT_0a92 & 0x55;
  DAT_0cf2 = DAT_0cf2 & 0xf8;
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
  DAT_0a1c = DAT_18e0;
  if (0x16 < DAT_18e0) {
    DAT_0a1c = 0x16;
  }
  if (DAT_0a1c < 0xc) {
    if (DAT_0a1c == 0xb) {
      DAT_0a1c = 10;
    }
  }
  else {
    DAT_0a1c = DAT_0a1c - 0xc;
  }
  if (DAT_0d7b < 0x17) {
    DAT_0a1a = DAT_0d7b;
    if (DAT_0d7b == 0xb) {
      DAT_0a1a = 10;
    }
  }
  else {
    DAT_0a1a = 0x16;
  }
  DAT_0abf = DAT_0abf & 0xf8;
  DAT_0ac2 = 0;
  DAT_0ac4 = 0;
  DAT_0ac6 = 0;
  DAT_0aca = 0;
  DAT_0ac0 = 0;
  DAT_0ac8 = 0;
  DAT_0acc = 0;
  DAT_0d08 = DAT_0d08 & 0xfd;
  DAT_0a1d = DAT_0a1c;
  DAT_0a1e = DAT_0a1c;
  DAT_0a1f = DAT_0a1c;
  if (DAT_32ee != -0x80) {
    DAT_0994 = lookup_u8_uniform_axis(&UNK_32ef);
    DAT_0996 = lookup_u8_uniform_axis(&UNK_3301);
  }
  DAT_0e21 = DAT_0e21 & 0x7f;
  return;
}


