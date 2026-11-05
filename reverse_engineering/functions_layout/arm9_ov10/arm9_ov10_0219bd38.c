
undefined4 FUN_0219bd38(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_0214ccf8 == 0) {
    return 0;
  }
  iVar1 = FUN_0219caf4();
  if (iVar1 != 0xff) {
    iVar2 = FUN_0219b14c();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(DAT_0214ccf8 + 0x1bd8);
    }
    if (iVar2 != 0 && iVar3 != 0) {
      uVar4 = func_0x021cbfe4(iVar3,iVar1);
      return uVar4;
    }
  }
  return 0;
}

