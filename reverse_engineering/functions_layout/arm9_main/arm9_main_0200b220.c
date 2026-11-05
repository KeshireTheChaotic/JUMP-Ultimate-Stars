
void FUN_0200b220(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)(*param_1 + 0xc))();
    FUN_0200b23c(param_1);
  }
  return;
}

