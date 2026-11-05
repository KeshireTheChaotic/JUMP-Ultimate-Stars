
void FUN_0201199c(int param_1)

{
  if (*(char *)(param_1 + 0x29) == '\0') {
    return;
  }
  if (DAT_020a0d28 == param_1) {
    DAT_020a0d28 = *(int *)(param_1 + 0xc);
  }
  FUN_0201cdb4(DAT_020a1094,param_1);
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}

