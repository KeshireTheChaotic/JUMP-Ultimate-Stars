
int FUN_021cf488(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_18 [16];
  
  iVar1 = FUN_021cf748(param_1,param_2,auStack_18,0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_021cf368(param_1,auStack_18);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = -4;
  }
  return iVar1;
}

