
undefined4 FUN_0217961c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 0x2f4) == 0) {
    return 0;
  }
  iVar2 = 0;
  iVar1 = FUN_02178448();
  if (0 < *(int *)(iVar1 + 0x33c)) {
    do {
      iVar1 = FUN_02178448();
      iVar1 = FUN_02177f7c(*(undefined1 *)(iVar1 + iVar2 + 0x2fc));
      if ((0 < iVar1) && (iVar1 == param_1)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_02178448();
    } while (iVar2 < *(int *)(iVar1 + 0x33c));
  }
  return 0;
}

