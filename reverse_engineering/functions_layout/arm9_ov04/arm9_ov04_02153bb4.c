
void FUN_02153bb4(int *param_1)

{
  if (param_1[0xb] == 0) {
    return;
  }
  (**(code **)(**(int **)(*param_1 + 4) + 0xb8))
            (*(int **)(*param_1 + 4),*(undefined4 *)(param_1[0xb] + 4));
  (**(code **)(*(int *)param_1[0xb] + 8))();
  param_1[0xb] = 0;
  return;
}

