
void FUN_02036220(int param_1,int *param_2)

{
  *(int **)(param_1 + 0x3c) = param_2;
  (**(code **)(*param_2 + 8))();
  return;
}

