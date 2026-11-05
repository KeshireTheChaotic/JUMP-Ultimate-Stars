
void FUN_02165ba4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_0200d12c(param_1,10,param_3,param_4,param_4);
  if (iVar1 == 0 && param_4 == 0) {
    (**(code **)(**(int **)(param_2 + 4) + 0xd8))(*(int **)(param_2 + 4),0);
  }
  else {
    FUN_02023894(*(undefined4 *)(param_2 + 4),param_5 + iVar1,0);
    (**(code **)(**(int **)(*(int *)(param_2 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(param_2 + 4) + 0xd8))(*(int **)(param_2 + 4),1);
  }
  (**(code **)(**(int **)(param_3 + 4) + 0xd8))(*(int **)(param_3 + 4),1);
  FUN_02023894(*(undefined4 *)(param_3 + 4),param_5 + param_1 + iVar1 * -10,0);
  (**(code **)(**(int **)(*(int *)(param_3 + 4) + 0x68) + 0x6c))();
  return;
}

