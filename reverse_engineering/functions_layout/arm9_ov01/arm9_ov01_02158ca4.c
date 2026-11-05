
int FUN_02158ca4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_18;
  int iStack_14;
  
                    /* JUS-TAG source_file_inferred="DeckSelect.cpp" */
  iStack_14 = param_4;
  FUN_0214f7f8(param_3);
  if (param_2 == 0) {
    FUN_020329d4();
    iVar1 = FUN_0214d37c();
  }
  else {
    FUN_020329ec(param_2);
    iVar1 = FUN_0214d37c();
  }
  if (param_1 != 0) {
    FUN_02023894(*(undefined4 *)(iVar1 + 4),param_1,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  }
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  local_18 = param_4 << 0xc;
  FUN_0214e6c0(iVar1,&local_18);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_0214f834();
  return iVar1;
}

