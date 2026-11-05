
int FUN_0215cb64(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int local_28;
  int local_24 [3];
  
  local_24[2] = param_4;
  FUN_020329ec(param_2);
  iVar1 = FUN_0214d47c();
  local_24[1] = 0x60000;
  FUN_0214d52c(iVar1,local_24 + 1);
  FUN_02023894(*(undefined4 *)(iVar1 + 4),param_2 + param_3,0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  local_24[0] = param_4 << 0xc;
  local_28 = param_5 << 0xc;
  FUN_0214e990(iVar1,local_24,&local_28);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  return iVar1;
}

