
void FUN_021655e4(int param_1,int param_2)

{
  short sVar1;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  sVar1 = *(short *)(param_2 + 0x20);
  *(short *)(param_2 + 0x20) = sVar1 + -1;
  if (sVar1 != 0) {
    return;
  }
  *(code **)(param_2 + 0x10) = FUN_02165660;
  if (param_1 != 0) {
    FUN_0207a878(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),*(int *)(param_2 + 0x1c) + 1,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0x6c))();
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  return;
}

