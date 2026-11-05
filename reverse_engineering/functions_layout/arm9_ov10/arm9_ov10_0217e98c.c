
void FUN_0217e98c(int param_1)

{
  if (DAT_021a7d10 != 0) {
    param_1 = param_1 * 0x30;
    *(undefined4 *)(DAT_021a7d10 + param_1 + 0xc) = 0;
    *(undefined4 *)(DAT_021a7d10 + param_1 + 0x10) = 0;
    *(undefined4 *)(DAT_021a7d10 + param_1 + 0x14) = 0;
    *(undefined4 *)(DAT_021a7d10 + param_1 + 0x18) = 0;
    *(undefined1 *)(DAT_021a7d10 + param_1 + 0x1c) = 0;
    if (*(char *)(DAT_021a7d10 + 0x1d + param_1) != '\0') {
      *(undefined1 *)(DAT_021a7d10 + 0x1d + param_1) = 1;
    }
    *(undefined2 *)(DAT_021a7d10 + param_1 + 0x22) = 0;
  }
  return;
}

