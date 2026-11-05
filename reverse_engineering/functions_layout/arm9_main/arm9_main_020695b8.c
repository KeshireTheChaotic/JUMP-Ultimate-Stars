
undefined4 FUN_020695b8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = FUN_02069c44();
  iVar2 = FUN_02069c44(param_2);
  if (iVar1 != iVar2) {
    return 0;
  }
  if (iVar1 == 3) {
    iVar1 = FUN_02069c94(param_1);
    iVar2 = FUN_02069c94(param_2);
    if (iVar1 == iVar2) {
      return 1;
    }
    return 0;
  }
  if (iVar1 == 1) {
    lVar3 = FUN_02069cac(param_1);
    lVar4 = FUN_02069cac(param_2);
    if (lVar3 == lVar4) {
      iVar1 = FUN_02069ca8(param_1);
      iVar2 = FUN_02069ca8(param_2);
      if (iVar1 == iVar2) {
        return 1;
      }
    }
    return 0;
  }
  if (iVar1 != 2) {
    return 0;
  }
  lVar3 = FUN_02069c98(param_1);
  lVar4 = FUN_02069c98(param_2);
  if (lVar3 == lVar4) {
    return 1;
  }
  return 0;
}

