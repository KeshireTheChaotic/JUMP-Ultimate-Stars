
int FUN_020334a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0201033c();
  if (iVar1 != 0) {
    return *(int *)(iVar1 + 4);
  }
  iVar1 = (**(code **)(*DAT_020a0ffc + 4))(DAT_020a0ffc,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_02033524(iVar1);
  if (*(int *)(iVar1 + 0x20) != 0) {
    FUN_0201ac08(*(int *)(iVar1 + 0x20),param_1);
  }
  return iVar1;
}

