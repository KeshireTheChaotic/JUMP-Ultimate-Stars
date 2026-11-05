
void FUN_0219de40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0219caf4();
  iVar2 = iVar1;
  if (iVar1 != 0xff) {
    iVar2 = *(int *)(DAT_0214ccf8 + 0x1bd8);
  }
  if (iVar1 != 0xff && iVar2 != 0) {
    func_0x021cc01c(iVar2,iVar1,param_2);
    return;
  }
  return;
}

