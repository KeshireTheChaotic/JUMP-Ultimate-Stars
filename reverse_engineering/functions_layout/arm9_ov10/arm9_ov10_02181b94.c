
undefined4 FUN_02181b94(int *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char local_218 [256];
  char local_118 [260];
  
  pcVar1 = local_218;
  if ((param_1 == (int *)0x0) || (iVar3 = *param_1, iVar3 == 0)) {
    return 2;
  }
  if (*(int *)(iVar3 + 0x108) != 0) {
    return 0;
  }
  if (*(int *)(iVar3 + 0x1d8) == 4) {
    FUN_0218912c(param_1,s_The_connection_has_already_been_d_021a4d88);
    return 2;
  }
  if (param_3 == 0) {
    FUN_0218912c(param_1,s_Invalid_statusString__021a4df0);
    return 2;
  }
  if (param_4 == 0) {
    FUN_0218912c(param_1,s_Invalid_locationString__021a4e08);
    return 2;
  }
  FUN_02189478(local_218,param_3,0x100);
  if (local_218[0] != '\0') {
    do {
      if (*pcVar1 == '\\') {
        *pcVar1 = '/';
      }
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
  }
  FUN_02189478(local_118,param_4,0x100);
  pcVar1 = local_118;
  while (local_118[0] != '\0') {
    if (*pcVar1 == '\\') {
      *pcVar1 = '/';
    }
    pcVar1 = pcVar1 + 1;
    local_118[0] = *pcVar1;
  }
  if (((param_2 == *(int *)(iVar3 + 0x214)) &&
      (iVar2 = FUN_02004c2c(local_218,iVar3 + 0x218), iVar2 == 0)) &&
     (iVar2 = FUN_02004c2c(local_118,iVar3 + 0x318), iVar2 == 0)) {
    return 0;
  }
  *(int *)(iVar3 + 0x214) = param_2;
  FUN_02189478(iVar3 + 0x218,local_218,0x100);
  FUN_02189478(iVar3 + 0x318,local_118,0x100);
  FUN_02183b94(param_1,iVar3 + 500,s__status__021a4e20);
  FUN_02183b70(param_1,iVar3 + 500,param_2);
  FUN_02183b94(param_1,iVar3 + 500,s__sesskey__021a4db8);
  FUN_02183b70(param_1,iVar3 + 500,*(undefined4 *)(iVar3 + 0x198));
  FUN_02183b94(param_1,iVar3 + 500,s__statstring__021a4e2c);
  FUN_02183b94(param_1,iVar3 + 500,local_218);
  FUN_02183b94(param_1,iVar3 + 500,s__locstring__021a4e3c);
  FUN_02183b94(param_1,iVar3 + 500,local_118);
  FUN_02183b94(param_1,iVar3 + 500,s__final__021a4dc4);
  return 0;
}

