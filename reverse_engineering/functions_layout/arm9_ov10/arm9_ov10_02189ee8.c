
undefined4 FUN_02189ee8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0217583c(param_2);
  *param_1 = iVar1;
  if (*param_1 == 0) {
    return 0;
  }
  param_1[1] = param_2;
  return 1;
}

