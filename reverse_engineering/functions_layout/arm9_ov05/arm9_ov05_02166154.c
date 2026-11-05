
void FUN_02166154(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0203b424(2);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  iVar1 = FUN_0203b424(0);
  *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x956) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_02074504();
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_0214cde4();
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_0214cde4();
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    FUN_02078f88();
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_0207698c();
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 8))();
  }
  iVar1 = 0;
  do {
    piVar2 = *(int **)(param_1 + iVar1 * 4 + 0x10);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  FUN_0201b244(param_1);
  return;
}

