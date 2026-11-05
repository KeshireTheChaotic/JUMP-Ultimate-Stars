
undefined4 FUN_0218b934(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 1) {
    *(undefined4 *)(param_1 + 0xc) = 5;
    iVar1 = FUN_0218a304(param_1,0,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  iVar1 = FUN_0218bcc0();
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

