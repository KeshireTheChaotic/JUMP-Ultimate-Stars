
void FUN_021cedc8(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_021cf870();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}

