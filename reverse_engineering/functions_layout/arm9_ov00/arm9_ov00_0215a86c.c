
void FUN_0215a86c(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x021bab64();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0206ae98();
  }
  func_0x021b526c(2);
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 8))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 8))();
  }
  FUN_0201b244(param_1);
  return;
}

