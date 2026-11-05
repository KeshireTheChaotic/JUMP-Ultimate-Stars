
void FUN_0200b23c(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  param_1[2] = iVar1 + -1;
  if ((iVar1 + -1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 4))();
  }
  return;
}

