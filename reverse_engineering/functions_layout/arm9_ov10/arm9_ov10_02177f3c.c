
int FUN_02177f3c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_021a75a4 == 0) || (param_1 == 0)) {
    return -1;
  }
  iVar2 = 0;
  if (0 < *(int *)(DAT_021a75a4 + 0x14)) {
    do {
      iVar1 = FUN_02177f7c(iVar2);
      if (param_1 == iVar1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_021a75a4 + 0x14));
  }
  return -1;
}

