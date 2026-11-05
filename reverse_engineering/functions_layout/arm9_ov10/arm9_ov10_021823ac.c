
undefined4 FUN_021823ac(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 2;
  }
  if (*(int *)(*param_1 + 0x108) == 0) {
    uVar1 = FUN_0218241c(param_1,0);
    return uVar1;
  }
  return 0;
}

