
void FUN_0215682c(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_1[7] != 0) {
    FUN_021558d8();
  }
  if (param_1[6] != 0) {
    FUN_02155f48();
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  FUN_0201b244(param_1);
  return;
}

