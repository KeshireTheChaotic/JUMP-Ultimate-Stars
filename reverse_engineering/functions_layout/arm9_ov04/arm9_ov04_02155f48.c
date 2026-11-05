
void FUN_02155f48(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  FUN_0201b244(param_1);
  return;
}

