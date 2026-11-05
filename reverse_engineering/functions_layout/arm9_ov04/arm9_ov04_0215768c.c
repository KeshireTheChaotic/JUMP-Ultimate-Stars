
void FUN_0215768c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02156d8c(*(undefined4 *)(iVar2 + 8),0,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(iVar2 + 0x10) == '\0') {
    FUN_02023894(*(undefined4 *)(*(int *)(iVar2 + 8) + 4),4,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 8) + 4) + 0x68) + 0x6c))();
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02157710);
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02157748);
  return;
}

