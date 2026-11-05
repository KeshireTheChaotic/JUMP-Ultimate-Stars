
void FUN_0214e158(int param_1)

{
  if (*(char *)(param_1 + 0x57) != '\x03') {
    if (*(char *)(param_1 + 0x57) == '\x01') {
      FUN_02073ebc(7,1);
      *(undefined1 *)(param_1 + 0x54) = 1;
      return;
    }
    FUN_02073ebc(3,1);
    *(undefined1 *)(param_1 + 0x54) = 1;
    return;
  }
  FUN_02073ebc(7,1);
  *(undefined1 *)(param_1 + 0x54) = 1;
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_02151474();
  return;
}

