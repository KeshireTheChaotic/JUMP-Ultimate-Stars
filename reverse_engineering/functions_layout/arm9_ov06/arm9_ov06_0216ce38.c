
void FUN_0216ce38(int *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  if ((*(uint *)(*param_1 + 0x2c) & 1) == 0) {
    return;
  }
  *param_1 = 0;
  FUN_020282f4(*(undefined4 *)(param_1[2] + 4));
  return;
}

