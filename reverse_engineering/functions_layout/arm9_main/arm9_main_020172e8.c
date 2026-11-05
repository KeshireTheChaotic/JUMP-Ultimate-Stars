
void FUN_020172e8(int param_1,int *param_2)

{
  (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
  *(int **)(param_1 + 0x20) = param_2;
  (**(code **)(*param_2 + 8))();
  return;
}

