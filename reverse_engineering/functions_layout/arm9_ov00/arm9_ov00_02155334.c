
int FUN_02155334(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int local_18;
  int iStack_14;
  
  iStack_14 = param_4;
  FUN_0214ed48(param_2);
  if (param_4 == 0) {
    FUN_020329d4();
    iVar1 = FUN_0214ed84();
  }
  else {
    FUN_020329ec(param_4);
    iVar1 = FUN_0214ed84();
  }
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  local_18 = param_3 << 0xc;
  FUN_0214eed0(iVar1,&local_18);
  if (param_1 != 0) {
    FUN_02023894(*(undefined4 *)(iVar1 + 4),param_1,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_0214edac();
  return iVar1;
}

