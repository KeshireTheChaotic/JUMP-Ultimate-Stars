
int FUN_0218ca00(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_020019ec();
  if (iVar1 == -1) {
    iVar1 = FUN_02193970(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = *(int *)**(undefined4 **)(iVar1 + 0xc);
  }
  return iVar1;
}

