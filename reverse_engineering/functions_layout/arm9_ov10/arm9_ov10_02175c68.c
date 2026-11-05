
int FUN_02175c68(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return -1;
  }
  iVar1 = FUN_02004d14(param_3,param_4);
  if (iVar1 == 0) {
    return -1;
  }
  do {
    uVar2 = FUN_02004b04(param_1);
    iVar3 = FUN_02004cec(iVar1 + 1,param_1,uVar2);
    if ((iVar3 == 0) && (iVar3 = FUN_02004b04(param_1), param_4 == *(char *)(iVar3 + iVar1 + 1))) {
      iVar1 = FUN_02004d14(iVar1 + 1,param_4);
      if (iVar1 == 0) {
        return -1;
      }
      iVar3 = FUN_02004d14(iVar1 + 1,param_4);
      if (iVar3 == 0) {
        iVar3 = FUN_02004b04(iVar1 + 1);
      }
      else {
        iVar3 = iVar3 - (iVar1 + 1);
      }
      FUN_02004b94(param_2,iVar1 + 1,iVar3);
      *(undefined1 *)(param_2 + iVar3) = 0;
      return iVar3;
    }
    iVar1 = FUN_02004d14(iVar1 + 1,param_4);
    if (iVar1 == 0) {
      return -1;
    }
    iVar1 = FUN_02004d14(iVar1 + 1,param_4);
  } while (iVar1 != 0);
  return -1;
}

