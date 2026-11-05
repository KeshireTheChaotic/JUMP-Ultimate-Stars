
void FUN_0219c024(void)

{
  undefined4 in_r3;
  
  if (*(int *)(DAT_0214ccf8 + 0x3c) == 0) {
    FUN_021a2e14(DAT_0214ccf8 + 0xc24,0xff,1,0,in_r3);
    *(undefined4 *)(DAT_0214ccf8 + 0x3c) = 10;
    return;
  }
  *(int *)(DAT_0214ccf8 + 0x3c) = *(int *)(DAT_0214ccf8 + 0x3c) + -1;
  return;
}

