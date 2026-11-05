
void FUN_02174e1c(int param_1)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  while (iVar1 != 0) {
    FUN_02175008(*(undefined4 *)(iVar1 + 8));
    FUN_02037c24(param_1 + 0x14,iVar1);
    FUN_0201b244(iVar1);
    iVar1 = *(int *)(param_1 + 0x14);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  while (iVar1 != 0) {
    FUN_02175008(*(undefined4 *)(iVar1 + 8));
    FUN_02037c24(param_1 + 0x1c,iVar1);
    FUN_0201b244(iVar1);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 8))();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_0201b268(*(undefined4 *)(param_1 + 8));
  FUN_0201b244(param_1);
  return;
}

