
int FUN_021583dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,int param_6)

{
  int iVar1;
  int local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  FUN_0214ed48(param_3);
  FUN_020329ec(param_2);
  iVar1 = FUN_0214ed84();
  FUN_02023894(*(undefined4 *)(iVar1 + 4),param_1,0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  FUN_02151170(iVar1,param_4);
  local_18 = param_6 << 0xc;
  FUN_0214eed0(iVar1,&local_18);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  if (param_5 != 0) {
    FUN_0214f3e0(iVar1);
    FUN_021552fc(param_5,iVar1);
  }
  FUN_0214edac();
  return iVar1;
}

