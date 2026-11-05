
int FUN_02181d48(int *param_1)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) {
    return 2;
  }
  if (*(int *)(iVar1 + 0x108) != 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x1d8) == 4) {
    FUN_0218912c(param_1,s_The_connection_has_already_been_d_021a4d88);
    return 2;
  }
  iVar1 = FUN_02182a5c();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

