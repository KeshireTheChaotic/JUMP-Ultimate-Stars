
undefined4 FUN_0215dc18(int param_1)

{
  if (*(int *)(&DAT_02168ab8 + *(int *)(param_1 + 0xac) * 4) < 0) {
    return 0;
  }
  FUN_0215e1b0();
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  return 1;
}

