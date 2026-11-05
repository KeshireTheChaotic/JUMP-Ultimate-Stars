
void FUN_0218bd54(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_0218a888();
    iVar1 = FUN_0218a438(param_1);
    if (iVar1 != 0) {
      FUN_0218c0e4(param_1);
    }
  }
  return;
}

