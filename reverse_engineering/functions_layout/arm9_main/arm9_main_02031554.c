
undefined4 FUN_02031554(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02031778(param_1 + 4,param_1);
  if (param_1[0x89] == 0) {
    iVar2 = param_1[0x91];
    if (iVar2 != 0) {
      iVar1 = 0x7fffffff;
    }
    if ((iVar2 != 0 && iVar2 != iVar1) && (param_1[0x91] = iVar2 + -1, iVar2 + -1 == 0)) {
      FUN_02031520(param_1);
    }
  }
  else {
    iVar2 = param_1[0x89] + -1;
    param_1[0x89] = iVar2;
    if (iVar2 == 0) {
      if (iVar1 == 0) {
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 4))();
        }
        return 0;
      }
      param_1[0x89] = 1;
    }
  }
  return 1;
}

