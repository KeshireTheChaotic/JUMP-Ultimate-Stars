
undefined4 FUN_0218aa78(int param_1,int *param_2)

{
  int iVar1;
  
  FUN_0218bd2c(*(undefined4 *)(param_1 + 0x50),*param_2 + 5,*(undefined2 *)(param_1 + 0x66));
  iVar1 = FUN_0218a6b8(param_1,*(int *)(param_1 + 0x50) + *param_2,param_2[1]);
  if (iVar1 == 0) {
    return 0;
  }
  param_2[3] = *(int *)(param_1 + 0x88);
  if (*(char *)(*(int *)(param_1 + 0x50) + *param_2 + 2) == '\x02') {
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
  }
  return 1;
}

