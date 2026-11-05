
int FUN_02182c24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_1c [2];
  
  iVar1 = FUN_02186c88();
  if (iVar1 == 0) {
    iVar1 = FUN_021875f8(param_1,param_2,local_1c);
    if (((iVar1 == 0) || (*(int *)(local_1c[0] + 8) == 0)) ||
       (*(int *)(*(int *)(local_1c[0] + 8) + 0x14) == 0)) {
      iVar1 = FUN_02182cb8(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    iVar1 = FUN_02186c14(param_1,param_2,1);
    if (iVar1 == 0) {
      return 1;
    }
    if (*(int *)(local_1c[0] + 0x18) == 0) {
      iVar2 = FUN_02186bdc(param_1,iVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    else {
      iVar2 = FUN_02186ae4(param_1,iVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  iVar1 = FUN_021869f8(param_1,iVar1,param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

