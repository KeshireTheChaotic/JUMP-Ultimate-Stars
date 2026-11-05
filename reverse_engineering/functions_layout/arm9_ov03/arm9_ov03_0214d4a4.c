
int FUN_0214d4a4(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int local_18;
  
  local_18 = param_4;
  FUN_0214cf8c();
  FUN_020329ec(param_2);
  iVar1 = FUN_0214d47c();
  local_18 = param_4 << 0xc;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  FUN_0214d52c(iVar1,&local_18);
  FUN_02023894(*(undefined4 *)(iVar1 + 4),param_3 | param_2,0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_0214cfc8();
  return iVar1;
}

