
void FUN_02155220(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x10);
  if (iVar1 != 0) {
    if (iVar2 == 0) {
      FUN_02023894(*(undefined4 *)(iVar1 + 4),param_2,0,param_4,param_4);
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + *(int *)(param_1 + 0x30) * 4 + 0x10) + 4)
                             + 0x68) + 0x6c))();
      return;
    }
    if (iVar2 == 1) {
      iVar1 = 1;
      do {
        iVar3 = param_1 + iVar1 * 4;
        iVar2 = *(int *)(iVar3 + 0x10);
        if (iVar2 != 0) {
          FUN_02023894(*(undefined4 *)(iVar2 + 4),param_2,0);
          (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x68) + 0x6c))();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 4);
      return;
    }
    if (iVar2 != 4) {
      return;
    }
    iVar1 = 4;
    do {
      iVar3 = param_1 + iVar1 * 4;
      iVar2 = *(int *)(iVar3 + 0x10);
      if (iVar2 != 0) {
        FUN_02023894(*(undefined4 *)(iVar2 + 4),param_2,0);
        (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + 0x10) + 4) + 0x68) + 0x6c))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
  }
  return;
}

