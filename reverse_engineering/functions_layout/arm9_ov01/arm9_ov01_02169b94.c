
void FUN_02169b94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02169ad4(param_1,0,param_3,param_4,param_4);
  if (iVar1 != 0) {
    FUN_02023894(*(undefined4 *)(param_1 + 4),0x8ff001,0);
    (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x68) + 0x6c))();
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2169bd1);
    *(undefined4 *)(iVar2 + 0x58) = 2;
  }
  return;
}

