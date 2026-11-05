
void FUN_0216220c(void)

{
  int unaff_r4;
  char in_ZR;
  
  if (in_ZR != '\0') {
    *(byte *)(DAT_0216e7f0 + 0x4e6) = *(byte *)(DAT_0216e7f0 + 0x4e6) & 0xfc | 1;
    return;
  }
  if (unaff_r4 == 0xd) {
    *(byte *)(DAT_0216e7f0 + 0x4e6) = *(byte *)(DAT_0216e7f0 + 0x4e6) & 0xfc | 2;
    return;
  }
  *(byte *)(DAT_0216e7f0 + 0x4e6) = *(byte *)(DAT_0216e7f0 + 0x4e6) & 0xfc | 3;
  return;
}

