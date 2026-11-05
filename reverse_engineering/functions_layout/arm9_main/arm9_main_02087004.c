
void FUN_02087004(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0208c51c();
  if (iVar1 == 0) {
    iVar1 = FUN_0208c11c();
    if (iVar1 == 0) {
      FUN_0208bf14(param_1,param_2);
      return;
    }
    return;
  }
  iVar1 = func_0x0219b634();
  if (iVar1 == 0) {
    return;
  }
  func_0x0219fea0(param_1,param_2);
  return;
}

