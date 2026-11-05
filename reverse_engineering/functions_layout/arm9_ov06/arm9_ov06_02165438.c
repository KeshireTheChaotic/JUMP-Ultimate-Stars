
void FUN_02165438(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar1 = param_2[1];
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x50);
  piVar2[3] = *param_2 << 4;
  piVar2[4] = iVar1 << 4;
  piVar2[5] = 0;
  if (*(byte *)(piVar2 + 9) != (*(byte *)(piVar2 + 9) | 1)) {
    (**(code **)(*piVar2 + 0x18))();
  }
  *(byte *)(piVar2 + 9) = *(byte *)(piVar2 + 9) | 0x31;
  return;
}

