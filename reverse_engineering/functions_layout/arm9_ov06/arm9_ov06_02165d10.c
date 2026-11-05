
void FUN_02165d10(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
  uVar1 = *(uint *)(iVar2 + 0x34);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xfffffffd;
  }
  else {
    uVar1 = uVar1 | 2;
  }
  *(uint *)(iVar2 + 0x34) = uVar1;
  return;
}

