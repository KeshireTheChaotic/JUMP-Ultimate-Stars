
void FUN_0214f6ac(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    FUN_020282f4(*(undefined4 *)(*param_1 + 4));
  }
  if (param_1[1] != 0) {
    FUN_020282f4(*(undefined4 *)(param_1[1] + 4));
  }
  FUN_02087348();
  return;
}

