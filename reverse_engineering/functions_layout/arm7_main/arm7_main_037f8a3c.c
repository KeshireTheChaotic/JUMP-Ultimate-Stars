
int FUN_037f8a3c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_3 + 10) == -0x40e3) {
    uVar2 = FUN_037fbc10(0x1000000);
    iVar1 = FUN_037f882c(param_1,param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_037f8ab0(param_2,param_3);
    }
    FUN_037fbc4c(uVar2);
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

