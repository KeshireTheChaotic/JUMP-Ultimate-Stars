
void FUN_0215eda8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  (**(code **)(**(int **)(param_1 + 0x38) + 8))();
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x28);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x20) + 4) + 0xc))();
  (**(code **)(**(int **)(*(int *)(param_1 + 0x24) + 4) + 0xc))();
  iVar2 = 0;
  do {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(param_1 + iVar2 * 0x14 + iVar3 * 4 + 0x3c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
  }
  FUN_02075648(*(undefined4 *)(param_1 + 8));
  FUN_02075758(*(undefined4 *)(param_1 + 0x10));
  (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  FUN_0201b244(param_1);
  return;
}

