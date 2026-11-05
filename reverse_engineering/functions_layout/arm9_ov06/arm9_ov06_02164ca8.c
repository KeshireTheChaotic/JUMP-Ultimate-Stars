
void FUN_02164ca8(int param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_02170498();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4 + 0x30) != 0) {
      FUN_0206ae98();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != 0) {
      FUN_02034d7c();
    }
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_02165490();
  FUN_0201b244(param_1);
  DAT_02172988 = 0;
  return;
}

