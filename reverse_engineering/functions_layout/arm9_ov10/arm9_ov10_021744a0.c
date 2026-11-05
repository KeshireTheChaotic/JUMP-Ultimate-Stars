
void FUN_021744a0(int param_1)

{
  if (*(char *)(param_1 + 0x1000) == -1) {
    FUN_02053ed0(param_1 + 0x1bf4);
    *(undefined4 *)(param_1 + 0x1c0c) = 1;
    FUN_02053e60(param_1 + 0x1bf4);
    if (*(int *)(param_1 + 0x1ba0) != 0) {
      FUN_020532f8(param_1 + 0x1b34);
    }
  }
  return;
}

