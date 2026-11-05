
void FUN_02165528(int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar1 + 0xc);
  FUN_02037c24(iVar2 + 0x15c,iVar1);
  FUN_020517fc(iVar1,0,0x2c);
  *(int *)(iVar1 + 8) = iVar1;
  FUN_02037b98(iVar2 + 0x154,iVar1);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

