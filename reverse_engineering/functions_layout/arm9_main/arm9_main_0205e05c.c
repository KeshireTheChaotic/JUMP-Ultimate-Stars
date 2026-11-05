
int FUN_0205e05c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[2] < param_1[3]) {
    iVar2 = *param_1;
    iVar1 = FUN_0200d12c(param_1[2] * (param_1[1] - iVar2));
    return iVar2 + iVar1;
  }
  return param_1[1];
}

