
undefined4 FUN_02181b3c(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
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
  if (param_3 == 0) {
    FUN_0218912c(param_1,s_Invalid_message__021a4ddc);
    return 2;
  }
  uVar1 = FUN_02182c24(param_1,param_2,1);
  return uVar1;
}

