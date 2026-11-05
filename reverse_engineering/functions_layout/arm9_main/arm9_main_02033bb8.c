
undefined4 FUN_02033bb8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0201033c(param_1,0,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)*DAT_020a0ffc)(DAT_020a0ffc,param_1,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_0200fac4(iVar1);
  }
  (**(code **)(**(int **)(iVar1 + 4) + 0xc))();
  return 1;
}

