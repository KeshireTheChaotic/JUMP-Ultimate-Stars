
int FUN_02182ba0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  iVar2 = *param_1;
  iVar1 = FUN_021875f8(param_1,param_2,&local_10);
  if (iVar1 == 0) {
    FUN_0218912c(param_1,s_Invalid_profile__021a50dc);
    return 2;
  }
  if (*(int *)(local_10 + 0x10) == 0) {
    FUN_0218912c(param_1,s_Invalid_profile__021a50dc);
    return 2;
  }
  iVar1 = FUN_021835ac(param_1);
  if (iVar1 == 0) {
    *(int *)(local_10 + 0x14) = *(int *)(local_10 + 0x14) + -1;
    if ((*(int *)(iVar2 + 0x100) == 0) && (*(int *)(local_10 + 0x14) < 1)) {
      FUN_02175814(*(undefined4 *)(local_10 + 0x10));
      *(undefined4 *)(local_10 + 0x10) = 0;
      iVar1 = FUN_021874c0(local_10);
      if (iVar1 != 0) {
        FUN_021875c0(param_1,local_10);
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

