
int FUN_0214f8b0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int local_18;
  int iStack_14;
  
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
  local_18 = param_5 << 0xc;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  FUN_0214e6c0(iVar1,&local_18);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  if (param_4 != 0) {
    FUN_0214f7c0(iVar1,param_4);
    FUN_0214e688(param_4,iVar1);
  }
  FUN_0214f834();
  return iVar1;
}

