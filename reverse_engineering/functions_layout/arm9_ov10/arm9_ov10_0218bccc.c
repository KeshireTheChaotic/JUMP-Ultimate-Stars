
undefined4 FUN_0218bccc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < 5) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (iVar1 == 4) {
        *(undefined4 *)(param_1 + 0x14) = 1;
      }
      FUN_0218a4f0(param_1);
    }
    else {
      FUN_0218a4f0();
      iVar1 = FUN_0218a304(param_1,param_2,0,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  else if (iVar1 != 7) {
    FUN_0218a4f0();
    iVar1 = FUN_0218a200(param_1,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

