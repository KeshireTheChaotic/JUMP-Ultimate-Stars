
void FUN_02157748(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02023894(*(undefined4 *)(*(int *)(iVar1 + 8) + 4),0,0,param_4,param_4);
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 8) + 4) + 0x68) + 0x6c))();
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02157580);
  *(undefined1 *)(iVar1 + 0x11) = 1;
  return;
}

