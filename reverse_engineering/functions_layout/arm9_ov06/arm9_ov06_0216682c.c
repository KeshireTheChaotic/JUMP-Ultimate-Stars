
void FUN_0216682c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar1 = FUN_02166b14();
  FUN_0207342c(0x7a,0x53);
  FUN_02165e88(DAT_02172960,iVar1,1);
  iVar1 = *(int *)(DAT_02172960 + iVar1 * 4 + 0xdc);
  uVar2 = FUN_0206c7fc(0x220011,0,0,0);
  FUN_021544c8(uVar2,*(undefined4 *)(*(int *)(iVar1 + 0x1a8) + 8));
  *(char *)(*(int *)(param_2 + 0xc) + 0x152) = *(char *)(*(int *)(param_2 + 0xc) + 0x152) + -1;
  FUN_02083648(param_1);
  return;
}

