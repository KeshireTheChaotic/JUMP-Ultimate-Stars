
undefined4
FUN_02182188(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,code *param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_218 [129];
  
  if (((param_1 == (int *)0x0) || (iVar2 = *param_1, iVar2 == 0)) || (param_2 == 0)) {
    return 2;
  }
  if (param_5 == (code *)0x0) {
    FUN_0218912c(param_1,s_No_callback__021a4dcc);
    return 2;
  }
  if (*(int *)(iVar2 + 0x108) == 0) {
    if (*(int *)(iVar2 + 0x1d8) == 4) {
      FUN_0218912c(param_1,s_The_connection_has_already_been_d_021a4d88);
      return 2;
    }
    uVar1 = FUN_02185168();
    return uVar1;
  }
  puVar3 = local_218;
  iVar2 = 0x10;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3 = puVar3 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *puVar3 = 0;
  (*param_5)(param_1,local_218,param_6);
  return 0;
}

