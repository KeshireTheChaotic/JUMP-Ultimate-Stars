
undefined4 FUN_02182024(int *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  char local_418 [1032];
  
  pcVar1 = local_418;
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
    FUN_0218912c(param_1,s_Invalid_reason__021a4e7c);
    return 2;
  }
  FUN_02189478(local_418,param_3,0x401);
  if (local_418[0] != '\0') {
    do {
      if (*pcVar1 == '\\') {
        *pcVar1 = '/';
      }
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
  }
  FUN_02183b94(param_1,iVar2 + 500,s__addbuddy__021a4e8c);
  FUN_02183b94(param_1,iVar2 + 500,s__sesskey__021a4db8);
  FUN_02183b70(param_1,iVar2 + 500,*(undefined4 *)(iVar2 + 0x198));
  FUN_02183b94(param_1,iVar2 + 500,s__newprofileid__021a4e98);
  FUN_02183b70(param_1,iVar2 + 500,param_2);
  FUN_02183b94(param_1,iVar2 + 500,s__reason__021a4ea8);
  FUN_02183b94(param_1,iVar2 + 500,local_418);
  FUN_02183b94(param_1,iVar2 + 500,s__final__021a4dc4);
  return 0;
}

