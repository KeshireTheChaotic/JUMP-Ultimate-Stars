
void FUN_021cc9cc(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4,
                 int param_5)

{
  *param_1 = *param_4;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_4 + 1);
  *(undefined1 *)((int)param_1 + 3) = 0;
  if (param_5 == 2) {
    FUN_021cca58(param_1 + 2);
    return;
  }
  if (param_5 == 3) {
    FUN_021cce94(param_1 + 2);
    return;
  }
  if (param_5 == 4) {
    FUN_021cd82c(param_1 + 2);
    return;
  }
  return;
}

