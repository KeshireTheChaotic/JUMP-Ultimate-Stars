
void FUN_02174fbc(int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  iVar2 = 0;
  do {
    iVar1 = FUN_021751cc(param_1,iVar2 + 9,0);
    *(int *)(param_1 + iVar2 * 4 + 0x1c) = iVar1;
    if (iVar1 != 0) {
      FUN_0207b310(iVar1,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}

