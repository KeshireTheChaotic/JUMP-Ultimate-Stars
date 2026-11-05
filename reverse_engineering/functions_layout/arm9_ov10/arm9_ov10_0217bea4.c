
int FUN_0217bea4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02004d14(param_2,0);
  iVar2 = 0;
  if (0 < param_3) {
    do {
      param_2 = FUN_02004d14(param_2,0x2f);
      if (param_2 == 0) {
        return -1;
      }
      param_2 = param_2 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  iVar2 = FUN_02004d14(param_2,0x2f);
  if (iVar2 == 0) {
    iVar2 = iVar1;
  }
  if (param_2 == iVar2) {
    return -1;
  }
  iVar2 = iVar2 - param_2;
  FUN_02051890(param_2,param_1,iVar2);
  *(undefined1 *)(param_1 + iVar2) = 0;
  return iVar2;
}

