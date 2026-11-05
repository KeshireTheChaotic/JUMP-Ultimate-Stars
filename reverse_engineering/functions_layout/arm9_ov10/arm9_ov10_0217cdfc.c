
undefined4 FUN_0217cdfc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_02178448();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < param_2) {
    iVar3 = 0;
    do {
      iVar2 = FUN_02178448();
      if (param_1 == *(int *)(iVar2 + iVar3 + 0xf4)) {
        FUN_0217cc80(iVar1,param_2);
        return 1;
      }
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

