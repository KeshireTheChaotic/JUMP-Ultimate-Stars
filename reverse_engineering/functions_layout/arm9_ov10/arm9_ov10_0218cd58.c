
void FUN_0218cd58(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_0200131c(DAT_021a8180);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_020012d8(DAT_021a8180,iVar2);
      if (param_1 == iVar1) {
        FUN_0200118c(DAT_021a8180,iVar2);
        return;
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_0200131c(DAT_021a8180);
    } while (iVar2 < iVar1);
  }
  return;
}

