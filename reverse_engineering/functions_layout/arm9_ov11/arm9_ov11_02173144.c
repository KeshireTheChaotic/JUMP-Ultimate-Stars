
void FUN_02173144(int *param_1,int param_2)

{
  if (param_2 == 0) {
    param_1[9] = param_1[9] & 0xfffffffe;
    if (*param_1 == 0) {
      return;
    }
    FUN_020282f4(*(undefined4 *)(*(int *)(*param_1 + 0x30) + 4));
    return;
  }
  param_1[9] = param_1[9] | 1;
  if (*param_1 == 0) {
    return;
  }
  FUN_02028330(*(undefined4 *)(*(int *)(*param_1 + 0x30) + 4));
  return;
}

