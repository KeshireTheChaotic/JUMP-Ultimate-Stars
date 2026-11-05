
void FUN_021695d4(int *param_1)

{
  if (param_1 != (int *)0x0) {
    DAT_0216df78 = 0;
    if ((int *)param_1[3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[3] + 8))();
      param_1[3] = 0;
    }
    if ((int *)param_1[4] != (int *)0x0) {
      (**(code **)(*(int *)param_1[4] + 8))();
      param_1[4] = 0;
    }
    if (param_1[7] != 0) {
      FUN_02034d7c();
      param_1[7] = 0;
    }
    if (param_1[5] != 0) {
      (**(code **)(**(int **)(param_1[5] + 4) + 0xc))();
      param_1[5] = 0;
    }
    if ((int *)param_1[6] != (int *)0x0) {
      (**(code **)(*(int *)param_1[6] + 0xc))();
      param_1[6] = 0;
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 8))();
      *param_1 = 0;
    }
    FUN_0201b244(param_1);
  }
  return;
}

