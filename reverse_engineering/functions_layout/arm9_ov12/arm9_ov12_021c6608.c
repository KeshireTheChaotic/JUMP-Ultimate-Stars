
void FUN_021c6608(int *param_1)

{
  FUN_021cb80c(param_1 + 0x10);
  if (param_1[0x15] != 0) {
    (**(code **)(*param_1 + 0x70))();
    (**(code **)(*(int *)param_1[0x15] + 0xc))();
  }
  return;
}

