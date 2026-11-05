
void FUN_020123d8(int param_1)

{
  if (*(char *)(param_1 + 0x29) != '\0') {
    if ((*(char *)(param_1 + 0x28) == '\0') &&
       ((*(byte *)(*(int *)(param_1 + 0x1c) + 0x28) & 1) != 0)) {
      return;
    }
    FUN_0201199c();
    return;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x1c) + 0x28) & 1) == 0) {
    return;
  }
  FUN_020119ec();
  return;
}

