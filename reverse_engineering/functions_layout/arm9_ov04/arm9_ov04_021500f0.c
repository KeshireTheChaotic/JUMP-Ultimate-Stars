
void FUN_021500f0(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  if (param_1[5] != 0) {
    FUN_0201b268();
  }
  if (param_1[4] != 0) {
    FUN_0201b268();
  }
  if (param_1[3] != 0) {
    FUN_0201b268();
  }
  if (param_1[2] != 0) {
    FUN_0201b268();
  }
  FUN_0201b244(param_1);
  return;
}

