
void FUN_021681d8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0203b414(1);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  iVar1 = FUN_020736a4();
  if ((iVar1 == 0x30) || (iVar1 = FUN_020736a4(), iVar1 == 0x31)) {
    FUN_0207367c(8);
  }
  FUN_020735e4();
  FUN_0206c5b4();
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4 + 0x34) != 0) {
      FUN_0206b138();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_02074608();
  }
  iVar1 = 0;
  do {
    piVar2 = *(int **)(param_1 + iVar1 * 4 + 0x14);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 8))();
  }
  iVar1 = 0;
  do {
    piVar2 = *(int **)(param_1 + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  FUN_0201b244(param_1);
  return;
}

