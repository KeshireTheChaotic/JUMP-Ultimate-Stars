
undefined4 FUN_02181f44(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  if ((param_1 == (int *)0x0) || (iVar2 = *param_1, iVar2 == 0)) {
    return 2;
  }
  if (*(int *)(iVar2 + 0x108) != 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x1d8) == 4) {
    FUN_0218912c(param_1,s_The_connection_has_already_been_d_021a4d88);
    return 2;
  }
  iVar1 = FUN_021875f8(param_1,param_2,&local_10);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(local_10 + 0x14) = *(int *)(local_10 + 0x14) + -1;
  if ((*(int *)(iVar2 + 0x100) == 0) && (*(int *)(local_10 + 0x14) < 1)) {
    FUN_02175814(*(undefined4 *)(local_10 + 0x10));
    *(undefined4 *)(local_10 + 0x10) = 0;
    iVar2 = FUN_021874c0(local_10);
    if (iVar2 != 0) {
      FUN_021875c0(param_1,local_10);
    }
  }
  return 0;
}

