
void FUN_0207ae9c(int param_1)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="BattleCol.cpp" */
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    FUN_0207b000(param_1);
    iVar1 = *(int *)(param_1 + 8);
  }
  (**(code **)(**(int **)(param_1 + 0x94) + 8))();
  FUN_0201b244(param_1);
  return;
}

