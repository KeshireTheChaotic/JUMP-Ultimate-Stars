
int FUN_02166b14(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar1 = -1;
  iVar3 = 0;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x158) & 0xf;
  do {
    if ((uVar2 & 1) != 0) {
      iVar1 = iVar3;
    }
    iVar3 = iVar3 + 1;
    uVar2 = uVar2 >> 1;
  } while (iVar3 < 4);
  return iVar1;
}

