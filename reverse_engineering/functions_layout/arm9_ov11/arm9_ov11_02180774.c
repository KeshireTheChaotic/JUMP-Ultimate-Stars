
void FUN_02180774(int param_1)

{
  if (*(byte *)(param_1 + 0xad) < 5) {
    *(byte *)(param_1 + 0xad) = *(byte *)(param_1 + 0xad) + 1;
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x18) == '\f') {
    return;
  }
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x105) = 1;
  return;
}

