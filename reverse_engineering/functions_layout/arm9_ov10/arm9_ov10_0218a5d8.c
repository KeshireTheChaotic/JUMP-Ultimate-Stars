
undefined4 FUN_0218a5d8(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    return 1;
  }
  if (((uint)(param_2 - *(int *)(param_1 + 0x94)) < 0x65) || (iVar1 = FUN_0218abe0(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

