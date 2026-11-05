
int FUN_021519b4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xa8))();
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0xc0))(*(int **)(param_1 + 4),param_2);
    param_1 = FUN_0214d37c();
  }
  return param_1;
}

