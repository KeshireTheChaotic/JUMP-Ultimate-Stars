
undefined4 FUN_02078ad0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x17;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*param_1 != *param_2) break;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return 1;
}

