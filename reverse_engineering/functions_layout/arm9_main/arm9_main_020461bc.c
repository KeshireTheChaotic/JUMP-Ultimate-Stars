
void FUN_020461bc(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 4))();
  if (iVar1 == -1) {
    return;
  }
  param_2[3] = 0;
  FUN_02045bd0(param_1,param_2);
  return;
}

