
int FUN_02169150(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,int param_6)

{
  int iVar1;
  int local_18;
  int iStack_14;
  
  iStack_14 = param_4;
  FUN_0214f7f8(param_3);
  FUN_020329ec(param_2);
  iVar1 = FUN_0214d37c();
  local_18 = param_6 << 0xc;
  FUN_0214e6c0(iVar1,&local_18);
  FUN_02023894(*(undefined4 *)(iVar1 + 4),param_1,0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  FUN_0214f864(iVar1,param_5);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  if (param_4 != 0) {
    FUN_0214e688(param_4,iVar1);
    FUN_0214f7c0(iVar1,param_4);
  }
  FUN_0214f834();
  return iVar1;
}

