/* Entry c063 */

void FUN_c063(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  
  bVar3 = DAT_08bf;
  DAT_08bf = bVar3 | 0x20;
  bVar3 = DAT_08b6;
  if ((bVar3 & 0x40) == 0) {
    DAT_0b43 = 0;
  }
  else {
    bVar3 = DAT_0b43;
    DAT_0b43 = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_08b6;
  if ((bVar3 & 0x20) == 0) {
    DAT_0b44 = 0;
  }
  else {
    bVar3 = DAT_0b44;
    DAT_0b44 = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_08b6;
  if ((bVar3 & 0x10) == 0) {
    DAT_0b45 = 0;
  }
  else {
    bVar3 = DAT_0b45;
    DAT_0b45 = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_08b7;
  if ((bVar3 & 0x80) == 0) {
    DAT_0b48 = 0;
  }
  else {
    DAT_0b52 = 0;
    bVar3 = DAT_0b48;
    DAT_0b48 = (bVar3 + 1) - (0xfe < bVar3);
  }
  cVar1 = DAT_0d7e;
  cVar2 = DAT_0d9d;
  bVar3 = cVar1 + cVar2;
  if (bVar3 == 0x17) {
    bVar3 = 0x16;
  }
  else if (0x16 < bVar3) {
    bVar3 = bVar3 - 0x18;
  }
  DAT_0cab = bVar3;
  bVar3 = DAT_08b7;
  if ((bVar3 & 0x10) == 0) {
    DAT_0b4a = 0;
  }
  else {
    DAT_0b54 = 0;
    bVar3 = DAT_0b4a;
    DAT_0b4a = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_08b7;
  if ((bVar3 & 8) == 0) {
    DAT_0b54 = 0;
  }
  else {
    DAT_0b4a = 0;
    bVar3 = DAT_0b54;
    DAT_0b54 = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0881;
  if ((~bVar3 & 0x10) == 0) {
    DAT_0caf = 0;
  }
  else {
    bVar3 = DAT_0caf;
    DAT_0caf = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0adb;
  if ((bVar3 & 0x80) == 0) {
    DAT_0adc = 0;
  }
  else {
    bVar3 = DAT_0adc;
    DAT_0adc = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0adb;
  if ((bVar3 & 0x40) == 0) {
    DAT_0add = 0;
  }
  else {
    bVar3 = DAT_0add;
    DAT_0add = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0adb;
  if ((bVar3 & 0x20) == 0) {
    DAT_0ade = 0;
  }
  else {
    bVar3 = DAT_0ade;
    DAT_0ade = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0adb;
  if ((bVar3 & 0x10) == 0) {
    DAT_0adf = 0;
  }
  else {
    bVar3 = DAT_0adf;
    DAT_0adf = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0adb;
  if ((bVar3 & 8) == 0) {
    DAT_0ae0 = 0;
  }
  else {
    bVar3 = DAT_0ae0;
    DAT_0ae0 = (bVar3 + 1) - (0xfe < bVar3);
  }
  bVar3 = DAT_0887;
  DAT_0887 = bVar3 & 0x7f;
  bVar3 = DAT_08bf;
  DAT_08bf = bVar3 & 0xdf;
  return;
}


