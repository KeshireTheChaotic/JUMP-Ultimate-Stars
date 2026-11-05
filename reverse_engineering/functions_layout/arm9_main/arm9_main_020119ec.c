
void FUN_020119ec(int param_1)

{
  if (*(char *)(param_1 + 0x29) == '\0') {
    FUN_0201cca0(DAT_020a1094,param_1);
    *(undefined1 *)(param_1 + 0x29) = 1;
    return;
  }
  return;
}

