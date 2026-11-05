
void FUN_0214f660(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 8))();
  }
  FUN_0201b244(param_1);
  FUN_02087348();
  return;
}

