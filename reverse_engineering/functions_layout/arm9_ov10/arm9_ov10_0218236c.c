
undefined4 FUN_0218236c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 2;
  }
  if ((param_2 < 0) || (5 < param_2)) {
    FUN_0218912c(param_1,s_Invalid_func__021a4eb8);
    return 2;
  }
  iVar1 = *param_1 + param_2 * 8;
  *(undefined4 *)(iVar1 + 0x1a4) = param_3;
  *(undefined4 *)(iVar1 + 0x1a8) = param_4;
  return 0;
}

