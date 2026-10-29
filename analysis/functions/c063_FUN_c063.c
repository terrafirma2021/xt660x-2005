/* Entry c063 */

void FUN_c063(void)

{
  if ((DAT_08b6 & 0x40) == 0) {
    DAT_0b43 = '\0';
  }
  else {
    DAT_0b43 = (DAT_0b43 + 1) - (0xfe < DAT_0b43);
  }
  if ((DAT_08b6 & 0x20) == 0) {
    DAT_0b44 = '\0';
  }
  else {
    DAT_0b44 = (DAT_0b44 + 1) - (0xfe < DAT_0b44);
  }
  if ((DAT_08b6 & 0x10) == 0) {
    DAT_0b45 = '\0';
  }
  else {
    DAT_0b45 = (DAT_0b45 + 1) - (0xfe < DAT_0b45);
  }
  if ((DAT_08b7 & 0x80) == 0) {
    DAT_0b48 = '\0';
  }
  else {
    DAT_0b52 = 0;
    DAT_0b48 = (DAT_0b48 + 1) - (0xfe < DAT_0b48);
  }
  DAT_0cab = DAT_0d7e + DAT_0d9d;
  if (DAT_0cab == 0x17) {
    DAT_0cab = 0x16;
  }
  else if (0x16 < DAT_0cab) {
    DAT_0cab = DAT_0cab - 0x18;
  }
  if ((DAT_08b7 & 0x10) == 0) {
    DAT_0b4a = '\0';
  }
  else {
    DAT_0b54 = 0;
    DAT_0b4a = (DAT_0b4a + 1) - (0xfe < DAT_0b4a);
  }
  if ((DAT_08b7 & 8) == 0) {
    DAT_0b54 = '\0';
  }
  else {
    DAT_0b4a = '\0';
    DAT_0b54 = (DAT_0b54 + 1) - (0xfe < DAT_0b54);
  }
  if ((~DAT_0881 & 0x10) == 0) {
    DAT_0caf = (DAT_0caf + 1) - (0xfe < DAT_0caf);
  }
  else {
    DAT_0caf = '\0';
  }
  if ((DAT_0adb & 0x80) == 0) {
    DAT_0adc = '\0';
  }
  else {
    DAT_0adc = (DAT_0adc + 1) - (0xfe < DAT_0adc);
  }
  if ((DAT_0adb & 0x40) == 0) {
    DAT_0add = '\0';
  }
  else {
    DAT_0add = (DAT_0add + 1) - (0xfe < DAT_0add);
  }
  if ((DAT_0adb & 0x20) == 0) {
    DAT_0ade = '\0';
  }
  else {
    DAT_0ade = (DAT_0ade + 1) - (0xfe < DAT_0ade);
  }
  if ((DAT_0adb & 0x10) == 0) {
    DAT_0adf = '\0';
  }
  else {
    DAT_0adf = (DAT_0adf + 1) - (0xfe < DAT_0adf);
  }
  if ((DAT_0adb & 8) == 0) {
    DAT_0ae0 = '\0';
  }
  else {
    DAT_0ae0 = (DAT_0ae0 + 1) - (0xfe < DAT_0ae0);
  }
  DAT_0887 = DAT_0887 & 0x7f;
  DAT_08bf = DAT_08bf & 0xdf;
  return;
}


