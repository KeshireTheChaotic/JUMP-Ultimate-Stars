
int FUN_02001e9c(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_02004b04();
  iVar1 = func_0x0217583c(iVar1 + 1);
  if (iVar1 != 0) {
    FUN_02004b18(iVar1,param_1);
  }
  return iVar1;
}

