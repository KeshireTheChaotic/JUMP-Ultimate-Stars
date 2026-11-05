
void FUN_02078f88(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x78);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  (**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
  FUN_0207974c(param_1);
  (**(code **)(**(int **)(param_1 + 200) + 8))();
  (**(code **)(**(int **)(param_1 + 8) + 8))();
  FUN_0201b244(param_1);
  return;
}

