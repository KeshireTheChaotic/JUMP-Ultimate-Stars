
void FUN_02165088(int param_1,int param_2)

{
  uint uVar1;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x40);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xbfffffff;
  }
  else {
    uVar1 = uVar1 | 0x40000000;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x40) = uVar1;
  return;
}

