
undefined4 FUN_0218bb98(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xc) != 5) && (*(int *)(param_1 + 0xc) != 6)) {
    return 1;
  }
  iVar1 = FUN_0200131c(*(undefined4 *)(param_1 + 0x9c));
  if (iVar1 == 0) {
    iVar1 = FUN_0218a278(param_1,param_2,param_3,0);
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  iVar1 = FUN_0218a048(param_1,0,param_2,param_3,0);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

