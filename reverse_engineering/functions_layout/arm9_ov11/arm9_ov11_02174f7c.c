
void FUN_02174f7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  iVar3 = 0;
  do {
    uVar2 = FUN_021751cc(param_1,(&DAT_0218112c)[iVar3],1);
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0x28) = uVar2;
  } while (iVar3 < 2);
  return;
}

