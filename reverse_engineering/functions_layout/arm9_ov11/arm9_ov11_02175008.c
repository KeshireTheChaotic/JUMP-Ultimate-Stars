
void FUN_02175008(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 8))();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_02176bfc();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x3c) + 4) + 0xc))();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  iVar3 = 0;
  do {
    FUN_02175144(param_1,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4 + 0x1c) != 0) {
      iVar1 = FUN_02083ab8();
      FUN_0207b000(*(undefined4 *)(iVar1 + 0xec),*(undefined4 *)(param_1 + iVar3 * 4 + 0x1c));
      *(undefined4 *)(param_1 + iVar3 * 4 + 0x1c) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4 + 0x28) != 0) {
      iVar1 = FUN_02083ab8();
      FUN_0207b000(*(undefined4 *)(iVar1 + 0xec),*(undefined4 *)(param_1 + iVar3 * 4 + 0x28));
      *(undefined4 *)(param_1 + iVar3 * 4 + 0x28) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  iVar3 = 0;
  do {
    piVar2 = *(int **)(param_1 + iVar3 * 4 + 0x34);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
      *(undefined4 *)(param_1 + iVar3 * 4 + 0x34) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}

