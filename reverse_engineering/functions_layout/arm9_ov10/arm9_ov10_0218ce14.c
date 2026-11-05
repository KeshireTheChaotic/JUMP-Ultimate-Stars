
int FUN_0218ce14(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_021a8180 == 0) {
    return 0;
  }
  iVar2 = 0;
  iVar1 = FUN_0200131c();
  if (0 < iVar1) {
    do {
      iVar1 = FUN_020012d8(DAT_021a8180,iVar2);
      if (*(int *)(iVar1 + 8) == param_1) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_0200131c(DAT_021a8180);
    } while (iVar2 < iVar1);
  }
  return 0;
}

