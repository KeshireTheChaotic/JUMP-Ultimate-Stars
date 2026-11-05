
void FUN_0215b760(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0206c5b4();
  FUN_0215cb48(param_1 + 0x44);
  FUN_0215cb48(param_1 + 0xa0);
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 8))();
  }
  if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa0) + 8))();
  }
  FUN_0215cb48(param_1 + 0xfc);
  FUN_0215cb48(param_1 + 0x158);
  if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xfc) + 8))();
  }
  if (*(int **)(param_1 + 0x158) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x158) + 8))();
  }
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x30);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 0xc))();
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 8))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 8))();
  }
  FUN_0201b244(param_1);
  return;
}

