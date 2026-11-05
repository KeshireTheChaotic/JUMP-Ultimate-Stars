
void FUN_0214f4c0(int *param_1)

{
  if (param_1[6] != 0) {
    FUN_0206ae98();
    param_1[6] = 0;
  }
  if (*param_1 != 0) {
    FUN_0206c650(*(undefined4 *)(*param_1 + 0xc));
    FUN_02074608(*param_1);
    *param_1 = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 0xc))();
    param_1[2] = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0xc))();
    param_1[1] = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 8))();
    param_1[3] = 0;
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 8))();
    param_1[4] = 0;
  }
  if ((int *)param_1[5] == (int *)0x0) {
    return;
  }
  (**(code **)(*(int *)param_1[5] + 8))();
  param_1[5] = 0;
  return;
}

