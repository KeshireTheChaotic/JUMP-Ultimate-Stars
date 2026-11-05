
undefined4 FUN_02045b08(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 4))();
  if (iVar1 == -1) {
    uVar2 = FUN_02045bbc(param_1,param_2);
    uVar2 = FUN_02045e9c(param_1,uVar2);
    FUN_02045fa0(param_1,param_2,uVar2);
    return 1;
  }
  if (param_2[3] != -1) {
    param_2[3] = DAT_02093c24;
  }
  *(int *)(param_2[2] + 4) = param_2[1];
  *(int *)(param_2[1] + 8) = param_2[2];
  param_2[2] = *(int *)(*param_1 + 8);
  param_2[1] = *param_1;
  *(int **)(*(int *)(*param_1 + 8) + 4) = param_2;
  *(int **)(*param_1 + 8) = param_2;
  return 0;
}

