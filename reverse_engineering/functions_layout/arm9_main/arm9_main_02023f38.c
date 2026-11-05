
undefined4 FUN_02023f38(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x30))();
  if (iVar1 != 0) {
    param_1 = (**(code **)(*param_2 + 0x54))(param_2,param_1);
  }
  return param_1;
}

