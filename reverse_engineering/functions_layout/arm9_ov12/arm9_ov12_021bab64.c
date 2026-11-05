
void FUN_021bab64(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 8))();
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0206ae98();
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0206ae98();
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0206ae98();
  }
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  if (*(int *)(param_1 + 0x14) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + 4) + 0xc))();
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 8))();
  FUN_0201b244(param_1);
  return;
}

