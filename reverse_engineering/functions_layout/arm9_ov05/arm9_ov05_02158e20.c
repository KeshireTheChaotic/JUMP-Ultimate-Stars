
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02158e20(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_0215ee44(param_1 + 0x4b8);
  *(undefined1 **)(param_1 + 0x208) = &LAB_02159094;
  *(undefined4 *)(param_1 + 0x204) = 0;
  (**(code **)(**(int **)(param_1 + 0x1ec) + 8))();
  if (*(int *)(param_1 + 0x1fc) != 0) {
    FUN_0206ae98();
  }
  if (*(int *)(param_1 + 0x200) != 0) {
    FUN_0206ae98();
  }
  (**(code **)(**(int **)(param_1 + 0x18c) + 8))();
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x198);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  (**(code **)(**(int **)(*(int *)(param_1 + 0x194) + 4) + 0xc))();
  (**(code **)(**(int **)(param_1 + 0x1a0) + 8))();
  (**(code **)(**(int **)(param_1 + 0x1a4) + 8))();
  (**(code **)(**(int **)(param_1 + 0x48) + 8))();
  if (*(int *)(param_1 + 0x180) != 0) {
    FUN_0206ae98();
  }
  (**(code **)(**(int **)(param_1 + 0x15c) + 8))();
  iVar2 = 0;
  do {
    (**(code **)(**(int **)(param_1 + iVar2 * 4 + 0x170) + 8))();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  (**(code **)(**(int **)(param_1 + 0x134) + 8))();
  (**(code **)(**(int **)(param_1 + 0x148) + 8))();
  (**(code **)(**(int **)(param_1 + 0x158) + 8))();
  iVar2 = 0;
  do {
    (**(code **)(**(int **)(param_1 + iVar2 * 4 + 0x14c) + 8))();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf8) + 8))();
  }
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0xfc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  (**(code **)(**(int **)(param_1 + 0x88) + 8))();
  (**(code **)(**(int **)(param_1 + 0x4c) + 8))();
  (**(code **)(**(int **)(param_1 + 100) + 8))();
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  (**(code **)(**(int **)(param_1 + 0x44) + 8))();
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x34);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_0214cde4(*(undefined4 *)(param_1 + 8));
  FUN_02078f88(*(undefined4 *)(param_1 + 4));
  (**(code **)(**(int **)(param_1 + 0x30) + 8))();
  FUN_0201b244(param_1);
  func_0x021b65cc();
  return;
}

