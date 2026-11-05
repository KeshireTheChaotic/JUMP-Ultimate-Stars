
undefined4 FUN_0214d0c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0200d12c(param_2,2);
  iVar1 = FUN_0214f2f8();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_0214f2f8(param_2);
  if (iVar2 == 0) {
    FUN_0214f2e4(iVar1);
    return 0xffffffff;
  }
  iVar3 = 0;
  do {
    FUN_0214d07c(iVar3,iVar1,param_2,param_3,param_4);
    FUN_0214d050(iVar1,param_1,param_2);
    FUN_0214d014(param_1,param_2,iVar2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  FUN_0214f2e4(iVar1);
  FUN_0214f2e4(iVar2);
  return 0;
}

