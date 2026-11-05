
bool FUN_02174ebc(int param_1,int param_2,int param_3)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  FUN_02175144(param_1,param_3);
  if ((0xc < param_2) && (param_2 - 0xdU < 2)) {
    param_2 = param_2 + (*(char *)(*(int *)(param_1 + 4) + 8) + -3) * 2;
  }
  iVar1 = FUN_021751cc(param_1,param_2,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + param_3 * 4 + 0x14) = iVar1;
    *(char *)(param_1 + param_3 + 0xc0) = (char)param_2;
  }
  return iVar1 != 0;
}

