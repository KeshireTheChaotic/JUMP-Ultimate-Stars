
void FUN_021af230(int param_1)

{
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_021af1d4();
    (**(code **)(param_1 + 0xa0))();
  }
  return;
}

